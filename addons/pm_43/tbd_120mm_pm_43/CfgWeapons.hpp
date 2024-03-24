class CfgWeapons {
	class CannonCore {
		class player;
		class close;
		class short;
		class medium;
		class far;
	};

	class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

	class mortar_82mm: CannonCore {};

	class TBD_2B25_WEAPON: mortar_82mm {
		displayName = "2B25 Mortar";
		magazines[] = {QUOTE(TBD_2B25_HE)};
		modes[] = {"Single"};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		magazineReloadTime = 0.5;
		class Single: Mode_SemiAuto {
			displayName="Gall Mortar";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound {
				soundSetShot[] = {QUOTE(TBD_2B25_SHOT_SOUNDSET)};
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
			
		};
	};

	class ace_csw_staticMortarCarry: Launcher_Base_F {};
	class TBD_2B25_CARRY: ace_csw_staticMortarCarry {
		class ACE_CSW {
			type = "weapon";
			deployTime = 10;
			pickupTime = 10;
			class assembleTo {
				TBD_2B25_BASEPLATE = QUOTE(TBD_2B25_GALL);
			};
		};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot {
				iconScale = 0.1;	
			};

			mass = 444;
		};

		displayName = QUOTE(2B25 Mortar);
        author = QUOTE(TBD Team);
	};

	class ace_csw_carryMortarBaseplate: Launcher_Base_F {};

	class TBD_2B25_TRIPOD: ace_csw_carryMortarBaseplate {
		class ACE_CSW {
            type = "mount";
            deployTime = 2;
            pickupTime = 2;
            deploy = QUOTE(TBD_2B25_BASEPLATE);
        };

		class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 154; // M3A1 baseblate weight
        };
		displayName = QUOTE(2B25 Mortar Baseplate);
		author = QUOTE(TBD Team);
	};
};
