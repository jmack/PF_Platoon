class CfgPatches
{
  class WS_M52S_Vest
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
  }
}

/* Metaitem Definitions */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_M52S_Vest_Metaitem
    {
      label = "Wolf Squad M52S";
      options[] =
      {
        "type",
      };
      class type
      {
        label = "Type";
        alwaysSelectable = 1;
        values[] =
        {
          "light",
          "standard",
          "cqb",
          "marksman",
          "barnes",
          "kuroda",
        };
        class light
        {
          label = "Light";
        };
        class standard
        {
          label = "Standard";
        };
        class cqb
        {
          label = "CQB";
        };
        class marksman
        {
          label = "Marksman";
        };
        class barnes
        {
          label = "C. Barnes";
        };
        class kuroda
        {
          label = "E. Kuroda";
        };
      };
    };
  };
};

/* Armor Definitions */
class CfgWeapons
{
  // Base Item
  class ItemInfo;
  class VestItem;
  class V_PlateCarrier1_rgr;
  class WS_M52S_Vest_Base: V_PlateCarrier1_rgr
  {
    scope = 1;
    scopeArsenal = 1;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M52S Armor";
    model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
    picture = "WS_Images\Common\logo_color.paa";
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
      "Camo11",
      "Camo12",
      "Camo13",
      "Camo14",
      "Camo15",
      "Camo16",
      "Camo17",
      "Camo18",
      "Camo19",
      "Camo20",
      "Camo21",
      "Camo22",
      "Camo23",
      "Camo24",
      "Camo25",
      "Camo26",
      "Camo27",
      "Camo28",
      "Camo29",
      "CQB_Left",
      "CQB_Right",
      "Marksman_Left",
      "Marksman_Right",
      "ODST_Bracer_Left",
      "ODST_Bracer_Right",
      "ODST_Chest",
      "ODST_Left",
      "ODST_Right",
      "ChestPMLeft",
      "ChestPMRight",
      "ChestPouch",
      "LShoulderRadio",
      "RShoulderRadio",
      "StomachPouch",
      "TorsoPMLeft",
      "TorsoPMRight",
      "TorsoPouch",
      "WaistBack",
      "WaistGLeft",
      "WaistGRight",
      "WaistPLeft",
      "WaistPRight",
      "WaistRLeft",
      "WaistRRight",
      "WaistSLeft",
      "WaistSRight",
      "LegPouchL",
      "LegPouchR"
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",      // Shoulder L: CQB Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",      // Shoulder R: CQB Right
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa", // Shoulder L: Marksman Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa", // Shoulder R: Marksman Right
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Bracer L: ODST Left
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Bracer R: ODST Right
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Chest Plate: ODST
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",     // Shoulder L: ODST Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",     // Shoulder R: ODST Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Chest Pistol Mag L: Pistol Mag
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Chest Pistol Mag R: Pistol Mag
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Chest Pouch: ChestPouch
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Shoulder Accessory L: Radio Left
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Shoulder Accessory R: Radio Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso: 2x Pouch(?)
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso L: Pistol Mag
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso R: Pistol Mag
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Torso: 1x Pouch(?)
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist B: Pouch
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist SL: Grenades
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist SR: Grenades
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist FL: Pouches
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist FR: Pouches
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Waist BL: Radio
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Waist BR: Radio
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist SL: Smoke
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist SR: Smoke
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Leg L: LegPouchL
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa"           // Leg R: LegPouchR
    };
    class ItemInfo: VestItem
    {
      vestType = "Rebreather";
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
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        "ODST_Bracer_Left",
        "ODST_Bracer_Right",
        "ODST_Chest",
        "ODST_Left",
        "ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR"
      };
      hiddenSelectionsTextures[] =
      {
        "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",      // Shoulder L: CQB Left
        "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",      // Shoulder R: CQB Right
        "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa", // Shoulder L: Marksman Left
        "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa", // Shoulder R: Marksman Right
        "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Bracer L: ODST Left
        "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Bracer R: ODST Right
        "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",          // Chest Plate: ODST
        "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",     // Shoulder L: ODST Left
        "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",     // Shoulder R: ODST Right
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Chest Pistol Mag L: Pistol Mag
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Chest Pistol Mag R: Pistol Mag
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Chest Pouch: ChestPouch
        "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Shoulder Accessory L: Radio Left
        "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Shoulder Accessory R: Radio Right
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso: 2x Pouch(?)
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso L: Pistol Mag
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Torso R: Pistol Mag
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Torso: 1x Pouch(?)
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist B: Pouch
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist SL: Grenades
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist SR: Grenades
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist FL: Pouches
        "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",          // Waist FR: Pouches
        "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Waist BL: Radio
        "WS_Gear\Vests\M52S\_textures\base\radio.paa",              // Waist BR: Radio
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist SL: Smoke
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Waist SR: Smoke
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",          // Leg L: LegPouchL
        "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa"           // Leg R: LegPouchR
      };
      uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
      containerClass = "Supply200";
      mass = 20;
      passThrough = 0.1;
      modelSides[] = { 6 };
      class HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 20;
          passThrough = 0.5;
        };
        class Legs
        {
          hitpointName = "HitLegs";
          armor = 20;
          passThrough = 0.5;
        };
        class Arms
        {
          hitpointName = "HitArms";
          armor = 25;
          passThrough = 0.1;
        };
        class Hands
        {
          hitpointName = "HitHands";
          armor = 20;
          passThrough = 0.1;
        };
        class Chest
        {
          hitpointName = "HitChest";
          armor = 35;
          passThrough = 0.1;
        };
        class Diaphragm
        {
          hitpointName = "HitDiaphragm";
          armor = 30;
          passThrough = 0.1;
        };
        class Abdomen
        {
          hitpointName = "HitAbdomen";
          armor = 30;
          passThrough = 0.1;
        };
        class Pelvis
        {
          hitpointName = "HitPelvis";
          armor = 30;
          passThrough = 0.1;
        };
        class Body
        {
          hitpointName = "HitBody";
          passThrough = 0.1;
        };
      };
    };
  };

  /* Start actual armor definitions */

  // Light
  class WS_M52S_Vest_Light: WS_M52S_Vest_Base
  {
    class XtdGearInfo
    {
      model = "WS_M52S_Vest_Metaitem";
      type = "light";
    };

    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: ItemInfo
    {
      hiddenSelections[] =
      {
        // Commenting a line out makes it visible on the model
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
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",

        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        // "ODST_Bracer_Left",
        // "ODST_Bracer_Right",
        // "ODST_Chest",
        "ODST_Left",
        "ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR",
      };
    };
  };

  // Standard
  class WS_M52S_Vest_Standard: WS_M52S_Vest_Base
  {
    // Metaitem link
    class XtdGearInfo
    {
      model = "WS_M52S_Vest_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: ItemInfo
    {
      hiddenSelections[] =
      {
        // Commenting a line out makes it visible on the model
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
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",

        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        // "ODST_Bracer_Left",
        // "ODST_Bracer_Right",
        // "ODST_Chest",
        // "ODST_Left",
        // "ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        // "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        // "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        // "WaistSRight",
        "LegPouchL",
        "LegPouchR",
      };
    };
  };

  // Barnes
  class WS_M52S_Vest_Barnes: WS_M52S_Vest_Base
  {
    // Metaitem link
    class XtdGearInfo
    {
      model = "WS_M52S_Vest_Metaitem";
      type = "barnes";
    };

    scope = 2;
    scopeArsenal = 2;

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",        // CQB Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",        // CQB Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa",   // Marksman Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa",   // Marksman Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",            // ODST Bracer Left
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",            // ODST Bracer Right
      "WS_Gear\Vests\M52S\_textures\barnes\vest.paa",               // ODST Chest
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",       // ODST Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",       // ODST Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Chest Pistol Mag Leftag
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Chest Pistol Mag Rightag
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Big Stomach Pouch
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Shoulder Mounted Radio LeftLeft
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Shoulder Mounted Radio RightRight
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Stomach 2x Pouches
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Torso Pistol Mag Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Torso Pistol Mag Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Chest Big Pouch
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Back Pouch
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Grenades Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Grenades Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Pouches Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Pouches Right
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Waist Radio Left
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Waist Radio Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Smoke Grenades Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Smoke Grenades Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Leg Pouch Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa"             // Leg Pouch Right
    };

    class ItemInfo: ItemInfo
    {
      hiddenSelections[] =
      {
        // Commenting a line out makes it visible on the model
        "Camo1",                // CQB Shoulder Left
        "Camo2",                // CQB Shoulder Right
        "Camo3",                // Marksman Shoulder Left
        "Camo4",                // Marksman Shoulder Right
        "Camo5",                // ODST Bracer Left
        "Camo6",                // ODST Bracer Right
        "Camo7",                // ODST Chest
        "Camo8",                // ODST Shoulder Left
        "Camo9",                // ODST Shoulder Right
        "Camo10",               // Chest Pistol Mag Left
        "Camo11",               // Chest Pistol Mag Right
        "Camo12",               // Big Stomach Pouch
        "Camo13",               // Shoulder Mounted Radio Left
        "Camo14",               // Shoulder Mounted Radio Right
        "Camo15",               // Stomach 2x Pouches
        "Camo16",               // Torso Pistol Mag Left
        "Camo17",               // Torso Pistol Mag Right
        "Camo18",               // Chest Big Pouch
        "Camo19",               // Waist Back Pouch
        "Camo20",               // Waist Grenades Left
        "Camo21",               // Waist Grenades Right
        "Camo22",               // Waist Pouches Left
        "Camo23",               // Waist Pouches Right
        "Camo24",               // Waist Radio Left
        "Camo25",               // Waist Radio Right
        "Camo26",               // Waist Smoke Grenades Left
        "Camo27",               // Waist Smoke Grenades Right
        "Camo28",               // Leg Pouch Left
        "Camo29",               // Leg Pouch Right

        // "CQB_Left",             // CQB Shoulder Left
        // "CQB_Right",            // CQB Shoulder Right
        "Marksman_Left",        // Marksman Shoulder Left
        "Marksman_Right",       // Marksman Shoulder Right
        // "ODST_Bracer_Left",     // ODST Bracer Left
        // "ODST_Bracer_Right",    // ODST Bracer Right
        // "ODST_Chest",           // ODST Chest
        "ODST_Left",            // ODST Shoulder Left
        "ODST_Right",           // ODST Shoulder Right
        // "ChestPMLeft",          // Chest Pistol Mag Left
        // "ChestPMRight",         // Chest Pistol Mag Right
        // "ChestPouch",           // Big Stomach Pouch
        "LShoulderRadio",       // Shoulder Mounted Radio Left
        "RShoulderRadio",       // Shoulder Mounted Radio Right
        "StomachPouch",         // Stomach 2x Pouches
        "TorsoPMLeft",          // Torso Pistol Mag Left
        "TorsoPMRight",         // Torso Pistol Mag Right
        "TorsoPouch",           // Chest Big Pouch
        "WaistBack",            // Waist Back Pouch
        "WaistGLeft",           // Waist Grenades Left
        // "WaistGRight",          // Waist Grenades Right
        // "WaistPLeft",           // Waist Pouches Left
        // "WaistPRight",          // Waist Pouches Right
        "WaistRLeft",           // Waist Radio Left
        "WaistRRight",          // Waist Radio Right
        // "WaistSLeft",           // Waist Smoke Grenades Left
        "WaistSRight",          // Waist Smoke Grenades Right
        // "LegPouchL",            // Leg Pouch Left
        // "LegPouchR"             // Leg Pouch Right
      };
    };
  };

  // Kuroda
  class WS_M52S_Vest_Kuroda: WS_M52S_Vest_Base
  {
    // Metaitem link
    class XtdGearInfo
    {
      model = "WS_M52S_Vest_Metaitem";
      type = "kuroda";
    };

    scope = 2;
    scopeArsenal = 2;

    hiddenSelectionsTextures[] =
    {
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",        // CQB Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_cqb.paa",        // CQB Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa",   // Marksman Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_marksman.paa",   // Marksman Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",            // ODST Bracer Left
      "WS_Gear\Vests\M52S\_textures\base\vest_main.paa",            // ODST Bracer Right
      "WS_Gear\Vests\M52S\_textures\kuroda\vest.paa",               // ODST Chest
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",       // ODST Shoulder Left
      "WS_Gear\Vests\M52S\_textures\base\shoulders_odst.paa",       // ODST Shoulder Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Chest Pistol Mag Leftag
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Chest Pistol Mag Rightag
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Big Stomach Pouch
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Shoulder Mounted Radio LeftLeft
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Shoulder Mounted Radio RightRight
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Stomach 2x Pouches
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Torso Pistol Mag Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Torso Pistol Mag Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Chest Big Pouch
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Back Pouch
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Grenades Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Grenades Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Pouches Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_a.paa",            // Waist Pouches Right
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Waist Radio Left
      "WS_Gear\Vests\M52S\_textures\base\radio.paa",                // Waist Radio Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Smoke Grenades Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Waist Smoke Grenades Right
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa",            // Leg Pouch Left
      "WS_Gear\Vests\M52S\_textures\base\pouches_b.paa"             // Leg Pouch Right
    };

    class ItemInfo: ItemInfo
    {
      hiddenSelections[] =
      {
        // Commenting a line out makes it visible on the model
        "Camo1",                // CQB Shoulder Left
        "Camo2",                // CQB Shoulder Right
        "Camo3",                // Marksman Shoulder Left
        "Camo4",                // Marksman Shoulder Right
        "Camo5",                // ODST Bracer Left
        "Camo6",                // ODST Bracer Right
        "Camo7",                // ODST Chest
        "Camo8",                // ODST Shoulder Left
        "Camo9",                // ODST Shoulder Right
        "Camo10",               // Chest Pistol Mag Left
        "Camo11",               // Chest Pistol Mag Right
        "Camo12",               // Big Stomach Pouch
        "Camo13",               // Shoulder Mounted Radio Left
        "Camo14",               // Shoulder Mounted Radio Right
        "Camo15",               // Stomach 2x Pouches
        "Camo16",               // Torso Pistol Mag Left
        "Camo17",               // Torso Pistol Mag Right
        "Camo18",               // Chest Big Pouch
        "Camo19",               // Waist Back Pouch
        "Camo20",               // Waist Grenades Left
        "Camo21",               // Waist Grenades Right
        "Camo22",               // Waist Pouches Left
        "Camo23",               // Waist Pouches Right
        "Camo24",               // Waist Radio Left
        "Camo25",               // Waist Radio Right
        "Camo26",               // Waist Smoke Grenades Left
        "Camo27",               // Waist Smoke Grenades Right
        "Camo28",               // Leg Pouch Left
        "Camo29",               // Leg Pouch Right

        "CQB_Left",             // CQB Shoulder Left
        "CQB_Right",            // CQB Shoulder Right
        "Marksman_Left",        // Marksman Shoulder Left
        "Marksman_Right",       // Marksman Shoulder Right
        // "ODST_Bracer_Left",     // ODST Bracer Left
        // "ODST_Bracer_Right",    // ODST Bracer Right
        // "ODST_Chest",           // ODST Chest
        "ODST_Left",            // ODST Shoulder Left
        "ODST_Right",           // ODST Shoulder Right
        "ChestPMLeft",          // Chest Pistol Mag Left
        "ChestPMRight",         // Chest Pistol Mag Right
        "ChestPouch",           // Big Stomach Pouch
        "LShoulderRadio",       // Shoulder Mounted Radio Left
        "RShoulderRadio",       // Shoulder Mounted Radio Right
        "StomachPouch",         // Stomach 2x Pouches
        // "TorsoPMLeft",          // Torso Pistol Mag Left
        // "TorsoPMRight",         // Torso Pistol Mag Right
        "TorsoPouch",           // Chest Big Pouch
        // "WaistBack",            // Waist Back Pouch
        "WaistGLeft",           // Waist Grenades Left
        // "WaistGRight",          // Waist Grenades Right
        // "WaistPLeft",           // Waist Pouches Left
        // "WaistPRight",          // Waist Pouches Right
        "WaistRLeft",           // Waist Radio Left
        // "WaistRRight",          // Waist Radio Right
        // "WaistSLeft",           // Waist Smoke Grenades Left
        "WaistSRight",          // Waist Smoke Grenades Right
        // "LegPouchL",            // Leg Pouch Left
        "LegPouchR"             // Leg Pouch Right
      };
    };
  };
};
