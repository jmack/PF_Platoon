if (!params [
  ["_player", objNull, [objNull]],
  ["_specializations", [], ["", []]]
]) exitWith { false };

if (_specializations == "all") then {
  _specializations = ["hacker", "engineer", "medic", "demolitions"];
};

if (typeName _specializations == "STRING") then {
  _specializations = [_specializations];
};

_player setVariable ["isHacker",      "hacker"      in _specializations];
_player setVariable ["isMedic",       "medic"       in _specializations];
_player setVariable ["isEngineer",    "engineer"    in _specializations];
_player setVariable ["isDemolitions", "demolitions" in _specializations];

_player setUnitTrait ["Medic",                "medic"       in _specializations];
_player setUnitTrait ["Engineer",             "engineer"    in _specializations];
_player setUnitTrait ["ExplosiveSpecialist",  "demolitions" in _specializations];
