// %autogenerateWarning%

class CfgPatches
{
  class PF_Gear_TicTacs
  {
    author = "wlan0";
    addonRootClass = "PF_Gear";
    requiredVersion = 0.1;
    units[] =
    {
      "Module_OPTRE_PelicanSupplyDrop",
      "1st_MEU_patch_vehicles_supplypods", // to override 1stMEU and make sure our tictacs don't get overwritten
      "PF_TicTac_Empty",%unitExports%
    };
    weapons[] = { };
  };
};

class CfgVehicles
{
  class OPTRE_Ammo_SupplyPod_Empty;
  class PF_TicTac_Empty : OPTRE_Ammo_SupplyPod_Empty
  {
    scope = 1;
    dlc = "PF_Plt";
    author = "wlan0";
    displayName = "[PF] Supply Pod (Empty)";
    maximumLoad = 1000000;
    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] =
    {
      "PF_Gear\tictacs\_textures\pods\empty.paa",
    };
    editorPreview = "PF_Gear\tictacs\_textures\previews\empty.jpg";

    class TransportItems { };
    class TransportMagazines { };
    class TransportWeapons { };
  };%mainClasses%

  class Module_F;
  class Module_OPTRE_PelicanSupplyDrop : Module_F
  {
    class Arguments
    {
      class box1
      {
        defaultValue = "PF_TicTac_Empty";
        class values
        {
          class pf_pod_none
          {
            name = "none";
            value = "none";
          };
          class pf_pod_random
          {
            name = "Random Supply Pod";
          };%moduleClasses%
        };
      };
    };
  };
};
