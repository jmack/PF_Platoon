class CfgPatches
{
  class WS_Gear_Uniform_M52
  {
    author = "wlan0";
    addonRootClass = "WS_Gear_Uniforms";
  };
};

/* Metaitem */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_Gear_Uniform_M52_Metaitem
    {
      label = "Wolf Squad M52 Uniform";
      options[] = {
        "type",
        "collar",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "odst",
        };
        class odst
        {
          label = "ODST";
        };
      };
      class collar
      {
        label = "Collar";
        values[] =
        {
          "collar",
          "nocollar",
        };
        class collar
        {
          label = "Collar";
        };
        class nocollar
        {
          label = "No Collar";
        };
      };
    };
  };
};

/* Arsenal Defs */
class CfgWeapons
{
  class ItemInfo;
  class WS_Gear_Uniforms_M52Base;
  class WS_Gear_Uniform_M52_ODST : WS_Gear_Uniforms_M52Base
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "odst";
      collar = "collar";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[WS] M52 BDU";
    picture = "WS_Images\Common\logo_color.paa";

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_ODST";
      uniformType = "Neopren";
    };
  };

  class WS_Gear_Uniform_M52_ODST_NC : WS_Gear_Uniform_M52_ODST
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "odst";
      collar = "nocollar";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_ODST_NC";
    };
  };
};

/* Uniform Defs */
class CfgVehicles
{
  class WS_Gear_Uniforms_M52BaseUniform;
  class WS_Gear_Uniform_M52_ODST : WS_Gear_Uniforms_M52BaseUniform
  {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    uniformClass = "WS_Gear_Uniform_M52_ODST";
    model = "\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      // "Uni_Upper",
      // "Uni_Lower",
      // "Uni_Collar",
      // "Armor_Underpad",
      // "Armor_Straps",
      // "Armor_Upper",
      // "Armor_Lower",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Uniform\M52\_textures\odst_upperbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_collar.paa",
      "WS_Gear\Uniform\M52\_textures\base_softpadding.paa",
      "WS_Gear\Uniform\M52\_textures\base_armorstraps.paa",
      "WS_Gear\Uniform\M52\_textures\odst_upperarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa"
    };
  };

  class WS_Gear_Uniform_M52_ODST_NC : WS_Gear_Uniform_M52_ODST
  {
    uniformClass = "WS_Gear_Uniform_M52_ODST_NC";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      // "Uni_Upper",
      // "Uni_Lower",
      "Uni_Collar",
      // "Armor_Underpad",
      // "Armor_Straps",
      // "Armor_Upper",
      // "Armor_Lower",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
  };
};
