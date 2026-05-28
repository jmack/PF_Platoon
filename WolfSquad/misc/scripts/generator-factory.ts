import { ONICrewUniformGenerator } from '../../WS_Gear/Uniform/ONICrew/generator.ts';
import { TicTacGenerator } from '../../WS_Props/Tictacs/generator.ts';
import { ModlistGenerator } from '../modlist/generator.ts';

// property name is what's passed from the cli to call the generator of the property value
const GENERATORS = {
  tictac: TicTacGenerator,
  onicrew: ONICrewUniformGenerator,
  modlist: ModlistGenerator,
} as const;

type GeneratorName = keyof typeof GENERATORS;
type GeneratorType = (typeof GENERATORS)[GeneratorName];

// generators that won't run as part of an all generator run (but will if targeted singly)
const EXCLUDED_GENERATORS: GeneratorName[] = ['modlist'];

/**
 * Start Main Execution
 */
const generatorNames: string[] = Object.keys(GENERATORS);
const toRun: GeneratorType[] = [];
let params: any[] = [];

// determine our possible args: either of the two below options
// 1) specific type given (argv[2] matches one of our valid names) : arg[2] = sincle, arg[3]+ = params
// 2) no specific type given (argv[2] does not match one of our valid names) : arg[2]+ = params
const allArgs = [...process.argv];
const possibleSingleFlag = allArgs[2]; // 0 and 1 are script paths

if (!!possibleSingleFlag && generatorNames.includes(possibleSingleFlag)) {
  toRun.push(GENERATORS[possibleSingleFlag as GeneratorName]);
  params = allArgs.slice(3);
} else {
  generatorNames.forEach((genName) => {
    if (!EXCLUDED_GENERATORS.includes(genName as GeneratorName)) {
      toRun.push(GENERATORS[genName as GeneratorName]);
    }
  });
  params = allArgs.slice(2);
}

// run all generators needed
for (let i = 0; i < toRun.length; i++) {
  const generator = toRun[i]!;
  const instantiatedGenerator = new generator();
  await instantiatedGenerator.execute();
}
