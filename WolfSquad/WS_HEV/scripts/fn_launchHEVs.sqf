/*
  Authors:
    Big_Wilk (Article 2 Studios)
    Modified by: Ansible2 // Cipher (DMNS)
    Further modified by: wlan0 (Wolf Squad)

  Description:
    Handles the launch process for HEVs after they've "cleared the bay"

  Parameters:
    0: _dropPosition <ARRAY> - The postition to initiate the drop, can be either 3D position [0,0,0] or 2D [0,0]
    1: _units <ARRAY> - The units to teleport to drop pods
    2: _shipDeployment <STRING> - How to drop the units: Options are "frigate", "corvette", "No Ship", and "No Ship Custom".
    3: _launchDelay <NUMBER> - How long for pods to hang in seconds. >30 is required for engine start sound effects.
    4: _randomXYVelocity <NUMBER> - The degree to which pods will randomly spread. At least 2 is forced due to a physics crash being possible if pods hit each other enough on the ground
    5: _launchSpeed <NUMBER> - Downward velocity of pods. Should be a negative number. Recommend -1 (the more speed the harder the script will have to work and it will be more likely for issues to appear)
    6: _startHeight <NUMBER> - At what altitude should the pods drop from? Will be used in conjunction with _dropPosition or not at all if the 3D height exceeds altitiude
    7: _hevDropArmtmosphereStartHeight <NUMBER> - The altitude start of entry effects.
    8: _hevDropArmtmosphereEndHeight <NUMBER> - The altitude end of entry effects.
    9: _chuteDeployHeight <NUMBER> - The altitude to deploy chutes at.
    10: _chuteDetachHeight <NUMBER> - The altitude to detach chutes at.
    11: _deleteShip <NUMBER> - Should the ship the units are dropped from be deleted? (not req if used with both "No Ship" deployments)
    12: _deleteChutesOnDetach <BOOL> - Should chutes be deleted after detaching from HEV?
    13: _deleteHEVsAfter <BOOL> - How long to wait to delete HEVs in seconds
    14: _manualDrop <BOOL> - Was the drop initiated manually? This allows certain parameters to be changed. By manual, it means by either script or the Module that allows custom attributes for the drop

  Returns:
    BOOLEAN - state of launch completion

  Notes:
    Multiplayer - Should be run by one machine only, typically server.
*/

if (!isServer) exitWith {false};

params	[
  ["_dropPosition",[0,0,0],[[]]],
  ["_units",[],[[]]],
  ["_shipDeployment",0,[0]],
  ["_launchDelay",30,[123]],
  ["_randomXYVelocity",2,[123]],
  ["_launchSpeed",-1,[123]],
  ["_startHeight",5000,[123]],
  ["_hevDropArmtmosphereStartHeight",3000,[123]],
  ["_hevDropArmtmosphereEndHeight",2000,[123]],
  ["_chuteDeployHeight",1000,[123]],
  ["_chuteDetachHeight",500,[123]],
  ["_deleteShip",true,[true]],
  ["_deleteChutesOnDetach",true,[true]],
  ["_deleteHEVsAfter",600,[1]],
  ["_manualDrop",false,[true]]
];

["DEBUG", format ["_dropPosition: %1", _dropPosition]] call WS_fnc_LogMsg;
["DEBUG", format ["_units: %1", _units]] call WS_fnc_LogMsg;
["DEBUG", format ["_shipDeployment: %1", _shipDeployment]] call WS_fnc_LogMsg;
["DEBUG", format ["_launchDelay: %1", _launchDelay]] call WS_fnc_LogMsg;
["DEBUG", format ["_randomXYVelocity: %1", _randomXYVelocity]] call WS_fnc_LogMsg;
["DEBUG", format ["_launchSpeed: %1", _launchSpeed]] call WS_fnc_LogMsg;
["DEBUG", format ["_startHeight: %1", _startHeight]] call WS_fnc_LogMsg;
["DEBUG", format ["_hevDropArmtmosphereStartHeight: %1", _hevDropArmtmosphereStartHeight]] call WS_fnc_LogMsg;
["DEBUG", format ["_hevDropArmtmosphereEndHeight: %1", _hevDropArmtmosphereEndHeight]] call WS_fnc_LogMsg;
["DEBUG", format ["_chuteDeployHeight: %1", _chuteDeployHeight]] call WS_fnc_LogMsg;
["DEBUG", format ["_chuteDetachHeight: %1", _chuteDetachHeight]] call WS_fnc_LogMsg;
["DEBUG", format ["_deleteShip: %1", _deleteShip]] call WS_fnc_LogMsg;
["DEBUG", format ["_deleteChutesOnDetach: %1", _deleteChutesOnDetach]] call WS_fnc_LogMsg;
["DEBUG", format ["_deleteHEVsAfter: %1", _deleteHEVsAfter]] call WS_fnc_LogMsg;
["DEBUG", format ["_manualDrop: %1", _manualDrop]] call WS_fnc_LogMsg;

