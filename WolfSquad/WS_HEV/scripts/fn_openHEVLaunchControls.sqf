/*
  Authors:
    Big_Wilk (Article 2 Studios)
    Modified by: Ansible2 // Cipher (DMNS)
    Further modified by: wlan0 (Wolf Squad)

  Description:
    Opens/creates the dialog used for selecting the drop parameters for HEVs

  Parameters:
    _console  // OBJECT - the object that the open action is attached to (and by extension, usually has the control vars set to it)

  Returns:
    NOTHING

  Examples:
    _this call WS_fnc_OpenHEVLaunchControls;
*/
disableSerialization;

params [
  ["_console", objNull, [objNull]]
];

createDialog "WS_HEVPanel";

private _dialog = findDisplay 5600;

private _HEVMenuList        = _dialog displayCtrl 1500;
private _controlMenuList    = _dialog displayCtrl 1501;

// (_dialog displayCtrl 1) ctrlSetStructuredText parseText ("<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> "+"Logged In: "+(name player));
(_dialog displayCtrl 1) ctrlSetStructuredText parseText ("Logged In: <img image='" + (player getVariable ["ace_nametags_rankIcon", "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa"]) + "' /> " + (name player));
//(_dialog displayCtrl 2) ctrlSetText (format ["%1",_highestCard]);

private _startHeightMenu        = (_dialog displayCtrl 10);
private _atmosphereStartMenu    = (_dialog displayCtrl 11);
private _atmosphereEndMenu      = (_dialog displayCtrl 12);
private _chuteOpenMenu          = (_dialog displayCtrl 13);
private _chuteDetachMenu        = (_dialog displayCtrl 14);
private _chuteDetachDeleteMenu  = (_dialog displayCtrl 15);
private _deploymentMenu         = (_dialog displayCtrl 16);
private _info                   = (_dialog displayCtrl 1000);

// DMNS_UNSC_Console_MenusAllowed apply {
//   private _menuName = getText (configfile >> "cfgDmnsUNSCmenus" >> _x >> "MenuName");
//   private _function = getText (configfile >> "cfgDmnsUNSCmenus" >> _x >> "Function");
//   private _securityValue = getNumber (configfile >> "cfgDmnsUNSCmenus" >> _x >> "Security");
//   private _i = _controlMenuList lbAdd _menuName;
//   _controlMenuList lbSetData [_i, _function];
//   _controlMenuList lbSetValue [_i, _securityValue];
//   _controlMenuList lbSetPicture [_i,(getText (configfile >> "cfgDmnsUNSCmenus" >> _x >> "icon"))];
//   if (_x == "DMNS_SOEIV") then {
//     _controlMenuList lbSetCurSel _i;
//   };
// };

private _count = 0;
private _linkedPods = _console getVariable ["DMNS_PodsLinkedToConsole",[]];

missionNamespace setVariable ["DMNS_CurrentConsole", _console, true];

_linkedPods apply {
  _count = _count + 1;
  _i = _HEVMenuList lbAdd (format ["Human Entry Vehicle %1",(if (_count < 10) then {("0" + str (_count))} else {(_count)})]);
  _HEVMenuList lbSetPicture [_i, "OPTRE_Vehicles\hev\Data\icon2.paa"];
};

[20000, 10000, 5000, 4500, 4000, 3500, 3000, 2500, 2000, 1500, 1000] apply {
  _i = _startHeightMenu lbAdd (format ["Start Height: %1m",_x]);
  _startHeightMenu lbSetValue [_i, _x];
};

[10000, 5000, 3000] apply {
  _i = _atmosphereStartMenu lbAdd (format ["Atmosphere Start: %1m",_x]);
  _atmosphereStartMenu lbSetValue [_i, _x];
};

[5000, 3000, 2000] apply {
  _i = _atmosphereEndMenu lbAdd (format ["Atmosphere End: %1m",_x]);
  _atmosphereEndMenu lbSetValue [_i, _x];
};

