; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Experiencelevels.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

; ------------------------------------------------------------------------------ SEE!
ExperienceLevel	WildTrollDrum1	//Based on Gondor's hero statue!
	TargetNames					=	TrollDrum
	RequiredExperience			=	1
	Rank						=	1
	AttributeModifiers				=	BasicLevelUpProduction1
	Upgrades						=	Upgrade_StructureLevel1
	ExperienceAward				=	25
	SelectionDecal
		Texture						=	decal_hero_evil
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	GOBLIN_DRUM_AOE_RADIUS_DECAL //is 440, was 450
		MaxRadius					=	GOBLIN_DRUM_AOE_RADIUS_DECAL //is 450, was 450
		MaxSelectedUnits	  			=	40
	End		
End	
; ------------------------------------------------------------------------------

;------------ Wild ---------------
ExperienceLevel	WildGenericLevel1	
	TargetNames						=	Wild  
	RequiredExperience					=	1
	ExperienceAward						=	0
	ExperienceAwardOwnGuysDie				=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius					=	HORDE_DECAL_MIN_RADIUS
		MaxRadius					=	200	
		MaxSelectedUnits				=	40
	End	
END	


;---------------Fire Drake-------------------------
ExperienceLevel	FireDrakeLevel10
	TargetNames				  		=	WildFireDrake FireDrake_Slaved WildFireDrake_Summoned
	RequiredExperience		  		=	1
	ExperienceAward					=	30
	AttributeModifiers				=	EvilMonsterBonusRank10
	Rank							=	10
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO ;decal_hero_evil ;
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  		=	40
	End	
END

ExperienceLevel	FortressFireDrakeLevel5
	TargetNames				  		=	WildFortressFireDrake
	RequiredExperience		  		=	1
	ExperienceAward					=	30
	AttributeModifiers				=	EvilMonsterBonusRank5
	Rank							=	5
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_evil_CO ;decal_hero_evil ;
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200
		MaxSelectedUnits	  		=	40
	End	
END







;--------------- WILD HEROES --------------------------	
;----------- GORKIL THE GOBLIN KING ------------------	
ExperienceLevel	WildGoblinKingLevel1
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= 1	
	ExperienceAward				= WILD_GOBLIN_KING_LVL1_EXP_AWARD
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

ExperienceLevel	WildGoblinKingLevel2
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL2_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL2_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage1
	Rank						= 2
	LevelUpFx					= FX:GandalfLevelUp1FX

	Upgrades					= Upgrade_ObjectLevel2
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

ExperienceLevel	WildGoblinKingLevel3
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL3_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL3_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage2
	Rank						= 3
	LevelUpFx					= FX:GandalfLevelUp1FX

	Upgrades					= Upgrade_ObjectLevel3	
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

ExperienceLevel	WildGoblinKingLevel4
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL4_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL4_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage3
	Rank						= 4
	LevelUpFx					= FX:GandalfLevelUp1FX
	
	Upgrades					= Upgrade_ObjectLevel4

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

ExperienceLevel	WildGoblinKingLevel5
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL5_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildGoblinKingLevel6
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL6_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL6_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage5
	Rank						= 6
	LevelUpFx					=	FX:GandalfLevelUp1FX
	
	Upgrades					= Upgrade_ObjectLevel6
	
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				=	50%	
		OpacityMax				=	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	WildGoblinKingLevel7
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL7_EXP_NEEDED 
	ExperienceAward				=	WILD_GOBLIN_KING_LVL7_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage6
	Rank						= 7
	LevelUpFx					=	FX:GandalfLevelUp1FX
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

ExperienceLevel	WildGoblinKingLevel8
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL8_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL8_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage7
	Rank						= 8
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildGoblinKingLevel9
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL9_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL9_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage8
	Rank						= 9
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildGoblinKingLevel10
	TargetNames					= WildGoblinKing GreatGoblin
	RequiredExperience			= WILD_GOBLIN_KING_LVL10_EXP_NEEDED 
	ExperienceAward				= WILD_GOBLIN_KING_LVL10_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage9
	Rank						= 10
	LevelUpFx					= FX:GandalfLevelUp1FX
	
	Upgrades					= Upgrade_ObjectLevel10
	
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

