class CfgPatches
{
  class 1st_MEU_patch_weapons_meu_rework_rifles
  {
    author="1st MEU Mod Team";
    addonRootClass="1st_MEU_patch_weapons_meu_rework";
    requiredAddons[]=
    {
      "1st_MEU_patch_weapons_meu_rework",
    };
    requiredVersion=0.1;
    units[]={};
    weapons[]={};
    magazines[]=
    {
      "MEU_32Rnd_762x51_Mag_T",
      "MEU_32Rnd_762x51_Mag",
      "MEU_762SLAP_32_Mag_T"
    };
  };
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class CfgWeapons
{
  class arifle_Mk20_F;
  class OPTRE_Rifle_Base: arifle_Mk20_F
  {
    class WeaponSlotsInfo;
  };
  class OPTRE_MA5A;
  class OPTRE_MA5B;
  class OPTRE_MA5BGL: OPTRE_MA5B
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA5CGL: OPTRE_MA5BGL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA5AGL: OPTRE_MA5CGL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA5C;
  class OPTRE_MA32;
  class OPTRE_MA37GL: OPTRE_MA5CGL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA32GL: OPTRE_MA37GL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA32B;
  class OPTRE_MA32BGL: OPTRE_MA32GL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA37;
  class OPTRE_MA37B: OPTRE_MA37
  {
    class Single;
  };
  class OPTRE_MA37BGL: OPTRE_MA37GL
  {
    class OPTRE_M301UGL;
  };
  class OPTRE_MA37K;
  class OPTRE_M58S: OPTRE_Rifle_Base
  {
    class FullAuto;
    class Single;
  };
  class MEU_OPTRE_MA5A: OPTRE_MA5A
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA5A_Red: MEU_OPTRE_MA5A
  {
    baseWeapon="MEU_OPTRE_MA5A_Red";
  };
  class MEU_OPTRE_MA5AGL: OPTRE_MA5AGL
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_OPTRE_MA5AGL_Red: MEU_OPTRE_MA5AGL
  {
    baseWeapon="MEU_OPTRE_MA5AGL_Red";
    hiddenSelectionsTextures[]=
    {

    };
  };
  class MEU_OPTRE_MA5B: OPTRE_MA5B
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA5B_Red: MEU_OPTRE_MA5B
  {
    baseWeapon="MEU_OPTRE_MA5B_Red";
  };
  class MEU_OPTRE_MA5BGL: OPTRE_MA5BGL
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_OPTRE_MA5BGL_Red: MEU_OPTRE_MA5BGL
  {
    baseWeapon="MEU_OPTRE_MA5BGL_Red";
  };
  class MEU_OPTRE_MA5C: OPTRE_MA5C
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA5C_Red: MEU_OPTRE_MA5C
  {
    baseWeapon="MEU_OPTRE_MA5C_Red";
  };
  class MEU_OPTRE_MA5CGL: OPTRE_MA5CGL
  {
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_OPTRE_MA5CGL_Red: MEU_OPTRE_MA5CGL
  {
    baseWeapon="MEU_OPTRE_MA5CGL_Red";
  };
  class OPTRE_MA5K: OPTRE_MA5C
  {

  };
  class MEU_OPTRE_MA5K: OPTRE_MA5K
  {
    baseWeapon="MEU_OPTRE_MA5K";
    displayName="[1st MEU] MA5KX ICWS Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA5K_Red: MEU_OPTRE_MA5K
  {
    baseWeapon="MEU_OPTRE_MA5K_Red";
  };
  class MEU_OPTRE_MA32: OPTRE_MA32
  {
    baseWeapon="MEU_OPTRE_MA32";
    displayName="[1st MEU] MA32X ICWS Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA32GL: OPTRE_MA32GL
  {
    baseWeapon="MEU_OPTRE_MA32GL";
    displayName="[1st MEU] MA32X + M301 GL Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {
      
    };
  };
  class MEU_OPTRE_MA32B: OPTRE_MA32B
  {
    baseWeapon="MEU_OPTRE_MA32B";
    displayName="[1st MEU] MA32BX ICWS Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA32BGL: OPTRE_MA32BGL
  {
    baseWeapon="MEU_OPTRE_MA32BGL";
    displayName="[1st MEU] MA32BXGL + M301 GL Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_OPTRE_MA37: OPTRE_MA37
  {
    baseWeapon="MEU_OPTRE_MA37";
    displayName="[1st MEU] MA37X ICWS Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA37_Red: MEU_OPTRE_MA37
  {
    baseWeapon="MEU_OPTRE_MA37_Red";
  };
  class MEU_OPTRE_MA37GL: OPTRE_MA37GL
  {
    baseWeapon="MEU_OPTRE_MA37GL";
    displayName="[1st MEU] MA37X + M301 GL Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_OPTRE_MA37B: OPTRE_MA37B
  {
    baseWeapon="MEU_OPTRE_MA37B";
    displayName="[1st MEU] MA37BX ICWS Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_OPTRE_MA37BGL: OPTRE_MA37BGL
  {
    baseWeapon="MEU_OPTRE_MA37BGL";
    displayName="[1st MEU] MA37BX + M301 GL Assault Rifle";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
    class OPTRE_M301UGL: OPTRE_M301UGL
    {

    };
  };
  class MEU_MA37k: OPTRE_MA37K
  {
    baseWeapon="MEU_MA37k";
    displayName="[1st MEU] MA37k";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_MA39S: OPTRE_MA37B
  {
    baseWeapon="MEU_MA39S";
    displayName="[1stMEU] MA39S Burst Rifle";
    model="\OPTRE_Weapons\AR\MA37BI.p3d";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
  class MEU_M58S: OPTRE_M58S
  {
    baseWeapon="MEU_M58S";
    canShootInWater=1;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    };
  };
};
