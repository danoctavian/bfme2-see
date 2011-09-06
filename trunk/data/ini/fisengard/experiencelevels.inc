///////////////////////////
// EXPERIENCELEVELS.INC //
/////////////////////////
//Isengard//
///////////


;------------ Isengard ---------------
ExperienceLevel	IsengardGenericLevel1	
	TargetNames						=	Isengard
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


ExperienceLevel	WargLevel1
	TargetNames				  		=	IsengardWargRider_Slaved
	RequiredExperience		  			=	1
	ExperienceAward						=	10
	Rank							=	1
	SelectionDecal
		Texture						=	decal_evil_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  			=	40
	End	
END


;-----------------	ISENGARD UNITS ---------------------------

;---- NO LEVELING UNITS	
ExperienceLevel	IsengardBatteringRamLevel1
	TargetNames						=	IsengardBatteringRam
	RequiredExperience			  		=	1
	ExperienceAward						=	15
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

ExperienceLevel	IsengardExplosiveMineLevel1	
	TargetNames						=	IsengardExplosiveMine
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


ExperienceLevel	IsengardSiegeLadderLevel1
	TargetNames						=	IsengardSiegeLadder	
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

;-------------- ISENGARD BALLISTA ---------------
ExperienceLevel	IsengardBallistaLevel1
	TargetNames						=	IsengardBallista
	RequiredExperience					=	1
	ExperienceAward						=	ISENGARD_BALLISTA_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie				=	1
	InformUpdateModule					=	Yes
	Rank							=	1
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime					=	500	
	LevelUpTintPostColorTime				=	3000
	LevelUpTintSustainColorTime				=	500
	
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



;--------------- ISENGARD HEROES --------------------------	
;----------- SARUMAN ------------------	
ExperienceLevel	SarumanLevel1
	TargetNames					= IsengardSaruman
	RequiredExperience				= 1	
	ExperienceAward					= SARUMAN_LVL1_EXP_AWARD
	Rank						= 1
	SelectionDecal
		Texture					= decal_hero_evil	
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits			= 40
	End	
End	

ExperienceLevel	SarumanLevel2
	TargetNames					= IsengardSaruman
	RequiredExperience				= SARUMAN_LVL2_EXP_NEEDED 
	ExperienceAward					= SARUMAN_LVL2_EXP_AWARD
	Upgrades					= Upgrade_SarumanFireBall	
	
	AttributeModifiers				= HeroLevelUpDamage1
	Rank						= 2
	LevelUpFx					= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil	
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits			= 40
	End	
END	

ExperienceLevel	SarumanLevel3
	TargetNames					= IsengardSaruman
	RequiredExperience			= SARUMAN_LVL3_EXP_NEEDED 
	ExperienceAward				= SARUMAN_LVL3_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage2
	Rank						= 3
	LevelUpFx					= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits			= 40
	End	
END	

ExperienceLevel	SarumanLevel4
	TargetNames					= IsengardSaruman
	RequiredExperience				= SARUMAN_LVL4_EXP_NEEDED 
	ExperienceAward					= SARUMAN_LVL4_EXP_AWARD	
	AttributeModifiers				= HeroLevelUpDamage3
	Rank						= 4
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_SarumanDominate
	
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	SarumanLevel5
	TargetNames					= IsengardSaruman
	RequiredExperience			= SARUMAN_LVL5_EXP_NEEDED 
	ExperienceAward				= SARUMAN_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_SarumanSpeechCraft
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	SarumanLevel6
	TargetNames				= IsengardSaruman
	RequiredExperience	= SARUMAN_LVL6_EXP_NEEDED 
	ExperienceAward		  =	SARUMAN_LVL6_EXP_AWARD	
	AttributeModifiers	= HeroLevelUpDamage5
	Rank						= 6
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

ExperienceLevel	SarumanLevel7
	TargetNames				= IsengardSaruman
	RequiredExperience	= SARUMAN_LVL7_EXP_NEEDED 
	ExperienceAward		  =	SARUMAN_LVL7_EXP_AWARD	
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

