class CfgPatches
{
  class PF_Nightstalker
  {
    addonRootClass="PF_Weapons_Scopes";
    requiredAddons[]=
    {
      "A3_Weapons_F",
      "A3_Weapons_F_Items"
    };
    requiredVersion=0.1;
    units[]={};
    weapons[]=
    {
      "PF_Nightstalker",
    };
  };
};

// actual thing. no extra stuff because base arma? do i need them?? AAAAAAAAAAAAAA
class optic_Nightstalker;
class InventoryOpticsItem_Base_F;
class ItemInfo;
class CfgWeapons
{
  class PF_Nightstalker: optic_Nightstalker
  {
    author="OriUnder";
    _generalMacro="PF_Nightstalker";
    scope=2;
    displayName="[PF] Nightstalker";
    picture="\a3\Weapons_F\acc\Data\UI\icon_optic_Nightstalker_ca.paa";
    model="\A3\weapons_f\acc\acco_Nightstalker_F";
    descriptionShort="Nightstalker";
    weaponInfoType="RscOptics_nightstalker";
    class ItemInfo: InventoryOpticsItem_Base_F
    {
      mass=12;
      opticType=1;
      optics=1;
      modelOptics="\A3\Weapons_f\acc\reticle_nightstalker_F";
      class OpticsModes
      {
        class NCTALKEP
        {
          opticsID=1;
          useModelOptics=1;
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
          opticsZoomMin=0.025;
          opticsZoomMax=0.0625;
          opticsZoomInit=0.0625;
          discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
          discreteDistanceInitIndex=1;
          distanceZoomMin=100;
          distanceZoomMax=1000;
          memoryPointCamera="opticView";
          visionMode[]={};
          thermalMode[]={};
          opticsFlare=1;
          opticsDisablePeripherialVision=1;
          cameraDir="";
        };
        class Iron: NCTALKEP
        {
          opticsID=2;
          useModelOptics=0;
          opticsPPEffects[]=
          {
            "",
            ""
          };
          opticsFlare=0;
          opticsDisablePeripherialVision=0;
          discreteDistance[]={200};
          discreteDistanceInitIndex=0;
          opticsZoomMin=0.25;
          opticsZoomMax=1.25;
          opticsZoomInit=0.75;
          memoryPointCamera="eye";
          visionMode[]={};
        };
      };
    };
    inertia=0.2;
  };
};