[1000, 500, 300, 150] apply {
  _i = _chuteOpenMenu lbAdd (format ["Chute Open: %1m",_x]);
  _chuteOpenMenu lbSetValue [_i, _x];
};

[500, 200, 100] apply {
  _i = _chuteDetachMenu lbAdd (format ["Chute Detach: %1m",_x]);
  _chuteDetachMenu lbSetValue [_i, _x];
};

[1, 0] apply {
  _i = _chuteDetachDeleteMenu lbAdd (format ["Delete Chutes On Detach: %1",
    (switch _x do {
      case 0: {"No"}; 
      case 1: {"Yes"};
    })
  ]);
  _chuteDetachDeleteMenu lbSetValue [_i, _x];
};

[0, 1, 2] apply {
  _i = _deploymentMenu lbAdd (format ["Deployment: %1",
    (switch _x do {
      case 0: {"Razor-class prowler"};
      case 1: {"Halberd-class light destroyer"};
      case 2: {"No ship"};
    }
  )]);
  _deploymentMenu lbSetValue [_i, _x];
};

[_startHeightMenu,_atmosphereStartMenu,_atmosphereEndMenu,_chuteOpenMenu,_chuteDetachMenu,_chuteDetachDeleteMenu,_deploymentMenu] apply {
  _x lbSetCurSel 0;
};


(_dialog displayCtrl 1201) ctrlAddEventHandler ["Draw","
  if (getMarkerColor 'DMNS_Local_HEVConsolePosMarker' != '') then {
    (_this select 0) drawLine [([(getMarkerPos 'DMNS_Local_HEVConsolePosMarker'), 20000, 0] call BIS_fnc_relPos), ([(getMarkerPos 'DMNS_Local_HEVConsolePosMarker'), 20000, 180] call BIS_fnc_relPos), [1,0,0,1]];
    (_this select 0) drawLine [([(getMarkerPos 'DMNS_Local_HEVConsolePosMarker'), 20000, 90] call BIS_fnc_relPos), ([(getMarkerPos 'DMNS_Local_HEVConsolePosMarker'), 20000, 270] call BIS_fnc_relPos), [1,0,0,1]];
    _this select 0 drawEllipse [(getMarkerPos 'DMNS_Local_HEVConsolePosMarker'), 150, 150, 0, [1, 0, 0, 0.5], '#(rgb,8,8,3)color(1,0.6,0,1)'];
  };
"];

private _countHEVs = (count _linkedPods) - 1;

While {str (findDisplay 5600) != "No display"} do {

  for "_i" from 0 to _countHEVs do {
    private _hev = _console getVariable ["DMNS_PodsLinkedToConsole",[]] select _i;

    if (isNull (gunner _hev)) then {
      _HEVMenuList lbSetPictureColor [_i, [1, 0, 0, 1]];
      _HEVMenuList lbSetPictureColorSelected [_i, [1, 0, 0, 1]];
    } else {
      _HEVMenuList lbSetPictureColor [_i, [1, 1, 1, 1]];
      _HEVMenuList lbSetPictureColorSelected [_i, [0, 0, 0, 1]];
    };
  };

  switch (_console getVariable ["DMNS_PodsLaunchIn",-1]) do {
    case -1: {
      _info ctrlSetStructuredText parseText "HEV Status<br /><t color='#00FF00'>Ready for Launch</t>";
      //_info ctrlSetTextColor [1,1,1,1];
    };
    case -2: {
      _info ctrlSetStructuredText parseText "HEV Status<br /><t color='#FF0000'>Re-arming (90s)</t>";
      //_info ctrlSetTextColor [1,0,0,1];
    };
    default {
      _info ctrlSetStructuredText parseText (format ["HEV Status<br /><t color='#FFA500'>Launching in %1 seconds</t>", _console getVariable ["DMNS_PodsLaunchIn",-1]]);
      //_info ctrlSetTextColor [1,1,1,1];
    };

  };

  uiSleep 0.01;
};
