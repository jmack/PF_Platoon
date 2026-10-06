import { Generator } from '../../generator.class.ts';
import { readFileSync, rmSync, writeFileSync } from 'fs';
import {
  FactionBaseSoldier,
  FactionEditorSubcategories,
  FactionTemplateValues,
  FactionUnit,
  FactionUnitBackpackItem,
  FactionUnitBackpackItemType,
  FactionUnitBackpackItemTypes,
  FactionUnitItem,
  FactionUnitItemType,
  FactionUnitItemTypes,
} from './faction.types.ts';

export default class FactionGenerator extends Generator {
  template = './build/generators/common/faction/faction.template.tpl';

  private FACTION_SIDE_NAMES = ['East', 'West', 'Ind', 'Civ'];
  private FACTION_SIDE_LETTER = ['O', 'B', 'I', 'C'];

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
   * @param values The current template values. Mutated to pass back cfg_weapons
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

        // We have to be weird about how we do the body and header def because the classname we
        // need for baseWeapon isn't filled until *after* we've generated our body.
        let weaponDefBody = '';

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

        // prettier-ignore
        const weaponDefBodyTop =
          `\n  {` +
          `\n    scope = 0;` +
          `\n    baseWeapon = "${weaponDefClassname}";` +
          `\n` +
          `\n    class LinkedItems` +
          `\n    {`;

        weaponDefBody = `\n  class ` + weaponDefClassname + weaponDefBodyTop + weaponDefBody + '\n    };\n  };';

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
   * @param values The current template values. Mutated to pass back cfg_vehicles_backpacks
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

