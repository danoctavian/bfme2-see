///////////////////////////
// EXPERIENCELEVELS.INC //
/////////////////////////
//Gondor//
/////////

;------------ Men ---------------
ExperienceLevel	MenGenericLevel1
	TargetNames				  		=	Men
	RequiredExperience		  		=	1
	ExperienceAward					=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_G_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	HORDE_DECAL_MIN_RADIUS
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
END

;-----------------	GONDOR UNITS ---------------------------
;---- NO LEVELING UNITS	
ExperienceLevel	GondorTownsmenLevel1
	TargetNames						=	GondorTownsman
	RequiredExperience				=	1
	ExperienceAward					=	10
	Rank							=	1
END	

ExperienceLevel	GondorTownsmenTorchLevel1
	TargetNames						=	GondorTownsmanTorch	
	RequiredExperience				=	1
	ExperienceAward					=	10
	Rank							=	1
END	

ExperienceLevel	GondorGwaihirLevel1	
	TargetNames						=	GondorGwaihir GondorGwaihir_Summoned ElvenFortressEagle
	RequiredExperience				=	1
	ExperienceAward					=	50
	Rank							=	10
	SelectionDecal
		Texture						=	decal_G_level4
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200	
		MaxSelectedUnits	  		=	40
	End
END

;------------ GONDOR WORKER---------------
ExperienceLevel	GondorWorkerLevel1
	TargetNames				  		=	GondorWorker
	RequiredExperience		  		=	1
	ExperienceAward					=	1
	Rank							=	1
	SelectionDecal
		Texture						=	decal_G_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius			  		=	70
		MaxRadius					=	200	
		MaxSelectedUnits	  		=	40
	End	
END	

;-------------- GONDOR TREBUCHET ---------------
ExperienceLevel	GondorTrebuchetLevel1
	TargetNames						=	GondorTrebuchet GondorTrebuchetWall MenTrebuchetFortress
	RequiredExperience				=	1
	ExperienceAward					=	GONDOR_TREBUCHET_LVL1_EXP_AWARD
	InformUpdateModule				=	Yes
	Rank							=	1
	LevelUpTintColor				=	R:255 G:255	B:255
	LevelUpTintPreColorTime			=	500	
	LevelUpTintPostColorTime		=	3000
	LevelUpTintSustainColorTime		=	500	
	Upgrades						=   Upgrade_ObjectLevel1
	SelectionDecal
		Texture						=	decal_G_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					=	100%
		MinRadius					=	60
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
	
	
END



;--------------- GONDOR	HEROES --------------------------
;----------- GANDALF ------------------	
ExperienceLevel	GandalfLevel1
	TargetNames						=	GANDALF
	RequiredExperience				=	1
	ExperienceAward					=	GANDALF_LVL1_EXP_AWARD 
	Rank							=	1
	Upgrades						=	Upgrade_GandalfBlast
;	AttributeModifiers				=	TotalResistKnockback ;resist all knockback
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

ExperienceLevel	GandalfLevel2
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL2_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL2_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_GandalfLightningSword	
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200	
		MaxSelectedUnits				=	40
	End	
END	

ExperienceLevel	GandalfLevel3
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL3_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL3_EXP_AWARD 
	 AttributeModifiers				=	HeroLevelUpDamage2
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
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel4
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL4_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL4_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage3

	Upgrades						=	Upgrade_GandalfLeadership
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel5
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL5_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL5_EXP_AWARD 
	Upgrades						=	Upgrade_Shadowfax Upgrade_GandalfWhite
	AttributeModifiers				=	HeroLevelUpDamage4	
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
		MaxSelectedUnits				=	40
	End	
END	

ExperienceLevel	GandalfLevel6
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL6_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL6_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage5	
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
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel7
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL7_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL7_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage6	
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_GandalfIstariLight

	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel8
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL8_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL8_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage7
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
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel9
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL9_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL9_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage8
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
		MaxSelectedUnits			=	40
	End	
END	

