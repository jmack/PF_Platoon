class CfgPatches
{
  class WS_Medical_Biofoam
  {
    addonRootClass = "WS_Medical";

    author = "wlan0";
    dlc = "WS";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Biofoam"
    };

    requiredVersion = 1;
    requiredAddons[] = { };
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
    dlc = "WS";

    displayName = "[WS] Biofoam";
    descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
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
      // Abrasion
      class Abrasion
      {
        effectiveness = 2;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class AbrasionMinor: Abrasion { };
      class AbrasionMedium: Abrasion
      {
        effectiveness = 1.5;
      };
      class AbrasionLarge: Abrasion
      {
        effectiveness = 1;
      };

      // Avulsion
      class Avulsions
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class AvulsionMinor: Avulsions { };
      class AvulsionMedium: Avulsions
      {
        effectiveness = 4;
      };
      class AvulsionLarge: Avulsions
      {
        effectiveness = 3;
      };

      // Contusion
      class Contusions
      {
        effectiveness = 2;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class ContusionMinor: Contusions { };
      class ContusionMedium: Contusions
      {
        effectiveness = 1.5;
      };
      class ContusionLarge: Contusions
      {
        effectiveness = 1;
      };

      // Crush
      class Crushes
      {
        effectiveness = 2;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class CrushMinor: Crushes { };
      class CrushMedium: Crushes
      {
        effectiveness = 1.5;
      };
      class CrushLarge: Crushes
      {
        effectiveness = 1;
      };

      // Cut
      class Cuts
      {
        effectiveness = 3;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class CutMinor: Cuts { };
      class CutMedium: Cuts
      {
        effectiveness = 2;
      };
      class CutLarge: Cuts
      {
        effectiveness = 1;
      };

      // Laceration
      class Lacerations
      {
        effectiveness = 3;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class LacerationMinor: Lacerations { };
      class LacerationMedium: Lacerations
      {
        effectiveness = 2.5;
      };
      class LacerationLarge: Lacerations
      {
        effectiveness = 2;
      };

      // Velocity Wound
      class VelocityWounds
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class VelocityWoundMinor: VelocityWounds { };
      class VelocityWoundMedium: VelocityWounds
      {
        effectiveness = 4;
      };
      class VelocityWoundLarge: VelocityWounds
      {
        effectiveness = 3;
      };

      // Plasma
      class Plasma
      {
        effectiveness = 2;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class PlasmaMinor: Plasma { };
      class PlasmaMedium: Plasma
      {
        effectiveness = 1.5;
      };
      class plasmaLarge: Plasma
      {
        effectiveness = 1;
      };

      // Puncture Wound
      class PunctureWounds
      {
        effectiveness = 5;
        reopeningChance = 0;
        reopeningMinDelay = 0;
        reopeningMaxDelay = 0;
      };
      class PunctureWoundMinor: PunctureWounds { };
      class PunctureWoundMedium: PunctureWounds
      {
        effectiveness = 4;
      };
      class PunctureWoundLarge: PunctureWounds
      {
        effectiveness = 3;
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

    treatmentTime = "if ([_medic] call ace_medical_treatment_fnc_isMedic) then { 5 } else { 10 }";
    litter[] = { { }, { "ACE_MedicalLitter_Biofoam" } };
  };
};