ExperienceLevel	SarumanLevel8
	TargetNames				= IsengardSaruman
	RequiredExperience	= SARUMAN_LVL8_EXP_NEEDED 
	ExperienceAward		  =	SARUMAN_LVL8_EXP_AWARD	
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

ExperienceLevel	SarumanLevel9
	TargetNames				= IsengardSaruman
	RequiredExperience	= SARUMAN_LVL9_EXP_NEEDED 
	ExperienceAward		  =	SARUMAN_LVL9_EXP_AWARD	
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

ExperienceLevel	SarumanLevel10
	TargetNames					= IsengardSaruman
	RequiredExperience			= SARUMAN_LVL10_EXP_NEEDED 
	ExperienceAward				= SARUMAN_LVL10_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage9
	Rank						= 10
	LevelUpFx					=	FX:GandalfLevelUp1FX
	Upgrades					=	Upgrade_SarumanThunderBolt
	SelectionDecal
		Texture					= decal_hero_evil
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%	
		OpacityMax				=	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	


;----------- LURTZ ------------------
ExperienceLevel	LurtzLevel1
	TargetNames				= IsengardLurtz
	RequiredExperience		= 1	
	ExperienceAward			= LURTZ_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_LurtzCrippleTrigger	
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

ExperienceLevel	LurtzLevel2
	TargetNames				= IsengardLurtz
	RequiredExperience		= LURTZ_LVL2_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL2_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage1
	Rank					= 2
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



ExperienceLevel LurtzLevel3
	TargetNames					= IsengardLurtz
	RequiredExperience			= LURTZ_LVL3_EXP_NEEDED 
	ExperienceAward				= LURTZ_LVL3_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage2
	Rank				        = 3
	Upgrades					= Upgrade_LurtzCarnage
	LevelUpFx					= FX:GandalfLevelUp1FX
;	Upgrades					= Upgrade_LurtzRampage
	SelectionDecal
		Texture				    = decal_hero_evil
		Style				    = SHADOW_ALPHA_DECAL
		OpacityMin				= 50%
		OpacityMax				= 100%
		MinRadius			    = 40
		MaxRadius			    = 200
		MaxSelectedUnits		= 40
	End	
End

ExperienceLevel LurtzLevel4
	TargetNames					= IsengardLurtz
	RequiredExperience			= LURTZ_LVL4_EXP_NEEDED 
	ExperienceAward				= LURTZ_LVL4_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage3
	Rank				        = 4
	LevelUpFx					= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				    = decal_hero_evil
		Style				    = SHADOW_ALPHA_DECAL
		OpacityMin				= 50%
		OpacityMax				= 100%
		MinRadius			    = 40
		MaxRadius			    = 200
		MaxSelectedUnits		= 40
	End	
End


ExperienceLevel	LurtzLevel5
	TargetNames					= IsengardLurtz
	RequiredExperience			= LURTZ_LVL5_EXP_NEEDED 
	ExperienceAward				= LURTZ_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_LurtzLeadership
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	LurtzLevel6
	TargetNames				= IsengardLurtz
	RequiredExperience		= LURTZ_LVL6_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL6_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage5
	Rank					= 6
	Upgrades				= Upgrade_LurtzPillage
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

ExperienceLevel	LurtzLevel7
	TargetNames				= IsengardLurtz	
	RequiredExperience		= LURTZ_LVL7_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL7_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage6
	Rank					= 7
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

ExperienceLevel	LurtzLevel8
	TargetNames				= IsengardLurtz
	RequiredExperience		= LURTZ_LVL8_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL8_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage7
	Rank					= 8
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

ExperienceLevel	LurtzLevel9
	TargetNames				= IsengardLurtz
	RequiredExperience		= LURTZ_LVL9_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL9_EXP_AWARD	
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

ExperienceLevel	LurtzLevel10
	TargetNames				= IsengardLurtz
	RequiredExperience		= LURTZ_LVL10_EXP_NEEDED 
	ExperienceAward			= LURTZ_LVL10_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage9 LurtzPassiveOutlawLeadership

