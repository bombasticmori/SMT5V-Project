This is a list of files that have been manually reversed based on the available source code, or manually verified as being accurate.
If it's on this list and says complete, it's probably as close as we can get it to the original uncooked file.
If it says incomplete, reversing has started, but its not been finished
If its not on the list, assume it hasn't been reversed/verified yet. If you reverse/verify it, add it to the list please!

CURRENTLY BROKEN ASSETS:
\Blueprints\Character\NPC\Npc752\Npc752_AnimBP - missing skeleton
\Blueprints\Character\NPC\Npc607\Npc607_AnimBP - missing skeleton
\Blueprints\Character\NPC\Npc605\Npc605_AnimBP - missing skeleton
\Blueprints\Character\Devil\Dev409\Dev409_AnimBP - missing skeleton
\Blueprints\Map\Garden\PlayerTalk\BP_Garden_PlayerTalk - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBench_AnimOne - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBench_CameraTypeLookAt - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBench_CameraTypeValues - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBench_MotionTypeAnimationInCameraSetting - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBench_MotionTypeAnimations - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBenchCameraSettingsTable - struct corruption issue
\Blueprints\Map\Garden\PlayerTalk\Core\ST_GardenBenchMotionSettingsTable - struct corruption issue


Blueprints:
	Battle:
		Framework
			Structs:
				BTL_ADD_ANIM_CAM_TASK_DATA - COMPLETE
				BTL_ADD_DECAL_TASK_DATA - COMPLETE
				BTL_ADD_PLAY_EFFECT_TASK_DATA - COMPLETE
				BTL_ADD_SKILL_LIGHT_TASK_DATA - COMPLETE
	Character:
		Base:
			BP_ParentRotationScene - COMPLETE
			BPI_CharaAction - COMPLETE
			BPI_CharaBaseAccessor - COMPLETE
			BPI_CharaLipSync - COMPLETE
			CharaBadStatus - COMPLETE
			CharaBadStatusBase - COMPLETE
			CharaBase - INCOMPLETE - 50%
			CharaEyeComponent - COMPLETE
			CharaFloatingComponent - COMPLETE
			CharaFootStamp - COMPLETE
			CharaFootTwistAngleCurve - COMPLETE
			CharaHeadComponent - COMPLETE
			CharaLegComponent - COMPLETE
			CharaRotateComponent - COMPLETE
			CharaSinkHelperComponent - COMPLETE
			CharaSinkTesterInterface - COMPLETE
			CharaSlopeAdapterComponent - COMPLETE
			CharaSmearFrameComponent - COMPLETE
			CharaStepSmootherComponent - COMPLETE
			CharaUpliftingLightComponent - COMPLETE
			ClockingParticleSystem - COMPLETE
			DevilSpawnDecal - COMPLETE
			CV_GazePerVelocity - COMPLETE
			E_CHARA_MATERIAL_ANIMATION_SLOT - COMPLETE
			E_MAP_PLAYER_CAMERA_ANIM_TYPE - COMPLETE
			E_MapAttackDamage - COMPLETE
			E_PLAYER_MOVEMENT_STATE - COMPLETE
			MaterialAnimCoreComponent - COMPLETE
			MaterialAnimDecalComponent - COMPLETE
			MaterialAnimSetting_T - COMPLETE
			PlayerBase - INCOMPLETE - 5%
			PlayerCameraInitParam - COMPLETE
			PlayerDevilBaseParamStruct - COMPLETE
		Player:
			Pla601:
				Pla601_PostAnimBP - COMPLETE
	Common:
		AssetTable:
			BPI_CharaBaseTable - COMPLETE
			BPI_CharaBaseTableInstance - COMPLETE
			BPI_DevilAssetTable - COMPLETE
			BPI_DevilAssetTableInstance - COMPLETE
			BPL_CharaBaseTableData - INCOMPLETE - 25%
			CharaAssetTable:
				BadStatusDecal_Array: COMPLETE
				BadStatusDecal_T: COMPLETE
				BadStatusNecessaries_Array: COMPLETE
				BadStatusNecessaries_T: COMPLETE
				BadStatusParticles_Array: COMPLETE
				BadStatusParticles_T: COMPLETE
				DeadActionParticles_T: COMPLETE
				Devil_Performance_T: COMPLETE
				E_DEVIL_PERFORMANCE_TYPE: COMPLETE
		Character:
			BPI_PlayerManager: COMPLETE
	Map:
		BPI_MapCommon: COMPLETE
Design:
	Character:
		Common:
			Anim:
				DefaultBlendTable - COMPLETE