;----------------DROGOTH-------------------------------------------------------------------------------
ExperienceLevel	DrogothLevel1
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= 1	
	ExperienceAward				= DROGOTH_LVL1_EXP_AWARD
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

ExperienceLevel	DrogothLevel2
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL2_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL2_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage1
	Rank						= 2
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel3
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL3_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL3_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage2
	Rank						= 3
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel3
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

ExperienceLevel	DrogothLevel4
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL4_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL4_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage3
	Rank						= 4
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel5
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL5_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel6
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL6_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL6_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage5
	Rank						= 6
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel6
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				=	50%	
		OpacityMax				=	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	DrogothLevel7
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL7_EXP_NEEDED 
	ExperienceAward				=	DROGOTH_LVL7_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage6
	Rank						= 7
	LevelUpFx					=	FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel8
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL8_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL8_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage7
	Rank						= 8
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel9
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL9_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL9_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage8
	Rank						= 9
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	DrogothLevel10
	TargetNames					= Drogoth WildFortressDragon
	RequiredExperience			= DROGOTH_LVL10_EXP_NEEDED 
	ExperienceAward				= DROGOTH_LVL10_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage9
	Rank						= 10
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel10
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End
End


;----------------WILD SHELOB-------------------------------------------------------------------------------
ExperienceLevel	WildShelobLevel1
	TargetNames					= WildShelob
	RequiredExperience			= 1	
	ExperienceAward				= WILD_SHELOB_LVL1_EXP_AWARD
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

ExperienceLevel	WildShelobLevel2
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL2_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL2_EXP_AWARD
	AttributeModifiers			= HeroLevelUpDamage1
	Rank						= 2
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel3
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL3_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL3_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage2
	Rank						= 3
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel3
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

ExperienceLevel	WildShelobLevel4
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL4_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL4_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage3
	Rank						= 4
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel5
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL5_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL5_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage4
	Rank						= 5
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel6
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL6_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL6_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage5
	Rank						= 6
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel6
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				=	50%	
		OpacityMax				=	100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End	
END	

ExperienceLevel	WildShelobLevel7
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL7_EXP_NEEDED 
	ExperienceAward				=	WILD_SHELOB_LVL7_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage6
	Rank						= 7
	LevelUpFx					=	FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel8
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL8_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL8_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage7
	Rank						= 8
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel9
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL9_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL9_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage8
	Rank						= 9
	LevelUpFx					= FX:GandalfLevelUp1FX
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

ExperienceLevel	WildShelobLevel10
	TargetNames					= WildShelob
	RequiredExperience			= WILD_SHELOB_LVL10_EXP_NEEDED 
	ExperienceAward				= WILD_SHELOB_LVL10_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage9
	Rank						= 10
	LevelUpFx					= FX:GandalfLevelUp1FX
	Upgrades					= Upgrade_ObjectLevel10
	SelectionDecal
		Texture					= decal_hero_evil
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%	
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End
End


;---------------------- AZOG ---------------------------
ExperienceLevel	AzogLevel10
	TargetNames				= WildAzog
	RequiredExperience			= AZOG_LVL10_EXP_NEEDED 
	ExperienceAward				= AZOG_LVL10_EXP_AWARD	
	Rank					= 10
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_ObjectLevel10 Upgrade_ObjectLevel9 Upgrade_ObjectLevel8 Upgrade_ObjectLevel7 Upgrade_ObjectLevel6 Upgrade_ObjectLevel5 Upgrade_ObjectLevel4 Upgrade_ObjectLevel3 Upgrade_ObjectLevel2 Upgrade_ObjectLevel1
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits		= 40
	End
End





;-------------------- Wild Buildings ------------------------------

;-------------WildFortress---------------------
ExperienceLevel	DwarvenFortressLevel1
	TargetNames				= WildFortressCitadel
	RequiredExperience			= 1
	ExperienceAward		  		= 150
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

;------------- WildLumberMill -----------------
ExperienceLevel	WildLumberMillLevel1
	TargetNames				= WildLumberMill
	RequiredExperience			= 1
  	ExperienceAward		  		= WILD_LUMBERMILL_LVL1_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 1
	AttributeModifiers			= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	WildLumberMillLevel2
	TargetNames				= WildLumberMill
	RequiredExperience			= WILD_LUMBERMILL_LVL2_EXP_NEEDED
  	ExperienceAward		  		= WILD_LUMBERMILL_LVL2_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 2
	AttributeModifiers			= WildLumbermillLevel2Production WildLumbermillPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:WildLumberMillUpgrade
