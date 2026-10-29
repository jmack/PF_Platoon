import {
  FactionBaseSoldier,
  FactionEditorSubcategories,
  FactionGeneratorPayloadBody,
  FactionGroupIcons,
  FactionSideTypes,
  FactionUnit,
  FactionUnitBackpackItemTypes,
  FactionUnitIcons,
  FactionUnitItemTypes,
  FactionUnitRanks,
  FactionUnitRoles,
  FactionVehicle,
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
    RS2A1_MMG: {
      baseType: 'BB_Gear_PrimaryWeapons_RS2A1',
      optic: 'rhsusf_acc_ELCAN',
    },
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
  RS2A1_75RND_LOAD: {
    class: 'hlc_75Rnd_762x39_m_rpk',
    type: FactionUnitItemTypes.MAGAZINE,
    count: 7,
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
    NONLETHAL: [
      {
        class: 'rhs_mag_m18_purple',
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

const MAP_TOOLS = {
  class: 'ACE_MapTools',
  type: FactionUnitItemTypes.CARRIED,
};

const NOTEPAD = {
  class: 'acex_intelitems_notepad',
  type: FactionUnitItemTypes.CARRIED,
};

const IFAK = {
  class: 'efak_IFAK',
  type: FactionUnitItemTypes.CARRIED,
};

const AFAK_BACKPACK = {
  class: 'efak_AFAK',
  type: FactionUnitBackpackItemTypes.ITEM,
  count: 1,
};

const MFAKP_BACKPACK = {
  class: 'efak_MFAKPlus',
  type: FactionUnitBackpackItemTypes.ITEM,
  count: 1,
};

const SWDG_LOW_FACE_SLOT = {
  class: 'G_SWDG_low',
  type: FactionUnitItemTypes.EQUIPPED,
};

const SWDG_WORN_FACE_SLOT = {
  class: 'G_SWDG',
  type: FactionUnitItemTypes.EQUIPPED,
};

const NOMEX_CUT_FACE_SLOT = {
  class: 'G_Nomex_1_fold_cut',
  type: FactionUnitItemTypes.EQUIPPED,
};

const CANTEEN_RIGHT_FACE_SLOT = {
  class: 'G_botol_regt',
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
const Rifleman_F = TransThem(Rifleman_M);

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
const Grenadier_F = TransThem(Grenadier_M);

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
const Autorifleman_F = TransThem(Autorifleman_M);

// Rifleman (AT)
const RiflemanAT_M: FactionUnit = {
  ...Rifleman_M,
  uniqueSlug: 'Infantry_Basic_Rifleman_AT_M',
  displayName: '[M] Rifleman (AT)',
  role: FactionUnitRoles.MISSILE_SPECIALIST,
  icon: FactionUnitIcons.AT,
  weapons: [...Rifleman_M.weapons, WEAPONS.ANTITANK.AT4],
};
const RiflemanAT_F = TransThem(RiflemanAT_M);

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
const RiflemanAA_F = TransThem(RiflemanAA_M);

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
const Marksman_F = TransThem(Marksman_M);

// MMG Gunner
const MMGGunner_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_MMGGunner_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] MMG Gunner',
  role: FactionUnitRoles.MACHINE_GUNNER,
  icon: FactionUnitIcons.MG,
  weapons: [WEAPONS.MACHINE_GUNS.RS2A1_MMG, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.BASIC,
    VESTS.MACHINE_GUN,
    SWDG_WORN_FACE_SLOT,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RS2A1_75RND_LOAD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    IFAK,
  ],
};
const MMGGunner_F = TransThem(MMGGunner_M);

// Asst. MMG Gunner
const AsstMMGGunner_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_AsstMMGGunner_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Asst. MMG Gunner',
  role: FactionUnitRoles.RIFLEMAN,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.RANGEFINDER],
  gear: [
    // Worn
    HELMETS.INFANTRY.BASIC,
    VESTS.RIFLEMAN,
    SWDG_LOW_FACE_SLOT,
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
    {
      class: 'ACE_SpareBarrel',
      type: FactionUnitItemTypes.CARRIED,
      count: 2,
    },
  ],
};
const AsstMMGGunner_F = TransThem(AsstMMGGunner_M);

// MMG Ammo Bearer
const MMGAmmoBearer_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_MMGAmmoBearer_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] MMG Ammo Bearer',
  role: FactionUnitRoles.RIFLEMAN,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.MACHINE_GUN,
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
  backpack: {
    class: 'B_simc_pack_alice_frame_1',
    items: [
      {
        class: 'hlc_75Rnd_762x39_m_rpk',
        type: FactionUnitBackpackItemTypes.MAGAZINE,
        count: 10,
      },
    ],
  },
};
const MMGAmmoBearer_F = TransThem(MMGAmmoBearer_M);

