#include "script_component.hpp"
params ["_unit", "_mainPart"];

SYNCVAR(medical_gui,target);
SYNCVAR(medical_gui,selectedMainPart);

["Neuro_Morphine", 1] call FUNC(useItem);
[QGVAR(addMedication), [GVAR(target), "Morphine", 1, GVAR(selectedMainPart)], GVAR(target)] call CBA_fnc_targetEvent;