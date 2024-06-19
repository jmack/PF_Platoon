class CfgPatches
{
  class PF_Armor_Vests
  {
    author = "wlan0";
    addonRootClass = "PF_Armor";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "MA_Armor",
    };
  };
};

class CfgWeapons
{
  class ItemInfo;
  class MA_Vest_Base;
  class PF_Armor_Vests_Base : MA_Vest_Base
  {
    author = "wlan0";
    dlc = "PF_Plt";
    scope = 1;
    scopeArsenal = 1;
    vestType = "Rebreather";
    displayName = "[PF] M52D (Base)";
    model = "\OPTRE_UNSC_Units\Army\armor.p3d";
    picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";

    class ItemInfo: ItemInfo
    {
      vestType = "Rebreather";
      uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
      containerClass = "Supply200";
      hiddenSelections[] =
      {
        "camo",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "A_Base",
        "A_ChestArmor",
        "A_Ghillie",
        "A_KneesLeft",
        "A_KneesRight",
        "A_KneesMarLeft",
        "A_KneesMarRight",
        "A_ODST",
        "A_ShinArmorLeft",
        "A_ShinArmorRight",
        "A_TacPad",
        "A_ThighArmorLeft",
        "A_ThighArmorRight",
        "AS_BaseLeft",
        "AS_BaseRight",
        "AS_LargeLeft",
        "AS_LargeRight",
        "AS_MediumLeft",
        "AS_MediumRight",
        "AS_ODSTCQBLeft",
        "AS_ODSTCQBRight",
        "AS_ODSTLeft",
        "AS_ODSTRight",
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
        "AP_Frag",
        "AP_Smoke",
        "APO_AR",
        "APO_BR",
        "APO_Knife",
        "APO_SMG",
        "APO_Sniper",
        "CustomKit_Scorch",
      };
      hiddenSelectionsTextures[] =
      {
        "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
        "OPTRE_UNSC_Units\Army\data\armor_odst_co.paa",
        "OPTRE_UNSC_Units\Army\data\legs_odst_co.paa",
        "OPTRE_UNSC_Units\Army\data\ghillie_desert_co.paa",
        "OPTRE_UNSC_Units\Army\data\odst_armor_co.paa",
      };
      hiddenSelectionsMaterials[] =
      {
        "PF_Armor\_base\vests\M52D\_textures\_materials\vest.rvmat",
        "PF_Armor\_base\vests\M52D\_textures\_materials\armor.rvmat",
        "PF_Armor\_base\vests\M52D\_textures\_materials\legs.rvmat",
        "",
        "PF_Armor\_base\vests\M52D\_textures\_materials\odst.rvmat",
      };
      class HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 50;
          passThrough = 0.2;
        };
        class Arms
        {
          hitpointName = "HitArms";
          armor = 55;
          passThrough = 0.1;
        };
        class Chest
        {
          hitpointName = "HitChest";
          armor = 60;
          passThrough = 0.1;
        };
        class Diaphragm
        {
          hitpointName = "HitDiaphragm";
          armor = 60;
          passThrough = 0.1;
        };
        class Abdomen
        {
          hitpointName = "HitAbdomen";
          armor = 60;
          passThrough = 0.1;
        };
        class Body
        {
          hitpointName = "HitBody";
          armor = 60;
          passThrough = 0.1;
        };
        class Legs
        {
          hitpointName = "HitLegs";
          armor = 55;
          passThrough = 0.1;
        };
      };
    };
  };
};
