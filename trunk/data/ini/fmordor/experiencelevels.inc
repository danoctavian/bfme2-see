///////////////////////////
// EXPERIENCELEVELS.INC //
/////////////////////////
//Mordor//
/////////


;------------ Mordor ---------------
ExperienceLevel	MordorGenericLevel1	
	TargetNames						=	Mordor
	RequiredExperience				=	1
	ExperienceAward					=	0
;	ExperienceAwardOwnGuysDie		=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius					=	HORDE_DECAL_MIN_RADIUS
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
END


;---------------Cave Troll-------------------------
ExperienceLevel	CaveTrollLevel1
	TargetNames				  		=	MordorCaveTroll CaveTroll_Slaved
	RequiredExperience		  			=	1
	ExperienceAward						=	30
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End	
END


;---------------Moria Goblin Warrior-------------------------
ExperienceLevel	GoblinWarriorLevel1
	TargetNames				  		=	MordorGoblinSwordsman MordorGoblinFighterHorde MordorGoblinSwordsman_Slaved 
	RequiredExperience		  			=	1
	ExperienceAward						=	1
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End	
END


;---------------Moria Goblin Archer-------------------------
ExperienceLevel	GoblinArcherLevel1
	TargetNames				  		=	MordorGoblinArcher MordorGoblinArcherHorde MordorGoblinArcher_Slaved
	RequiredExperience		  			=	1
	ExperienceAward						=	1
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End
END


;-----------------	MORDOR UNITS ---------------------------
;---- NO LEVELING UNITS	

ExperienceLevel	MordorBatteringRamLevel1
	TargetNames						=	MordorBatteringRam
	RequiredExperience			  		=	1
	ExperienceAward						=	10
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End	
END	



ExperienceLevel	MordorGrondLevel1
	TargetNames						=	MordorGrond	
	RequiredExperience					=	1
	ExperienceAward						=	50
	ExperienceAwardOwnGuysDie				=	20
	Rank							=	1
	
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	140
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End	
END	


ExperienceLevel	MordorSiegeTowerLevel1
	TargetNames						=	MordorSiegeTower
	RequiredExperience					=	1
	ExperienceAward						=	30
	ExperienceAwardOwnGuysDie				=	5
	Rank							=	1
	
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	120
		MaxRadius					=	120
		MaxSelectedUnits	  			=	40
	End	
END	


;------------ MORDOR WORKER---------------
ExperienceLevel	MordorWorkerLevel1
	TargetNames				  		=	MordorWorker
	RequiredExperience		  			=	1
	ExperienceAward						=	MORDOR_LABORER_LVL1_EXP_AWARD
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200	
		MaxSelectedUnits	  			=	40
	End	
END		
	
;----------- MordorMumakil ------------------
ExperienceLevel	MordorMumakilLevel1
	TargetNames						=	MordorMumakil MordorMumakilForGI01 MordorMumakilForGI02 MordorMumakilForGI03 MordorMumakilForGI04
	RequiredExperience					=	1	
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MUMAKIL_1			
	Rank							=	1
	ExperienceAwardOwnGuysDie				= 	1
	Upgrades						=	Upgrade_MumakilLevel1
	SelectionDecal
		Texture						=	decal_I_level1	
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%	
		OpacityMax					=	100%
		MinRadius					=	140
		MaxRadius					=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorMumakilLevel2
	TargetNames						=	MordorMumakil
	RequiredExperience					=	50
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MUMAKIL_2
	ExperienceAwardOwnGuysDie				= 	1		
	Rank							=	2
	LevelUpFx						=	FX:GenericLevelUp2FX
	Upgrades						=	Upgrade_MumakilLevel2
	AttributeModifiers					=	EvilMonsterBonusRank2
	ShowLevelUpTint						=	Yes	
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime					=	500	
	LevelUpTintPostColorTime				=	3000
	LevelUpTintSustainColorTime				=	500	
	EmotionType						=	CHEER
	SelectionDecal
		Texture						=	decal_I_level2
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%	
		OpacityMax					=	100%
		MinRadius					=	140
		MaxRadius					=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorMumakilLevel3
	TargetNames						=	MordorMumakil
	RequiredExperience					=	100
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MUMAKIL_3
	ExperienceAwardOwnGuysDie				= 	1 			
	Rank							=	3
	LevelUpFx						=	FX:GenericLevelUp3FX
	AttributeModifiers					=	EvilMonsterBonusRank3
	ShowLevelUpTint						=	Yes	
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime					=	500	
	LevelUpTintPostColorTime				=	3000
	LevelUpTintSustainColorTime				=	500	
	EmotionType						=	CHEER
	SelectionDecal
		Texture						=	decal_I_level3
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%	
		OpacityMax					=	100%
		MinRadius					=	140
		MaxRadius					=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorMumakilLevel4
	TargetNames						=	MordorMumakil
	RequiredExperience					=	150
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MUMAKIL_4
	ExperienceAwardOwnGuysDie				= 	1 			
	Rank							=	4
	LevelUpFx						=	FX:GenericLevelUp4FX
	AttributeModifiers					=	EvilMonsterBonusRank4
	ShowLevelUpTint						=	Yes	
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime					=	500	
	LevelUpTintPostColorTime				=	3000
	LevelUpTintSustainColorTime				=	500	
	EmotionType						=	CHEER
	SelectionDecal
		Texture						=	decal_I_level4
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%	
		OpacityMax					=	100%
		MinRadius					=	140
		MaxRadius					=	140
		MaxSelectedUnits				=	1	
	End	
