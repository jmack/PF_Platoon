#define _ARMA_

class CfgPatches
{
  class PF_Core
  {
    author = "wlan0";
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {
      "1st_MEU_patch_main_loadingScreens", // we dont actually extend anything from 1MEU, this is just to ensure our loading screen overwrites theirs
      "A3_Data_F_Enoch_Loadorder",
    };
    requiredVersion = 0.1;
  };
};
class CfgFunctions
{
  class PF_Functions
  {
    tag = "PF";
    class Scripts
    {
      file = "\PF_Core\scripts";
      class letterbox {  };
    };
  };
};
class CfgAddons
{
  class PreloadAddons
  {
    class PF_Core
    {
      list[] = {"PF_Core"};
    };
  };
};
class RscPicture{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};
class RscStandardDisplay{};
class RscDisplayMain: RscStandardDisplay
{
  class Controls
  {
    delete Spotlight1;
    delete Spotlight2;
    delete Spotlight3;
    delete BackgroundSpotlightRight;
    delete BackgroundSpotlightLeft;
    delete BackgroundSpotlight;
    class Logo: RscActivePicture
    {
      text="PF_Core\logo.paa";
    };
  };
  enableDisplay=0;
  delete Spotlight;
  class RscActiveText;
  class RscActivePicture: RscActiveText
  {
    style=48;
    color[]={1,1,1,0.5};
    colorActive[]={1,1,1,1};
  };
  class controlsBackground
  {
    class LoadingPic: RscPicture
    {
      idc=1;
      x="SafeZoneX";
      y="SafeZoneY";
      h="SafeZoneH";
      w="SafeZoneW";
      text="PF_Core\pf2.paa";
    };
  };
};
class RscDisplayLoading
{
  class Variants
  {
    class LoadingOne
    {
      idd=250;
      class controls
      {
        class LoadingPic: RscPicture
        {
          idc=1;
          x="SafeZoneX";
          y="SafeZoneY";
          h="SafeZoneH";
          w="SafeZoneW";
          text="PF_Core\pf1.paa";
        };
      };
    };
    class Loading_West1: LoadingOne
    {
      class controls
      {
        class LoadingPic
        {
          idc=1;
          x="SafeZoneX";
          y="SafeZoneY";
          h="SafeZoneH";
          w="SafeZoneW";
          text="PF_Core\pf2.paa";
        };
      };
    };
    class Loading_West2: LoadingOne
    {
      class controls
      {
        class LoadingPic
        {
          idc=1;
          x="SafeZoneX";
          y="SafeZoneY";
          h="SafeZoneH";
          w="SafeZoneW";
          text="PF_Core\pf2.paa";
        };
      };
    };
    class Loading_East1: LoadingOne
    {
      class controls
      {
        class LoadingPic
        {
          idc=1;
          x="SafeZoneX";
          y="SafeZoneY";
          h="SafeZoneH";
          w="SafeZoneW";
          text="PF_Core\pf2.paa";
        };
      };
    };
    class Loading_East2: LoadingOne
    {
      class controls
      {
        class LoadingPic
        {
          idc=1;
          x="SafeZoneX";
          y="SafeZoneY";
          h="SafeZoneH";
          w="SafeZoneW";
          text="PF_Core\pf2.paa";
        };
      };
    };
  };
};
class RscDisplayLoadMission: RscStandardDisplay
{
  class controlsBackground
  {
    class LoadingPic: RscPicture
    {
      idc=1;
      x="SafeZoneX";
      y="SafeZoneY";
      h="SafeZoneH";
      w="SafeZoneW";
      text="PF_Core\pf2.paa";
    };
  };
};
class RscDisplayStart: RscStandardDisplay
{
  class controls
  {
    class LoadingPic: RscPicture
    {
      idc=1;
      x="SafeZoneX";
      y="SafeZoneY";
      h="SafeZoneH";
      w="SafeZoneW";
      text="PF_Core\pf1.paa";
    };
  };
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
  class LoadingPic: RscPicture
  {
    idc=1;
    x="SafeZoneX";
    y="SafeZoneY";
    h="SafeZoneH";
    w="SafeZoneW";
    text="PF_Core\pf2.paa";
  };
};
class RscDisplayClient: RscStandardDisplay
{
  class controlsBackground
  {
    class LoadingPic: RscPicture
    {
      idc=1;
      x="SafeZoneX";
      y="SafeZoneY";
      h="SafeZoneH";
      w="SafeZoneW";
      text="PF_Core\pf2.paa";
    };
  };
};
