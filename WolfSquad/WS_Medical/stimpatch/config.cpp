class CfgPatches
{
  class WS_Medical_Stimpatch
  {
    addonRootClass = "WS_Medical";

    author = "wlan0";
    dlc = "WS";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_Stimpatch"
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

  class WS_Medical_Stimpatch: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";
    dlc = "WS";

    displayName = "[WS] Stim-patch";
    descriptionShort = "Short term stimulant used to wake a patient from unconsciousness";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\stim-patch.paa";
    model = "";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 0.3;
    };
  };
};

class ACE_Medical_Treatment
{
  class Medication
  {
    class WS_Medical_Stimpatch
    {
      painReduce = 0;
      smgEffect = 1;

      hrIncreaseLow[] = { 0, 0 };
      hrIncreaseNormal[] = { 0, 0 };
      hrIncreaseHigh[] = { 0, 0 };

      timeInSystem = 90;
      timeTillMaxEffect = 10;
      maxDose = 999;
      viscosityChange = 0;
      onOverdose = "";
    };
  };
};

class ACE_Medical_Treatment_Actions
{
  class Epinephrine;

  class WS_Medical_Stimpatch: Epinephrine
  {
    displayName = "Apply Stim-Patch";
    displayNameProgress = "Applying Stim-Patch...";
    items[] = { "WS_Medical_Stimpatch" };

    treatmentTime = "if ([_medic] call ace_medical_treatment_fnc_isMedic) then {3} else {10}";
    callbackSuccess = "ace_medical_treatment_fnc_medication";
  };
};