class CfgPatches
{
  class PF_Props_Frigates
  {
    weapons[] = {};
    units[] =
    {
      "PF_Frigate_UNSC_Gettysburg",
      "PF_Frigate_UNSC_FOT",
      "PF_Frigate_UNSC_Dayton",
    };
    requiredAddons[] = {};
    magazines[] = {};
    ammo[] = {};
  };
};

class CfgVehicles
{
  class OPTRE_Frigate_UNSC;
  class PF_Frigate_UNSC_Gettysburg : OPTRE_Frigate_UNSC
  {
    scope = 2;
    scopeCurator = 2;
    scopeEditor = 2;
    displayName = "[PF] UNSC 'Gettysburg' (FFG-234)";
    author = "wlan0";
    armor = 999999;
    armorStructural = 999;
    model = "\OPTRE_Frigate\OPTRE_Frigate.p3d";
    editorCategory = "PF_EditorCategory_PF";
    editorSubcategory = "PF_EditorSubcategory_Ships";
    hiddenSelections[] =
    {
      "camo1",
      "camo2",
      "camo3",
      "camo4"
    };
    hiddenSelectionsTextures[] =
    {
      "PF_Props\Frigates\_textures\gettysburg.paa",
      "OPTRE_Frigate\data\Paris_back_co.paa",
      "OPTRE_Frigate\data\Paris_front_co.paa",
      "OPTRE_Frigate\data\Armament_co.paa"
    };
    featureType = 2;
  };
  class PF_Frigate_UNSC_FOT : PF_Frigate_UNSC_Gettysburg
  {
    displayName = "[PF] UNSC 'Fistful of Teeth' (FFG-189)";
    hiddenSelectionsTextures[] =
    {
      "PF_Props\Frigates\_textures\fot.paa",
      "OPTRE_Frigate\data\Paris_back_co.paa",
      "OPTRE_Frigate\data\Paris_front_co.paa",
      "OPTRE_Frigate\data\Armament_co.paa"
    };
  };
  class PF_Frigate_UNSC_Dayton : PF_Frigate_UNSC_Gettysburg
  {
    displayName = "[PF] UNSC 'Dayton' (FFG-402)";
    hiddenSelectionsTextures[] =
    {
      "PF_Props\Frigates\_textures\dayton.paa",
      "OPTRE_Frigate\data\Paris_back_co.paa",
      "OPTRE_Frigate\data\Paris_front_co.paa",
      "OPTRE_Frigate\data\Armament_co.paa"
    };
  };
};
