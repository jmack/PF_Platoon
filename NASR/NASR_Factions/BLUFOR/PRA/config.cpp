class CfgPatches {
    class B_AR {
        units[] = {
            "B_AR_Guerilla_Rifleman_01",
            "B_BAR_Guerilla_Marksman_01",
            "B_BAR_Guerilla_Autorifleman_01",
            "B_BAR_Guerilla_Squad_Leader_01",
            "B_BAR_Guerilla_Rifleman_AA_01",
            "B_BAR_Guerilla_Rifleman_AT_01",
            "B_BAR_Guerilla_Officer_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "B_NASRArmy",
            "A3_Characters_F",
            "universal_uniforms",
            "mlv_inf01",
            "rhsusf_c_troops",
            "lambs_danger",
            "CUP_Creatures_Military_BAF",
            "CUP_Creatures_Military_Germany",
            "CUP_Creatures_Military_NAPA",
            "CUP_Creatures_Military_PMC",
            "CUP_Creatures_Military_Taki",
            "CUP_Creatures_Military_TakiInsurgents",
            "CUP_Creatures_Military_USMC",
            "CUP_Creatures_Military_ACR",
            "CUP_Creatures_Military_CDF",
            "CUP_Creatures_Military_Chedaki",
            "CUP_Creatures_Military_Delta",
            "CUP_Creatures_Military_RACS",
            "CUP_Creatures_Military_SLA",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_HIL",
            "CUP_Creatures_Military_Ukraine",
            "kka3_gestures_ace",
            "A3_Sounds_F",
            "A3_Sounds_F_Exp",
            "Webs_Footsteps",
            "lambs_range",
            "tfar_core",
            "hlcweapons_AUG",
            "ace_gforces",
            "ace_movement",
            "ace_medical_feedback",
            "CUP_Creatures_Military_Russia",
            "cwr3_soldiers_fia",
            "cwr3_soldiers_ru",
            "cwr3_soldiers_us",
            "cwr3_expansion_uk",
            "cwr3_hot_couple",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "A3_Air_F_Heli",
            "ace_thermals",
            "lambs_formations",
            "zen_attributes",
            "ace_refuel",
            "CUP_Core",
            "cba_xeh"
        };
        author = "wlan0";
        authors[] = {"wlan0"};
    };
};

class CfgFactionClasses {
    class B_AR {
        displayName = "[PF] People's Revolutionary Army";
        side = 1;
        flag = "NASR_Factions\BLUFOR\PRA\_data\flag.paa";
        icon = "NASR_Factions\BLUFOR\PRA\_data\flag.paa";
        priority = 0;
    };
};

class CfgGroups {
    class WEST {

        class B_AR {
            name = "[PF] People's Revolutionary Army";

            class Infantry {
                name = "Infantry";
            };

            class SpecOps {
                name = "Special Forces";
            };

            class Motorized {
                name = "Motorized Infantry";
            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";
            };

            class Support {
                name = "Support Infantry";
            };

            class Mechanized {
                name = "Mechanized Infantry";
            };

            class Armored {
                name = "Armor";
            };

            class Artillery {
                name = "Artillery";
            };

            class Naval {
                name = "Naval";
            };

            class Air {
                name = "Air";
            };
        };
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_soldier_F;
    class B_soldier_F_OCimport_01 : B_soldier_F { scope = 0; class EventHandlers; };
    class B_soldier_F_OCimport_02 : B_soldier_F_OCimport_01 { class EventHandlers; };

    class B_AR_Guerilla_Rifleman_01 : B_soldier_F_OCimport_02 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Rifleman";
        side = 1;
        faction = "b_ar";
        genericNames = "Argentina";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll2_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3_AK","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3_AK","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"rhs_weap_ak74n","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"rhs_weap_ak74n","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","16Rnd_9x21_Mag","rhs_30Rnd_545x39_7N6M_AK","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","16Rnd_9x21_Mag","rhs_30Rnd_545x39_7N6M_AK","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n","rhs_acc_dtk","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll2_dirty_DPM_OD",{{"SWDG_addon_low",1},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{"rhs_6b3_AK",{{"rhs_30Rnd_545x39_7N6_AK",8,30}}},{"rhs_rd54_vest_flora1",{}},"sns_m53_6","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Marksman_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Marksman";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll2_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3_AK","sns_m53_scrim_2","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3_AK","sns_m53_scrim_2","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"CUP_srifle_SVD_top_rail","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"CUP_srifle_SVD_top_rail","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","16Rnd_9x21_Mag","CUP_10Rnd_762x54_SVD_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","16Rnd_9x21_Mag","CUP_10Rnd_762x54_SVD_M","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_top_rail","","","hlc_optic_LeupoldM3A",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll2_dirty_DPM_OD",{{"SWDG_addon_low",1},{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"rhs_6b3_AK",{{"CUP_10Rnd_762x54_SVD_M",13,10}}},{"rhs_rd54_vest_flora1",{}},"sns_m53_scrim_2","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Autorifleman_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Autorifleman";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll2_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3_RPK","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch","SWDG_addon"};
        respawnlinkedItems[] = {"rhs_6b3_RPK","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch","SWDG_addon"};

