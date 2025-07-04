class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle {

        class ACE_Actions;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
    };

    class StaticMortar : StaticWeapon {

        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };

    class TBD_120mm_PM_43 : StaticMortar {
        artilleryScanner = 1;
        scope = 2;
        scopeCurator = 2;
        author = "TBD Team";
        displayName = CSTRING(NAME);
        model = QPATHTOF(TBD_120mm_PM_43\TBD_120mm_PM_43);
        editorPreview = QPATHTOF(TBD_120mm_PM_43\data\preview.paa);
        picture = QPATHTOF(TBD_120mm_PM_43\data\120pm43icon.paa);
        side = 0;
        faction = "OPF_F";
        crew = "O_Soldier_F";

        transportSoldier = 0;
        cargoAction[] = {"120testpose"};
        getInAction = "GetInMortar";
        getOutAction = "GetOutLow";
        unitInfoType = "RscUnitInfoMortar";
        editorSubcategory = "EdSubcat_Turrets";
        cost = 200000;
        accuracy = 0.8;
        EPEImpulseDamageCoef = 5;

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerAction = "120testpose";
                gunnergetInAction = "GetInLow";
                gunnergetOutAction = "GetOutLow";
                weapons[] = {QUOTE(TBD_120mm_PM_43_WEAPON)};
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                cameraDir = "look";
                discreteDistance[] = {};
                //discreteDistanceCameraPoint[] = {"eye"};
                gunnerForceOptics = 0;
                memoryPointCamera = "gunnerview";
                memoryPointGunnerOptics = "gunnerview";
                discreteDistanceCameraPoint[] = {"gunnerview"};
                gunnerOpticsModel = QPATHTOF(TBD_120mm_PM_43\scope.p3d);
                gunnerUsesPilotView = 1;
                disableSoundAttenuation = 1;
                class ViewOptics {
                    camPos = "gunnerview";
                    camDir = "look";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal"};
                };
                minelev = 0;
                maxelev = 35;
                magazines[] = {QUOTE(TBD_MORTAR_120mm_SHELL_HE), QUOTE(TBD_MORTAR_120mm_SHELL_HE), QUOTE(TBD_MORTAR_120mm_SHELL_HE), QUOTE(TBD_MORTAR_120mm_SHELL_HE)};
                ejectDeadGunner = 1;
                usepip = 2;
                discreteDistanceInitIndex = 0;
                primaryGunner = 1;
                maxHorizontalRotSpeed = 0.3;
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                proxyType = "CPGunner";
                proxyIndex = 1;
            };
        };
        selectionDamage = "zbytek";

        class Damage {
            mat[] = {"x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\ONE.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\ONE_damage.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\ONE_destroy.rvmat",
                     
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\two.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\two_damage.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\two_destroy.rvmat",
                     
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\scope.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\scope_damage.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\scope_destroy.rvmat",
                     
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\number.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\number_damage.rvmat",
                     "x\tbd_120mm\addons\pm_43\tbd_120mm_pm_43\data\number_destroy.rvmat"};
            tex[] = {};
        };

        class DestructionEffects {

                class Smoke2 {
                intensity = 1;
                interval = 1;
                lifetime = 5;
                position = "konec hlavne";
                simulation = "particles" ;
                type = "WeaponWreckSmoke";};

                class Smoke {
                intensity = 1;
                interval = 1;
                lifetime = 5;
                position = "usti hlavne";
                simulation = "particles" ;
                type = "WeaponWreckSmoke";};



                };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;
    };
};
