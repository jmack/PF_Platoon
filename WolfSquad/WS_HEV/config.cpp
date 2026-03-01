#include "dialogs\common.hpp"
#include "dialogs\WS_HEVPanel.hpp"

class CfgPatches
{
  class WS_HEV
  {
    author = "wlan0";
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {
      "DMNS_HEVPatch",
      "DMNS_FunctionsLibrary",
    };
    requiredVersion = 0.1;
  };
};
class CfgFunctions
{
  class WS_HEV_Functions
  {
    tag = "WS";
    class Scripts
    {
      file = "\WS_HEV\scripts";
      class launchHEVs { };
      class openHEVLaunchControls { };
      class prepareHEVLaunch { };
      class spawnRazorCorvette { };

      class initHEVs { };
    };
  };
};
class CfgAddons
{
  class PreloadAddons
  {
    class WS_HEV
    {
      list[] = { "WS_HEV" };
    };
  };
};
