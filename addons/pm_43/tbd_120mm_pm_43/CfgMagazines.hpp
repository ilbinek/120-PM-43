	class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_120mm_SHELL_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = "120mm HE";
		displayNameShort = "120mm HE";
		initSpeed = 242;
		mass = 70;
		count = 8;
		type = 256;
	};
};		