// Ensure atleast someone is alive to drop
if ({alive _x} count _units < 1) exitWith {false};

//// Ensure parameters
// Force HEV dispersion
if (_randomXYVelocity < 2) then {_randomXYVelocity = 2};

// check if module or script was used and set proper launch delay if not
if !(_manualDrop) then {_launchDelay = 30};

if (!_manualDrop AND !_deleteChutesOnDetach) then {
  _deleteChutesOnDetach = true;
};

/* ----------------------------------------------------------------------------

  Spawn HEVs

---------------------------------------------------------------------------- */
private ["_allHEVs","_ship"];

// spawn HEVs and get their info for the drop. Also creates frigate or corvette
_allHEVs = call {
  _dropPosition = [(_dropPosition select 0), (_dropPosition select 1), _startHeight];

  if (_shipDeployment == 0) exitWith {
    ["INFO", "Spawning Razor corvette for HEV launch"] call WS_fnc_LogMsg;
    _ship = "WSD_Razor" createVehicle [0,0,0];
    _ship setVariable ["DMNS_shipParts",[_ship]];
    _ship setPosATL _dropPosition;
    _ship setVectorUp [0,0,1];

    private _return = [_ship,_units] call WS_fnc_SpawnRazorCorvette;

    _return
  };
  if (_shipDeployment == 1) exitWith {
    ["INFO", "Spawning Halberd destroyer for HEV launch"] call WS_fnc_LogMsg;
    _ship = "Halberd_Empty_Skybox_F" createVehicle [0,0,0];
    _ship setVariable ["DMNS_shipParts",[_ship]];
    _ship setPosATL _dropPosition;
    _ship setVectorUp [0,0,1];

    private _return = [_ship,_units] call DMNS_fnc_SpawnHEVsFrigate;

    _return
  };

  // no ship custom spawns units at requested drop zone instead of directly above their position
  if (_shipDeployment == 2) exitWith {
    // this is a dummy ship used to attach the HEVs to so that they do not fall before launch
    ["INFO", "Spawning dummy ship for HEV launch"] call WS_fnc_LogMsg;
    private _logicCenter = createCenter sideLogic;
    private _logicGroup = createGroup _logicCenter;
    _ship = _logicGroup createUnit ["Logic", [0,0,0], [], 0, "NONE"];
    _ship setVariable ["DMNS_shipParts",[_ship]];
    _ship setPosATL _dropPosition;

    private _return = [_units,_startHeight,_ship,true] call DMNS_fnc_SpawnHEVsNoFrigate;

    _return
  };

  if (true) exitWith {
    ["ERROR", "Unsupported entry for _shipDeployment parameter"] call WS_fnc_LogMsg;
    "Unsupported STRING entry for _shipDeployment parameter" call BIS_fnc_error;
    false
  };
};

// sort _allHEVs data from spawn script
private _hevArray = _allHEVs select 0;
private _hevArrayPlayer = _allHEVs select 1;
private _hevArrayAi = _allHEVs select 2;
private _listOfPlayers = _allHEVs select 3;
private _listOfAi = _allHEVs select 4;


/* ----------------------------------------------------------------------------

  Start Drop Count Down

---------------------------------------------------------------------------- */
// Prepare unique strings for events, this is so multiple drops can happen at once
private _HEVLaunchNumber = missionNamespace getVariable ["DMNS_HEVLaunchNumber",1];
missionNamespace setVariable ["DMNS_HEVLaunchNumber",_HEVLaunchNumber + 1];
private _HEVLaunchNumbertring = str _HEVLaunchNumber;
private _countDownDoneEventString = ["DMNS_HEV_countDownDoneEvent",_HEVLaunchNumbertring] joinString "_";


