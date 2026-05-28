import fs from 'fs';
import { BaseGenerator } from '../scripts/types/generator.class.ts';

export class ModlistGenerator extends BaseGenerator {
  template = '';

  private fileInputName = 'Arma 3 Preset Wolf Squad.html';
  private fileOutputName = 'Arma 3 Wolf Squad Modlist.html';

  constructor() {
    super(import.meta.url);
  }

  protected async generate(): Promise<void> {
    const indexes = {
      firstBlockStart: 0,
      currentBlockStart: 0,
      currentBlockEnd: 0,
    };
    const modMap: { name: string; block: string }[] = [];
    let fileContents = this.getFileContents(`${this.scriptDir}/${this.fileInputName}`);

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
    const modString = modMap.map((block) => block.block).join('');
    // modMap.forEach((block) => {
    //   modString += `${block.block}`;
    // });

    // and write our now sorted file
    fileContents = fileContents.slice(0, indexes.firstBlockStart) + modString + fileContents.slice(indexes.firstBlockStart + 1);
    this.writeFileContents(`${this.scriptDir}/${this.fileOutputName}`, fileContents);
  }
}
