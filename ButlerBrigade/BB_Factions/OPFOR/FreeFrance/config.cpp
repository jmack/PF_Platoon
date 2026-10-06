class CfgPatches {
  class BB_Factions__O_FreeFrance {
    addonRootClass = "BB_Factions";
    author = "wlan0",
    requiredVersion = 1.0;
    requiredAddons[] = {  };
    weapons[] = { };
    units[] = {  };
  };
};

class CfgFactionClasses
{
  class BB_Factions__O_FreeFrance
  {
    displayName = "Free France";
    priority = 5;
    side = 0;
  };
};

class CfgEditorCategories
{
  class BB_Factions__O_FreeFrance
  {
    displayName = "Free France";
  };
};

class CfgWeapons
{ 
  class AMF_RFF2_01_F;

  class BB_Factions__O_FreeFrance__AMF_RFF2_01_F__ScromeJ8_NoCover
  {
    baseWeapon = "AMF_RFF2_01_F";

    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot = "CowsSlot";
        item = "ScromeJ8_NoCover";
      };
    };
  };
};

class CfgVehicles
{
  // Backpacks
  // Base Soldiers
  // Soldiers
  // Vehicles
};

class CfgGroups
{
  class East
  {
    class BB_Factions__O_FreeFrance
    {
      name = "Free France";
    };
  };
};
