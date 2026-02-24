class CfgPatches
{
  class WS_Gear_Uniform_M52
  {
    author = "wlan0";
    addonRootClass = "WS_Gear_Uniforms";
  };
};

/* Metaitem */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_Gear_Uniform_M52_Metaitem
    {
      label = "Wolf Squad M52 Uniform";
      options[] = {
        "type",
        "collar",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "odst",
          "oni",
          "kuroda",
        };
        class odst
        {
          label = "ODST";
        };
        class oni
        {
          label = "ONI";
        };
        class kuroda
        {
          label = "E. Kuroda";
        };
      };
      class collar
      {
        label = "Collar";
        values[] =
        {
          "collar",
          "nocollar",
        };
        class collar
        {
          label = "Collar";
        };
        class nocollar
        {
          label = "No Collar";
        };
      };
    };
  };
};

/* Arsenal Defs ---- */
class CfgWeapons
{
  // Base Item
  class ItemInfo;
  class MA_M56S_BDU;
  class WS_Gear_Uniforms_M52Base: MA_M56S_BDU
  {
    author = "wlan0";
    dlc = "WS";
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    displayName = "[WS] Generic M52 (Base)";
    CBRN_protectionLevel = "4 + 8";
    ACE_GForceCoef = 0.3;

    class ItemInfo : ItemInfo
    {
      uniformClass = "WS_Gear_Uniforms_M52Base";
      uniformType = "Neopren";
    };
  };

  // ODST Collar
  class WS_Gear_Uniform_M52_ODST: WS_Gear_Uniforms_M52Base
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "odst";
      collar = "collar";
    };

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[WS] M52 BDU";
    picture = "WS_Images\Common\logo_color.paa";

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_ODST";
      uniformType = "Neopren";
    };
  };

  // ODST No Collar
  class WS_Gear_Uniform_M52_ODST_NC: WS_Gear_Uniform_M52_ODST
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "odst";
      collar = "nocollar";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_ODST_NC";
    };
  };

  // ONI
  class WS_Gear_Uniform_M52_ONI: WS_Gear_Uniform_M52_ODST
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "oni";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_ONI";
    };
  };

  // E. Kuroda (ONI)
  class WS_Gear_Uniform_M52_Kuroda: WS_Gear_Uniform_M52_ODST
  {
    class XtdGearInfo
    {
      model = "WS_Gear_Uniform_M52_Metaitem";
      type = "kuroda";
    };

    class ItemInfo: ItemInfo
    {
      uniformClass = "WS_Gear_Uniform_M52_Kuroda";
    };
  };
};

/* Uniform Defs */
class CfgVehicles
{
  // Base item
  class SoldierWB;
  class WS_Gear_Uniforms_M52BaseUniform : SoldierWB
  {
    author = "wlan0";
    dlc = "WS";
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
    editorSubcategory = "WS_EdSubCat_ODSTs";

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

  // ODST Collar
  class WS_Gear_Uniform_M52_ODST: WS_Gear_Uniforms_M52BaseUniform
  {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    uniformClass = "WS_Gear_Uniform_M52_ODST";
    model = "\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      // "Uni_Upper",
      // "Uni_Lower",
      // "Uni_Collar",
      // "Armor_Underpad",
      "Armor_Straps",
      "Armor_Upper",
      "Armor_Lower",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Uniform\M52\_textures\odst_upperbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_collar.paa",
      "WS_Gear\Uniform\M52\_textures\base_softpadding.paa",
      "WS_Gear\Uniform\M52\_textures\base_armorstraps.paa",
      "WS_Gear\Uniform\M52\_textures\odst_upperarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa"
    };
  };

  // ODST No Collar
  class WS_Gear_Uniform_M52_ODST_NC: WS_Gear_Uniform_M52_ODST
  {
    uniformClass = "WS_Gear_Uniform_M52_ODST_NC";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      // "Uni_Upper",
      // "Uni_Lower",
      "Uni_Collar",
      // "Armor_Underpad",
      "Armor_Straps",
      "Armor_Upper",
      "Armor_Lower",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
  };

  // ONI
  class WS_Gear_Uniform_M52_ONI: WS_Gear_Uniform_M52_ODST
  {
    uniformClass = "WS_Gear_Uniform_M52_ONI";
    hiddenSelections[] =
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      // "Uni_Upper",
      // "Uni_Lower",
      "Uni_Collar",
      // "Armor_Underpad",
      "Armor_Straps",
      "Armor_Upper",
      // "Armor_Lower",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
  };

  // E. Kuroda (ONI)
  class WS_Gear_Uniform_M52_Kuroda: WS_Gear_Uniform_M52_ONI
  {
    uniformClass = "WS_Gear_Uniform_M52_Kuroda";

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Uniform\M52\_textures\odst_upperbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerbdu.paa",
      "WS_Gear\Uniform\M52\_textures\odst_collar.paa",
      "WS_Gear\Uniform\M52\_textures\base_softpadding.paa",
      "WS_Gear\Uniform\M52\_textures\base_armorstraps.paa",
      "WS_Gear\Uniform\M52\_textures\odst_upperarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_lowerarmor.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa",
      "WS_Gear\Uniform\M52\_textures\odst_shoulders.paa"
    };
  };
};




