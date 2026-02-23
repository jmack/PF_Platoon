/*
  Author: wlan0

  Description:
    Initializes a vehicle pad with a given list of vehicles. This includes deploy, store
    repair, rearm, and refuel actions, as well as an optional condition to disable the pad


  Parameters:
    _marker         // OBJECT - the marker used as the center of the pad
    _console        // OBJECT - the control console of the pad (usually the object the init is run on)
    _vehicles[]     // ARRAY - an array containing the vehicles in the pad, in the following shape
      STRING            - the name to display to the user
      STRING            - the classname of the vehicle to deploy
      [STRING, NUMBER]  - customizations to apply to the vehicle after deployment
    _condition      // STRING (optional) - a custom condition. when false, the console will be disabled
    _conditionText  // STRING (optional) - custom text to show when the console is disabled

  Returns:
    VOID

  Examples:
    [
      myMarker,
      myConsole,
      [
        [
          "UH-144S Falcon",
          "OPTRE_UNSC_UH_144S_Falcon_DAP",
          ["Black", 1]
        ]
      ],
      "enableConsole",
      "Console is Disabled."
    ] call WS_fnc_InitVehiclePad;
*/

params [
  ["_marker", objNull, [objNull]],
  ["_console", objNull, [objNull]],
  ["_vehicles", [], [[]]],
  ["_condition", "", [""]],
  ["_conditionText", "", [""]]
];

[
  "INFO",
  format [
    "Initializing Vehicle Pad for %1 / %2",
    _marker,
    _console
  ]
] call WS_fnc_LogMsg;

