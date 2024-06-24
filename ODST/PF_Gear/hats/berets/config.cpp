class CfgPatches
{
  class PF_Gear_Hats_Beret
  {
    author = "wlan0";
    addonRootClass = "PF_Gear";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = { };
  };
};

class XtdGearModels
{
  class CfgWeapons
  {
    class PF_Gear_Hats_Berets
    {
      label = "Berets";
      options[] =
      {
        "style",
      };
      class style
      {
        label = "Style";
        alwaysSelectable = 1;
        values[] =
        {
          "unsc",
          "odst",
          "oni",
          "pathfinder",
          "druid",
          "wizard",
          "cleric",
          "bard",
        };
        class unsc
        {
          label = "UNSC";
        };
        class odst
        {
          label = "ODST";
        };
        class oni
        {
          label = "ONI";
        };
        class pathfinder
        {
          label = "Pathfinder";
        };
        class druid
        {
          label = "1-1 Druid";
        };
        class wizard
        {
          label = "1-2 Wizard";
        };
        class cleric
        {
          label = "1-3 Cleric";
        };
        class bard
        {
          label = "1-4 Bard";
        };
      };
    };
  };
};

class CfgWeapons
{
  class H_Beret_02;
  class PF_Gear_Hats_Beret_UNSC : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "unsc";
    };

    displayName = "[PF] UNSC Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\unsc.paa" };
  };

  class PF_Gear_Hats_Beret_ODST : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "odst";
    };

    displayName = "[PF] ODST Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\odst.paa" };
  };

  class PF_Gear_Hats_Beret_ONI : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "oni";
    };

    displayName = "[PF] ONI Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\oni.paa" };
  };

  class PF_Gear_Hats_Beret_Pathfinder : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "pathfinder";
    };

    displayName = "[PF] Pathfinder Platoon Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\pathfinder.paa" };
  };

  class PF_Gear_Hats_Beret_Druid : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "druid";
    };

    displayName = "[PF] Druid Squad Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\druid.paa" };
  };

  class PF_Gear_Hats_Beret_Wizard : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "wizard";
    };

    displayName = "[PF] Wizard Squad Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\wizard.paa" };
  };

  class PF_Gear_Hats_Beret_Cleric : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "cleric";
    };

    displayName = "[PF] Cleric Squad Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\cleric.paa" };
  };

  class PF_Gear_Hats_Beret_Bard : H_Beret_02
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Hats_Berets";
      style = "bard";
    };

    displayName = "[PF] Bard Squad Beret";
    author = "wlan0";
    hiddenSelectionsTextures[] = { "PF_Gear\hats\berets\_textures\bard.paa" };
  };
};
