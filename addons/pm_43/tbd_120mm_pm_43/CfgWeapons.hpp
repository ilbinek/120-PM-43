class CfgWeapons {
	class CannonCore {
		class player;
		class close;
		class short;
		class medium;
		class far;
	};

	class mortar_82mm: CannonCore {};

	class TBD_120mm_PM_43_WEAPON: mortar_82mm {
		displayName = "120-PM-43 mortar";
		magazines[] = {QUOTE(TBD_MORTAR_120mm_SHELL_HE)};
		modes[] = {"Single1", "Single2", "Single3", "Single4", "Single5", "Single6", "Single7"};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		magazineReloadTime = 0.5;
		
		class Single1: Mode_SemiAuto {
			displayName="120-PM-43 mortar ch. 0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound {
				soundSetShot[] = {QUOTE(TBD_120mm_PM_43_SHOT_SOUNDSET)};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			artilleryDispersion=1.9;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			artilleryCharge = 0.14;
		};
		
		class Single2: Single1 {
			displayName="120-PM-43 mortar ch. 1";
			artilleryCharge = 0.28;
		};

		class Single3: Single1 {
			displayName="120-PM-43 mortar ch. 2";
			artilleryCharge = 0.42;
		};

		class Single4: Single1 {
			displayName="120-PM-43 mortar ch. 3";
			artilleryCharge = 0.56;
		};

		class Single5: Single1 {
			displayName="120-PM-43 mortar ch. 4";
			artilleryCharge = 0.70;
		};

		class Single6: Single1 {
			displayName="120-PM-43 mortar ch. 5";
			artilleryCharge = 0.84;
		};

		class Single7: Single1 {
			displayName="120-PM-43 mortar ch. 6";
			artilleryCharge = 1;
		};
	};
};
