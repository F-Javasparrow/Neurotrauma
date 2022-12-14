#include "script_component.hpp"

EGVAR(meidical,symptomTypeCache) = createHashMap;
EGVAR(meidical,symptomsDetails) = createHashMap;
call FUNC(parseConfigForSymptoms);
addMissionEventHandler ["Loaded",{
    call FUNC(parseConfigForSymptoms);
}];

["CAManBase", "init", {
    params ["_unit"];

    private _allHitPoints = getAllHitPointsDamage _unit param [0, []];
    reverse _allHitPoints;

    if (_allHitPoints param [0, ""] != "neuro_hdbracket") then {
        private _config = configOf _unit;
        if (getText (_config >> "simulation") == "UAVPilot") exitWith {};
        if (getNumber (_config >> "isPlayableLogic") == 1) exitWith {};
    } else {
        _unit setVariable [
            QEGVAR(medical,HandleDamageEHID),
            _unit addEventHandler ["HandleDamage", LINKFUNC(handleDamage)]
        ];
    };

    [QEGVAR(medical,handleSymptom), [_unit], _unit] call CBA_fnc_targetEvent;
    [QEGVAR(medical,handleMedicalStatus), [_unit], _unit] call CBA_fnc_targetEvent;
}, nil, [], true] call CBA_fnc_addClassEventHandler;
