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
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Pathfinder";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "off";
    };

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
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Pathfinder";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };

    displayName = "[PF] CH252D (Pathfinder)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\pathfinder\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };

  /* 1-1 Druid */
  class PF_Armor_Helmets_CH252D_Druid_dp : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Druid";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "off";
    };

    displayName = "[PF] CH252D Depolarized (Druid)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\druid\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
  class PF_Armor_Helmets_CH252D_Druid : PF_Armor_Helmets_CH252D_Druid_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Druid";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };

    displayName = "[PF] CH252D (Druid)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\druid\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };

  /* 1-2 Wizard */
  class PF_Armor_Helmets_CH252D_Wizard_dp : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Wizard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "off";
    };

    displayName = "[PF] CH252D Depolarized (Wizard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\wizard\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
  class PF_Armor_Helmets_CH252D_Wizard : PF_Armor_Helmets_CH252D_Wizard_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Wizard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };

    displayName = "[PF] CH252D (Wizard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\wizard\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };

  /* 1-3 Cleric */
  class PF_Armor_Helmets_CH252D_Cleric_dp : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Cleric";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "off";
    };

    displayName = "[PF] CH252D Depolarized (Cleric)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\cleric\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
  class PF_Armor_Helmets_CH252D_Cleric : PF_Armor_Helmets_CH252D_Cleric_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Cleric";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };

    displayName = "[PF] CH252D (Cleric)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\cleric\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };

  /* 1-4 Bard */
  class PF_Armor_Helmets_CH252D_Bard_dp : PF_Armor_Helmets_CH252D_Pathfinder_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Bard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "off";
    };

    displayName = "[PF] CH252D Depolarized (Bard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\bard\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
    };
  };
  class PF_Armor_Helmets_CH252D_Bard : PF_Armor_Helmets_CH252D_Bard_dp
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Bard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };

    displayName = "[PF] CH252D (Bard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\CH252D\_textures\Bard\black.paa",
      "PF_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
    };
  };
};