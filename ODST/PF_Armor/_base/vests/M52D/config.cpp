class CfgPatches
{
  class PF_Armor_Vests_M52D
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "A3_Characters_F",
      "OPTRE_Core",
    };
  };
};

class CfgWeapons
{
  class ItemInfo;
  class PF_Armor_Vests_Base;
  class PF_Armor_Vests_M52D_Pathfinder : PF_Armor_Vests_Base
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Vests_Pathfinder";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    scope = 2;
    scopeArsenal = 2;
    displayName = "[PF] M52D (Pathfinder)";

    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\pathfinder\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\pathfinder\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\pathfinder\black\legs.paa",
      "",
      "PF_Armor\_base\vests\M52D\_textures\pathfinder\black\odst.paa",
    };

    class ItemInfo: ItemInfo
    {
      vestType = "Rebreather";
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      hiddenSelections[] =
      {
        // Commented out means visible on the armor
        /*
            A = Armor component
            AS = Shoulder plate
            AP = Items for Marines
            APO = Items for ODST
        */
        "camo",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        // "A_Base",
        // "A_ChestArmor",
        "A_Ghillie",
        // "A_KneesLeft",
        // "A_KneesRight",
        "A_KneesMarLeft",
        "A_KneesMarRight",
        // "A_ODST",
        // "A_ShinArmorLeft",
        // "A_ShinArmorRight",
        // "A_TacPad",
        // "A_ThighArmorLeft",
        // "A_ThighArmorRight",
        // "AS_BaseLeft",
        // "AS_BaseRight",
        "AS_LargeLeft",
        "AS_LargeRight",
        "AS_MediumLeft",
        "AS_MediumRight",
        "AS_ODSTCQBLeft",
        "AS_ODSTCQBRight",
        // "AS_ODSTLeft",
        // "AS_ODSTRight",
        "AS_ODSTSniperLeft",
        "AS_ODSTSniperRight",
        "AS_SmallLeft",
        "AS_SmallRight",
        "AP_AR",
        "AP_BR",
        "AP_Canteen",
        "AP_GL",
        "AP_Knife",
        "AP_MGThigh",
        "AP_Pack",
        "AP_Pistol",
        "AP_Rounds",
        "AP_SG",
        "AP_SMG",
        "AP_Sniper",
        "AP_Thigh",
        // "AP_Frag",
        // "AP_Smoke",
        "APO_AR",
        // "APO_BR",
        // "APO_Knife",
        "APO_SMG",
        "APO_Sniper",
        "CustomKit_Scorch",
      };
    };
  };

  class PF_Armor_Vests_M52D_Bard : PF_Armor_Vests_M52D_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Vests_Bard";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    displayName = "[PF] M52D (Bard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\bard\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\bard\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\bard\black\legs.paa",
      "",
      "PF_Armor\_base\vests\M52D\_textures\bard\black\odst.paa",
    };
  };
  
  class PF_Armor_Vests_M52D_Cleric : PF_Armor_Vests_M52D_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Vests_Cleric";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    displayName = "[PF] M52D (Cleric)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\cleric\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\cleric\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\cleric\black\legs.paa",
      "",
      "PF_Armor\_base\vests\M52D\_textures\cleric\black\odst.paa",
    };
  };
  
  class PF_Armor_Vests_M52D_Druid : PF_Armor_Vests_M52D_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Vests_Druid";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    displayName = "[PF] M52D (Druid)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\druid\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\druid\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\druid\black\legs.paa",
      "",
      "PF_Armor\_base\vests\M52D\_textures\druid\black\odst.paa",
    };
  };
  
  class PF_Armor_Vests_M52D_Wizard : PF_Armor_Vests_M52D_Pathfinder
  {
    class XtdGearInfo
    {
      model = "PF_Armor_Metaitems_Vests_Wizard";
      type = "m52d";
      customization = "stock";
      camouflage = "black";
    };

    displayName = "[PF] M52D (Wizard)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\legs.paa",
      "",
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\odst.paa",
    };
  };
};
