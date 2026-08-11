class CfgPatches
{
  class WS_Medical_CHC
  {
    addonRootClass = "WS_Medical";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_CHC_500",
      "WS_Medical_CHC_1000",
      "WS_Medical_CHC_2000",
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

  class WS_Medical_CHC_500: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";

    displayName = "Catalyzed Hemoglobin Concentrate (500ml eq)";
    descriptionShort = "An artificial blood replacement that can double its effective volume when activated";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\chc.paa";
    model = "\z\ace\addons\medical_treatment\data\ivbag_250ml.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 6;
    };
  };
  class WS_Medical_CHC_1000: WS_Medical_CHC_500
  {
    displayName = "Catalyzed Hemoglobin Concentrate (1000ml eq)";
    model = "\z\ace\addons\medical_treatment\data\ivbag_500.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 12;
    };
  };
  class WS_Medical_CHC_2000: WS_Medical_CHC_500
  {
    displayName = "Catalyzed Hemoglobin Concentrate (2000ml eq)";
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
    class WS_Medical_CHC_500: BloodIV { volume = 500 };
    class WS_Medical_CHC_1000: BloodIV { volume = 1000 };
    class WS_Medical_CHC_2000: BloodIV { volume = 2000 };
  }
};

class ACE_Medical_Treatment_Actions
{
  class BloodIV;

  class WS_Medical_CHC_500: BloodIV
  {
    displayName = "Transfuse CHC (500ml equiv)";
    displayNameProgress = "Transfusing Catalyzed Hemoglobin...";
    items[] = { "WS_Medical_CHC_500" };

    treatmentTime = 30;
    treatmentTimeTrained = 10;
  };
  class WS_Medical_CHC_1000: WS_Medical_CHC_500
  {
    displayName = "Transfuse CHC (1000ml equiv)";
    items[] = { "WS_Medical_CHC_1000" };
  };
  class WS_Medical_CHC_2000: WS_Medical_CHC_500
  {
    displayName = "Transfuse CHC (2000ml equiv)";
    items[] = { "WS_Medical_CHC_2000" };
  };
};
