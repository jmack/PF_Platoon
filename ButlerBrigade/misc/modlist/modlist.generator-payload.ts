import { GeneratorPayloadDefinition, GeneratorTypes } from '../../../build/generators/generator.types';

export default {
  header: {
    name: 'Modlist Alphabetizer',
    generatorType: GeneratorTypes.CUSTOM,
    customGeneratorRelativePath: './modlist.generator.ts',
  },
  body: {},
} as const as GeneratorPayloadDefinition;