//// Determine need for player scripts or just AI

// if there are no players, just launch pods after delay
if (count _listOfPlayers < 1) then {

  [
    {
      [_this select 0] call CBA_fnc_serverEvent;
    },
    [_countDownDoneEventString],
    _launchDelay
  ] call CBA_fnc_waitAndExecute;

// if there are players:
} else {

  // call countdown function on all players who will drop
  [_launchDelay,"Launch In",_listOfPlayers,_countDownDoneEventString] remoteExecCall ["DMNS_fnc_CountDown",_listOfPlayers];

  {
    ["WS_HEVLaunchPreparing", [_x]] call CBA_fnc_globalEvent;

    [
      {!isNull (gunner (_this select 0))},
      {
        params [
          ["_hev",objNull,[objNull]],
          ["_launchIndex",0,[1]],
          ["_launchDelay",30,[1]]
        ];
        private _gunner = gunner _hev;

        if (_gunner in (call CBA_fnc_players)) then {
          [_launchIndex,_launchDelay,_gunner] remoteExecCall ["DMNS_fnc_PlayerHEVEffectsUpdate_PlayTones",_gunner];
        };
      },
      [_x,_forEachIndex,_launchDelay],
      300
    ] call CBA_fnc_waitUntilAndExecute;

  } forEach _hevArray;

};


/* ----------------------------------------------------------------------------

  Down Boaster Effects Event

---------------------------------------------------------------------------- */
// Server event fires when count down is complete
private _lastPod = _hevArray select ((count _hevArray) - 1);
[
  _countDownDoneEventString,
  {

    _thisArgs params [
      ["_hevArray",[],[[]]],
      ["_hevArrayPlayer",[],[[]]],
      ["_randomXYVelocity",1,[1]],
      ["_launchSpeed",1,[1]],
      ["_listOfPlayers",[],[[]]],
      ["_hevDropArmtmosphereStartHeight",3000,[1]],
      ["_ship",objNull,[objNull]],
      ["_deleteShip",true,[true]],
      ["_lastPod",objNull,[objNull]],
      ["_HEVLaunchNumber",1,[1]]
    ];

    {
      [
        {
          _this remoteExec ["DMNS_fnc_HEVBoosterDown",gunner (_this select 0)];
        },
        [_x,_hevArrayPlayer,_randomXYVelocity,_launchSpeed,_listOfPlayers,_hevDropArmtmosphereStartHeight,_ship,_deleteShip,_lastPod,_HEVLaunchNumber],
        _forEachIndex * 0.35
      ] call CBA_fnc_waitAndExecute;
    } forEach _hevArray;

    [_thisType, _thisId] call CBA_fnc_removeEventHandler;
  },
  [_hevArray,_hevArrayPlayer,_randomXYVelocity,_launchSpeed,_listOfPlayers,_hevDropArmtmosphereStartHeight,_ship,_deleteShip,_lastPod,_HEVLaunchNumber]
] call CBA_fnc_addEventHandlerArgs;


/* ----------------------------------------------------------------------------

  Atmosphere Entry Effects

---------------------------------------------------------------------------- */
[	// waitUntil first pod is at the _hevDropArmtmosphereStartHeight
  {getPosATLVisual (_this select 5) select 2 < (_this select 4)},
  {
    params [
      ["_hevArray",[],[[]]],
      ["_hevArrayPlayer",[],[[]]],
      ["_listOfPlayers",[],[[]]],
      ["_hevDropArmtmosphereEndHeight",2000,[1]],
      ["_hevDropArmtmosphereStartHeight",3000,[1]]
    ];

    _hevArray apply {
      private _hev = _x;
      [_hev,_hevArrayPlayer,_listOfPlayers,_hevDropArmtmosphereEndHeight,_hevDropArmtmosphereStartHeight] remoteExec ["DMNS_fnc_HEVAtmoEffects",gunner _hev];
    };
  },
  [_hevArray,_hevArrayPlayer,_listOfPlayers,_hevDropArmtmosphereEndHeight,_hevDropArmtmosphereStartHeight,_hevArray select 0],
  300
] call CBA_fnc_waitUntilAndExecute;


