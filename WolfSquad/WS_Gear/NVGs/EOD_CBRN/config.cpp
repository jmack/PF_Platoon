class CfgPatches
{
  class WS_Gear_NVG_EODCBRN
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
    class WS_Gear_NVG_EODCBRN_Metaitem
    {
      label = "EOD CBRN Module";
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

/* NVG Item */
class CfgWeapons
{
  // Base item
  class NVGoggles;
  class WS_Gear_NVG_EODCBRN: NVGoggles
  {
    class XtdGearInfo
    {
      model = "WS_Gear_NVG_EODCBRN_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] EOD CBRN Attachment";
    picture = "WS_Images\Common\logo_color.paa";
    model = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
    hiddenSelections[] =
    {
      "Camo1"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\NVGs\EOD_CBRN\_textures\standard.paa"
    };

    visionMode[] =
    {
      "Normal",
      "NVG",
      "TI",
    };

    thermalMode[] = {0};
    ace_nightvision_generation = 4;
    ace_nightvision_bluRadius = 0.13;
    ace_nightvision_eyeCups = 0;
    ace_nightvision_colorPreset[] = { 0, { 0, 0, 0, 0 }, { 1.3, 1.2, 0, 0.9 }, { 6, 1, 1, 0 }}; // Standard green
    ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_hexes_thin.paa";

    class ItemInfo
    {
      type = 616;
      hmdType = 0;
      uniformModel = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
      modelOff = "MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
      mass = 1;
      hiddenSelections[] =
      {
        "camo1"
      };
      hiddenSelectionsTextures[] =
      {
        "WS_Gear\NVGs\EOD_CBRN\_textures\standard.paa"
      };
    };
  };

  // Barnes
  class WS_Gear_NVG_EODCBRN_Barnes: WS_Gear_NVG_EODCBRN
  {
    class XtdGearInfo
    {
      model = "WS_Gear_NVG_EODCBRN_Metaitem";
      type = "barnes";
    };

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\NVGs\EOD_CBRN\_textures\barnes.paa"
    };
  };
};
