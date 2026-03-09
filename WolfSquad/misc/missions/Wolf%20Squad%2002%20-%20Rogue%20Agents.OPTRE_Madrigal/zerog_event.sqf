vectrue = (player getVariable ["ws_zerog_vectrue", [0, 0, 0]]);
movez = (player getVariable ["ws_zerog_movez", 0]);

player setUnitFreefallHeight 1e10; // needs to be set every frame or arma will reset it

// if (!isNil "WS_ZeroGAreaHandler_Ready") then {
//     hintStr = "";
//     {
//         hintStr = hintStr + format ["%1: %2, ", _x, (player inArea _x)];
//     } forEach WS_ZeroGAreas;
//     hintStr = hintStr + format ["in zero G: %1 ", (player call WS_fnc_IsUnitInZeroG)];
//     hintSilent hintStr;
// };


// if (!inZeroGZone) then { (need to move into controller)
// 	if (animationState player == "AsdvPercMstpSnonWrflDnon") then {
// 		player switchMove "";
// 	};

// 	// hintSilent "";
// };

player playMove "AsdvPercMstpSnonWrflDnon";
vecupdate = [0,0,0];

// Determine velocity changes based on keypresses
if ((inputAction "MoveForward" > 0)) then {
	_weaponVectorDir = player weaponDirection currentWeapon player;
	vecupdate = [(_weaponVectorDir select 0) * 0.01, (_weaponVectorDir select 1) * 0.01, 0];
};

if ((inputAction "TurnLeft" > 0)) then {
	_weaponVectorDir = player weaponDirection currentWeapon player;
	_adir = _weaponVectorDir # 0 atan2 _weaponVectorDir # 1; //convert vector to degree 0-360
	_newdir = _adir + 280; //add our desired direction
	if (_newdir > 360) then { //check if direction is out of the bounds of 0-360
		_buffer = 360 - _adir;
		_newdir = 280 - _buffer;
	};
	_velocity = [_newdir] call degtoarr; //pass our direction to function to de-convert back into vector array
	vecupdate = [(_velocity select 0) * 0.01, (_velocity select 1) * 0.01, 0]; //add array to vecupdate (added to player velocity later)
};

if ((inputAction "TurnRight" > 0)) then {
	_weaponVectorDir = player weaponDirection currentWeapon player; //convert vector to degree 0-360
	_adir = _weaponVectorDir # 0 atan2 _weaponVectorDir # 1; //add our desired direction
	_newdir = _adir + 90; //check if direction is out of the bounds of 0-360
	if (_newdir > 360) then {
		_buffer = 360 - _adir;
		_newdir = 90 - _buffer;
	};
	_velocity = [_newdir] call degtoarr; //pass our direction to function to de-convert back into vector array
	vecupdate = [(_velocity select 0) * 0.01, (_velocity select 1) * 0.01, 0]; //add array to vecupdate (added to player velocity later)
};

if ((inputAction "MoveBack" > 0)) then {
	_weaponVectorDir = player weaponDirection currentWeapon player;
	vecupdate = [(_weaponVectorDir select 0) * -0.01, (_weaponVectorDir select 1) * -0.01, 0];
};

if ((inputAction "LeanLeft" > 0)) then { 
	movez = movez + .01;
};

if ((inputAction "LeanRight" > 0)) then { 
	movez = movez + -.01;
};


veccurent = velocity player;
vectrue = veccurent vectorAdd vecupdate;
player setVelocity [
	(vectrue select 0),
	(vectrue select 1),
	0 + movez
];

player setVariable ["ws_zerog_vectrue", vectrue];
player setVariable ["ws_zerog_movez", movez];

// vel gauge helper
_xVel = veccurent#1;
_yVel = veccurent#0;
_zVel = veccurent#2;
hintSilent format [
	"[%1 %2, %3 %4, %5 %6]",
	(if (_xVel >= 0) then [{'N'}, {'S'}]),
	(if (_xVel >= 0) then [{_xVel}, {_xVel * -1}]) toFixed 1,
	(if (_yVel >= 0) then [{'E'}, {'W'}]),
	(if (_yVel >= 0) then [{_yVel}, {_yVel * -1}]) toFixed 1,
	(if (_zVel >= 0) then [{'U'}, {'D'}]),
	(if (_zVel >= 0) then [{_zVel}, {_zVel * -1}]) toFixed 1
];