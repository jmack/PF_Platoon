import { parseArgs } from 'node:util';
import { execSync } from 'node:child_process';
import { resolve, join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { stat, mkdir, rename } from 'node:fs/promises';

const ARG_OPTIONS = {
  dir: {
    type: 'string',
    short: 'd',
  },
  generate: {
    type: 'boolean',
    short: 'g',
  },
} as const;

async function build() {
  const { values: args } = parseArgs({
    options: ARG_OPTIONS,
    strict: true,
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
  await new Promise((resolve) => setTimeout(resolve, 5000)); // 5s sleep

  // Rename all our excluded pngs back to normal
  pngsToExclude.forEach(async (file) => {
    const newPath = join(dirRoot, file);
    const oldPath = `${newPath}.excluded`;
    await rename(oldPath, newPath);
  });
}

build();