ExperienceLevel	GandalfLevel10
	TargetNames						=	GANDALF
	RequiredExperience				=	GANDALF_LVL10_EXP_NEEDED
	ExperienceAward					=	GANDALF_LVL10_EXP_AWARD 
	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	Upgrades						=	Upgrade_GandalfWordOfPower
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200	
		MaxSelectedUnits			=	40
	End	
END	

;----------- BOROMIR ------------------	
ExperienceLevel	BoromirLevel1
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	1	
	ExperienceAward						=	BOROMIR_LVL1_EXP_AWARD
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

ExperienceLevel	BoromirLevel2
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL2_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL2_EXP_AWARD
	AttributeModifiers					=	HeroLevelUpDamage1
	Upgrades						=	Upgrade_BoromirHornOfGondor
	Rank							=	2
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

ExperienceLevel	BoromirLevel3
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL3_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL3_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	;Upgrades						=	Upgrade_BoromirLastStand
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

ExperienceLevel	BoromirLevel4
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL4_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL4_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage3
	Rank							=	4
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

ExperienceLevel	BoromirLevel5
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL5_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL5_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage4
	Rank							=	5
	Upgrades						=	Upgrade_BoromirForGondorSpeech
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

ExperienceLevel	BoromirLevel6
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL6_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL6_EXP_AWARD	
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

ExperienceLevel	BoromirLevel7
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL7_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL7_EXP_AWARD	
	AttributeModifiers					=	HeroLevelUpDamage6
	Rank							=	7
	Upgrades						=   	Upgrade_FaramirCaptainOfGondor
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

ExperienceLevel	BoromirLevel8
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL8_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL8_EXP_AWARD	
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

ExperienceLevel	BoromirLevel9
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL9_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL9_EXP_AWARD	
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

ExperienceLevel	BoromirLevel10
	TargetNames						=	GondorBoromir	
	RequiredExperience					=	BOROMIR_LVL10_EXP_NEEDED
	ExperienceAward						=	BOROMIR_LVL10_EXP_AWARD	
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






;----------------------	ARAGORN	-------------------------------------

ExperienceLevel	AragornLevelMP1
	TargetNames						=	ARAGORN	
	RequiredExperience				=	1
	ExperienceAward					=	ARAGORN_LVL1_EXP_AWARD 
	Rank							=	1
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP2
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL2_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL2_EXP_AWARD 
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	2
	AttributeModifiers				=	HeroLevelUpDamage1
	Upgrades						=	Upgrade_AragornBladeMaster
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP3
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL3_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL3_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	3
	AttributeModifiers				=	HeroLevelUpDamage2
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP4
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL4_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL4_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	4
	Upgrades						=	Upgrade_AragornLeadership
	AttributeModifiers				=	HeroLevelUpDamage3
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP5
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL5_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL5_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	5
	AttributeModifiers				=	HeroLevelUpDamage4
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End

ExperienceLevel	AragornLevelMP6
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL6_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL6_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	6
	AttributeModifiers				=	HeroLevelUpDamage5
	Upgrades						=	Upgrade_AragornElendil
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP7
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL7_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL7_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	7
	AttributeModifiers				=	HeroLevelUpDamage6
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP8
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL8_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL8_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	8
	AttributeModifiers				=	HeroLevelUpDamage7
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP9
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL9_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL9_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	9
	AttributeModifiers				=	HeroLevelUpDamage8
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	AragornLevelMP10
	TargetNames						=	ARAGORN	
	RequiredExperience				=	ARAGORN_LVL10_EXP_NEEDED
	ExperienceAward					=	ARAGORN_LVL10_EXP_AWARD
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	10
	Upgrades						=	Upgrade_AragornOathbreakers
	AttributeModifiers				=	HeroLevelUpDamage9
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	




