class CfgPatches
{
  class 1st_MEU_patch_weapons_meu_rework_br
  {
    author="1st MEU Mod Team";
    addonRootClass="1st_MEU_patch_weapons_meu_rework";
    requiredAddons[]=
    {
      "1st_MEU_patch_weapons_meu_rework"
    };
    requiredVersion=0.1;
    units[]={};
    weapons[]={};
    magazines[]={};
    ammo[]={};
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
  class MEU_OPTRE_BR55HB: OPTRE_BR55HB
  {
    baseWeapon="MEU_OPTRE_BR55HB";
    canShootInWater=1;
    magazineWell[]+=
    {
      "MEU_rifle_uw"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      class CowsSlot: CowsSlot
      {
        compatibleitems[]+=
        {
          "PF_Holo_DMR",
          "PF_Nightstalker"
        };
      };
    };
  };
  class MEU_OPTRE_BR55HB_Red: MEU_OPTRE_BR55HB
  {
    baseWeapon="MEU_OPTRE_BR55HB_Red";
    hiddenSelections[]=
    {
      "camo1",
      "camo2"
    };
    hiddenSelectionsTextures[]=
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
