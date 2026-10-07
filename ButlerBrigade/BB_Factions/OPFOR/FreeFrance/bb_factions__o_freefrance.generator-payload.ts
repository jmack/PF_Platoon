import {
  FactionEditorSubcategories,
  FactionGeneratorPayloadBody,
  FactionSideTypes,
  FactionUnitBackpackItemTypes,
  FactionUnitItemTypes,
  FactionUnitRanks,
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
    class: 'ItemCompass',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemWatch',
    type: FactionUnitItemTypes.EQUIPPED,
  },
];

const INF_LEADER_WORN = [
  ...INF_STANDARD_WORN,
  {
    class: 'TFAR_fadak',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemGPS',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemMap',
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
  {
    class: 'ACE_EarPlugs',
    type: FactionUnitItemTypes.CARRIED,
  },
];

const INF_LEADER_CARRIED_GEAR = [
  ...INF_STANDARD_CARRIED_GEAR,
  {
    class: 'ACE_MapTools',
    type: FactionUnitItemTypes.CARRIED,
  },
];

const INF_FAMAS_MAGS = [
  {
    class: 'AMF_25Rnd_BO_MEN_SS109',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 6,
  },
];

const INF_PAMAS_MAGS = [
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

const INF_STANDARD_MEDICAL = [
  {
    class: 'ACE_elasticBandage',
    type: FactionUnitItemTypes.CARRIED,
    count: 1,
  },
  {
    class: 'ACE_packingBandage',
    type: FactionUnitItemTypes.CARRIED,
    count: 1,
  },
  {
    class: 'ACE_quikclot',
    type: FactionUnitItemTypes.CARRIED,
    count: 1,
  },
  {
    class: 'ACE_painkillers',
    type: FactionUnitItemTypes.CARRIED,
    count: 2,
  },
  {
    class: 'ACE_tourniquet',
    type: FactionUnitItemTypes.CARRIED,
    count: 1,
  },
  {
    class: 'ACE_morphine',
    type: FactionUnitItemTypes.CARRIED,
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
    count: 2,
  },
  {
    class: 'ACE_tourniquet',
    type: FactionUnitBackpackItemTypes.ITEM,
    count: 1,
  },
  {
    class: 'ACE_morphine',
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
    requiredAddons: [],
  },
  baseSoldiers: [
    // Standard
    {
      name: 'Base',
      uniformClass: 'Mle_F1_uniform_lizard',
      nakedUniform: 'U_BasicBody',
      identityTypes: ['LanguageFRE_F', 'Head_Tanoan', 'Head_African', 'Head_TK', 'NoGlasses'],
    },
    {
      name: 'Base_Rolled',
      uniformClass: 'Mle_F1_uniform_lizard_roll',
      nakedUniform: 'U_BasicBody',
      identityTypes: ['LanguageFRE_F', 'Head_Tanoan', 'Head_African', 'Head_TK', 'NoGlasses'],
    },
    // Head_Euro makes these bases much more white. Because colonial white supremacy.
    {
      name: 'White',
      uniformClass: 'Mle_F1_uniform_lizard',
      nakedUniform: 'U_BasicBody',
      identityTypes: ['LanguageFRE_F', 'Head_Tanoan', 'Head_African', 'Head_TK', 'Head_Euro', 'NoGlasses'],
    },
    {
      name: 'White_Rolled',
      uniformClass: 'Mle_F1_uniform_lizard_roll',
      nakedUniform: 'U_BasicBody',
      identityTypes: ['LanguageFRE_F', 'Head_Tanoan', 'Head_African', 'Head_TK', 'Head_Euro', 'NoGlasses'],
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
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [...INF_STANDARD_BACKPACK_MEDICAL],
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
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice_60',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
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
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
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
          class: 'AMF_10Rnd_762x51_BO_F3',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 5,
        },
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
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
    {
      uniqueSlug: 'Infantry_Basic_MachineGunner',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Machine Gunner',
      role: FactionUnitRoles.MACHINE_GUNNER,
      weapons: [
        'FN_Minimi_F1', // FN Minimi Para
        'AMF_Pamas', // PAMAS G1 Pistol
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice_60',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'AMF_100Rnd_556x45_Minimi_BO_SS109_DCP',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 3,
        },
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_CARRIED_GEAR,
        ...INF_STANDARD_MEDICAL,
      ],
    },
    // Asst. Machine Gunner
    {
      uniqueSlug: 'Infantry_Basic_AsstMachineGunner',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Asst. Machine Gunner',
      role: FactionUnitRoles.ASSISTANT,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
      ],
      gear: [
        ...INF_STANDARD_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
          ...INF_STANDARD_BACKPACK_MEDICAL,
          {
            class: 'AMF_100Rnd_556x45_Minimi_BO_SS109_DCP',
            type: FactionUnitBackpackItemTypes.MAGAZINE,
            count: 5,
          },
          {
            class: 'ACE_SpareBarrel',
            type: FactionUnitBackpackItemTypes.ITEM,
            count: 2,
          },
        ],
      },
    },
    // RTO
    {
      uniqueSlug: 'Infantry_Basic_RTO',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'RTO',
      role: FactionUnitRoles.RADIO_OPERATOR,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_MEDICAL,
        ...INF_LEADER_CARRIED_GEAR,
      ],
      backpack: {
        class: 'Radio_PRC_10',
        items: [],
      },
    },
    // Medic
    // Team Leader
    {
      uniqueSlug: 'Infantry_Basic_TeamLeader',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Team Leader',
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_LEADER_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [...INF_STANDARD_BACKPACK_MEDICAL],
      },
    },
    // Squad Leader
    {
      uniqueSlug: 'Infantry_Basic_SquadLeader',
      baseSoldier: 'White',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Squad Leader',
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_LEADER_CARRIED_GEAR,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [...INF_STANDARD_BACKPACK_MEDICAL],
      },
    },
    // Officer
    // Vehicle Crew
    {
      uniqueSlug: 'Infantry_Basic_Vehicle_Crew',
      baseSoldier: 'Base_Rolled',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Vehicle Crew',
      role: FactionUnitRoles.CREWMAN,
      weapons: [
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        {
          class: 'cwr3_b_headgear_cvc',
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
        {
          class: 'V_Simc_flak_alice_45_ligt',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'TFAR_fadak',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'ItemGPS',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'ItemMap',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_PAMAS_MAGS,
        ...INF_LEADER_CARRIED_GEAR,
        ...INF_STANDARD_MEDICAL,
      ],
    },
    // Vehicle Commander
    {
      uniqueSlug: 'Infantry_Basic_Vehicle_Commander',
      baseSoldier: 'White_Rolled',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Vehicle Commander',
      role: FactionUnitRoles.CREWMAN,
      weapons: [
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        {
          class: 'cwr3_b_headgear_cvc_goggles',
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
        {
          class: 'V_Simc_flak_alice_45_ligt',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'TFAR_fadak',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'ItemGPS',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'ItemMap',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_PAMAS_MAGS,
        ...INF_LEADER_CARRIED_GEAR,
        ...INF_STANDARD_MEDICAL,
      ],
    },
    // Helicopter Pilot
    // Helicopter Crew
    // Aircraft Pilot
    // Aircraft Crew

    // Wheeled: GBC 180 Transport de troupes
    // Wheeled: VAB Ultima 12.7
    // Wheeled: VB2L - MAG-58

    // Tracked: VBCI Equipage Francais
    // Tracked: Leclerc Equipage Francais

    // Artillery: MO-120-RT F1
    // Artillery: ARQUUS CAESAR

    // Helicopter: ???
    // Jet: ???
  ],
  groups: [],
};

export default {
  header,
  body,
} as const as GeneratorPayloadDefinition;
