class CfgPatches
{
  class WS_Factions_O_BHT
  {
    addonRootClass = "WS_Factions";
    name = "Wolf Squad - Factions - OPFOR - Black Hilt Tactical";
    requiredAddons[] =
    {
      "WS_Factions",
    };
    units[] =
    {
      "WS_O_BHT_Soldier_Rifleman",
      "WS_O_BHT_Soldier_Grenadier",
      "WS_O_BHT_Soldier_Marksman",
      "WS_O_BHT_Soldier_Medic",
      "WS_O_BHT_Soldier_Engineer",
      "WS_O_BHT_Soldier_TeamLeader",
      "WS_O_BHT_Soldier_SquadLeader",
      "WS_O_BHT_Soldier_Officer",
      "WS_O_BHT_Soldier_Autorifleman",
      "WS_O_BHT_Soldier_Asst_Autorifleman",
      "WS_O_BHT_Soldier_Ammo_Bearer",
      "WS_O_BHT_Soldier_Anti_Air",
      "WS_O_BHT_Soldier_Asst_Anti_Air",
      "WS_O_BHT_Soldier_Sniper",
      "WS_O_BHT_Soldier_Spotter",
    };
    weapons[] = { };
  };
};

class CfgFactionClasses
{
  class WS_O_BHT
  {
    displayName = "[WS] Black Hilt Tactical";
    priority = 1;
    side = 0;
  };
};

class CfgEditorCategories
{
  class WS_O_BHT
  {
    displayName = "[WS] Black Hilt Tactical";
  };
};

class CfgEditorSubcategories
{
  class WS_O_BHT_Infantry
  {
    displayName = "Infantry";
  };
};

class CfgWeapons
{
  class TCP_arifle_MA37;
  class WS_O_BHT_Weapon_MA37: TCP_arifle_MA37
  {
    baseWeapon = "TCP_arifle_MA37";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "TCP_optic_M11VERO_Blue";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "OPTRE_DMR_Light";
      };
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "TCP_muzzle_brake_762_01";
      };
    };
  };

  class TCP_arifle_MA37_GL;
  class WS_O_BHT_Weapon_MA37_GL: TCP_arifle_MA37_GL
  {
    baseWeapon = "TCP_arifle_MA37_GL";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "TCP_optic_M11VERO_Blue";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "OPTRE_DMR_Light";
      };
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "TCP_muzzle_brake_762_01";
      };
    };
  };

  class TCP_hgun_Pistol_M6G2;
  class WS_O_BHT_Weapon_M6G2: TCP_hgun_Pistol_M6G2
  {
    baseWeapon = "TCP_hgun_Pistol_M6G2";

    class LinkedItems
    {
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "TCP_bipod_triggerGuard_M6G2";
      };
    };
  };

  class TCP_SMG_M7;
  class WS_O_BHT_Weapon_M7: TCP_SMG_M7
  {
    baseWeapon = "TCP_SMG_M7";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "TCP_optic_M5BSLSV_Blue";
      };
    };
  };

  class TCP_LMG_M731;
  class WS_O_BHT_Weapon_M731: TCP_LMG_M731
  {
    baseWeapon = "TCP_LMG_M731";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "TCP_optic_M81ERO_Blue";
      };
      class LinkedItemsAcc
      {
        slot = "PointerSlot";
        item = "TCP_acc_carryHandle_M731";
      };
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "TCP_muzzle_brake_762_02";
      };
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "TCP_bipod_01";
      };
    };
  };

  class MEU_OPTRE_SRS99C;
  class WS_O_BHT_Weapon_SRS99C: MEU_OPTRE_SRS99C
  {
    baseWeapon = "MEU_OPTRE_SRS99C";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "MEU_OPTRE_SRS99C_Scope";
      };
    };
  };

  class TCP_srifle_M392;
  class WS_O_BHT_Weapon_M392_Spotter: TCP_srifle_M392
  {
    baseWeapon = "TCP_srifle_M392";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "TCP_optic_M43RCO_CRS_CUP";
      };
      class LinkedItemsMuzzle
      {
        slot = "MuzzleSlot";
        item = "TCP_muzzle_flash_762_01";
      };
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "TCP_bipod_01";
      };
    };
  };
};

