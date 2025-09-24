/*
  Authors:
    Big_Wilk (Article 2 Studios)
    Modified by: Ansible2 // Cipher (DMNS)
    Further modified by: wlan0 (Wolf Squad)

  Description:
    Handles the HEV Launch Countdown, as well as gathering the occupied pods to launch and kicking the actual HEV launch off

  Parameters:
    _array    // ARRAY  - the launch parameters set by the console when the user hit the launch button
    _console  // OBJECT - the object that the open action is attached to (and by extension, usually has the control vars set to it)

  Returns:
    NOTHING
*/

_array = _this select 0;
_console = _this select 1;

// DMNS_PodsLaunchIn states:
//  -2: cooldown is in progress
//  -1: idle (or canceled)
//   0: launching
// > 0: counting down to launch

 // Cool Down in Progress: Ignore input
if ((_console getVariable ["DMNS_PodsLaunchIn", -1]) == -2) exitWith {
  playSound3d [
    "a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss",
    _console,
    false,
    getPos _console,
    0.5,
    1,
    300
  ];
};

// Count down in progress: Ignore input (unless user cancels)
if ((_console getVariable ["DMNS_PodsLaunchIn", -1]) > -1) exitWith {
  playSound3d [
    "a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss",
    _console,
    false,
    getPos _console,
    0.5,
    1,
    300
  ];
};

// Not in cooldown or already counting down: start 30 second countdown
_console setVariable ["DMNS_PodsLaunchIn", 30, true];

While {(_console getVariable ["DMNS_PodsLaunchIn", -1]) > 0} do {
  _number = _console getVariable ["DMNS_PodsLaunchIn", -1];
  _console setVariable ["DMNS_PodsLaunchIn", (_number-1), true];
  playSound3d [
    "a3\missions_f_beta\data\sounds\firing_drills\timer.wss",
    _console,
    false,
    getPos _console,
    0.5,
    1,
    300
  ];
  sleep 1;
};

// If we now hit -1, it means we canceled while the countdown was going and should abort
if ((_console getVariable ["DMNS_PodsLaunchIn", -1]) == -1) exitWith {
  playSound3d [
    "a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss",
    _console,
    false,
    getPos _console,
    0.5,
    1,
    300
  ];
};

// Otherwise if we made it all the way through the countdown and hit 0, kick off the actual launch process!
if ((_console getVariable ["DMNS_PodsLaunchIn",-1]) == 0) then {

  // Close and lock every HEV
  {
    [_x, true] remoteExec ["lock", _X, false];
    _x animate ["door_translation_a",0];
    _x animate ["door_translation_b",0];
    _x animate ["door_translation_c",0];
    _x animate ["door_translation_d",0];
    _x animate ["door_translation_e",0];
    _x animate ["door_translation_f",0];
  } forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);
  sleep 4;

  // Get a list of all occupied pods
  _units = [];

  {
    _gunner = gunner _x;
    if !(isNull _gunner AND !alive _gunner) then {
      _units pushBack _gunner;

      if (isPlayer _gunner) then {
        // show loading screen to any player in linked pods
        [999,["OPTRE_LoadScreen", "PLAIN"]] remoteExec ["cutRsc", _gunner, false];
      };
    };
  } forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);
  sleep 2;

  // Move all units that will be launching out of the pods so cooldown can begin
  {
    [
      _x,
      [10,-10,10000]
    ] remoteExec ["setPos", _x, false];
  } forEach _units;
  sleep .5;

  // Kick off the HEV launch!
  if (count _units > 0) then {
    _array set [1, _units];
    ["DEBUG", format ["Calling WS_fnc_LaunchHEVs with array of %1", _array]] call WS_fnc_LogMsg;
    _array spawn WS_fnc_LaunchHEVs;

    // Mark the console as in cooldown mode
    _console setVariable ["DMNS_PodsLaunchIn", -2, true];
    sleep 90; // 30 seconds launch + 60 seconds cooldown
  };

  playSound3d [
    "a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss",
    _console,
    false,
    getPos _console,
    0.5,
    1,
    300
  ];

  // Unlock and open pods
  {
    [_x, false] remoteExec ["lock", _X, false];
    _x animate ["door_translation_a",1];
    _x animate ["door_translation_b",1];
    _x animate ["door_translation_c",1];
    _x animate ["door_translation_d",1];
    _x animate ["door_translation_e",1];
    _x animate ["door_translation_f",1];
  } forEach (_console getVariable ["DMNS_PodsLinkedToConsole",[]]);

  // Set console back to idle (ready) mode
  _console setVariable ["DMNS_PodsLaunchIn", -1, true];
};
