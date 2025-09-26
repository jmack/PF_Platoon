class CfgPatches
{
  class WS_S1_Helmet
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
    class WS_S1_Helmet_Metaitem
    {
      label = "Wolf Squad S-1/ONI";
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
        };
        class standard
        {
          label = "Standard";
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
  class WS_S1_Helmet_Base: ItemCore
  {
    class XtdGearInfo
    {
      model = "WS_S1_Helmet_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] S-1/ONI Helmet";
    ace_hearing_protection = 1;
    model = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3";
    picture = "WS_Images\Common\logo_color.paa";
    hiddenSelections[] =
    {
      "camo1",
      "camo2"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Headgear\S-1\_textures\helmet_base.paa",
      "WS_Gear\Headgear\S-1\_textures\visor.paa"
    };
    class ItemInfo: HeadgearItem
    {
      uniformModel = "MA_Armor\data\Helmets\Recon\Recon_Helmet.p3d";
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
        "WS_Gear\Headgear\S-1\_textures\helmet_base.paa",
        "WS_Gear\Headgear\S-1\_textures\visor.paa"
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
};