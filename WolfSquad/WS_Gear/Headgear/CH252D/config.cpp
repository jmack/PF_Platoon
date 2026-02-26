class CfgPatches
{
  class WS_CH252D_Helmet
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
  }
}

/* Metaitem Definitions */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_CH252D_Helmet_Metaitem
    {
      label = "Wolf Squad CH252D";
      options[] =
      {
        "type",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "standard",
          "dukova",
          "finch",
          "hayes",
          "mickelson",
        };
        class standard
        {
          label = "Standard";
        };
        class dukova
        {
          label = "L. Dukova";
        };
        class finch
        {
          label = "C. Finch";
        };
        class hayes
        {
          label = "S. Hayes";
        };
        class mickelson
        {
          label = "L. Mickelson";
        };
      };
    };
  };
};

/* Helmet Definitions */
class CfgWeapons
{
  /* Base Item */
  class ItemCore;
  class ItemInfo;
  class HeadgearItem;
  class WS_CH252D_Helmet_Base: ItemCore
  {
    class XtdGearInfo
    {
      model = "WS_CH252D_Helmet_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] CH252D Helmet";

    model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture = "WS_Gear\Headgear\CH252D\_data\ch252d_icon.paa";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_base.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };

    // ace hearing
    ace_hearing_protection = 1;
    ace_hearing_lowerVolume = 0;
    ace_hearing_hasEHP = 1;

    // ace goggles
    ace_color[] = {0, 0, 0};  // Post-proccess color
    ace_tintAmount = 0;  // Amount of tint applied to the color
    ace_resistance = 2;  // Resistance to breaking (0 or 1 or 2)
    ace_protection = 1;  // Provides protection (0-no, 1-yes)
    ace_overlay = "";  // (Optional) Default overlay image path ("" for none)
    ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";  // (Optional) Dirt overlay image path
    ace_overlayCracked = "";  // (Optional) Cracked overlay image path
    ace_dustPath = "";  // (Optional) Dust overlay image path

    class ItemInfo: HeadgearItem
    {
      uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
      mass = 40;
      modelSides[] = { 6 };
      allowedSlots[] =
      {
        801,
        901,
        701,
        605
      };
      hiddenSelections[] =
      {
        "Camo1",
        "Camo2",
        "Camo3"
      };
      hiddenSelectionsTextures[] =
      {
        "WS_Gear\Headgear\CH252D\_textures\helmet_base.paa",
        "WS_Gear\Headgear\CH252D\_textures\visor.paa",
        "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
      };
      class HitpointsProtectionInfo
      {
        class Head
        {
          hitpointName = "HitHead";
          armor = 25;
          passThrough = 0.1;
        };
        class Face
        {
          hitpointName = "HitFace";
          armor = 25;
          passThrough = 0.1;
        };
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 20;
          passThrough = 0.1;
        };
      };
    };
  };
  // (_dp is OPTRE depolarized version)
  class WS_CH252D_Helmet_Base_dp: WS_CH252D_Helmet_Base
  {
    scope = 1;
    scopeArsenal = 1;
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_base.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor_dp.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
    class ItemInfo: ItemInfo
    {
      uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
    };
  };

  /* Dukova */
  class WS_CH252D_Helmet_Dukova: WS_CH252D_Helmet_Base
  {
    class XtdGearInfo
    {
      model = "WS_CH252D_Helmet_Metaitem";
      type = "dukova";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_dukova.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };
  class WS_CH252D_Helmet_Dukova_dp: WS_CH252D_Helmet_Base_dp
  {
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_dukova.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor_dp.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };

  /* Finch */
  class WS_CH252D_Helmet_Finch: WS_CH252D_Helmet_Base
  {
    class XtdGearInfo
    {
      model = "WS_CH252D_Helmet_Metaitem";
      type = "finch";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_finch.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };
  class WS_CH252D_Helmet_Dukova_dp: WS_CH252D_Helmet_Base_dp
  {
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_finch.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor_dp.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };

  /* Hayes */
  class WS_CH252D_Helmet_Hayes: WS_CH252D_Helmet_Base
  {
    class XtdGearInfo
    {
      model = "WS_CH252D_Helmet_Metaitem";
      type = "hayes";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_hayes.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };
  class WS_CH252D_Helmet_Mickelson_dp: WS_CH252D_Helmet_Base_dp
  {
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_hayes.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor_dp.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };

  /* Mickelson */
  class WS_CH252D_Helmet_Mickelson: WS_CH252D_Helmet_Base
  {
    class XtdGearInfo
    {
      model = "WS_CH252D_Helmet_Metaitem";
      type = "mickelson";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_mickelson.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };
  class WS_CH252D_Helmet_Mickelson_dp: WS_CH252D_Helmet_Base_dp
  {
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\CH252D\_textures\helmet_mickelson.paa",
      "WS_Gear\Headgear\CH252D\_textures\visor_dp.paa",
      "WS_Gear\Headgear\CH252D\_textures\balaclava.paa"
    };
  };
};
