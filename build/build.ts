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
  build: {
    type: 'boolean',
    short: 'b',
  },
  generate: {
    type: 'boolean',
    short: 'g',
  },
} as const;

/**
 * Helper to safely extract explicit values passed to boolean flags via process.argv
 */
function getOptionalFlagValue(shortFlag: string, longFlag: string): string | undefined {
  const args = process.argv.slice(2);

  for (let i = 0; i < args.length; i++) {
    const arg = args[i];

    // Check for inline assignment style: --build=BB_Factions or -b=BB_Factions
    if (arg?.startsWith(`${longFlag}=`)) {
      return arg.split('=')[1];
    }
    if (arg?.startsWith(`${shortFlag}=`)) {
      return arg.split('=')[1];
    }

    // Check for standard positional pairing style: -b BB_Factions
    if (arg === shortFlag || arg === longFlag) {
      const nextArg = args[i + 1];
      // Ensure the next item isn't another flag config
      if (nextArg && !nextArg.startsWith('-')) {
        return nextArg;
      }
    }
  }
  return undefined;
}

async function build() {
  const { values: args } = parseArgs({
    options: ARG_OPTIONS,
    strict: false,
  });

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

  const modConfigUrl = pathToFileURL(modConfigPath).href;
  const config = (await import(modConfigUrl)).default;

  if (args.generate) {
    const rawValue = getOptionalFlagValue('-g', '--generate');
    await runGeneratorPipeline(dirRoot, rawValue?.trim());
  }

  if (args.build) {
    const rawValue = getOptionalFlagValue('-b', '--build');
    await runBuildPipeline(dirRoot, config.prefix, rawValue?.trim());
  }
}

/**
 * Scans, filters, and executes dynamic code generators based on project payloads
 */
async function runGeneratorPipeline(dirRoot: string, generateArg: string | undefined) {
  console.log('Scanning for generator payloads ...');

  const payloadFiles = execSync(`git ls-files --cached --others --exclude-standard ":(glob)**/*.generator-payload.ts"`, { cwd: dirRoot, encoding: 'utf-8' })
    .split('\n')
    .map((file) => file.trim())
    .filter((file) => !!file)
    .map((file) => join(dirRoot, file));

  const loadedPayloads: { path: string; payload: GeneratorPayloadDefinition }[] = [];

  for (const file of payloadFiles) {
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

  let payloadsToRun = loadedPayloads;
  const targetName = typeof generateArg === 'string' ? generateArg.trim() : '';
  const isTargetedRun = targetName.length > 0;

  if (isTargetedRun) {
    const query = targetName.toLowerCase();
    payloadsToRun = loadedPayloads.filter((p) => {
      const matchesHeaderName = p.payload.header.name.toLowerCase().includes(query);
      const matchesFileName = p.path.toLowerCase().includes(query);
      return matchesHeaderName || matchesFileName;
    });

    console.log(`Filtering execution queue down to matched target: "${targetName}"`);
  } else {
    console.log(`Discovered ${payloadsToRun.length} total payload(s) to execute globally.`);
  }

  if (payloadsToRun.length === 0 && isTargetedRun) {
    console.error(`ERR: Target generator payload "${generateArg}" was requested but could not be located!`);
    process.exit(1);
  }

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

/**
 * Handles mod packaging, scoped asset toggling, and external AddonBuilder orchestration
 */
async function runBuildPipeline(dirRoot: string, prefix: string, buildFilter: string | undefined) {
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

  const dirContents = await readdir(dirRoot, { withFileTypes: true });
  let addons = dirContents
    .filter((entry) => entry.isDirectory())
    .filter((entry) => entry.name.startsWith(`${prefix}_`))
    .map((entry) => entry.name);

  if (buildFilter !== undefined && buildFilter.length > 0) {
    const buildQuery = buildFilter.toLowerCase();
    addons = addons.filter((addon) => addon.toLowerCase().includes(buildQuery));

    if (addons.length === 0) {
      console.error(`ERR: Target build module matching "${buildFilter}" was requested but could not be located!`);
      process.exit(1);
    }
    console.log(`Filtering build targets down to ${addons.length} matched module(s): [${addons.join(', ')}]`);
  } else {
    console.log(`Executing global compilation phase for all ${addons.length} discovered module(s).`);
  }

  // Collect PNG targets specifically matching our build scope
  const pngsToExclude: string[] = [];
  for (const addon of addons) {
    try {
      const posixAddonPath = addon.replace(/\\/g, '/');
      const pattern = `:(glob)${posixAddonPath}/**/*.png`;

      // 1. Get ONLY clean, tracked files (excludes untracked new files!)
      const trackedPngsRaw = execSync(`git ls-files --cached "${pattern}"`, { cwd: dirRoot, encoding: 'utf-8' });
      const trackedPngs = trackedPngsRaw
        .split('\n')
        .map((file) => file.trim())
        .filter(Boolean);

      // 2. Get files that have active local unstaged modifications
      const modifiedPngsRaw = execSync(`git ls-files --modified "${pattern}"`, { cwd: dirRoot, encoding: 'utf-8' });
      const modifiedPngs = new Set(
        modifiedPngsRaw
          .split('\n')
          .map((file) => file.trim())
          .filter(Boolean)
      );

      // 3. Filter down to assets that are tracked AND completely untouched
      const cleanTrackedPngs = trackedPngs.filter((file) => !modifiedPngs.has(file));

      pngsToExclude.push(...cleanTrackedPngs);
    } catch (err: any) {
      console.warn(`Warning: Failed to extract git files for module ${addon}:`, err.message);
    }
  }

  // Hide assets before binarization begins
  await togglePngExclusions(dirRoot, pngsToExclude, true);

  for (const addon of addons) {
    const buildCommandArgs = [
      join(dirRoot, addon),
      resolve(dirRoot, env.destination),
      `-sign=${env.privKey}`,
      `-include=${resolve(dirRoot, '..', 'build/addonBuilderWhitelist.txt')}`,
      '-binarizeFullLogs',
      '-binarizeAllTextures',
      '-clear',
    ];

    console.log(`Compiling [${addon}]...`);
    try {
      execFileSync(env.addonBuilder, buildCommandArgs, {
        stdio: 'inherit',
        encoding: 'utf-8',
      });
    } catch (err: any) {
      console.error(`ERR: AddonBuilder execution failed for module "${addon}"`);
      // Revert files before terminating due to compilation crash
      await togglePngExclusions(dirRoot, pngsToExclude, false);
      process.exit(1);
    }
  }

  // Restore assets back to normal
  await togglePngExclusions(dirRoot, pngsToExclude, false);
  console.log('Module processing phase completed successfully.\n');
}

/**
 * Atomic file wrapper to easily swap file extensions to and from .excluded states
 */
async function togglePngExclusions(dirRoot: string, files: string[], exclude: boolean) {
  for (const file of files) {
    const base = join(dirRoot, file);
    const oldPath = exclude ? base : `${base}.excluded`;
    const newPath = exclude ? `${base}.excluded` : base;
    try {
      await rename(oldPath, newPath);
    } catch (err: any) {
      console.warn(`Warning: Failed to toggle asset state for ${file}:`, err.message);
    }
  }
}

build();
