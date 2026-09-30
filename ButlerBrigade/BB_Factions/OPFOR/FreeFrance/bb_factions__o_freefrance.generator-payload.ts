import type { GeneratorPayloadDefinition } from '../../../../build/generators/generator.type.ts';
import { GeneratorTypes } from '../../../../build/generators/generator.type.ts';

const Payload: GeneratorPayloadDefinition = {
  header: {
    name: 'BB_Factions__O_FreeFrance',
    generatorType: GeneratorTypes.FACTION,
  },
  body: {},
} as const;

export default Payload;
