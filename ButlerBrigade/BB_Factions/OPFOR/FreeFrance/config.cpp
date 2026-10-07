/**
 * WARNING: THIS FILE HAS BEEN AUTOMATICALLY GENERATED. DO NOT EDIT IT DIRECTLY OR YOU WILL
 * LOSE YOUR CHANGES THE NEXT TIME THE FILE IS GENERATED.
 * If you need to make changes, edit the .generator-payload.ts file that should be alongside
 * this config.cpp.
 */

class CfgPatches {
  class BB_Factions__O_FreeFrance {
    addonRootClass = "BB_Factions";
    author = "wlan0";
    requiredVersion = 1.0;
    requiredAddons[] =
    {
    };
    weapons[] = { };
    units[] =
    {
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Rifleman",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman",
    };
  };
};

class CfgFactionClasses
{
  class BB_Factions__O_FreeFrance
  {
    displayName = "Free France";
    priority = 5;
    side = 0;
  };
};

class CfgEditorCategories
{
  class BB_Factions__O_FreeFrance
  {
    displayName = "Free France";
  };
};

class CfgWeapons
{
  class AMF_RFF2_01_F;
  class BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover: AMF_RFF2_01_F
  {
    scope = 0;
    baseWeapon = "BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "ScromeJ8_NoCover";
      };
    };
  };
};

class CfgVehicles
{
  // * Backpacks ***
  class F1_Sac;
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Rifleman: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
      class _xx_ACE_EarPlugs
      {
        name = "ACE_EarPlugs";
        count = 1;
      };
      class _xx_AMF_MSC_GOGGLES_BLK
      {
        name = "AMF_MSC_GOGGLES_BLK";
        count = 1;
      };
      class _xx_ACE_MapTools
      {
        name = "ACE_MapTools";
        count = 1;
      };
      class _xx_ACE_elasticBandage
      {
        name = "ACE_elasticBandage";
        count = 1;
      };
      class _xx_ACE_packingBandage
      {
        name = "ACE_packingBandage";
        count = 1;
      };
      class _xx_ACE_quikclot
      {
        name = "ACE_quikclot";
        count = 1;
      };
      class _xx_ACE_painkillers
      {
        name = "ACE_painkillers";
        count = 1;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Grenadier: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
      class _xx_ACE_EarPlugs
      {
        name = "ACE_EarPlugs";
        count = 1;
      };
      class _xx_AMF_MSC_GOGGLES_BLK
      {
        name = "AMF_MSC_GOGGLES_BLK";
        count = 1;
      };
      class _xx_ACE_MapTools
      {
        name = "ACE_MapTools";
        count = 1;
      };
      class _xx_ACE_elasticBandage
      {
        name = "ACE_elasticBandage";
        count = 1;
      };
      class _xx_ACE_packingBandage
      {
        name = "ACE_packingBandage";
        count = 1;
      };
      class _xx_ACE_quikclot
      {
        name = "ACE_quikclot";
        count = 1;
      };
      class _xx_ACE_painkillers
      {
        name = "ACE_painkillers";
        count = 1;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
    };
    class TransportMagazines
    {
      class _xx_AMF_RFG_APAV40
      {
        magazine = "AMF_RFG_APAV40";
        count = 4;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_AT: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
      class _xx_ACE_EarPlugs
      {
        name = "ACE_EarPlugs";
        count = 1;
      };
      class _xx_AMF_MSC_GOGGLES_BLK
      {
        name = "AMF_MSC_GOGGLES_BLK";
        count = 1;
      };
      class _xx_ACE_MapTools
      {
        name = "ACE_MapTools";
        count = 1;
      };
      class _xx_ACE_elasticBandage
      {
        name = "ACE_elasticBandage";
        count = 1;
      };
      class _xx_ACE_packingBandage
      {
        name = "ACE_packingBandage";
        count = 1;
      };
      class _xx_ACE_quikclot
      {
        name = "ACE_quikclot";
        count = 1;
      };
      class _xx_ACE_painkillers
      {
        name = "ACE_painkillers";
        count = 1;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
    };
    class TransportMagazines
    {
      class _xx_AMF_AC89mm_F1
      {
        magazine = "AMF_AC89mm_F1";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Marksman: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
      class _xx_ACE_EarPlugs
      {
        name = "ACE_EarPlugs";
        count = 1;
      };
      class _xx_AMF_MSC_GOGGLES_BLK
      {
        name = "AMF_MSC_GOGGLES_BLK";
        count = 1;
      };
      class _xx_ACE_MapTools
      {
        name = "ACE_MapTools";
        count = 1;
      };
      class _xx_ACE_elasticBandage
      {
        name = "ACE_elasticBandage";
        count = 1;
      };
      class _xx_ACE_packingBandage
      {
        name = "ACE_packingBandage";
        count = 1;
      };
      class _xx_ACE_quikclot
      {
        name = "ACE_quikclot";
        count = 1;
      };
      class _xx_ACE_painkillers
      {
        name = "ACE_painkillers";
        count = 1;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_Kestrel4500
      {
        name = "ACE_Kestrel4500";
        count = 1;
      };
      class _xx_ACE_SpottingScope
      {
        name = "ACE_SpottingScope";
        count = 1;
      };
    };
  };
  // ***

  // * Base Units ***
  class O_Soldier_Base_F;
  class BB_Factions__O_FreeFrance__Base_Base: O_Soldier_Base_F
  {
    scope = 0;
    faction = "BB_Factions__O_FreeFrance";
    uniformClass = "Mle_F1_uniform_lizard";
    uniformAccessories[] = { };
    nakedUniform = "U_BasicBody";
    identityTypes[] =
    {
      "LanguageFRE_F",
      "Head_Tanoan",
      "Head_African",
      "Head_Euro",
      "NoGlasses",
    };
  };
  // ***

  // * Soldiers ***

  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Rifleman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Rifleman";
    role = "Rifleman";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Rifleman";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "HandGrenade",
      "HandGrenade",
      "SmokeShell",
      "SmokeShell",
    };
    respawnMagazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "HandGrenade",
      "HandGrenade",
      "SmokeShell",
      "SmokeShell",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Grenadier";
    role = "Grenadier";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Grenadier";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_RFG_APAV40",
      "AMF_RFG_APAV40",
    };
    respawnMagazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_RFG_APAV40",
      "AMF_RFG_APAV40",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Anti-Tank";
    role = "MissileSpecialist";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_AT";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_LRAC89_F",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_LRAC89_F",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "HandGrenade",
      "HandGrenade",
      "SmokeShell",
      "SmokeShell",
      "AMF_AC89mm_F1",
    };
    respawnMagazines[] =
    {
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_25Rnd_BO_MEN_SS109",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "HandGrenade",
      "HandGrenade",
      "SmokeShell",
      "SmokeShell",
      "AMF_AC89mm_F1",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Marksman";
    role = "Marksman";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Marksman";

    weapons[] =
    {
      "BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover",
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };
    respawnMagazines[] =
    {
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_10Rnd_762x51_BO_F3",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "TFAR_fadak",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
    };
  };
  // ***
};

class CfgGroups
{
  class East
  {
    class BB_Factions__O_FreeFrance
    {
      name = "Free France";
    };
  };
};
