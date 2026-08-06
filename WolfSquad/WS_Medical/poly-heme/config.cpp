class CfgPatches
{
  class WS_Medical_PolyHeme
  {
    addonRootClass = "WS_Medical";

    author = "wlan0";
    dlc = "WS";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_PolyHeme_250",
      "WS_Medical_PolyHeme_500",
      "WS_Medical_PolyHeme_1000",
    };

    requiredVersion = 1;
    requiredAddons[] = { };
  }
};

class CfgWeapons
{
  class ACE_ItemCore;
  class CBA_MiscItem_ItemInfo;

  class WS_Medical_PolyHeme_250: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";
    dlc = "WS";

    displayName = "[WS] Polymerized Hemoglobin IV (250ml)";
    descriptionShort = "Artificial blood replacement used for battlefield blood loss treatment";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\poly-heme.paa";
    model = "\z\ace\addons\medical_treatment\data\ivbag_250ml.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 6;
    };
  };
  class WS_Medical_PolyHeme_500: WS_Medical_PolyHeme_250
  {
    displayName = "[WS] Polymerized Hemoglobin IV (500ml)";
    model = "\z\ace\addons\medical_treatment\data\ivbag_500.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 12;
    };
  };
  class WS_Medical_PolyHeme_1000: WS_Medical_PolyHeme_250
  {
    displayName = "[WS] Polymerized Hemoglobin IV (1000ml)";
    model = "\z\ace\addons\medical_treatment\data\ivbag_1000ml.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 23;
    };
  };
};

class ACE_Medical_Treatment
{
  class IV
  {
    class BloodIV;
    class WS_Medical_PolyHeme_250: BloodIV { volume = 250 };
    class WS_Medical_PolyHeme_500: BloodIV { volume = 500 };
    class WS_Medical_PolyHeme_1000: BloodIV { volume = 1000 };
  }
};

class ACE_Medical_Treatment_Actions
{
  class BloodIV;

  class WS_Medical_PolyHeme_250: BloodIV
  {
    displayName = "Transfuse Poly-Heme (250ml)";
    displayNameProgress = "Transfusing Polymerized Hemoglobin...";
    items[] = { "WS_Medical_PolyHeme_250" };

    treatmentTime = "if ([_medic] call ace_medical_treatment_fnc_isMedic) then { 10 } else { 30 }";
  };
  class WS_Medical_PolyHeme_500: WS_Medical_PolyHeme_250
  {
    displayName = "Transfuse Poly-Heme (500ml)";
    items[] = { "WS_Medical_PolyHeme_500" };
  };
  class WS_Medical_PolyHeme_1000: WS_Medical_PolyHeme_250
  {
    displayName = "Transfuse Poly-Heme (1000ml)";
    items[] = { "WS_Medical_PolyHeme_1000" };
  };
};
