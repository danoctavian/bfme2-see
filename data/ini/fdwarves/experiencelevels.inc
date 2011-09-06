///////////////////////////
// EXPERIENCELEVELS.INC //
/////////////////////////
//Dwarves//
//////////


;------------ Dwarves	---------------	
ExperienceLevel	DwarvesGenericLevel1
	TargetNames				  		=	Dwarves
	RequiredExperience	  			=	1
	ExperienceAward					=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_G_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius					=	HORDE_DECAL_MIN_RADIUS
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End
END


;----------- Summoned Guardians ------------------
ExperienceLevel	DwarvenGuardianHorde_SummonedLevel1
	TargetNames					=	DwarvenGuardianHorde_Summoned DwarvenGuardian_Summoned
	RequiredExperience				=	1
	ExperienceAward					=	DAIN_LVL1_EXP_AWARD
	Rank						=	5
	AttributeModifiers				=	GoodTroopBonusRank2 GoodTroopBonusRank3 GoodTroopBonusRank4 GoodTroopBonusRank5
	Upgrades					=	Upgrade_ObjectLevel1 Upgrade_ObjectLevel2 Upgrade_ObjectLevel3 Upgrade_ObjectLevel4 Upgrade_ObjectLevel5
	SelectionDecal
		Texture					=	decal_G_level4
		Texture2				=	decal_good_CO
		Style					=	SHADOW_MERGE_DECAL
		OpacityMin				=	80%
		OpacityMax				=	100%
		MinRadius			  	=	HORDE_DECAL_MIN_RADIUS
		MaxRadius				=	200
		MaxSelectedUnits	  		=	40
	End	
End	
;----------- Summoned Axe Throwers------------------
ExperienceLevel	DwarvenAxeThrowerHorde_SummonedLevel1
	TargetNames					=	DwarvenAxeThrowerHorde_Summoned DwarvenAxeThrower_Summoned
	RequiredExperience				=	1
	ExperienceAward					=	DAIN_LVL1_EXP_AWARD
	Rank						=	5
	AttributeModifiers				=	GoodTroopBonusRank2 GoodTroopBonusRank3 GoodTroopBonusRank4 GoodTroopBonusRank5
	SelectionDecal
		Texture					=	decal_G_level4
		Texture2				=	decal_good_CO
		Style					=	SHADOW_MERGE_DECAL
		OpacityMin				=	80%
		OpacityMax				=	100%
		MinRadius			  	=	HORDE_DECAL_MIN_RADIUS
		MaxRadius				=	200
		MaxSelectedUnits	  		=	40
	End	
End	

;----------- Summoned Phalanx Horde------------------
ExperienceLevel	DwarvenPhalanxHorde_SummonedLevel1
	TargetNames					=	DwarvenPhalanxHorde_Summoned DwarvenPhalanx_Summoned DwarvenPhalanxHordePorcupine_Summoned
	RequiredExperience				=	1
	ExperienceAward					=	DAIN_LVL1_EXP_AWARD
	Rank						=	5
	AttributeModifiers				=	GoodTroopBonusRank2 GoodTroopBonusRank3 GoodTroopBonusRank4 GoodTroopBonusRank5
	SelectionDecal
		Texture					=	decal_G_level4
		Texture2				=	decal_good_CO
		Style					=	SHADOW_MERGE_DECAL
		OpacityMin				=	80%
		OpacityMax				=	100%
		MinRadius			  	=	HORDE_DECAL_MIN_RADIUS
		MaxRadius				=	200
		MaxSelectedUnits	  		=	40
	End	
End	



;--------------- DWARVEN HEROES --------------------------
;----------- DAIN ------------------
ExperienceLevel	DainLevel1
	TargetNames					=	DwarvenDain
	RequiredExperience				=	1	
	ExperienceAward					=	DAIN_LVL1_EXP_AWARD
	Rank						=	1
	Upgrades					=	Upgrade_DainLeadership
	SelectionDecal
		Texture					=	decal_hero_good	
		Style					=	SHADOW_ALPHA_DECAL
		OpacityMin				=	50%	
		OpacityMax				=	100%
		MinRadius				=	40 ;16
		MaxRadius				=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
