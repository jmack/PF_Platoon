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

_actionMap = createHashMapFromArray [
  ["search",      ["[Any]",         "",               "#ffffff",  "WS_Core\icons\hold_actions\search"]],
  ["interact",    ["[Any]",         "",               "#ffffff",  "WS_Core\icons\hold_actions\interact"]],
  ["hacking",     ["[Hacking]",     "isHacker",       "#39b300",  "WS_Core\icons\hold_actions\hacking"]],
  ["engineering", ["[Engineering]", "isEngineer",     "#3543db",  "WS_Core\icons\hold_actions\engineering"]],
  ["medicine",    ["[Medicine]",    "isMedic",        "#ba1414",  "WS_Core\icons\hold_actions\medicine"]],
  ["demolitions", ["[Demolitions]", "isDemolitions",  "#e39309",  "WS_Core\icons\hold_actions\demolitions"]]
];

_mappedAction = _actionMap get "interact";

if (_holdType in _actionMap) then {
  _mappedAction = _actionMap get _holdType;
};

_actionName = _mappedAction # 0;
_requiredTrait = _mappedAction # 1;
_actionColor = _mappedAction # 2;
_actionIcon = _mappedAction # 3;

// The first "true" action shown when user has the required trait (or when no trait is required)
[
  _obj,                                                                           // Object the action is attached to
  format ["use <t color='%2'>%1</t>: %3", _actionName, _actionColor, _holdText],  // Title of the action
  format ["%1.paa", _actionIcon],                                                 // Idle icon shown on screen
  format ["%1.paa", _actionIcon],                                                 // Progress icon shown on screen
  format ["_this distance _target < 5 && %1 && (""%2"" == """" || player getVariable [""%2"", false])", _holdCondition, _requiredTrait], // Condition for the action to be shown
  "_caller distance _target < 5",                                                 // Condition for the action to progress
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

// The second "disabled" action shown when the user does not have the required trait (will not progress)
if (_requiredTrait != "") then {
  [
    _obj,                                                                           // Object the action is attached to
    format ["use <t color='%2'>%1: %3</t>", _actionName, "#99ffffff", _holdText], // Title of the action
    format ["%1_disabled.paa", _actionIcon],                                        // Idle icon shown on screen
    format ["%1_disabled.paa", _actionIcon],                                        // Progress icon shown on screen
    format ["_this distance _target < 5 && %1 && ""%2"" != """" && !(player getVariable [""%2"", false])", _holdCondition, _requiredTrait], // Condition for the action to be shown
    "false",                                                                        // Condition for the action to progress
    {},                                                                             // Code executed when action starts
    {},                                                                             // Code executed on every progress tick
    {},                                                                             // Code executed on completion
    {},                                                                             // Code executed on interrupted
    [],                                                                             // Arguments passed to the scripts as _this select 3
    10000,                                                                          // Action duration in seconds
    0,                                                                              // Priority
    _holdRemoveOnComplete,                                                          // Remove on completion
    false                                                                           // Show in unconscious state
  ] call BIS_fnc_holdActionAdd;
};