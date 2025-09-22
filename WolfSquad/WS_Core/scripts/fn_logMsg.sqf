/*
  Author: wlan0

  Description:
   Logs a message to the systemChat if the WS_LogLevel is set to a level equal to or lower than the message level

  Parameters:
    _msgLevelString        // STRING - the message level (can be DEBUG, INFO, WARN, or ERROR)
    _msg                   // OBJECT, STRING, NUMBER, BOOL - the object that the action should be applied to (usually '_this' if being called from the init of an object)

  Returns:
    NOTHING

  Examples:
    ["INFO", "This is a test message"] call WS_fnc_LogMsg;
*/

if (!params [
  ["_msgLevelString", "", [""]],
  ["_msg", "", []]
]) exitWith { false };

// 4 - Debug
// 3 - Info
// 2 - Warn
// 1 - Error
// 0 - None
_logLevelMap = ["", "ERROR", "WARN", "INFO", "DEBUG"];
_logLevelString = missionNamespace getVariable ["WS_LogLevel", ""];

if (!(_logLevelString in _logLevelMap) || !(_msgLevelString in _logLevelMap)) exitWith {
  diag_log format ["Cannot use WS_fnc_LogMsg! Either WS_LogLevel is invalid (currently %1) or _msgLevel is invalid (currently %2)", _logLevelString, _msgLevelString]
};

_logLevel = _logLevelMap findIf { _x == _logLevelString };
_msgLevel = _logLevelMap findIf { _x == _msgLevelString };

if (_logLevel >= _msgLevel) then {
  systemChat format ["[%1] %2", _msgLevelString, _msg];
};