End	

ExperienceLevel	DainLevel2
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL2_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL2_EXP_AWARD
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL	
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel3
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL3_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL3_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel4
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL4_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=   Upgrade_DainMightyRage
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel5
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL5_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL5_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage4
	Rank							=	5	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel6
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL6_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL6_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage5
	Rank							=	6	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel7
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL7_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_DainStubbornPride
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel8
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL8_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL8_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage7
	Rank							=	8
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	DainLevel9
	TargetNames						=	DwarvenDain
	RequiredExperience				=	DAIN_LVL9_EXP_NEEDED 
	ExperienceAward					=	DAIN_LVL9_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage8
	Rank							=	9
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits				=	40 ;1
	End
END	

ExperienceLevel	DainLevel10
	TargetNames						=	DwarvenDain
	RequiredExperience					=	DAIN_LVL10_EXP_NEEDED 
	ExperienceAward						=	DAIN_LVL10_EXP_AWARD	
  	AttributeModifiers					=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_DainRoyalGuard
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits				=	40 ;1
	End	
END	

;----------- CAPTAIN OF DALE ------------
ExperienceLevel	CaptainofDaleLevel1
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	1	
	ExperienceAward						=	CAPTAINOFDALE_LVL1_EXP_AWARD
	Rank							=	1
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1
	End
END	

ExperienceLevel	CaptainofDaleLevel2
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL2_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL2_EXP_AWARD
	AttributeModifiers					=	HeroLevelUpDamage1
	Rank							=	2
	Upgrades						=	Upgrade_ObjectLevel2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End		
END	

ExperienceLevel	CaptainofDaleLevel3
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL3_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL3_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End
END

ExperienceLevel	CaptainofDaleLevel4
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL4_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL4_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage3
	Rank							=	4
	Upgrades						=	Upgrade_LegolasTrainArchers
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1
	End		
END	

ExperienceLevel	CaptainofDaleLevel5
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL5_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL5_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage4
	Rank							=	5
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End		
END	

ExperienceLevel	CaptainofDaleLevel6
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL6_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL6_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage5
	Rank							=	6
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	CaptainofDaleLevel7
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL7_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL7_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage6
	Rank							=	7
;	Upgrades						=	Upgrade_FaramirLeadership
	Upgrades						=	Upgrade_ObjectLevel10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
  SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	CaptainofDaleLevel8
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL8_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL8_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage7
	Rank							=	8
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1
	End	
END	

ExperienceLevel	CaptainofDaleLevel9
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL9_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL9_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage8
	Rank							=	9
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End	
END	

ExperienceLevel	CaptainofDaleLevel10
	TargetNames						=	DwarvenCaptainofDale	
	RequiredExperience					=	CAPTAINOFDALE_LVL10_EXP_NEEDED
	ExperienceAward						=	CAPTAINOFDALE_LVL10_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits				=	1	
	End	
END

;----------- GIMLI ------------------
ExperienceLevel	GimliLevel1
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	1	
	ExperienceAward					=	GIMLI_LVL1_EXP_AWARD
	Rank							=	1
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
End	

ExperienceLevel	GimliLevel2
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL2_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL2_EXP_AWARD
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_GimliLeapTrigger
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel3
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL3_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL3_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel4
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL4_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel5
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL5_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL5_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage4
	Rank							=	5
	Upgrades						=	Upgrade_GimliSlayerTrigger
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel6
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL6_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL6_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage5
	Rank							=	6
	Upgrades						=	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel7
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL7_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel8
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL8_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL8_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage7
	Rank							=	8
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GimliLevel9
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL9_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL9_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage8
	Rank							=	9
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End
END	

