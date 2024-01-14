class CfgPatches
{
  class PF_Armor_Vests_Baird
  {
    author = "wlan0";
    addonRootClass = "PF_Armor_Vests_M52D";
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "PF_Armor_Vests_M52D",
    };
    units[] = {};
    weapons[] = {};
  };
};

class CfgWeapons
{
  class ItemInfo;
  class PF_Armor_Vests_M52D_Wizard;
  class PF_Armor_Vests_Baird_Wizard : PF_Armor_Vests_M52D_Wizard
  {
    displayName = "[PF] M52D (Baird)";
    hiddenSelectionsTextures[] =
    {
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\vest.paa",
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\armor.paa",
      "PF_Armor\_base\vests\M52D\_textures\wizard\black\legs.paa",
      "",
      "PF_Armor\baird\vests\M52D\_textures\odst_black.paa",
    };

    class ItemInfo: ItemInfo
    {
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
        "AS_ODSTLeft",
        // "AS_ODSTRight",
        // "AS_ODSTSniperLeft",
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
        // "AP_Thigh",
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
};
