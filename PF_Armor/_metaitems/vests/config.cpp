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
    /* 1. Pathfinder */
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

    /* 1-1 Druid */
    class PF_Armor_Metaitems_Vests_Druid
    {
      label = "1-1 Druid";
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

    /* 1-2 Wizard */
    class PF_Armor_Metaitems_Vests_Wizard
    {
      label = "1-2 Wizard";
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

    /* 1-3 Cleric */
    class PF_Armor_Metaitems_Vests_Cleric
    {
      label = "1-3 Cleric";
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

    /* 1-4 Bard */
    class PF_Armor_Metaitems_Vests_Bard
    {
      label = "1-4 Bard";
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

    /* 1-1 Druid */
    // Stocks
    class PF_Armor_Vests_M52D_Druid
    {
      model = "PF_Armor_Metaitems_Vests_Druid";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    /* 1-2 Wizard */
    // Stocks
    class PF_Armor_Vests_M52D_Wizard
    {
      model = "PF_Armor_Metaitems_Vests_Wizard";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    /* 1-3 Cleric */
    // Stocks
    class PF_Armor_Vests_M52D_Cleric
    {
      model = "PF_Armor_Metaitems_Vests_Cleric";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    /* 1-4 Bard */
    // Stocks
    class PF_Armor_Vests_M52D_Bard
    {
      model = "PF_Armor_Metaitems_Vests_Bard";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };
  };
};
