/* User Defined Values (You can change the values directly in the config for more customisation) */
#define WS_cfg_mnu_backgroundImage "WS_Menu\data\images\background.paa" // STRING - Logo image
#define WS_cfg_mnu_menuMusic "\WS_Menu\data\sounds\odst_overture.ogg" // STRING - Path to the ogg file
#define WS_cfg_mnu_color {1,1,1,0.9} // RGBA - Text main color
#define WS_cfg_mnu_colorFocused {1,1,1,1} // RGBA - Text main color when focused
#define WS_cfg_mnu_colorDisabled {0.5,0.5,0.5,0.8} // RGBA - Text main color when disabled
#define WS_cfg_mnu_colorBackground {0,0,0,0} // RGBA - Menu (and some in game elemets) background
#define WS_cfg_mnu_colorBackgroundFocused {0.9,0.3,0.2,0.6} // RGBA - Menu (and some in game elemets) background when Focused
#define WS_cfg_mnu_textFont "PuristaSemibold" // STRING - Text font (should be supported by arma)
#define WS_cfg_mnu_textAlign "center" // STRING - Text alignment
#define WS_cfg_mnu_logoColor {1,1,1,1} // RGBA - Main menu logo color (change "onSetFocus" "onKillFocus" EHs for better effect as well)
#define WS_cfg_mnu_logoColorActive {1,1,1,1} // RGBA - Main menu logo color when focused (change "onSetFocus" "onKillFocus" EHs for better effect as well)
#define WS_cfg_mnu_logoOnButtonClick "connectToServer ['0.0.0.0', 2302, 'password'];" // STRING - code that runs on main menu logo click
#define WS_cfg_mnu_logoToolTip "Join 0.0.0.0 server." // STRING - logo mouse over tooltip
#define WS_cfg_mnu_logoImage "WS_Menu\data\images\menu_logo.paa" // STRING - Main menu logo
#define WS_cfg_mnu_loadingImage "WS_Menu\data\images\loading_icon.paa" // STRING - loading image
#define WS_cfg_mnu_footerText "- Main menu based on LX MENU by Lightning -" // STRING - Text displayed on footer


/* Patches */
class CfgPatches {
  class WS_Menu {
    name = "WS_Menu";
    author = "Lightning";
    license="https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
    requiredVersion = 2.20;
    requiredAddons[] = {
      "A3_Music_F",
      "A3_Music_F_Exp",
      "A3_Ui_F",
      "WS_Menu_compat_tcp",
    };
    units[] = {};
    weapons[] = {};
    skipWhenMissingDependencies = 1;
    version=1.000;
    versionStr="1.0.0";
    versionAr[]={1,0,0};
  };
};

/* Configurations */

// Disable various TCP bits
class RscTCPButtonMenu;

// Main menu music
class CfgMusic {
  class WS_mus_mnu_menuMusic {
    duration = 338.934;
    sound[] = {WS_cfg_mnu_menuMusic,1,1};
    name = "WS Menu Music";
    titles[] = {};
  };
};

// Main menu changes
class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscDisplayLoadMission: RscStandardDisplay { // Loading screen logos
  class controls {
    class LoadingStart: RscControlsGroup {
      class controls {
        class Logo: RscPictureKeepAspect {
          text=WS_cfg_mnu_loadingImage;
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
          text=WS_cfg_mnu_loadingImage;
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
          text=WS_cfg_mnu_loadingImage;
        };
      };
    };
  };
};
class RscShortcutButton;
class RscButtonMenu: RscShortcutButton {
  colorBackground[]={0,0,0,0.3};
  colorBackgroundFocused[]={1,1,1,1};
  colorBackground2[]={0.8,0.8,0.8,0.8};
  color[]={1,1,1,1};
  colorFocused[]={0,0,0,1};
  color2[]={0,0,0,1};
  colorText[]={1,1,1,1};
  colorDisabled[]={1,1,1,0.25};
  colorSecondary[]={1,1,1,1};
  colorFocusedSecondary[]={0,0,0,1};
  color2Secondary[]={0,0,0,1};
  colorDisabledSecondary[]={1,1,1,0.25};
  class Attributes {
    font=WS_cfg_mnu_textFont;
    color="#000000";
    align=WS_cfg_mnu_textAlign;
    shadow="false";
  };
};
class RscButtonMenuMain: RscButtonMenu {
  colorBackground[]=WS_cfg_mnu_colorBackground;
  colorBackgroundFocused[]=WS_cfg_mnu_colorBackgroundFocused;
  colorBackground2[]=WS_cfg_mnu_colorBackgroundFocused;
  color[]=WS_cfg_mnu_color;
  colorFocused[]=WS_cfg_mnu_colorFocused;
  color2[]=WS_cfg_mnu_color;
  colorText[]=WS_cfg_mnu_color;
  colorDisabled[]=WS_cfg_mnu_colorDisabled;
  colorSecondary[]=WS_cfg_mnu_color;
  colorFocusedSecondary[]=WS_cfg_mnu_colorFocused;
  color2Secondary[]=WS_cfg_mnu_color;
  colorDisabledSecondary[]=WS_cfg_mnu_colorDisabled;
  fontSecondary=WS_cfg_mnu_textFont;
  class Attributes {
    font=WS_cfg_mnu_textFont;
    color="#000000";
    align=WS_cfg_mnu_textAlign;
    shadow="false";
  };
  animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
  animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
  animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
  animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
  animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
  animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
};
class RscActivePicture;
class Logo;
class RscText;
class RscPicture;
class RscButton;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscActivePictureKeepAspect;
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {show=0;};
class CfgScriptPaths {
  WS_Menu_ScriptPath = "WS_Menu\data\functions\";
};
class RscDisplayMain: RscStandardDisplay {
  scriptPath = "WS_Menu_ScriptPath";
  scriptName = "RscDisplayMain";
  onLoad="[""onLoad"",_this,""RscDisplayMain"",'WS_Menu_ScriptPath'] call (uinamespace getvariable 'BIS_fnc_initDisplay')"; // plays menu music at line 26
  onUnload="[""onUnload"",_this,""RscDisplayMain"",'WS_Menu_ScriptPath'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
  class Controls {
    // delete TCP controls
    delete TCP_LogoTCP;
    delete TCP_LogoStudio;
    delete TCP_ButtonArmaNews;
    delete TCP_ButtonSteam;
    delete TCP_CopyrightBohemia;
    delete TCP_CopyrightBlackElement;
    delete TCP_ButtonBackground;
    delete TCP_PlayerName;
    delete TCP_Version;

