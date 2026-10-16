import {
  FactionEditorSubcategories,
  FactionGeneratorPayloadBody,
  FactionGroupIcons,
  FactionSideTypes,
  FactionUnitBackpackItemTypes,
  FactionUnitIcons,
  FactionUnitItemTypes,
  FactionUnitRanks,
  FactionUnitRoles,
} from '../../../../build/generators/common/faction/faction.types.ts';
import type { GeneratorHeader, GeneratorPayloadDefinition } from '../../../../build/generators/generator.types';
import { GeneratorTypes } from '../../../../build/generators/generator.types';

/**
 * Helper Consts
 */

const EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY = 'Parachute Infantry';

// Regular Infantry Gear
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

// Parachute Infantry specific gear
const PARA_STANDARD_GEAR = [
  {
    class: 'AMF_BERET_MARINE_PARA',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemCompass',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ItemMap',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ACE_Altimeter',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  {
    class: 'ACE_MapTools',
    type: FactionUnitItemTypes.CARRIED,
  },
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

const PARA_TEAMLEAD_GEAR = [
  ...PARA_STANDARD_GEAR,
  {
    class: 'ItemGPS',
    type: FactionUnitItemTypes.EQUIPPED,
  },
];

const PARA_SQUADLEAD_GEAR = [
  ...PARA_TEAMLEAD_GEAR,
  {
    class: 'TFAR_fadak',
    type: FactionUnitItemTypes.EQUIPPED,
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
    /*********************************
     * REGULAR INFANTRY
     */
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
      icon: FactionUnitIcons.AT,
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
      icon: FactionUnitIcons.MG,
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
      backpack: 'Radio_PRC_10',
    },
    // Medic
    // Mortar Team (Tube)
    // Mortar Team (Baseplate)
    // Mortar Ammo Bearer
    // ATGM Gunner
    {
      uniqueSlug: 'Infantry_Basic_ATGM_Gunner',
      baseSoldier: 'Base_Rolled',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'ATGM Gunner',
      icon: FactionUnitIcons.AT,
      role: FactionUnitRoles.MISSILE_SPECIALIST,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_VectorIV', // Leica Vector IV
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'nomex_1_lang_addon',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_LEADER_CARRIED_GEAR,
      ],
      backpack: 'MILAN_tripod_80',
    },
    // Asst. ATGM Gunner
    {
      uniqueSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
      baseSoldier: 'Base_Rolled',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Asst. ATGM Gunner',
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_VectorIV', // Leica Vector IV
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'nomex_1_lang_addon',
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
    // Team Leader
    {
      uniqueSlug: 'Infantry_Basic_TeamLeader',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Team Leader',
      icon: FactionUnitIcons.LEADER,
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
      icon: FactionUnitIcons.LEADER,
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
    {
      uniqueSlug: 'Infantry_Basic_Officer',
      baseSoldier: 'White',
      editorSubcategory: FactionEditorSubcategories.INFANTRY,
      displayName: 'Officer',
      icon: FactionUnitIcons.LEADER,
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_VectorIV', // Leica Vector IV
      ],
      gear: [
        ...INF_LEADER_WORN,
        {
          class: 'V_Simc_flak_alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'CUP_G_PMC_RadioHeadset',
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
      icon: FactionUnitIcons.LEADER,
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
    /*********************************
     * PARACHUTE INFANTRY
     */
    // Rifleman
    {
      uniqueSlug: 'Infantry_Parachute_Rifleman',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
      displayName: 'Rifleman',
      role: FactionUnitRoles.RIFLEMAN,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
      ],
      gear: [
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice_alt',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [...INF_STANDARD_BACKPACK_MEDICAL],
      },
    },
    // Grenadier
    {
      uniqueSlug: 'Infantry_Parachute_Grenadier',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
      displayName: 'Grenadier',
      role: FactionUnitRoles.GRENADIER,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
      ],
      gear: [
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
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
      uniqueSlug: 'Infantry_Parachute_AT',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
      displayName: 'Anti-Tank',
      icon: FactionUnitIcons.AT,
      role: FactionUnitRoles.MISSILE_SPECIALIST,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_LRAC89_F', // LRAC 89mm Mle
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice_alt',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
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
      uniqueSlug: 'Infantry_Parachute_Marksman',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
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
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice_mc_m56_45',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'AMF_10Rnd_762x51_BO_F3',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 5,
        },
        ...INF_PAMAS_MAGS,
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
    // Automatic Rifleman
    {
      uniqueSlug: 'Infantry_Parachute_AutoRifleman',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
      displayName: 'Automatic Rifleman',
      icon: FactionUnitIcons.MG,
      role: FactionUnitRoles.MACHINE_GUNNER,
      weapons: [
        {
          baseType: 'FN_Minimi_F1', // FN Minimi Para
          optic: 'ScromeJ4_Minimi_NoCover',
        },
        'AMF_Pamas', // PAMAS G1 Pistol
      ],
      gear: [
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice_60',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'AMF_100Rnd_556x45_Minimi_BO_SS109_DCP',
          type: FactionUnitItemTypes.MAGAZINE,
          count: 3,
        },
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
      ],
      backpack: {
        class: 'F1_Sac',
        items: [
          ...INF_STANDARD_BACKPACK_MEDICAL,
          {
            class: 'AMF_100Rnd_556x45_Minimi_BO_SS109_DCP',
            type: FactionUnitBackpackItemTypes.MAGAZINE,
            count: 3,
          },
        ],
      },
    },
    // RTO
    {
      uniqueSlug: 'Infantry_Parachute_RTO',
      baseSoldier: 'Base',
      editorSubcategory: FactionEditorSubcategories.CUSTOM,
      customSubcategoryName: EDITOR_SUBCATEGORY_PARACHUTE_INFANTRY,
      displayName: 'RTO',
      role: FactionUnitRoles.RADIO_OPERATOR,
      weapons: [
        'Famas_F1_PGMP', // Famas Rifle
        'AMF_Pamas', // PAMAS G1 Pistol
        'AMF_APX_M241', // APX M241 Binos
      ],
      gear: [
        ...PARA_STANDARD_GEAR,
        {
          class: 'V_Simc_Alice_mc',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        {
          class: 'CUP_G_RUS_Ratnik_6M21_Summer',
          type: FactionUnitItemTypes.EQUIPPED,
        },
        ...INF_FAMAS_MAGS,
        ...INF_PAMAS_MAGS,
        ...INF_STANDARD_GRENADES,
        ...INF_STANDARD_MEDICAL,
      ],
      backpack: 'Radio_PRC_10',
    },
    // ATGM Gunner
    // Asst. ATGM Gunner
    // Machine Gunner
    // Asst. Machine Gunner
    // Machine Gun Ammo Bearer
    // Mortarman
    // Asst. Mortarman
    // Mortar Ammo Bearer
    // Team Leader
    // Team Leader w/ AT
    // Squad Leader
    // Officer
  ],
  vehicles: [
    // Wheeled: GBC 180 Transport de troupes
    // Wheeled: GBC 180 Transport de troupes (Uncrewed for compositions)
    // Wheeled: VAB Ultima 12.7
    {
      uniqueSlug: 'Wheeled_Basic_VAB_12x7',
      vehicleClass: 'B_AMF_VAB_ULTIMA_X8_F',
      editorSubcategory: FactionEditorSubcategories.WHEELED,
      displayName: 'VAB (12.7mm)',
      crewSlug: 'Infantry_Basic_Vehicle_Commander',
    },
    // Wheeled: VB2L - MAG-58

    // Tracked: VBCI Equipage Francais
    // Tracked: Leclerc Equipage Francais

    // Artillery: MO-120-RT F1
    // Artillery: ARQUUS CAESAR

    // Helicopter: ???
    // Jet: ???
  ],
  groups: [
    {
      name: 'Mechanized Infantry',
      groups: [
        // Rifle Squad
        {
          name: 'Rifle Squad (with VAB)',
          icon: FactionGroupIcons.MECHANIZED_INFANTRY,
          units: [
            // Lead Squad
            {
              unitSlug: 'Infantry_Basic_SquadLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 2, y: 3, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 2, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Marksman',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 2, y: -1, z: 0 },
            },
            // Rifle Team A
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AT',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -3, z: 0 },
            },
            // Rifle Team B
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -2, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AT',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -3, z: 0 },
            },
            // Vehicle
            {
              unitSlug: 'Wheeled_Basic_VAB_12x7',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 5, y: 0, z: 0 },
            },
          ],
        },
        {
          name: 'Rifle Squad',
          icon: FactionGroupIcons.MECHANIZED_INFANTRY,
          units: [
            // Lead Squad
            {
              unitSlug: 'Infantry_Basic_SquadLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 2, y: 3, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 2, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Marksman',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 2, y: -1, z: 0 },
            },
            // Rifle Team A
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AT',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -3, z: 0 },
            },
            // Rifle Team B
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -2, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AT',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -3, z: 0 },
            },
          ],
        },
        // Squad Lead Element
        {
          name: 'Rifle Squad Lead Element',
          icon: FactionGroupIcons.MECHANIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_SquadLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: 2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Marksman',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
          ],
        },
        // Squad Fire Team
        {
          name: 'Rifle Squad Fire Team',
          icon: FactionGroupIcons.MECHANIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AT',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
          ],
        },
        // Platoon HQ
        {
          name: 'Platoon HQ (with VAB)',
          icon: FactionGroupIcons.HQ,
          units: [
            // Platoon Lead
            {
              unitSlug: 'Infantry_Basic_Officer',
              rank: FactionUnitRanks.LIEUTENANT,
              pos: { x: 2, y: 2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 2, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 2, y: -2, z: 0 },
            },
            // ATGM Team A
            {
              unitSlug: 'Infantry_Basic_ATGM_Gunner',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
            // ATGM Team B
            {
              unitSlug: 'Infantry_Basic_ATGM_Gunner',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -2, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -2, z: 0 },
            },
            // Vehicle
            {
              unitSlug: 'Wheeled_Basic_VAB_12x7',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -7, z: 0 },
            },
          ],
        },
        {
          name: 'Platoon HQ',
          icon: FactionGroupIcons.HQ,
          units: [
            // Platoon Lead
            {
              unitSlug: 'Infantry_Basic_Officer',
              rank: FactionUnitRanks.LIEUTENANT,
              pos: { x: 2, y: 2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 2, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 2, y: -2, z: 0 },
            },
            // ATGM Team A
            {
              unitSlug: 'Infantry_Basic_ATGM_Gunner',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
            // ATGM Team B
            {
              unitSlug: 'Infantry_Basic_ATGM_Gunner',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -2, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -2, y: -2, z: 0 },
            },
          ],
        },
        // Platoon Lead Element
        {
          name: 'Platoon Lead Element',
          icon: FactionGroupIcons.HQ,
          units: [
            {
              unitSlug: 'Infantry_Basic_Officer',
              rank: FactionUnitRanks.LIEUTENANT,
              pos: { x: 0, y: 2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_TeamLeader',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: -2, z: 0 },
            },
          ],
        },
        // ATGM Team
        {
          name: 'ATGM Team',
          icon: FactionGroupIcons.MECHANIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_ATGM_Gunner',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 1, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Asst_ATGM_Gunner',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -1, z: 0 },
            },
          ],
        },
      ],
    },
  ],
};

export default {
  header,
  body,
} as const as GeneratorPayloadDefinition;
