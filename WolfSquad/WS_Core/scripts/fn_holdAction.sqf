/*
  Author: wlan0

  Description:
    Adds a hold action to an object that requires holding the space bar

  Parameters:
    _obj                  // OBJECT - the object that the action should be applied to (usually '_this' if being called from the init of an object)
    _holdType             // STRING - the class of action. Should be something like "hack" or "search". This will autopopulate the color and icon
    _holdText             // STRING - the text to display after the action type, i.e. "Hack: [_holdText]"
    _holdCondition        // STRING - a conditional for displaying the action (if one is required)
    _holdAction           // CODE   - code to execute when the hold is completed
    _holdDuration         // NUMBER - number of seconds of holding it should take to complete
    _holdRemoveOnComplete // BOOL   - should the hold action be hidden after it's completed, or should it be completable multiple times

  Returns:
    BOOLEAN

  Examples:
    [
      _this,
      "hack",
      "Unlock the Door",
      "canTheDoorBeUnlocked",
      {
        hint "the door was unlocked";
      },
      15,
      true
    ] call WS_fnc_holdAction;
*/

if (!params [
  ["_obj", objNull, [objNull]],
  ["_holdType", "", [""]],
  ["_holdText", "", [""]],
  ["_holdCondition", "true", [""]],
  ["_holdAction", {}, [{}]],
  ["_holdDuration", 0, [0]],
  ["_holdRemoveOnComplete", true, [true]]
]) exitWith { false };

_actionMap = [
  ["search",      "[Any]",          "#ffffff",  "a3\ui_f\data\igui\cfg\holdactions\holdaction_search_ca.paa"],
  ["hack",        "[Hacking]",      "#39b300",  "a3\ui_f\data\igui\cfg\holdactions\holdaction_hack_ca.paa"], // legacy, to be removed later
  ["hacking",     "[Hacking]",      "#39b300",  "a3\ui_f\data\igui\cfg\holdactions\holdaction_hack_ca.paa"],
  ["engineering", "[Engineering]",  "#3543db",  "a3\ui_f\data\igui\cfg\actions\repair_ca.paa"],
  ["medicine",    "[Medicine]",     "#ba1414",  "a3\ui_f\data\igui\cfg\holdactions\holdaction_revivemedic_ca.paa"],
  ["demolitions", "[Demolitions]",  "#e39309",  "a3\ui_f_oldman\data\igui\cfg\holdactions\destroy_ca.paa"]
];

_actionName = "[Any]";
_actionColor = "#ffffff";
_actionIcon = "a3\ui_f\data\igui\cfg\holdactions\holdaction_search_ca.paa";

{
  if (_x select 0 == _holdType) then {
    _actionName = _x select 1;
    _actionColor = _x select 2;
    _actionIcon = _x select 3;
  }
} forEach _actionMap;

[
  _obj,                                                                           // Object the action is attached to
  format ["use <t color='%2'>%1</t>: %3", _actionName, _actionColor, _holdText],  // Title of the action
  _actionIcon,                                                                    // Idle icon shown on screen
  _actionIcon,                                                                    // Progress icon shown on screen
  format ["%1 && _this distance _target < 3", _holdCondition],                    // Condition for the action to be shown
  format ["%1 && _caller distance _target < 3", _holdCondition],                  // Condition for the action to progress
  {},                                                                             // Code executed when action starts
  {},                                                                             // Code executed on every progress tick
  _holdAction,                                                                    // Code executed on completion
  {},                                                                             // Code executed on interrupted
  [],                                                                             // Arguments passed to the scripts as _this select 3
  _holdDuration,                                                                  // Action duration in seconds
  0,                                                                              // Priority
  _holdRemoveOnComplete,                                                          // Remove on completion
  false                                                                           // Show in unconscious state
] call BIS_fnc_holdActionAdd;
