class CfgPatches
{
  class PF_Weapons_Primaries_Smgs
  {
    author = "OriUnder";
    addonRootClass = "PF_Weapons_Primaries";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Weapons",
      "19_UNSC_Weapons",
    };
  };
};

// the gun
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class CfgWeapons
{
  class MEU_M7v2;
  class PF_M7 : MEU_M7v2
  {
    author = "OriUnder";
    baseWeapon = "PF_M7";
    displayName = "[PF] M7 Caseless SMG";
    model = "\UNSC_F_Weapons\weapons\UNSC_M7.p3d";
    reloadAction="OPTRE_GestureReloadM7";
    picture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
    UiPicture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
    handAnim[] =
    {
    "OFP2_ManSkeleton",
    "\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm",
    "Spartan_ManSkeleton",
    "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"
    };
  };
};
