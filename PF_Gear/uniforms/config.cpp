class CfgPatches
{
  class PF_Gear_Uniforms
  {
    author = "wlan0";
    addonRootClass = "PF_Gear";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      "OPTRE_Core",
      "HSim_Characters_H_Woman_Uniforms",
    };
  };
};

class CfgWeapons
{
  class ItemInfo;
  class MA_M56S_BDU;
  class PF_Gear_Uniforms_BaseBDU : MA_M56S_BDU
  {
    author = "wlan0";
    dlc = "PF_Plt";
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    displayName = "[PF] Generic Uniform (Base)";
    CBRN_protectionLevel = "4 + 8";
    ACE_GForceCoef = 0.9;

    class ItemInfo : ItemInfo
    {
      uniformClass = "PF_Uniforms_Base";
      uniformType = "Neopren";
    };
  };
};

class CfgVehicles
{
  class SoldierWB;
  class PF_Gear_Uniforms_BaseUniform : SoldierWB
  {
    author = "wlan0";
    dlc = "PF_Plt";
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    vehicleClass = "";
    uniformClass = "";
    model = "";
    weapons[] =
    {
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "Throw",
      "Put",
    };
    Items[] = {};
    RespawnItems[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] = {};
    editorSubcategory = "PF_EdSubCat_ODSTs";

    class HitPoints
    {
      class HitFace
      {
        armor = 5;
        material = -1;
        name = "face_hub";
        passThrough = 0.8;
        radius = 0.08;
        explosionShielding = 0.1;
        minimalHit = 0.01;
      };
      class HitNeck
      {
        armor = 5;
        material = -1;
        name = "neck";
        passThrough = 0.8;
        radius = 0.1;
        explosionShielding = 0.5;
        minimalHit = 0.01;
      };
      class HitHead
      {
        armor = 5;
        material = -1;
        name = "head";
        passThrough = 0.8;
        radius = 0.2;
        explosionShielding = 0.5;
        minimalHit = 0.01;
        depends = "HitFace max HitNeck";
      };
      class HitPelvis
      {
        armor = 6;
        material = -1;
        name = "pelvis";
        passThrough = 0.8;
        radius = 0.24;
        explosionShielding = 0.1;
        visual = "injury_body";
        minimalHit = 0.01;
        depends = "0";
      };
      class HitAbdomen
      {
        armor = 6;
        material = -1;
        name = "spine1";
        passThrough = 0.8;
        radius = 0.16;
        explosionShielding = 0.1;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitDiaphragm
      {
        armor = 6;
        material = -1;
        name = "spine2";
        passThrough = 0.8;
        radius = 0.18;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitChest
      {
        armor = 6;
        material = -1;
        name = "spine3";
        passThrough = 0.8;
        radius = 0.18;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
      };
      class HitBody
      {
        armor = 1000;
        material = -1;
        name = "body";
        passThrough = 1;
        radius = 0;
        explosionShielding = 0.25;
        visual = "injury_body";
        minimalHit = 0.01;
        depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
      };
      class HitArms
      {
        armor = 6;
        material = -1;
        name = "arms";
        passThrough = 1;
        radius = 0.1;
        explosionShielding = 0.3;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "0";
      };
      class HitHands
      {
        armor = 6;
        material = -1;
        name = "hands";
        passThrough = 1;
        radius = 0.1;
        explosionShielding = 0.3;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "HitArms";
      };
      class HitLegs
      {
        armor = 6;
        material = -1;
        name = "legs";
        passThrough = 1;
        radius = 0.14;
        explosionShielding = 0.3;
        visual = "injury_legs";
        minimalHit = 0.01;
        depends = "0";
      };
      class Incapacitated
      {
        armor = 1000;
        material = -1;
        name = "body";
        passThrough = 1;
        radius = 0;
        explosionShielding = 0.1;
        visual = "";
        minimalHit = 0;
        depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
      };
      class HitLeftArm
      {
        armor = 6;
        material = -1;
        name = "hand_l";
        passThrough = 1;
        radius = 0.08;
        explosionShielding = 0.1;
        visual = "injury_hands";
        minimalHit = 0.01;
      };
      class HitRightArm
      {
        armor = 6;
        material = -1;
        name = "hand_r";
        passThrough = 1;
        radius = 0.08;
        explosionShielding = 0.1;
        visual = "injury_hands";
        minimalHit = 0.01;
      };
      class HitLeftLeg
      {
        armor = 6;
        material = -1;
        name = "leg_l";
        passThrough = 1;
        radius = 0.1;
        explosionShielding = 0.1;
        visual = "injury_legs";
        minimalHit = 0.01;
      };
      class HitRightLeg
      {
        armor = 6;
        material = -1;
        name = "leg_r";
        passThrough = 1;
        radius = 0.1;
        explosionShielding = 0.1;
        visual = "injury_legs";
        minimalHit = 0.01;
      };
      class ACE_HDBracket
      {
        armor = 1;
        material = -1;
        name = "head";
        passThrough = 0;
        radius = 1;
        explosionShielding = 0.1;
        visual = "";
        minimalHit = 0;
        depends = "HitHead";
      };
    };
  };
};
