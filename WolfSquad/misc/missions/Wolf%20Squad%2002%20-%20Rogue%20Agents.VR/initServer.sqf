// This will go away once this is a real fnc
waitUntil { !isNil "WS_fnc_LogMsg" };
sleep 2;



["INFO", "initializing WS_fnc_InitHEVs"] call WS_fnc_LogMsg;
WS_fnc_InitHEVs = {

  if (!params [
    ["_matrix", createHashMap, [createHashMap]]
  ]) exitWith { false };

  // All setup work happens on the server
  if (isServer) then {
    /**
     *  Create our helper methods for countdown syncing and lights/alarms
     */
    // synchronizes a parent panel countdown (the one actually running the drop) with multiple
    // child panels (which are not) so that any of them can cancel
    WS_fnc_SyncCountdowns = {
      if (!params [
        ["_parent", objNull, [objNull]],
        ["_children", [], [[]]]
      ]) exitWith { 
        ["ERROR", format ["Bad params were passed to WS_fnc_SyncCountdown! _parent: %1, _children: %2", _parent, _children]] call WS_fnc_LogMsg;
        false
      };
    };
    publicVariable "WS_fnc_SyncCountdowns";

    // controls alarm lights in a bay when drops are counting down
    WS_fnc_EnableHEVAlarms = {
      if (!params [
        ["_bayName", "", [""]]
      ]) exitWith { 
        ["ERROR", format ["Bad params were passed to WS_fnc_EnableHEVAlarms! _bayName: %1", _bayName]] call WS_fnc_LogMsg;
        false
      };

      _bay = (WS_HEV_Map get "bays") get _bayName;
      _rcName = _bay get "rcname";
      _dropLights = _bay get "lights";
      _roomLights = [_rcName, "lights"] call WS_fnc_RC_GetElems;

      ["DEBUG", format ["entered WS_fnc_EnableHEVAlarms. bayName: %1, rcName: %2", _bayName, _rcName]] call WS_fnc_LogMsg;

      // turn bay lights off
      [_rcName, "lights", [true]] call WS_fnc_RC_updateElem;

      // blink drop lights and play sounds
      [(_bay get "owner"), _rcName, _dropLights, _roomLights] spawn {
        params ["_panel", "_rcName", "_dropLights", "_roomLights"];
        ["DEBUG", format ["inside spawn. _panel: %1, _rcName: %2, _dropLights: %3, _roomLights: %4", _panel, _rcName, _dropLights, _roomLights]] call WS_fnc_LogMsg;

        while { ((_panel getVariable "DMNS_PodsLaunchIn") > -1) } do {
          ["DEBUG", format ["DMNS_PodsLaunchIn: %1", _panel getVariable "DMNS_PodsLaunchIn"]] call WS_fnc_LogMsg;
          if (((_panel getVariable "DMNS_PodsLaunchIn") % 2) == 0) then {
            {
              _x hideObjectGlobal false;
              playSound3D [
                "a3\missions_f_beta\data\sounds\firing_drills\drill_start.wss",
                _x,
                true,
                getPosASL _x,
                1,
                0.75
              ];
            } forEach _dropLights;
          } else {
            {
              _x hideObjectGlobal true;
            } forEach _dropLights;
          };
          sleep 1;
        };
        ["DEBUG", "exited while"] call WS_fnc_LogMsg;
        // once outside the while, hide the bay lights again and revert lights
        if (!(_roomLights#0 getVariable "WS_Light_LastMode")) then {
          [_rcName, "lights", [false]] call WS_fnc_RC_updateElem;
        };
        { _x hideObjectGlobal true; } forEach _dropLights;
      };
    };
    publicVariable "WS_fnc_EnableHEVAlarms";

    /**
     *  Transform our input matrix into something more useful to us
     */
    _newMatrix = createHashMapFromArray [["panels", createHashMap], ["bays", createHashMap]];

    {
      _bayName = _x;
      _bay = _matrix get _x;

      // Add each bay to the new matrix
      (_newMatrix get "bays") set [_x, _bay];

      // Add the panels that can access the bay into our panel index
      {
        _panel = _x;
        _panelName = str _x;
        _panels = _newMatrix get "panels";

        if (_panelName in _panels) then {
          // panel index already exists. append the new bay.
          _panelBays = _panels get _panelName;
          _panelBays pushBack _bayName;
          _panels set [_panelName, _panelBays]
        } else {
          // first entry
          _panels set [_panelName, [_bayName]];
        }

      } forEach ((_matrix get _x) get "panels");
    } forEach (keys _matrix);

    // Store it
    missionNamespace setVariable ["WS_HEV_Map", _newMatrix, true];

    /**
     *  Setup for all panels that have access to each bay
     */
    {
      _bayName = _x;
      _bay = ((WS_HEV_Map get "bays") get _x);

      // Assign pods to the owner
      (_bay get "owner") setVariable ["DMNS_PodsLinkedToConsole", (_bay get "hevs"), true];
      
      // Actions for launching single bay (owner and remotes)
      {
        _x addAction [
          format ["Launch HEVs in Bay %1", _bayName],
          {
            params ["","","","_args"];
            _args#0 call WS_fnc_OpenHEVLaunchControls;
          },
          [_bay get "owner"],
          2,
          true,
          true,
          "",
          "true",
          3
        ];
      } forEach (_bay get "panels");
    } forEach (WS_HEV_Map get "bays");

    /**
     *  Setup for panels that have access to more than one bay
     */
    // Add action
    {
      _bayNames = ((WS_HEV_Map get "panels") get _x);
      ["DEBUG", format ["checking for panel %1", _x]] call WS_fnc_LogMsg;
      if (count _bayNames < 2) then { continue; };

      _panel = missionNamespace getVariable _x;

      ["DEBUG", format ["got panel %1 via name %2", _panel, _x]] call WS_fnc_LogMsg;

      _allHEVs = [];
      _shallowBayNames = [];
      {
        _shallowBayNames pushBack _x;
        ["DEBUG", format ["_shallowBayNames is now = %1", _shallowBayNames]] call WS_fnc_LogMsg;
        _allHEVs = _allHEVs + (((WS_HEV_Map get "bays") get _x) get "hevs");
        ["DEBUG", format ["_allHEVs is now %1", _allHEVs]] call WS_fnc_LogMsg;

      } forEach (_bayNames);
      ["DEBUG", format ["final _allHEVs = %1", _allHEVs]] call WS_fnc_LogMsg;
      ["DEBUG", format ["final _shallowBayNames = %1", _shallowBayNames]] call WS_fnc_LogMsg;
      _panel setVariable ["DMNS_PodsLinkedToConsole", _allHEVs, true];

      _lastBay = _shallowBayNames#((count _shallowBayNames) - 1); // pop last bay
      ["DEBUG", format ["_lastBay = %1", _lastBay]] call WS_fnc_LogMsg;
      _shallowBayNames deleteAt (count _shallowBayNames - 1);
      ["DEBUG", format ["_shallowBayNames is now %1", _shallowBayNames]] call WS_fnc_LogMsg;

      _panel addAction [
        format [
          "Launch HEVs in Bays %1 and %2",
          _shallowBayNames joinString ", ",
          _lastBay
        ],
        {
          params ["", "", "", "_args"];
          _args#0 call WS_fnc_OpenHEVLaunchControls;
        },
        [_panel],
        0,
        true,
        true,
        "",
        "true",
        3
      ];

    } forEach (WS_HEV_Map get "panels");
  };

  // event handlers needed to be added to each client
  if (hasInterface) then {
    /**
     *  Add server event handlers for bay warnings / alarms and countdowns
     */
    ["WS_HEVCountdownStarted", {
      params ["_panel"];
      ["DEBUG", format ["WS_HEVCountdownStarted tripped by %1", _panel]] call WS_fnc_LogMsg;

      _panelBays = ((WS_HEV_Map get "panels") get (str _panel));
      // if panel can only access 1 bay, it must be the owner of that bay
      if (count _panelBays == 1) then {
        // single bay launch
        [_panelBays#0] call WS_fnc_EnableHEVAlarms;
      } else {
        // multi-bay launch
        {
          // todo: sync countdowns
          [_x] call WS_fnc_EnableHEVAlarms;
        } forEach _panelBays;
      };
    }] call CBA_fnc_addEventHandler;

    ["WS_HEVCountdownCanceled", {
      params ["_panel"];
      ["DEBUG", format ["WS_HEVCountdownCanceled: %1", _panel]] call WS_fnc_LogMsg;

      // check if we're a bay owner
        // if not, cancel all connected bays
          // set all connected bays to -1
          // call fnc to disable lights and sirens for all connected bays
        // if we are, we may be in single or multi launch
          // check all connected panels to see if any are running a countdown
            // if they are, we're a multi launch
              // call fnc to cancel connected bay countdown and all their connected bays countdown
              // call fnc to cancel lights and sirens for all parent bay connected bays (including us)
            // if they aren't, were a single launch
              // call fnc to cancel own lights and sirens
    }] call CBA_fnc_addEventHandler
  };
};
["INFO", "WS_fnc_InitHEVs initialized"] call WS_fnc_LogMsg;



// This will go away once this is a real fnc
publicVariable "WS_fnc_InitHEVs";