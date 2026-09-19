class CfgPatches
{
  class BB_Gear_PrimaryWeapons_AR3A2
  {
    addonRootClass = "BB_Gear_PrimaryWeapons";
    author = "wlan0";
    units[] = { };
    weapons[] =
    {
      "BB_Gear_PrimaryWeapons_AR3A2",
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
  class hlc_rifle_ak12;
  class BB_Gear_PrimaryWeapons_AR3A2: hlc_rifle_ak12
  {
    dlc = "BB";
    author = "wlan0";
    displayName = "AR3A4";

    baseWeapon = "BB_Gear_PrimaryWeapons_AR3A2";
  };

  class hlc_rifle_ak12GL;
  class BB_Gear_PrimaryWeapons_AR3A2GL: hlc_rifle_ak12GL
  {
    dlc = "BB";
    author = "wlan0";
    displayName = "AR3A4 + UGL";

    baseWeapon = "BB_Gear_PrimaryWeapons_AR3A2GL";
  }
};
