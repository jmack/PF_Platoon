import { Generator } from '../../generator.class.ts';
import { readFileSync, rmSync, writeFileSync } from 'fs';
import { FactionTemplateValues, FactionUnit } from './faction.types.ts';

export default class FactionGenerator extends Generator {
  template = './build/generators/common/faction/faction.template.tpl';

  private FACTION_SIDE_NAMES = ['East', 'West', 'Ind', 'Civ'];

  public async process(): Promise<void> {
    // Initialize the template values
    const values: FactionTemplateValues = {
      faction_class: this.header.name,
      root_class: this.header.name.slice(0, this.header.name.indexOf('__')),
      author: this.body.meta.author,
      required_addons: '',
      exported_units: '',
      faction_name: this.body.meta.displayName,
      priority: this.body.meta.priority,
      faction_side_number: this.body.meta.side,
      faction_side_name: this.FACTION_SIDE_NAMES[this.body.meta.side] ?? 'West',
      cfg_weapons: '',
    };

    // 1. Weapons
    this.GenerateAndTransformWeapons(values);

    // 2. Backpacks
    this.GenerateAndTransformBackpacks(values);

    // 3a. Base Soldiers
    this.GenerateAndTransformBaseClasses(values);

    // 3b. Faction Soldiers
    this.GenerateSoldiers(values);

    // 4. Groups
    this.GenerateGroups(values);

    // Fill and save the template
    this.FillAndSaveTemplate(values);
  }

  /**
   * STEP HELPERS
   */

  /**
   * Scans all body.units[].weapons[] for complex weapons, turns them into CfgWeapons entries, and then replaces
   * the complex weapons entries with the basic names for the new weapons
   * @param values The current template values, mutated to pass back cfg_weapons
   */
  private GenerateAndTransformWeapons(values: FactionTemplateValues): void {
    const importedWeapons = new Set<string>();
    const weaponDefs = new Set<string>();

    // First, scan all weapons for complex weapons
    (this.body.units as FactionUnit[]).forEach((unit) => {
      unit.weapons.forEach((weapon, index) => {
        if (typeof weapon === 'string' || weapon instanceof String) {
          return;
        }

        // Add base weapon type to import
        importedWeapons.add(weapon.baseType);

        // Transform this complex weapon into a weapon def
        let weaponDefClassname = `${this.header.name}__Weapon_${weapon.baseType}`;

        // prettier-ignore
        let weaponDefBody =
          `\n  {` +
          `\n    baseWeapon = "${weapon.baseType}";` +
          `\n` +
          `\n    class LinkedItems` +
          `\n    {`;

        if (weapon.optic) {
          weaponDefClassname += `__${weapon.optic}`;
          // prettier-ignore
          weaponDefBody += 
            `\n      class LinkedItemsOptic` +
            `\n      {` +
            `\n        slot = "CowsSlot";` +
            `\n        item = "${weapon.optic}";` +
            `\n      };`;
        }

        if (weapon.pointer) {
          weaponDefClassname += `__${weapon.pointer}`;
          // prettier-ignore
          weaponDefBody += 
            `\n      class LinkedItemsAcc` +
            `\n      {` +
            `\n        slot = "PointerSlot";` +
            `\n        item = "${weapon.pointer}";` +
            `\n      };`;
        }

        if (weapon.underbarrel) {
          weaponDefClassname += `__${weapon.underbarrel}`;
          // prettier-ignore
          weaponDefBody += 
            `\n      class LinkedItemsUnder` +
            `\n      {` +
            `\n        slot = "UnderBarrelSlot";` +
            `\n        item = "${weapon.underbarrel}";` +
            `\n      };`;
        }

        if (weapon.muzzle) {
          weaponDefClassname += `__${weapon.muzzle}`;
          // prettier-ignore
          weaponDefBody += 
            `\n      class LinkedItemsMuzzle` +
            `\n      {` +
            `\n        slot = "MuzzleSlot";` +
            `\n        item = "${weapon.muzzle}";` +
            `\n      };`;
        }

        weaponDefBody = `\n  class ` + weaponDefClassname + weaponDefBody + '\n    };\n  };';

        // Add this weapon def if it's not in our list already (weapon defs are deterministic)
        weaponDefs.add(weaponDefBody);

        // Apply the new weapon def where our complex weapon used to be on the unit
        unit.weapons[index] = weaponDefClassname;
      });
    });

    // Convert our imports and weapon defs into a full template string
    const importString = Array.from(importedWeapons.values())
      .map((impWep) => `  class ${impWep};`)
      .join('\n');
    const weaponString = Array.from(weaponDefs.values()).join('\n');
    values.cfg_weapons = `\n${importString}\n${weaponString}\n`;
  }

  /**
   *
   * @param values
   */
  private GenerateAndTransformBackpacks(values: FactionTemplateValues): void {}

  /**
   *
   * @param values
   */
  private GenerateAndTransformBaseClasses(values: FactionTemplateValues): void {}

  /**
   *
   * @param values
   */
  private GenerateSoldiers(values: FactionTemplateValues): void {}

  /**
   *
   * @param values
   */
  private GenerateGroups(values: FactionTemplateValues): void {}
}
