/*
  Author: wlan0

  Description:
    Displays an action when near an object that displays some flavor text in a hint

  Parameters:
    _obj          // OBJECT - the object that the action should be applied to (usually '_this' if being called from the init of an object)
    _actionName   // STRING - the name of the action to display when near the object
    _actionHint   // STRING - the text to display in the hint when the action is triggered
  
  Returns:
    BOOLEAN

  Examples:
    [this, "Investigate Body", "Dead. Shot by a large caliber projectile weapon."] call PF_fnc_hintAction;
*/

if (!params [
  ["_obj", objNull, [objNull]],
  ["_actionName", "", [""]],
  ["_actionHint", "", [""]]
]) exitWith { false };

_obj addAction [
  _actionName,
  {
    params ["_object", "_caller", "_ID", "_actionHint"];
    hint _actionHint;
  },
  _actionHint,
  10,
  true,
  true,
  "",
  "isPlayer _this && { _this distance _target < 2 } && 
  { (side group _this) in (_target getVariable ['RscAttributeOwners', [west, east, resistance, civilian]]) }"
];