;	Upgrades				= Upgrade_LurtzStealth
	Rank					= 10
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


;----------- SHARKU ------------------
ExperienceLevel	SharkuLevel1
	TargetNames				= IsengardSharku
	RequiredExperience		= 1	
	ExperienceAward			= SHARKU_LVL1_EXP_AWARD
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

ExperienceLevel	SharkuLevel2
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL2_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL2_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage1
	Rank					= 2
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades			    = Upgrade_SharkuTameTheBeast
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



ExperienceLevel SharkuLevel3
	TargetNames					= IsengardSharku
	RequiredExperience			= SHARKU_LVL3_EXP_NEEDED 
	ExperienceAward				= SHARKU_LVL3_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage2
	Rank				        = 3
	LevelUpFx					= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				    = decal_hero_evil
		Style				    = SHADOW_ALPHA_DECAL
		OpacityMin				= 50%
		OpacityMax				= 100%
		MinRadius			    = 40
		MaxRadius			    = 200
		MaxSelectedUnits		= 40
	End	
End

ExperienceLevel SharkuLevel4
	TargetNames					= IsengardSharku
	RequiredExperience			= SHARKU_LVL4_EXP_NEEDED 
	ExperienceAward				= SHARKU_LVL4_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage3
	Rank				        = 4
	LevelUpFx					= FX:GandalfLevelUp1FX
	SelectionDecal
		Texture				    = decal_hero_evil
		Style				    = SHADOW_ALPHA_DECAL
		OpacityMin				= 50%
		OpacityMax				= 100%
		MinRadius			    = 40
		MaxRadius			    = 200
		MaxSelectedUnits		= 40
	End	
End


ExperienceLevel	SharkuLevel5
	TargetNames					= IsengardSharku
	RequiredExperience			= SHARKU_LVL5_EXP_NEEDED 
	ExperienceAward				= SHARKU_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_SharkuBloodHunt
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	SharkuLevel6
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL6_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL6_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage5
	Rank					= 6
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

ExperienceLevel	SharkuLevel7
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL7_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL7_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage6
	Rank					= 7
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

ExperienceLevel	SharkuLevel8
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL8_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL8_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage7
	Rank					= 8
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

ExperienceLevel	SharkuLevel9
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL9_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL9_EXP_AWARD	
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

ExperienceLevel	SharkuLevel10
	TargetNames				= IsengardSharku
	RequiredExperience		= SHARKU_LVL10_EXP_NEEDED 
	ExperienceAward			= SHARKU_LVL10_EXP_AWARD	
	AttributeModifiers		= HeroLevelUpDamage9
	Rank					= 10
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_SharkuManEater
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


;------------------Wormtongue----------------------
ExperienceLevel WormtongueLevel1
	TargetNames				= IsengardWormTongue
	RequiredExperience		= 1
	ExperienceAward			= WORMTONGUE_LVL1_EXP_AWARD
	LevelUpFx						=	FX:GandalfLevelUp1FX
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

ExperienceLevel WormtongueLevel2
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL2_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL2_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage1
	Rank					= 2
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

ExperienceLevel WormtongueLevel3
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL3_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL3_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage2
	Upgrades				= Upgrade_WormtongueVenomousWords
	Rank					= 3
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

ExperienceLevel WormtongueLevel4
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL4_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL4_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage3
	Rank					= 4
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

ExperienceLevel WormtongueLevel5
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL5_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL5_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage4
	Rank					= 5
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

ExperienceLevel WormtongueLevel6
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL6_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL6_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage5
	Rank					= 6
	Upgrades				= Upgrade_WormtongueBackstab
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

ExperienceLevel WormtongueLevel7
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL7_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL7_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage6
	Rank					= 7
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

ExperienceLevel WormtongueLevel8
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL8_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL8_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage7
	Rank					= 8
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

ExperienceLevel WormtongueLevel9
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL9_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL9_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage8
	Rank					= 9
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