END

ExperienceLevel	MordorMumakilLevel5
	TargetNames						=	MordorMumakil
	RequiredExperience					=	200
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MUMAKIL_5
	ExperienceAwardOwnGuysDie				= 	1 			
	Rank							=	5
	LevelUpFx						=	FX:GenericLevelUp4FX
	AttributeModifiers					=	EvilMonsterBonusRank5
	ShowLevelUpTint						=	Yes	
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime					=	500	
	LevelUpTintPostColorTime				=	3000
	LevelUpTintSustainColorTime				=	500	
	EmotionType						=	CHEER
	SelectionDecal
		Texture						=	decal_I_level4
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%	
		OpacityMax					=	100%
		MinRadius					=	140
		MaxRadius					=	140
		MaxSelectedUnits				=	1	
	End	
END

;------------ MORDOR CATAPULT---------------
ExperienceLevel	MordorCatapultLevel1
	TargetNames				  		=	MordorCatapult
	RequiredExperience		  			=	1
	ExperienceAwardOwnGuysDie				= 	1
	ExperienceAward						=	MORDOR_CATAPULT_LVL1_EXP_AWARD
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200	
		MaxSelectedUnits	  			=	40
	End	
END


;------------ DEMO UNITS ---------------
ExperienceLevel	DEMOMordorMumakilLevel0	
	TargetNames			= DEMOMordorMumakil	
	RequiredExperience	= 1	
	ExperienceAward		= 10
	Rank				= 0	
End

;------------ MORDOR ---------------
ExperienceLevel	TributeCart
	TargetNames				  		=	MordorTributeCart
	RequiredExperience	  			=	1
	ExperienceAward					=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					= 	100%
		MinRadius					=	120
		MaxRadius					=	200	
		MaxSelectedUnits	  		=	40
	End	
END	



;//--------------------------------------------
ExperienceLevel	MordorAttackTrollLevel1
	TargetNames							=	MordorAttackTroll MordorAttackTroll_Summoned
	RequiredExperience					=	EXPERIENCE_REQUIRED_EVIL_MONSTER_1
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MONSTER_1
	Rank								=	1
