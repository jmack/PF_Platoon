/*
 * Author: AACO.  Modified by Spartanjackwar.
 * Handles the pain after treating a patient.
 *
 * Arguments:
 * 0: The patient <OBJECT>
 * 1: The treatment classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

private _BIOFOAM_PAIN_REDUCTION = -0.4;
private _MEDIGEL_PAIN_REDUCTION = -0.1;
private _defaultReduction = 0;

params ["_target", "_className"];

//Force lowercase classname
_className = toLower _className;

private _painReduction = if ("biofoam" in _className) then {
  _BIOFOAM_PAIN_REDUCTION;
} else {
  if ("medigel" in _className) then {
    _MEDIGEL_PAIN_REDUCTION;
  } else {
    _defaultReduction;
  };
};

[_target, _painReduction] call ace_medical_fnc_adjustPainLevel;
