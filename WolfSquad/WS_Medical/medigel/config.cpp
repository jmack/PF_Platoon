class CfgPatches
{
  class WS_Medical_Medigel
  {
    addonRootClass = "WS_Medical";

    author = "wlan0";
    dlc = "WS";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Medigel"
    };

    requiredVersion = 1;
    requiredAddons[] = { };
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
    dlc = "WS";

    displayName = "[WS] Medigel";
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
      // Abrasion
      class Abrasion
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class AbrasionMinor: Abrasion { };
      class AbrasionMedium: Abrasion
      {
        effectiveness = 4;
      };
      class AbrasionLarge: Abrasion
      {
        effectiveness = 3;
      };

      // Avulsion
      class Avulsions
      {
        effectiveness = 2;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class AvulsionMinor: Avulsions { };
      class AvulsionMedium: Avulsions
      {
        effectiveness = 1.5;
      };
      class AvulsionLarge: Avulsions
      {
        effectiveness = 1;
      };

      // Contusion
      class Contusions
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class ContusionMinor: Contusions { };
      class ContusionMedium: Contusions
      {
        effectiveness = 4;
      };
      class ContusionLarge: Contusions
      {
        effectiveness = 3;
      };

      // Crush
      class Crushes
      {
        effectiveness = 4;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class CrushMinor: Crushes { };
      class CrushMedium: Crushes
      {
        effectiveness = 3;
      };
      class CrushLarge: Crushes
      {
        effectiveness = 2;
      };

      // Cut
      class Cuts
      {
        effectiveness = 4;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class CutMinor: Cuts { };
      class CutMedium: Cuts
      {
        effectiveness = 3;
      };
      class CutLarge: Cuts
      {
        effectiveness = 2;
      };

      // Laceration
      class Lacerations
      {
        effectiveness = 4;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class LacerationMinor: Lacerations { };
      class LacerationMedium: Lacerations
      {
        effectiveness = 3;
      };
      class LacerationLarge: Lacerations
      {
        effectiveness = 2.75;
      };

      // Velocity Wound
      class VelocityWounds
      {
        effectiveness = 3;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class VelocityWoundMinor: VelocityWounds { };
      class VelocityWoundMedium: VelocityWounds
      {
        effectiveness = 1;
      };
      class VelocityWoundLarge: VelocityWounds
      {
        effectiveness = 0.25;
      };

      // Plasma
      class Plasma
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class PlasmaMinor: Plasma { };
      class PlasmaMedium: Plasma
      {
        effectiveness = 4;
      };
      class plasmaLarge: Plasma
      {
        effectiveness = 3;
      };

      // Puncture Wound
      class PunctureWounds
      {
        effectiveness = 3;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class PunctureWoundMinor: PunctureWounds { };
      class PunctureWoundMedium: PunctureWounds
      {
        effectiveness = 1;
      };
      class PunctureWoundLarge: PunctureWounds
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

    treatmentTime = "if ([_medic] call ace_medical_treatment_fnc_isMedic) then { 8 } else { 15 }";
    litter[] = { { }, { "ACE_MedicalLitter_Medigel" } };
  };
};
