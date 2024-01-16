class CfgPatches
{
  class PF_Recon_Scopes
  {
    author = "OriUnder";
    addonRootClass = "PF_Weapons_Scopes";
    units[] = {};
    weapons[] = 
    {
      "PF_Holo_DMR",
    };
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Weapons",
      "Project_Necromancer_ReconSight",
    };
  };
};

// potentially important stuff??????
class CowsSlot;
class CowsSlot_Rail: CowsSlot
{
  class compatibleItems
  {
    PF_Holo_DMR = 1;
  };  
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
  class compatibleItems
  {
    PF_Holo_DMR = 1;
  };
};

class MEU_REC_HOLO_DMR;
// The actual DMR scope
class ItemInfo;
class CfgWeapons
{
  class PF_Holo_DM : MEU_REC_HOLO_DMR
  {
    displayName="[PF] x1-x8 DMR Sight (Blue)";
    picture="\a3\Weapons_F_Mark\Data\UI\icon_optic_AMS_ca.paa";
    class ItemInfo: ItemInfo
    {
      class OpticsModes
      {
        class RDS
        {
          opticsID=1;
          useModelOptics=0;
          opticsZoomMin=0.25;
          opticsZoomMax=1.25;
          opticsZoomInit=0.75;
          memoryPointCamera="eye";
          opticsFlare=0;
          opticsDisablePeripherialVision=0;
          distanceZoomMin=100;
          distanceZoomMax=100;
          cameraDir="";
          visionMode[]={};
          opticsPPEffects[]=
          {
            ""
          };
        };
        class OPTRE_ReconScope_BUISZOOM: RDS
        {
          opticsID=2;
          useModelOptics=1;
          opticsZoomMin=0.025;
          opticsZoomMax=0.125;
          opticsZoomInit=0.125;
          discretefov[]={0.125,0.050000001,0.025};
          discreteDistance[]={100,300,400,500,600,700,800,900,1000};
          discreteinitIndex=0;
          discreteDistanceInitIndex=1;
          distanceZoomMin=100;
          distanceZoomMax=1000;
          memoryPointCamera="eye";
          modelOptics[]=
          {
            "\1st_meu_weapons\ReconSight\data\optics\Recon_Optic_4x.p3d",
            "\1st_meu_weapons\ReconSight\data\optics\Recon_Optic_6x.p3d",
            "\1st_meu_weapons\ReconSight\data\optics\Recon_Optic_10x.p3d"
          };
          visionMode[]={};
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
        };
      };
    };
  };
};