ExperienceLevel WormtongueLevel10
	TargetNames				= IsengardWormTongue
	RequiredExperience		= WORMTONGUE_LVL10_EXP_NEEDED
	LevelUpFx						=	FX:GandalfLevelUp1FX
	ExperienceAward			= WORMTONGUE_LVL10_EXP_AWARD
	AttributeModifiers		= HeroLevelUpDamage9
	Rank					= 10
	Upgrades				= Upgrade_WormtongueCorrodeAllegiance
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




;----------------- ISENGARD BUILDINGS ------------------------------------

;------------- IsengardFortress-----------------
ExperienceLevel	IsengardFortressLevel1
	TargetNames				= IsengardFortressCitadel
	RequiredExperience			= 1
	ExperienceAward		  		= 150
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

;------------- IsengardFurnace -----------------

ExperienceLevel	FurnaceLevel1
	TargetNames				= IsengardFurnace
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_FURNACE_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	FurnaceLevel2
	TargetNames				= IsengardFurnace
	RequiredExperience			= ISENGARD_FURNACE_LVL2_EXP_NEEDED
	ExperienceAward		  		= ISENGARD_FURNACE_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= FurnaceLevel2Production FurnacePointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:IsengardFurnaceUpgrade
End
	
ExperienceLevel	FurnaceLevel3
	TargetNames				= IsengardFurnace
	RequiredExperience			= ISENGARD_FURNACE_LVL3_EXP_NEEDED
	ExperienceAward		  		= ISENGARD_FURNACE_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= FurnaceLevel3Production FurnacePointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:IsengardFurnaceUpgrade
End

;------------- IsengardLumberMill -----------------
ExperienceLevel	IsengardLumberMillLevel1
	TargetNames				= IsengardLumberMill
	RequiredExperience			= 1
  	ExperienceAward		  		= ISENGARD_LUMBERMILL_LVL1_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	IsengardLumberMillLevel2
	TargetNames				= IsengardLumberMill
	RequiredExperience			= ISENGARD_LUMBERMILL_LVL2_EXP_NEEDED
  	ExperienceAward		  		= ISENGARD_LUMBERMILL_LVL2_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardLumbermillLevel2Production IsengardLumbermillPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:IsengardLumberMillUpgrade
End
	
ExperienceLevel	IsengardLumberMillLevel3
	TargetNames				= IsengardLumberMill
	RequiredExperience			= ISENGARD_LUMBERMILL_LVL3_EXP_NEEDED
  	ExperienceAward		  		= ISENGARD_LUMBERMILL_LVL3_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardLumbermillLevel3Production IsengardLumbermillPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:IsengardLumberMillUpgrade
End	

;------------- IsengardUrukPit -----------------

ExperienceLevel	IsengardUrukPitLevel1
	TargetNames				= IsengardUrukPit
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_URUKPIT_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1 
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	IsengardUrukPitLevel2
	TargetNames				= IsengardUrukPit
	RequiredExperience			= 2
	ExperienceAward		  		= ISENGARD_URUKPIT_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardUrukPitHitPointModLvl2 IsengardUrukPitBuildSpeedModLvl2
	Upgrades				= Upgrade_IsengardUrukPitLevel2
	LevelUpFx				= FX:IsengardUrukPitUpgrade
End
	
ExperienceLevel	IsengardUrukPitLevel3
	TargetNames				= IsengardUrukPit
	RequiredExperience			= 3
	ExperienceAward		  		= ISENGARD_URUKPIT_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardUrukPitHitPointModLvl3 IsengardUrukPitBuildSpeedModLvl3
	Upgrades				= Upgrade_IsengardUrukPitLevel3
	LevelUpFx				= FX:IsengardUrukPitUpgrade
End

;------------- IsengardWargSentry -----------------

ExperienceLevel	IsengardWargSentryLevel1
	TargetNames				= IsengardWargSentry
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_WARG_SENTRY_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1 
	Upgrades				= Upgrade_StructureLevel1
End

;------------- IsengardSiegeWorks -----------------

