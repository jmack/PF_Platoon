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
}
