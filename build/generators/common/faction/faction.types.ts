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
    displayName: string;
    author: string;
    priority: number;
    side: FactionSideType;
    requiredAddons: string[];
  };
  baseSoldiers: FactionBaseSoldier[];
  units: FactionUnit[];
  vehicles: FactionVehicle[];
  groups: FactionGroupCategory[];
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

export const FactionUnitRanks = {
  PRIVATE: 'PRIVATE',
  CORPORAL: 'CORPORAL',
  SERGEANT: 'SERGEANT',
  LIEUTENANT: 'LIEUTENANT',
  CAPTAIN: 'CAPTAIN',
  COLONEL: 'COLONEL',
} as const;
export type FactionUnitRank = (typeof FactionUnitRanks)[keyof typeof FactionUnitRanks];

export const FactionUnitIcons = {
  AT: 'iconManAT',
  ENGINEER: 'iconManEngineer',
  EXPLOSIVE: 'iconManExplosive',
  LEADER: 'iconManLeader',
  MEDIC: 'iconManMedic',
  MG: 'iconManMG',
  OFFICER: 'iconManOfficer',
  RECON: 'iconManRecon',
} as const;
export type FactionUnitIcon = (typeof FactionUnitIcons)[keyof typeof FactionUnitIcons];

export const FactionGroupIcons = {
  AIR: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_air.paa',
  ANTI_AIR: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_antiair.paa',
  ARMOR: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_armor.paa',
  ARTILLERY: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_art.paa',
  HQ: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_hq.paa',
  INFANTRY: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_inf.paa',
  INSTALLATION: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_installation.paa',
  MAINTENANCE: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_maint.paa',
  MECHANIZED_INFANTRY: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_mech_inf.paa',
  MEDICAL: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_med.paa',
  MORTAR: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_mortar.paa',
  MOTORIZED_INFANTRY: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_motor_inf.paa',
  NAVAL: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_naval.paa',
  PLANE: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_plane.paa',
  RECON: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_recon.paa',
  SERVICE: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_service.paa',
  SUPPORT: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_support.paa',
  UAV: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_uav.paa',
  UNKNOWN: 'A3\\ui_f\\data\\map\\markers\\nato\\<%s%>_unknown.paa',
} as const;
export type FactionGroupIcon = (typeof FactionGroupIcons)[keyof typeof FactionGroupIcons];

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
  uniqueSlug: string;
  baseSoldier: string;
  editorSubcategory: FactionEditorSubcategory;
  displayName: string;
  icon?: FactionUnitIcon;
  role: FactionUnitRole;
  weapons: (FactionUnitWeapon | string)[];
  gear: FactionUnitItem[];
  backpack?: FactionUnitBackpack | string;
};

export type FactionVehicle = {
  uniqueSlug: string;
  vehicleClass: string;
  editorSubcategory: FactionEditorSubcategory;
  displayName: string;
  crewSlug: string;
};

export type FactionGroupCategory = {
  name: string;
  groups: FactionGroup[];
};

export type FactionGroup = {
  name: string;
  icon?: FactionGroupIcon;
  units: FactionGroupUnit[];
};

export type FactionGroupUnit = {
  unitSlug: string;
  rank: FactionUnitRank;
  pos: {
    x: number;
    y: number;
    z: number;
  };
};

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
  faction_side_number: number;
  faction_side_name: string;

  cfg_weapons: string;

  cfg_vehicles_backpacks: string;
  cfg_vehicles_base_soldiers: string;
  cfg_vehicles_soldiers: string;
  cfg_vehicles_vehicles: string;

  cfg_groups: string;
};
