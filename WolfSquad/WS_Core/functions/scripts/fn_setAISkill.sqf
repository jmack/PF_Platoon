/*
  Author: wlan0

  Description:
    Sets an AI's skills based on a combination of "role" and "proficiency". Role sets the general shape of a units skills,
    and Proficiency adjusts that shape to generally fall within certain skill ranges. The general skill ranges are:
      UNTRAINED  - 0.05 <= X <  0.25
      RECRUIT    - 0.25 <= X <= 0.45
      REGULAR    - 0.45 <  X <= 0.65
      VETERAN    - 0.65 <  X <= 0.85
      LEGEND     - 0.85 <  X <= 0.95
    (AI skill is never allowed to be below 0.05 or above 0.95)
    Note that the final skill spread can fall below the set proficiency. This is because the proficiency value is the expected baseline of the units HIGHEST skill.
    there can be multiple subskills that its worse at, which fall below the set proficiency.

  Parameters:
    _unit         // OBJECT - the unit to apply the skill changes to
    _role         // STRING - the Role to apply the skill shape of (predefined in this script)
    _proficiency  // STRING - the Proficiency level to apply to the base skill shape (RECRUIT, REGULAR, VETERAN, LEGEND). No proficiency set will default to UNTRAINED.
  
  Returns:
    VOID

  Examples:
    [this, "SOLDIER", "TRAINED"] call WS_fnc_EnvMsg;
*/

if (!isServer) exitWith { };

params [
  ["_unit", objNull, [objNull]],
  ["_role", "", [""]],
  ["_proficiency", "UNTRAINED", [""]]
];

if (isNull _unit || _role == "") exitWith {
  ["ERROR", format [
    "WS_fnc_SetAISkill called with invalid params! [%1, %2, %3]",
    _unit,
    _role,
    _proficiency
  ]] call WS_fnc_LogMsg;
  false;
};

// Skill shape based on role (normalized based on 0-10, if the unit was a LEGEND)
private _skillShapes = createHashMapFromArray [
  [
    "SOLDIER",
    [
      ["aimingShake",     9 ],
      ["aimingSpeed",     9 ],
      ["aimingAccuracy",  9 ],
      ["commanding",      5 ],
      ["courage",         8 ],
      ["general",         8 ],
      ["reloadSpeed",     8 ],
      ["spotDistance",    7 ],
      ["spotTime",        7 ]
    ]
  ],
  [
    "SCOUT",
    [
      ["aimingShake",     9 ],
      ["aimingSpeed",     9 ],
      ["aimingAccuracy",  9 ],
      ["commanding",      5 ],
      ["courage",         8 ],
      ["general",         8 ],
      ["reloadSpeed",     7 ],
      ["spotDistance",    10],
      ["spotTime",        10]
    ]
  ],
  [
    "SHOCK",
    [
      ["aimingShake",     8 ],
      ["aimingSpeed",     10],
      ["aimingAccuracy",  8 ],
      ["commanding",      4 ],
      ["courage",         10],
      ["general",         8 ],
      ["reloadSpeed",     8 ],
      ["spotDistance",    6 ],
      ["spotTime",        6 ]
    ]
  ],
  [
    "MARKSMAN",
    [
      ["aimingShake",     10],
      ["aimingSpeed",     7 ],
      ["aimingAccuracy",  10],
      ["commanding",      4 ],
      ["courage",         7 ],
      ["general",         8 ],
      ["reloadSpeed",     7 ],
      ["spotDistance",    10],
      ["spotTime",        9 ]
    ]
  ],
  [
    "OPERATIVE",
    [
      ["aimingShake",     10],
      ["aimingSpeed",     10],
      ["aimingAccuracy",  9 ],
      ["commanding",      6 ],
      ["courage",         9 ],
      ["general",         9 ],
      ["reloadSpeed",     9 ],
      ["spotDistance",    8 ],
      ["spotTime",        9 ]
    ]
  ],
  [
    "OFFICER",
    [
      ["aimingShake",     8 ],
      ["aimingSpeed",     8 ],
      ["aimingAccuracy",  8 ],
      ["commanding",      10],
      ["courage",         9 ],
      ["general",         9 ],
      ["reloadSpeed",     7 ],
      ["spotDistance",    7 ],
      ["spotTime",        7 ]
    ]
  ],
  [
    "CREW",
    [
      ["aimingShake",     7 ],
      ["aimingSpeed",     8 ],
      ["aimingAccuracy",  7 ],
      ["commanding",      5 ],
      ["courage",         5 ],
      ["general",         6 ],
      ["reloadSpeed",     6 ],
      ["spotDistance",    5 ],
      ["spotTime",        5 ]
    ]
  ],
  [
    "CIVILIAN", // LEGEND civilian, lol
    [
      ["aimingShake",     6 ],
      ["aimingSpeed",     7 ],
      ["aimingAccuracy",  7 ],
      ["commanding",      3 ],
      ["courage",         3 ],
      ["general",         4 ],
      ["reloadSpeed",     8 ],
      ["spotDistance",    7 ],
      ["spotTime",        7 ]
    ]
  ]
];

// Skill multiplier based on proficiency
private _skillMods = createHashMapFromArray [
  ["UNTRAINED", 0.15],
  ["RECRUIT",   0.35],
  ["REGULAR",   0.60],
  ["VETERAN",   0.80],
  ["LEGEND",    0.95]
];

// Check what the user supplied is actually in our maps
if (!(_role in _skillShapes)) exitWith {
  ["ERROR", format [
    "WS_fnc_SetAISkill called with invalid role of %1!",
    _role
  ]] call WS_fnc_LogMsg;
  false;
};

if (!(_proficiency in _skillMods)) exitWith {
  ["ERROR", format [
    "WS_fnc_SetAISkill called with invalid proficiency of %1!",
    _proficiency
  ]] call WS_fnc_LogMsg;
  false;
};

// Create the final values
private _skillShape = _skillShapes#_role;
private _skillMod = _skillMods#_proficiency;
private _finalSkills = createHashMap;

{
  // shape is [skillName, skillValue]
  _finalSkills set [_x#0, (_x#1) * _skillMod];
} forEach _skillShape;

// Apply the skills
{
  _unit setSkill [_x, _y];
} forEach _finalSkills;

// Done
true;
