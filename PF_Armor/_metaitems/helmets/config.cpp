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
            "recon",
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
        class recon
        {
          label = "R/B5";
          description = " /!\ For Authorized ONI Personnel Only /!\ ";
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
            "m56g",
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
        class m56g
        {
          label = "M56G";
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
          "baird",
          "barnes",
          "bridges",
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
        class bridges
        {
          label = "Bridges";
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
