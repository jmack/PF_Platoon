class CfgPatches
{
  class WS_Gear_NVG_Implant
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
  };
};

class CfgWeapons
{
  // Implant
  class OPTRE_NVGT_C;
  class WS_Gear_NVG_Implant : OPTRE_NVGT_C
  {
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] Visual Implant";
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
  };
};
