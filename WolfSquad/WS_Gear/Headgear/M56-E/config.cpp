class CfgPatches
{
  class WS_M56E_Helmet
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
  };
};

/* Metaitem Definitions */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_M56E_Helmet_Metaitem
    {
      label = "Wolf Squad M56-E";
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
          "barnes",
        };
        class standard
        {
          label = "Standard";
        };
        class barnes
        {
          label = "C. Barnes";
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
  class WS_M56E_Helmet_Base: ItemCore
  {
    class XtdGearInfo
    {
      model = "WS_M56E_Helmet_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M56-E Helmet";
    ace_hearing_protection = 1;
    model = "MA_Armor\data\Helmets\H3_EOD\H3_EOD_Helmet.p3d";
    picture = "";
    hiddenSelections[] =
    {
      "camo1",
      "camo2"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\M56-E\_textures\helmet_base.paa",
      "WS_Gear\Headgear\M56-E\_textures\visor.paa"
    };
    class ItemInfo: HeadgearItem
    {
      uniformModel = "MA_Armor\data\Helmets\H3_EOD\H3_EOD_Helmet.p3d";
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
        "camo1",
        "camo2"
      };
      hiddenSelectionsTextures[] =
      {
        "WS_Gear\Headgear\M56-E\_textures\helmet_base.paa",
        "WS_Gear\Headgear\M56-E\_textures\visor.paa"
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

  /* Barnes */
  class WS_M56E_Helmet_Barnes: WS_M56E_Helmet_Base
  {
    class XtdGearInfo
    {
      model = "WS_M56E_Helmet_Metaitem";
      type = "barnes";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\M56-E\_textures\helmet_barnes.paa",
      "WS_Gear\Headgear\M56-E\_textures\visor.paa"
    };
  }
};