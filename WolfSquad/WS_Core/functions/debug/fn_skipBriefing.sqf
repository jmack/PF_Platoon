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

if (hasInterface) then {
  if (!isNumber (missionConfigFile >> "briefing")) exitWith {};
  if (getNumber (missionConfigFile >> "briefing") == 1) exitWith {};
  0 = [] spawn {
    waitUntil {
      if (getClientState == "BRIEFING READ") exitWith {true};
      if (!isNull findDisplay 53) exitWith {
        ctrlActivate (findDisplay 53 displayCtrl 1);
        findDisplay 53 closeDisplay 1;
        true
      };
      false
    };
  };
};