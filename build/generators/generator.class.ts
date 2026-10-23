import { readFileSync, rmSync, writeFileSync } from 'node:fs';
import type { GeneratorHeader, GeneratorPayloadDefinition } from './generator.types.ts';

export abstract class Generator<TBody = any> {
  protected runPath: string;
  protected payload: GeneratorPayloadDefinition<TBody>;

  abstract template: string;

  constructor(runPath: string, payload: GeneratorPayloadDefinition<TBody>) {
    this.runPath = runPath;
    this.payload = payload;
  }

  protected get header() {
    return this.payload.header;
  }

  protected get body(): TBody {
    return this.payload.body;
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
