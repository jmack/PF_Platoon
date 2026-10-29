/**
 * WARNING: THIS FILE HAS BEEN AUTOMATICALLY GENERATED. DO NOT EDIT IT DIRECTLY OR YOU WILL
 * LOSE YOUR CHANGES THE NEXT TIME THE FILE IS GENERATED.
 * If you need to make changes, edit the .generator-payload.ts file that should be alongside
 * this config.cpp.
 */

class CfgPatches {
  class BB_Factions__B_NASR {
    addonRootClass = "BB_Factions";
    author = "wlan0";
    requiredVersion = 1.0;
    requiredAddons[] =
    {
    };
    weapons[] = { };
    units[] =
    {
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AA_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AA_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_VehicleCrew_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_VehicleCrew_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_CombatMedic_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_CombatMedic_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_ForwardObserver_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_ForwardObserver_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_RTO_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_RTO_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_F",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Officer_M",
      "BB_Factions__B_NASR__Soldier_Infantry_Basic_Officer_F",
      "BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1025A2_Unarmed",
      "BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1097A2_Half",
      "BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1025A2_M2",
      "BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1045_TOW",
    };
  };
};

class CfgFactionClasses
{
  class BB_Factions__B_NASR
  {
    displayName = "NASR";
    priority = 1;
    side = 1;
  };
};

class CfgEditorCategories
{
  class BB_Factions__B_NASR
  {
    displayName = "NASR";
  };
};

class CfgWeapons
{
  class BB_Gear_PrimaryWeapons_RI3A2;
  class BB_Gear_PrimaryWeapons_RI3A2GL;
  class BB_Gear_PrimaryWeapons_RI3A2S;
  class BB_Gear_PrimaryWeapons_RM2A3;
  class BB_Gear_PrimaryWeapons_RS2A1;
  class BB_Gear_PrimaryWeapons_RI3A2C;
  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87: BB_Gear_PrimaryWeapons_RI3A2
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhs_acc_1p87";
      };
    };
  };

  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87: BB_Gear_PrimaryWeapons_RI3A2GL
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhs_acc_1p87";
      };
    };
  };

  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87: BB_Gear_PrimaryWeapons_RI3A2S
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhs_acc_1p87";
      };
    };
  };

  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21: BB_Gear_PrimaryWeapons_RM2A3
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhs_acc_pso1m21";
      };
    };
  };

  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN: BB_Gear_PrimaryWeapons_RS2A1
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhsusf_acc_ELCAN";
      };
    };
  };

  class BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87: BB_Gear_PrimaryWeapons_RI3A2C
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "rhs_acc_1p87";
      };
    };
  };
};

