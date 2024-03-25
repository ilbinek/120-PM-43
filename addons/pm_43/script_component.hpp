#define PREFIX TBD_120mm
#define COMPONENT PM_43
#include "\x\cba\addons\main\script_macros_common.hpp"

#define DISABLE_COMPILE_CACHE

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORT(cmp,fncName) tbd_mortars##_##cmp##_##fnc##_##fncName
//#define TBD_MORT(cmp,fncName) tbd##_##cmp##_##fnc##_##fncName

#define TBD_120mm_PM_43 tbd_120mm_pm_43

#define MORTFUNC(var1) tbd_mortars_main_fnc_##var1
#define QMORTFUNC(var1) QUOTE(MORTFUNC(var1))
#define MORTPATH(var1,var2) x\tbd_mortars\addons\var1\var2
#define QMORTPATH(var1,var2) QUOTE(MORTPATH(var1,var2))

#define TBD_2B25_GALL tbd_2b25_gall
#define TBD_120mm_PM_43_WEAPON tbd_120mm_pm_43_weapon
#define TBD_2B25_BOX_HE tbd_2b25_box_he
#define TBD_120mm_PM_43_HE tbd_120mm_PM_43_shell_he
#define TBD_2B25_82mm_SHELL_AMMO_HE tbd_2B25_82mm_shell_ammo_he

#define TBD_2B25_CARRY tbd_2b25_carry
#define TBD_2B25_TRIPOD tbd_2b25_tripod
#define TBD_2B25_BASEPLATE tbd_2b25_baseplate

#define TBD_120mm_PM_43_SHOT_SOUNDSET tbd_120mm_pm_43_shot_soundset
#define TBD_120mm_PM_43_SHOT_SOUNDSHADER tbd_120mm_pm_43_shot_soundshader