ExperienceLevel	IsengardSiegeWorksLevel1
	TargetNames				= IsengardSiegeWorks
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_URUKSIEGE_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	IsengardSiegeWorksLevel2
	TargetNames				= IsengardSiegeWorks
	RequiredExperience			= 2
	ExperienceAward		  		= ISENGARD_URUKSIEGE_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardSiegeWorksHitPointModLvl2 IsengardSiegeWorksBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:IsengardSiegeWorksUpgrade
End
	
ExperienceLevel	IsengardSiegeWorksLevel3
	TargetNames				= IsengardSiegeWorks
	RequiredExperience			= 3
	ExperienceAward		  		= ISENGARD_URUKSIEGE_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardSiegeWorksHitPointModLvl3 IsengardSiegeWorksBuildSpeedModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:IsengardSiegeWorksUpgrade
End

;------------- IsengardWargPit -----------------

ExperienceLevel	IsengardWargPitLevel1
	TargetNames				= IsengardWargPit
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_WARGPIT_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	IsengardWargPitLevel2
	TargetNames				= IsengardWargPit
	RequiredExperience			= 2
	ExperienceAward		  		= ISENGARD_WARGPIT_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardWargPitHitPointModLvl2 IsengardWargPitBuildSpeedModLvl2
	Upgrades				= Upgrade_IsengardWargPitLevel2
	LevelUpFx				= FX:IsengardWargPitUpgrade
End

ExperienceLevel	IsengardWargPitLevel3
	TargetNames				= IsengardWargPit
	RequiredExperience			= 3
	ExperienceAward		  		= ISENGARD_WARGPIT_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardWargPitHitPointModLvl3 IsengardWargPitBuildSpeedModLvl3
	Upgrades				= Upgrade_IsengardWargPitLevel3
	LevelUpFx				= FX:IsengardWargPitUpgrade
End

;------------- IsengardArmory -----------------

ExperienceLevel	IsengardArmoryLevel1
	TargetNames				= IsengardArmory
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_ARMORY_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	IsengardArmoryLevel2
	TargetNames				= IsengardArmory
	RequiredExperience			= 2
	ExperienceAward		  		= ISENGARD_ARMORY_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardArmoryHitPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:IsengardArmoryUpgrade
End

ExperienceLevel	IsengardArmoryLevel3
	TargetNames				= IsengardArmory
	RequiredExperience			= 3
	ExperienceAward		  		= ISENGARD_ARMORY_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardArmoryHitPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:IsengardArmoryUpgrade
End


;------------- Isengard Clan Steading ----------------

ExperienceLevel	IsengardClanSteadingLevel1
	TargetNames				= IsengardTavern
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_TAVERN_LVL1_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	IsengardClanSteadingLevel2
	TargetNames				= IsengardTavern
	RequiredExperience			= 2
	ExperienceAward		  		= ISENGARD_TAVERN_LVL2_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= IsengardWargPitHitPointModLvl2 IsengardWargPitBuildSpeedModLvl2
	Upgrades				= Upgrade_IsengardTavernLevel2
	LevelUpFx				= FX:MordorTavernUpgrade
End

ExperienceLevel	IsengardClanSteadingLevel3
	TargetNames				= IsengardTavern
	RequiredExperience			= 3
	ExperienceAward		  		= ISENGARD_TAVERN_LVL3_EXP_AWARD
	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= IsengardWargPitHitPointModLvl3 IsengardWargPitBuildSpeedModLvl3
	Upgrades				= Upgrade_IsengardTavernLevel3
	LevelUpFx				= FX:MordorTavernUpgrade
End

;------------- Isengard Wall Upgrades -----------------

ExperienceLevel	IsengardCastleWallHub1
	TargetNames				= IsengardCastleWallHub
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_CASTLE_WALL_HUB_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	IsengardCastleWallGate1
	TargetNames				= IsengardCastleWallGate
	RequiredExperience			= 1
	ExperienceAward		  		= ISENGARD_CASTLE_WALL_GATE_EXP_AWARD
	Rank					= 1
End