;	AttributeModifiers					=	EvilMonsterBasicKnockbackResist
	ExperienceAwardOwnGuysDie			= 	1
	SelectionDecal
		Texture							=	decal_I_level1	
		Texture2						=	decal_evil_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%	
		OpacityMax						=	100%
		MinRadius						=	85
		MaxRadius						=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorAttackTrollLevel2
	TargetNames							=	MordorAttackTroll
	RequiredExperience					=	EXPERIENCE_REQUIRED_EVIL_MONSTER_2
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MONSTER_2
	Rank								=	2
	ExperienceAwardOwnGuysDie			= 	1
	LevelUpFx							=	FX:GenericLevelUp2FX
	SelectionDecal
		Texture							=	decal_I_level2
		Texture2						=	decal_evil_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%	
		OpacityMax						=	100%
		MinRadius						=	85
		MaxRadius						=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorAttackTrollLevel3
	TargetNames							=	MordorAttackTroll
	RequiredExperience					=	EXPERIENCE_REQUIRED_EVIL_MONSTER_3
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MONSTER_3
	Rank								=	3
	ExperienceAwardOwnGuysDie			= 	0
	LevelUpFx							=	FX:GenericLevelUp3FX
	SelectionDecal
		Texture							=	decal_I_level3
		Texture2						=	decal_evil_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%	
		OpacityMax						=	100%
		MinRadius						=	85
		MaxRadius						=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorAttackTrollLevel4
	TargetNames							=	MordorAttackTroll
	RequiredExperience					=	EXPERIENCE_REQUIRED_EVIL_MONSTER_4
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MONSTER_4
	Rank								=	4
	ExperienceAwardOwnGuysDie			= 	0
	LevelUpFx							=	FX:GenericLevelUp4FX
	SelectionDecal
		Texture							=	decal_I_level4
		Texture2						=	decal_evil_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%	
		OpacityMax						=	100%
		MinRadius						=	85
		MaxRadius						=	140
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	MordorAttackTrollLevel5
	TargetNames							=	MordorAttackTroll
	RequiredExperience					=	EXPERIENCE_REQUIRED_EVIL_MONSTER_5
	ExperienceAward						=	EXPERIENCE_AWARD_EVIL_MONSTER_5
	Rank								=	5
	AttributeModifiers					=	MordorAttackTrollBonusRank5
	ExperienceAwardOwnGuysDie			= 	0
	LevelUpFx							=	FX:GenericLevelUp4FX
	SelectionDecal
		Texture							=	decal_I_level4
		Texture2						=	decal_evil_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%	
		OpacityMax						=	100%
		MinRadius						=	85
		MaxRadius						=	140
		MaxSelectedUnits				=	1	
	End	
END	



;----------------Eye of Sauron--------------
ExperienceLevel	EyeOSauron
	TargetNames						=	EyeOfSauron
	RequiredExperience					=	1	
	ExperienceAward						=	0
	Rank							=	10
	ExperienceAwardOwnGuysDie				= 	0
	SelectionDecal
		Texture						= 	HC_decal_Hero_Evil	
		Style						= 	SHADOW_ALPHA_DECAL
		OpacityMin					= 	50%	
		OpacityMax					= 	100%
		MinRadius					= 	100
		MaxRadius					= 	100
		MaxSelectedUnits				= 	1
	End		
End

;----------- SAURON ------------------
ExperienceLevel	Sauron1
	TargetNames					= 	SAURON
	RequiredExperience			= 	1	
	ExperienceAward		  		=	500
	ExperienceAwardOwnGuysDie	= 	0
	Rank						= 	10
	SelectionDecal
		Texture					= 	decal_hero_evil	
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin			  	=	50%	
		OpacityMax			  	=	100%
		MinRadius				= 	60
		MaxRadius				= 	200
		MaxSelectedUnits		= 	10
	End	
End

//////////////////////////////////////STRUCTURE////////////////////////////////////////////////
ExperienceLevel MordorTavernLevel1
	TargetNames				= MordorTavern
	RequiredExperience		= 1
	ExperienceAward			= MORDOR_TAVERN_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel MordorTavernLevel2
	TargetNames				= MordorTavern
	RequiredExperience		= 2	
	Rank					= 2
	ExperienceAward			= MORDOR_TAVERN_LVL2_EXP_AWARD
	Upgrades				= Upgrade_StructureLevel2
	AttributeModifiers		= MordorTavernProductionBonus2
	LevelUpFx				= FX:MordorTavernUpgrade
End

ExperienceLevel MordorTavernLevel3
	TargetNames				= MordorTavern
	RequiredExperience		= 3
	Rank					= 3
	ExperienceAward			= MORDOR_TAVERN_LVL3_EXP_AWARD
	Upgrades				= Upgrade_StructureLevel3
	AttributeModifiers		= MordorTavernProductionBonus3
	LevelUpFx				= FX:MordorTavernUpgrade
End


