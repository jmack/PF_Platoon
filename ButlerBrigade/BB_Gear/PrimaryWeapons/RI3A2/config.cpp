class CfgPatches
{
  class BB_Gear_PrimaryWeapons_RI3A2
  {
    addonRootClass = "BB_Gear_PrimaryWeapons";
    author = "wlan0";
    units[] = { };
    weapons[] =
    {
      "BB_Gear_PrimaryWeapons_RI3A2",
      "BB_Gear_PrimaryWeapons_RI3A2GL",
      "BB_Gear_PrimaryWeapons_RI3A2C",
      "BB_Gear_PrimaryWeapons_RI3A2S",
    };
    requiredVersion = 1;
    requiredAddons[] =
    {
      "hlcweapons_aks",
    };
  };
};

class CfgWeapons
{
  // Rifle (Individual) Model 3 Version 2
  class hlc_rifle_ak12;
  class BB_Gear_PrimaryWeapons_RI3A2: hlc_rifle_ak12
  {
    dlc = "BB";
    displayName = "RI3A2";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RI3A2";
  };

  class hlc_rifle_ak12GL;
  class BB_Gear_PrimaryWeapons_RI3A2GL: hlc_rifle_ak12GL
  {
    dlc = "BB";
    displayName = "RI3A2 + UGL";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RI3A2GL";
  };

  // Rifle (Individual) Model 3 Version 2 (Carbine)
  class hlc_rifle_aku12;
  class BB_Gear_PrimaryWeapons_RI3A2C: hlc_rifle_aku12
  {
    dlc = "BB";
    displayName = "RI3A2 Carbine";

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RI3A2C";
  };

  // Rifle (Individual) Model 3 Version 2 (Squad Support Weapon)
  class hlc_rifle_RPK12;
  class BB_Gear_PrimaryWeapons_RI3A2S: hlc_rifle_RPK12
  {
    dlc = "BB";
    displayName = "RI3A2 Squad Support Weapon"

    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;

    baseWeapon = "BB_Gear_PrimaryWeapons_RI3A2S";
  };
};
