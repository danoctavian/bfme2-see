///////////////////////////
// EXPERIENCELEVELS.INC //
/////////////////////////
//Elves//
////////


;------------ Elves ---------------
ExperienceLevel	ElvesGenericLevel1
	TargetNames				  		=	Elves
	RequiredExperience	  			=	1
	ExperienceAward					=	0
	Rank							=	1
	SelectionDecal
		Texture						=	decal_I_level1
		Texture2					=	decal_good_CO
		Style						=	SHADOW_MERGE_DECAL
		OpacityMin					=	80%
		OpacityMax					= 	100%
		MinRadius					=	HORDE_DECAL_MIN_RADIUS
		MaxRadius					=	200	
		MaxSelectedUnits	  		=	40
	End	
END

;--------------- ELVEN HEROES --------------------------
;----------- Legolas ------------------	
ExperienceLevel	LegolasLevel1
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	1	
	ExperienceAward					=	LEGOLAS_LVL1_EXP_AWARD
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

ExperienceLevel	LegolasLevel2
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL2_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL2_EXP_AWARD
	AttributeModifiers				=	HeroLevelUpDamage1
	Rank							=	2
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_LegolasKnifeFighter
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

ExperienceLevel	LegolasLevel3
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL3_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL3_EXP_AWARD	
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

ExperienceLevel	LegolasLevel4
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL4_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_LegolasTrainArchers	
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

ExperienceLevel	LegolasLevel5
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL5_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL5_EXP_AWARD	
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

ExperienceLevel	LegolasLevel6
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL6_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL6_EXP_AWARD	
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

ExperienceLevel	LegolasLevel7
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL7_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_LegolasArrowWind
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

ExperienceLevel	LegolasLevel8
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL8_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL8_EXP_AWARD	
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

ExperienceLevel	LegolasLevel9
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL9_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL9_EXP_AWARD	
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

ExperienceLevel	LegolasLevel10
	TargetNames						=	RohanLegolas ElvenLegolas
	RequiredExperience				=	LEGOLAS_LVL10_EXP_NEEDED 
	ExperienceAward					=	LEGOLAS_LVL10_EXP_AWARD	
  	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
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


;------------------ ARWEN ------------------------
ExperienceLevel	ArwenLevel1
	TargetNames				=	ElvenArwen
	RequiredExperience		=	1	
	ExperienceAward			=	ARWEN_LVL1_EXP_AWARD 
	Rank					=	1
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

ExperienceLevel	ArwenLevel2
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL2_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL2_EXP_AWARD 				
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	2
	AttributeModifiers		=	HeroLevelUpDamage1
	Upgrades				= Upgrade_ArwenElvenGraceTrigger
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

ExperienceLevel	ArwenLevel3
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL3_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL3_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	3
	AttributeModifiers		=	HeroLevelUpDamage2
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

ExperienceLevel	ArwenLevel4
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL4_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL4_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	4
	AttributeModifiers		=	HeroLevelUpDamage3
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

ExperienceLevel	ArwenLevel5
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL5_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL5_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	5
	AttributeModifiers		=	HeroLevelUpDamage4
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

ExperienceLevel	ArwenLevel6
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL6_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL6_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	6
	AttributeModifiers		=	HeroLevelUpDamage5
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

ExperienceLevel	ArwenLevel7
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL7_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL7_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	7
	AttributeModifiers		=	HeroLevelUpDamage6
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

ExperienceLevel	ArwenLevel8
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL8_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL8_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	8
	AttributeModifiers		=	HeroLevelUpDamage7
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

ExperienceLevel	ArwenLevel9
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL9_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL9_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	9
	AttributeModifiers		=	HeroLevelUpDamage8
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

ExperienceLevel	ArwenLevel10
	TargetNames				=	ElvenArwen
	RequiredExperience		=	ARWEN_LVL10_EXP_NEEDED
	ExperienceAward			=	ARWEN_LVL10_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	10
	AttributeModifiers		=	HeroLevelUpDamage9
	Upgrades				= Upgrade_ArwenFloodTrigger
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

;------------------ GLORFINDEL ------------------------
ExperienceLevel	GlorfindelLevel1
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	1	
	ExperienceAward			=	GLORFINDEL_LVL1_EXP_AWARD 
	Rank					=	1
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

ExperienceLevel	GlorfindelLevel2
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL2_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL2_EXP_AWARD 				
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	2
	AttributeModifiers		=	HeroLevelUpDamage1	
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

ExperienceLevel	GlorfindelLevel3
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	Glorfindel_LVL3_EXP_NEEDED
	ExperienceAward			=	Glorfindel_LVL3_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	3
	AttributeModifiers		=	HeroLevelUpDamage2
	Upgrades				=	Upgrade_GlorfindelBladeOfPurity
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

