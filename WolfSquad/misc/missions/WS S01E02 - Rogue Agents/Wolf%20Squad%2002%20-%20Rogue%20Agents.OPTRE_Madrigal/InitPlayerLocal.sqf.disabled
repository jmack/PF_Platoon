[] spawn {
    vecupdate = [0,0,0];
    vectrue = [0,0,0];
    movez = 0;

    sleep 10;
    ["DEBUG", "Zero-G starting"] call WS_fnc_LogMsg;


    // Start zero-G handler
    addMissionEventHandler ["EachFrame", {
        player setUnitFreefallHeight 1e10; // needs to be set every frame or arma will reset it

        // Are we in a Zero-G Zone?
        inZeroGZone = false;
        {
            if (player inArea _x) then {
                inZeroGZone = true;
            };
        } forEach WS_ZeroGAreas;

        // if (!isNil "WS_ZeroGAreaHandler_Ready") then {
        //     hintStr = "";
        //     {
        //         hintStr = hintStr + format ["%1: %2, ", _x, (player inArea _x)];
        //     } forEach WS_ZeroGAreas;
        //     hintStr = hintStr + format ["in zero G: %1 ", (player call WS_fnc_IsUnitInZeroG)];
        //     hintSilent hintStr;
        // };

        // Don't bother doing anything if we're not in a ZeroG area
        if (!inZeroGZone) then {
            if (animationState player == "AsdvPercMstpSnonWrflDnon") then {
                player switchMove "";
            };

            // hintSilent "";
        };
        if (!inZeroGZone) exitWith { };

        /*
        * We are in a ZeroG area
        */
        player playMove "AsdvPercMstpSnonWrflDnon";

        // Determine velocity changes based on keypresses
        vecupdate = [0,0,0];

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

        hintSilent format [
            "[%1, %2, %3]",
            (velocity player)#0 toFixed 1,
            (velocity player)#1 toFixed 1,
            (velocity player)#2 toFixed 1
        ];
        
        veccurent = velocity player;
        vectrue = veccurent vectorAdd vecupdate;
        player setVelocity [
            (vectrue select 0),
            (vectrue select 1),
            0 + movez
        ];
    }];

    // Start zero-A(tmo) handler
    addMissionEventHandler ["EachFrame", {
        // Are we in a Zero-A Zone?
        inZeroAZone = false;
        {
            if (player inArea _x) then {
                inZeroAZone = true;
            };
        } forEach WS_ZeroAAreas;

        // if (!isNil "WS_ZeroAAreaHandler_Ready") then {
        //     hintStr = "";
        //     {
        //         hintStr = hintStr + format ["%1: %2\n", _x, (player inArea _x)];
        //     } forEach WS_ZeroAAreas;
        //     hintStr = hintStr + format ["%1\n", inZeroAZone];
        //     hintStr = hintStr + format ["_sfx: %1", (scriptDone breathSfx)];
        //     hintSilent hintStr;
        // };

        // Don't bother doing anything if we're not in a ZeroA area
        if (!inZeroAZone) exitWith {
            breathSfx = 0 spawn { };
        };

        if (scriptDone breathSfx) then {
            breathSfx = [] spawn {
                ["DEBUG", format ["%1: breath", player]] call WS_fnc_LogMsg;
                sleep 10;
            };
        }
    }];

    // Helpers
    degtoarr = {
        _return = [0, 1, 0]; // North
        _angle = _this select 0; 
        _xlen = tan _angle;

        // Determine quadrant and special cases and return 
        if ((_angle > 0) && (_angle < 90)) then {_return = [_xlen, 1, 0]};
        if ((_angle > 90) && (_angle < 180)) then {_return = [-_xlen, -1, 0]};
        if ((_angle > 180) && (_angle < 270)) then {_return = [-_xlen, -1, 0]};
        if ((_angle > 270) && (_angle < 360)) then {_return = [_xlen, 1, 0]};
        if (_angle == 90) then {_return = [1, 0, 0]};
        if (_angle == 180) then {_return = [0, -1, 0]};
        if (_angle == 270) then {_return = [-1, 0, 0]};

        _return = vectorNormalized _return;
        _return
    };
};