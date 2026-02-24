class CfgPatches
{
  class WS_M43D_Vest
  {
    author = "wlan0";
    addonRootClass = "WS_Gear";
    requiredAddons[] =
    {
      "TCP_Characters_BLUFOR_UNSC_Army_Vests_M43A",
      "TCP_Characters_BLUFOR_UNSC_Marines_Vests_M43D",
    };
  };
};

/* Metaitem Definitions */
class XtdGearModels
{
  class CfgWeapons
  {
    class WS_M43D_Vest_Metaitem
    {
      label = "Wolf Squad M43D";
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
  class ItemInfo;
  class HitpointsProtectionInfo;
  class TCP_V_M43D_ODST_4_Black;
  class TCP_V_M43D_BREACHER_4_Black;
  class TCP_V_M43D_SHARPSHOOTER_4_Black;
  class TCP_V_M43D_Light_Black;
  class TCP_uniformDecals;

  /* Base Items ---- */
  // ODST Base
  class WS_M43D_Vest_Base_Standard: TCP_V_M43D_ODST_4_Black
  {
    scope = 1;
    scopeArsenal = 1;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M43D Armor";

    class ItemInfo: ItemInfo
    {
      containerClass = "Supply200";
      mass = 400;
      class HitpointsProtectionInfo: HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 16;
          passThrough = 0.4;
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
          armor = 24;
          passThrough = 0.1;
        };
        class Body
        {
          hitpointName = "HitBody";
          passThrough = 0.1;
        };
        class Arms
        {
          hitpointName = "HitArms";
          armor = 26;
          passThrough = 0.1;
        };
        class Hands
        {
          hitpointName = "HitHands";
          armor = 16;
          passThrough = 0.4;
        };
        class Legs
        {
          hitpointName = "HitLegs";
          armor = 16;
          passThrough = 0.4;
        };
      };
    };
  };
  // ODST Marksman
  class WS_M43D_Vest_Base_Marksman: TCP_V_M43D_SHARPSHOOTER_4_Black
  {
    scope = 1;
    scopeArsenal = 1;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M43D Armor";

    class ItemInfo: ItemInfo
    {
      containerClass = "Supply200";
      mass = 400;
      class HitpointsProtectionInfo: HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 16;
          passThrough = 0.4;
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
          armor = 24;
          passThrough = 0.1;
        };
        class Body
        {
          hitpointName = "HitBody";
          passThrough = 0.1;
        };
        class Arms
        {
          hitpointName = "HitArms";
          armor = 26;
          passThrough = 0.1;
        };
        class Hands
        {
          hitpointName = "HitHands";
          armor = 16;
          passThrough = 0.4;
        };
        class Legs
        {
          hitpointName = "HitLegs";
          armor = 16;
          passThrough = 0.4;
        };
      };
    };
  };
  // ODST CQB
  class WS_M43D_Vest_Base_CQB: TCP_V_M43D_BREACHER_4_Black
  {
    scope = 1;
    scopeArsenal = 1;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M43D Armor";

    class ItemInfo: ItemInfo
    {
      containerClass = "Supply200";
      mass = 400;
      class HitpointsProtectionInfo: HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 16;
          passThrough = 0.4;
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
          armor = 24;
          passThrough = 0.1;
        };
        class Body
        {
          hitpointName = "HitBody";
          passThrough = 0.1;
        };
        class Arms
        {
          hitpointName = "HitArms";
          armor = 26;
          passThrough = 0.1;
        };
        class Hands
        {
          hitpointName = "HitHands";
          armor = 16;
          passThrough = 0.4;
        };
        class Legs
        {
          hitpointName = "HitLegs";
          armor = 16;
          passThrough = 0.4;
        };
      };
    };
  };
  // ODST Light
  class WS_M43D_Vest_Base_Light: TCP_V_M43D_Light_Black
  {
    scope = 1;
    scopeArsenal = 1;
    author = "wlan0";
    dlc = "WS";
    displayName = "[WS] M43D Armor";

    class ItemInfo: ItemInfo
    {
      containerClass = "Supply140";
      mass = 250;
      class HitpointsProtectionInfo: HitpointsProtectionInfo
      {
        class Neck
        {
          hitpointName = "HitNeck";
          armor = 16;
          passThrough = 0.4;
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
          armor = 24;
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


  /* Actual Armors ---- */
  // ODST Base
  class WS_M43D_Vest_Standard: WS_M43D_Vest_Base_Standard
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "standard";
    };

    scope = 2;
    scopeArsenal = 2;

    class TCP_uniformDecals : TCP_uniformDecals
    {
      decalColor = "white";
    };

    hiddenSelectionsTextures[] = 
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_odst.paa",
      "\WS_Gear\Vests\M43D\_textures\base\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\armor_lower.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
  // ODST Marksman
  class WS_M43D_Vest_Marksman: WS_M43D_Vest_Base_Marksman
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "marksman";
    };

    scope = 2;
    scopeArsenal = 2;

    class TCP_uniformDecals : TCP_uniformDecals
    {
      decalColor = "white";
    };

    hiddenSelectionsTextures[] = 
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_odst.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_sharpshooter.paa",
      "\WS_Gear\Vests\M43D\_textures\base\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\armor_lower.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
  // ODST CQB
  class WS_M43D_Vest_CQB: WS_M43D_Vest_Base_CQB
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "cqb";
    };

    scope = 2;
    scopeArsenal = 2;

    class TCP_uniformDecals : TCP_uniformDecals
    {
      decalColor = "white";
    };

    hiddenSelectionsTextures[] = 
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_odst.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_breacher.paa",
      "\WS_Gear\Vests\M43D\_textures\base\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\armor_lower.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
  // ODST Light
  class WS_M43D_Vest_Light: WS_M43D_Vest_Base_Light
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "light";
    };

    scope = 2;
    scopeArsenal = 2;

    class TCP_uniformDecals : TCP_uniformDecals
    {
      decalColor = "white";
    };

    hiddenSelectionsTextures[] = 
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\base\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
  // Barnes
  class WS_M43D_Vest_Barnes: WS_M43D_Vest_CQB
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "barnes";
    };

    hiddenSelectionsTextures[] =
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_odst.paa",
      "\WS_Gear\Vests\M43D\_textures\base\shoulders_breacher.paa",
      "\WS_Gear\Vests\M43D\_textures\barnes\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\armor_lower.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
  // Kuroda
  class WS_M43D_Vest_Kuroda: WS_M43D_Vest_Light
  {
    class XtdGearInfo
    {
      model = "WS_M43D_Vest_Metaitem";
      type = "kuroda";
    };

    hiddenSelectionsTextures[] =
    {
      "\WS_Gear\Vests\M43D\_textures\base\armor_upper.paa",
      "\WS_Gear\Vests\M43D\_textures\kuroda\odst_chest.paa",
      "\WS_Gear\Vests\M43D\_textures\base\decals.paa"
    };
  };
};