/* ----------------------------------------------------------------------------

  Chute Open

---------------------------------------------------------------------------- */
private _handleLandingEventString = ["DMNS_HEV_handleLanding",_HEVLaunchNumbertring] joinString "_";
private _chuteArrayVarString = ["DMNS_HEV_chuteArray",_HEVLaunchNumbertring] joinString "_";
private _chuteArrayEventString = _chuteArrayVarString + "_addToEvent";

[
  {
    private _hevArray = _this deleteAt 0;

    _hevArray apply {
      private _hev = _x;
      ([_hev] + _this) remoteExecCall ["DMNS_fnc_HEVChuteDeploy",gunner _hev];
    };
  },
  [_hevArray,_hevArrayPlayer,_chuteDeployHeight,_chuteDetachHeight,_deleteChutesOnDetach,_lastPod,_handleLandingEventString,_HEVLaunchNumbertring,_chuteArrayEventString],
  5
] call CBA_fnc_waitAndExecute;


// create event to add chutes from clients to server deletion pile. This is to make it easier to pass the chute without a function
private _chuteArrayEventID = [
  _chuteArrayEventString,
  {
    _this params [
      ["_chute",objNull,[objNull]]
    ];

    _thisArgs params [
      ["_chuteArrayVarString","",[""]]
    ];

    if (isNull _chute) exitWith {
      "null _chute passed to DMNS_addChuteToDeletion" call BIS_fnc_error;
    };

    private _chuteArray = missionNamespace getVariable [_chuteArrayVarString,[]];
    _chuteArray pushBack _chute;
    missionNamespace setVariable [_chuteArrayVarString,_chuteArray];
  },
  [_chuteArrayVarString]
] call CBA_fnc_addEventHandlerArgs;


// remove unique eventHandler when the _chuteArrayEventString global variable isNil
[
  {isNil (_this select 0)},
  {
    params [
      ["_chuteArrayEventString","",[""]],
      ["_chuteArrayEventID",0,[123]]
    ];

    [_chuteArrayEventString,_chuteArrayEventID] call CBA_fnc_removeEventHandler;
  },
  [_chuteArrayEventString,_chuteArrayEventID],
  300
] call CBA_fnc_waitUntilAndExecute;




/* ----------------------------------------------------------------------------

  Handle Landing

---------------------------------------------------------------------------- */
// Server event
[
  _handleLandingEventString,
  {
    _thisArgs params [
      ["_hevArray",[],[[]]],
      ["_chuteDeployHeight",1000,[123]]
    ];


    _hevArray apply {
      private _hev = _x;
      [_hev,_chuteDeployHeight] remoteExecCall ["DMNS_fnc_HEVHandleLanding",gunner _hev];
    };


    [_thisType, _thisId] call CBA_fnc_removeEventHandler;
  },
  [_hevArray,_chuteDeployHeight]
] call CBA_fnc_addEventHandlerArgs;

/* ----------------------------------------------------------------------------

  Clean Up

---------------------------------------------------------------------------- */


// delete clutter
private _deleteReadyString = ["DMNS_HEV_deleteReady",str _HEVLaunchNumber] joinString "_";
[
  // first condition: if any in _hevArray have Z velocity wait, the secondary condition variable is so that it is not deleted when pods are hanging waiting for the drop
  {(((_this select 0) findIf {((velocity _x) select 2) != 0}) isEqualTo -1) AND {missionNamespace getVariable [_this select 4,false]}},
  {
    params [
      ["_hevArray",[],[[]]],
      ["_chuteArrayVarString","",[""]],
      ["_deleteChutesOnDetach",false,[true]],
      ["_deleteHEVsAfter",600,[123]]
    ];

    if !(_deleteChutesOnDetach) then {
      [missionNamespace getVariable [_chuteArrayVarString,[]],false] spawn DMNS_fnc_CleanUp;
      missionNamespace setVariable [_chuteArrayVarString,nil];
    };

    [_hevArray,_deleteHEVsAfter] spawn DMNS_fnc_HEVCleanUp;
  },
  [_hevArray,_chuteArrayVarString,_deleteChutesOnDetach,_deleteHEVsAfter,_deleteReadyString],
  300
] call CBA_fnc_waitUntilAndExecute;


true
