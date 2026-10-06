/**
 * WARNING: THIS FILE HAS BEEN AUTOMATICALLY GENERATED. DO NOT EDIT IT DIRECTLY OR YOU WILL
 * LOSE YOUR CHANGES THE NEXT TIME THE FILE IS GENERATED.
 * If you need to make changes, edit the .generator-payload.ts file that should be alongside
 * this config.cpp.
 */

class CfgPatches {
  class BB_Factions__O_FreeFrance {
    addonRootClass = "BB_Factions";
    author = "wlan0",
    requiredVersion = 1.0;
    requiredAddons[] = {};
    weapons[] = { };
    units[] = {};
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

  class BB_Factions__O_FreeFrance__Weapon_AMF_RFF2_01_F__ScromeJ8_NoCover
  {
    baseWeapon = "AMF_RFF2_01_F";

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
  class BB_Factions__O_FreeFrance__Backpack_INFANTRY_Rifleman
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
  class BB_Factions__O_FreeFrance__Backpack_INFANTRY_Grenadier
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
  class BB_Factions__O_FreeFrance__Backpack_INFANTRY_AntiTank
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
  class BB_Factions__O_FreeFrance__Backpack_INFANTRY_Marksman
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
      "G_CIV_exp",
      "G_CIVIL_male",
      "NoGlasses",
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
