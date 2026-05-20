class CfgPatches {
  class WS_Menu {
    name = "WS_Menu";
    author = "wlan0";
    requiredAddons[] = {
      "A3_Music_F",
      "A3_Music_F_Exp",
      "A3_Ui_F",
      "TCP_Ui",
    };
    units[] = {};
    weapons[] = {};
  };
};

// Loading screen changes
class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscDisplayLoadMission: RscStandardDisplay { // Loading screen logos
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text = "WS_Menu\data\loading_icon.paa";
        };
      };
    };
  };
};
class RscDisplayNotFreeze: RscStandardDisplay { // Startup screen logos
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text = "WS_Menu\data\loading_icon.paa";
        };
      };
    };
  };
};
class RscDisplayStart: RscStandardDisplay { // Startup screen logos
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text = "WS_Menu\data\loading_icon.paa";
        };
      };
    };
  };
};

// Main menu changes
class RscPicture;
class RscTCPButtonMenu;
class RscDisplayMain: RscStandardDisplay {
  class controls {
    delete TCP_LogoStudio;
    class TCP_LogoTCP: RscPicture {
      text = "WS_Menu\data\background.paa";
      colorText[]={1,1,1,1};
      angle=0;

      delete tooltip;
      delete onButtonClick;

      h = "safezoneW * 2.5/3";
      w = "safezoneW";
      x = "safezoneX";
      y = "safezoneY";
    };
    class TCP_ButtonForge: RscTCPButtonMenu
    {
      onLoad = "0 fadeEnvironment 0";
      text = "3DEN Editor";
    };
    class TCP_ButtonArsenal: RscTCPButtonMenu
    {
      text = "Ace Arsenal";
      onButtonClick = "playMission ['','\z\ace\addons\arsenal\missions\Arsenal.VR']";
    };
  };
};
