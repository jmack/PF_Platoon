import fs from 'fs';
import { dirname } from 'path';
import { fileURLToPath } from 'url';
import { get } from 'lodash-es';
// @ts-ignore
import getCursorPosition from 'get-cursor-position';

import { type WriteResult, WriteResults } from './write-results.constant.ts';

export type GeneratorConstructorOptions = {
  lineRow?: number;
  statusCol?: number;
};

export abstract class BaseGenerator {
  protected abstract template: string;
  protected scriptDir: string;

  protected lineCursorRow: number;
  protected statusCursorCol: number;

  protected startTime?: number;
  protected endTime?: number;

  constructor(url: string, options: GeneratorConstructorOptions = {}) {
    this.scriptDir = dirname(fileURLToPath(url));
    this.lineCursorRow = get(options, 'lineRow', getCursorPosition.sync().row);
    this.statusCursorCol = get(options, 'statusCol', `${this.constructor.name}   `.length);
  }

  protected abstract generate(params?: any[]): Promise<void>;

  public async execute(params: any[] = []): Promise<void> {
    // write our starting line
    process.stdout.cursorTo(0, this.lineCursorRow);
    process.stdout.write(`${this.constructor.name}`);
    this.showProgress(0);

    // do the generation
    this.startTime = Date.now();
    await this.generate(params);
    this.endTime = Date.now();
    this.showCompleted();
  }

  protected showProgress(percent: number): void {
    process.stdout.cursorTo(this.statusCursorCol, this.lineCursorRow);
    const percentString = Math.round(percent).toString();
    process.stdout.write(`${percentString.padStart(3, ' ')}%`);
  }

  // defined so that children can overwrite if desired
  protected showCompleted(): void {
    if (this.startTime == undefined || this.endTime == undefined) {
      throw Error('showCompleted called when start or end time not filled!');
    }
    process.stdout.cursorTo(this.statusCursorCol, this.lineCursorRow);
    process.stdout.write(`${(this.endTime - this.startTime) / 1000}s`);
  }

  /**
   * Gets the contents of a file, or an empty string if no file exists
   * @param path the path to the desired file
   * @returns the file contents as a string in UTF-8 CRLF format
   */
  protected getFileContents(path: string): string {
    let contents = '';
    try {
      contents = fs.readFileSync(path, { encoding: 'utf-8' });
    } catch (e: any) {
      if (e && e.errno) {
        switch (e.errno) {
          case -4058: // if errno is -4058, the file doesn't exist. we can swallow this error without caring (for now)
            break;
          default: {
            console.error(e);
            break;
          }
        }
      } else {
        console.error(e);
      }
    }

    return this.convertToCRLF(contents);
  }

  /**
   * Writes the contents to a file (in UTF-8 CRLF format) if the current file contents are different than the desired
   * @param path the path to the desired output file
   * @param contents the file contents as a string
   * @returns the outcome of the operation (succeeded, failed, or unchanged if contents were identical to existing)
   */
  protected writeFileContents(path: string, contents: string): WriteResult {
    const newContents = this.convertToCRLF(contents);
    const currentContents = this.getFileContents(path);

    if (newContents != currentContents) {
      try {
        fs.writeFileSync(path, newContents, { encoding: 'utf-8' });
        return WriteResults.SUCCESS;
      } catch (e) {
        console.error(e); // same as get, log now, deal with later
        return WriteResults.FAILED;
      }
    }

    return WriteResults.UNCHANGED;
  }

  // #region Helpers
  /**
   * Converts all line endings from LF to CRLF. Leaves existing CRLF's alone.
   * @param input string to convert line endings of
   * @returns the input with replaced line endings
   */
  private convertToCRLF(input: string): string {
    return input.replace(/([^\r])\n/g, '$1\r\n').replace(/^\n/, '\r\n');
  }
  // #endregion
}
