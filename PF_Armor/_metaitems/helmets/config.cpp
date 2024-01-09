class CfgPatches
{
  class PF_Armor_Metaitems_Helmets
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    requiredVersion = 0.1;
    requiredAddons[] = {};
    units[] = {};
    weapons[] = {};
  };
};

class XtdGearModels
{
  class cfgWeapons
  {
    /* 1. Pathfinder */
    class PF_Armor_Metaitems_Helmets_Pathfinder
    {
      label = "Pathfinder";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
        "polarization",
      };
      class type
      {
        label = "Type"; 
        alwaysSelectable = 1;
        values[] =
        {
            "ch252d",
            "m52d",
            "m56r",
            "m56s",
            "custom",
        };
        class ch252d
        {
          label = "CH252D";
        };
        class m52d
        {
          label = "M52D";
        };
        class m56r
        {
          label = "M56R";
        };
        class m56s
        {
          label = "M56S";
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
          "oneill",
        };
        class stock
        {
          label = "Stock";
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
          "snow",
        };
        class black
        {
          label = "Black";
          image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
        class snow
        {
          label = "Snow";
          image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
        };
      };
      class polarization
      {
        label = "Polarization";
        alwaysSelectable = 0;
        changeingame = 1;
        changedelay = 0;
        values[] =
        {
          "on",
          "off",
        };
        class on
        {
          label = "On";
        };
        class off
        {
          label = "Off";
        };
      };
    };

    /* 1-1 Druid */
    class PF_Armor_Metaitems_Helmets_Druid
    {
      label = "1-1 Druid";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
        "polarization",
      };
      class type
      {
        label = "Type"; 
        alwaysSelectable = 1;
        values[] =
        {
            "ch252d",
            "m52d",
            "m56r",
            "m56s",
            "custom",
        };
        class ch252d
        {
          label = "CH252D";
        };
        class m52d
        {
          label = "M52D";
        };
        class m56r
        {
          label = "M56R";
        };
        class m56s
        {
          label = "M56S";
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
          "snow",
        };
        class black
        {
          label = "Black";
          image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
        class snow
        {
          label = "Snow";
          image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
        };
      };
      class polarization
      {
        label = "Polarization";
        alwaysSelectable = 0;
        changeingame = 1;
        changedelay = 0;
        values[] =
        {
          "on",
          "off",
        };
        class on
        {
          label = "On";
        };
        class off
        {
          label = "Off";
        };
      };
    };

    /* 1-2 Wizard */
    class PF_Armor_Metaitems_Helmets_Wizard
    {
      label = "1-2 Wizard";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
        "polarization",
      };
      class type
      {
        label = "Type"; 
        alwaysSelectable = 1;
        values[] =
        {
            "ch252d",
            "m52d",
            "m56r",
            "m56s",
            "custom",
        };
        class ch252d
        {
          label = "CH252D";
        };
        class m52d
        {
          label = "M52D";
        };
        class m56r
        {
          label = "M56R";
        };
        class m56s
        {
          label = "M56S";
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
          "reid",
        };
        class stock
        {
          label = "Stock";
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
          "snow",
        };
        class black
        {
          label = "Black";
          image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
        class snow
        {
          label = "Snow";
          image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
        };
      };
      class polarization
      {
        label = "Polarization";
        alwaysSelectable = 0;
        changeingame = 1;
        changedelay = 0;
        values[] =
        {
          "on",
          "off",
        };
        class on
        {
          label = "On";
        };
        class off
        {
          label = "Off";
        };
      };
    };

    /* 1-3 Cleric */
    class PF_Armor_Metaitems_Helmets_Cleric
    {
      label = "1-3 Cleric";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
        "polarization",
      };
      class type
      {
        label = "Type"; 
        alwaysSelectable = 1;
        values[] =
        {
            "ch252d",
            "m52d",
            "m56r",
            "m56s",
            "custom",
        };
        class ch252d
        {
          label = "CH252D";
        };
        class m52d
        {
          label = "M52D";
        };
        class m56r
        {
          label = "M56R";
        };
        class m56s
        {
          label = "M56S";
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
          "snow",
        };
        class black
        {
          label = "Black";
          image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
        class snow
        {
          label = "Snow";
          image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
        };
      };
      class polarization
      {
        label = "Polarization";
        alwaysSelectable = 0;
        changeingame = 1;
        changedelay = 0;
        values[] =
        {
          "on",
          "off",
        };
        class on
        {
          label = "On";
        };
        class off
        {
          label = "Off";
        };
      };
    };

