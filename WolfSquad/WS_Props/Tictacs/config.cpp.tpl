/**
 * <% warning %>
 */

class CfgPatches
{
  class WS_Props_TicTacs
  {
    author = "wlan0";
    addonRootClass = "WS_Props";
    requiredVersion = 0.1;
    units[] =
    {
      "1st_MEU_patch_vehicles_supplypods", // to override 1stMEU and make sure our tictacs don't get overwritten
      "WS_Props_TicTac_Empty",<% exports %>
    };
    weapons[] = { };
  };
};

class CfgVehicles
{
  class OPTRE_Ammo_SupplyPod_Empty;
  class WS_Props_TicTac_Empty : OPTRE_Ammo_SupplyPod_Empty
  {
    scope = 1;
    dlc = "WS";
    author = "wlan0";
    displayName = "[WS] Supply Pod (Empty)";
    maximumLoad = 1000000;
    hiddenSelections[] =
    {
      "camo",
    };
    hiddenSelectionsTextures[] =
    {
      "WS_Props\Tictacs\_textures\pods\blank.paa",
    };
    editorPreview = "WS_Props\Tictacs\_textures\previews\blank.jpg";

    class TransportItems { };
    class TransportMagazines { };
    class TransportWeapons { };
  };<% classes %>
};
