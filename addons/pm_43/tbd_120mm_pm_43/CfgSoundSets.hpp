class CfgSoundSets {
	class TBD_120mm_PM_43_SHOT_SOUNDSET {
		soundShaders[] = {QUOTE(TBD_120mm_PM_43_SHOT_MEADOWS_SOUNDSHADER),QUOTE(TBD_120mm_PM_43_SHOT_FOREST_SOUNDSHADER),QUOTE(TBD_120mm_PM_43_SHOT_HOUSES_SOUNDSHADER)};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "tbd_pm43Tail_3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		obstructionFactor = 0;
		occlusionFactor = 0.3;
	};
};