;------------------- MORDOR BUILDINGS ------------------------------------

;------------- MordorFortress-----------------
ExperienceLevel	MordorFortressLevel1
	TargetNames				= MordorFortressCitadel
	RequiredExperience		= 1
	ExperienceAward		  	= 150
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

;------------- MordorTrollCage -----------------

ExperienceLevel	MordorTrollCageLevel1
	TargetNames				= MordorTrollCage
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_TROLLCAGE_LVL1_EXP_AWARD
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	MordorTrollCageLevel2
	TargetNames				= MordorTrollCage
	RequiredExperience			= 2
	ExperienceAward		  		= MORDOR_TROLLCAGE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= MordorTrollCageHitPointModLvl2 MordorTrollCageBuildSpeedModLvl2
	Upgrades				= Upgrade_MordorTrollCageLevel2
	LevelUpFx				= FX:MordorTrollCageUpgrade
End

ExperienceLevel	MordorTrollCageLevel3
	TargetNames				= MordorTrollCage
	RequiredExperience			= 3
	ExperienceAward		  		= MORDOR_TROLLCAGE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= MordorTrollCageHitPointModLvl3 MordorTrollCageBuildSpeedModLvl3
	Upgrades				= Upgrade_MordorTrollCageLevel3
	LevelUpFx				= FX:MordorTrollCageUpgrade
End

;------------- MordorSiegeWorks -----------------

ExperienceLevel	MordorSiegeWorksLevel1
	TargetNames				= MordorSiegeWorks
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_SIEGEWORKS_LVL1_EXP_AWARD
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End	

ExperienceLevel	MordorSiegeWorksLevel2
	TargetNames				= MordorSiegeWorks
	RequiredExperience			= 2
	ExperienceAward		  		= MORDOR_SIEGEWORKS_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= MordorSiegeWorksBuildSpeedModLvl2 MordorSiegeWorksHitPointModLvl2
	Upgrades				= Upgrade_MordorSiegeWorksLevel2
	LevelUpFx				= FX:MordorSiegeWorksUpgrade
End

ExperienceLevel	MordorSiegeWorksLevel3
	TargetNames				= MordorSiegeWorks
	RequiredExperience			= 3
	ExperienceAward		  		= MORDOR_SIEGEWORKS_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= MordorSiegeWorksBuildSpeedModLvl3 MordorSiegeWorksHitPointModLvl3
	Upgrades				= Upgrade_MordorSiegeWorksLevel3
	LevelUpFx				= FX:MordorSiegeWorksUpgrade
End

;------------- MordorHaradrimPalace -----------------

ExperienceLevel	MordorHaradrimPalaceLevel1
	TargetNames				= MordorHaradrimPalace
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_HARADRIMPALACE_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	MordorHaradrimPalaceLevel2
	TargetNames				= MordorHaradrimPalace
	RequiredExperience			= 2
	ExperienceAward		  		= MORDOR_HARADRIMPALACE_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= MordorHaradrimPalaceHitPointModLvl2 MordorHaradrimPalaceBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:MordorHaradrimPalaceUpgrade
End

ExperienceLevel	MordorHaradrimPalaceLevel3
	TargetNames				= MordorHaradrimPalace
	RequiredExperience			= 3
	ExperienceAward		  		= MORDOR_HARADRIMPALACE_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= MordorHaradrimPalaceHitPointModLvl3 MordorHaradrimPalaceBuildSpeedModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:MordorHaradrimPalaceUpgrade
End

;------------- MordorOrcPit -----------------

ExperienceLevel	MordorOrcPitLevel1
	TargetNames				= MordorOrcPit
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_ORCPIT_LVL1_EXP_AWARD
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	MordorOrcPitLevel2
	TargetNames				= MordorOrcPit
	RequiredExperience			= 2
	ExperienceAward		  		= MORDOR_ORCPIT_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= MordorOrcPitHitPointModLvl2 MordorOrcPitBuildSpeedModLvl2
	Upgrades				= Upgrade_MordorOrcPitLevel2
	LevelUpFx				= FX:MordorOrcPitUpgrade
End

