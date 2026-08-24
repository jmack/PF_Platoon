/*
  Author: wlan0

  Description:
    Displays a halo 3 style letterbox with "checkpoint" title

  Parameters:
    _title   // STRING - the text to display as the checkpoint title
  
  Returns:
    BOOLEAN

  Examples:
    ["Last One Out, Get The Lights"] call WS_fnc_letterbox;
*/

if (!params [
  ["_title", "", [""]]
]) exitWith { false };

[_title] spawn {
  params ["_title"];

  disableSerialization;
  "blake_cinemaBorder" cutRsc ["RscCinemaBorder", "PLAIN"];
  private _borderDialog = uiNamespace getVariable "RscCinemaBorder";
  private _borderTop = _borderDialog displayCtrl 100001;
  private _borderBottom = _borderDialog displayCtrl 100002;
  private _height = 0.125 * safeZoneH;
  private _offset = 0.1;
  showHUD false;

  _borderTop ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY - _height - _offset,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  _borderBottom ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY + safeZoneH,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  { _x ctrlCommit 0 } forEach [_borderTop, _borderBottom];

  _borderTop ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY - _offset,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  _borderBottom ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY + safeZoneH - _height,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  { _x ctrlCommit 1.5 } forEach [_borderTop, _borderBottom];

  waitUntil {
    sleep 1;
    ctrlCommitted _borderTop &&
    ctrlCommitted _borderBottom
  };

  [
    format ["<t align='right'>%1</t>", _title],   // text
    [
      safeZoneX,  // pos x
      safeZoneW   // ctrl width
    ],
    1.2,      // pos y
    1.8,      // duration
    0.2,      // fade in time
    0,        // delta y
    789       // rscLayer
  ] spawn BIS_fnc_dynamicText;

  sleep 3;

  _borderTop ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY - _height - _offset,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  _borderBottom ctrlSetPosition [
    safeZoneX - _offset,
    safeZoneY + safeZoneH,
    safeZoneW + 2 * _offset,
    _height + _offset
  ];
  { _x ctrlCommit 1.5 } forEach [_borderTop, _borderBottom];

  waitUntil {
    sleep 1;
    ctrlCommitted _borderTop &&
    ctrlCommitted _borderBottom
  };

  "blake_cinemaBorder" cutText ["", "PLAIN"];
  showHUD true;
};
true;