// Combat Medic
const CombatMedic_M: FactionUnit = {
  ...Rifleman_M,
  uniqueSlug: 'Infantry_Basic_CombatMedic_M',
  displayName: '[M] Combat Medic',
  role: FactionUnitRoles.MEDIC,
  icon: FactionUnitIcons.MEDIC,
  backpack: {
    class: 'cwr3_b_backpack_alice_medic_empty',
    items: [MFAKP_BACKPACK, AFAK_BACKPACK, AFAK_BACKPACK],
  },
};
const CombatMedic_F = TransThem(CombatMedic_M);

// Forward Observer
const ForwardObserver_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_ForwardObserver_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Forward Observer',
  role: FactionUnitRoles.RADIO_OPERATOR,
  icon: FactionUnitIcons.RECON,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.RANGEFINDER],
  gear: [
    // Worn
    HELMETS.INFANTRY.SCRIM,
    VESTS.RIFLEMAN,
    SWDG_LOW_FACE_SLOT,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    GPS,
    ANPRC152,
    WATCHES.ALTIMETER,
    // Magazines
    MAGAZINES.RI3A2_30RND_LIGHT_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    ...GRENADES.INFANTRY.NONLETHAL,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    MAP_TOOLS,
    NOTEPAD,
    IFAK,
    {
      class: 'ACE_PlottingBoard',
      type: FactionUnitItemTypes.CARRIED,
    },
  ],
  backpack: {
    class: 'B_simc_rajio_base',
    items: [],
  },
};
const ForwardObserver_F = TransThem(ForwardObserver_M);

// RTO
const RTO_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_RTO_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] RTO',
  role: FactionUnitRoles.RADIO_OPERATOR,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.RANGEFINDER],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.RADIO,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    GPS,
    ANPRC152,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RI3A2_30RND_LIGHT_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    MAP_TOOLS,
    NOTEPAD,
    IFAK,
  ],
  backpack: {
    class: 'B_simc_rajio_base',
    items: [],
  },
};
const RTO_F = TransThem(RTO_M);

// Team Leader
const TeamLeader_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_TeamLeader_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Team Leader',
  role: FactionUnitRoles.RIFLEMAN,
  icon: FactionUnitIcons.LEADER,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.INFANTRY.BASIC,
    VESTS.RIFLEMAN,
    SWDG_LOW_FACE_SLOT,
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
const TeamLeader_F = TransThem(TeamLeader_M);

// Squad Leader
const SquadLeader_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_SquadLeader_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Squad Leader',
  role: FactionUnitRoles.RIFLEMAN,
  icon: FactionUnitIcons.LEADER,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, WEAPONS.PISTOLS.M9, BINOS.RANGEFINDER],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.RADIO,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    GPS,
    ANPRC152,
    WATCHES.ALTIMETER,
    // Magazines
    MAGAZINES.RI3A2_30RND_STANDARD_LOAD,
    MAGAZINES.M9_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    NOTEPAD,
    IFAK,
  ],
};
const SquadLeader_F = TransThem(SquadLeader_M);