ExperienceLevel	GimliLevel10
	TargetNames						=	RohanGimli DwarvenGimli
	RequiredExperience				=	GIMLI_LVL10_EXP_NEEDED 
	ExperienceAward					=	GIMLI_LVL10_EXP_AWARD	
  	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_GimliMonsterSlayer
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

;----------- GLOIN ------------------
ExperienceLevel	GloinLevel1
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	1	
	ExperienceAward					=	GLOIN_LVL1_EXP_AWARD
	Rank							=	1
	Upgrades						=	Upgrade_EnableDwarvenGloinSlam
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
End	

ExperienceLevel	GloinLevel2
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL2_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL2_EXP_AWARD
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel3
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL3_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL3_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel4
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL4_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	Upgrades						=	Upgrade_EnableDwarvenGloinShakeFoundation
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel5
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL5_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL5_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage4
	Rank							=	5
	Upgrades						=	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good	
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel6
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL6_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL6_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage5
	Rank							=	6
	Upgrades						=	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel7
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL7_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel8
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL8_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL8_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage7
	Rank							=	8
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

ExperienceLevel	GloinLevel9
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL9_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL9_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage8
	Rank							=	9
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End
END	

ExperienceLevel	GloinLevel10
	TargetNames						=	DwarvenGloin
	RequiredExperience				=	GLOIN_LVL10_EXP_NEEDED 
	ExperienceAward					=	GLOIN_LVL10_EXP_AWARD	
  	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_EnableGloinSmash
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40 ;16
		MaxRadius					=	200 ;16
		MaxSelectedUnits			=	40 ;1
	End	
END	

;------------ DWARVEN CATAPULT---------------
ExperienceLevel	DwarvenCatapultLevel1
	TargetNames				  		=	DwarvenCatapultFortress		
	RequiredExperience		  			=	10
	ExperienceAwardOwnGuysDie				= 	0
	ExperienceAward						=	DWARVEN_CATAPULT_LVL1_EXP_AWARD
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200	
		MaxSelectedUnits	  			=	40
	End	
END		



;//------------------- DWARVEN BUILDINGS ------------------------------------

;//------------- DwarvenArcheryRange -----------------
ExperienceLevel	DwarvenArcheryRangeLevel1
	TargetNames					= DwarvenArcheryRange
	RequiredExperience	= 1
	ExperienceAward			= DWARVEN_ARCHERYRANGE_LVL1_EXP_AWARD
	Rank								= 1
	Upgrades						= Upgrade_StructureLevel1
End
	
ExperienceLevel	DwarvenArcheryRangeLevel2
	TargetNames					= DwarvenArcheryRange
	RequiredExperience	= DWARVEN_ARCHERYRANGE_LVL2_EXP_NEEDED
	ExperienceAward			= DWARVEN_ARCHERYRANGE_LVL2_EXP_AWARD
	Rank								= 2
	AttributeModifiers	= DwarvenArcheryRangeHitPointModLvl2 DwarvenArcheryRangeBuildSpeedModLvl2
	Upgrades						= Upgrade_StructureLevel2
	LevelUpFx						= FX:DwarfArcheryRangeUpgrade
End
	
ExperienceLevel	DwarvenArcheryRangeLevel3
	TargetNames					= DwarvenArcheryRange
	RequiredExperience	= DWARVEN_ARCHERYRANGE_LVL3_EXP_NEEDED
	ExperienceAward			= DWARVEN_ARCHERYRANGE_LVL3_EXP_AWARD	
	Rank								= 3
	AttributeModifiers	= DwarvenArcheryRangeHitPointModLvl3 DwarvenArcheryRangeBuildSpeedModLvl3
	Upgrades						= Upgrade_StructureLevel3
	LevelUpFx						= FX:DwarfArcheryRangeUpgrade
End

;//------------- DwarvenMineShaft -----------------
ExperienceLevel	DwarvenMineShaftLevel1
	TargetNames				= DwarvenMineShaft
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_MINE_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	DwarvenMineShaftLevel2
	TargetNames				= DwarvenMineShaft
	RequiredExperience		= DWARVEN_MINE_LVL2_EXP_NEEDED
	ExperienceAward		  	= DWARVEN_MINE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= DwarvenMineShaftBonusLevel2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:DwarfMineShaftUpgrade