;----------------------	FARAMIR	-------------------------------------
ExperienceLevel	FaramirLevel1
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	1	
	ExperienceAward					=	FARAMIR_LVL1_EXP_AWARD 
	Rank							=	1
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel2
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL2_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL2_EXP_AWARD 
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	2
	AttributeModifiers				=	HeroLevelUpDamage1
	Upgrades						=	Upgrade_ObjectLevel2
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel3
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL3_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL3_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	3
	Upgrades						=   Upgrade_FaramirKnightRangerToggle
	AttributeModifiers				=	HeroLevelUpDamage2
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel4
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL4_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL4_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	4
	AttributeModifiers				=	HeroLevelUpDamage3
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel5
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL5_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL5_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	5
	AttributeModifiers				=	HeroLevelUpDamage4
	Upgrades						=	Upgrade_FaramirWarSpeech
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel6
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL6_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL6_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	6
	Upgrades						=	Upgrade_FaramirLeadership
	AttributeModifiers				=	HeroLevelUpDamage5
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel7
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL7_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL7_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	7
	Upgrades						=   Upgrade_FaramirCaptainOfGondor
	AttributeModifiers					=	HeroLevelUpDamage6
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel8
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL8_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL8_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	8
	AttributeModifiers				=	HeroLevelUpDamage7
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel9
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL9_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL9_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	9
	AttributeModifiers				=	HeroLevelUpDamage8
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	FaramirLevel10
	TargetNames						=	GondorFaramir GondorFaramirCavalry	
	RequiredExperience				=	FARAMIR_LVL10_EXP_NEEDED
	ExperienceAward					=	FARAMIR_LVL10_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Rank							=	10
	AttributeModifiers				=	HeroLevelUpDamage9

	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	


;----------------------	DAMROD -------------------------------------
ExperienceLevel	DamrodLevel1
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience					=	1	
	ExperienceAward						=	DAMROD_LVL1_EXP_AWARD 
	Rank							=	1
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

ExperienceLevel	DamrodLevel2
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience					=	DAMROD_LVL2_EXP_NEEDED
	ExperienceAward						=	DAMROD_LVL2_EXP_AWARD 
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	2
	AttributeModifiers					=	HeroLevelUpDamage1
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

ExperienceLevel	DamrodLevel3
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL3_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL3_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	3
	AttributeModifiers				=	HeroLevelUpDamage2
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel4
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL4_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL4_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	4
	AttributeModifiers				=	HeroLevelUpDamage3
	Upgrades						=   Upgrade_DamrodLeadership
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel5
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience					=	DAMROD_LVL5_EXP_NEEDED
	ExperienceAward						=	DAMROD_LVL5_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	5
	AttributeModifiers					=	HeroLevelUpDamage4
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel6
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL6_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL6_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	6
	Upgrades						=	Upgrade_DamrodDeadlySniper
	AttributeModifiers				=	HeroLevelUpDamage5
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel7
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL7_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL7_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	7
;	Upgrades						=   Upgrade_FaramirCaptainOfGondor
	AttributeModifiers					=	HeroLevelUpDamage6
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel8
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL8_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL8_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	8
	AttributeModifiers				=	HeroLevelUpDamage7
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel9
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL9_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL9_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	9
	AttributeModifiers				=	HeroLevelUpDamage8
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End	

ExperienceLevel	DamrodLevel10
	TargetNames						=	GondorDamrod ArnorCaptain  ArnorCaptainStealthless
	RequiredExperience				=	DAMROD_LVL10_EXP_NEEDED
	ExperienceAward					=	DAMROD_LVL10_EXP_AWARD 	
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Rank							=	10
	AttributeModifiers				=	HeroLevelUpDamage9
	Upgrades						=	Upgrade_DamrodRallyRangers

	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	50%	
		OpacityMax					=	100%
		MinRadius					=	40
		MaxRadius					=	200
		MaxSelectedUnits			=	40
	End	
End

//-----------------------------------------------------------

ExperienceLevel	IsildurLevel1
	TargetNames				=	GondorIsildur
	RequiredExperience		=	1	
	ExperienceAward			=	0
	Rank					=	10
	SelectionDecal
		Texture				=	decal_hero_good
		Style				=	SHADOW_ALPHA_DECAL
		OpacityMin			=	50%	
		OpacityMax			=	100%
		MinRadius			=	40
		MaxRadius			=	200
		MaxSelectedUnits	=	40
	End	
