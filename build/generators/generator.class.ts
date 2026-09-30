import type { GeneratorHeader, GeneratorPayloadDefinition } from './generator.type.ts';

export abstract class Generator {
  private header: GeneratorHeader;
  private body: any;
  abstract template: string;

  constructor(payload: GeneratorPayloadDefinition) {
    this.header = payload.header;
    this.body = payload.body;
  }

  public abstract process(): Promise<void>;
}