End
	
ExperienceLevel	DwarvenMineShaftLevel3
	TargetNames				= DwarvenMineShaft
	RequiredExperience		= DWARVEN_MINE_LVL3_EXP_NEEDED 
	ExperienceAward		  	= DWARVEN_MINE_LVL3_EXP_AWARD	
	Rank					= 3
	AttributeModifiers		= DwarvenMineShaftBonusLevel3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:DwarfMineShaftUpgrade
End

;//------------- DwarvenForgeWorks -----------------
ExperienceLevel	DwarvenForgeWorksLevel1
	TargetNames					= DwarvenSiegeWorks
	RequiredExperience	= 1
	ExperienceAward			= DWARVEN_FORGEWORKS_LVL1_EXP_AWARD
	Rank								= 1
	Upgrades						= Upgrade_StructureLevel1
End
	
ExperienceLevel	DwarvenForgeWorksLevel2
	TargetNames					= DwarvenSiegeWorks
	RequiredExperience	= DWARVEN_FORGEWORKS_LVL2_EXP_NEEDED
	ExperienceAward			= DWARVEN_FORGEWORKS_LVL2_EXP_AWARD
	Rank								= 2
	AttributeModifiers	= DwarvenForgeWorksHitPointModLvl2 DwarvenForgeWorksBuildSpeedModLvl2
	Upgrades						= Upgrade_StructureLevel2
	LevelUpFx						= FX:DwarfForgeWorksUpgrade
End
	
ExperienceLevel	DwarvenForgeWorksLevel3
	TargetNames					= DwarvenSiegeWorks
	RequiredExperience	= DWARVEN_FORGEWORKS_LVL3_EXP_NEEDED
	ExperienceAward			= DWARVEN_FORGEWORKS_LVL3_EXP_AWARD	
	Rank								= 3
	AttributeModifiers	= DwarvenForgeWorksHitPointModLvl3 DwarvenForgeWorksBuildSpeedModLvl3
	Upgrades						= Upgrade_StructureLevel3
	LevelUpFx						= FX:DwarfForgeWorksUpgrade
End

;//------------- DwarvenHallOfWarriors -----------------
ExperienceLevel DwarvenBarracksLevel1
	TargetNames				= DwarfBarracks
	RequiredExperience		= 1
	ExperienceAward			= DWARVEN_BARRACKS_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel DwarvenBarracksLevel2
	TargetNames				= DwarfBarracks
	RequiredExperience		= 2
	ExperienceAward			= DWARVEN_BARRACKS_LVL2_EXP_AWARD
	Rank					= 2
	Upgrades				= Upgrade_DwarvenBarracksLevel2
	AttributeModifiers		= DwarvenBarracksLevel2
	LevelUpFx				= FX:DwarfHallOfWarriorsUpgrade
End

ExperienceLevel DwarvenBarracksLevel3
	TargetNames				= DwarfBarracks
	RequiredExperience		= 3
	ExperienceAward			= DWARVEN_BARRACKS_LVL3_EXP_AWARD
	Rank					= 3
	Upgrades				= Upgrade_DwarvenBarracksLevel3
	AttributeModifiers		= DwarvenBarracksLevel3
	LevelUpFx				= FX:DwarfHallOfWarriorsUpgrade
End

;------------- Dwarven Wall Upgrades -----------------

ExperienceLevel	DwarvenWallHubSmall1
	TargetNames				= DwarvenWallHubSmall
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_WALL_HUB_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	DwarvenWallTowerSmall1
	TargetNames				= DwarvenWallTowerSmall
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_WALL_TOWER_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	Dwarvenatapult1
	TargetNames				= DwarvenWallCatapult
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_WALL_CATAPULT_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	DwarvenWallPosternGateSmall1
	TargetNames				= DwarvenWallPosternGateSmall
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_WALL_POSTERN_GATE_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	DwarvenWallGateSmall1
	TargetNames				= DwarvenWallGateSmall
	RequiredExperience		= 1
	ExperienceAward		  	= DWARVEN_WALL_GATE_SMALL_EXP_AWARD
	Rank					= 1
