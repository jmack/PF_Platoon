class CfgPatches
{
  class PF_Gear_Nvg_Thermal
  {
    author = "OriUnder";
    addonRootClass = "PF_Gear";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Core",
    };
  };
};

class XtdGearModels
{
  class CfgWeapons
  {
    class PF_Thermal_NVGs
    {
      label = "Thermal NVGs";
      author = "OriUnder";
      options[] =
      {
        "type",
        "mode",
        "camo",
        // "visor",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "implant",
          "marksman",
          "gungnir",
        };
        class implant
        {
          label = "Implant";
        };
        class marksman
        {
          label = "Marksman";
        };
        class gungnir
        {
          label = "Gungnir";
        };
      };
      class mode
      {
        label = "Thermal Mode";
        alwaysSelectable = 1;
        values[] =
        {
          "white",
          "orange",
        };
        class white
        {
          label = "White Hot";
        };
        class orange
        {
          label = "Orange Hot";
        };
      };
      class camo
      {
        label = "Camo";
        alwaysSelectable = 0;
        values[] =
        {
          "black",
          "snow",
        };
        class black
        {
          label = "Black";
        };
        class snow
        {
          label = "Snow";
        };
      };
      // class visor
      // {
      //   label = "Visor";
      //   alwaysSelectable = 0;
      //   values[] =
      //   {
      //     "on",
      //     "off",
      //   };
      //   class on
      //   {
      //     label = "On";
      //   };
      //   class off 
      //   {
      //     label = "off";
      //   };
      // }
    };
  };
};

class CfgWeapons
{
  // Implants
  class OPTRE_NVGT_C;
  class PF_Gear_Nvg_Thermal_Implant_White: OPTRE_NVGT_C
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "implant";
      mode = "white";
    };

    dlc = "PF_Plt";
    author = "OriUnder";
    displayName = "[PF] Thermal Implant";
    thermalMode[] = {0};
  };
  class PF_Gear_Nvg_Thermal_Implant_Orange : PF_Gear_Nvg_Thermal_Implant_White
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "implant";
      mode = "orange";
    };

    thermalMode[] = {6};
  };
  // Marksman NVG
  class MEU_OPTRE_NVG_MVI_OFF;
  class MEU_OPTRE_NVG_MVI_ON;
  class PF_Gear_Nvg_Thermal_Marksman_White_OFF : MEU_OPTRE_NVG_MVI_OFF
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "marksman";
      mode = "white";
      camo = "black";
      // visor = "off";
    };

    dlc = "PF_Plt";
    author = "OriUnder";
    displayName = "[PF] Thermal Marksman";
    visionMode[] =
    {
      "Normal",
      "NVG",
      "TI",
    };
    thermalMode[] = {0};
     class ItemInfo
    {
      type=616;
      uniformModel = "\OPTRE_UNSC_Units\Army\NVGs\MVI\V_MVI_OFF";
      modelOff = "\OPTRE_UNSC_Units\Army\NVGs\MVI\V_MVI_OFF";
      mass = 2;
    };
  };
  class PF_Gear_Nvg_Thermal_Marksman_Orange_OFF : PF_Gear_Nvg_Thermal_Marksman_White_OFF
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "marksman";
      mode = "orange";
      camo = "black";
      // visor = "off";
    };

    thermalMode[] = {6};
  };
  // class PF_Gear_Nvg_Thermal_Marksman_White_ON : MEU_OPTRE_NVG_MVI_ON
  // {
  //   dlc = "PF_Plt";
  //   author = "OriUnder";
  //   displayName = "[PF] Thermal Marksman";
  //   visionMode[] =
  // 	{
  // 		"Normal",
  // 		"NVG",
  //     "TI",
  // 	};
  //   thermalMode[] = {0};
  // };
  // class PF_Gear_Nvg_Thermal_Marksman_Orange_ON : PF_Gear_Nvg_Thermal_Marksman_White_ON
  // {
  //   thermalMode[] = {6};
  // };

  // Gungnir NVG
  class PF_Gear_Nvg_Thermal_Gungnir_White : OPTRE_NVGT_C
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "gungnir";
      mode = "white";
      camo = "black";
    };

    dlc = "PF_Plt";
    author = "OriUnder";
    displayName = "[PF] Thermal Gungnir Blastshield";
    visionMode[] =
    {
      "Normal",
      "NVG",
      "TI",
    };
    thermalMode[] = {0};
    model = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
    class ItemInfo
    {
      type = 616;
      uniformModel = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
      modelOff = "\TCF_EQUIPMENT\Helmets\Gungnir\BattleshieldBaseplate.p3d";
      mass = 2;
    };
  };
  class PF_Gear_Nvg_Thermal_Gungnir_Orange : PF_Gear_Nvg_Thermal_Gungnir_White
  {
    class XtdGearInfo
    {
      model = "PF_Thermal_NVGs";
      type = "gungnir";
      mode = "orange";
      camo = "black";
    };

    thermalMode[] = {6};
  };
};