End




;----------------- GONDOR BUILDINGS------------------------------------
;------------- GondorFarm -----------------

ExperienceLevel	GondorFarmLevel1
	TargetNames				= GOOD_FARM
	RequiredExperience		= 1
	ExperienceAward			= GONDOR_FARM_LVL1_EXP_AWARD
	Rank					= 1
	AttributeModifiers		= BasicLevelUpProduction1
	Upgrades				= Upgrade_StructureLevel1	
End
	
ExperienceLevel	GondorFarmLevel2
	TargetNames				= GOOD_FARM
	RequiredExperience		= GONDOR_FARM_LVL2_EXP_NEEDED
	ExperienceAward			= GONDOR_FARM_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= GondorFarmLevel2Production GondorFarmHitPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:GenericBuildingUpgrade
End
	
ExperienceLevel	GondorFarmLevel3
	TargetNames				= GOOD_FARM
	RequiredExperience		= GONDOR_FARM_LVL3_EXP_NEEDED
	ExperienceAward			= GONDOR_FARM_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers		= GondorFarmLevel3Production GondorFarmHitPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:GenericBuildingUpgrade
End


ExperienceLevel	MenFortressLevel1
	TargetNames				= MenFortressCitadel
	RequiredExperience			= 1
	ExperienceAward		  		= 150; GONDOR_BARRACKS_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
;------------- GondorArcheryRange -----------------

ExperienceLevel	GondorArcherRangeLevel1
	TargetNames				= GondorArcherRange
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_ARCHERYRANGE_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorArcherRangeLevel2
	TargetNames				= GondorArcherRange
	RequiredExperience		= GONDOR_ARCHERYRANGE_LVL2_EXP_NEEDED
	ExperienceAward		  	= GONDOR_ARCHERYRANGE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= GondorArcheryRangeHitPointModLvl2 GondorArcheryRangeBuildSpeedModLvl2
	Upgrades				= Upgrade_GondorArcheryRangeLevel2
	LevelUpFx				= FX:GondorArcheryRangeUpgrade
End
	
ExperienceLevel	GondorArcherRangeLevel3
	TargetNames				= GondorArcherRange
	RequiredExperience		= GONDOR_ARCHERYRANGE_LVL3_EXP_NEEDED
	ExperienceAward		  	= GONDOR_ARCHERYRANGE_LVL3_EXP_AWARD	
	Rank					= 3
	AttributeModifiers		= GondorArcheryRangeHitPointModLvl3 GondorArcheryRangeBuildSpeedModLvl3
	Upgrades				= Upgrade_GondorArcheryRangeLevel3
	LevelUpFx				= FX:GondorArcheryRangeUpgrade
End	

;------------- GondorBarracks -----------------

ExperienceLevel	GondorBarracksLevel1
	TargetNames				= GondorBarracks AngmarBarracks
	RequiredExperience			= 1
	ExperienceAward		  		= GONDOR_BARRACKS_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorBarracksLevel2
	TargetNames				= GondorBarracks AngmarBarracks
	RequiredExperience			= GONDOR_BARRACKS_LVL2_EXP_NEEDED
	ExperienceAward		  		= GONDOR_BARRACKS_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= GondorBarracksHitPointModLvl2 GondorBarracksBuildSpeedModLvl2
	Upgrades				= Upgrade_GondorBarracksLevel2
	LevelUpFx				= FX:GondorBarracksUpgrade
End
	
ExperienceLevel	GondorBarracksLevel3
	TargetNames				= GondorBarracks AngmarBarracks
	RequiredExperience			= GONDOR_BARRACKS_LVL3_EXP_NEEDED
	ExperienceAward		  		= GONDOR_BARRACKS_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= GondorBarracksHitPointModLvl3 GondorBarracksBuildSpeedModLvl3
	Upgrades				= Upgrade_GondorBarracksLevel3
	LevelUpFx				= FX:GondorBarracksUpgrade
End	

;------------- GondorForge -----------------