ExperienceLevel	MordorOrcPitLevel3
	TargetNames				= MordorOrcPit
	RequiredExperience			= 3
	ExperienceAward		  		= MORDOR_ORCPIT_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= MordorOrcPitHitPointModLvl3 MordorOrcPitBuildSpeedModLvl3
	Upgrades				= Upgrade_MordorOrcPitLevel3
	LevelUpFx				= FX:MordorOrcPitUpgrade
End

;------------- MordorMumakilPen -----------------

ExperienceLevel	MordorMumakilPenLevel1
	TargetNames				= MordorMumakilPen
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_MUMAKILPEN_LVL1_EXP_AWARD
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	MordorMumakilPenLevel2
	TargetNames				= MordorMumakilPen
	RequiredExperience			= 2
	ExperienceAward		  		= MORDOR_MUMAKILPEN_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= MordorMumakilPenHitPointModLvl2 MordorMumakilPenBuildSpeedModLvl2
	Upgrades				= Upgrade_MordorMumakilPenLevel2
	LevelUpFx				= FX:MordorMumakilPenUpgrade
End
	
ExperienceLevel	MordorMumakilPenLevel3
	TargetNames				= MordorMumakilPen
	RequiredExperience			= 3
	ExperienceAward		  		= MORDOR_MUMAKILPEN_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= MordorMumakilPenHitPointModLvl3 MordorMumakilPenBuildSpeedModLvl3
	Upgrades				= Upgrade_MordorMumakilPenLevel3
	LevelUpFx				= FX:MordorMumakilPenUpgrade
End

;------------- MordorSlaughterHouse -----------------

ExperienceLevel	MordorSlaughterHouseLevel1
	TargetNames				= MordorSlaughterHouse
	RequiredExperience			= 1
	ExperienceAward				= MORDOR_SLAUGHTERHOUSE_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	MordorSlaughterHouseLevel2
	TargetNames				= MordorSlaughterHouse
	RequiredExperience			= MORDOR_SLAUGHTERHOUSE_LVL2_EXP_NEEDED 
	ExperienceAward		  		= MORDOR_SLAUGHTERHOUSE_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= SlaughterhouseLevel2Production SlaughterhousePointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:MordorSlaughterHouseUpgrade
End
	
ExperienceLevel	MordorSlaughterHouseLevel3
	TargetNames				= MordorSlaughterHouse
	RequiredExperience			= MORDOR_SLAUGHTERHOUSE_LVL3_EXP_NEEDED
	ExperienceAward		  		= MORDOR_SLAUGHTERHOUSE_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= SlaughterhouseLevel3Production SlaughterhousePointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:MordorSlaughterHouseUpgrade
End	

;------------- MordorLumberMill -----------------

ExperienceLevel	MordorLumberMillLevel1
	TargetNames				= MordorLumberMill
	RequiredExperience			= 1
	ExperienceAward		  		= MORDOR_LUMBERMILL_LVL1_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	MordorLumberMillLevel2
	TargetNames				= MordorLumberMill
	RequiredExperience			= MORDOR_LUMBERMILL_LVL2_EXP_NEEDED
  	ExperienceAward		  		= MORDOR_LUMBERMILL_LVL2_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= MordorLumbermillLevel2Production MordorLumbermillPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:MordorLumberMillUpgrade
End
	
ExperienceLevel	MordorLumberMillLevel3
	TargetNames				= MordorLumberMill
	RequiredExperience			= MORDOR_LUMBERMILL_LVL3_EXP_NEEDED 
  	ExperienceAward		  		= MORDOR_LUMBERMILL_LVL3_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= MordorLumbermillLevel3Production MordorLumbermillPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:MordorLumberMillUpgrade
End	





///////////////////////////HEROES//////////////////////////////////////////////////////////////

;----------- GOTHMOG ------------------
ExperienceLevel	GothmogLevel1
	TargetNames			= MordorGothmog
	RequiredExperience		= 1	
	ExperienceAward			= GOTHMOG_LVL1_EXP_AWARD
	Rank				= 1
	SelectionDecal
		Texture			= decal_hero_evil	
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
End	

ExperienceLevel	GothmogLevel2
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL2_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL2_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage1
	Rank				= 2
	LevelUpFx			= FX:GandalfLevelUp1FX
	Upgrades			= Upgrade_GothmogIronHand
	SelectionDecal
		Texture			= decal_hero_evil	
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END	



