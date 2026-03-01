import rawItems from './master_list.ts';
import fs from 'fs';
import { fileURLToPath } from 'url';
import { dirname } from 'path';

/**
 * This file generates the ACE arsenal import string.
 *
 * It can be run with "npx ts-node .\WolfSquad\misc\arsenal\generate_arsenal_string.ts" from the project root.
 */

const arsenalItems: string[] = [];

for (const category in rawItems) {
  const categoryItems = rawItems[category]!;

  categoryItems.forEach((i) => {
    arsenalItems.push(i[1]!);
  });

  const workingDir = dirname(fileURLToPath(import.meta.url));

  try {
    fs.rmSync(`${workingDir}/output.txt`);
    fs.writeFileSync(`${workingDir}/output.txt`, JSON.stringify(arsenalItems, null, '\t'));
  } catch (e) {
    console.error(e);
  }
}
