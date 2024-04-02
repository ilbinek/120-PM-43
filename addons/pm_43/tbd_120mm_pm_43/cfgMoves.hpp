//class CfgPatches {
//	class 120testpose {	
//		author = "Tvoje_mama";
	//	requiredVersion = 0.1;
	//	requiredAddons[]= {
	//		"A3_Anims_F"
	//	};
//		units[] = {};
  //      weapons[] = {};
//	};
//};



class CfgMovesBasic {
	class defaultDie;
	class ManActions {
		120testpose = "120testpose";
	};
};


class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States {
		class Crew;
		class 120testpose: Crew {
			file = QPATHTOF(TBD_120mm_PM_43\animations\120testpose.rtm);
		};
	};
};