ExperienceLevel GothmogLevel3
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL3_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL3_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage2
	Rank				= 3
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
End

ExperienceLevel GothmogLevel4
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL4_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL4_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage3
	Rank				= 4
	LevelUpFx			= FX:GandalfLevelUp1FX
	Upgrades			= Upgrade_GothmogCarnage
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
End


ExperienceLevel	GothmogLevel5
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL5_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL5_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage4
	Rank				= 5
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	GothmogLevel6
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL6_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL6_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage5
	Rank				= 6
	LevelUpFx			= FX:GandalfLevelUp1FX
	Upgrades			= Upgrade_GothmogDayoftheOrc
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	GothmogLevel7
	TargetNames			= MordorGothmog	
	RequiredExperience		= GOTHMOG_LVL7_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL7_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage6
	Rank				= 7
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	GothmogLevel8
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL8_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL8_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage7
	Rank				= 8
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	

END	

ExperienceLevel	GothmogLevel9
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL9_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL9_EXP_AWARD	
	;AttributeModifiers		= HeroLevelUpDamage8
	Rank				= 9
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	GothmogLevel10
	TargetNames			= MordorGothmog
	RequiredExperience		= GOTHMOG_LVL10_EXP_NEEDED 
	ExperienceAward			= GOTHMOG_LVL10_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage9 LurtzPassiveOutlawLeadership
	Rank				= 10
	LevelUpFx			= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture			= decal_hero_evil
		Style			= SHADOW_ALPHA_DECAL
		OpacityMin		= 50%	
		OpacityMax		= 100%
		MinRadius		= 40
		MaxRadius		= 200
		MaxSelectedUnits	= 40
	End	
END

;--------------- FELLBEAST HEROES --------------------------
;----------- FELLBEAST ------------------
ExperienceLevel	MordorFellBeastLevel1
	TargetNames					= 	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				= 	1	
	ExperienceAward		  			=	NAZGUL_LVL1_EXP_AWARD
	Rank						= 	1
	
	SelectionDecal
		Texture					= 	decal_hero_evil	
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin			  	=	50%	
		OpacityMax			  	=	100%
		MinRadius				= 	60
		MaxRadius				= 	200
		MaxSelectedUnits			= 	10
	End
End

ExperienceLevel	MordorFellBeastLevel2
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL2_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL2_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank						=	2
	LevelUpFx					=	FX:GandalfLevelUp1FX
	Upgrades					= 	Upgrade_BlackRiderDreadVisage
	
	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel3
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL3_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL3_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank						=	3
	LevelUpFx					=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel4
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL4_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL4_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank						=	4
	LevelUpFx					=	FX:GandalfLevelUp1FX
	Upgrades					=	Upgrade_BlackRiderMorgulBlade

	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel5
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL5_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL5_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage4	
	Rank						=	5
	LevelUpFx					=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel6
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL6_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL6_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage5	
	Rank						=	6
	LevelUpFx					=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel7
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL7_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL7_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage6	
	Rank						=	7
	LevelUpFx					=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel8
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL8_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL8_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage7
	Rank						=	8
	LevelUpFx					=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	MordorFellBeastLevel9
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL9_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL9_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage8
	Rank						=	9
	LevelUpFx					=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End
End

ExperienceLevel	MordorFellBeastLevel10
	TargetNames					=	MordorFellBeast MorgomirFellBeast KhamulFellBeast KhamulMounted MordorMorgromirMounted
	RequiredExperience				=	NAZGUL_LVL10_EXP_NEEDED
	ExperienceAward					=	NAZGUL_LVL10_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage9
	Rank						=	10
	LevelUpFx					=	FX:GandalfLevelUp1FX
	Upgrades					= 	Upgrade_BlackRiderNazgulScreech

	SelectionDecal
		Texture					=	decal_hero_good
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%
		OpacityMax				=	100%
		MinRadius				=	40
		MaxRadius				=	200	
		MaxSelectedUnits			=	40
	End
End


