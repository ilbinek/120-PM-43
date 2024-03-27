#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {QUOTE(TBD_120mm_PM_43)};
        weapons[] = {};
        requiredVersion = 2.04;
        requiredAddons[] = {"cba_main", "ace_interact_menu", "tbd_mortars_main"};
    };
};

#include "CfgEventhandlers.hpp"