ExperienceLevel	GlorfindelLevel4
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL4_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL4_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	4
	AttributeModifiers		=	HeroLevelUpDamage3
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

ExperienceLevel	GlorfindelLevel5
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL5_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL5_EXP_AWARD 	
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	5
	AttributeModifiers		=	HeroLevelUpDamage4
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

ExperienceLevel	GlorfindelLevel6
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL6_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL6_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	6
	AttributeModifiers		=	HeroLevelUpDamage5
	Upgrades				=	Upgrade_GlorfindelWindRider
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

ExperienceLevel	GlorfindelLevel7
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL7_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL7_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	7
	AttributeModifiers		=	HeroLevelUpDamage6
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

ExperienceLevel	GlorfindelLevel8
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL8_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL8_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	8
	AttributeModifiers		=	HeroLevelUpDamage7
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

ExperienceLevel	GlorfindelLevel9
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL9_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL9_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Rank					=	9
	AttributeModifiers		=	HeroLevelUpDamage8
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

ExperienceLevel	GlorfindelLevel10
	TargetNames				=	ElvenGlorfindel
	RequiredExperience		=	GLORFINDEL_LVL10_EXP_NEEDED
	ExperienceAward			=	GLORFINDEL_LVL10_EXP_AWARD 
	LevelUpFx				=	FX:GandalfLevelUp1FX
	;LevelUpOCL				=	OCL_GandalfLevelUp1OCL
	Upgrades				=	Upgrade_GlorindelStarlight
	Rank					=	10
	AttributeModifiers		=	HeroLevelUpDamage9	
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

;----------- Thranduil ------------------	
ExperienceLevel	ThranduilLevel1
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	1	
	ExperienceAward					=	THRANDUIL_LVL1_EXP_AWARD
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

ExperienceLevel	ThranduilLevel2
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL2_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL2_EXP_AWARD
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

ExperienceLevel	ThranduilLevel3
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL3_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL3_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage2
	Rank							=	3
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=   Upgrade_ThranduilMoveUnseen; Upgrade_ThranduilDeadeye
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

ExperienceLevel	ThranduilLevel4
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL4_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX	
	Upgrades						=   Upgrade_ThranduilElfCloak
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

ExperienceLevel	ThranduilLevel5
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL5_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL5_EXP_AWARD	
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

ExperienceLevel	ThranduilLevel6
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL6_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL6_EXP_AWARD	
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

ExperienceLevel	ThranduilLevel7
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL7_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL	
	Upgrades						=   Upgrade_ThranduilDeadeye; Upgrade_ThranduilMoveUnseen
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

ExperienceLevel	ThranduilLevel8
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL8_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL8_EXP_AWARD	
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

ExperienceLevel	ThranduilLevel9
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL9_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL9_EXP_AWARD	
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

ExperienceLevel	ThranduilLevel10
	TargetNames						=	ElvenThranduil
	RequiredExperience				=	THRANDUIL_LVL10_EXP_NEEDED 
	ExperienceAward					=	THRANDUIL_LVL10_EXP_AWARD	
  	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=   Upgrade_ThranduilThornofVengeance
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


;----------- Galadriel ------------------
ExperienceLevel ElvenGaladriel_RingHeroLevel1
	TargetNames					= ElvenGaladriel_RingHero
	RequiredExperience			= 1
	ExperienceAward				= 500
	ExperienceAwardOwnGuysDie	= 0
	Rank						= 10
	Upgrades					= Upgrade_ObjectLevel1
	SelectionDecal
		Texture					= decal_hero_good
		Style					= SHADOW_ALPHA_DECAL
		OpacityMin				= 50%
		OpacityMax				= 100%
		MinRadius				= 40
		MaxRadius				= 200
		MaxSelectedUnits		= 40
	End
End

;----------- Elrond ------------------	

ExperienceLevel	ElrondLevel1
	TargetNames				=	ElvenElrond
	RequiredExperience		=	1	
	ExperienceAward			=	ELROND_LVL1_EXP_AWARD
	Rank					=	1
;	AttributeModifiers		=	ElrondResistKnockback
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

ExperienceLevel	ElrondLevel2
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL2_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL2_EXP_AWARD
	Rank					=	2
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	HeroLevelUpDamage1  ; ElrondResistKnockback 
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

ExperienceLevel	ElrondLevel3
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL3_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL3_EXP_AWARD
	Rank					=	3
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	HeroLevelUpDamage2  ;ElrondResistKnockback 
	Upgrades				=	Upgrade_ElrondLeadership
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

ExperienceLevel	ElrondLevel4
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL4_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL4_EXP_AWARD
	Rank					=	4
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage3 ;ElrondResistKnockback
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

ExperienceLevel	ElrondLevel5
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL5_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL5_EXP_AWARD
	Rank					=	5
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage4	;ElrondResistKnockback
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

