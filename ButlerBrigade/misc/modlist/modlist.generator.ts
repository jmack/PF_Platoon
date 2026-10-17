import { readFileSync, rmSync, writeFileSync } from 'node:fs';
import { Generator } from '../../../build/generators/generator.class';

export default class ModlistGenerator extends Generator {
  template = 'Arma 3 Preset ButlerBrigade.html';
  destination = 'Butler Brigade Modlist.html';

  public async process(): Promise<void> {
    const indexes = {
      firstBlockStart: 0,
      currentBlockStart: 0,
      currentBlockEnd: 0,
    };
    const modMap = new Map<string, string>();
    let fileContents = readFileSync(`${this.runPath}\\${this.template}`).toString();

    // Loop through all our mods until we run out
    indexes.firstBlockStart = fileContents.search(/ *<tr data-type="ModContainer">/g);
    indexes.currentBlockStart = indexes.firstBlockStart;
    do {
      indexes.currentBlockEnd = fileContents.indexOf('</tr>') + 7; // 6 also gets the newline

      // Snip our found block out
      const block = fileContents.substring(indexes.currentBlockStart, indexes.currentBlockEnd);
      fileContents = fileContents.replace(block, '');

      // Normalize the mod name and stash the block in our map
      const nameIdxStart = block.indexOf('Name">') + 6;
      const nameIdxEnd = block.indexOf('</td>');
      const name = block.substring(nameIdxStart, nameIdxEnd).toUpperCase();
      modMap.set(name, block);

      // Find the start of the next block and start again
      indexes.currentBlockStart = fileContents.search(/ *<tr data-type="ModContainer">/g);
    } while (indexes.currentBlockStart > 0);

    // Rebuild our mod items, but in sorted order
    const modString = Array.from(modMap) // convert our map to a [key, value][] array
      .sort((a, b) => (a[0] == b[0] ? 0 : a[0] < b[0] ? -1 : 1)) // sort alphabetically by key (the mod name)
      .map((item) => item[1]) // map each item to just its block string
      .join(''); // and combine

    // And write our now sorted file
    fileContents = fileContents.slice(0, indexes.firstBlockStart) + modString + fileContents.slice(indexes.firstBlockStart + 1);
    rmSync(`${this.runPath}\\${this.destination}`);
    writeFileSync(`${this.runPath}\\${this.destination}`, fileContents);
  }
}
