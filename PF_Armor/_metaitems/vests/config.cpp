class CfgPatches
{
  class PF_Armor_Metaitems_Vests
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_ACE_Compat",
      "OPTRE_FC_ACE_Compat",
    };
    units[] = {};
    weapons[] = {};
  };
};
class XtdGearModels
{
  class CfgWeapons
  {
    class PF_Armor_Metaitems_Vests_Pathfinder
    {
      label = "Pathfinder";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
            "m52d",
            "custom",
        };
        class m52d
        {
            label = "M52D";
        };
        class custom
        {
            label = "Custom";
        };
      };
      class customization
      {
        label = "Customization";
        alwaysSelectable = 1;
        values[] =
        {
            "stock",
        };
        class stock
        {
            label = "Stock";
        };
      };
      class camouflage
      {
        label = "Camouflage";
        alwaysSelectable = 0;
        values[] =
        {
            "black",
        };
        class black
        {
            label = "Black";
            image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
      };
    };
  };
};

class XtdGearInfos
{
  class CfgWeapons
  {
    /* Pathfinder Platoon */
    // Stocks
    class PF_Armor_Vests_M52D_Pathfinder
    {
      model = "PF_Armor_Metaitems_Vests_Pathfinder";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };
  };
};