ExperienceLevel	ElrondLevel6
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL6_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL6_EXP_AWARD
	Rank					=	6
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage5	;ElrondResistKnockback
	Upgrades				=	Upgrade_ElrondFarsight
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

ExperienceLevel	ElrondLevel7
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL7_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL7_EXP_AWARD
	Rank					=	7
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage6	;ElrondResistKnockback
	Upgrades				=	Upgrade_ElrondTornado 
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

ExperienceLevel	ElrondLevel8
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL8_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL8_EXP_AWARD
	Rank					=	8
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage7	;ElrondResistKnockback
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

ExperienceLevel	ElrondLevel9
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL9_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL9_EXP_AWARD
	Rank					=	9
	LevelUpFx				=	FX:GandalfLevelUp1FX
	AttributeModifiers		=	 HeroLevelUpDamage8	;ElrondResistKnockback
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

ExperienceLevel	ElrondLevel10
	TargetNames				=	ElvenElrond
	RequiredExperience		=	ELROND_LVL10_EXP_NEEDED	
	ExperienceAward			=	ELROND_LVL10_EXP_AWARD
	Rank					=	10
	AttributeModifiers		=	 HeroLevelUpDamage9	;ElrondResistKnockback
	Upgrades				=	Upgrade_ElrondRestoration
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

;----------- Haldir ------------------	
ExperienceLevel	HaldirLevel1
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	1	
	ExperienceAward					=	HALDIR_LVL1_EXP_AWARD
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

ExperienceLevel	HaldirLevel2
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL2_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL2_EXP_AWARD
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

ExperienceLevel	HaldirLevel3
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL3_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL3_EXP_AWARD	
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

ExperienceLevel	HaldirLevel4
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL4_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL4_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage3
	Rank							=	4
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_LegolasTrainArchers	
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

ExperienceLevel	HaldirLevel5
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL5_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL5_EXP_AWARD	
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

ExperienceLevel	HaldirLevel6
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL6_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL6_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage5
	Rank							=	6
	LevelUpFx						=	FX:GandalfLevelUp1FX
	Upgrades						=	Upgrade_HaldirLeadership
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

ExperienceLevel	HaldirLevel7
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL7_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL7_EXP_AWARD	
	AttributeModifiers				=	HeroLevelUpDamage6
	Rank							=	7
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_LegolasArrowWind
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

ExperienceLevel	HaldirLevel8
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL8_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL8_EXP_AWARD	
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

ExperienceLevel	HaldirLevel9
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL9_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL9_EXP_AWARD	
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

ExperienceLevel	HaldirLevel10
	TargetNames						=	ElvenHaldir
	RequiredExperience				=	HALDIR_LVL10_EXP_NEEDED 
	ExperienceAward					=	HALDIR_LVL10_EXP_AWARD	
  	AttributeModifiers				=	HeroLevelUpDamage9
	Rank							=	10
	LevelUpFx						=	FX:GandalfLevelUp1FX
	;LevelUpOCL						=	OCL_GandalfLevelUp1OCL
	Upgrades						=	Upgrade_HaldirGoldenArrow
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


;-------------------- Elven Buildings ------------------------------
ExperienceLevel	ElvenFortressLevel1
	TargetNames				= ElvenCitadel
	RequiredExperience		= 1
	ExperienceAward		  	= 150
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

;--------------------------------------------
ExperienceLevel	ElvenStatue1
	TargetNames					=	ElvenStatue
	RequiredExperience			=	1
	Rank						=	1
	ExperienceAward				=	25
	SelectionDecal
		Texture						=	decal_hero_good
		Style						=	SHADOW_ALPHA_DECAL
		OpacityMin					=	30%
		OpacityMax					=	60%
		MinRadius			  		=	ELVEN_STATUE_AOE_RADIUS_DECAL
		MaxRadius					=	ELVEN_STATUE_AOE_RADIUS_DECAL
		MaxSelectedUnits	  		=	1
	End		
End	

;--------------------------------------------
ExperienceLevel	GaladrielsWell
	TargetNames					=	ElvenMirrorOfGaladriel
	RequiredExperience			=	1
	Rank						=	1
	;AttributeModifiers			=	BasicLevelUpProduction1
	;Upgrades					=	Upgrade_StructureLevel1
	ExperienceAward				=	30
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

;--------------------Elven Barracks------------------------
ExperienceLevel	ElvenBarracksLevel1
	TargetNames				= ElvenBarracks
	RequiredExperience		= 1
	ExperienceAward		  	= ELVEN_BARRACKS_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1
End

ExperienceLevel	ElvenBarracksLevel2
	TargetNames				= ElvenBarracks
	RequiredExperience		= ELVEN_BARRACKS_LVL2_EXP_NEEDED
	ExperienceAward		  	= ELVEN_BARRACKS_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= ElvenBarracksBuildSpeedModLvl2
	Upgrades				= Upgrade_ElvenBarracksLevel2
	LevelUpFx				= FX:ElfBarracksUpgrade