    delete TCP_ButtonSingleplayerShowcases;
    delete TCP_ButtonSingleplayerChallengees;
    delete TCP_ButtonSingeplayerScenarios;
    delete TCP_ButtonSingleplayerCampaigns;
    delete TCP_ButtonSingleplayer;

    delete TCP_ButtonMultiplayer;
    delete TCP_ButtonForge;
    delete TCP_ButtonArsenal;

    delete TCP_ButtonTutorialsVR;
    delete TCP_ButtonTutorialsFieldManual;
    delete TCP_ButtonTutorialsCommunityGuides;
    delete TCP_ButtonTutorialsBootcamp;
    delete TCP_ButtonTutorials;

    delete TCP_ButtonProfiles;

    delete TCP_ButtonSettingsAudio;
    delete TCP_ButtonSettingsControls;
    delete TCP_ButtonSettingsGame;
    delete TCP_ButtonSettingsAddons;
    delete TCP_ButtonSettingsExpansions;
    delete TCP_ButtonSettingsVideo;
    delete TCP_ButtonSettings;

    delete TCP_ButtonQuit;

    class Logo: RscActivePicture {
      shadow = 0;
      show = 1;
      tooltip = WS_cfg_mnu_logoToolTip;
      text = WS_cfg_mnu_logoImage;
      onButtonClick = WS_cfg_mnu_logoOnButtonClick;
      color[]=WS_cfg_mnu_logoColor;
      colorActive[]=WS_cfg_mnu_logoColorActive;
      onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,1];";
      onKillFocus="(_this select 0) ctrlsettextcolor [0,0,0,1];";
      x="0.5 - 	5 * 	(pixelW * pixelGrid * 2.5)";
      y="safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2.5)";
      w="2 * 	5 * 	(pixelW * pixelGrid * 2.5)";
      h="1 * 	5 * 	(pixelH * pixelGrid * 2.5)";
    };
    class LogoApex: Logo {
      shadow = 0;
      show = 1;
      tooltip = WS_cfg_mnu_logoToolTip;
      text = WS_cfg_mnu_logoImage;
      onButtonClick = WS_cfg_mnu_logoOnButtonClick;
      color[]=WS_cfg_mnu_logoColor;
      colorActive[]=WS_cfg_mnu_logoColorActive;
      onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,1];";
      onKillFocus="(_this select 0) ctrlsettextcolor [0,0,0,1];";
      x="0.5 - 	5 * 	(pixelW * pixelGrid * 2.5)";
      y="safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2.5)";
      w="2 * 	5 * 	(pixelW * pixelGrid * 2.5)";
      h="1 * 	5 * 	(pixelH * pixelGrid * 2.5)";
    };
    class BackgroundBarLeft: RscPicture {
      colorText[]={1,1,1,1};
      angle=0;
      text = WS_cfg_mnu_backgroundImage;
      h = "safezoneW * 2.5/3";
      w = "safezoneW";
      x = "safezoneX";
      y = "safezoneY";
    };
    class BackgroundBar: RscText {show=0};
    class BackgroundBarRight: BackgroundBarLeft {show=0};
    class TitleSingleplayer: RscButtonMenuMain {
      fontSecondary=WS_cfg_mnu_textFont;
      colorBackground[]=WS_cfg_mnu_colorBackground;
      colorBackground2[]=WS_cfg_mnu_colorBackgroundFocused;
      class Attributes {
        align=WS_cfg_mnu_textAlign;
        color="#000000";
        font=WS_cfg_mnu_textFont;
        shadow=1;
        size=1;
      };
    };
    delete TitleIconSingleplayer;
    class GroupSingleplayer: RscControlsGroupNoScrollbars {
      class Controls {
        class Campaigns: RscButtonMenuMain {
          tooltip="";
          y="(0) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Showcases: Campaigns {
          tooltip="";
          y="(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Challenges: Campaigns {
          tooltip="";
          y="(2 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Scenarios: Campaigns {
          tooltip="";
          y="(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Editor: Campaigns {
          tooltip="";
          y="(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
      };
    };
    class GroupMultiplayer: GroupSingleplayer {
      class Controls: Controls {
        class QuickPlay: Campaigns {
          tooltip="";
          y="(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class ServerBrowser: Campaigns {
          tooltip="";
          y="(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class ApexProtocol: Campaigns {show=0;};
      };
    };
    class GroupTutorials: GroupSingleplayer {
      x="-0.035 + 0.5 + (	5) * 	(pixelW * pixelGrid * 2)";
      w="(10) * 	(pixelW * pixelGrid * 2)";
      h="(5 * 	1.5) * 	(pixelH * pixelGrid * 2)";
      class Controls: Controls {
        class Bootcamp: Campaigns {
          tooltip="";
          x=-0.035;
          y="(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
          w="(	10 + 3.25) * 	(pixelW * pixelGrid * 2)";
        };
        class VRTraining: Bootcamp {
          tooltip="";
          x=-0.035;
          y="(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Arsenal: Bootcamp {
          tooltip="";
          x=-0.035;
          y="(2 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class FieldManual: Bootcamp {
          tooltip="";
          x=-0.035;
          y="(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class CommunityGuides: Bootcamp {
          tooltip="";
          x=-0.035;
          y="(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
      };
    };
    class GroupOptions: GroupSingleplayer {
      class Controls: Controls {
        class Video: Campaigns {
          tooltip="";
          y="(0 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Audio: Campaigns {
          tooltip="";
          y="(1 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Controls: Campaigns {
          tooltip="";
          y="(2 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Game: Campaigns {
          tooltip="";
          y="(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
        class Expansions: Campaigns {
          tooltip="";
          y="(4 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
        };
      };
    };
    class TitleSession: RscButton {
      colorText[]=WS_cfg_mnu_color;
      colorBackground[]=WS_cfg_mnu_colorBackground;
      colorBackgroundActive[]=WS_cfg_mnu_colorBackgroundFocused;
      colorFocused[]=WS_cfg_mnu_colorFocused;
      onMouseEnter="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
      onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
      onMouseExit="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
      onKillFocus="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
    };
    class GroupSession: GroupSingleplayer {
      class Controls: Controls {
        class Profile: Campaigns {
          class Attributes {
            font=WS_cfg_mnu_textFont;
          };
        };
        class Unit: RscButton {
          colorBackground[]=WS_cfg_mnu_colorBackground;
          colorBackgroundActive[]=WS_cfg_mnu_colorBackgroundFocused;
          onMouseEnter="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
          onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
          onMouseExit="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
          onKillFocus="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
        };
      };
    };
    class Exit: RscButton {
      colorText[]=WS_cfg_mnu_color;
      colorBackground[]=WS_cfg_mnu_colorBackground;
      colorBackgroundActive[]=WS_cfg_mnu_colorBackgroundFocused;
      colorFocused[]=WS_cfg_mnu_colorFocused;
      onMouseEnter="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
      onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,0.8];";
      onMouseExit="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
      onKillFocus="(_this select 0) ctrlsettextcolor [0,0,0,0.8];";
    };
    class Footer: RscText {
      text=WS_cfg_mnu_footerText;
      font=WS_cfg_mnu_textFont;
      colorText[]=WS_cfg_mnu_color;
      colorBackground[]=WS_cfg_mnu_colorBackgroundFocused;
    };
    class InfoMods: RscControlsGroupNoHScrollbars {
      class Controls {
        class Background: RscPicture {show=0;};
        class BackgroundIcon: RscPicture {colorText[]=WS_cfg_mnu_colorBackgroundFocused;};
      };
    };
    class InfoNews: InfoMods {
      class Controls: Controls {
        class News: RscText {
          colorText[]=WS_cfg_mnu_color;
          font=WS_cfg_mnu_textFont;
          shadow=0;
        };
      };
    };
    class InfoDLCsOwned: InfoMods {show=0;};
    class BackgroundLeft: RscText{show=0;};
    class SpotlightPrev: RscActivePictureKeepAspect {show=0;};
  };
  class DlcOwnedIconPicture: RscPictureKeepAspect {show=0;};
  class DlcIconPicture: RscPictureKeepAspect {show=0;};
};
