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
  class XtdGearInfo
  {
    model = "WS_CH252D_Helmet_Metaitem";
    type = "standard";
  };

  /* Base Item */
  class ItemCore;
  class ItemInfo;
  class HeadgearItem;
  class WS_CH252D_Helmet_Base: ItemCore
  {
    scope = 2;
    scopeArsenal = 2;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] CH252D Helmet";
    ace_hearing_protection = 1;
    model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture = "";
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
};
