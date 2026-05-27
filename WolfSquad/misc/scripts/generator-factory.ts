import { ONICrewUniformGenerator } from '../../WS_Gear/Uniform/ONICrew/generator.ts';
import { TicTacGenerator } from '../../WS_Props/Tictacs/generator.ts';

// property name is what's passed from the cli to call the generator of the property value
const GENERATORS = {
  tictac: TicTacGenerator,
  onicrew: ONICrewUniformGenerator,
} as const;
type GeneratorNames = keyof typeof GENERATORS;
type GeneratorTypes = (typeof GENERATORS)[GeneratorNames];

const allGeneratorNames: string[] = Object.keys(GENERATORS);
const generatorsToRun: GeneratorTypes[] = [];
let params: any[] = [];

// determine our possible args: either of the two below options
// 1) specific type given (argv[2] matches one of our valid names) : arg[2] = sincle, arg[3]+ = params
// 2) no specific type given (argv[2] does not match one of our valid names) : arg[2]+ = params
const allArgs = [...process.argv];
const possibleSingleFlag = allArgs[2]; // 0 and 1 are script paths

if (!!possibleSingleFlag && allGeneratorNames.includes(possibleSingleFlag)) {
  generatorsToRun.push(GENERATORS[possibleSingleFlag as GeneratorNames]);
  params = allArgs.slice(3);
} else {
  allGeneratorNames.forEach((genName) => {
    generatorsToRun.push(GENERATORS[genName as GeneratorNames]);
  });
  params = allArgs.slice(2);
}

// run all generators needed
for (let i = 0; i < generatorsToRun.length; i++) {
  const generator = generatorsToRun[i]!;
  const instantiatedGenerator = new generator();
  await instantiatedGenerator.execute();
}
