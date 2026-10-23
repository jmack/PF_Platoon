export const GeneratorTypes = {
  CUSTOM: 'CUSTOM',
  FACTION: 'FACTION',
} as const;

export type GeneratorType = keyof typeof GeneratorTypes;

export type GeneratorHeader = {
  name: string;
  generatorType: GeneratorType;
  customGeneratorRelativePath?: string;
};

export type GeneratorPayloadDefinition<TBody = any> = {
  header: GeneratorHeader;
  body: TBody;
};
