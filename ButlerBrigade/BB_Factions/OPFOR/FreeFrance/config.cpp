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
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_MachineGunner",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AsstMachineGunner",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_SquadLeader",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Officer",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Vehicle_Crew",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Vehicle_Commander",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Rifleman",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Grenadier",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_AT",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Marksman",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_AutoRifleman",
      "BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_RTO",
      "BB_Factions__O_FreeFrance__Soldier_Wheeled_Basic_VAB_12x7",
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

class CfgEditorSubcategories
{
  class BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry
  {
    displayName = "Parachute Infantry";
  };
};

class CfgWeapons
{
  class AMF_RFF2_01_F;
  class FN_Minimi_F1;
  class BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover: AMF_RFF2_01_F
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
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

  class BB_Factions__O_FreeFrance__Weapon_FN_Minimi_F1__ScromeJ4_Minimi_NoCover: FN_Minimi_F1
  {
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    baseWeapon = "BB_Factions__O_FreeFrance__Weapon_FN_Minimi_F1__ScromeJ4_Minimi_NoCover";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "ScromeJ4_Minimi_NoCover";
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Grenadier: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_AsstMachineGunner: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
      class _xx_ACE_SpareBarrel
      {
        name = "ACE_SpareBarrel";
        count = 2;
      };
    };
    class TransportMagazines
    {
      class _xx_AMF_100Rnd_556x45_Minimi_BO_SS109_DCP
      {
        magazine = "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP";
        count = 5;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Asst_ATGM_Gunner: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_TeamLeader: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_SquadLeader: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Officer: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Rifleman: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
  };
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Grenadier: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_AT: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Marksman: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
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
  class BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_AutoRifleman: F1_Sac
  {
    scope = 1;
    class TransportItems
    {
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
        count = 2;
      };
      class _xx_ACE_tourniquet
      {
        name = "ACE_tourniquet";
        count = 1;
      };
      class _xx_ACE_morphine
      {
        name = "ACE_morphine";
        count = 1;
      };
    };
    class TransportMagazines
    {
      class _xx_AMF_100Rnd_556x45_Minimi_BO_SS109_DCP
      {
        magazine = "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP";
        count = 3;
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
      "Head_TK",
      "NoGlasses",
    };
  };
  class BB_Factions__O_FreeFrance__Base_Base_Rolled: O_Soldier_Base_F
  {
    scope = 0;
    faction = "BB_Factions__O_FreeFrance";
    uniformClass = "Mle_F1_uniform_lizard_roll";
    uniformAccessories[] = { };
    nakedUniform = "U_BasicBody";
    identityTypes[] =
    {
      "LanguageFRE_F",
      "Head_Tanoan",
      "Head_African",
      "Head_TK",
      "NoGlasses",
    };
  };
  class BB_Factions__O_FreeFrance__Base_White: O_Soldier_Base_F
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
      "Head_TK",
      "Head_Euro",
      "NoGlasses",
    };
  };
  class BB_Factions__O_FreeFrance__Base_White_Rolled: O_Soldier_Base_F
  {
    scope = 0;
    faction = "BB_Factions__O_FreeFrance";
    uniformClass = "Mle_F1_uniform_lizard_roll";
    uniformAccessories[] = { };
    nakedUniform = "U_BasicBody";
    identityTypes[] =
    {
      "LanguageFRE_F",
      "Head_Tanoan",
      "Head_African",
      "Head_TK",
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
    icon = "iconMan";

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
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Grenadier";
    role = "Grenadier";
    icon = "iconMan";

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
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Anti-Tank";
    role = "MissileSpecialist";
    icon = "iconManAT";

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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Marksman";
    role = "Marksman";
    icon = "iconMan";

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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_MachineGunner: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Machine Gunner";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "FN_Minimi_F1",
      "AMF_Pamas",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "FN_Minimi_F1",
      "AMF_Pamas",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
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
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_60",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AsstMachineGunner: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Asst. Machine Gunner";
    role = "Assistant";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_AsstMachineGunner";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
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
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "RTO";
    role = "RadioOperator";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "Radio_PRC_10";

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
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner: BB_Factions__O_FreeFrance__Base_Base_Rolled
  {
    displayName = "ATGM Gunner";
    role = "MissileSpecialist";
    icon = "iconManAT";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "MILAN_tripod_80";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
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
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "nomex_1_lang_addon",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "nomex_1_lang_addon",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner: BB_Factions__O_FreeFrance__Base_Base_Rolled
  {
    displayName = "Asst. ATGM Gunner";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Asst_ATGM_Gunner";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
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
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "nomex_1_lang_addon",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "nomex_1_lang_addon",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Team Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_TeamLeader";

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
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_SquadLeader: BB_Factions__O_FreeFrance__Base_White
  {
    displayName = "Squad Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_SquadLeader";

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
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Officer: BB_Factions__O_FreeFrance__Base_White
  {
    displayName = "Officer";
    role = "Rifleman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Basic_Officer";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "AMF_VectorIV",
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
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "CUP_G_PMC_RadioHeadset",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_m1_olive",
      "ItemCompass",
      "ItemWatch",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
      "V_Simc_flak_alice",
      "CUP_G_PMC_RadioHeadset",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Vehicle_Crew: BB_Factions__O_FreeFrance__Base_Base_Rolled
  {
    displayName = "Vehicle Crew";
    role = "Crewman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };
    respawnMagazines[] =
    {
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_cvc",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45_ligt",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_cvc",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45_ligt",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Vehicle_Commander: BB_Factions__O_FreeFrance__Base_White_Rolled
  {
    displayName = "Vehicle Commander";
    role = "Crewman";
    icon = "iconManLeader";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Infantry";

    weapons[] =
    {
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "AMF_Pamas",
      "AMF_APX_M241",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };
    respawnMagazines[] =
    {
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
    };

    linkedItems[] =
    {
      "cwr3_b_headgear_cvc_goggles",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45_ligt",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
    };
    respawnLinkedItems[] =
    {
      "cwr3_b_headgear_cvc_goggles",
      "ItemCompass",
      "ItemWatch",
      "V_Simc_flak_alice_45_ligt",
      "TFAR_fadak",
      "ItemGPS",
      "ItemMap",
    };

    items[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
    respawnItems[] =
    {
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_MapTools",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Rifleman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Rifleman";
    role = "Rifleman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Rifleman";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
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
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_alt",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_alt",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Grenadier: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Grenadier";
    role = "Grenadier";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Grenadier";

    weapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Famas_F1_PGMP",
      "AMF_Pamas",
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
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_15Rnd_9x19_PAMAS",
      "AMF_RFG_APAV40",
      "AMF_RFG_APAV40",
    };

    linkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_AT: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Anti-Tank";
    role = "MissileSpecialist";
    icon = "iconManAT";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_AT";

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
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_alt",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_alt",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_Marksman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Marksman";
    role = "Marksman";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_Marksman";

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
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_mc_m56_45",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_mc_m56_45",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_AutoRifleman: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "Automatic Rifleman";
    role = "MachineGunner";
    icon = "iconManMG";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "BB_Factions__O_FreeFrance__Backpack_Infantry_Parachute_AutoRifleman";

    weapons[] =
    {
      "BB_Factions__O_FreeFrance__Weapon_FN_Minimi_F1__ScromeJ4_Minimi_NoCover",
      "AMF_Pamas",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "BB_Factions__O_FreeFrance__Weapon_FN_Minimi_F1__ScromeJ4_Minimi_NoCover",
      "AMF_Pamas",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
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
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
      "AMF_100Rnd_556x45_Minimi_BO_SS109_DCP",
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
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_60",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_60",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
    };
  };
  class BB_Factions__O_FreeFrance__Soldier_Infantry_Parachute_RTO: BB_Factions__O_FreeFrance__Base_Base
  {
    displayName = "RTO";
    role = "RadioOperator";
    icon = "iconMan";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions__O_FreeFrance__EditorSubcategories_Parachute_Infantry";

    backpack = "Radio_PRC_10";

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
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_mc",
      "CUP_G_RUS_Ratnik_6M21_Summer",
    };
    respawnLinkedItems[] =
    {
      "AMF_BERET_MARINE_PARA",
      "ItemCompass",
      "ItemMap",
      "ACE_Altimeter",
      "V_Simc_Alice_mc",
      "CUP_G_RUS_Ratnik_6M21_Summer",
    };

    items[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
    respawnItems[] =
    {
      "ACE_MapTools",
      "ACE_EntrenchingTool",
      "ACE_Flashlight_XL50",
      "ACE_EarPlugs",
      "ACE_elasticBandage",
      "ACE_packingBandage",
      "ACE_quikclot",
      "ACE_painkillers",
      "ACE_painkillers",
      "ACE_tourniquet",
      "ACE_morphine",
    };
  };
  // ***

  // * Vehicles ***
  class B_AMF_VAB_ULTIMA_X8_F;
  class BB_Factions__O_FreeFrance__Soldier_Wheeled_Basic_VAB_12x7: B_AMF_VAB_ULTIMA_X8_F
  {
    displayName = "VAB (12.7mm)";

    scope = 2;
    scopeCurator = 2;

    side = 0;
    faction = "BB_Factions__O_FreeFrance";

    editorCategory = "BB_Factions__O_FreeFrance";
    editorSubcategory = "BB_Factions_EdSubcat_Wheeled";

    crew = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Vehicle_Commander";
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

      class Mechanized_Infantry
      {
        name = "Mechanized Infantry";

        class BB_Factions__O_FreeFrance__Group_Rifle_Squad_with_VAB
        {
          name = "Rifle Squad (with VAB)";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_SquadLeader";
            rank = "SERGEANT";
            position[] = { 2, 3, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 2, 1, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman";
            rank = "PRIVATE";
            position[] = { 2, -1, 0 };
          };
          class Unit3
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "CORPORAL";
            position[] = { 0, 1, 0 };
          };
          class Unit4
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT";
            rank = "PRIVATE";
            position[] = { 0, -1, 0 };
          };
          class Unit5
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier";
            rank = "PRIVATE";
            position[] = { 0, -3, 0 };
          };
          class Unit6
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "CORPORAL";
            position[] = { -2, 1, 0 };
          };
          class Unit7
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT";
            rank = "PRIVATE";
            position[] = { -2, -1, 0 };
          };
          class Unit8
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier";
            rank = "PRIVATE";
            position[] = { -2, -3, 0 };
          };
          class Unit9
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Wheeled_Basic_VAB_12x7";
            rank = "PRIVATE";
            position[] = { 5, 0, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Rifle_Squad
        {
          name = "Rifle Squad";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_SquadLeader";
            rank = "SERGEANT";
            position[] = { 2, 3, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 2, 1, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman";
            rank = "PRIVATE";
            position[] = { 2, -1, 0 };
          };
          class Unit3
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "CORPORAL";
            position[] = { 0, 1, 0 };
          };
          class Unit4
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT";
            rank = "PRIVATE";
            position[] = { 0, -1, 0 };
          };
          class Unit5
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier";
            rank = "PRIVATE";
            position[] = { 0, -3, 0 };
          };
          class Unit6
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "CORPORAL";
            position[] = { -2, 1, 0 };
          };
          class Unit7
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT";
            rank = "PRIVATE";
            position[] = { -2, -1, 0 };
          };
          class Unit8
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier";
            rank = "PRIVATE";
            position[] = { -2, -3, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Rifle_Squad_Lead_Element
        {
          name = "Rifle Squad Lead Element";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_SquadLeader";
            rank = "SERGEANT";
            position[] = { 0, 2, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Marksman";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Rifle_Squad_Fire_Team
        {
          name = "Rifle Squad Fire Team";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "CORPORAL";
            position[] = { 0, 2, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_AT";
            rank = "PRIVATE";
            position[] = { 0, 0, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Grenadier";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Platoon_HQ_with_VAB
        {
          name = "Platoon HQ (with VAB)";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_hq.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Officer";
            rank = "LIEUTENANT";
            position[] = { 2, 2, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "SERGEANT";
            position[] = { 2, 0, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 2, -2, 0 };
          };
          class Unit3
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit4
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
          class Unit5
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner";
            rank = "CORPORAL";
            position[] = { -2, 0, 0 };
          };
          class Unit6
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
          class Unit7
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Wheeled_Basic_VAB_12x7";
            rank = "PRIVATE";
            position[] = { 1, -7, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Platoon_HQ
        {
          name = "Platoon HQ";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_hq.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Officer";
            rank = "LIEUTENANT";
            position[] = { 2, 2, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "SERGEANT";
            position[] = { 2, 0, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 2, -2, 0 };
          };
          class Unit3
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit4
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner";
            rank = "PRIVATE";
            position[] = { 0, -2, 0 };
          };
          class Unit5
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner";
            rank = "CORPORAL";
            position[] = { -2, 0, 0 };
          };
          class Unit6
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_Platoon_Lead_Element
        {
          name = "Platoon Lead Element";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_hq.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Officer";
            rank = "LIEUTENANT";
            position[] = { 0, 2, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_TeamLeader";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_RTO";
            rank = "CORPORAL";
            position[] = { 0, -2, 0 };
          };
        };
        class BB_Factions__O_FreeFrance__Group_ATGM_Team
        {
          name = "ATGM Team";
          side = 0;
          faction = "BB_Factions__O_FreeFrance";
          icon = "A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_ATGM_Gunner";
            rank = "CORPORAL";
            position[] = { 0, 1, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "BB_Factions__O_FreeFrance__Soldier_Infantry_Basic_Asst_ATGM_Gunner";
            rank = "PRIVATE";
            position[] = { 0, -1, 0 };
          };
        };
      };
    };
  };
};
