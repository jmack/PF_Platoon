import {
  FactionBaseSoldier,
  FactionEditorSubcategories,
  FactionGeneratorPayloadBody,
  FactionSideTypes,
  FactionUnit,
  FactionUnitBackpackItemTypes,
  FactionUnitIcons,
  FactionUnitItemTypes,
  FactionUnitRoles,
} from '../../../../build/generators/common/faction/faction.types';
import { GeneratorHeader, GeneratorPayloadDefinition, GeneratorTypes } from '../../../../build/generators/generator.types';

/**
 * UNIT GEAR SHORTHANDS
 */
const WEAPONS = {
  RIFLES: {
    RI3A2_STANDARD: {
      baseType: 'BB_Gear_PrimaryWeapons_RI3A2',
      optic: 'rhs_acc_1p87',
    },
    RI3A2_UGL: {
      baseType: 'BB_Gear_PrimaryWeapons_RI3A2GL',
      optic: 'rhs_acc_1p87',
    },
    RI3A2_CARBINE: {
      baseType: 'BB_Gear_PrimaryWeapons_RI3A2C',
      optic: 'rhs_acc_1p87',
    },
    RI3A2_SSW: {
      baseType: 'BB_Gear_PrimaryWeapons_RI3A2S',
      optic: 'rhs_acc_1p87',
    },
  },
  MACHINE_GUNS: {
    // RS3 (RPK12) (maybe?)
    // RS2A3 (RPK) (maybe?)
  },
  MARKSMAN_RIFLES: {
    RM2A3: {
      baseType: 'BB_Gear_PrimaryWeapons_RM2A3',
      optic: 'rhs_acc_pso1m21',
    },
  },
  PISTOLS: {
    M9: 'rhsusf_weap_m9',
    M1911: 'rhsusf_weap_m1911a1',
  },
  ANTITANK: {
    AT4: 'rhs_weap_M136',
  },
  ANTIAIR: {
    STINGER: 'rhs_weap_fim92',
  },
};

const BINOS = {
  BASIC: 'rhsusf_bino_m24',
  SPOTTING_SCOPE: 'rhsusf_bino_leopold_mk4',
  RANGEFINDER: 'rhsusf_bino_lerca_1200_black',
};

const HELMETS = {
  INFANTRY: {
    BASIC: {
      class: 'usm_helmet_pasgt_ce_wdl',
      type: FactionUnitItemTypes.EQUIPPED,
    },
    GOGGLES: {
      class: 'usm_helmet_pasgt_ceswd_wdl',
      type: FactionUnitItemTypes.EQUIPPED,
    },
    SCRIM: {
      class: 'usm_helmet_pasgt_scrim_wdl',
      type: FactionUnitItemTypes.EQUIPPED,
    },
  },
  CREW: {
    VEHICLE: {
      class: 'rhsusf_cvc_green_alt_helmet',
      type: FactionUnitItemTypes.EQUIPPED,
    },
  },
};

