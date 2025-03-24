class CfgSoundShaders {

	class TBD_120mm_PM_43_SHOT_MEADOWS_SOUNDSHADER {
		samples[] = {{QPATHTOF(TBD_120mm_PM_43\sounds\120.ogg), 1}};
		volume = "1.10 * (meadows max sea) * (1 - (interior * 0.7))";
		range = 3000;
		rangeCurve[] = {{0, 1},
			            {5, 1},
		                {6, 1},
		                {3000, 1}
						};
	};

	class TBD_120mm_PM_43_SHOT_HOUSES_SOUNDSHADER {
		samples[] = {{QPATHTOF(TBD_120mm_PM_43\sounds\120.ogg), 1}};
		volume = "1.10 * houses * (1 - (interior * 0.7))";
		range = 3000;
		rangeCurve[] = {{0, 1},
			            {5, 1},
		                {6, 1},
		                {3000, 1}
						};
	};

	class TBD_120mm_PM_43_SHOT_FOREST_SOUNDSHADER {
		samples[] = {{QPATHTOF(TBD_120mm_PM_43\sounds\120.ogg), 1}};
		volume = "1.10 * (forest max trees) * (1 - (interior * 0.7))";
		range = 3000;
		rangeCurve[] = {{0, 1},
			            {5, 1},
		                {6, 1},
		                {3000, 1}
						};
	};

};
