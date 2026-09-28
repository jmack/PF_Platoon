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

private _painReduction = [[0, 0]];
private _MEDIGEL_PAIN_REDUCTION = [[5, -0.05], [15, -0.05]]; // 0.05 reduction over 30s
private _BIOFOAM_PAIN_REDUCTION = [[5, -0.05], [10, -0.05], [15, -0.05], [30, -0.05]]; // 0.2 reduction over 60s
private _MORPHINE_PAIN_REDUCTION = [[5, -0.1], [10, -0.1], [15, -0.1], [15, -0.1], [15, -0.1], [60, -0.1], [60, -0.05], [60, -0.05]]; // 0.7 reduction over 240s (0.4 over first 60)

params ["_target", "_className"];

//Force lowercase classname
_className = toLower _className;


if ("biofoam" in _className) then {
  _painReduction = _BIOFOAM_PAIN_REDUCTION;
};

if ("medigel" in _className) then {
  _painReduction = _MEDIGEL_PAIN_REDUCTION;
};

if ("morphine" in _className) then {
  _painReduction = _MORPHINE_PAIN_REDUCTION;
};


[_target, _painReduction] spawn {
  params ["_target", "_painReduction"];

  {
    _delay = _x select 0;
    _stepPainReduction = _x select 1;

    sleep _delay;
    [_target, _stepPainReduction] call ace_medical_fnc_adjustPainLevel;
  } forEach _painReduction;
};
