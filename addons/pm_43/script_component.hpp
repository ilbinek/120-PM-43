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