// Officer
const Officer_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_Officer_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Officer',
  role: FactionUnitRoles.RIFLEMAN,
  icon: FactionUnitIcons.OFFICER,
  weapons: [WEAPONS.RIFLES.RI3A2_STANDARD, WEAPONS.PISTOLS.M1911, BINOS.RANGEFINDER],
  gear: [
    // Worn
    HELMETS.INFANTRY.GOGGLES,
    VESTS.RADIO,
    NOMEX_NVG_SLOT,
    MAP,
    COMPASS,
    GPS,
    ANPRC152,
    WATCHES.ALTIMETER,
    // Magazines
    MAGAZINES.RI3A2_30RND_STANDARD_LOAD,
    MAGAZINES.M1911_LOAD,
    ...GRENADES.INFANTRY.STANDARD,
    // Carried
    EARPLUGS,
    ENTRENCHING_TOOL,
    FULTON_MX991,
    MAP_TOOLS,
    NOTEPAD,
    IFAK,
  ],
};
const Officer_F = TransThem(Officer_M);

// Vehicle Crew
const VehicleCrew_M: FactionUnit = {
  uniqueSlug: 'Infantry_Basic_VehicleCrew_M',
  baseSoldier: BASE_M.name,
  editorSubcategory: FactionEditorSubcategories.INFANTRY,
  displayName: '[M] Vehicle Crew',
  role: FactionUnitRoles.CREWMAN,
  weapons: [WEAPONS.RIFLES.RI3A2_CARBINE, BINOS.BASIC],
  gear: [
    // Worn
    HELMETS.CREW.VEHICLE,
    VESTS.PISTOL,
    CANTEEN_RIGHT_FACE_SLOT,
    MAP,
    COMPASS,
    WATCHES.BASIC,
    // Magazines
    MAGAZINES.RI3A2_30RND_LIGHT_LOAD,
    ...GRENADES.INFANTRY.NONLETHAL,
    // Carried
    EARPLUGS,
    FULTON_MX991,
    IFAK,
  ],
};
const VehicleCrew_F = TransThem(VehicleCrew_M);
/***/

/**
 * VEHICLE DEFS
 */
const Humvee_Unarmed: FactionVehicle = {
  uniqueSlug: 'Wheeled_Basic_M1025A2_Unarmed',
  vehicleClass: 'rhsusf_m1025_w',
  editorSubcategory: FactionEditorSubcategories.WHEELED,
  displayName: 'M1025A2 (Unarmed)',
  crewSlug: 'Infantry_Basic_Rifleman_M',
};

const Humvee_Flatbed: FactionVehicle = {
  uniqueSlug: 'Wheeled_Basic_M1097A2_Half',
  vehicleClass: 'rhsusf_m998_w_2dr_halftop',
  editorSubcategory: FactionEditorSubcategories.WHEELED,
  displayName: 'M1097A2 (Open bed)',
  crewSlug: 'Infantry_Basic_Rifleman_M',
};

const Humvee_M2: FactionVehicle = {
  uniqueSlug: 'Wheeled_Basic_M1025A2_M2',
  vehicleClass: 'rhsusf_m1025_w_m2',
  editorSubcategory: FactionEditorSubcategories.WHEELED,
  displayName: 'M1025A2 (M2)',
  crewSlug: 'Infantry_Basic_Rifleman_M',
};

const Humvee_TOW: FactionVehicle = {
  uniqueSlug: 'Wheeled_Basic_M1045_TOW',
  vehicleClass: 'rhsusf_m1045_w',
  editorSubcategory: FactionEditorSubcategories.WHEELED,
  displayName: 'M1045A2 (M220A2)',
  crewSlug: 'Infantry_Basic_Rifleman_M',
};

/**
 * HELPER METHODS
 */
