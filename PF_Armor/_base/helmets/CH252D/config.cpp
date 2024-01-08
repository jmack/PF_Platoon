class CfgPatches
{
  class PF_Armor_Helmets_CH252D
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] = {};
    units[] = {};
    weapons[] = {};
  };
};

class CfgWeapons
{
  class ItemInfo;
  class HitpointsProtectionInfo;
  class Face;
  class Head;
  class Neck;
  class OPTRE_UNSC_CH252D_Helmet;
  class OPTRE_UNSC_CH252D_Helmet_Base;

  class OPTRE_UNSC_CH252D_Helmet_dp : OPTRE_UNSC_CH252D_Helmet_Base
  {
    class ItemInfo: ItemInfo
    {
      class HitpointsProtectionInfo : HitpointsProtectionInfo
      {
        class Face;
        class Head;
        class Neck;
      };
    };
  };
  class VES_CH252D_dp : OPTRE_UNSC_CH252D_Helmet_dp {};

  /* 1. Pathfinder */
  class PF_Armor_Helmets_CH252D_Pathfinder_dp : VES_CH252D_dp
  {
    author = "wlan0";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    weaponPoolAvailable = 1;
    picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
    ace_hearing_protection = 5;
    ace_hearing_lowerVolume = 0.25;
    ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
    ace_overlayCracked = "PF_Armor\_base\helmets\CH252D\_textures\hud_cracked.paa";
    displayName = "[PF] CH252D Depolarized (Pathfinder)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\pathfinder\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
    hiddenSelectionsMaterials[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\_materials\odsth3.rvmat",
      ""
    };
    class ItemInfo : ItemInfo
    {
      mass = 30;
      hiddenSelections[] =
      {
        "camo",
        "camo2",
        "H_Ghillie"
      };
      class HitpointsProtectionInfo : HitpointsProtectionInfo
      {
        class Face : Face
        {
          hitpointName = "HitFace";
          armor = 35;
          passThrough = 0.1;
        };
        class Head : Head
        {
          hitPointName = "HitHead";
          armor = 35;
          passThrough = 0.1;
        };
        class Neck : Neck
        {
          hitpointName = "HitNeck";
          armor = 35;
          passThrough = 0.1;
        };
      };
    };
  };

  class PF_Armor_Helmets_CH252D_Pathfinder : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    displayName = "[PF] CH252D (Pathfinder)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\pathfinder\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };

  /* 1-1 Druid */
  /* 1-2 Wizard */
  /* 1-3 Cleric */
  /* 1-4 Bard */
};