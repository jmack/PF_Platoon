class CfgPatches
{
  class 1st_MEU_patch_weapons_meu_rework_br
  {
    author = "1st MEU Mod Team";
    addonRootClass = "1st_MEU_patch_weapons_meu_rework";
    requiredAddons[] =
    {
      "1st_MEU_patch_weapons_meu_rework"
    };
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
    magazines[] = {};
    ammo[] = {};
  };
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class Mode_FullAuto;
class CfgWeapons
{
  class OPTRE_BR37;
  class OPTRE_BR45;
  class OPTRE_BR55;
  class OPTRE_BR55HB;
  class OPTRE_Commando;
  class OPTRE_Commando_Black;
  class OPTRE_Commando_Police;
  class OPTRE_Commando_Red;
  class OPTRE_Commando_Snow;
  class OPTRE_Commando_Tan;
  class OPTRE_BR55HB;
  
    class MEU_BR37 : OPTRE_BR37
  {
    displayName = "[1st MEU] BR37 Battle Rifle";
    baseWeapon = "MEU_BR37";
    canShootInWater = 1;
    magazineWell[] =
    {
      "MEU_rifle_uw",
      "MEU_86x70"
    };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass=29;
      class CowsSlot : CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_BR45 : OPTRE_BR45
  {
    baseWeapon = "MEU_OPTRE_BR45";
    canShootInWater = 1;
    magazineWell[] +=
    {
      "MEU_rifle_uw"
    };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_BR45_Red : MEU_OPTRE_BR45
  {
    baseWeapon = "MEU_OPTRE_BR45_Red";
    hiddenSelections[] =
    {
      "camo",
      "camo_details"
    };
    hiddenSelectionsTextures[] =
    {
      "\1st_meu_weapons\_textures\br45\MEU\br45_co.paa",
      "\1st_meu_weapons\_textures\br45\MEU\BR45decals_ca.paa"
    };
  };
  class MEU_OPTRE_BR55 : OPTRE_BR55
  {
    baseWeapon = "MEU_OPTRE_BR55";
    canShootInWater = 1;
    magazineWell[] +=
    {
      "MEU_rifle_uw"
    };
    displayName = "[1st MEU] BR55 Battle Rifle";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class CowsSlot : CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_BR55_Red: MEU_OPTRE_BR55
  {
    baseWeapon = "MEU_OPTRE_BR55_Red";
    hiddenSelections[] =
    {
      "camo1",
      "camo2"
    };
    hiddenSelectionsTextures[] =
    {
      "\1st_meu_weapons\_textures\br55\MEU\br55_1_co.paa",
      "\1st_meu_weapons\_textures\br55\MEU\br55_2_co.paa"
    };
  };
  class MEU_OPTRE_BR55HB: OPTRE_BR55HB
  {
    baseWeapon = "MEU_OPTRE_BR55HB";
    canShootInWater = 1;
    magazineWell[] +=
    {
      "MEU_rifle_uw"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_BR55HB_Red : MEU_OPTRE_BR55HB
  {
    baseWeapon = "MEU_OPTRE_BR55HB_Red";
    hiddenSelections[] =
    {
      "camo1",
      "camo2"
    };
    hiddenSelectionsTextures[] =
    {
      "\1st_meu_weapons\_textures\br55\MEU\br55_1_co.paa",
      "\1st_meu_weapons\_textures\br55\MEU\br55_2_co.paa"
    };
  };
};
class CfgAmmo
{
};
class CfgMagazines
{
};
