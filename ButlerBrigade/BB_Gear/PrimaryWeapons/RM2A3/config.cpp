class CfgPatches
{
  class BB_Gear_PrimaryWeapons_RM2A3
  {
    addonRootClass = "BB_Gear_PrimaryWeapons";
    author = "wlan0";
    units[] = { };
    weapons[] =
    {
      "BB_Gear_PrimaryWeapons_RM2A3",
    };
    requiredVersion = 1;
    requiredAddons[] = { };
  };
};

class CfgWeapons
{
  // Rifle (Marksman) Model 2 Version 3
  class rhs_weap_svds;
  class BB_Gear_PrimaryWeapons_RM2A3: rhs_weap_svds
  {
    dlc = "BB";
    displayName = "RM2A3";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RM2A3";
  };
};
