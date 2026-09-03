class CfgPatches
{
  class WS_Medical_Biofoam
  {
    addonRootClass = "WS_Medical";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Biofoam"
    };

    requiredVersion = 1;
    requiredAddons[] =
    {
      "WS_Medical",
    };
  }
};

class CfgWeapons
{
  class ACE_ItemCore;
  class CBA_MiscItem_ItemInfo;

  class WS_Medical_Biofoam: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";

    displayName = "Biofoam";
    descriptionShort = "Self-sealing coagulant foam to stop large scale bleeding and haemorrhaging";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\biofoam.paa";
    model = "\OPTRE_Weapons\items\Biofoam.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 11;
    };
  };
};

class ACE_Medical_Treatment
{
  class Bandaging
  {
    class ElasticBandage;
    class WS_Medical_Biofoam: ElasticBandage
    {
      class Base
      {
        effectiveness = 0;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };

      // Abrasion
      class AbrasionMinor: Base
      {
        effectiveness = 0;
      };
      class AbrasionMedium: AbrasionMinor
      {
        effectiveness = 0;
      };
      class AbrasionLarge: AbrasionMinor
      {
        effectiveness = 1;
      };

      // Avulsion
      class AvulsionMinor: Base
      {
        effectiveness = 3;
      };
      class AvulsionMedium: AvulsionMinor
      {
        effectiveness = 4;
      };
      class AvulsionLarge: AvulsionMinor
      {
        effectiveness = 5;
      };

      // Contusion
      class ContusionMinor: Base
      {
        effectiveness = 0;
      };
      class ContusionMedium: ContusionMinor
      {
        effectiveness = 0;
      };
      class ContusionLarge: ContusionMinor
      {
        effectiveness = 0;
      };

      // Crush
      class CrushMinor: Base
      {
        effectiveness = 0;
      };
      class CrushMedium: CrushMinor
      {
        effectiveness = 0;
      };
      class CrushLarge: CrushMinor
      {
        effectiveness = 0;
      };

      // Cut
      class CutMinor: Base
      {
        effectiveness = 0.5;
      };
      class CutMedium: CutMinor
      {
        effectiveness = 2;
      };
      class CutLarge: CutMinor
      {
        effectiveness = 4;
      };

      // Laceration
      class LacerationMinor: Base
      {
        effectiveness = 0.2;
      };
      class LacerationMedium: LacerationMinor
      {
        effectiveness = 2;
      };
      class LacerationLarge: LacerationMinor
      {
        effectiveness = 4;
      };

      // Velocity Wound
      class VelocityWoundMinor: Base
      {
        effectiveness = 2;
      };
      class VelocityWoundMedium: VelocityWoundMinor
      {
        effectiveness = 3.5;
      };
      class VelocityWoundLarge: VelocityWoundMinor
      {
        effectiveness = 5;
      };

      // Plasma
      class PlasmaMinor: Base
      {
        effectiveness = 2;
      };
      class PlasmaMedium: PlasmaMinor
      {
        effectiveness = 1;
      };
      class plasmaLarge: PlasmaMinor
      {
        effectiveness = 0.25;
      };

      // Puncture Wound
      class PunctureWoundMinor: Base
      {
        effectiveness = 3;
      };
      class PunctureWoundMedium: PunctureWoundMinor
      {
        effectiveness = 4;
      };
      class PunctureWoundLarge: PunctureWoundMinor
      {
        effectiveness = 5;
      };
    };
  }
};

class ACE_Medical_Treatment_Actions
{
  class BasicBandage;

  class WS_Medical_Biofoam: BasicBandage
  {
    displayName = "Inject Biofoam";
    displayNameProgress = "Injecting Biofoam...";
    items[] = { "WS_Medical_Biofoam" };
    callbackSuccess = "WS_fnc_MedicalBandageAndPain";
    
    treatmentTime = 10;
    treatmentTimeTrained = 5;
    
    litter[] = { { }, { "ACE_MedicalLitter_Biofoam" } };
  };
};