const VESTS = {
  GRENADIER: {
    class: 'usm_vest_pasgt_lbe_gr',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  MACHINE_GUN: {
    class: 'usm_vest_pasgt_lbe_mg',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  PISTOL: {
    class: 'usm_vest_pasgt_lbe_p',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  RIFLEMAN: {
    class: 'usm_vest_pasgt_lbe_rm',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  RIFLEMAN_LIGHT: {
    class: 'usm_vest_pasgt_lbe_rm2',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  RIFLEMAN_PISTOL: {
    class: 'usm_vest_pasgt_lbe_rmp',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  RADIO: {
    class: 'usm_vest_pasgt_lbe_rmpr',
    type: FactionUnitItemTypes.EQUIPPED,
  },
};

const MAGAZINES = {
  RI3A2_30RND_STANDARD_LOAD: {
    class: 'hlc_30Rnd_545x39_EP_ak_Black',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 10,
  },
  RI3A2_30RND_LIGHT_LOAD: {
    class: 'hlc_30Rnd_545x39_EP_ak_Black',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 7,
  },
  RI3A2_60RND_SSW_LOAD: {
    class: 'hlc_60Rnd_545x39_EP_rpk',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 8,
  },
  RM2A3_10RND_LOAD: {
    class: 'rhs_10Rnd_762x54mmR_7N14',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 15,
  },
  GRENADIER_LOAD: [
    {
      class: 'hlc_VOG25_AK',
      type: FactionUnitItemTypes.MAGAZINE,
      count: 21,
    },
    {
      class: 'hlc_GRD_White',
      type: FactionUnitItemTypes.MAGAZINE,
      count: 2,
    },
    {
      class: 'hlc_GRD_yellow',
      type: FactionUnitItemTypes.MAGAZINE,
      count: 2,
    },
  ],
  STINGER_LOAD: {
    ON_BODY: {
      class: 'rhs_fim92_mag',
      type: FactionUnitItemTypes.MAGAZINE,
      count: 1,
    },
    IN_BACKPACK: {
      class: 'rhs_fim92_mag',
      type: FactionUnitBackpackItemTypes.MAGAZINE,
      count: 2,
    },
  },
  M9_LOAD: {
    class: 'rhsusf_mag_15Rnd_9x19_JHP',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 4,
  },
  M1911_LOAD: {
    class: 'rhsusf_mag_7x45acp_MHP',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 4,
  },
};

const GRENADES = {
  INFANTRY: {
    STANDARD: [
      {
        class: 'rhs_mag_m67',
        type: FactionUnitItemTypes.MAGAZINE,
        count: 2,
      },
      {
        class: 'rhs_mag_mk84',
        type: FactionUnitItemTypes.MAGAZINE,
        count: 2,
      },
      {
        class: 'Chemlight_green',
        type: FactionUnitItemTypes.MAGAZINE,
        count: 3,
      },
    ],
  },
};

// Common Gear
const EARPLUGS = {
  class: 'ACE_EarPlugs',
  type: FactionUnitItemTypes.CARRIED,
};

const ENTRENCHING_TOOL = {
  class: 'ACE_EntrenchingTool',
  type: FactionUnitItemTypes.CARRIED,
};

const FULTON_MX991 = {
  class: 'ACE_Flashlight_MX991',
  type: FactionUnitItemTypes.CARRIED,
};

const IFAK = {
  class: 'efak_IFAK',
  type: FactionUnitItemTypes.CARRIED,
};

const SWDG_LOW_FACE_SLOT = {
  class: 'G_SWDG_low',
  type: FactionUnitItemTypes.EQUIPPED,
};

const NOMEX_CUT_FACE_SLOT = {
  class: 'G_Nomex_1_fold_cut',
  type: FactionUnitItemTypes.EQUIPPED,
};

const NOMEX_NVG_SLOT = {
  class: 'nomex_1_fold_addon',
  type: FactionUnitItemTypes.EQUIPPED,
};

const FLAK_556_BANDOLIER_LEFT_NVG_SLOT = {
  class: 'bandolier_flak_556_addon_left',
  type: FactionUnitItemTypes.EQUIPPED,
};

const MAP = {
  class: 'ItemMap',
  type: FactionUnitItemTypes.EQUIPPED,
};

const GPS = {
  class: 'ItemGPS',
  type: FactionUnitItemTypes.EQUIPPED,
};

const ANPRC152 = {
  class: 'TFAR_anprc152',
  type: FactionUnitItemTypes.EQUIPPED,
};

const COMPASS = {
  class: 'ItemCompass',
  type: FactionUnitItemTypes.EQUIPPED,
};

const WATCHES = {
  BASIC: {
    class: 'ItemWatch',
    type: FactionUnitItemTypes.EQUIPPED,
  },
  ALTIMETER: {
    class: 'ACE_Altimeter',
    type: FactionUnitItemTypes.EQUIPPED,
  },
};

/**
 * SOLDIER BASES
 */
const BASE_M: FactionBaseSoldier = {
  name: 'Masc',
  uniformClass: 'BB_Gear_Uniforms_NASRBDU_Masc_Woodland',
  nakedUniform: 'U_BasicBody',
  identityTypes: ['LanguageENG_F', 'Head_NATO', 'Head_Tanoan', 'Head_African', 'Head_Asian', 'Head_Euro', 'NoGlasses'],
  genericNames: 'NASRMasc',
};
const BASE_F: FactionBaseSoldier = {
  name: 'Femme',
  uniformClass: 'BB_Gear_Uniforms_NASRBDU_Femme_Woodland',
  nakedUniform: 'U_BasicBody_Woman',
  identityTypes: [
    'NoVoice',
    'Head_NATO_W',
    'Head_TCGM_Girls_White',
    'Head_TCGM_Girls_Asian',
    'Head_TCGM_Girls_Afro',
    'max_WS1',
    'max_WS2',
    'max_WS3',
    'max_WS4',
    'max_WS5',
    'max_WS6',
    'max_WS7',
    'max_WS8',
    'max_WS9',
    'max_WS10',
    'NoGlasses',
  ],
  genericNames: 'NASRFemme',
};
/***/

/**
 * UNIT DEFS
 */
// Rifleman
const Rifleman_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_Rifleman_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Rifleman',
  role: FactionUnitRoles.RIFLEMAN,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.RIFLEMAN,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RI3A2_30RND_STANDARD_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    IFAK,
  ],
};
const Rifleman_F = ConvertMascToFemme(Rifleman_M);

// Grenadier
const Grenadier_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_Grenadier_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Grenadier',
  role: FactionUnitRoles.RIFLEMAN,
  weapons: [WEAPONS.RIFLES.RI3A2_UGL, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.GRENADIER,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RI3A2_30RND_LIGHT_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    ...MAGAZINES.GRENADIER_LOAD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    IFAK,
  ],
};
const Grenadier_F = ConvertMascToFemme(Grenadier_M);

// Autorifleman
const Autorifleman_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_Autorifleman_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Autorifleman',
  role: FactionUnitRoles.MACHINE_GUNNER,
  icon: FactionUnitIcons.MG,
  weapons: [WEAPONS.RIFLES.RI3A2_SSW, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.BASIC,
    VESTS.MACHINE_GUN,
    SWDG_LOW_FACE_SLOT,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RI3A2_60RND_SSW_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    IFAK,
  ],
};
const Autorifleman_F = ConvertMascToFemme(Autorifleman_M);

// Rifleman (AT)
const RiflemanAT_M: FactionUnit = {
  ...Rifleman_M,
  uniqueSlug: 'Infantry_Basic_Rifleman_AT_M',
  displayName: '[M] Rifleman (AT)',
  role: FactionUnitRoles.MISSILE_SPECIALIST,
  icon: FactionUnitIcons.AT,
  weapons: [...Rifleman_M.weapons, WEAPONS.ANTITANK.AT4],
};
const RiflemanAT_F = ConvertMascToFemme(RiflemanAT_M);

// Rifleman (AA)
const RiflemanAA_M: FactionUnit = {
  ...Rifleman_M,
  uniqueSlug: 'Infantry_Basic_Rifleman_AA_M',
  displayName: '[M] Rifleman (AA)',
  role: FactionUnitRoles.MISSILE_SPECIALIST,
  weapons: [...Rifleman_M.weapons, WEAPONS.ANTIAIR.STINGER],
  gear: [...Rifleman_M.gear, MAGAZINES.STINGER_LOAD.ON_BODY],
  backpack: {
    class: 'B_simc_pack_alice_flak_0',
    items: [MAGAZINES.STINGER_LOAD.IN_BACKPACK],
  },
};
const RiflemanAA_F = ConvertMascToFemme(RiflemanAA_M);

// Marksman
const Marksman_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_Marksman_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Marksman',
  role: FactionUnitRoles.MARKSMAN,
  weapons: [WEAPONS.MARKSMAN_RIFLES.RM2A3, WEAPONS.PISTOLS.M9, BINOS.SPOTTING_SCOPE],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.RIFLEMAN_PISTOL,
    NOMEX_CUT_FACE_SLOT,
    FLAK_556_BANDOLIER_LEFT_NVG_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RM2A3_10RND_LOAD,
    MAGAZINES.M9_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    IFAK,
  ],
};
const Marksman_F = ConvertMascToFemme(Marksman_M);

