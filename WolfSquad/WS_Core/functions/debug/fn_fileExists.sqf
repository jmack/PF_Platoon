/*
  Author: KillzoneKid

  Description:
    Returns true if a given file exists in the mission directory, or false if it doesn't

  Parameters:
    _this  // STRING - the name of the file to test existence of
  
  Returns:
    BOOLEAN

  Examples:
    ("mission.sqm" call WS_fnc_fileExists); //true
    ("mission.sqml" call WS_fnc_fileExists); //false
*/

private ["_ctrl", "_fileExists"];

disableSerialization;

_ctrl = findDisplay 0 ctrlCreate ["RscHTML", -1];
_ctrl htmlLoad _this;
_fileExists = ctrlHTMLLoaded _ctrl;
ctrlDelete _ctrl;

_fileExists