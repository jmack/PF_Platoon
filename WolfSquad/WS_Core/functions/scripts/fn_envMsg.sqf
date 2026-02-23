/*
  Author: wlan0

  Description:
    Displays a message to the player in the "environment" channel, used specially for world interactions

  Parameters:
    _msg  // STRING - the message to display to the user
  
  Returns:
    VOID

  Examples:
    "Successfully did a hack!" call WS_fnc_EnvMsg;
*/

if (!params [
  ["_msg", "", [""]]
]) exitWith { false };

["DEBUG", format ["WS_fnc_LogMsg called with _msg = %1", _msg]] call WS_fnc_LogMsg;

// Check if we've initialized an env channel yet (if not, do first time set up)
_channelID = missionNamespace getVariable ["WS_EnvChanID", 0];
if (_channelID <= 0) then {
  ["INFO", "Environment channel does not exist. Initializing"] call WS_fnc_LogMsg;

  _channelID = radioChannelCreate [
    [1, 0, 0, 1],
    "Environment",
    "%CHANNEL_LABEL",
    []
  ];

  if (_channelID == 0) exitWith {
    ["ERROR", "Environment channel initialization failed!"] call WS_fnc_LogMsg
  };

  missionNamespace setVariable ["WS_EnvChanID", _channelID, true];
  ["INFO", format ["Environment channel ID created on channel %1", _channelID]] call WS_fnc_LogMsg;
};

// Check if player is already in the env channel (if not, add them)
_channelInfo = radioChannelInfo _channelID;
if (!(player in _channelInfo#3)) then {
  ["INFO", format ["Registering player %1 with env channel", player]] call WS_fnc_LogMsg;
  _channelID radioChannelAdd [player];
};

// Write message to env channel
driver vehicle player customChat [_channelID, _msg];