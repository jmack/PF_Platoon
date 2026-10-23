import { GeneratorHeader } from '../../generator.types';

export type NamesPayloadDefinition = {
  header: GeneratorHeader;
  body: NamesGeneratorPayloadBody;
};

export type NamesGeneratorPayloadBody = {
  author: string;
  nameSets: NameSet[];
};

export type NameSet = {
  className: string;
  firstNames: string[];
  lastNames: string[];
};

/**
 * Templating Defs
 */
export type NamesTemplateValues = {
  class_name: string;
  root_class: string;
  author: string;
  name_sets: string;
};
