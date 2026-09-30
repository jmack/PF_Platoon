import { Generator } from '../../generator.class.ts';

export default class FactionGenerator extends Generator {
  template = './faction.template.tpl';

  public async process(): Promise<void> {
    console.log('faction generator called');
  }
}