End

ExperienceLevel	ElvenBarracksLevel3
	TargetNames				= ElvenBarracks
	RequiredExperience		= ELVEN_BARRACKS_LVL3_EXP_NEEDED
	ExperienceAward		  	= ELVEN_BARRACKS_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers		= ElvenBarracksBuildSpeedModLvl3 
	Upgrades				= Upgrade_ElvenBarracksLevel3
	LevelUpFx				= FX:ElfBarracksUpgrade
End	

;--------------------Green Pasture----------------
ExperienceLevel	ElvenGreenPastureLevel1
	TargetNames				= ElvenGreenPasture
	RequiredExperience		= 1
	ExperienceAward			= ELVEN_GREEN_PASTURE_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1							  
End
	
ExperienceLevel	ElvenGreenPastureLevel2
	TargetNames				= ElvenGreenPasture
	RequiredExperience		= ELVEN_GREEN_PASTURE_LVL2_EXP_NEEDED
	ExperienceAward			= ELVEN_GREEN_PASTURE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= ElvenGreenPastureBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:ElfGreenPastureUpgrade
End
	
ExperienceLevel	ElvenGreenPastureLevel3
	TargetNames				= ElvenGreenPasture
	RequiredExperience		= ELVEN_GREEN_PASTURE_LVL3_EXP_NEEDED
	ExperienceAward			= ELVEN_GREEN_PASTURE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers		= ElvenGreenPastureBuildSpeedModLvl3 
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:ElfGreenPastureUpgrade
End	

;--------------------Mallorn Tree----------------
ExperienceLevel	ElvenMallornTreeLevel1
	TargetNames				= ElvenMallornTree
	RequiredExperience		= 1
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1							  
End
	
ExperienceLevel	ElvenMallornTreeLevel2
	TargetNames				= ElvenMallornTree
	RequiredExperience		= ELVEN_MALLORN_TREE_LVL2_EXP_NEEDED
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= ElvenMallornTreeBuildSpeedModLvl2
	Upgrades				= Upgrade_StructureLevel2
	LevelUpFx				= FX:ElfMallornTreeUpgrade
End
	
ExperienceLevel	ElvenMallornTreeLevel3
	TargetNames				= ElvenMallornTree
	RequiredExperience		= ELVEN_MALLORN_TREE_LVL3_EXP_NEEDED
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers		= ElvenMallornTreeBuildSpeedModLvl3 
	Upgrades				= Upgrade_StructureLevel3
	LevelUpFx				= FX:ElfMallornTreeUpgrade
End	

;--------------------Eregion Forge----------------
ExperienceLevel	ElvenEregionForgeLevel1
	TargetNames				= EregionForge
	RequiredExperience		= 1
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL1_EXP_AWARD
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1							  
End
	
ExperienceLevel	EregionForgeLevel2
	TargetNames				= EregionForge
	RequiredExperience		= ELVEN_MALLORN_TREE_LVL2_EXP_NEEDED
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL2_EXP_AWARD
	Rank					= 2
	AttributeModifiers		= ElvenEregionForgeLevel2
	Upgrades				= Upgrade_EregionForgeLevel2
	LevelUpFx				= FX:ElfEregionForgeUpgrade
End
	
ExperienceLevel	EregionForgeLevel3
	TargetNames				= EregionForge
	RequiredExperience		= ELVEN_MALLORN_TREE_LVL3_EXP_NEEDED
	ExperienceAward			= ELVEN_MALLORN_TREE_LVL3_EXP_AWARD
	Rank					= 3
	AttributeModifiers		= ElvenEregionForgeLevel3
	Upgrades				= Upgrade_EregionForgeLevel3
	LevelUpFx				= FX:ElfEregionForgeUpgrade
End	

;--------------------Ent Moot---------------- 
ExperienceLevel	ElvenEntMootLevel1
	TargetNames				= ElvenEntMoot
	RequiredExperience		= 1
	ExperienceAward			= 50
	Rank					= 1
	Upgrades				= Upgrade_StructureLevel1							  
End

;------------- Elven Wall Upgrades -----------------

ExperienceLevel	ElvenCastleWallHub1
	TargetNames				= ElvenCastleWallHub
	RequiredExperience		= 1
	ExperienceAward		  	= ELVEN_CASTLE_WALL_HUB_EXP_AWARD
	Rank					= 1
End

ExperienceLevel	ElvenCastleWallGate1
	TargetNames				= ElvenCastleWallGate
	RequiredExperience		= 1
	ExperienceAward		  	= ELVEN_CASTLE_WALL_GATE_EXP_AWARD
	Rank					= 1
End
