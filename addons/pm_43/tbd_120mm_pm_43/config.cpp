#include "..\script_component.hpp"

class CfgPatches {
    class TBD_120MM_PM_43 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {};
        requiredVersion = 0.5;
        weapons[] = {QUOTE(TBD_120mm_PM_43_WEAPON)};
        units[] = {QUOTE(TBD_120MM_PM_43)};
    };
};

class Mode_SemiAuto;
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgMoves.hpp"
#include "cfgSound3DProcessors.hpp"
