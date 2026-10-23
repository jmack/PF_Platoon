import { Generator } from '../../generator.class';
import { NamesGeneratorPayloadBody, NamesTemplateValues } from './names.types';

export default class NamesGenerator extends Generator<NamesGeneratorPayloadBody> {
  template = './build/generators/common/names/names.template.tpl';

  public async process(): Promise<void> {
    const values: NamesTemplateValues = {
      class_name: this.header.name,
      root_class: this.header.name.slice(0, this.header.name.indexOf('__')),
      author: this.body.author,
      name_sets: '',
    };

    this.body.nameSets.forEach((set) => {
      // prettier-ignore
      values.name_sets +=
        `\n    class ${set.className}` +
        `\n    {` +
        `\n      class FirstNames` +
        `\n      {` +
        Array.from(this.GenerateTSSetForNameList(set.firstNames)).map(([className, displayName]) => `\n        ${className} = "${displayName}";`).sort().join('') +
        `\n      };` +
        `\n      class LastNames` +
        `\n      {` +
        Array.from(this.GenerateTSSetForNameList(set.lastNames)).map(([className, displayName]) => `\n        ${className} = "${displayName}";`).sort().join('') +
        `\n      };` +
        `\n    };`
    });

    this.FillAndSaveTemplate(values);
  }

  private GenerateTSSetForNameList(names: string[]): Map<string, string> {
    const transformedNames = new Map<string, string>();

    names.forEach((name) => {
      // normalize name (no spaces, special characters, etc. exclusively simple alphanumeric)
      const classSafeName = this.ConvertToArmaClassSafeString(name);
      // stick into set
      transformedNames.set(classSafeName, name);
    });

    return transformedNames;
  }

  private ConvertToArmaClassSafeString(input: string): string {
    return input
      .replaceAll(/[^\w\s]/g, '') // Special characters get removed
      .replaceAll(/\s+/g, '_') // Any number of spaces becomes single underscore
      .toLowerCase();
  }
}
