#include "..\script_component.hpp"

class CfgPatches {
    class TBD_120MM_PM_43 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {QUOTE(TBD_2B25_WEAPON)};
        units[] = {QUOTE(TBD_120MM_PM_43)};
    };
};

class Mode_SemiAuto;
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
