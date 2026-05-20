/*
  Author: wlan0

  Description:
   Logs a message to the chat if the WS_LogLevel is set to a level equal to or lower than the message level

  Parameters:
    _msgLevelString        // STRING - the message level (can be DEBUG, INFO, WARN, or ERROR)
    _msg                   // OBJECT, STRING, NUMBER, BOOL - the object that the action should be applied to (usually '_this' if being called from the init of an object)

  Returns:
    NOTHING

  Examples:
    ["INFO", "This is a test message"] call WS_fnc_LogMsg;
*/

params [
  ["_msgSeverity", ""],
  ["_msgText", ""],
  ["_originalPlayer", objNull]
];

// If we're not the server, we just remoteExec this command on the server
if (!isServer) exitWith {
  [[_msgSeverity, _msgText, player]] remoteExec ["WS_fnc_LogMsg", 2];
}; // Anything past here, we know we are the server

// Setup
_validMsgSeverity       = ["DEBUG", "INFO", "WARN", "ERROR"];
_validThresholdSeverity = ["DEBUG", "INFO", "WARN", "ERROR", ""];

_debugMap = createHashMapFromArray [
  ["name", "DEBUG"],
  ["color", [0.7, 0.7, 0.7, 1]] // light grey
];
_infoMap = createHashMapFromArray [
  ["name", "INFO"],
  ["color", [1, 1, 1, 1]] // white
];
_warnMap = createHashMapFromArray [
  ["name", "WARN"],
  ["color", [1, 1, 0, 1]] // yellow
];
_errorMap = createHashMapFromArray [
  ["name", "ERROR"],
  ["color", [1, 0, 0, 1]] // red
];
_logSeverityMap = createHashMapFromArray [
  ["DEBUG", _debugMap],
  ["INFO", _infoMap],
  ["WARN", _warnMap],
  ["ERROR", _errorMap]
];

// check that we have a valid log level, and that the mission has a log level set
_msgSeverityNumber = _validMsgSeverity findIf { _x == _msgSeverity };
if (_msgSeverityNumber < 0) exitWith {
  systemChat format ["[!! ERROR !!]: WS_fnc_LogMsg called with an invalid severity of %1!!", _msgSeverity];
};

_missionLogSeverityThreshold = missionNamespace getVariable ["WS_LogLevel", ""];
_thresholdSeverityNumber = _validThresholdSeverity findIf { _x == _missionLogSeverityThreshold };
if (_thresholdSeverityNumber < 0) exitWith {
  systemChat format ["[!! ERROR !!]: WS_fnc_LogMsg called but mission severity threshold is set to an invalid severity of %1!!", _missionLogSeverityThreshold];
};

// compare our msg severity and our mission severity threshold. if msg >= threshold
// then we print the message. e.x.: if threshold is WARN (2) and message is DEBUG (0)
// then we wouldn't print it, but we WOULD print a message that is WARN (2) or ERROR (3)
if (_msgSeverityNumber < _thresholdSeverityNumber) exitWith { true };

// alright, we're printing our message. first get the info for the severity channel we're printing to
_severityInfo = _logSeverityMap get _msgSeverity;
_channelName = _severityInfo get "name";
_channelPublicVar = format ["WS_Debug_Channel_%1", _channelName];
_channelColor = _severityInfo get "color";

// setup our custom radio channel if it's not already
_channelID = missionNamespace getVariable [_channelPublicVar, 0];
if (_channelID <= 0) then {
  _channelID = radioChannelCreate [
    _channelColor,
    _channelName,
    "[%CHANNEL_LABEL]",
    []
  ];

  missionNamespace setVariable [_channelPublicVar, _channelID, true];
};

// from here on, we need to use spawn so we can use blocking waits and make sure we have our player set
[_channelID, _msgText, _originalPlayer] spawn {
  params ["_channelID", "_message", "_origin"];
  // wait until we have a player
  waitUntil { sleep 0.5; player == player }; // works because objNull != objNull

  // if we're not the originating player, tack that on as a prefix to the message
  if (!(isNull _origin) && _origin != player) then {
    _message = format ["(%1) %2", _origin, _message];
  };

  // check if we're in the radio channel already (or join if we aren't)
  _channelInfo = radioChannelInfo _channelID;
  if (!(player in _channelInfo#3)) then {
    _channelID radioChannelAdd [player];
  };

  // and finally write our message
  player customChat [_channelID, _message];
};
