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

#define TBD_120mm_PM_43_WEAPON tbd_120mm_pm_43_weapon

#define TBD_120mm_PM_43_SHOT_SOUNDSET tbd_120mm_pm_43_shot_soundset
#define TBD_120mm_PM_43_SHOT_SOUNDSHADER tbd_120mm_pm_43_shot_soundshader

#define TBD_MORTAR_120mm_SHELL_HE tbd_mortar_120mm_shell_he
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 tbd_mortar_120mm_shell_he_charge_1
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_2 tbd_mortar_120mm_shell_he_charge_2
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_3 tbd_mortar_120mm_shell_he_charge_3
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_4 tbd_mortar_120mm_shell_he_charge_4
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_5 tbd_mortar_120mm_shell_he_charge_5
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_6 tbd_mortar_120mm_shell_he_charge_6
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_7 tbd_mortar_120mm_shell_he_charge_7