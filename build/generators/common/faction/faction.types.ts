import { GeneratorHeader } from '../../generator.types.ts';

/**
 * Overall Payload Defs
 */
export type FactionPayloadDefinition = {
  header: GeneratorHeader;
  body: FactionGeneratorPayloadBody;
};

export type FactionGeneratorPayloadBody = {
  meta: {
    //classSlug: string;
    displayName: string;
    author: string;
    priority: number;
    side: FactionSideType;
  };
  baseSoldiers: FactionBaseSoldier[];
  units: FactionUnit[];
  groups: FactionGroup[];
};

/**
 * Consts
 */
export const FactionSideTypes = {
  OPFOR: 0,
  BLUFOR: 1,
  INDFOR: 2,
  CIV: 3,
} as const;
export type FactionSideType = (typeof FactionSideTypes)[keyof typeof FactionSideTypes];

export const FactionEditorSubcategories = {
  INFANTRY: 'BB_Factions_EdSubcat_Infantry',
  SPECOPS: 'BB_Factions_EdSubcat_SpecOps',
  ARTILLERY: 'BB_Factions_EdSubcat_Artillery',
  WHEELED: 'BB_Factions_EdSubcat_Wheeled',
  TRACKED: 'BB_Factions_EdSubcat_Tracked',
  HELICOPTERS: 'BB_Factions_EdSubcat_Helicopters',
  PLANES: 'BB_Factions_EdSubcat_Planes',
} as const;
export type FactionEditorSubcategory = (typeof FactionEditorSubcategories)[keyof typeof FactionEditorSubcategories];

export const FactionUnitRoles = {
  ASSISTANT: 'Assistant',
  CREWMAN: 'Crewman',
  GRENADIER: 'Grenadier',
  MACHINE_GUNNER: 'MachineGunner',
  MARKSMAN: 'Marksman',
  MEDIC: 'CombatLifeSaver',
  MISSILE_SPECIALIST: 'MissileSpecialist',
  RADIO_OPERATOR: 'RadioOperator',
  RIFLEMAN: 'Rifleman',
  SAPPER: 'Sapper',
  SPECOPS: 'SpecialOperative',
  UNARMED: 'Unarmed',
} as const;
export type FactionUnitRole = (typeof FactionUnitRoles)[keyof typeof FactionUnitRoles];

/**
 * Items and Weapons
 */
export type FactionUnitWeapon = {
  baseType: string;
  optic?: string;
  pointer?: string;
  underbarrel?: string;
  muzzle?: string;
};

export const FactionUnitItemTypes = {
  MAGAZINE: 'magazines',
  EQUIPPED: 'linkedItems',
  CARRIED: 'items',
} as const;
export type FactionUnitItemType = (typeof FactionUnitItemTypes)[keyof typeof FactionUnitItemTypes];

export type FactionUnitItem = {
  class: string;
  type: FactionUnitItemType;
  count?: number;
};

export const FactionUnitBackpackItemTypes = {
  MAGAZINE: 'transportMagazines',
  ITEM: 'transportItems',
  WEAPON: 'transportWeapons',
} as const;
export type FactionUnitBackpackItemType = (typeof FactionUnitBackpackItemTypes)[keyof typeof FactionUnitBackpackItemTypes];

export type FactionUnitBackpackItem = {
  class: string;
  type: FactionUnitBackpackItemType;
  count: number;
};

export type FactionUnitBackpack = {
  class: string;
  items: FactionUnitBackpackItem[];
};

/**
 * Main Defs
 */

export type FactionBaseSoldier = {
  name: string;
  identityTypes: string[];
  uniformClass: string;
  nakedUniform: string;
};

export type FactionUnit = {
  baseSoldier: string;
  editorSubcategory: FactionEditorSubcategory;
  displayName: string;
  role: FactionUnitRole;
  weapons: (FactionUnitWeapon | string)[];
  gear: FactionUnitItem[];
  backpack?: FactionUnitBackpack;
};

export type FactionGroup = {};

/**
 * Templating Defs
 */
export type FactionTemplateValues = {
  faction_class: string;
  root_class: string;
  exported_units: string;
  required_addons: string;
  author: string;

  faction_name: string;
  priority: number;
  faction_side_number: string;
  faction_side_name: string;

  cfg_weapons: string;

  cfg_vehicles_backpacks: string;
  cfg_vehicles_base_soldiers: string;
  cfg_vehicles_soldiers: string;
  cfg_vehicles_vehicles: string;
};
