class CfgPatches
{
  class PF_Gear_Backpacks_ODSTHardcase
  {
    author = "wlan0";
    addonRootClass = "PF_Gear_Backpacks";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "MA_Armor",
      "OPTRE_Core",
    };
  };
};

class XtdGearModels
{
  class CfgVehicles
  {
    class PF_Gear_Backpacks_ODSTHardcases
    {
      label = "ODST Hardcase";
      options[] =
      {
        "type",
        "role",
        "camouflage",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "light",
          "padded",
          "heavy",
          "longbow",
        };
        class light
        {
          label = "Light";
        };
        class padded
        {
          label = "Padded";
        };
        class heavy
        {
          label = "Heavy";
        };
        class longbow
        {
          label = "PRC-497";
        };
      };
      class role
      {
        label = "Role";
        alwaysSelectable = 1;
        values[] =
        {
          "basic",
          "medical",
        };
        class basic
        {
          label = "Basic";
        };
        class medical
        {
          label = "Medical";
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

class XtdGearInfos
{
  class CfgVehicles
  {
    class PF_Gear_Backpacks_ODSTHardcases_Light_Basic
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "light";
      role = "basic";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Light_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Light_Basic
    {
      camouflage = "snow";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Padded_Basic
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "padded";
      role = "basic";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Padded_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Padded_Basic
    {
      camouflage = "snow";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Heavy_Basic
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "heavy";
      role = "basic";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Heavy_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Heavy_Basic
    {
      camouflage = "snow";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Padded_Medical
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "padded";
      role = "medical";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Padded_Medical_Snow : PF_Gear_Backpacks_ODSTHardcases_Padded_Medical
    {
      camouflage = "snow";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Heavy_Medical
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "heavy";
      role = "medical";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Heavy_Medical_Snow : PF_Gear_Backpacks_ODSTHardcases_Heavy_Medical
    {
      camouflage = "snow";
    }
    class PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic
    {
      model = "PF_Gear_Backpacks_ODSTHardcases";
      type = "longbow";
      role = "basic";
      camouflage = "black";
    };
    class PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic
    {
      camouflage = "snow";
    };
  };
};

class CfgVehicles
{
  class MA_M56S_Rucksack;
  class PF_Gear_Backpacks_ODSTHardcases_Light_Basic : MA_M56S_Rucksack
  {
    displayName = "[PF] ODST Light Hardcase";
    author = "wlan0";
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\ruck.paa",
      "PF_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\backpack_radio_green.paa",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Light_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Light_Basic
  {
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\ruck_snow.paa",
      "PF_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\backpack_radio_green.paa",
    };
  };

  class OPTRE_ILCS_Rucksack_Heavy;
  class PF_Gear_Backpacks_ODSTHardcases_Main : OPTRE_ILCS_Rucksack_Heavy
  {
    author = "wlan0";
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    maximumLoad = 350;
    mass = 50;
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\OPTRE_ILCS_Ruck\hardcase_black.paa",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Padded_Basic : PF_Gear_Backpacks_ODSTHardcases_Main
  {
    displayName = "[PF] ODST Padded Hardcase";
    hiddenSelections[] = {
      "camo1",
      "AP_Heavy",
      "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Heavy_Basic : PF_Gear_Backpacks_ODSTHardcases_Main
  {
    displayName = "[PF] ODST Heavy Hardcase";
    hiddenSelections[] = {
      "camo1",
      // "AP_Heavy",
      "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Padded_Medical : PF_Gear_Backpacks_ODSTHardcases_Main
  {
    displayName = "[PF] ODST Padded Medical Hardcase";
    hiddenSelections[] = {
      "camo1",
      "AP_Heavy",
      // "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Heavy_Medical : PF_Gear_Backpacks_ODSTHardcases_Main
  {
    displayName = "[PF] ODST Heavy Medical Hardcase";
    hiddenSelections[] = {
      "camo1",
      // "AP_Heavy",
      // "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Main_Snow : PF_Gear_Backpacks_ODSTHardcases_Main
  {
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\OPTRE_ILCS_Ruck\hardcase_snow.paa",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Padded_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Main_Snow
  {
    displayName = "[PF] ODST Padded Hardcase";
    hiddenSelections[] = {
      "camo1",
      "AP_Heavy",
      "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Heavy_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Main_Snow
  {
    displayName = "[PF] ODST Heavy Hardcase";
    hiddenSelections[] = {
      "camo1",
      // "AP_Heavy",
      "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Padded_Medical_Snow : PF_Gear_Backpacks_ODSTHardcases_Main_Snow
  {
    displayName = "[PF] ODST Padded Medical Hardcase";
    hiddenSelections[] = {
      "camo1",
      "AP_Heavy",
      // "biofoam",
    };
  };
  class PF_Gear_Backpacks_ODSTHardcases_Heavy_Medical_Snow : PF_Gear_Backpacks_ODSTHardcases_Main_Snow
  {
    displayName = "[PF] ODST Heavy Medical Hardcase";
    hiddenSelections[] = {
      "camo1",
      // "AP_Heavy",
      // "biofoam",
    };
  };

  class OPTRE_ANPRC_521_green;
  class PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic : OPTRE_ANPRC_521_green
  {
    displayName = "[PF] AN/PRC-497 Longbow";
    author = "wlan0";
    descriptionShort = "AN/PRC-487 Longbow<br>UNSC Long Range Radio<br>25km Effective Range";
    scope = 2;
    scopeCurator = 2;
    maximumLoad = 350;
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_base_black.paa",
      "PF_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_main_black.paa",
    };
    // TFAR
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
    tf_range = 120000;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio = 1;
  };
  class PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic_Snow : PF_Gear_Backpacks_ODSTHardcases_Longbow_Basic
  {
    hiddenSelectionsTextures[] = {
      "PF_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_base_snow.paa",
      "PF_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_main_snow.paa",
    };
  };
};