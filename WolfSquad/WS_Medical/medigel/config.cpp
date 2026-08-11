class CfgPatches
{
  class WS_Medical_Medigel
  {
    addonRootClass = "WS_Medical";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Medigel"
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

  class WS_Medical_Medigel: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";

    displayName = "Medigel";
    descriptionShort = "Topical healing agent that can treat a variety of minor wounds from blunt trauma to plasma burns.";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\medigel.paa";
    model = "\OPTRE_Weapons\items\Medigel.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 7;
    };
  };
};

class ACE_Medical_Treatment
{
  class Bandaging
  {
    class ElasticBandage;
    class WS_Medical_Medigel: ElasticBandage
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
        effectiveness = 5;
      };
      class AbrasionMedium: AbrasionMinor
      {
        effectiveness = 4;
      };
      class AbrasionLarge: AbrasionMinor
      {
        effectiveness = 3;
      };

      // Avulsion
      class AvulsionMinor: Base
      {
        effectiveness = 2;
      };
      class AvulsionMedium: AvulsionMinor
      {
        effectiveness = 1;
      };
      class AvulsionLarge: AvulsionMinor
      {
        effectiveness = 0;
      };

      // Contusion
      class ContusionMinor: Base
      {
        effectiveness = 5;
      };
      class ContusionMedium: ContusionMinor
      {
        effectiveness = 4;
      };
      class ContusionLarge: ContusionMinor
      {
        effectiveness = 3;
      };

      // Crush
      class CrushMinor: Base
      {
        effectiveness = 5;
      };
      class CrushMedium: CrushMinor
      {
        effectiveness = 4;
      };
      class CrushLarge: CrushMinor
      {
        effectiveness = 3;
      };

      // Cut
      class CutMinor: Base
      {
        effectiveness = 4;
      };
      class CutMedium: CutMinor
      {
        effectiveness = 2;
      };
      class CutLarge: CutMinor
      {
        effectiveness = 0.5;
      };

      // Laceration
      class LacerationMinor: Base
      {
        effectiveness = 4;
      };
      class LacerationMedium: LacerationMinor
      {
        effectiveness = 2;
      };
      class LacerationLarge: LacerationMinor
      {
        effectiveness = 0.5;
      };

      // Velocity Wound
      class VelocityWoundMinor: Base
      {
        effectiveness = 3;
      };
      class VelocityWoundMedium: VelocityWoundMinor
      {
        effectiveness = 1;
      };
      class VelocityWoundLarge: VelocityWoundMinor
      {
        effectiveness = 0;
      };

      // Plasma
      class PlasmaMinor: Base
      {
        effectiveness = 4;
      };
      class PlasmaMedium: PlasmaMinor
      {
        effectiveness = 3;
      };
      class plasmaLarge: PlasmaMinor
      {
        effectiveness = 2;
      };

      // Puncture Wound
      class PunctureWoundMinor: Base
      {
        effectiveness = 3;
      };
      class PunctureWoundMedium: PunctureWoundMinor
      {
        effectiveness = 1;
      };
      class PunctureWoundLarge: PunctureWoundMinor
      {
        effectiveness = 0.25;
      };
    };
  }
};

class ACE_Medical_Treatment_Actions
{
  class BasicBandage;

  class WS_Medical_Medigel: BasicBandage
  {
    displayName = "Apply Medigel";
    displayNameProgress = "Applying Medigel...";
    items[] = { "WS_Medical_Medigel" };
    callbackSuccess = "WS_fnc_MedicalBandageAndPain";

    treatmentTime = 15; 
    treatmentTimeTrained = 5;

    litter[] = { { }, { "ACE_MedicalLitter_Medigel" } };
  };
};
