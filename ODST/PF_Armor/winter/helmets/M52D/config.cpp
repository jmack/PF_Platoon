class CfgPatches
{
  class PF_Armor_Helmets_M52D_Winter
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "19thODSTArmor",
    };
    units[] = {};
    weapons[] = {};
  };
};

class CfgWeapons
{
  class ItemInfo;
  class PF_Armor_Helmets_CH252D_Wizard;

  class PF_Armor_Helmets_M52D_Winter : PF_Armor_Helmets_CH252D_Wizard
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Helmets_Wizard";
      type = "m52d";
      customization = "winter";
      camouflage = "black";
    };

    displayName = "[PF] M52D (Winter)";
    model = "ODST\ODST_helm_F.p3d";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\winter\helmets\M52D\_textures\black.paa",
    };
    hiddenSelectionsMaterials[] =
    {
      "",
    };
    class ItemInfo : ItemInfo
    {
      uniformModel = "ODST\ODST_helm_F.p3d";
      hiddenSelections[] =
      {
        "camo",
      };
    };
  };
};
