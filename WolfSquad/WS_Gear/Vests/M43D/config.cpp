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
  class TCP_uniformDecals;

  /* Base Items */
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
      mass = 80;
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

  /* Actual Armors */
  class WS_M43D_Vest_Base: WS_M43D_Vest_Base_Standard
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
      "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
      "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa",
      "\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa",
      "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
      "\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
    };
  };
};
