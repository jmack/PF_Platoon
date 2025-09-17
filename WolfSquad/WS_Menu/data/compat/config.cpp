class CfgPatches {
  class WS_Menu_compat_rhs {
    author = "Lightning";
    requiredVersion = 2.20;
    requiredAddons[] = {"A3_Ui_F","RHS_MAIN","WS_Menu",};
    units[] = {};
    weapons[] = {};
    skipWhenMissingDependencies = 1;
  };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
  scriptPath = "WS_Menu_ScriptPath";
  scriptName = "RscDisplayMain";
  onLoad="[""onLoad"",_this,""RscDisplayMain"",'WS_Menu_ScriptPath'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
  onUnload="[""onUnload"",_this,""RscDisplayMain"",'WS_Menu_ScriptPath'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
