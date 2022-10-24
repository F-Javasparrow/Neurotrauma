#include "script_component.hpp"
params ["_unit", "_allDamages", "_ammo"];

//private _typeOfSymptoms = _ammo call FUNC(getTypeOfSymptoms);
private _typeOfSymptoms = [["Wound_GunShot", 1], ["Wound_Lacerations", 0.5]];
/*
if !(_typeOfSymptoms in EGVAR(meidical,symptomsDetails)) then {
    _typeOfSymptoms = [["unknown", 0]];
}; 
*/

{
    _x params ["_syptomsClass", "_severityCoef"];
    EGVAR(meidical,symptomsDetails) get _syptomsClass params ["_selections"];

    {
        _x params ["_damage", "_hitPart"];

        if!(_hitPart # 0 in _selections || _damage <= 0) then {continue};

        systemChat str _damage;

        private _severity = linearConversion [0.1, 2, _damage * _severityCoef, 0.5^3, 1, true];
        [QEGVAR(medical,addSymptom), [_unit, _syptomsClass, _hitPart, ["add", _severity]]] call CBA_fnc_localEvent;
    }forEach _allDamages;
}forEach _typeOfSymptoms;