;----------- WITCHKING ------------------
ExperienceLevel	WitchKingLevel1
	TargetNames					= 	WITCHKING 
	RequiredExperience			= 	1	
	ExperienceAward		  		=	WITCHKING_LVL1_EXP_AWARD
	Rank						= 	1
	
	SelectionDecal
		Texture					= 	decal_hero_evil	
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin			  	=	50%	
		OpacityMax			  	=	100%
		MinRadius				= 	60
		MaxRadius				= 	200
		MaxSelectedUnits		= 	10
	End
End

ExperienceLevel	WitchKingLevel2
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL2_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL2_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_DreadVisage
	
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin			  	=	50%	
		OpacityMax			  	=	100%
		MinRadius				= 	60
		MaxRadius				= 	200
		MaxSelectedUnits		= 	10
	End	
End

ExperienceLevel	WitchKingLevel3
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL3_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL3_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	WitchKingLevel4
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL4_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL4_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	WitchKingLevel5
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL5_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL5_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage4	
	Rank							=	5
	LevelUpFx						=	FX:GandalfLevelUp1FX
	
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits				=	40
	End	
End

ExperienceLevel	WitchKingLevel6
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL6_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL6_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage5	
	Rank							=	6
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_Screech
	
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	WitchKingLevel7
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL7_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL7_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage6	
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	WitchKingLevel8
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL8_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL8_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage7
	Rank							=	8
	LevelUpFx						=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	WitchKingLevel9
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL9_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL9_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage8
	Rank							=	9
	LevelUpFx						=	FX:GandalfLevelUp1FX

	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End
End

ExperienceLevel	WitchKingLevel10
	TargetNames						=	WITCHKING 
	RequiredExperience				=	WITCHKING_LVL10_EXP_NEEDED
	ExperienceAward					=	WITCHKING_LVL10_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_HourOfTheWitchKing

	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End
End

;----------- Nazgul	RINGWRAITH ------------------
ExperienceLevel	RingWraithLevel1
	TargetNames					= 	MordorRingWraith 
	RequiredExperience				= 	1	
	ExperienceAward		  			= 	50
	Rank						= 	1
	SelectionDecal
		Texture					= 	decal_hero_evil	
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin			 	=	50%	
		OpacityMax			  	=	100%
		MinRadius				= 	40
		MaxRadius				= 	200
		MaxSelectedUnits			= 	40
	End	
End	

ExperienceLevel	RingWraithLevel2
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 100
	ExperienceAward		  =	75
	AttributeModifiers	= HeroLevelUpDamage1
	Rank						= 2
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil	
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel3
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 300
	ExperienceAward		  =	100	
	AttributeModifiers	= HeroLevelUpDamage2
	Rank						= 3
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel4
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 600
	ExperienceAward		  =	125	
	AttributeModifiers	= HeroLevelUpDamage3
	Rank						= 4
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel5
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 1000
	ExperienceAward		  =	150	
	AttributeModifiers	= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel6
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 1500
	ExperienceAward		  =	200	
	AttributeModifiers	= HeroLevelUpDamage5
	Rank						= 6
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	Upgrades				  =	Upgrade_RingWraithSpeechCraft
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel7
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 2100
	ExperienceAward		  =	300	
	AttributeModifiers	= HeroLevelUpDamage6
	Rank						= 7
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel8
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 2800
	ExperienceAward		  =	400	
	AttributeModifiers	= HeroLevelUpDamage7
	Rank						= 8
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	

END	

ExperienceLevel	RingWraithLevel9
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 3600
	ExperienceAward		  =	500	
	AttributeModifiers	= HeroLevelUpDamage8
	Rank						= 9
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	RingWraithLevel10
	TargetNames				= MordorRingWraith 
	RequiredExperience	= 4500
	ExperienceAward		  =	600	
	AttributeModifiers	= HeroLevelUpDamage9
	Rank						= 10
	LevelUpFx				  =	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					  =	SHADOW_ALPHA_DECAL
		OpacityMin			  =	50%	
		OpacityMax			  =	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits	= 40
	End	
END	



;----------- MOUTH OF SAURON ------------------
ExperienceLevel	MouthOfSauronLevel1
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	1	
	ExperienceAward						=	MOUTH_OF_SAURON_LVL1_EXP_AWARD
	Rank							=	1