        weapons[] = {"rhs_weap_rpk74m","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"rhs_weap_rpk74m","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"rhs_45Rnd_545X39_7N6M_AK","16Rnd_9x21_Mag","rhs_45Rnd_545X39_7N6M_AK","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"rhs_45Rnd_545X39_7N6M_AK","16Rnd_9x21_Mag","rhs_45Rnd_545X39_7N6M_AK","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m","rhs_acc_dtkrpk","","rhs_acc_pkas",{"rhs_45Rnd_545X39_7N6M_AK",45},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll2_dirty_DPM_OD",{{"SWDG_addon_low",1},{"rhs_45Rnd_545X39_7N6M_AK",2,45}}},{"rhs_6b3_RPK",{{"rhs_45Rnd_545X39_7N6M_AK",8,45}}},{"rhs_rd54_vest_flora1",{}},"sns_m53_6","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch","SWDG_addon"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Squad_Leader_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Squad Leader";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3_R148","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3_R148","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"CUP_arifle_AKS74_Early","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK_M","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll_gloves_dirty_DPM_OD",{{"SWDG_addon_low",1},{"CUP_30Rnd_545x39_AK_M",3,30}}},{"rhs_6b3_R148",{{"CUP_30Rnd_545x39_AK_M",10,30}}},{"rhs_rd54_vest_flora1",{}},"sns_m53_6","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Rifleman_AA_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Rifleman (AA)";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll2_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3_AK","sns_m53_7","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3_AK","sns_m53_7","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"CUP_arifle_AKMS_Early","CUP_launch_Igla_Loaded","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"CUP_arifle_AKMS_Early","CUP_launch_Igla_Loaded","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_Igla_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_bakelite_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_Igla_M","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_bakelite_M","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{"CUP_launch_Igla_Loaded","","","",{"CUP_Igla_M",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll2_dirty_DPM_OD",{{"SWDG_addon_low",1},{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{"rhs_6b3_AK",{{"CUP_30Rnd_762x39_AK47_bakelite_M",9,30}}},{"rhs_rd54_vest_flora1",{{"CUP_Igla_M",1,1}}},"sns_m53_7","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Rifleman_AT_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Rifleman (AT)";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_roll2_dirty_DPM_OD";

        linkedItems[] = {"rhs_6b3","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3","sns_m53_6","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"CUP_arifle_AKMS_Early","launch_RPG7_F","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"CUP_arifle_AKMS_Early","launch_RPG7_F","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","RPG7_F","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_bakelite_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","RPG7_F","16Rnd_9x21_Mag","CUP_30Rnd_762x39_AK47_bakelite_M","16Rnd_9x21_Mag"};

        backpack = "rhs_rpg_6b3";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_roll2_dirty_DPM_OD",{{"SWDG_addon_low",1},{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{"rhs_6b3",{}},{"rhs_rpg_6b3",{{"RPG7_F",3,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",2,30}}},"sns_m53_6","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };

    class B_BAR_Guerilla_Officer_01 : B_AR_Guerilla_Rifleman_01 {
        author = "wlan0";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guerilla Officer";
        side = 1;
        faction = "B_AR";

        identityTypes[] = {"Head_TK","Language_Esp","NoGlasses"};

        uniformClass = "CUP_U_B_BDUv2_gloves_DPM_OD";

        linkedItems[] = {"rhs_6b3_off","CUP_H_SLA_BeretRed","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};
        respawnlinkedItems[] = {"rhs_6b3_off","CUP_H_SLA_BeretRed","ItemMap","TFAR_anprc152","ItemCompass","Itemwatch"};

        weapons[] = {"CUP_arifle_AKS74U","hgun_P07_F","40th_binocular_6x30"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","hgun_P07_F","40th_binocular_6x30"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74_plum_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","16Rnd_9x21_Mag","CUP_30Rnd_545x39_AK74_plum_M","16Rnd_9x21_Mag"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","rhs_acc_dtk","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"CUP_U_B_BDUv2_gloves_DPM_OD",{{"SWDG_addon_low",1},{"CUP_30Rnd_545x39_AK74_plum_M",3,30}}},{"rhs_6b3_off",{}},{"rhs_rd54_vest_flora1",{}},"CUP_H_SLA_BeretRed","G_Armband_red_F",{"40th_binocular_6x30","","","",{},{},""},{"ItemMap","","TFAR_anprc152","ItemCompass","Itemwatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Roundel_russian'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Roundel_russian";
    };
};