function TransThem(input: FactionUnit): FactionUnit {
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
  units: [
    Rifleman_M,
    Rifleman_F,
    Grenadier_M,
    Grenadier_F,
    Autorifleman_M,
    Autorifleman_F,
    RiflemanAT_M,
    RiflemanAT_F,
    RiflemanAA_M,
    RiflemanAA_F,
    Marksman_M,
    Marksman_F,
    MMGGunner_M,
    MMGGunner_F,
    AsstMMGGunner_M,
    AsstMMGGunner_F,
    MMGAmmoBearer_M,
    MMGAmmoBearer_F,
    VehicleCrew_M,
    VehicleCrew_F,
    CombatMedic_M,
    CombatMedic_F,
    ForwardObserver_M,
    ForwardObserver_F,
    RTO_M,
    RTO_F,
    TeamLeader_M,
    TeamLeader_F,
    SquadLeader_M,
    SquadLeader_F,
    Officer_M,
    Officer_F,
  ],
  vehicles: [Humvee_Unarmed, Humvee_Flatbed, Humvee_M2, Humvee_TOW],
  groups: [
    {
      name: 'Motorized Infantry',
      groups: [
        // Platoon HQ
        {
          name: 'Platoon HQ',
          icon: FactionGroupIcons.HQ,
          units: [
            {
              unitSlug: 'Infantry_Basic_Officer_M',
              rank: FactionUnitRanks.LIEUTENANT,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_SquadLeader_F',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_RTO_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_ForwardObserver_M',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: -6, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_CombatMedic_F',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: -8, z: 0 },
            },
          ],
        },
        // Rifle Squad
        {
          name: 'Rifle Squad',
          icon: FactionGroupIcons.MOTORIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_SquadLeader_M',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 1, y: 0, z: 0 },
            },
            // AT Fireteam
            {
              unitSlug: 'Infantry_Basic_TeamLeader_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 1, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Autorifleman_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -6, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Rifleman_AT_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -8, z: 0 },
            },
            // Marksman Fireteam
            {
              unitSlug: 'Infantry_Basic_TeamLeader_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -1, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Autorifleman_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -1, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -1, y: -6, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Marksman_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -1, y: -8, z: 0 },
            },
          ],
        },
        // Rifle Squad Fireteam (AT)
        {
          name: 'Rifle Squad Fireteam (AT)',
          icon: FactionGroupIcons.MOTORIZED_INFANTRY,
          units: [
            // AT Fireteam
            {
              unitSlug: 'Infantry_Basic_TeamLeader_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Autorifleman_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Rifleman_AT_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -6, z: 0 },
            },
          ],
        },
        // Rifle Squad Fireteam (Marksman)
        {
          name: 'Rifle Squad Fireteam (Marksman)',
          icon: FactionGroupIcons.MOTORIZED_INFANTRY,
          units: [
            // Marksman Fireteam
            {
              unitSlug: 'Infantry_Basic_TeamLeader_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Autorifleman_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Grenadier_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_Marksman_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -6, z: 0 },
            },
          ],
        },
        // Weapons Squad
        {
          name: 'Weapons Squad',
          icon: FactionGroupIcons.MOTORIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_SquadLeader_F',
              rank: FactionUnitRanks.SERGEANT,
              pos: { x: 0, y: 0, z: 0 },
            },
            // Team 1
            {
              unitSlug: 'Infantry_Basic_MMGGunner_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 1, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AsstMMGGunner_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_MMGAmmoBearer_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 1, y: -6, z: 0 },
            },
            // Team 2
            {
              unitSlug: 'Infantry_Basic_MMGGunner_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: -1, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AsstMMGGunner_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -1, y: -4, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_MMGAmmoBearer_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: -1, y: -6, z: 0 },
            },
          ],
        },
        // MMG Team
        {
          name: 'MMG Team',
          icon: FactionGroupIcons.MOTORIZED_INFANTRY,
          units: [
            {
              unitSlug: 'Infantry_Basic_MMGGunner_M',
              rank: FactionUnitRanks.CORPORAL,
              pos: { x: 0, y: 0, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_AsstMMGGunner_M',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -2, z: 0 },
            },
            {
              unitSlug: 'Infantry_Basic_MMGAmmoBearer_F',
              rank: FactionUnitRanks.PRIVATE,
              pos: { x: 0, y: -4, z: 0 },
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