ExperienceLevel	GondorForgeLevel1
	TargetNames            = GondorForge
	RequiredExperience     = 1
	ExperienceAward        = GONDOR_FORGE_LVL1_EXP_AWARD
	Rank                   = 1
	AttributeModifiers     = BasicLevelUpProduction1
	Upgrades               = Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorForgeLevel2
	TargetNames            = GondorForge
	RequiredExperience     = GONDOR_FORGE_LVL2_EXP_NEEDED
	ExperienceAward        = GONDOR_FORGE_LVL2_EXP_AWARD
	Rank                   = 2
	AttributeModifiers     = GondorForgeLevel2Production GondorForgeHitPointModLvl2
	Upgrades               = Upgrade_GondorForgeLevel2
	LevelUpFx              = FX:GondorForgeUpgrade
End
	
ExperienceLevel	GondorForgeLevel3
	TargetNames            = GondorForge
	RequiredExperience     = GONDOR_FORGE_LVL3_EXP_NEEDED
	ExperienceAward        = GONDOR_FORGE_LVL3_EXP_AWARD
	Rank                   = 3
	AttributeModifiers     = GondorForgeLevel3Production GondorForgeHitPointModLvl3
	Upgrades               = Upgrade_GondorForgeLevel3
	LevelUpFx              = FX:GondorForgeUpgrade
End	

;------------- GondorRangerForbiddenPool -----------------

ExperienceLevel	GondorForbiddenPool
	TargetNames				= GondorForbiddenPool
	RequiredExperience			= 1
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorForbiddenPool2
	TargetNames				= GondorForbiddenPool
	RequiredExperience			= 2
	ExperienceAward		  		= 20
	Rank					= 2
	AttributeModifiers			= GondorArcheryRangeHitPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:GondorForbiddenPoolUpgrade
End
	
ExperienceLevel	GondorForbiddenPool3
	TargetNames				= GondorForbiddenPool
	RequiredExperience			= 3
	ExperienceAward		  		= 60	
	Rank					= 3
	AttributeModifiers			= GondorArcheryRangeHitPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:GondorForbiddenPoolUpgrade
End	

;------------- GondorRangerForbiddenPoolForGoodIthilien -----------------

ExperienceLevel	GondorForbiddenPoolForGoodIthilien1
	TargetNames				= GondorForbiddenPoolForGoodIthilien
	RequiredExperience			= 1
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorForbiddenPoolForGoodIthilien2
	TargetNames				= GondorForbiddenPoolForGoodIthilien
	RequiredExperience			= 1200
	ExperienceAward		  		= 20
	Rank					= 2
	AttributeModifiers			= GondorArcheryRangeHitPointModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:GondorForbiddenPoolUpgrade
End
	
ExperienceLevel	GondorForbiddenPoolForGoodIthilien3
	TargetNames				= GondorForbiddenPoolForGoodIthilien
	RequiredExperience			= 2000
	ExperienceAward		  		= 60	
	Rank					= 3
	AttributeModifiers			= GondorArcheryRangeHitPointModLvl3
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:GondorForbiddenPoolUpgrade
End	

;------------- GondorStable -----------------

ExperienceLevel	GondorStableLevel1
	TargetNames				= GondorStable
	RequiredExperience			= 1
	ExperienceAward		  		= GONDOR_STABLES_LVL1_EXP_AWARD	
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorStableLevel2
	TargetNames				= GondorStable
	RequiredExperience			= GONDOR_STABLES_LVL2_EXP_NEEDED
	ExperienceAward		  		= GONDOR_STABLES_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= GondorStablesHitPointModLvl2 GondorStablesBuildSpeedModLvl2
	Upgrades				= Upgrade_GondorStableLevel2
	LevelUpFx				= FX:GondorStableUpgrade
End
	
ExperienceLevel	GondorStableLevel3
	TargetNames				= GondorStable
	RequiredExperience			= GONDOR_STABLES_LVL3_EXP_NEEDED
	ExperienceAward		  		= GONDOR_STABLES_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= GondorStablesHitPointModLvl3 GondorStablesBuildSpeedModLvl3
	Upgrades				= Upgrade_GondorStableLevel3
	LevelUpFx				= FX:GondorStableUpgrade
