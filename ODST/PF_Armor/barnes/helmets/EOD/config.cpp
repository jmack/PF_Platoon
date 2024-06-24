class CfgPatches
{
  class PF_Armor_Helmets_EOD_Barnes
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
  class ItemInfo;
  class PF_Armor_Helmets_CH252D_Wizard;

  class PF_Armor_Helmets_Barnes : PF_Armor_Helmets_CH252D_Wizard
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Wizard";
      type = "custom";
      customization = "barnes";
      camouflage = "black";
    };

    displayName = "[PF] Mark V/EOD (Barnes)";
    model = "\OPTRE_UNSC_Units\Army\EOD_Helmet.p3d";
    picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\barnes\helmets\EOD\_textures\helmet.paa",
      "PF_Armor\barnes\helmets\EOD\_textures\visor.paa",
    };
    hiddenSelectionsMaterials[] =
    {
      "PF_Armor\barnes\helmets\EOD\_textures\_materials\helmet.rvmat",
      "PF_Armor\barnes\helmets\EOD\_textures\_materials\visor.rvmat",
    };

    class ItemInfo: ItemInfo
    {
      uniformModel = "\OPTRE_UNSC_Units\Army\EOD_Helmet.p3d";
      hiddenSelections[] =
      {
        "camo1",
        "camo2",
      };
    };
  };
};
