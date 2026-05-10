import fs from 'fs';
import { fileURLToPath } from 'url';
import { dirname } from 'path';

const FILE_INPUT_NAME = 'Arma 3 Preset Wolf Squad.html';
const FILE_OUTPUT_NAME = 'Arma 3 Wolf Squad Modlist.html';

function main() {
  const start = Date.now();

  const indexes = {
    firstBlockStart: 0,
    currentBlockStart: 0,
    currentBlockEnd: 0,
  };
  const modMap: { name: string; block: string }[] = [];

  const SCRIPT_DIR = dirname(fileURLToPath(import.meta.url));
  let fileContents = fs.readFileSync(`${SCRIPT_DIR}/${FILE_INPUT_NAME}`).toString();

  // loop through our mods until we run out
  indexes.firstBlockStart = fileContents.search(/ *<tr data-type="ModContainer">/g);
  indexes.currentBlockStart = indexes.firstBlockStart;
  do {
    indexes.currentBlockEnd = fileContents.indexOf('</tr>') + 7; // 6 also gets the newline

    // snip the block out
    const block = fileContents.substring(indexes.currentBlockStart, indexes.currentBlockEnd);
    fileContents = fileContents.replace(block, '');

    // find the mod name of the block and stash the block
    const nameIdxStart = block.indexOf('Name">') + 6;
    const nameIdxEnd = block.indexOf('</td>');
    const name = block.substring(nameIdxStart, nameIdxEnd).toUpperCase();
    modMap.push({ name, block });
    console.log(`Found ${name}`);

    // find the start of the next block and start again
    indexes.currentBlockStart = fileContents.search(/ *<tr data-type="ModContainer">/g);
  } while (indexes.currentBlockStart > 0);

  // rebuild our mod items, but sorted now
  modMap.sort((a, b) => {
    if (a.name == b.name) {
      return 0;
    }
    return a.name < b.name ? -1 : 1;
  });
  let modString = '';
  modMap.forEach((block) => {
    modString += `${block.block}`;
  });

  // and write our now sorted file
  fileContents = fileContents.slice(0, indexes.firstBlockStart) + modString + fileContents.slice(indexes.firstBlockStart + 1);
  try {
    fs.rmSync(`${SCRIPT_DIR}/${FILE_OUTPUT_NAME}`);
  } catch (e) {
    // -4058 is "no such file" which we're okay ignoring.
    if ((e as any)['errno'] != -4058) {
      throw e;
    }
  }
  fs.writeFileSync(`${SCRIPT_DIR}/${FILE_OUTPUT_NAME}`, fileContents);

  const timeTaken = Date.now() - start;
  console.log(`Done [ took ${timeTaken / 1000} seconds | ${modMap.length} mods sorted ]`);
}

main();