End	

;------------- GondorWorkshop -----------------

ExperienceLevel	GondorWorkshopLevel1
	TargetNames				= GondorWorkshop
	RequiredExperience			= 1
	ExperienceAward		  		= GONDOR_WORKSHOP_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End
	
ExperienceLevel	GondorWorkshopLevel2
	TargetNames				= GondorWorkshop
	RequiredExperience			= GONDOR_WORKSHOP_LVL2_EXP_NEEDED
	ExperienceAward		  		= GONDOR_WORKSHOP_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers			= GondorWorkshopHitPointModLvl2 GondorWorkshopBuildSpeedModLvl2
	Upgrades				= Upgrade_GondorWorkshopLevel2
	LevelUpFx				= FX:GondorWorkshopUpgrade
End
	
ExperienceLevel	GondorWorkshopLevel3
	TargetNames				= GondorWorkshop
	RequiredExperience			= GONDOR_WORKSHOP_LVL3_EXP_NEEDED
	ExperienceAward		  		= GONDOR_WORKSHOP_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers			= GondorWorkshopHitPointModLvl3 GondorWorkshopBuildSpeedModLvl3
	Upgrades				= Upgrade_GondorWorkshopLevel3
	LevelUpFx				= FX:GondorWorkshopUpgrade
End	

;------------- GondorMarketplace -----------------

ExperienceLevel	GondorMarketPlaceLevel1
	TargetNames				= GondorMarketPlace
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_MARKETPLACE_EXP_AWARD
	Rank					= 1
End

;------------- Men Wall Upgrades -----------------

ExperienceLevel	MenWallHubSmall1
	TargetNames				= MenWallHubSmall
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_WALL_HUB_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	MenWallTowerSmall1
	TargetNames				= MenWallTowerSmall
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_WALL_TOWER_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	MenWallTrebuchetSmall1
	TargetNames				= MenWallTrebuchetSmall
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_WALL_TREBUCHET_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	MenWallPosternGateSmall1
	TargetNames				= MenWallPosternGateSmall
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_WALL_POSTERN_GATE_SMALL_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	MenWallGateSmall1
	TargetNames				= MenWallGateSmall
	RequiredExperience		= 1
	ExperienceAward		  	= GONDOR_WALL_GATE_SMALL_EXP_AWARD
	Rank					= 1
End



;-------------------- STATUES AND WELLS ------------------------------

ExperienceLevel	GondorStatue1
	TargetNames				=	GondorStatue
	RequiredExperience			=	1
	Rank					=	1
	ExperienceAward				=	25
	SelectionDecal
		Texture				=	decal_hero_good
		Style				=	SHADOW_ALPHA_DECAL
		OpacityMin			=	30%
		OpacityMax			=	60%
		MinRadius			=	GONDOR_STATUE_AOE_RADIUS_DECAL
		MaxRadius			=	GONDOR_STATUE_AOE_RADIUS_DECAL
		MaxSelectedUnits	  	=	1
	End		
End	

ExperienceLevel	GondorHeroStatue1
	TargetNames					=	GondorHeroStatue
	RequiredExperience			=	1
	Rank						=	1
	AttributeModifiers			=	BasicLevelUpProduction1
	Upgrades					=	Upgrade_StructureLevel1
	ExperienceAward				=	25
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	450
		MaxRadius					=	450
		MaxSelectedUnits	  		=	40
	End		
End	

ExperienceLevel	GondorWell1
	TargetNames					=	GondorWell
	RequiredExperience			=	1
	Rank						=	1
	ExperienceAward				=	25
	AttributeModifiers			=	BasicLevelUpProduction1
	Upgrades					=	Upgrade_StructureLevel1
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	GONDOR_WELL_AOE_RADIUS_DECAL
		MaxRadius					=	GONDOR_WELL_AOE_RADIUS_DECAL
		MaxSelectedUnits	  		=	1
	End		
End	
