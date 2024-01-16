class CfgPatches
{
  class 1st_MEU_patch_weapons_meu_rework_longguns
  {
    author="1st MEU Mod Team";
    addonRootClass="1st_MEU_patch_weapons_meu_rework";
    requiredAddons[]=
    {
      "1st_MEU_patch_weapons_meu_rework",
      "1st_MEU_patch_weapons_generic_ammo",
    };
    requiredVersion=0.1;
    units[]={};
    weapons[]=
    {
      "MEU_OPTRE_M392_DMR",
      "MEU_OPTRE_M393_DMR",
      "MEU_OPTRE_M393S_DMR",
      "MEU_OPTRE_M295_BMR",
      "MEU_OPTRE_M295_BMR_Desert",
      "MEU_OPTRE_M295_BMR_Snow",
      "MEU_OPTRE_M295_BMR_Woodland",
      "MEU_OPTRE_MRS10X",
      "MEU_OPTRE_SRS99C",
      "MEU_OPTRE_SRS99D",
      "MEU_OPTRE_SRS99_Scope",
      "MEU_OPTRE_SRS99C_Scope"
    };
    magazines[]=
    {
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST"
    };
    ammo[]=
    {
      "TEST_762x51_Ball_Baseline",
      "TEST_762x51_Ball_Caliber50",
      "TEST_762x51_Ball_Caliber100",
      "TEST_762x51_Ball_CaliberN50",
      "TEST_762x51_Ball_Hit50",
      "TEST_762x51_Ball_Hit100",
      "TEST_762x51_Ball_HitN50",
      "TEST_762x51_Ball_JHP",
      "TEST_762x51_Ball_AP",
      "TEST_762x51_Ball_TS100",
      "TEST_762x51_Ball_TSN100"
    };
  };
};

// my shit
class PF_Nightstalker;
class PF_Recon_Scopes;

//their shit
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class CfgWeapons
{
  class OPTRE_SRS99C;
  class OPTRE_SRS99D;
  class OPTRE_MRS10X;
  class OPTRE_M295_BMR;
  class OPTRE_M295_BMR_Desert;
  class OPTRE_M295_BMR_Snow;
  class OPTRE_M295_BMR_Woodland;
  class OPTRE_M392_DMR;
  class OPTRE_M393_DMR: OPTRE_M392_DMR
  {
    class Single;
  };
  class OPTRE_M393S_DMR;
  
  class MEU_OPTRE_M393_DMR: OPTRE_M393_DMR
  {
    baseWeapon="MEU_OPTRE_M393_DMR";
    displayName="[1st MEU] M393X DMR";
    canShootInWater=1;
    magazines[]+=
    {
     "Commando_20Rnd_65_Mag",
    };
    magazineWell[]+=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[]+=
        {
          "PF_Holo_DM",
          "PF_Nightstalker",
        };
      };
    };
  };
};