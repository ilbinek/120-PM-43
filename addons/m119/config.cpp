#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {QUOTE(TBD_2B9_VASILEK), QUOTE(TBD_2B9_VASILEK_MAGAZINE)};
        weapons[] = {};
        requiredVersion = 2.04;
        requiredAddons[] = {"cba_main", "ace_interact_menu", "tbd_mortars_main"};
    };
};

#include "CfgEventhandlers.hpp"
