class CfgPatches
{
  class PF_Gear_Uniforms_M52D
  {
    author = "wlan0";
    addonRootClass = "PF_Gear_Uniforms";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Core",
      "HSim_Characters_H_Woman_Uniforms",
    };
  };
};

class XtdGearModels
{
  class CfgWeapons
  {
    class PF_Gear_Uniforms_M52D_BDUs
    {
      label = "M52D";
      options[] = {
        "bodytype",
        "customization",
        "camouflage",
      };
      class bodytype
      {
        label = "Body Type";
        alwaysSelectable = 1;
        values[] =
        {
          "masc",
          "femme",
        };
        class masc
        {
          label = "Masc";
        };
        class femme
        {
          label = "Femme";
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
    };
  };
};

class CfgWeapons
{
  class ItemInfo;
  class PF_Gear_Uniforms_BaseBDU;
  class PF_Gear_Uniforms_M52D_Masc : PF_Gear_Uniforms_BaseBDU
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Uniforms_M52D_BDUs";
      bodytype = "masc";
      customization = "stock";
      camouflage = "black";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[PF] M52D BDU (Black)";
    class ItemInfo: ItemInfo
    {
      uniformClass = "PF_Gear_Uniforms_M52D_Masc";
      uniformType = "Neopren";
    };
  };
  class PF_Gear_Uniforms_M52D_Masc_Snow : PF_Gear_Uniforms_M52D_Masc
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Uniforms_M52D_BDUs";
      bodytype = "masc";
      customization = "stock";
      camouflage = "snow";
    };

    displayName = "[PF] M52D BDU (Snow)";
    class ItemInfo: ItemInfo
    {
      uniformClass = "PF_Gear_Uniforms_M52D_Masc_Snow";
      uniformType = "Neopren";
    };
  };
  class PF_Gear_Uniforms_M52D_Femme : PF_Gear_Uniforms_M52D_Masc
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Uniforms_M52D_BDUs";
      bodytype = "femme";
      customization = "stock";
      camouflage = "black";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "PF_Gear_Uniforms_M52D_Femme";
      uniformType = "Neopren";
    };
  };
  class PF_Gear_Uniforms_M52D_Femme_Snow : PF_Gear_Uniforms_M52D_Femme
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Uniforms_M52D_BDUs";
      bodytype = "femme";
      customization = "stock";
      camouflage = "snow";
    };

    displayName = "[PF] M52D BDU (Snow)";
    class ItemInfo: ItemInfo
    {
      uniformClass = "PF_Gear_Uniforms_M52D_Femme_Snow";
      uniformType = "Neopren";
    };
  };
  class PF_Gear_Uniforms_M52D_Cherry : PF_Gear_Uniforms_M52D_Masc
  {
    class XtdGearInfo
    {
      model = "PF_Gear_Uniforms_M52D_BDUs";
      customization = "cherry";
      camouflage = "black";
    };

    displayName = "[PF] M52D BDU";
    class ItemInfo: ItemInfo
    {
      uniformClass = "PF_Gear_Uniforms_M52D_Cherry";
      uniformType = "Neopren";
    };
  };
};

class CfgVehicles
{
  class PF_Gear_Uniforms_BaseUniform;
  class PF_Gear_Uniforms_M52D_Masc : PF_Gear_Uniforms_BaseUniform
  {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    uniformClass = "PF_Gear_Uniforms_M52D_Masc"
    model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo2",
        //"insignia",
        //"clan",
        "A_BaseLeg"
    };
    hiddenSelectionsTextures[]=
    {
        "PF_Gear\uniforms\M52D\_textures\masc_black.paa",
        "PF_Gear\uniforms\M52D\_textures\masc_black.paa",
    };
  };
  class PF_Gear_Uniforms_M52D_Masc_Snow : PF_Gear_Uniforms_M52D_Masc
  {
    uniformClass = "PF_Gear_Uniforms_M52D_Masc_Snow";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\uniforms\M52D\_textures\masc_snow.paa",
      "PF_Gear\uniforms\M52D\_textures\masc_snow.paa",
    };
  };
  class PF_Gear_Uniforms_M52D_Femme : PF_Gear_Uniforms_M52D_Masc
  {
    uniformClass = "PF_Gear_Uniforms_M52D_Femme";
    model = "TCGM_Girls\model\TCGM_CombatFatigues_Stealth.p3d";
    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\uniforms\M52D\_textures\femme_black.paa",
    };
  };
  class PF_Gear_Uniforms_M52D_Femme_Snow : PF_Gear_Uniforms_M52D_Femme
  {
    uniformClass = "PF_Gear_Uniforms_M52D_Femme_Snow";
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\uniforms\M52D\_textures\femme_snow.paa",
    };
  };

  class PF_Gear_Uniforms_M52D_Cherry : PF_Gear_Uniforms_M52D_Masc
  {
    uniformClass = "PF_Gear_Uniforms_M52D_Cherry";
    hiddenSelectionsTextures[]=
    {
        "PF_Gear\uniforms\M52D\_textures\cherry_black_top.paa",
        "PF_Gear\uniforms\M52D\_textures\cherry_urban_legs.paa",
    };
  };
};
