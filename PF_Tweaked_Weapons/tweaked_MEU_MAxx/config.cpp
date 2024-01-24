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
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\cover_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA5AGL_Red: MEU_OPTRE_MA5AGL
  {
    baseWeapon="MEU_OPTRE_MA5AGL_Red";
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\cover_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
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
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\cover_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA5BGL_Red: MEU_OPTRE_MA5BGL
  {
    baseWeapon="MEU_OPTRE_MA5BGL_Red";
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\cover_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
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
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\coverC_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA5CGL_Red: MEU_OPTRE_MA5CGL
  {
    baseWeapon="MEU_OPTRE_MA5CGL_Red";
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5b\meu\weapon_CO.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\smartlink_co.paa",
      "\1st_meu_weapons\_textures\ma5b\meu\coverC_co.paa",
      "optre_weapons\optics\data\reticles\ma5_reticle.paa"
    };
  };
  class OPTRE_MA5K: OPTRE_MA5C
  {
    class FullAuto;
    class Single;
  };
  class MEU_OPTRE_MA5K: OPTRE_MA5K
  {
    baseWeapon="MEU_OPTRE_MA5K";
    displayName="[1st MEU] MA5KX ICWS Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51",
      "MEU_60rnd_762_51"
    };
    magazines[]={};
    initSpeed=-0.75;
    class FullAuto: FullAuto
    {
      dispersion=0.001;
      reloadTime=0.050000001;
    };
    class Single: Single
    {
      dispersion=0.00085000001;
      reloadTime=0.050000001;
    };
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
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\1st_meu_weapons\_textures\ma5k\meu\MA5K_CO.paa"
    };
  };
  class MEU_OPTRE_MA32: OPTRE_MA32
  {
    baseWeapon="MEU_OPTRE_MA32";
    displayName="[1st MEU] MA32X ICWS Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
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
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA32B: OPTRE_MA32B
  {
    baseWeapon="MEU_OPTRE_MA32B";
    displayName="[1st MEU] MA32BX ICWS Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
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
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA37: OPTRE_MA37
  {
    baseWeapon="MEU_OPTRE_MA37";
    displayName="[1st MEU] MA37X ICWS Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
    reloadMagazineSound[]=
    {
      "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",
      1.77828,
      1,
      10
    };
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
    hiddenSelections[]=
    {
      "camo",
      "camo1"
    };
    hiddenSelectionsTextures[]=
    {
      "1st_meu_weapons\_textures\ma37\ma37_co.paa",
      "1st_meu_weapons\_textures\ma37\ammocounter37_co.paa"
    };
  };
  class MEU_OPTRE_MA37GL: OPTRE_MA37GL
  {
    baseWeapon="MEU_OPTRE_MA37GL";
    displayName="[1st MEU] MA37X + M301 GL Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
    reloadMagazineSound[]=
    {
      "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",
      1.77828,
      1,
      10
    };
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_OPTRE_MA37B: OPTRE_MA37B
  {
    baseWeapon="MEU_OPTRE_MA37B";
    displayName="[1st MEU] MA37BX ICWS Assault Rifle";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
    reloadMagazineSound[]=
    {
      "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",
      1.77828,
      1,
      10
    };
    HUD_BulletInARows=2;
    HUD_TotalPosibleBullet=60;
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
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
    reloadMagazineSound[]=
    {
      "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\Msbs65_01_Reload_01",
      1.77828,
      1,
      10
    };
    HUD_BulletInARows=2;
    HUD_TotalPosibleBullet=60;
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
      magazines[]={};
      magazineWell[]=
      {
        "MEU_GL_Explosive_Lethal",
        "MEU_GL_Smokes",
        "MEU_GL_Tactile",
        "MEU_GL_Flares"
      };
    };
  };
  class MEU_MA37k: OPTRE_MA37K
  {
    baseWeapon="MEU_MA37k";
    displayName="[1st MEU] MA37k";
    canShootInWater=1;
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]={};
    reloadAction="GestureReloadMSBS";
    reloadMagazineSound[]=
    {
      "A3\Sounds_F_Enoch\Assets\Arsenal\Msbs65_01\shotgun\Msbs65_shotgun_Reload_01",
      1.77828,
      1,
      10
    };
    ODST_1="OPTRE_ODST_HUD_AmmoCount_AR";
    Glasses="OPTRE_GLASS_HUD_AmmoCount_AR";
    Eye="OPTRE_EYE_HUD_AmmoCount_AR";
    pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
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
    canShootInWater=1;
    displayName="[1stMEU] MA39S Burst Rifle";
    model="\OPTRE_Weapons\AR\MA37BI.p3d";
    magazineWell[]=
    {
      "MEU_rifle_uw",
      "MEU_32rnd_762_51"
    };
    magazines[]=
    {
      "MEU_762SLAP_32_Mag",
      "MEU_762SLAP_32_Mag_T"
    };
    pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
    ODST_1="OPTRE_ODST_HUD_AmmoCount_AR";
    Glasses="OPTRE_GLASS_HUD_AmmoCount_AR";
    Eye="OPTRE_EYE_HUD_AmmoCount_AR";
    HUD_BulletInARows=2;
    HUD_TotalPosibleBullet=32;
    cursor="OPTRE_MA5";
    modes[]=
    {
      "Single",
      "Burst",
      "close",
      "short",
      "medium",
      "far"
    };
    class Burst: Single
    {
      burst=2;
      displayName="Burst";
      textureType="dual";
      dispersion=0;
    };
    class close: Burst
    {
      burst=2;
      aiRateOfFire=0.5;
      aiRateOfFireDistance=50;
      minRange=0;
      minRangeProbab=0.050000001;
      midRange=30;
      midRangeProbab=0.69999999;
      maxRange=50;
      maxRangeProbab=0.039999999;
      showToPlayer=0;
    };
    class short: close
    {
      burst=8;
      aiRateOfFire=2;
      aiRateOfFireDistance=300;
      minRange=50;
      minRangeProbab=0.050000001;
      midRange=150;
      midRangeProbab=0.69999999;
      maxRange=300;
      maxRangeProbab=0.039999999;
    };
    class medium: close
    {
      burst=1;
      aiRateOfFire=4;
      aiRateOfFireDistance=600;
      minRange=200;
      minRangeProbab=0.050000001;
      midRange=400;
      midRangeProbab=0.60000002;
      maxRange=600;
      maxRangeProbab=0.1;
    };
    class far: close
    {
      burst=1;
      aiRateOfFire=6;
      aiRateOfFireDistance=700;
      minRange=350;
      minRangeProbab=0.039999999;
      midRange=550;
      midRangeProbab=0.5;
      maxRange=700;
      maxRangeProbab=0.0099999998;
    };
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
    magazineWell[]=
    {
      "MEU_rifle_uw"
    };
    displayName="[1stMEU] M58S Special Applications Rifle";
    HUD_TotalPosibleBullet=42;
    muzzles[]=
    {
      "this"
    };
    modes[]=
    {
      "Single",
      "FullAuto"
    };
    magazines[]=
    {
      "MEU_SS_OPTRE_42Rnd_95x40_Mag",
      "MEU_SS_OPTRE_42Rnd_95x40_Mag_Tracer",
      "MEU_AP_OPTRE_42Rnd_95x40_Mag",
      "MEU_AP_OPTRE_42Rnd_95x40_Mag_Tracer"
    };
    class Single: Single
    {
      dispersion=0.00034999999;
    };
    class FullAuto: FullAuto
    {
      dispersion=0.00034999999;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[] +=
        {
          "PF_Holo",
        };
      };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight";
      };
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="OPTRE_M7_silencer";
      };
    };
  };
};
class CfgMagazines
{
  class OPTRE_32Rnd_762x51_Mag;
  class MEU_32Rnd_762x51_Mag_T: OPTRE_32Rnd_762x51_Mag
  {
    scope=2;
    scopearsenal=2;
    displayname="[1st MEU] 32rnd 7.62x51mm Magazine (Tracer)";
    tracersEvery=2;
    model="\OPTRE_Weapons\Ammo\MA5Ammo.p3d";
    ammo="OPTRE_B_762x51_Ball";
    count=32;
    picture="\OPTRE_weapons\ar\icons\magazine.paa";
    descriptionshort="I don't think glowsticks improve damage";
    mass=10;
    lastRoundsTracer=1;
  };
  class MEU_32Rnd_762x51_Mag: MEU_32Rnd_762x51_Mag_T
  {
    displayname="[1st MEU] 32Rnd 7.62x51mm Magazine";
    tracersEvery=0;
  };
  class MEU_762SLAP_32_Mag_T: MEU_32Rnd_762x51_Mag_T
  {
    ammo="MEU_762SLAP";
    scope=2;
    scopearsenal=2;
    displayname="32rnd 7.62x51mm SLAP Magazine (Tracer)";
    displaynameshort="7.62x51mm SLAP Magazine (Tracer)";
    descriptionshort="Covenant better run, but with glowsticks";
    lastRoundsTracer=1;
    initspeed=1200;
  };
  class OPTRE_42Rnd_95x40_Mag;
  class MEU_SS_OPTRE_42Rnd_95x40_Mag: OPTRE_42Rnd_95x40_Mag
  {
    displayname="42Rnd 9.5x40mm Subsonic Magazine";
    displaynameshort="9.5x40mm SS";
    initspeed=260;
    descriptionshort="42 Round Magazine<br>9.5x40mm<br>Subsonic";
    ammo="MEU_SS_OPTRE_B_95x40_Ball";
    tracersEvery=0;
    lastRoundsTracer=6;
  };
  class MEU_SS_OPTRE_42Rnd_95x40_Mag_Tracer: OPTRE_42Rnd_95x40_Mag
  {
    displayname="42Rnd 9.5x40mm Subsonic Magazine (Tracers)";
    displaynameshort="9.5x40mm SS Tracer";
    initspeed=260;
    descriptionshort="42 Round Magazine<br>9.5x40mm<br>Tracer<br>Subsonic";
    ammo="MEU_SS_OPTRE_B_95x40_Ball";
    tracersEvery=1;
  };
  class MEU_AP_OPTRE_42Rnd_95x40_Mag: OPTRE_42Rnd_95x40_Mag
  {
    displayname="42Rnd 9.5x40mm AP Magazine";
    displaynameshort="9.5x40mm AP";
    initspeed=900;
    descriptionshort="42 Round Magazine<br>9.5x40mm<br>AP";
    tracersEvery=0;
    lastRoundsTracer=6;
    ammo="MEU_AP_OPTRE_B_95x40_Ball";
  };
  class MEU_AP_OPTRE_42Rnd_95x40_Mag_Tracer: OPTRE_42Rnd_95x40_Mag
  {
    displayname="42Rnd 9.5x40mm AP Magazine (Tracers)";
    displaynameshort="9.5x40mm AP Tracer";
    initspeed=900;
    descriptionshort="42 Round Magazine<br>9.5x40mm<br>Tracer<br>AP";
    tracersEvery=1;
    ammo="MEU_AP_OPTRE_B_95x40_Ball";
  };
};
class CfgMagazineWells
{
  class MEU_32rnd_762_51
  {
    MEU[]=
    {
      "MEU_32Rnd_762x51_Mag",
      "MEU_32Rnd_762x51_Mag_T",
      "OPTRE_32Rnd_762x51_Mag",
      "OPTRE_32Rnd_762x51_Mag_Tracer",
      "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_32Rnd_762x51_Mag_AP",
      "OPTRE_32Rnd_762x51_Mag_APT",
      "OPTRE_32Rnd_762x51_Mag_JHP",
      "OPTRE_32Rnd_762x51_Mag_JHPT",
      "OPTRE_32Rnd_762x51_Mag_SS",
      "OPTRE_32Rnd_762x51_Mag_SST",
      "MEU_32Rnd_EMP_Rifle_General"
    };
  };
  class MEU_60rnd_762_51
  {
    MEU[]=
    {
      "OPTRE_60Rnd_762x51_Mag",
      "OPTRE_60Rnd_762x51_Mag_Tracer",
      "OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
      "OPTRE_60Rnd_762x51_Mag_AP",
      "OPTRE_60Rnd_762x51_Mag_APT",
      "OPTRE_60Rnd_762x51_Mag_JHP",
      "OPTRE_60Rnd_762x51_Mag_JHPT",
      "OPTRE_60Rnd_762x51_Mag_SS",
      "OPTRE_60Rnd_762x51_Mag_SST",
      "MEU_60Rnd_EMP_Rifle_General"
    };
  };
};
