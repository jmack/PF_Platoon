class CfgPatches
{
  class WS_Medical_BoneKnit
  {
    addonRootClass = "WS_Medical";

    units[] = { };
    weapons[] =
    {
      "WS_Medical_BoneKnit"
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

  class WS_Medical_BoneKnit: ACE_ItemCore
  {
    scope = 2;
    author = "wlan0";

    displayName = "Bone-knitting polymer";
    descriptionShort = "Polymer injected into a wound that forms an artificial cast around the bone, setting and accelerating the healing of a fracture";
    descriptionUse = "";

    picture = "\WS_Medical\_icons\bone-knitting-polymer.paa";
    model = "";

    class ItemInfo: CBA_MiscItem_ItemInfo
    {
      mass = 8;
    };
  };
};

class ACE_Medical_Treatment_Actions
{
  class Splint;

  class WS_Medical_BoneKnit: Splint
  {
    displayName = "Inject Bone-Knitting Polymer";
    displayNameProgress = "Injecting Bone-Knitting Polymer...";
    items[] = { "WS_Medical_BoneKnit" };
    callbackSuccess = "ace_medical_treatment_fnc_splint";

    treatmentTime = 15;
    treatmentTimeTrained = 5;
  };
};
