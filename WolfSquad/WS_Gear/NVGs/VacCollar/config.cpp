class CfgPatches
{
  class WS_Gear_NVG_VacCollar
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
  };
};

class CfgWeapons
{
  // Vacuum Seal
  class VES_NVG_Collar_VAC;
  class WS_Gear_NVG_VacCollar : VES_NVG_Collar_VAC
  {
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] Vacuum Seal Collar";
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
