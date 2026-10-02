import { parseArgs } from 'node:util';
import { execFileSync, execSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { stat, mkdir, rename, readdir } from 'node:fs/promises';
import env from './env.constants.ts';
import type { GeneratorPayloadDefinition } from './generators/generator.types.ts';
import { GeneratorFactory } from './generators/generator.factory.ts';

const ARG_OPTIONS = {
  dir: {
    type: 'string',
    short: 'd',
  },
  generate: {
    type: 'string',
    short: 'g',
  },
} as const;

async function build() {
  const { values: args } = parseArgs({
    options: ARG_OPTIONS,
    strict: false,
  });

  // Validation
  if (!args.dir) {
    console.error('ERR: No directory was provided!');
    process.exit(1);
  }

  const dirRoot = resolve(`./${args.dir}`);
  const modConfigPath = join(dirRoot, 'mod.ts');
  try {
    await stat(dirRoot);
    await stat(modConfigPath);
  } catch (e: any) {
    if (e.code === 'ENOENT') {
      console.error(`ERR: ${dirRoot} does not exist, or lacks a mod.ts file!`);
    } else {
      console.error(`ERR: Unknown error occurred!`, e);
    }
    process.exit(1);
  }

  // Load module configuration (if present) or throw error
  const modConfigUrl = pathToFileURL(modConfigPath).href;
  const config = (await import(modConfigUrl)).default;

  // Generator run block, if we have the flag declared
  const rawArgs = process.argv.slice(2);
  const hasBareGenerateFlag = rawArgs.includes('--generate') || rawArgs.includes('-g');

  if (hasBareGenerateFlag || args.generate !== undefined) {
    console.log('Scanning for generator payloads ...');

    // Find all files matching the target extension anywhere in the root directory
    const payloadFiles = execSync(`git ls-files --cached --others --exclude-standard ":(glob)**/*.generator-payload.ts"`, { cwd: dirRoot, encoding: 'utf-8' })
      .split('\n')
      .map((file) => file.trim())
      .filter((file) => !!file)
      .map((file) => join(dirRoot, file)); // Map relative git paths to absolute file paths

    const loadedPayloads: { path: string; payload: GeneratorPayloadDefinition }[] = [];

    // Dynamically import all located payloads
    for (const file of payloadFiles) {
      console.log(file);
      try {
        const fileUrl = pathToFileURL(file).href;
        const folderPath = file.slice(0, file.lastIndexOf('\\')) + '\\';
        const payloadModule = (await import(fileUrl)).default;
        if (payloadModule && payloadModule.header) {
          loadedPayloads.push({ path: folderPath, payload: payloadModule as GeneratorPayloadDefinition });
        }
      } catch (err: any) {
        console.warn(`Warning: Failed to import payload file at ${file}:`, err.message);
      }
    }

    // Determine target execution criteria
    let payloadsToRun = loadedPayloads;
    const targetName = typeof args.generate === 'string' ? args.generate.trim() : '';
    const isTargetedRun = targetName.length > 0;

    if (isTargetedRun) {
      const regexPattern =
        '^' +
        targetName
          .replace(/[.+^\${}()|[\]\\]/g, '\\$&') // Escape regex special chars
          .replace(/\*/g, '.*') + // Convert wildcards to regex match-alls
        '\$';
      const filterRegex = new RegExp(regexPattern, 'i'); // 'i' flag for case-insensitive matching

      payloadsToRun = loadedPayloads.filter((p) => filterRegex.test(p.payload.header.name));
      console.log(`Filtering execution queue down to matched target: "${targetName}"`);
    } else {
      console.log(`Discovered ${payloadsToRun.length} total payload(s) to execute globally.`);
    }

    if (payloadsToRun.length === 0 && isTargetedRun) {
      console.error(`ERR: Target generator payload "${args.generate}" was requested but could not be located!`);
      process.exit(1);
    }

    // Process matching payloads sequentially
    for (const payload of payloadsToRun) {
      try {
        console.log(`Running Generator: [${payload.payload.header.name}] (${payload.payload.header.generatorType})`);
        const generatorInstance = await GeneratorFactory.GetGenerator(payload.path, payload.payload);
        await generatorInstance.process();
      } catch (err: any) {
        console.error(`ERR: Pipeline failed execution on generator "${payload.payload.header.name}":`, err.message);
        process.exit(1);
      }
    }
    console.log('Generator pipeline processing phase completed successfully.\n');
  }

  // Create addons folder if it doesn't exist already
  const distFolderPath = `${dirRoot}\\dist`;
  try {
    await stat(distFolderPath);
  } catch (e: any) {
    if (e.code === 'ENOENT') {
      await mkdir(distFolderPath);
    } else {
      console.error(`ERR: Unknown error occurred!`, e);
      process.exit(1);
    }
  }

  // Find all pngs, check if they've been edited (via git), and if not, change their extension to avoid unnessecary rebinarization
  const pngsToExclude = execSync(`git ls-files --cached --others --exclude-standard ":(glob)${config.prefix}_*/**/*.png"`, { cwd: dirRoot, encoding: 'utf-8' })
    .split('\n')
    .map((file) => file.trim())
    .filter((file) => !!file); // remove empty lines

  pngsToExclude.forEach(async (file) => {
    const oldPath = join(dirRoot, file);
    const newPath = `${oldPath}.excluded`;
    await rename(oldPath, newPath);
  });

  // Build
  const dirContents = await readdir(dirRoot, { withFileTypes: true });
  const addons = dirContents
    .filter((entry) => entry.isDirectory())
    .filter((entry) => entry.name.startsWith(`${config.prefix}_`))
    .map((entry) => entry.name);

  for (const addon of addons) {
    const args = [
      join(dirRoot, addon),
      resolve(dirRoot, env.destination),
      `-sign=${env.privKey}`,
      `-include=${resolve(dirRoot, '..', 'build/addonBuilderWhitelist.txt')}`,
      '-binarizeFullLogs',
      '-binarizeAllTextures',
      '-clear',
    ];

    execFileSync(env.addonBuilder, args, {
      stdio: 'inherit',
      encoding: 'utf-8',
    });
  }

  // Rename all our excluded pngs back to normal
  pngsToExclude.forEach(async (file) => {
    const newPath = join(dirRoot, file);
    const oldPath = `${newPath}.excluded`;
    await rename(oldPath, newPath);
  });
}

build();