class UniformSlotInfo;
class CfgVehicles
{
  /*******************************************
   *        BASE SOLDIER DEFINITIONS         *
   *******************************************/
  class O_Soldier_Base_F;
  class WS_O_BHT_Soldier_Base_Surplus_Black: O_Soldier_Base_F
  {
    author = "wlan0";
    dlc = "WS";
    scope = 0;
    role = "Rifleman";
    identityTypes[] =
    {
      "LanguageENG_F",
      "NoGlasses",
      "Head_NATO",
      "Head_Russian",
      "Head_Greek",
      "Head_Asian",
      "Head_Euro",
      "Head_Tanoan",
      "G_CIVIL_male",
      "G_CIVIL_female",
    };
    faction = "WS_O_BHT";
    uniformAccessories[] = { };
    uniformClass = "OPTRE_Ins_ER_rolled_surplus_black";
    nakedUniform = "U_BasicBody";

    class UniformInfo
    {
      class SlotsInfo
      {
        class NVG: UniformSlotInfo
        {
          slotType = 602;
        };
        class Scuba: UniformSlotInfo
        {
          slotType = 604;
        };
        class HeadGear: UniformSlotInfo
        {
          slotType = 605;
        };
      };
    };

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
    magazines[] = { };
    respawnMagazines[] = { };
    linkedItems[] = { };
    respawnLinkedItems[] = { };
    items[] = { };
    respawnItems[] = { };
  };
  class WS_O_BHT_Soldier_Base_Surplus_Crimson: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson";
  };
  class WS_O_BHT_Soldier_Base_OD_Black_Blue: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    uniformClass = "OPTRE_Ins_ER_rolled_OD_blknblu";
  };
  class WS_O_BHT_Soldier_Base_OD_Black_Crimson: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred";
  };
  class WS_O_BHT_Soldier_Base_OD_Black_White: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    uniformClass = "OPTRE_Ins_ER_rolled_jean_orca";
  };
  class WS_O_BHT_Soldier_Base_OD_Crimson: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson";
  };

  // base crew
  // base pilot

  /*******************************************
   *          BACKPACK DEFINITIONS           *
   *******************************************/
  class TCP_B_Rifleman_1_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Rifleman: TCP_B_Rifleman_1_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_32Rnd_762x51_Mag";
        count = 3;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Grenadier_1_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Grenadier: TCP_B_Grenadier_1_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_32Rnd_762x51_Mag";
        count = 3;
      };
      class _xx_TCP_1Rnd_40_Shell_HE
      {
        magazine = "TCP_1Rnd_40_Shell_HE";
        count = 2;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Marksman_1_M35_Buttpack_Green;
  class WS_O_BHT_Backpack_Marksman: TCP_B_Marksman_1_M35_Buttpack_Green
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_15Rnd_762x51_Mag";
        count = 4;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Medic_1_M43_Medium_Rucksack_Medical_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Medic: TCP_B_Medic_1_M43_Medium_Rucksack_Medical_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_8Rnd_127x30_46_Mag
      {
        magazine = "TCP_8Rnd_127x30_46_Mag";
        count = 5;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 15;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 10;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 20;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Engineer_1_M43_Medium_Rucksack_Engineer_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Engineer: TCP_B_Engineer_1_M43_Medium_Rucksack_Engineer_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_48Rnd_5x23_Mag
      {
        magazine = "TCP_48Rnd_5x23_Mag";
        count = 2;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_ToolKit
      {
        name = "ToolKit";
        count = 1;
      };
      class _xx_ACE_EntrenchingTool
      {
        name = "ACE_EntrenchingTool";
        count = 1;
      };
      class _xx_ACE_DefusalKit
      {
        name = "ACE_DefusalKit";
        count = 1;
      };
      class _xx_ACE_Wirecutter
      {
        name = "ACE_wirecutter";
        count = 1;
      };
      class _xx_TSP_Breach_ShockTube
      {
        name = "tsp_breach_shock";
        count = 4;
      };
      class _xx_APERSBoundingMine_Range_Mag
      {
        name = "APERSBoundingMine_Range_Mag";
        count = 3;
      };
      class _xx_ClaymoreDirectionalMine_Remote_Mag
      {
        name = "ClaymoreDirectionalMine_Remote_Mag";
        count = 2;
      };
      class _xx_DemoCharge_Remote_Mag
      {
        name = "DemoCharge_Remote_Mag";
        count = 1;
      };
      class _xx_SLAMDirectionalMine_Wire_Mag
      {
        name = "SLAMDirectionalMine_Wire_Mag";
        count = 2;
      };
      class _xx_LockPopper
      {
        name = "tsp_breach_popper_auto_mag";
        count = 2;
      };
      class _xx_Landmine_Marker
      {
        name = "FlagMarkerMines_01_G_mag";
        count = 10;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_RTO_1_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_TeamLeader: TCP_B_RTO_1_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_32Rnd_762x51_Mag";
        count = 3;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Rifleman_2_M43_Medium_Rucksack_Field_M35_Buttpack_Green;
  class WS_O_BHT_Backpack_Asst_Autorifleman: TCP_B_Rifleman_2_M43_Medium_Rucksack_Field_M35_Buttpack_Green
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_32Rnd_762x51_Mag";
        count = 3;
      };
      class _xx_TCP_100Rnd_762x51_Mag_Tracer_Red
      {
        magazine = "TCP_100Rnd_762x51_Mag_Tracer_Red";
        count = 1;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Ammo_Bearer_1_M43_Medium_Rucksack_Patrol_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Ammo_Bearer: TCP_B_Ammo_Bearer_1_M43_Medium_Rucksack_Patrol_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_100Rnd_762x51_Mag_Tracer_Red
      {
        magazine = "TCP_100Rnd_762x51_Mag_Tracer_Red";
        count = 6;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
      class _xx_SpareBarrel
      {
        name = "ACE_SpareBarrel";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Autorifleman_1_M35_Buttpack_Black;
  class WS_O_BHT_Backpack_Autorifleman: TCP_B_Autorifleman_1_M35_Buttpack_Black
  {
    scope = 1;
    class TransportMagazines { };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Rifleman_2_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Anti_Air: TCP_B_Rifleman_2_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_48Rnd_5x23_Mag
      {
        magazine = "TCP_48Rnd_5x23_Mag";
        count = 4;
      };
      class _xx_OPTRE_M41_Twin_HEAT_G_AA
      {
        magazine = "OPTRE_M41_Twin_HEAT_G_AA";
        count = 2;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Rifleman_4_M43_Medium_Rucksack_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Asst_Anti_Air: TCP_B_Rifleman_4_M43_Medium_Rucksack_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_32Rnd_762x51_Mag";
        count = 3;
      };
      class _xx_OPTRE_M41_Twin_HEAT_G_AA
      {
        magazine = "OPTRE_M41_Twin_HEAT_G_AA";
        count = 4;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Sniper_1_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Sniper: TCP_B_Sniper_1_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag
      {
        magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
        count = 6;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
    };
    class TransportWeapons { };
  };

  class TCP_B_Rifleman_4_ANPRC171_Patrol_M35_Buttpack_Olive;
  class WS_O_BHT_Backpack_Spotter: TCP_B_Rifleman_4_ANPRC171_Patrol_M35_Buttpack_Olive
  {
    scope = 1;
    class TransportMagazines
    {
      class _xx_TCP_32Rnd_762x51_Mag
      {
        magazine = "TCP_15Rnd_762x51_Mag";
        count = 4;
      };
    };
    class TransportItems
    {
      class _xx_Biofoam
      {
        name = "TCP_ACE_BiomedicalFoam";
        count = 1;
      };
      class _xx_BonePolymer
      {
        name = "TCP_BoneKnittingPolymer";
        count = 1;
      };
      class _xx_Medigel
      {
        name = "TCP_ACE_Medigel";
        count = 2;
      };
      class _xx_CableTie
      {
        name = "ACE_CableTie";
        count = 2;
      };
      class _xx_RavenDrone
      {
        name = "MEU_Raven_Drone_Item";
        count = 1;
      };
      class _xx_DroneBattery
      {
        name = "ACE_UAVBattery";
        count = 2;
      };
      class _xx_SpottingScope
      {
        name = "ACE_SpottingScope";
        count = 1;
      };
    };
    class TransportWeapons { };
  };


  /*******************************************
   *     ACTUAL SOLDIER UNIT DEFINITIONS     *
   *******************************************/

  // Rifleman
  class WS_O_BHT_Soldier_Rifleman: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Rifleman";
    role = "Rifleman";

    backpack = "WS_O_BHT_Backpack_Rifleman";

    weapons[] = {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Grenadier
  class WS_O_BHT_Soldier_Grenadier: WS_O_BHT_Soldier_Base_OD_Black_Crimson
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Grenadier";
    role = "Grenadier";

    backpack = "WS_O_BHT_Backpack_Grenadier";

    weapons[] = {
      "WS_O_BHT_Weapon_MA37_GL",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_MA37_GL",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_M9R_Frag",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_1Rnd_40_Shell_HE",
      "TCP_M9R_Frag",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "MEU_HUD_RayBans_Bandana_Beast",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "MEU_HUD_RayBans_Bandana_Beast",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Marksman
  class WS_O_BHT_Soldier_Marksman: WS_O_BHT_Soldier_Base_OD_Black_Blue 
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Marksman";
    role = "Marksman";

    backpack = "WS_O_BHT_Backpack_Marksman";

    weapons[] =
    {
      "TCP_srifle_M392_EVOSD_Flash",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
      "TCP_binoculars_M98",
    };
    respawnWeapons[] =
    {
      "TCP_srifle_M392_EVOSD_Flash",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
      "TCP_binoculars_M98",
    };

    magazines[] =
    {
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Booniehat_oli",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Booniehat_oli",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Medic
  class WS_O_BHT_Soldier_Medic: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Medic";
    role = "CombatLifeSaver";
    icon = "iconManMedic";

    attendant = 1;

    backpack = "WS_O_BHT_Backpack_Medic";

    weapons[] =
    {
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "TCP_M21_SmokePurple",
      "TCP_M21_SmokePurple",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "TCP_M21_SmokePurple",
      "TCP_M21_SmokePurple",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Engineer
  class WS_O_BHT_Soldier_Engineer: WS_O_BHT_Soldier_Base_OD_Black_White
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Engineer";
    role = "Sapper";
    icon = "iconManEngineer";

    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 31;

    backpack = "WS_O_BHT_Backpack_Engineer";

    weapons[] = {
      "WS_O_BHT_Weapon_M7",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M7",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_1_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_1_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Clacker",
      "MineDetector",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Clacker",
      "MineDetector",
    };
  };

  // Team Leader
  class WS_O_BHT_Soldier_TeamLeader: WS_O_BHT_Soldier_Base_Surplus_Crimson
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Team Leader";
    role = "Rifleman";
    icon = "iconManLeader";

    backpack = "WS_O_BHT_Backpack_TeamLeader";

    weapons[] = {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_SmokeBlue",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_SmokeBlue",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_headphones",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_headphones",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_MapTools",
    };
  };
  
  // Squad Leader
  class WS_O_BHT_Soldier_SquadLeader: WS_O_BHT_Soldier_TeamLeader
  {
    displayName = "Squad Leader";

    backpack = "WS_O_BHT_Backpack_TeamLeader";

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_OD",
      "H_Cap_headphones",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_OD",
      "H_Cap_headphones",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
  };

  // Officer
  class WS_O_BHT_Soldier_Officer: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Officer";
    role = "Rifleman";
    icon = "iconManOfficer";

    backpack = "WS_O_BHT_Backpack_TeamLeader";

    weapons[] = {
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };
    respawnMagazines[] =
    {
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "TCP_H_Beret_Blue",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "TCP_H_Beret_Blue",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_MapTools",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_MapTools",
    };
  };

  // Autorifleman
  class WS_O_BHT_Soldier_Autorifleman: WS_O_BHT_Soldier_Base_OD_Black_Crimson
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Autorifleman";
    role = "MachineGunner";
    icon = "iconManMG";

    backpack = "WS_O_BHT_Backpack_Autorifleman";

    weapons[] = {
      "WS_O_BHT_Weapon_M731",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M731",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };
    respawnMagazines[] =
    {
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_100Rnd_762x51_Mag_Tracer_Red",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_2_OD",
      "TCP_H_Helmet_CH43A_Olive",
      "VES_HUD_Balaclava_G_Punisher",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L2_2_OD",
      "TCP_H_Helmet_CH43A_Olive",
      "VES_HUD_Balaclava_G_Punisher",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Asst. Autorifleman
  class WS_O_BHT_Soldier_Asst_Autorifleman: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Asst. Autorifleman";
    role = "Rifleman";

    backpack = "WS_O_BHT_Backpack_Asst_Autorifleman";

    weapons[] = {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Ammo Bearer
  class WS_O_BHT_Soldier_Ammo_Bearer: WS_O_BHT_Soldier_Base_OD_Black_White
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Ammo Bearer";
    role = "Rifleman";

    backpack = "WS_O_BHT_Backpack_Ammo_Bearer";

    weapons[] = {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_MA37",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };
    respawnMagazines[] =
    {
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_32Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Cap_oli_hs",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Anti-Air Specialist
  class WS_O_BHT_Soldier_Anti_Air: WS_O_BHT_Soldier_Base_OD_Black_Blue
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Anti-Air Specialist";
    role = "MissileSpecialist";
    icon = "iconManAT";

    backpack = "WS_O_BHT_Backpack_Anti_Air";

    weapons[] = {
      "WS_O_BHT_Weapon_M7",
      "WS_O_BHT_Weapon_M6G2",
      "MEU_M41_SSR",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M7",
      "WS_O_BHT_Weapon_M6G2",
      "MEU_M41_SSR",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "OPTRE_M41_Twin_HEAT_G_AA",
      "OPTRE_M41_Twin_HEAT_G_AA",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_48Rnd_5x23_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "OPTRE_M41_Twin_HEAT_G_AA",
      "OPTRE_M41_Twin_HEAT_G_AA",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Cap_headphones",
      "G_Tactical_camo",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_OD",
      "H_Cap_headphones",
      "G_Tactical_camo",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "TCP_Watch",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
    };
  };

  // Asst. Anti-Air Specialist
  class WS_O_BHT_Soldier_Asst_Anti_Air: WS_O_BHT_Soldier_Rifleman
  {
    displayName = "Asst. Anti-Air Specialist";
    role = "Rifleman";

    backpack = "WS_O_BHT_Backpack_Asst_Anti_Air";
  };

  // Sniper
  class WS_O_BHT_Soldier_Sniper: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Sniper";
    role = "Marksman";

    backpack = "WS_O_BHT_Backpack_Sniper";

    weapons[] = {
      "WS_O_BHT_Weapon_SRS99C",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_SRS99C",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
    };

    magazines[] =
    {
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "OPTRE_4Rnd_145x114_APFSDS_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "TKE_BoonieHatScrimHSFCFCamo",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "TKE_BoonieHatScrimHSFCFCamo",
      "G_Aviator",
      "ItemMap",
      "ItemGPS",
      "TFAR_fadak",
      "ItemCompass",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Kestrel4500",
      "ACE_RangeCard",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Kestrel4500",
      "ACE_RangeCard",
    };
  };

  // Spotter
  class WS_O_BHT_Soldier_Spotter: WS_O_BHT_Soldier_Base_Surplus_Black
  {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    editorCategory = "WS_O_BHT";
    editorSubcategory = "WS_O_BHT_Infantry";

    displayName = "Spotter";
    role = "Marksman";

    backpack = "WS_O_BHT_Backpack_Spotter";

    weapons[] =
    {
      "WS_O_BHT_Weapon_M392_Spotter",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
      "TCP_binoculars_M98",
    };
    respawnWeapons[] =
    {
      "WS_O_BHT_Weapon_M392_Spotter",
      "WS_O_BHT_Weapon_M6G2",
      "Throw",
      "Put",
      "TCP_binoculars_M98",
    };

    magazines[] =
    {
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };
    respawnMagazines[] =
    {
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_15Rnd_762x51_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_8Rnd_127x30_46_Mag",
      "TCP_M21_Smoke",
      "TCP_M21_Smoke",
      "ACE_Chemlight_HiBlue",
      "ACE_Chemlight_HiBlue",
    };

    linkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "TKE_BoonieHatScrimFCFCamo",
      "G_Aviator",
      "ItemMap",
      "O_UavTerminal",
      "TFAR_fadak",
      "ItemCompass",
      "ACE_Altimeter",
    };
    respawnLinkedItems[] =
    {
      "WOLFoT_TcP_UNSC_V_M43A_L_OD",
      "TKE_BoonieHatScrimFCFCamo",
      "G_Aviator",
      "ItemMap",
      "O_UavTerminal",
      "TFAR_fadak",
      "ItemCompass",
      "ACE_Altimeter",
    };

    items[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Kestrel4500",
      "ACE_RangeCard",
    };
    respawnItems[] =
    {
      "ACE_Flashlight_XL50",
      "ACE_Kestrel4500",
      "ACE_RangeCard",
    };
  };

  // TODO: Vehicle Crewman

  // TODO: Helicopter Pilot
  // TODO: Helicopter Crewman
};

class CfgGroups
{
  class East
  {
    class WS_O_BHT
    {
      name = "[WS] Black Hilt Tactical";

      class Infantry
      {
        name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

        // Infantry Team - Marksman
        class WS_O_BHT_GRP_InfTeam_Marksman
        {
          name = "Infantry Team - Marksman";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_TeamLeader";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Rifleman";
            rank = "PRIVATE";
            position[] = { 2, -2, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Marksman";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
        };

        // Infantry Team - Grenadier
        class WS_O_BHT_GRP_InfTeam_Grenadier
        {
          name = "Infantry Team - Grenadier";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_TeamLeader";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Rifleman";
            rank = "PRIVATE";
            position[] = { 2, -2, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Grenadier";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
        };

        // Infantry Team - Autorifle
        class WS_O_BHT_GRP_InfTeam_Autorifle
        {
          name = "Infantry Team - Autorifle";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Autorifleman";
            rank = "CORPORAL";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Asst_Autorifleman";
            rank = "CORPORAL";
            position[] = { 2, -2, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Ammo_Bearer";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
        };

        // Infantry Team - Squad Lead Element
        class WS_O_BHT_GRP_InfTeam_SquadLead 
        {
          name = "Infantry Team - Squad Lead";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_SquadLeader";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Engineer";
            rank = "CORPORAL";
            position[] = { 2, -2, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Medic";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };
        };

        // Infantry Squad - Standard
        class WS_O_BHT_GRP_InfSquad
        {
          name = "Infantry Squad";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

          // Lead
          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_SquadLeader";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Engineer";
            rank = "CORPORAL";
            position[] = { 2, -2, 0 };
          };
          class Unit2
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Medic";
            rank = "PRIVATE";
            position[] = { -2, -2, 0 };
          };

          // Marksman
          class Unit3
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_TeamLeader";
            rank = "CORPORAL";
            position[] = { 4, -4, 0 };
          };
          class Unit4
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Rifleman";
            rank = "PRIVATE";
            position[] = { 6, -6, 0 };
          };
          class Unit5
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Grenadier";
            rank = "PRIVATE";
            position[] = { 2, -6, 0 };
          };

          // Grenadier
          class Unit6
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_TeamLeader";
            rank = "CORPORAL";
            position[] = {-4, -4, 0 };
          };
          class Unit7
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Rifleman";
            rank = "PRIVATE";
            position[] = { -2, -6, 0 };
          };
          class Unit8
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Grenadier";
            rank = "PRIVATE";
            position[] = { -6, -6, 0 };
          };
        };

        // Specialist Team - AA
        class WS_O_BHT_GRP_SpecTeam_AA
        {
          name = "Specialist Team - Anti-Air";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_antiair.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Anti_Air";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Asst_Anti_Air";
            rank = "CORPORAL";
            position[] = { 2, 0, 0 };
          };
        };

        // Specialist Team - Sniper
        class WS_O_BHT_GRP_SpecTeam_Sniper
        {
          name = "Specialist Team - Sniper";
          side = 0;
          faction = "WS_O_BHT";
          icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

          class Unit0
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Sniper";
            rank = "SERGEANT";
            position[] = { 0, 0, 0 };
          };
          class Unit1
          {
            side = 0;
            vehicle = "WS_O_BHT_Soldier_Spotter";
            rank = "SERGEANT";
            position[] = { 2, 0, 0 };
          };
        };
      };
    };
  };
};
