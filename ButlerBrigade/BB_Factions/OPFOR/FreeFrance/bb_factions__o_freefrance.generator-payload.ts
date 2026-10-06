import {
  FactionEditorSubcategories,
  FactionGeneratorPayloadBody,
  FactionSideTypes,
  FactionUnitBackpackItemTypes,
  FactionUnitItemTypes,
  FactionUnitRoles,
} from '../../../../build/generators/common/faction/faction.types.ts';
import type { GeneratorHeader, GeneratorPayloadDefinition } from '../../../../build/generators/generator.types';
import { GeneratorTypes } from '../../../../build/generators/generator.types';

/**
 * Helper Consts
 */
const INF_STANDARD_WORN = [
  {
    class: 'cwr3_b_headgear_m1_olive',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'TFAR_fadak',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemCompass',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemWatch',
    type: FactionUnitItemTypes.EQUIPPED,
  },
];

const INF_STANDARD_CARRIED_GEAR = [
  {
    class: 'ACE_EntrenchingTool',
    type: FactionUnitItemTypes.CARRIED,
  },
  {
    class: 'ACE_Flashlight_XL50',
    type: FactionUnitItemTypes.CARRIED,
  },
];

const INF_FAMAS_CARRIED_MAGS = [
  {
    class: 'AMF_25Rnd_BO_MEN_SS109',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 6,
  },
];

const INF_PAMAS_CARRIED_MAGS = [
  {
    class: 'AMF_15Rnd_9x19_PAMAS',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 3,
  },
];

const INF_STANDARD_GRENADES = [
  {
    class: 'HandGrenade',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 2,
  },
  {
    class: 'SmokeShell',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 2,
  },
];

const INF_STANDARD_BACKPACK_GEAR = [
  {
    class: 'ACE_EarPlugs',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'AMF_MSC_GOGGLES_BLK',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_MapTools',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
];

const INF_STANDARD_BACKPACK_MEDICAL = [
  {
    class: 'ACE_elasticBandage',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_packingBandage',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_quikclot',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_painkillers',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_tourniquet',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
];

/**
 * Payload Def
 */
const header: GeneratorHeader = {
  name: 'BB_Factions__O_FreeFrance',
  generatorType: GeneratorTypes.FACTION,
};

const body: FactionGeneratorPayloadBody = {
  meta: {
    displayName: 'Free France',
    author: 'wlan0',
    priority: 5,
    side: FactionSideTypes.OPFOR,
  },
  baseSoldiers: [
    {
      name: 'Base',
      uniformClass: 'Mle_F1_uniform_lizard',
      nakedUniform: 'U_BasicBody',
      identityTypes: ['LanguageFRE_F', 'Head_Tanoan', 'Head_African', 'Head_Euro', 'NoGlasses'],
    },
  ],
  units: [
    // Rifleman
    {
      uniqueSlug: 'Infantry_Basic_Rifleman',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Rifleman',
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_CARRIED_MAGS,
        ...INF_PAMAS_CARRIED_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [...INF_STANDARD_BACKPACK_GEAR, ...INF_STANDARD_BACKPACK_MEDICAL],
      },
    },
    // Grenadier
    {
      uniqueSlug: 'Infantry_Basic_Grenadier',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Grenadier',
      role: FactionUnitRoles.GRENADIER,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice_60',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_CARRIED_MAGS,
        ...INF_STANDARD_CARRIED_GEAR,
        {
          class: 'AMF_RFG_APAV40',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 2,
        },
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
          ...INF_STANDARD_BACKPACK_GEAR,
          ...INF_STANDARD_BACKPACK_MEDICAL,
          {
            class: 'AMF_RFG_APAV40',
            type: FactionUnitBackpackItemTypes.MAGAZINE,
            count: 4,
          },
        ],
      },
    },
    // Anti-Tank
    {
      uniqueSlug: 'Infantry_Basic_AT',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Anti-Tank',
      role: FactionUnitRoles.MISSILE_SPECIALIST,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_LRAC89_F', // LRAC 89mm Mle
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_CARRIED_MAGS,
        ...INF_PAMAS_CARRIED_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_CARRIED_GEAR,
        {
          class: 'AMF_AC89mm_F1',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 1,
        },
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
          ...INF_STANDARD_BACKPACK_GEAR,
          ...INF_STANDARD_BACKPACK_MEDICAL,
          {
            class: 'AMF_AC89mm_F1',
            type: FactionUnitBackpackItemTypes.MAGAZINE,
            count: 1,
          },
        ],
      },
    },
    // Marksman
    {
      uniqueSlug: 'Infantry_Basic_Marksman',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Marksman',
      role: FactionUnitRoles.MARKSMAN,
      weapons: [
        {
          baseType: 'AMF_RFF2_01_F', // FR-F2
          optic: 'ScromeJ8_NoCover',
        },
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice_45',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'AMF_10Rnd_762x51_BO_F2',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 5,
        },
        ...INF_PAMAS_CARRIED_MAGS,
        ...INF_STANDARD_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
          ...INF_STANDARD_BACKPACK_GEAR,
          ...INF_STANDARD_BACKPACK_MEDICAL,
          {
            class: 'ACE_Kestrel4500',
            type: FactionUnitBackpackItemTypes.ITEM,
            count: 1,
          },
          {
            class: 'ACE_SpottingScope',
            type: FactionUnitBackpackItemTypes.ITEM,
            count: 1,
          },
        ],
      },
    },
    // Machine Gunner
    // Asst. Machine Gunner
    // RTO
    // Team Leader
    // Squad Leader
    // Vehicle Driver
    // Vehicle Gunner

    // Wheeled: GBC 180 Transport de troupes
    // Wheeled: VAB Ultima 12.7
    // Wheeled: VB2L - MAG-58

    // Tracked: VBCI Equipage Francais
    // Tracked: Leclerc Equipage Francais

    // Artillery: MO-120-RT F1
    // Artillery: ARQUUS CAESAR
  ],
  groups: [],
};

export default {
  header,
  body,
} as const as GeneratorPayloadDefinition;
