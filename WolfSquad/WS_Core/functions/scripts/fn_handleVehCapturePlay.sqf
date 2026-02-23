/*
  Author: wlan0

  Description:
    Either records or plays a capture for a given vehicle. The specific mode can be toggled via passed parameter if needed, 
    otherwise it checks if a capture file exists. If it does, it'll play it, otherwise it'll record a new capture.

  Parameters:
    _veh          // OBJECT - the vehicle to capture the movements of.
    _forceMode    // STRING [optional] - the mode to force regardless of file existence. Options: PLAY, CAPTURE
  
  Returns:
    VOID

  Examples:
    [some_vehicle] call WS_fnc_HandleVehCapturePlay;
    [other_vehicle, "CAPTURE"] call WS_fnc_HandleVehCapturePlay;
*/

params [
  ["_veh", objNull, [objNull]],
  ["_forceMode", "", [""]]
];

// check if forceMode
  // yes: manually set mode
  // no:  check if file exists
    // yes: set mode play
    // no: set mode capture
_mode = "CAPTURE";
_captureFileName = format ["capture_%1.sqf", str _veh];

if (_forceMode == "PLAY" || _forceMode == "CAPTURE") then {
  _mode = _forceMode;
} else {
  if (_captureFileName call WS_fnc_FileExists) then {
    _mode = "PLAY";
  };
};

switch (_mode) do
{
  case "CAPTURE": { _veh spawn TT_fnc_startCapture };
  case "PLAY": { execVM _captureFileName };
};
