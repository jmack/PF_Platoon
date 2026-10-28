class CfgPatches
{
  class BB_Gear_PrimaryWeapons_RS2A1
  {
    addonRootClass = "BB_Gear_PrimaryWeapons";
    author = "wlan0";
    units[] = { };
    weapons[] =
    {
      "BB_Gear_PrimaryWeapons_RS2A1",
    };
    requiredVersion = 1;
    requiredAddons[] = {
      "rhs_weapons",
    };
  };
};

class CfgWeapons
{
  // Rifle (Support) Model 2 Revision 1
  class arifle_RPK12_F;
  class BB_Gear_PrimaryWeapons_RS2A1: arifle_RPK12_F
  {
    dlc = "BB";
    displayName = "RS2A1";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RS2A1";
  };
};
