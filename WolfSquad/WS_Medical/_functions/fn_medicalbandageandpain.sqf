/*
 * Author: AACO
 * Callback when the treatment is complete. Calls ACE bandage handling and reduces pain
 *
 * Arguments:
 * 0: The medic <OBJECT>
 * 1: The patient <OBJECT>
 * 2: Selection Name <STRING>
 * 3: Treatment classname <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_caller", "_target", "_selection", "_className"];

// call ACE's bandage function for selection healing
_this call ace_medical_treatment_fnc_bandage;

// execute local function to manage pain
[_target, _className] remoteExecCall ["WS_fnc_MedicalPainLocal", _target];