End
	
ExperienceLevel	WildLumberMillLevel3
	TargetNames				= WildLumberMill
	RequiredExperience			= WILD_LUMBERMILL_LVL3_EXP_NEEDED
  	ExperienceAward		  		= WILD_LUMBERMILL_LVL3_EXP_AWARD
  	ExperienceAwardOwnGuysDie		= 0
	Rank					= 3
	AttributeModifiers			= WildLumbermillLevel3Production WildLumbermillPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:WildLumberMillUpgrade
End	

;------------- Wild Cave ----------------- SEE!

ExperienceLevel	WildCaveLevel1
	TargetNames				= GoblinCave
	RequiredExperience		= 1
	ExperienceAward		  	= GOBLIN_CAVE_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades					= Upgrade_StructureLevel1
End
	
ExperienceLevel	WildCaveLevel2
	TargetNames				= GoblinCave
	RequiredExperience		= GOBLIN_CAVE_LVL2_EXP_NEEDED
	ExperienceAward		  	= GOBLIN_CAVE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= WildCaveHitPointModLvl2 WildCaveBuildSpeedModLvl2
	Upgrades					= Upgrade_StructureLevel2
	LevelUpFx				= FX:WildCaveUpgrade
End
	
ExperienceLevel	WildCaveLevel3
	TargetNames				= GoblinCave
	RequiredExperience		= GOBLIN_CAVE_LVL3_EXP_NEEDED
	ExperienceAward		  	= GOBLIN_CAVE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= WildCaveHitPointModLvl3 WildCaveBuildSpeedModLvl3
	Upgrades					= Upgrade_StructureLevel3
	LevelUpFx				= FX:WildCaveUpgrade
End	

;------------- Wild Fissure -----------------

ExperienceLevel	WildFissureLevel1
	TargetNames				= GoblinFissure
	RequiredExperience			= 1
	ExperienceAward		  		= GOBLIN_FISSURE_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	WildFissureLevel2
	TargetNames				= GoblinFissure
	RequiredExperience			= GOBLIN_FISSURE_LVL2_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_FISSURE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= WildFissureHitPointModLvl2 WildFissureBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:WildFissureUpgrade
End
	
ExperienceLevel	WildFissureLevel3
	TargetNames				= GoblinFissure
	RequiredExperience			= GOBLIN_FISSURE_LVL3_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_FISSURE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= WildFissureHitPointModLvl3 WildFissureBuildSpeedModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:WildFissureUpgrade
End	

;------------- Wild SpiderPit -----------------

ExperienceLevel	WildSpiderPitLevel1
	TargetNames				= WildSpiderPit
	RequiredExperience			= 1
	ExperienceAward		  		= GOBLIN_SPIDERPIT_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	WildSpiderPitLevel2
	TargetNames				= WildSpiderPit
	RequiredExperience			= GOBLIN_SPIDERPIT_LVL2_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_SPIDERPIT_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= WildSpiderPitHitPointModLvl2 WildSpiderPitBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:WildSpiderPitUpgrade
End
	
ExperienceLevel	WildSpiderPitLevel3
	TargetNames				= WildSpiderPit
	RequiredExperience			= GOBLIN_SPIDERPIT_LVL3_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_SPIDERPIT_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= WildSpiderPitHitPointModLvl3 WildSpiderPitBuildSpeedModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:WildSpiderPitUpgrade
End	

;------------- Wild WolfDen -----------------

ExperienceLevel	WildWolfDenLevel1
	TargetNames					= WolfWargPit
	RequiredExperience			= 1
	ExperienceAward		  		= GOBLIN_WOLFDEN_LVL1_EXP_AWARD	
	Rank						= 1
	Upgrades						= Upgrade_StructureLevel1
End
	
ExperienceLevel	WildWolfDenLevel2
	TargetNames					= WolfWargPit
	RequiredExperience			= GOBLIN_WOLFDEN_LVL2_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_WOLFDEN_LVL2_EXP_AWARD
	Rank						= 2
	AttributeModifiers				= WildFissureHitPointModLvl2 WildFissureBuildSpeedModLvl2
	Upgrades						= Upgrade_StructureLevel2
	LevelUpFx					= FX:WildWolfDenUpgrade
