import { pathToFileURL } from 'node:url';
import { join } from 'node:path';
import FactionGenerator from './common/faction/faction.generator.ts';
import { Generator } from './generator.class.ts';
import type { GeneratorPayloadDefinition } from './generator.type.ts';
import { GeneratorTypes } from './generator.type.ts';

export class GeneratorFactory {
  /**
   * Generates a concrete Generator instance based on the payload definition.
   * Returns a type that guarantees the base Generator methods/properties
   * while allowing arbitrary custom fields.
   */
  public static GetGenerator = async (dirRoot: string, payload: GeneratorPayloadDefinition): Promise<Generator & Record<string, any>> => {
    switch (payload.header.generatorType) {
      case GeneratorTypes.FACTION:
        return new FactionGenerator(payload);

      case GeneratorTypes.CUSTOM:
        if (!payload.header.customGeneratorRelativePath) {
          throw new Error('customGeneratorRelativePath is required for CUSTOM generatorType, but one was not provided!');
        }

        try {
          const customGeneratorPath = join(dirRoot, payload.header.customGeneratorRelativePath);
          const customGeneratorUrl = pathToFileURL(customGeneratorPath).href;

          // Type the dynamic constructor to ensure it takes the payload and instantiates a Generator
          const CustomGeneratorClass = (await import(customGeneratorUrl)).default as new (payload: GeneratorPayloadDefinition) => Generator;

          return new CustomGeneratorClass(payload) as Generator & Record<string, any>;
        } catch (e) {
          throw new Error(`Failed to load custom generator: ${(e as Error).message}`);
        }

      default:
        throw new Error(`Generator of type ${payload.header.generatorType} is not supported!`);
    }
  };
}
