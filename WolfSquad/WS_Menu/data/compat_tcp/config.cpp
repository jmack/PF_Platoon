class CfgPatches {
  class WS_Menu_compat_tcp {
    author = "wlan0";
    requiredAddons[] = { "TCP_Ui" };
    units[] = { };
    weapons[] = { };
  };
};

class Extended_PreInit_Eventhandlers
{
  delete TCP_Ui;
};

class RscTitles
{
  delete RscTCPPreloadTexture;
  delete RscTCPIntersystemNews;
  delete RscTCPSmartlink;
  delete RscTCPChapterTitle;
};

class CfgScriptPaths
{
  delete TCP_GUI;
};

class CfgUIColors
{
  class GUI
  {
    class Presets
    {
      delete PresetTCP;
    };
  };
  class IGUI
  {
    class Presets
    {
      delete TCP_PresetCE;
      delete TCP_PresetH2;
      delete TCP_PresetH2C;
      delete TCP_PresetH3;
      delete TCP_PresetH3ODST;
      delete TCP_PresetReach;
    };
  };
  class Map
  {
    class Presets
    {
      delete PresetHW;
    };
  };
};
class CfgCredits
{
  delete CreditsMovieTCP;
  class CreditsOrbat
  {
    delete TCP;
  };
};
class CfgPostProcessTemplates
{
  delete TCP_MainMenuBlue;
};

class RscStandardDisplay;
class RscDisplayInterrupt : RscStandardDisplay
{
  class controls
  {
    delete LogoTCP;
  };
};
class RscDisplayMPInterrupt : RscStandardDisplay
{
  class controls
  {
    delete LogoTCP;
  };
};