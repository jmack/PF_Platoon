class CfgPatches
{
  class 1st_MEU_patch_weapons_meu_rework_longguns
  {
    author="1st MEU Mod Team";
    addonRootClass="1st_MEU_patch_weapons_meu_rework";
    requiredAddons[]=
    {
      "1st_MEU_patch_weapons_meu_rework"
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
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag"
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
  class MEU_OPTRE_SRS99C: OPTRE_SRS99C
  {
    baseWeapon="MEU_OPTRE_SRS99C";
    displayName="[1st MEU] SRS99CX-S2 AM Sniper Rifle";
    canShootInWater=1;
    magazineWell[]+=
    {
      "MEU_marksmen_uw"
    };
    magazines[]+=
    {
      "MEU_OPTRE_4Rnd_145x114_Mag_Stun",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_Mag_APFSDST",
      "OPTRE_4Rnd_145x114_HEDP_Mag",
      "OPTRE_4Rnd_145x114_Mag_HEDPT",
      "OPTRE_4Rnd_145x114_HVAP_Mag",
      "OPTRE_4Rnd_145x114_Mag_HVAPT",
      "OPTRE_4Rnd_145x114_Mag_SS",
      "OPTRE_4Rnd_145x114_Mag_SST",
      "OPTRE_4Rnd_145x114_Mag_NARQ",
      "OPTRE_4Rnd_145x114_Mag_NARQT",
      "OPTRE_4Rnd_145x114_Mag_DOC",
      "MEU_OPTRE_4Rnd_145x114_Mag_EMP"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "MEU_OPTRE_SRS99_Scope",
          "MEU_OPTRE_SRS99C_Scope",
          "OPTRE_SRS99_Scope",
          "OPTRE_SRS99C_Scope",
          "OPTRE_SRS99_Scope_v2",
          "OPTRE_SRS99C_Scope_v2",
          "optic_Nightstalker",
          "optic_tws",
          "optic_tws_mg",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
    };
  };
  class MEU_OPTRE_SRS99C_Red: MEU_OPTRE_SRS99C
  {
    baseWeapon="MEU_OPTRE_SRS99C_Red";
    hiddenSelections[]=
    {
      "camo",
      "camo1",
      "camo_bipod"
    };
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\srs_c\MainBody_CO.paa",
      "OPTRE_Weapons\Sniper\data\mag_co.paa",
      "\1st_meu_weapons\_textures\srs_c\Bipod_CO.paa"
    };
  };
  class MEU_OPTRE_SRS99D: OPTRE_SRS99D
  {
    baseWeapon="MEU_OPTRE_SRS99D";
    displayName="[1st MEU] SRS99DX-S2 Sniper Rifle";
    canShootInWater=1;
    magazineWell[]+=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]+=
    {
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_Mag_APFSDST",
      "OPTRE_4Rnd_145x114_HEDP_Mag",
      "OPTRE_4Rnd_145x114_Mag_HEDPT",
      "OPTRE_4Rnd_145x114_HVAP_Mag",
      "OPTRE_4Rnd_145x114_Mag_HVAPT",
      "OPTRE_4Rnd_145x114_Mag_SS",
      "OPTRE_4Rnd_145x114_Mag_SST",
      "OPTRE_4Rnd_145x114_Mag_NARQ",
      "OPTRE_4Rnd_145x114_Mag_NARQT",
      "OPTRE_4Rnd_145x114_Mag_DOC",
      "MEU_OPTRE_4Rnd_145x114_Mag_Stun",
      "MEU_OPTRE_4Rnd_145x114_Mag_EMP",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "MEU_OPTRE_SRS99_Scope",
          "MEU_OPTRE_SRS99C_Scope",
          "OPTRE_SRS99_Scope",
          "OPTRE_SRS99C_Scope",
          "OPTRE_SRS99_Scope_v2",
          "OPTRE_SRS99C_Scope_v2",
          "optic_Nightstalker",
          "optic_tws",
          "optic_tws_mg",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
    };
  };
  class MEU_OPTRE_MRS10X: OPTRE_M393_DMR
  {
    baseWeapon="MEU_OPTRE_MRS10X";
    displayName="[1st MEU] MRS11X DMR";
    canShootInWater=1;
    model="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F";
    picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA";
    handAnim[]=
    {
      "OFP2_ManSkeleton",
      "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
    };
    reloadAction="GestureReloadDMR02";
    recoil="recoil_dmr_02";
    Eye="";
    Glasses="";
    ODST_1="";
    magazines[]=
    {
      "OPTRE_20Rnd_86x70_Mag",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70_Marksmens",
      "MEU_86x70",
    };
    hiddenSelections[]=
    {
      "Camo1",
      "Camo2"
    };
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\MEU\MEU_MRS_1_co.paa",
      "\1st_meu_weapons\_textures\MEU\MEU_MRS_2_co.paa"
    };
    modes[]=
    {
      "Single"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
      class UnderBarrelSlot_rail: UnderBarrelSlot_rail
      {
        compatibleitems[]=
        {
          "bipod_01_f_blk",
          "bipod_02_f_blk",
          "bipod_03_f_blk",
          "OPTRE_BR45Grip",
          "bipod_01_F_khk",
          "bipod_01_F_mtp",
          "bipod_01_F_snd",
          "bipod_02_F_arid",
          "bipod_02_F_hex",
          "bipod_02_F_lush",
          "bipod_02_F_tan",
          "bipod_03_F_oli"
        };
      };
    };
    class Single: Single
    {
      class SilencedSound
      {
        SoundSetShot[]=
        {
          "DMR02_silencerShot_SoundSet",
          "DMR02_silencerTail_SoundSet",
          "DMR02_silencerInteriorTail_SoundSet"
        };
      };
      class StandardSound
      {
        soundSetShot[]=
        {
          "DMR02_Shot_SoundSet",
          "DMR02_tail_SoundSet",
          "DMR02_InteriorTail_SoundSet"
        };
      };
    };
  };
  class MEU_OPTRE_M295_BMR: OPTRE_M295_BMR
  {
    baseWeapon="MEU_OPTRE_M295_BMR";
    displayName="[1st MEU] M295X DMR";
    canShootInWater=1;
    magazineWell[]+=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_32Rnd_762x51_Mag",
      "OPTRE_32Rnd_762x51_Mag_Tracer",
      "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_32Rnd_762x51_Mag_AP",
      "OPTRE_32Rnd_762x51_Mag_APT",
      "OPTRE_32Rnd_762x51_Mag_JHP",
      "OPTRE_32Rnd_762x51_Mag_JHPT",
      "OPTRE_32Rnd_762x51_Mag_SS",
      "OPTRE_32Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",

        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
      class UnderBarrelSlot_rail: UnderBarrelSlot_rail
      {
        compatibleitems[]=
        {
          "bipod_01_f_blk",
          "bipod_02_f_blk",
          "bipod_03_f_blk",
          "OPTRE_BR45Grip",
          "bipod_01_F_khk",
          "bipod_01_F_mtp",
          "bipod_01_F_snd",
          "bipod_02_F_arid",
          "bipod_02_F_hex",
          "bipod_02_F_lush",
          "bipod_02_F_tan",
          "bipod_03_F_oli"
        };
      };
    };
  };
  class MEU_OPTRE_M295_BMR_Desert: MEU_OPTRE_M295_BMR
  {
    baseWeapon="MEU_OPTRE_M295_BMR_Desert";
    displayName="[1st MEU] M295X DMR (Desert)";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_32Rnd_762x51_Mag",
      "OPTRE_32Rnd_762x51_Mag_Tracer",
      "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_32Rnd_762x51_Mag_AP",
      "OPTRE_32Rnd_762x51_Mag_APT",
      "OPTRE_32Rnd_762x51_Mag_JHP",
      "OPTRE_32Rnd_762x51_Mag_JHPT",
      "OPTRE_32Rnd_762x51_Mag_SS",
      "OPTRE_32Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "OPTRE_Weapons\br\data\BMRDesert_co.paa"
    };
    hiddenSelectionMaterials[]=
    {
      "OPTRE_Weapons\br\data\BMRDesert.rvmat"
    };
  };
  class MEU_OPTRE_M295_BMR_Snow: MEU_OPTRE_M295_BMR
  {
    baseWeapon="MEU_OPTRE_M295_BMR_Snow";
    displayName="[1st MEU] M295X DMR (Snow)";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_32Rnd_762x51_Mag",
      "OPTRE_32Rnd_762x51_Mag_Tracer",
      "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_32Rnd_762x51_Mag_AP",
      "OPTRE_32Rnd_762x51_Mag_APT",
      "OPTRE_32Rnd_762x51_Mag_JHP",
      "OPTRE_32Rnd_762x51_Mag_JHPT",
      "OPTRE_32Rnd_762x51_Mag_SS",
      "OPTRE_32Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "OPTRE_Weapons\br\data\BMRSnow_co.paa"
    };
    hiddenSelectionMaterials[]=
    {
      "OPTRE_Weapons\br\data\BMRSnow.rvmat"
    };
  };
  class MEU_OPTRE_M295_BMR_Woodland: MEU_OPTRE_M295_BMR
  {
    baseWeapon="MEU_OPTRE_M295_BMR_Woodland";
    displayName="[1st MEU] M295X DMR (Woodland)";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_32Rnd_762x51_Mag",
      "OPTRE_32Rnd_762x51_Mag_Tracer",
      "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_32Rnd_762x51_Mag_AP",
      "OPTRE_32Rnd_762x51_Mag_APT",
      "OPTRE_32Rnd_762x51_Mag_JHP",
      "OPTRE_32Rnd_762x51_Mag_JHPT",
      "OPTRE_32Rnd_762x51_Mag_SS",
      "OPTRE_32Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "OPTRE_Weapons\br\data\BMRWood_co.paa"
    };
    hiddenSelectionMaterials[]=
    {
      "OPTRE_Weapons\br\data\BMRWood.rvmat"
    };
  };
  class MEU_OPTRE_M392_DMR: OPTRE_M392_DMR
  {
    baseWeapon="MEU_OPTRE_M392_DMR";
    displayName="[1st MEU] M392X DMR";
    canShootInWater=1;
    magazineWell[]+=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
    };
  };
  class MEU_OPTRE_M393_DMR: OPTRE_M393_DMR
  {
    baseWeapon="MEU_OPTRE_M393_DMR";
    displayName="[1st MEU] M393X DMR";
    canShootInWater=1;
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
    };
  };
  class MEU_OPTRE_M393S_DMR: OPTRE_M393S_DMR
  {
    baseWeapon="MEU_OPTRE_M393S_DMR";
    displayName="[1st MEU] M393X/S DMR";
    canShootInWater=1;
    magazines[]=
    {
      "OPTRE_15Rnd_762x51_Mag",
      "OPTRE_15Rnd_762x51_Mag_Tracer",
      "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_15Rnd_762x51_Mag_AP",
      "OPTRE_15Rnd_762x51_Mag_APT",
      "OPTRE_15Rnd_762x51_Mag_JHP",
      "OPTRE_15Rnd_762x51_Mag_JHPT",
      "OPTRE_15Rnd_762x51_Mag_SS",
      "OPTRE_15Rnd_762x51_Mag_SST",
      "OPTRE_15Rnd_762x51_Mag_FS",
      "OPTRE_15Rnd_762x51_Mag_FST",
      "OPTRE_15Rnd_DMR_762x51_Mag_AP",
      "OPTRE_15Rnd_DMR_762x51_Mag_APT",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHP",
      "OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
      "OPTRE_15Rnd_DMR_762x51_Mag_SS",
      "OPTRE_15Rnd_DMR_762x51_Mag_SST",
      "OPTRE_15Rnd_DMR_762x51_Mag_FS",
      "OPTRE_15Rnd_DMR_762x51_Mag_FST",
      "PF_15Rnd_65_Creedmoor_DMR_Mag",
    };
    magazineWell[]=
    {
      "MEU_marksmen_uw",
      "MEU_86x70",
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class MuzzleSlot: MuzzleSlot
      {
        compatibleitems[]=
        {
          "muzzle_snds_h_mg_blk_f",
          "muzzle_snds_l",
          "optre_ma5suppressor",
          "optre_m7_silencer",
          "optre_m6_silencer",
          "ace_muzzle_mzls_b",
          "muzzle_snds_b",
          "OPTRE_MA37KSuppressor",
          "muzzle_snds_65_TI_blk_F",
          "OPTRE_srs99d_suppressor"
        };
      };
      class CowsSlot: CowsSlot
      {
        compatibleitems[]=
        {
          "MEU_REC_HOLO",
          "MEU_REC_HOLO_Red",
          "MEU_REC_HOLO_Gre",
          "MEU_REC_HOLO_Desert",
          "MEU_REC_HOLO_UNSC",
          "MEU_REC_HOLO_Snow",
          "MEU_REC_HOLO_MEU",
          "optic_Yorris",
          "optic_DMS",
          "optic_DMS_ghex_F",
          "optic_ERCO_blk_F",
          "optic_ERCO_khk_F",
          "optic_ERCO_snd_F",
          "optic_MRCO",
          "optic_Arco",
          "optic_Arco_ghex_F",
          "optic_Arco_blk_F",
          "optic_aco",
          "optic_ACO_grn",
          "optic_aco_smg",
          "optic_ACO_grn_smg",
          "optic_hamr",
          "optic_Hamr_khk_F",
          "optic_Holosight",
          "optic_Holosight_smg",
          "optic_Holosight_blk_F",
          "optic_Holosight_khk_F",
          "optic_Holosight_smg_blk_F",
          "optic_Holosight_smg_khk_F",
          "OPTRE_M392_Scope",
          "OPTRE_BR55HB_Scope",
          "OPTRE_M7_Sight",
          "OPTRE_M393_Scope",
          "OPTRE_M393_ACOG",
          "OPTRE_M393_EOTECH",
          "OPTRE_M73_SmartLink",
          "OPTRE_MA5_SmartLink",
          "OPTRE_MA5_SmartLink_v2",
          "OPTRE_MA5C_SmartLink_v2",
          "OPTRE_MA5_SmartLink_legacy",
          "OPTRE_MA5C_SmartLink_legacy",
          "OPTRE_M12_Optic",
          "OPTRE_M12_Optic_Red",
          "OPTRE_M12_Optic_Green",
          "optic_ico_01_black_f",
          "OPTRE_BR45_Scope",
          "optic_NVS",
          "optic_LRPS",
          "optic_LRPS_ghex_F",
          "optic_LRPS_tna_F",
          "optic_ams",
          "optic_AMS_snd",
          "optic_AMS_khk",
          "optic_KHS_blk",
          "optic_KHS_tan",
          "optic_KHS_hex",
          "optic_KHS_old",
          "optic_SOS",
          "optic_SOS_khk_F",
          "OPTRE_M392_Scope_v2",
          "OPTRE_M393_ACOG_v2",
          "OPTRE_M393_EOTECH_v2",
          "OPTRE_BMR_Scope_v2",
          "MEU_REC_HOLO_DMR",
          "MEU_REC_HOLO_Red_DMR",
          "MEU_REC_HOLO_Gre_DMR",
          "PF_Holo_DMR",
          "PF_Nightstalker",
          "PF_Holo",
        };
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]=
        {
          "OPTRE_M7_Flashlight",
          "OPTRE_M7_Laser",
          "OPTRE_M7_Vis_Red_Laser",
          "OPTRE_BMR_Laser",
          "OPTRE_BMR_MEQ_Flashlight",
          "OPTRE_BMR_Vis_Red_Laser",
          "optre_m12_laser",
          "OPTRE_M12_Vis_Red_Laser",
          "OPTRE_M12_Flashlight",
          "optre_m45_flashlight",
          "optre_m45_flashlight_red",
          "OPTRE_M6C_Laser",
          "OPTRE_M6C_Vis_Red_Laser",
          "OPTRE_M6C_Flashlight",
          "OPTRE_M6G_Laser",
          "OPTRE_M6G_Vis_Red_Laser",
          "OPTRE_M6G_Flashlight",
          "acc_pointer_ir",
          "acc_flashlight",
          "ace_acc_pointer_green",
          "acc_pointer_vis_red",
          "MEU_M12_Vis_Laser",
          "MEU_BMR_Vis_Laser",
          "MEU_M7_Vis_Laser",
          "MEU_M6G_Laser"
        };
      };
    };
  };
  class OPTRE_SRS99_Scope;
  class InventoryOpticsItem_Base_F;
  class ItemCore;
  class ace_xm157_prototype: ItemCore
  {
    class ItemInfo;
  };
  class MEU_OPTRE_SRS99_Scope: ace_xm157_prototype
  {
    scope=2;
    scopeArsenal=2;
    displayName="[1st MEU] Oracle N-variant SRS99D Scope";
    model="\OPTRE_Weapons\Sniper\SRS99D_Scope.p3d";
    picture="\OPTRE_weapons\sniper\icons\scope.paa";
    class ItemInfo: ItemInfo
    {
      mass=14;
      optics=1;
      modelOptics="\x\cba\addons\optics\cba_optic_big_100.p3d";
      class OpticsModes
      {
        class lpvo
        {
          opticsID=1;
          useModelOptics=1;
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
          opticsZoomMin="25 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
          discreteDistanceInitIndex=0;
          distanceZoomMin=100;
          distanceZoomMax=100;
          memoryPointCamera="opticView";
          visionMode[]=
          {
            "Normal",
            "NVG",
            "TI"
          };
          opticsFlare=1;
          opticsDisablePeripherialVision=1;
          cameraDir="";
        };
      };
    };
  };
  class OPTRE_SRS99C_Scope;
  class MEU_OPTRE_SRS99C_Scope: ace_xm157_prototype
  {
    displayName="[1st MEU] Oracle N-variant SRS99C Scope";
    model="\OPTRE_Weapons\Sniper\SRS99C_Scope.p3d";
    picture="\OPTRE_weapons\sniper\icons\scope2.paa";
    scope=2;
    scopeCurator=2;
    class CBA_ScriptedOptic
    {
      bodyTexture="\z\ace\addons\xm157\data\ace_vector_body_co.paa";
      bodyTextureSize=1;
      hideMagnification=1;
      disableTilt=0;
    };
    class ItemInfo: ItemInfo
    {
      mass=14;
      optics=1;
      modelOptics="\x\cba\addons\optics\cba_optic_big_100.p3d";
      class OpticsModes
      {
        class lpvo
        {
          opticsID=1;
          useModelOptics=1;
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
          opticsZoomMin="25 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          opticsZoomMax="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          opticsZoomInit="1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
          discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
          discreteDistanceInitIndex=0;
          distanceZoomMin=100;
          distanceZoomMax=100;
          memoryPointCamera="opticView";
          visionMode[]=
          {
            "Normal",
            "NVG",
            "TI"
          };
          opticsFlare=1;
          opticsDisablePeripherialVision=1;
          cameraDir="";
        };
      };
    };
  };
  class MEU_AMMO_TEST_GUN: MEU_OPTRE_MRS10X
  {
    baseWeapon="MEU_AMMO_TEST_GUN";
    displayName="[1st] TESTING WEAPON (Ammo)";
    scopeArsenal=0;
    magazineWell[]={};
    magazines[]=
    {
      "TEST_mag_762x51_Control_Group",
      "TEST_mag_762x51_Faster50",
      "TEST_mag_762x51_Faster100",
      "TEST_mag_762x51_FasterN50",
      "TEST_mag_762x51_Caliber50",
      "TEST_mag_762x51_Caliber100",
      "TEST_mag_762x51_CaliberN50",
      "TEST_mag_762x51_Hit50",
      "TEST_mag_762x51_Hit100",
      "TEST_mag_762x51_HitN50",
      "TEST_mag_762x51_JHP",
      "TEST_mag_762x51_AP",
      "TEST_mag_762x51_TS100",
      "TEST_mag_762x51_TSN100"
    };
    recoil="";
    class Single: Single
    {
      dispersion=0;
      initSpeed=-1;
    };
    initSpeed=-1;
  };
};
class CfgAmmo
{
  class B_762x51_Ball;
  class TEST_762x51_Ball_Baseline: B_762x51_Ball
  {
    caliber=2.0999999;
    hit=12;
    typicalSpeed=750;
    model="\A3\Weapons_f\Data\bullettracer\tracer_red";
  };
  class TEST_762x51_Ball_Caliber50: TEST_762x51_Ball_Baseline
  {
    caliber=3.1500001;
  };
  class TEST_762x51_Ball_Caliber100: TEST_762x51_Ball_Baseline
  {
    caliber=4.1999998;
  };
  class TEST_762x51_Ball_CaliberN50: TEST_762x51_Ball_Baseline
  {
    caliber=0;
  };
  class TEST_762x51_Ball_Hit50: TEST_762x51_Ball_Baseline
  {
    hit=18;
  };
  class TEST_762x51_Ball_Hit100: TEST_762x51_Ball_Baseline
  {
    hit=24;
  };
  class TEST_762x51_Ball_HitN50: TEST_762x51_Ball_Baseline
  {
    hit=6;
  };
  class TEST_762x51_Ball_JHP: TEST_762x51_Ball_Baseline
  {
    caliber=0;
    hit=16;
    typicalSpeed=800;
    airFriction=-0.00203711;
  };
  class TEST_762x51_Ball_AP: TEST_762x51_Ball_Baseline
  {
    hit=18;
    typicalSpeed=1050;
  };
  class TEST_762x51_Ball_TS100: TEST_762x51_Ball_Baseline
  {
    typicalSpeed=1500;
  };
  class TEST_762x51_Ball_TSN100: TEST_762x51_Ball_Baseline
  {
    typicalSpeed=375;
  };
};
class CfgMagazines
{
  class OPTRE_15Rnd_762x51_Mag;
  class OPTRE_15Rnd_DMR_762x51_Mag_AP: OPTRE_15Rnd_762x51_Mag
  {
    dlc="SO";
    author="Fireteam Zulu";
    scope=2;
    scopeArsenal=2;
    initspeed=1150;
    ammo="OPTRE_B_762x51_DMR_AP";
    displayname="15Rnd 7.62x51mm DMR AP Magazine";
    displaynameshort="7.62x51mm AP";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Armor-Piercing";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_APT: OPTRE_15Rnd_DMR_762x51_Mag_AP
  {
    dlc="SO";
    author="Fireteam Zulu";
    tracersEvery=1;
    ammo="OPTRE_B_762x51_DMR_AP";
    displayname="15Rnd 7.62x51mm DMR AP Magazine (Tracer)";
    displaynameshort="7.62x51mm AP Tracer";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_JHP: OPTRE_15Rnd_762x51_Mag
  {
    dlc="SO";
    author="Fireteam Zulu";
    scope=2;
    scopeArsenal=2;
    initspeed=1050;
    ammo="OPTRE_B_762x51_DMR_JHP";
    displayname="15Rnd 7.62x51mm DMR JHP Magazine";
    displaynameshort="7.62x51mm JHP";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_JHPT: OPTRE_15Rnd_DMR_762x51_Mag_JHP
  {
    dlc="SO";
    author="Fireteam Zulu";
    tracersEvery=1;
    ammo="OPTRE_B_762x51_DMR_JHP";
    displayname="15Rnd 7.62x51mm DMR JHP Magazine (Tracer)";
    displaynameshort="7.62x51mm JHP Tracer";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_SS: OPTRE_15Rnd_762x51_Mag
  {
    dlc="SO";
    author="Fireteam Zulu";
    scope=2;
    scopeArsenal=2;
    initspeed=340;
    ammo="OPTRE_B_762x51_DMR_SS";
    displayname="15Rnd 7.62x51mm DMR SS Magazine";
    displaynameshort="7.62x51mm SS";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Subsonic";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_SST: OPTRE_15Rnd_DMR_762x51_Mag_SS
  {
    dlc="SO";
    author="Fireteam Zulu";
    tracersEvery=1;
    ammo="OPTRE_B_762x51_DMR_SS";
    displayname="15Rnd 7.62x51mm DMR SS Magazine (Tracer)";
    displaynameshort="7.62x51mm SS Tracer";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Subsonic<br>Tracers";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_FS: OPTRE_15Rnd_762x51_Mag
  {
    dlc="SO";
    author="Fireteam Zulu";
    scope=2;
    scopeArsenal=2;
    initspeed=1200;
    ammo="OPTRE_B_762x51_DMR_FS";
    displayname="15Rnd 7.62x51mm DMR FS Magazine";
    displaynameshort="7.62x51mm FS";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized";
  };
  class OPTRE_15Rnd_DMR_762x51_Mag_FST: OPTRE_15Rnd_DMR_762x51_Mag_FS
  {
    dlc="SO";
    author="Fireteam Zulu";
    tracersEvery=1;
    ammo="OPTRE_B_762x51_DMR_FS";
    displayname="15Rnd 7.62x51mm DMR FS Magazine (Tracer)";
    displaynameshort="7.62x51mm FS Tracer";
    descriptionShort="15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized<br>Tracers";
  };
  class 20Rnd_762x51_Mag;
  class TEST_mag_762x51_Control_Group: 20Rnd_762x51_Mag
  {
    dlc="OPTRE";
    model="\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
    displayname="[test] Control Group";
    displaynameshort="Control Group";
    ammo="TEST_762x51_Ball_Baseline";
    count=600;
    initspeed=900;
    picture="\OPTRE_weapons\ar\icons\magazine.paa";
    descriptionshort="Control Group";
    mass=1;
    tracersEvery=1;
    lastRoundsTracer=5;
  };
  class TEST_mag_762x51_Faster50: TEST_mag_762x51_Control_Group
  {
    initspeed=1350;
    displayname="[test] fast 50%";
    displaynameshort="fast 50%";
    descriptionshort="fast 50%";
  };
  class TEST_mag_762x51_Faster100: TEST_mag_762x51_Control_Group
  {
    initspeed=1800;
    displayname="[test] fast 100%";
    displaynameshort="fast 100%";
    descriptionshort="fast 100%";
  };
  class TEST_mag_762x51_FasterN50: TEST_mag_762x51_Control_Group
  {
    initspeed=450;
    displayname="[test] fast -50%";
    displaynameshort="fast -50%";
    descriptionshort="fast -50%";
  };
  class TEST_mag_762x51_Caliber50: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_Caliber50";
    displayname="[test] Caliber 50%";
    displaynameshort="Cal 50%";
    descriptionshort="Cal 50%";
  };
  class TEST_mag_762x51_Caliber100: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_Caliber100";
    displayname="[test] Caliber 100%";
    displaynameshort="Cal 100%";
    descriptionshort="Cal 100%";
  };
  class TEST_mag_762x51_CaliberN50: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_CaliberN50";
    displayname="[test] Caliber -50%";
    displaynameshort="Cal  -50%";
    descriptionshort="Cal -50%";
  };
  class TEST_mag_762x51_Hit50: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_Hit50";
    displayname="[test] Hit 50%";
    displaynameshort="Hit 50%";
    descriptionshort="Hit 50%";
  };
  class TEST_mag_762x51_Hit100: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_Hit100";
    displayname="[test] Hit 100%";
    displaynameshort="Hit 100%";
    descriptionshort="Hit 100%";
  };
  class TEST_mag_762x51_HitN50: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_HitN50";
    displayname="[test] Hit -50%";
    displaynameshort="Hit -50%";
    descriptionshort="Hit -50%";
  };
  class TEST_mag_762x51_JHP: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_JHP";
    displayname="[test] JHP";
    displaynameshort="JHP";
    descriptionshort="JHP";
  };
  class TEST_mag_762x51_AP: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_AP";
    displayname="[test] AP";
    displaynameshort="AP";
    descriptionshort="AP";
    initspeed=1350;
  };
  class TEST_mag_762x51_TS100: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_TS100";
    displayname="[test] TS 100%";
    displaynameshort="TS 100%";
    descriptionshort="TS 100%";
  };
  class TEST_mag_762x51_TSN100: TEST_mag_762x51_Control_Group
  {
    ammo="TEST_762x51_Ball_TSN100";
    displayname="[test] TS -100%";
    displaynameshort="TS -100%";
    descriptionshort="TS -100%";
  };
};
