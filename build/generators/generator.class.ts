import { readFileSync, rmSync, writeFileSync } from 'node:fs';
import type { GeneratorHeader, GeneratorPayloadDefinition } from './generator.types.ts';

export abstract class Generator {
  protected runPath: string;
  protected header: GeneratorHeader;
  protected body: any;
  abstract template: string;

  constructor(runPath: string, payload: GeneratorPayloadDefinition) {
    this.runPath = runPath;
    this.header = payload.header;
    this.body = payload.body;
  }

  public abstract process(): Promise<void>;

  protected FillAndSaveTemplate(values: any, cb: (values: any, templateString: string) => string = (v, t) => t): void {
    try {
      // 1. Get template value
      let templateString = readFileSync(this.template).toString();

      // 2. Run callback first
      templateString = cb(values, templateString);

      // 3. Apply values to template
      Object.getOwnPropertyNames(values).forEach((key) => {
        templateString = templateString.replaceAll(`<% ${key} %>`, values[key]);
      });

      // 4. Save template
      rmSync(`${this.runPath}/config.cpp`);
      writeFileSync(`${this.runPath}/config.cpp`, templateString);
    } catch (e) {
      console.error(e);
    }
  }
}
