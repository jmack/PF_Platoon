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
            "cherry",
            "oneill",
        };
        class stock
        {
            label = "Stock";
        };
        class cherry
        {
          label = "Cherry";
          description = "Thanks for flying Air Dullahan";
        };
        class oneill
        {
          label = "O'Neill";
          description = "Missed me!";
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
            "baird",
            "barnes",
            "dukova",
            "reid",
        };
        class stock
        {
            label = "Stock";
        };
        class baird
        {
          label = "Baird";
        };
        class barnes
        {
          label = "Barnes";
          description = "Big Boom?";
        };
        class dukova
        {
          label = "Dukova";
        };
        class reid
        {
          label = "Reid";
          description = "Bing Bang Boom";
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
