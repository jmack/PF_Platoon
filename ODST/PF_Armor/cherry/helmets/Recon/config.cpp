class CfgPatches
{
  class PF_Armor_Helmets_Recon_Cherry
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
  class PF_Armor_Helmets_Recon_Pathfinder;

  class PF_Armor_Helmets_Cherry : PF_Armor_Helmets_Recon_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Pathfinder";
      type = "recon";
      customization = "cherry";
      camouflage = "black";
    };

    displayName = "[PF] R/B5 (Cherry)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\cherry\helmets\Recon\_textures\helmet.paa",
      "PF_Armor\_base\helmets\Recon\_textures\visor_standard.paa",
      "PF_Armor\_base\helmets\Recon\_textures\ghillie.paa",
      "PF_Armor\_base\helmets\Recon\_textures\soft_packs.paa"
    };
  };
};
