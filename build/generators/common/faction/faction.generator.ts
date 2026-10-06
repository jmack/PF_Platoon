import { Generator } from '../../generator.class.ts';
import { readFileSync, rmSync, writeFileSync } from 'fs';
import {
  FactionEditorSubcategories,
  FactionTemplateValues,
  FactionUnit,
  FactionUnitBackpackItem,
  FactionUnitBackpackItemType,
  FactionUnitBackpackItemTypes,
} from './faction.types.ts';

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
      cfg_vehicles_backpacks: '',
      cfg_vehicles_base_soldiers: '',
      cfg_vehicles_soldiers: '',
      cfg_vehicles_vehicles: '',
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
   * Scans all body.units[] for backpack entries, turns them into cfg entries, and then swaps the object for a string
   * referencing the newly created backpack entry
   * @param values The current template values, mutated to pass back cfg_vehicles_backpacks
   */
  private GenerateAndTransformBackpacks(values: FactionTemplateValues): void {
    const importedBackpacks = new Set<string>();
    const backpackDefs = new Set<string>();

    // Scan all units for backpacks
    (this.body.units as FactionUnit[]).forEach((unit) => {
      if (!unit.backpack || typeof unit.backpack === 'string' || unit.backpack instanceof String) {
        return;
      }

      // And where a backpack entry is found, build our imports and defs
      importedBackpacks.add(unit.backpack.class);

      const backpackClassName = `${this.header.name}__Backpack_${this.GetPropertyByValue(FactionEditorSubcategories, unit.editorSubcategory)}_${this.ConvertToArmaClassSafeString(unit.displayName)}`;

      // prettier-ignore
      let backpackDef =
        `\n  class ${backpackClassName}` +
        `\n  {` +
        `\n    scope = 1;`;

      backpackDef += this.CreateBackpackItemDefs(FactionUnitBackpackItemTypes.ITEM, unit.backpack.items);
      backpackDef += this.CreateBackpackItemDefs(FactionUnitBackpackItemTypes.MAGAZINE, unit.backpack.items);
      backpackDef += this.CreateBackpackItemDefs(FactionUnitBackpackItemTypes.WEAPON, unit.backpack.items);

      backpackDef += '\n  };';

      if (backpackDefs.has(backpackDef)) {
        throw new Error(`BACKPACK_DEF_COLLISION: ${backpackClassName} was generated twice!`);
      }

      backpackDefs.add(backpackDef);

      // Last, change our backpack def in the unit to now be this backpack classname
      unit.backpack = backpackClassName;
    });

    // Convert our imports and backpack defs into a full template string
    const importString = Array.from(importedBackpacks.values())
      .map((impBpk) => `  class ${impBpk};`)
      .join('\n');
    const backpackString = Array.from(backpackDefs.values()).join('\n');
    values.cfg_vehicles_backpacks = `\n${importString}\n${backpackString}\n`;
  }

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

  /**
   * SUB-HELPERS
   */

  /**
   * Converts strings to something that's safe to be used as an Arma class name
   * @param input The string to convert
   * @returns A string safe to use as an Arma class name
   */
  private ConvertToArmaClassSafeString(input: string): string {
    return input.replaceAll(' ', '_').replaceAll('-', '');
  }

  /**
   * Returns a string representing either TransportMagazines, TransportItems, or TransportWeapons,
   * depending on what type was selected
   * @param items A set of items of a to build the string for. Only items of the given type will be considered
   */
  private CreateBackpackItemDefs(type: FactionUnitBackpackItemType, items: FactionUnitBackpackItem[]): string {
    // Filter to just our given type
    const filteredItems = items.filter((item) => item.type == type);

    if (!filteredItems.length) {
      return '';
    }

    const typePropertyMap = {
      [FactionUnitBackpackItemTypes.ITEM]: {
        transportClass: 'TransportItems',
        propertyName: 'name',
      },
      [FactionUnitBackpackItemTypes.MAGAZINE]: {
        transportClass: 'TransportMagazines',
        propertyName: 'magazine',
      },
      [FactionUnitBackpackItemTypes.WEAPON]: {
        transportClass: 'TransportWeapons',
        propertyName: 'name',
      },
    };

    const typeProperties = typePropertyMap[type];
    let def = '';
    // Each sorted item gets its own entry in its transport class. Names can technically be anything but for consistency
    // we just use _xx_{item class name}
    // prettier-ignore
    def +=
      `\n    class ${typeProperties.transportClass}` +
      `\n    {`;

    filteredItems.forEach((item) => {
      // prettier-ignore
      def +=
        `\n      class _xx_${item.class}` +
        `\n      {` +
        `\n        ${typeProperties.propertyName} = "${item.class}";` +
        `\n        count = ${item.count};` +
        `\n      };`
    });

    def += '\n    };';

    return def;
  }

  private GetPropertyByValue<T extends object>(obj: T, value: T[keyof T]): keyof T | undefined {
    return (Object.keys(obj) as Array<keyof T>).find((key) => obj[key] === value);
  }
}
