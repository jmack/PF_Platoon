class CfgPatches
{
  class PF_Armor_Helmets_Recon
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Core",
    };
    units[] = {};
    weapons[] = {};
  };
};

class CfgWeapons
{
  class ItemInfo;
  class PF_Armor_Helmets_CH252D_Pathfinder;

  class PF_Armor_Helmets_Recon_Pathfinder : PF_Armor_Helmets_CH252D_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Pathfinder";
      type = "recon";
      customization = "stock";
      camouflage = "black";
    };

    picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
    model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
    displayName = "[PF] R/B5";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\helmets\Recon\_textures\helmet.paa",
      "PF_Armor\_base\helmets\Recon\_textures\visor_standard.paa",
      "PF_Armor\_base\helmets\Recon\_textures\ghillie.paa",
      "PF_Armor\_base\helmets\Recon\_textures\soft_packs.paa"
    };
    hiddenSelectionsMaterials[] =
    {
      "PF_Armor\_base\helmets\Recon\_textures\_materials\helmet.rvmat",
      "PF_Armor\_base\helmets\Recon\_textures\_materials\visor_standard.rvmat",
      "",
      "PF_Armor\_base\helmets\Recon\_textures\_materials\soft_packs.rvmat",
    };
    class ItemInfo : ItemInfo
    {
      uniformModel = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
      hiddenSelections[] =
      {
        "camo",
        "camo2",
        "camo3",
        "camo4",
        "H_Ghillie",
      };
    };
  };
};