    /* 1-4 Bard */
    class PF_Armor_Metaitems_Helmets_Bard
    {
      label = "1-4 Bard";
      options[] =
      {
        "type",
        "customization",
        "camouflage",
        "polarization",
      };
      class type
      {
        label = "Type"; 
        alwaysSelectable = 1;
        values[] =
        {
            "ch252d",
            "m52d",
            "m56r",
            "m56s",
            "custom",
        };
        class ch252d
        {
          label = "CH252D";
        };
        class m52d
        {
          label = "M52D";
        };
        class m56r
        {
          label = "M56R";
        };
        class m56s
        {
          label = "M56S";
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
          "snow",
        };
        class black
        {
          label = "Black";
          image = "#(rgb,8,8,3)color(0,0,0,1)";
        };
        class snow
        {
          label = "Snow";
          image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
        };
      };
      class polarization
      {
        label = "Polarization";
        alwaysSelectable = 0;
        changeingame = 1;
        changedelay = 0;
        values[] =
        {
          "on",
          "off",
        };
        class on
        {
          label = "On";
        };
        class off
        {
          label = "Off";
        };
      };
    };
  };
};

class XtdGearInfos
{
  class CfgWeapons
  {
    /* 1. Pathfinder */
    // Stocks
    class PF_Armor_Helmets_CH252D_Pathfinder
    {
      model = "PF_Armor_Metaitems_Helmets_Pathfinder";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };
    class PF_Armor_Helmets_CH252D_Pathfinder_dp : PF_Armor_Helmets_CH252D_Pathfinder
    {
      polarization = "off";
    };
    class PF_Armor_Helmets_CH252D_Pathfinder_Snow : PF_Armor_Helmets_CH252D_Pathfinder
    {
      camouflage = "snow";
    };
    class PF_Armor_Helmets_CH252D_Pathfinder_Snow_dp : PF_Armor_Helmets_CH252D_Pathfinder_Snow
    {
      polarization = "off";
    };
    // Customs
    class PF_Armor_Helmets_ONeill : PF_Armor_Helmets_CH252D_Pathfinder
    {
      customization = "oneill";
    };
    class PF_Armor_Helmets_ONeill_dp : PF_Armor_Helmets_ONeill
    {
      polarization = "off";
    };

    /* 1-1 Druid */
    // Stocks
    class PF_Armor_Helmets_CH252D_Druid
    {
      model = "PF_Armor_Metaitems_Helmets_Druid";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };
    class PF_Armor_Helmets_CH252D_Druid_dp : PF_Armor_Helmets_CH252D_Druid
    {
      polarization = "off";
    };
    class PF_Armor_Helmets_CH252D_Druid_Snow : PF_Armor_Helmets_CH252D_Druid
    {
      camouflage = "snow";
    };
    class PF_Armor_Helmets_CH252D_Druid_Snow_dp : PF_Armor_Helmets_CH252D_Druid_Snow
    {
      polarization = "off";
    };

    /* 1-2 Wizard */
    // Stocks
    class PF_Armor_Helmets_CH252D_Wizard
    {
      model = "PF_Armor_Metaitems_Helmets_Wizard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };
    class PF_Armor_Helmets_CH252D_Wizard_dp : PF_Armor_Helmets_CH252D_Wizard
    {
      polarization = "off";
    };
    class PF_Armor_Helmets_CH252D_Wizard_Snow : PF_Armor_Helmets_CH252D_Wizard
    {
      camouflage = "snow";
    };
    class PF_Armor_Helmets_CH252D_Wizard_Snow_dp : PF_Armor_Helmets_CH252D_Wizard_Snow
    {
      polarization = "off";
    };
    // Customs
    class PF_Armor_Helmets_Reid : PF_Armor_Helmets_CH252D_Wizard
    {
      customization = "reid";
    };
    class PF_Armor_Helmets_Reid_dp : PF_Armor_Helmets_Reid
    {
      polarization = "off";
    };

    /* 1-3 Cleric */
    // Stocks
    class PF_Armor_Helmets_CH252D_Cleric
    {
      model = "PF_Armor_Metaitems_Helmets_Cleric";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };
    class PF_Armor_Helmets_CH252D_Cleric_dp : PF_Armor_Helmets_CH252D_Cleric
    {
      polarization = "off";
    };
    class PF_Armor_Helmets_CH252D_Cleric_Snow : PF_Armor_Helmets_CH252D_Cleric
    {
      camouflage = "snow";
    };
    class PF_Armor_Helmets_CH252D_Cleric_Snow_dp : PF_Armor_Helmets_CH252D_Cleric_Snow
    {
      polarization = "off";
    };

    /* 1-4 Bard */
    // Stocks
    class PF_Armor_Helmets_CH252D_Bard
    {
      model = "PF_Armor_Metaitems_Helmets_Bard";
      type = "ch252d";
      customization = "stock";
      camouflage = "black";
      polarization = "on";
    };
    class PF_Armor_Helmets_CH252D_Bard_dp : PF_Armor_Helmets_CH252D_Bard
    {
      polarization = "off";
    };
    class PF_Armor_Helmets_CH252D_Bard_Snow : PF_Armor_Helmets_CH252D_Bard
    {
      camouflage = "snow";
    };
    class PF_Armor_Helmets_CH252D_Bard_Snow_dp : PF_Armor_Helmets_CH252D_Bard_Snow
    {
      polarization = "off";
    };
  };
};
