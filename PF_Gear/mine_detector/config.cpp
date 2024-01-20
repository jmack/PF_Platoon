class CfgPatches
{
  class PF_Gear_Mine_Detector
  {
    author = "OriUnder";
    addonRootClass = "PF_Gear";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Core",
    };
  };
};

// detector
class MineDetector;
class CfgWeapons
{
  class PF_MineDetector : MineDetector
  {
    label = "[PF] Mine Detector";
    author = "OriUnder";
    displayName = "[PF] Mine Detedctor";
    descriptionshort = "[PF] Mine Detector";
    detectRange = 25;
  };
};