End
	
ExperienceLevel	WildWolfDenLevel3
	TargetNames					= WolfWargPit
	RequiredExperience			= GOBLIN_WOLFDEN_LVL3_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_WOLFDEN_LVL3_EXP_AWARD
	Rank						= 3
	AttributeModifiers				= WildFissureHitPointModLvl3 WildFissureBuildSpeedModLvl3
	Upgrades						= Upgrade_StructureLevel3
	LevelUpFx					= FX:WildWolfDenUpgrade
End	


;------------- Wild TreasureTrove -----------------

ExperienceLevel	WildTreasureTroveLevel1
	TargetNames				= WildTreasureTrove
	RequiredExperience			= 1
	ExperienceAward		  		= GOBLIN_TREASURETROVE_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1 Upgrade_WildTreasureTroveScavenger1
End
	
ExperienceLevel	WildTreasureTroveLevel2
	TargetNames				= WildTreasureTrove
	RequiredExperience			= GOBLIN_TREASURETROVE_LVL2_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_TREASURETROVE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= WildTreasureTroveHitPointModLvl2 WildTreasureTroveBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2 Upgrade_WildTreasureTroveScavenger2
	LevelUpFx				= FX:WildTreasureTroveUpgrade
End
	
ExperienceLevel	WildTreasureTroveLevel3
	TargetNames				= WildTreasureTrove
	RequiredExperience			= GOBLIN_TREASURETROVE_LVL3_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_TREASURETROVE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= WildTreasureTroveHitPointModLvl3 WildTreasureTroveBuildSpeedModLvl3
	Upgrades				= Upgrade_StructureLevel3 Upgrade_WildTreasureTroveScavenger3
	LevelUpFx				= FX:WildTreasureTroveUpgrade
End	

;------------- Wild Mine shaft -----------------

ExperienceLevel	WildMineShaftLevel1
	TargetNames				= WildMineShaft
	RequiredExperience			= 1
	ExperienceAward		  		= GOBLIN_MINE_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	WildMineShaftLevel2
	TargetNames				= WildMineShaft
	RequiredExperience			= GOBLIN_MINE_LVL2_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_MINE_LVL2_EXP_AWARD
	Rank					= 2
	LevelUpFx				= FX:WildMineShaftUpgrade
	Upgrades				= Upgrade_StructureLevel2
	AttributeModifiers			= WildMineShaftProductionBonus1 WildMineShaftArmorBonus1 WildMineShaftHealthBonus1
End

ExperienceLevel	WildMineShaftLevel3
	TargetNames				= WildMineShaft
	RequiredExperience			= GOBLIN_MINE_LVL3_EXP_NEEDED
	ExperienceAward		  		= GOBLIN_MINE_LVL3_EXP_AWARD
	Rank					= 3
	LevelUpFx				= FX:WildMineShaftUpgrade
	Upgrades				= Upgrade_StructureLevel3
	AttributeModifiers			= WildMineShaftProductionBonus2 WildMineShaftArmorBonus1 WildMineShaftHealthBonus2
End

///////////////////////////////////////
ExperienceLevel	CaveTrollHeroLevel10
	TargetNames				= GoblinCaveTrollHero
	RequiredExperience			= 0 
	ExperienceAward				= AZOG_LVL10_EXP_AWARD	
	AttributeModifiers			= HeroLevelUpDamage9
	Rank					= 10
	LevelUpFx				= FX:GandalfLevelUp1FX
	Upgrades				= Upgrade_ObjectLevel10 Upgrade_ObjectLevel9 Upgrade_ObjectLevel8 Upgrade_ObjectLevel7 Upgrade_ObjectLevel6 Upgrade_ObjectLevel5 Upgrade_ObjectLevel4 Upgrade_ObjectLevel3 Upgrade_ObjectLevel2 Upgrade_ObjectLevel1
	SelectionDecal
		Texture				= decal_hero_evil
		Style				= SHADOW_ALPHA_DECAL
		OpacityMin			= 50%	
		OpacityMax			= 100%
		MinRadius			= 40
		MaxRadius			= 200
		MaxSelectedUnits		= 40
	End
End