// a simple array of all classes in the pad used for nearestObject calls
_vehicleClasses = [];
{
  _vehicleClasses pushBack (_x#1);
} forEach _vehicles;

// a stringified version of _vehicleClasses used in action conditions
_vehicleString = format [
  "[""%1""]",
  _vehicleClasses joinString """, """
];

["DEBUG", format ["classes: %1", _vehicleClasses]] call WS_fnc_LogMsg;
["DEBUG", format ["string: %1", _vehicleString]] call WS_fnc_LogMsg;

// Custom Condition Action
_customCondition = "true";
if (_condition != "") then {
  _customCondition = _condition;
  _console addAction [
    format [
    "<t color='#66ffffff'>%1</t>",
    _conditionText
    ],
    {},
    [],
    10,
    true,
    true,
    "",
    format ["!(%1)", _customCondition],
    5
  ];
};

["DEBUG", format [
  "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
  _customCondition,
  _marker,
  _vehicleString
]] call WS_fnc_LogMsg;


// Store Vehicle
_console addAction [
  "Store vehicle on pad",
  {
    params ["", "", "", "_args"];
    _marker = _args#0;
    _classes = _args#1;

    _list = nearestObjects [
    _marker,
    _classes,
    10
    ];
    { deleteVehicle _x; } forEach _list;
  },
  [_marker, _vehicleClasses],
  9,
  true,
  true,
  "",
  format [
    "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  5
];


// Deploy Vehicle
{
_console addAction [
  format ["Deploy %1 from storage", _x#0],
  {
    params ["", "", "", "_args"];
    _marker = _args#0;
    _vehClass = _args#1#1;
    _customization = _args#1#2;

    _vehicle = createVehicle [
      _vehClass,
      getPosATL _marker,
      [],
      0,
      "CAN_COLLIDE"
    ];
    _vehicle setVariable ["BIS_enableRandomization", false];
    _vehicle setDir getDir _marker;

    if (count _customization > 0) then {
      [_vehicle, _customization, true] call BIS_fnc_initVehicle;
    };
  },
  [_marker, _x],
  8,
  true,
  true,
  "",
  format [
    "(%1) && count (nearestObjects [%2, [""LandVehicle"", ""Helicopter""], 10]) == 0",
    _customCondition,
    _marker
  ],
  5
];
} forEach _vehicles;


// Msg for being unable to deploy when pad is occupied
_console addAction [
  "<t color='#66ffffff'>Pad is occupied, cannot deploy vehicle</t>",
  {},
  [],
  8,
  true,
  true,
  "",
  format [
    "(%1) && (count (nearestObjects [%2, [""LandVehicle"", ""Helicopter""], 10]) > 0) && (count (nearestObjects [%2, %3, 10]) == 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  5
];


// Maintenance actions
_console addaction[
  "Refuel",
  {
    params ["", "", "", "_args"];

    _veh = nearestObjects [_args#0, _args#1, 10]#0;

    [
      "Refueling",
      (1 - (fuel _veh)) * 30,
      { !isEngineOn _veh; },
      {
        _veh = _this#0#0;
        _veh setFuel 1;
        hint "Refueling Complete";
      },
      { hint "Refueling Aborted"; },
      [_veh]
    ] call CBA_fnc_progressBar;
  },
  [_marker, _vehicleClasses],
  7,
  true,
  true,
  "",
  format [
    "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  5
];


_console addaction[
  "Repair",
  {
    params ["", "", "", "_args"];

    _veh = nearestObjects [_args#0, _args#1, 10]#0;

    // Get all vehicle hitpoints ("glass", "engine", etc)
    _cfgHitPoints = configFile >> "CfgVehicles" >> (typeOf _veh) >> "HitPoints";
    _hpc = [];
    _totalDamage = 0;

    // Calculate total damage to set repair time
    for "_i" from 0 to ((count _cfgHitPoints) - 1) do {
    _hp = configName (_cfgHitPoints select _i);
    _hpDamage = (_veh getHitPointDamage _hp);
    if (_hpDamage > 0) then {
      _hpc pushback _hp;
      _totalDamage = _totalDamage + _hpDamage;
    };
    };

    ["DEBUG", format ["damage: %1 | hpc: %2", _totalDamage, _hpc]] call WS_fnc_LogMsg;

    [
      "Repairing",
      (_totalDamage / (count _hpc)) * 30,
      { !isEngineOn _veh; },
      {
        // Repair all vehicle hitpoints
        _veh = _this#0#0;
        _hpc = _this#0#1;

        { _veh setHitPointDamage [_x, 0]; } forEach _hpc;

        _veh setDamage 0;
        hint "Repairing Complete";
      },
      { hint "Repairing Aborted"; },
      [_veh, _hpc]
    ] call CBA_fnc_progressBar;
  },
  [_marker, _vehicleClasses],
  6,
  true,
  true,
  "",
  format [
    "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  5
];


_console addaction[
  "Rearm",
  {
    params ["", "", "", "_args"];

    _veh = nearestObjects [_args#0, _args#1, 10]#0;
    _magCounts = [0, 0];
    _pylons = getAllPylonsInfo _veh;

    // Calculate how much ammo is full to set rearm time
    {
      _maxAmmo = getNumber (configFile >> "CfgMagazines" >> _x#3 >> "count");
      _magCounts set [0, (_magCounts#0) + (_x#4)]; // current ammo
      _magCounts set [1, (_magCounts#1) + (_maxAmmo)]; // max ammo
    } forEach _pylons;

    [
      "Rearming",
      (1 - ((_magCounts#0)/(_magCounts#1))) * 30,
      { !isEngineOn _veh; },
      {
        _veh = _this#0#0;
        _veh setVehicleAmmodef 1;
        _veh setVehicleAmmo 1;
        hint "Rearming Complete";
      },
      { hint "Rearming Aborted"; },
      [_veh]
    ] call CBA_fnc_progressBar;
  },
  [_marker, _vehicleClasses],
  5,
  true,
  true,
  "",
  format [
    "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  5
];


_console addaction[
  "Change Pylons",
  {
    params ["", "", "", "_args"];

    _veh = nearestObjects [_args#0, _args#1, 10]#0;
    _veh call ace_pylons_fnc_showDialog;
  },
  [_marker, _vehicleClasses],
  4,
  true,
  true,
  "",
  format [
    "(%1) && ((count (nearestObjects [%2, %3, 10])) > 0)",
    _customCondition,
    _marker,
    _vehicleString
  ],
  4
];
