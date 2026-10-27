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
};

class CfgVehicles
{
  // * Backpacks ***

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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
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
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_MX991",
      "efak_IFAK",
    };
  };
  // ***

  // * Vehicles ***
  // ***
};

class CfgGroups
{
  class West
  {
    class BB_Factions__B_NASR
    {
      name = "NASR";

    };
  };
};