// MMG Gunner
// Asst. MMG Gunner
// MMG Ammo Bearer
// Combat Medic
// Forward Observer
// RTO
// Team Leader
// Squad Leader
// Officer
// Vehicle Crew
/***/

/**
 * HELPER METHODS
 */
function ConvertMascToFemme(input: FactionUnit): FactionUnit {
  return {
    ...input,
    uniqueSlug: input.uniqueSlug.slice(0, -1) + 'F',
    baseSoldier: BASE_F.name,
    displayName: input.displayName.replace('[M]', '[F]'),
  };
}

/**
 * PAYLOAD DEFS
 */
const header: GeneratorHeader = {
  name: 'BB_Factions__B_NASR',
  generatorType: GeneratorTypes.FACTION,
};

const body: FactionGeneratorPayloadBody = {
  meta: {
    displayName: 'NASR',
    author: 'wlan0',
    priority: 1,
    side: FactionSideTypes.BLUFOR,
    requiredAddons: [],
  },
  baseSoldiers: [BASE_M, BASE_F],
  units: [Rifleman_M, Rifleman_F, Grenadier_M, Grenadier_F, Autorifleman_M, Autorifleman_F, RiflemanAT_M, RiflemanAT_F, RiflemanAA_M, RiflemanAA_F, Marksman_M, Marksman_F],
  vehicles: [],
  groups: [],
};

export default {
  header,
  body,
} as const as GeneratorPayloadDefinition;
