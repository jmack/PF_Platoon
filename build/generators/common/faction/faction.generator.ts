import { Generator } from '../../generator.class.ts';
import { readFileSync, rmSync, writeFileSync } from 'fs';

export default class FactionGenerator extends Generator {
  template = './build/generators/common/faction/faction.template.tpl';

  private FACTION_SIDE_NAMES = ['East', 'West', 'Ind', 'Civ'];

  public async process(): Promise<void> {
    const templateString = readFileSync(this.template).toString();

    const templateValues: any = {
      faction_class: this.header.name,
      // exported_units: [],
      // required_addons: [],
      author: this.body.meta.author,
      root_class: this.header.name.slice(0, this.header.name.indexOf('__')),
      faction_name: this.body.meta.displayName,
      priority: this.body.meta.priority,
      faction_side_number: this.body.meta.side,
      faction_side_name: this.FACTION_SIDE_NAMES[this.body.meta.side],
    };
    const workingValues: any = {
      exported_units: [],
      required_addons: [],
    };

    // Do the work

    // Convert our working arrays back

    // Fill and save the template
    const filledTemplateString = this.applyTemplateValues(templateString, templateValues);
    try {
      rmSync(`${this.runPath}/config.cpp`);
      writeFileSync(`${this.runPath}/config.cpp`, filledTemplateString);
    } catch (e) {
      console.error(e);
    }
  }

  private applyTemplateValues(templateString: string, values: any): string {
    let filledTemplateString = templateString;

    Object.getOwnPropertyNames(values).forEach((key) => {
      filledTemplateString = filledTemplateString.replaceAll(`<% ${key} %>`, values[key]);
    });

    return filledTemplateString;
  }
}