;	Upgrades						=	
;	AttributeModifiers				=
	SelectionDecal
		Texture						=	decal_hero_evil	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel2
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL2_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL2_EXP_AWARD
	Rank							=	2
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage1
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel3
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL3_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL3_EXP_AWARD
	Rank							=	3
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel4
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL4_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL4_EXP_AWARD
	Rank							=	4
	Upgrades						=	Upgrade_MouthOfSauronDoubt
	AttributeModifiers				=	HeroLevelUpDamage3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel5
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL5_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL5_EXP_AWARD
	Rank							=	5
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel6
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL6_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL6_EXP_AWARD
	Rank							=	6
	Upgrades						=	Upgrade_MouthOfSauronDissent
	AttributeModifiers				=	HeroLevelUpDamage5
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel7
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL7_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL7_EXP_AWARD
	Rank							=	7
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage6
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel8
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL8_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL8_EXP_AWARD
	Rank							=	8
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel9
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL9_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL9_EXP_AWARD
	Rank							=	9
;	Upgrades						=	
	AttributeModifiers				=	HeroLevelUpDamage8
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	

ExperienceLevel	MouthOfSauronLevel10
	TargetNames						=	MordorMouthOfSauron MordorMouthOfSauronCalvalry
	RequiredExperience					=	MOUTH_OF_SAURON_LVL10_EXP_NEEDED
	ExperienceAward						=	MOUTH_OF_SAURON_LVL10_EXP_AWARD
	Rank							=	10
	Upgrades						=	Upgrade_MouthOfSauronEvilEye
	AttributeModifiers				=	HeroLevelUpDamage9
	LevelUpFx						=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	40
	End	
End	



;----------- BLACK RIDER ------------------
ExperienceLevel	BlackRiderLevel1
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 1	
	ExperienceAward		  	= 40
	Rank					= 1
	SelectionDecal
		Texture				= decal_hero_evil	
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
End	

ExperienceLevel	BlackRiderLevel2
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 50
	ExperienceAward			= 50
	AttributeModifiers		= HeroLevelUpDamage1
	Rank					= 2
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_BlackRiderDreadVisage
	SelectionDecal
		Texture				= decal_hero_evil	
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel3
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 100
	ExperienceAward			= 60	
	AttributeModifiers		= HeroLevelUpDamage2
	Rank					= 3
	LevelUpFx				= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel4
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 200
	ExperienceAward			= 70	
	AttributeModifiers		= HeroLevelUpDamage3
	Rank					= 4
	LevelUpFx				= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel5
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 300
	ExperienceAward			= 80	
	AttributeModifiers		= HeroLevelUpDamage4
	Rank					= 5
	LevelUpFx				= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel6
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 400
	ExperienceAward			= 90	
	AttributeModifiers		= HeroLevelUpDamage5
	Rank					= 6
	LevelUpFx				=	FX:GandalfLevelUp1FX
	Upgrades				=	Upgrade_BlackRiderMorgulBlade
	SelectionDecal
		Texture				= decal_hero_evil
		Style				=	SHADOW_ALPHA_DECAL
		OpacityMin			=	50%	
		OpacityMax			=	100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel7
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 500
	ExperienceAward			= 100	
	AttributeModifiers		= HeroLevelUpDamage6
	Rank					= 7
	LevelUpFx				=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				=	SHADOW_ALPHA_DECAL
		OpacityMin			=	50%	
		OpacityMax			=	100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel8
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 600
	ExperienceAward			= 120	
	AttributeModifiers		= HeroLevelUpDamage7
	Rank					= 8
	LevelUpFx				=	FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				=	SHADOW_ALPHA_DECAL
		OpacityMin			=	50%	
		OpacityMax			=	100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	

END	

ExperienceLevel	BlackRiderLevel9
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 700
	ExperienceAward			= 150	
	AttributeModifiers		= HeroLevelUpDamage8
	Rank					= 9
	LevelUpFx				= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

ExperienceLevel	BlackRiderLevel10
	TargetNames				= EvilMenBlackRider EvilMenBlackRiderMounted 
	RequiredExperience		= 800
	ExperienceAward			= 200	
	AttributeModifiers		= HeroLevelUpDamage9
	Rank					= 10
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_BlackRiderNazgulScreech
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits	= 40
	End	
END	