End


ExperienceLevel	DwarvenFortressLevel1
	TargetNames				= DwarvenFortressCitadel
	RequiredExperience		= 1
	ExperienceAward		  	= 300
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End


ExperienceLevel	DwarvenStatue1
	TargetNames					=	DwarvenStatue
	RequiredExperience			=	1
	Rank						=	1
	ExperienceAward				=	25
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	DWARVEN_STATUE_AOE_RADIUS_DECAL
		MaxRadius					=	DWARVEN_STATUE_AOE_RADIUS_DECAL
		MaxSelectedUnits	  		=	1
	End		
End	

ExperienceLevel	DwarvenHearth1
	TargetNames					=	DwarvenHearth
	RequiredExperience			=	1
	Rank						=	1
	ExperienceAward				=	25
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	DWARVEN_HEARTH_AOE_RADIUS_DECAL
		MaxRadius					=	DWARVEN_HEARTH_AOE_RADIUS_DECAL
		MaxSelectedUnits	  		=	1
	End	
End




;//--------------------------------------------
ExperienceLevel	MobileDwarvenCatapultLevel1
	TargetNames							=	DwarvenCatapult
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_1
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_1
	InformUpdateModule					=	Yes
	Rank								=	1
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END

;//--------------------------------------------
ExperienceLevel	DwarfMachineLevel1
	TargetNames							=	DWARVEN_MACHINES	;// defined at top of file
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_1
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_1
	InformUpdateModule					=	Yes
	Rank								=	1
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END


ExperienceLevel	DwarfMachineLevel2
	TargetNames							=	DWARVEN_MACHINES	;// defined at top of file
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_2
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_2
	AttributeModifiers					=	DwarfMachineBonusRank2
	InformUpdateModule					=	Yes
	Rank								=	2
	LevelUpFx							=	FX:GenericLevelUp2FX
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END


ExperienceLevel	DwarfMachineLevel3
	TargetNames							=	DWARVEN_MACHINES	;// defined at top of file
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_3
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_3
	AttributeModifiers					=	DwarfMachineBonusRank3
	InformUpdateModule					=	Yes
	Rank								=	3
	LevelUpFx							=	FX:GenericLevelUp3FX
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END


ExperienceLevel	DwarfMachineLevel4
	TargetNames							=	DWARVEN_MACHINES	;// defined at top of file
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_4
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_4
	AttributeModifiers					=	DwarfMachineBonusRank4
	InformUpdateModule					=	Yes
	Rank								=	4
	LevelUpFx							=	FX:GenericLevelUp4FX
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END


ExperienceLevel	DwarfMachineLevel5
	TargetNames							=	DWARVEN_MACHINES	;// defined at top of file
	RequiredExperience					=	EXPERIENCE_REQUIRED_DWARF_MACHINE_5
	ExperienceAward						=	EXPERIENCE_AWARD_DWARF_MACHINE_5
	AttributeModifiers					=	DwarfMachineBonusRank5
	InformUpdateModule					=	Yes
	Rank								=	5
	LevelUpFx							=	FX:GenericLevelUp4FX
	LevelUpTintColor					=	R:255 G:255	B:255
	LevelUpTintPreColorTime				=	500	
	LevelUpTintPostColorTime			=	3000
	LevelUpTintSustainColorTime			=	500	

	SelectionDecal
		Texture							=	decal_G_level4
		Texture2						=	decal_good_CO
		Style							=	SHADOW_MERGE_DECAL
		OpacityMin						=	80%
		OpacityMax						=	100%
		MinRadius			  			=	HORDE_DECAL_MIN_RADIUS
		MaxRadius						=	200
		MaxSelectedUnits	  			=	40
	End	
END