class CfgVehicles
{
  // * Backpacks ***
  class B_simc_pack_alice_flak_0;
  class B_simc_pack_alice_frame_1;
  class cwr3_b_backpack_alice_medic_empty;
  class B_simc_rajio_base;
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_Rifleman_AA_M: B_simc_pack_alice_flak_0
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_rhs_fim92_mag
      {
        magazine = "rhs_fim92_mag";
        count = 2;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_Rifleman_AA_F: B_simc_pack_alice_flak_0
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_rhs_fim92_mag
      {
        magazine = "rhs_fim92_mag";
        count = 2;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_MMGAmmoBearer_M: B_simc_pack_alice_frame_1
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_hlc_75Rnd_762x39_m_rpk
      {
        magazine = "hlc_75Rnd_762x39_m_rpk";
        count = 10;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_MMGAmmoBearer_F: B_simc_pack_alice_frame_1
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_hlc_75Rnd_762x39_m_rpk
      {
        magazine = "hlc_75Rnd_762x39_m_rpk";
        count = 10;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_CombatMedic_M: cwr3_b_backpack_alice_medic_empty
  {
    scope = 1;
    class TransportItems
    {
      class _xx_efak_MFAKPlus
      {
        name = "efak_MFAKPlus";
        count = 1;
      };
      class _xx_efak_AFAK
      {
        name = "efak_AFAK";
        count = 1;
      };
      class _xx_efak_AFAK
      {
        name = "efak_AFAK";
        count = 1;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_CombatMedic_F: cwr3_b_backpack_alice_medic_empty
  {
    scope = 1;
    class TransportItems
    {
      class _xx_efak_MFAKPlus
      {
        name = "efak_MFAKPlus";
        count = 1;
      };
      class _xx_efak_AFAK
      {
        name = "efak_AFAK";
        count = 1;
      };
      class _xx_efak_AFAK
      {
        name = "efak_AFAK";
        count = 1;
      };
    };
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_ForwardObserver_M: B_simc_rajio_base
  {
    scope = 1;
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_ForwardObserver_F: B_simc_rajio_base
  {
    scope = 1;
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_RTO_M: B_simc_rajio_base
  {
    scope = 1;
  };
  class BB_Factions__B_NASR__Backpack_Infantry_Basic_RTO_F: B_simc_rajio_base
  {
    scope = 1;
  };
  // ***

  // * Base Units ***
  class B_Soldier_Base_F;
  class BB_Factions__B_NASR__Base_Masc: B_Soldier_Base_F
  {
    scope = 0;
    faction = "BB_Factions__B_NASR";
    uniformClass = "BB_Gear_Uniforms_NASRBDU_Masc_Woodland";
    uniformAccessories[] = { };
    nakedUniform = "U_BasicBody";
    genericNames = "NASRMasc";
    identityTypes[] =
    {
      "LanguageENG_F",
      "Head_NATO",
      "Head_Tanoan",
      "Head_African",
      "Head_Asian",
      "Head_Euro",
      "NoGlasses",
    };
  };
  class BB_Factions__B_NASR__Base_Femme: B_Soldier_Base_F
  {
    scope = 0;
    faction = "BB_Factions__B_NASR";
    uniformClass = "BB_Gear_Uniforms_NASRBDU_Femme_Woodland";
    uniformAccessories[] = { };
    nakedUniform = "U_BasicBody_Woman";
    genericNames = "NASRFemme";
    identityTypes[] =
    {
      "NoVoice",
      "Head_NATO_W",
      "Head_TCGM_Girls_White",
      "Head_TCGM_Girls_Asian",
      "Head_TCGM_Girls_Afro",
      "max_WS1",
      "max_WS2",
      "max_WS3",
      "max_WS4",
      "max_WS5",
      "max_WS6",
      "max_WS7",
      "max_WS8",
      "max_WS9",
      "max_WS10",
      "NoGlasses",
    };
  };
  // ***

  // * Soldiers ***
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Rifleman";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Rifleman";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Grenadier";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_GRD_White",
      "hlc_GRD_White",
      "hlc_GRD_yellow",
      "hlc_GRD_yellow",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_GRD_White",
      "hlc_GRD_White",
      "hlc_GRD_yellow",
      "hlc_GRD_yellow",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_gr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_gr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Grenadier";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2GL__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_GRD_White",
      "hlc_GRD_White",
      "hlc_GRD_yellow",
      "hlc_GRD_yellow",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_VOG25_AK",
      "hlc_GRD_White",
      "hlc_GRD_White",
      "hlc_GRD_yellow",
      "hlc_GRD_yellow",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_gr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_gr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Autorifleman";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Autorifleman";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2S__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "hlc_60Rnd_545x39_EP_rpk",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_M136",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_M136",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_M136",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_M136",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AA_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Rifleman (AA)";
    role = "MissileSpecialist";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_Rifleman_AA_M";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_fim92",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_fim92",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_fim92_mag",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_fim92_mag",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AA_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Rifleman (AA)";
    role = "MissileSpecialist";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_Rifleman_AA_F";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_fim92",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "rhs_weap_fim92",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_fim92_mag",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_fim92_mag",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Marksman";
    role = "Marksman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21",
      "rhsusf_weap_m9",
      "rhsusf_bino_leopold_mk4",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21",
      "rhsusf_weap_m9",
      "rhsusf_bino_leopold_mk4",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmp",
      "G_Nomex_1_fold_cut",
      "bandolier_flak_556_addon_left",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmp",
      "G_Nomex_1_fold_cut",
      "bandolier_flak_556_addon_left",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Marksman";
    role = "Marksman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21",
      "rhsusf_weap_m9",
      "rhsusf_bino_leopold_mk4",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RM2A3__rhs_acc_pso1m21",
      "rhsusf_weap_m9",
      "rhsusf_bino_leopold_mk4",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhs_10Rnd_762x54mmR_7N14",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmp",
      "G_Nomex_1_fold_cut",
      "bandolier_flak_556_addon_left",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmp",
      "G_Nomex_1_fold_cut",
      "bandolier_flak_556_addon_left",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] MMG Gunner";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
    };
    respawnMagazines[] =
    {
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] MMG Gunner";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RS2A1__rhsusf_acc_ELCAN",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
    };
    respawnMagazines[] =
    {
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
      "hlc_75Rnd_762x39_m_rpk",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_mg",
      "G_SWDG",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Asst. MMG Gunner";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
      "ACE_SpareBarrel",
      "ACE_SpareBarrel",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
      "ACE_SpareBarrel",
      "ACE_SpareBarrel",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Asst. MMG Gunner";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
      "ACE_SpareBarrel",
      "ACE_SpareBarrel",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
      "ACE_SpareBarrel",
      "ACE_SpareBarrel",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] MMG Ammo Bearer";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_MMGAmmoBearer_M";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_mg",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_mg",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] MMG Ammo Bearer";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_MMGAmmoBearer_F";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_mg",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_mg",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_VehicleCrew_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Vehicle Crew";
    role = "Crewman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "rhsusf_cvc_green_alt_helmet",
      "usm_vest_pasgt_lbe_p",
      "G_botol_regt",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "rhsusf_cvc_green_alt_helmet",
      "usm_vest_pasgt_lbe_p",
      "G_botol_regt",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_VehicleCrew_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Vehicle Crew";
    role = "Crewman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2C__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "rhsusf_cvc_green_alt_helmet",
      "usm_vest_pasgt_lbe_p",
      "G_botol_regt",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "rhsusf_cvc_green_alt_helmet",
      "usm_vest_pasgt_lbe_p",
      "G_botol_regt",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_CombatMedic_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Combat Medic";
    role = "CombatLifeSaver";
    icon = "iconManMedic";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_CombatMedic_M";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_CombatMedic_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Combat Medic";
    role = "CombatLifeSaver";
    icon = "iconManMedic";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_CombatMedic_F";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rm",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_ForwardObserver_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Forward Observer";
    role = "RadioOperator";
    icon = "iconManRecon";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_ForwardObserver_M";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_scrim_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_scrim_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
      "ACE_PlottingBoard",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
      "ACE_PlottingBoard",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_ForwardObserver_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Forward Observer";
    role = "RadioOperator";
    icon = "iconManRecon";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_ForwardObserver_F";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
      "rhs_mag_m18_purple",
      "rhs_mag_m18_purple",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_scrim_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_scrim_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
      "ACE_PlottingBoard",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
      "ACE_PlottingBoard",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_RTO_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] RTO";
    role = "RadioOperator";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_RTO_M";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_RTO_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] RTO";
    role = "RadioOperator";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__B_NASR__Backpack_Infantry_Basic_RTO_F";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Team Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Team Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_bino_m24",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ce_wdl",
      "usm_vest_pasgt_lbe_rm",
      "G_SWDG_low",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemWatch",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Squad Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m9",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m9",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Squad Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m9",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m9",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhsusf_mag_15Rnd_9x19_JHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Officer_M: BB_Factions__B_NASR__Base_Masc
  {
    displayName = "[M] Officer";
    role = "Rifleman";
    icon = "iconManOfficer";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m1911a1",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m1911a1",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  class BB_Factions__B_NASR__Soldier_Infantry_Basic_Officer_F: BB_Factions__B_NASR__Base_Femme
  {
    displayName = "[F] Officer";
    role = "Rifleman";
    icon = "iconManOfficer";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m1911a1",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__B_NASR__Weapon_BB_Gear_PrimaryWeapons_RI3A2__rhs_acc_1p87",
      "rhsusf_weap_m1911a1",
      "rhsusf_bino_lerca_1200_black",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };
    respawnMagazines[] =
    {
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "hlc_30Rnd_545x39_EP_ak_Black",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhsusf_mag_7x45acp_MHP",
      "rhs_mag_m67",
      "rhs_mag_m67",
      "rhs_mag_mk84",
      "rhs_mag_mk84",
      "Chemlight_green",
      "Chemlight_green",
      "Chemlight_green",
    };

    linkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "usm_helmet_pasgt_ceswd_wdl",
      "usm_vest_pasgt_lbe_rmpr",
      "nomex_1_fold_addon",
      "ItemMap",
      "ItemCompass",
      "ItemGPS",
      "TFAR_anprc152",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EarPlugs",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "ACE_MapTools",
      "acex_intelitems_notepad",
      "efak_IFAK",
    };
  };
  // ***

  // * Vehicles ***
  class rhsusf_m1025_w;
  class rhsusf_m998_w_2dr_halftop;
  class rhsusf_m1025_w_m2;
  class rhsusf_m1045_w;
  class BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1025A2_Unarmed: rhsusf_m1025_w
  {
    displayName = "M1025A2 (Unarmed)";

    scope = 2;
    scopeCurator = 2;

    side = 1;
    faction = "BB_Factions__B_NASR";

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Wheeled";

    crew = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M";
  };
  class BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1097A2_Half: rhsusf_m998_w_2dr_halftop
  {
    displayName = "M1097A2 (Open bed)";

    scope = 2;
    scopeCurator = 2;

    side = 1;
    faction = "BB_Factions__B_NASR";

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Wheeled";

    crew = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M";
  };
  class BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1025A2_M2: rhsusf_m1025_w_m2
  {
    displayName = "M1025A2 (M2)";

    scope = 2;
    scopeCurator = 2;

    side = 1;
    faction = "BB_Factions__B_NASR";

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Wheeled";

    crew = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M";
  };
  class BB_Factions__B_NASR__Soldier_Wheeled_Basic_M1045_TOW: rhsusf_m1045_w
  {
    displayName = "M1045A2 (M220A2)";

    scope = 2;
    scopeCurator = 2;

    side = 1;
    faction = "BB_Factions__B_NASR";

    editorCategory = "BB_Factions__B_NASR";
    editorSubcategory = "BB_Factions_EdSubcat_Wheeled";

    crew = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_M";
  };
  // ***
};

class CfgGroups
{
  class West
  {
    class BB_Factions__B_NASR
    {
      name = "NASR";

      class Motorized_Infantry
      {
        name = "Motorized Infantry";

        class BB_Factions__B_NASR__Group_Platoon_HQ
        {
          name = "Platoon HQ";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_hq.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Officer_M";
            rank = "LIEUTENANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_F";
            rank = "SERGEANT";
            position[] = { 0, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_RTO_M";
            rank = "CORPORAL";
            position[] = { 0, -4, 0 };
          };
          class Unit3
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_ForwardObserver_M";
            rank = "SERGEANT";
            position[] = { 0, -6, 0 };
          };
          class Unit4
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_CombatMedic_F";
            rank = "CORPORAL";
            position[] = { 0, -8, 0 };
          };
        };
        class BB_Factions__B_NASR__Group_Rifle_Squad
        {
          name = "Rifle Squad";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_M";
            rank = "SERGEANT";
            position[] = { 1, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M";
            rank = "CORPORAL";
            position[] = { 1, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_F";
            rank = "PRIVATE";
            position[] = { 1, -4, 0 };
          };
          class Unit3
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M";
            rank = "PRIVATE";
            position[] = { 1, -6, 0 };
          };
          class Unit4
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_F";
            rank = "PRIVATE";
            position[] = { 1, -8, 0 };
          };
          class Unit5
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M";
            rank = "CORPORAL";
            position[] = { -1, -2, 0 };
          };
          class Unit6
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_M";
            rank = "PRIVATE";
            position[] = { -1, -4, 0 };
          };
          class Unit7
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M";
            rank = "PRIVATE";
            position[] = { -1, -6, 0 };
          };
          class Unit8
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_M";
            rank = "PRIVATE";
            position[] = { -1, -8, 0 };
          };
        };
        class BB_Factions__B_NASR__Group_Rifle_Squad_Fireteam_AT
        {
          name = "Rifle Squad Fireteam (AT)";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_F";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M";
            rank = "PRIVATE";
            position[] = { 0, -4, 0 };
          };
          class Unit3
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Rifleman_AT_F";
            rank = "PRIVATE";
            position[] = { 0, -6, 0 };
          };
        };
        class BB_Factions__B_NASR__Group_Rifle_Squad_Fireteam_Marksman
        {
          name = "Rifle Squad Fireteam (Marksman)";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_TeamLeader_M";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Autorifleman_M";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Grenadier_M";
            rank = "PRIVATE";
            position[] = { 0, -4, 0 };
          };
          class Unit3
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_Marksman_M";
            rank = "PRIVATE";
            position[] = { 0, -6, 0 };
          };
        };
        class BB_Factions__B_NASR__Group_Weapons_Squad
        {
          name = "Weapons Squad";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_SquadLeader_F";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_M";
            rank = "CORPORAL";
            position[] = { 1, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_M";
            rank = "PRIVATE";
            position[] = { 1, -4, 0 };
          };
          class Unit3
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_F";
            rank = "PRIVATE";
            position[] = { 1, -6, 0 };
          };
          class Unit4
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_M";
            rank = "CORPORAL";
            position[] = { -1, -2, 0 };
          };
          class Unit5
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_F";
            rank = "PRIVATE";
            position[] = { -1, -4, 0 };
          };
          class Unit6
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_M";
            rank = "PRIVATE";
            position[] = { -1, -6, 0 };
          };
        };
        class BB_Factions__B_NASR__Group_MMG_Team
        {
          name = "MMG Team";
          side = 1;
          faction = "BB_Factions__B_NASR";
          icon = "A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

          class Unit0
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGGunner_M";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_AsstMMGGunner_M";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
          class Unit2
          {
            side = 1;
            vehicle = "BB_Factions__B_NASR__Soldier_Infantry_Basic_MMGAmmoBearer_F";
            rank = "PRIVATE";
            position[] = { 0, -4, 0 };
          };
        };
      };
    };
  };
};
