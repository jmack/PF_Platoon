class CfgPatches
{
  class PF_Armor_Helmets_M56G_Barnes
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "MA_Armor",
    };
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
      type = "m56g";
      customization = "barnes";
      camouflage = "black";
    };

    displayName = "[PF] M56G (Barnes)";
    model = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    picture = "MA_Armor\data\Icons\Gungnir_Helmet.paa";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\barnes\helmets\M56G\_textures\black.paa",
      "PF_Armor\barnes\helmets\M56G\_textures\visr_blue.paa",
    };
    hiddenSelectionsMaterials[] =
    {
      "PF_Armor\barnes\helmets\M56G\_textures\_materials\gungnir_helmet.rvmat",
      "PF_Armor\barnes\helmets\M56G\_textures\_materials\gungnir_visor.rvmat",
    };

    class ItemInfo: ItemInfo
    {
      uniformModel = "MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
    };
  };
};
