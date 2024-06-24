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
  class MEU_BR37 : OPTRE_BR37
  {
    displayName = "[1st MEU] BR37 Battle Rifle";
    baseWeapon = "MEU_BR37";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass = 29;
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
  class MEU_OPTRE_BR45_Red : MEU_OPTRE_BR45
  {
    baseWeapon = "MEU_OPTRE_BR45_Red";
  };
  class MEU_OPTRE_BR55 : OPTRE_BR55
  {
    baseWeapon = "MEU_OPTRE_BR55";
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
  class MEU_OPTRE_BR55_Red : MEU_OPTRE_BR55
  {
    baseWeapon = "MEU_OPTRE_BR55_Red";
  };
  class MEU_OPTRE_BR55HB : OPTRE_BR55HB
  {
    baseWeapon = "MEU_OPTRE_BR55HB";
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
  class MEU_OPTRE_BR55HB_Red : MEU_OPTRE_BR55HB
  {
    baseWeapon = "MEU_OPTRE_BR55HB_Red";
  };
  class MEU_OPTRE_Commando : OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando";
    displayName = "[1st MEU] VK78 Commando";
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
  class MEU_OPTRE_Commando_Black : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_Black";
    displayName = "[1st MEU] VK78 Commando (Black)";
  };
  class MEU_OPTRE_Commando_Police : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_Police";
    displayName = "[1st MEU] VK78 Commando (Police)";
  };
  class MEU_OPTRE_Commando_Red : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_Red";
    displayName = "[1st MEU] VK78 Commando (Red)";
  };
  class MEU_OPTRE_Commando_Snow : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_Snow";
    displayName = "[1st MEU] VK78 Commando (Snow)";
  };
  class MEU_OPTRE_Commando_Tan : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_Tan";
  };
  class MEU_OPTRE_Commando_MEU : MEU_OPTRE_Commando
  {
    baseWeapon = "MEU_OPTRE_Commando_MEU";
    displayName = "[1st MEU] VK78 Commando (MEU)";
  };
};
