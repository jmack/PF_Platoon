class CfgPatches
{
  class WS_Medical_Morphine
  {
    addonRootClass = "WS_Medical";

    author = "wlan0";
    dlc = "WS";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Morphine"
    };

    requiredVersion = 1;
    requiredAddons[] =
    {
      "OPTRE_ACE_Compat_Medical",
    };
  }
};

class CfgWeapons
{
  class ACE_ItemCore;
  class CBA_MiscItem_ItemInfo;

  class WS_Medical_Morphine: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";
    dlc = "WS";

    displayName = "[WS] Morphine Autoinjector";
    descriptionShort = "A venerable analgesic used to greatly reduce pain from injuries";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\morphine.paa";
    model = "\z\ace\addons\medical_treatment\data\morphine.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 1;
    };
  };
};

class ACE_Medical_Treatment
{
  class Medication
  {
    class WS_Medical_Morphine
    {
      painReduce = 0.75;

      hrIncreaseLow[] = { 0, 0 };
      hrIncreaseNormal[] = { 0, 0 };
      hrIncreaseHigh[] = { 0, 0 };

      timeInSystem = 450;
      timeTillMaxEffect = 30;
      maxDose = 999;
      viscosityChange = 0;
      onOverdose = "";
    };
  };
};

class ACE_Medical_Treatment_Actions
{
  class Morphine;

  class WS_Medical_Morphine: Morphine
  {
    displayName = "Inject Morphine";
    displayNameProgress = "Injecting Morphine...";
    items[] = { "WS_Medical_Morphine" };

    treatmentTime = "if ([_medic] call ace_medical_treatment_fnc_isMedic) then {3} else {10}";
    callbackSuccess = "ace_medical_treatment_fnc_medication";
  };
};