      const backpackClassName = `${this.header.name}__Backpack_${unit.uniqueSlug}`;

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
    const backpackString = Array.from(backpackDefs.values()).join('');
    values.cfg_vehicles_backpacks = `\n  // * Backpacks ***\n${importString}${backpackString}\n  // ***\n`;
  }

  /**
   * Scans all body.baseSoldiers entries, turns them into cfg entries, and then swaps the string reference per soldier
   * for the new generated name
   * @param values The current template values. Mutated to pass back cfg_vehicles_base_soldiers
   */
  private GenerateAndTransformBaseClasses(values: FactionTemplateValues): void {
    const generatedUnits: any = {};

    // All base soldiers inherit from X_Soldier_Base_F (for now)
    const baseImport = `${this.FACTION_SIDE_LETTER[this.body.meta.side]}_Soldier_Base_F`;
    let baseDefs = `\n  class ${baseImport};`;

    (this.body.baseSoldiers as FactionBaseSoldier[]).forEach((baseClass) => {
      const classname = `${this.header.name}__Base_${this.ConvertToArmaClassSafeString(baseClass.name)}`;

      if (generatedUnits[baseClass.name]) {
        throw new Error(`BASE_SOLDIER_COLLISION: ${classname} was generated twice!`);
      }

      generatedUnits[baseClass.name] = classname;

      // prettier-ignore
      baseDefs +=
        `\n  class ${classname}: ${baseImport}` +
        `\n  {` +
        `\n    scope = 0;` +
        `\n    faction = "${this.header.name}";` +
        `\n    uniformClass = "${baseClass.uniformClass}";` +
        `\n    uniformAccessories[] = { };` +
        `\n    nakedUniform = "${baseClass.nakedUniform}";` +
        `\n    identityTypes[] =` +
        `\n    {` +
        `\n` + baseClass.identityTypes.map(idt => `      "${idt}",`).join('\n') +
        `\n    };` +
        `\n  };`;
    });

    // Rewrite baseSoldiers for all units that match up with our generated bases
    (this.body.units as FactionUnit[]).forEach((unit) => {
      if (generatedUnits[unit.baseSoldier]) {
        unit.baseSoldier = generatedUnits[unit.baseSoldier];
      }
    });

    // And finally return our base class def
    values.cfg_vehicles_base_soldiers = `\n  // * Base Units ***${baseDefs}\n  // ***\n`;
  }

  /**
   * Scans all body.units entries and turns them into cfg entries.
   * **ALL PREVIOUS MUTATIONS SHOULD HAVE RUN BEFORE THIS OR IT WILL EXPLODE.**
   * @param values The current template values. Mutated to pass back cfg_vehicles_soldiers
   */
  private GenerateSoldiers(values: FactionTemplateValues): void {
    let soldierDef = '';

    (this.body.units as FactionUnit[]).forEach((unit) => {
      const classname = `${this.header.name}__Soldier_${unit.uniqueSlug}`;
      // prettier-ignore
      soldierDef +=
        `\n  class ${classname}: ${unit.baseSoldier}` +
        `\n  {` +
        `\n    displayName = "${unit.displayName}";` +
        `\n    role = "${unit.role}";` +
        `\n` +
        `\n    scope = 2;` +
        `\n    scopeCurator = 2;` +
        `\n    scopeArsenal = 2;` +
        `\n` +
        `\n    editorCategory = "${this.header.name}";` +
        `\n    editorSubcategory = "${unit.editorSubcategory}";` +
        `\n`;

      if (unit.backpack) {
        soldierDef += `\n    backpack = "${unit.backpack}";\n`;
      }

      // Weapons
      soldierDef += `${this.CreateSoldierWeaponDefs((unit.weapons as string[]).concat(['Throw', 'Put']))}\n`;

      // Magazines, LinkedItems, & Items
      soldierDef += `${this.CreateSoldierGearDef(FactionUnitItemTypes.MAGAZINE, unit.gear)}\n`;
      soldierDef += `${this.CreateSoldierGearDef(FactionUnitItemTypes.EQUIPPED, unit.gear)}\n`;
      soldierDef += `${this.CreateSoldierGearDef(FactionUnitItemTypes.CARRIED, unit.gear)}\n`;

      soldierDef += `  };`;

      // Add our new unit to the export list
      values.exported_units += `\n      "${classname}",`;
    });

    values.cfg_vehicles_soldiers = `\n  // * Soldiers ***\n${soldierDef}\n  // ***`;
  }

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

  /**
   * Returns a string representing the weapons on a soldier entry
   * @param items The items to have in the weapons/respawnWeapons pair
   * @returns The formatted string, ready for insertion into the def
   */
  private CreateSoldierWeaponDefs(items: string[]): string {
    return this.CreateSoldierItemDefs('weapons', items);
  }

  /**
   * Returns a string representing the gear on a soldier entry
   * @param type The type of items to list in this def (linkedItems, magazines, items)
   * @param items The total item list. The method will filter by types matching passed type
   * @returns The formatted string, ready for insertion into the def
   */
  private CreateSoldierGearDef(type: FactionUnitItemType, items: FactionUnitItem[]): string {
    const gearObjects = items.filter((item) => item.type == type);
    const gearStrings: string[] = [];

    // Arma is weird in that for gear on a soldier not in a backpack it just duplicates the
    // whole string for every entry, instead of having a count
    gearObjects.forEach((gear) => {
      for (let i = 0; i < (gear.count ?? 1); i++) {
        gearStrings.push(gear.class);
      }
    });

    return this.CreateSoldierItemDefs(type, gearStrings);
  }

  /**
   * Returns a string representing gear on a soldier entry (weapons, magazines, etc)
   * @param property The name of the base property (NOT the respawn property)
   * @param items The items to have in the item/respawnitem pair
   * @returns The formatted string, ready for insertion into the def
   */
  private CreateSoldierItemDefs(property: string, items: string[]): string {
    const listString = items.map((item) => `      "${item}",`).join('\n');

    // prettier-ignore
    const returnString =
      `\n    ${property}[] =` +
      `\n    {` +
      `\n${listString}` +
      `\n    };` +
      `\n    respawn${property[0]?.toUpperCase()}${property.slice(1)}[] =` +
      `\n    {` +
      `\n${listString}` +
      `\n    };`;

    return returnString;
  }
}
