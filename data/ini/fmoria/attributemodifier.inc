////////////////////////////
// ATTRIBUTEMODIFIER.INC //
//////////////////////////
//Moria//
////////


//----------------Wild Fortress-----------------------
ModifierList WildFortressBatCloudBonus
	Category = STRUCTURE
	Modifier = SHROUD_CLEARING 	125%		;from 160%, Modified by Sûlherokhh // Additive.  Sum of these is the % bonus to the range at which you clear fog and shroud
	Modifier = VISION 			125%		;from 160%, Modified by Sûlherokhh
	Duration = 0				// Forever
End

ModifierList WebCocoonKeep_Bonus
	Category = STRUCTURE
	;Modifier = HEALTH WILD_FORTRESS_WEBCOCOON_KEEP_HEALTH_BONUS
	Modifier = ARMOR WILD_FORTRESS_WEBCOCOON_KEEP_ARMOR_BONUS
	Duration = 0
End

ModifierList WebCocoonExpansion_Bonus
	Category = STRUCTURE
	;Modifier = HEALTH WILD_FORTRESS_WEBCOCOON_EXPANSION_HEALTH_BONUS
	Modifier = ARMOR WILD_FORTRESS_WEBCOCOON_EXPANSION_ARMOR_BONUS
	Duration = 0
End

//----------------Wild Cave-----------------------
ModifierList WildCaveHitPointModLvl2
	Category = LEVEL
	Modifier = HEALTH GOBLIN_CAVE_LVL2_HP_ADD	
	Duration = 0
End
ModifierList WildCaveHitPointModLvl3
	Category = LEVEL
	Modifier = HEALTH GOBLIN_CAVE_LVL3_HP_ADD	
	Duration = 0
End

ModifierList WildCaveBuildSpeedModLvl2 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_CAVE_LVL2_BUILD_SPEED	
	Duration = 0
End
ModifierList WildCaveBuildSpeedModLvl3 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_CAVE_LVL3_BUILD_SPEED	
	Duration = 0
End

//----------------Wild Fissure-----------------------
ModifierList WildFissureHitPointModLvl2
	Category = LEVEL
	Modifier = HEALTH GOBLIN_FISSURE_LVL2_HP_ADD	
	Duration = 0
End
ModifierList WildFissureHitPointModLvl3
	Category = LEVEL
	Modifier = HEALTH GOBLIN_FISSURE_LVL3_HP_ADD	
	;Modifier = ARMOR 50%
	Duration = 0
End

ModifierList WildFissureBuildSpeedModLvl2 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_FISSURE_LVL2_BUILD_SPEED	
	Duration = 0
End
ModifierList WildFissureBuildSpeedModLvl3 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_FISSURE_LVL3_BUILD_SPEED	
	Duration = 0
End

//----------------Wild SpiderPit-----------------------
ModifierList WildSpiderPitHitPointModLvl2
	Category = LEVEL
	Modifier = HEALTH GOBLIN_SPIDERPIT_LVL2_HP_ADD	
	Duration = 0
End
ModifierList WildSpiderPitHitPointModLvl3
	Category = LEVEL
	Modifier = HEALTH GOBLIN_SPIDERPIT_LVL3_HP_ADD	
	Duration = 0
End

ModifierList WildSpiderPitBuildSpeedModLvl2 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_SPIDERPIT_LVL2_BUILD_SPEED	
	Duration = 0
End
ModifierList WildSpiderPitBuildSpeedModLvl3 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_SPIDERPIT_LVL3_BUILD_SPEED	
	Duration = 0
End

//----------------Wild TreasureTrove-----------------------
ModifierList WildTreasureTroveHitPointModLvl2
	Category = LEVEL
	Modifier = HEALTH GOBLIN_TREASURETROVE_LVL2_HP_ADD	
	Duration = 0
End
ModifierList WildTreasureTroveHitPointModLvl3
	Category = LEVEL
	Modifier = HEALTH GOBLIN_TREASURETROVE_LVL3_HP_ADD	
	Duration = 0
End

ModifierList WildTreasureTroveBuildSpeedModLvl2 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_TREASURETROVE_LVL2_BUILD_SPEED	
	Duration = 0
End
ModifierList WildTreasureTroveBuildSpeedModLvl3 
	Category = STRUCTURE
	Modifier = PRODUCTION GOBLIN_TREASURETROVE_LVL3_BUILD_SPEED	
	Duration = 0
End

//---------- For Shelob Web Attack -----------------
ModifierList ShelobWebbingModifier
  Category 	= WEAPON
  ; Modifier = ARMOR 99% // Trying to get to close to invulnerable
  Modifier 	= SPEED 0%  // multiplier - 0% means max speed is 0. jba	
  Duration 	= 60000	//WARNING if you change this you must change the system life of the FX below (FXList.ini)
  ClearModelCondition = MOVING MOUNTED WEAPONSET_TOGGLE_1 USER_1 USER_2 USER_3 USER_4 USER_5 USER_6 USER_7 USER_8 USER_9 WEAPONSET_HERO_MODE DISGUISED // Make him stop moving... NOW! All the modelconditions listed there are so the hero becomes webbed for sure.
//  FX = FX_ShelobWebbingHit_SEE
  ModelCondition = STONED // Set the model condition for the troll texture swap here.
End


ModifierList BalrogIgniteState
	Category = SPELL
	Modifier = ARMOR 50%		// Additive.  Sum of these are subtracted from all entries in Armor.ini
	Modifier = DAMAGE_MULT 200%		// Multiplicitive.  Damage multiplied by this, will compound in multiple bonuses
	Duration = 30000
End

;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------

; Tier 1
ModifierList SpellBookMoriaDeepDrums
	Category = BUFF
	Modifier = DAMAGE_MULT 150%			// Damage increased 50%
	Modifier = ARMOR 50%			// More armor by 50%
	Duration = 60000			// 1 min worth of modifiers
	ModelCondition = WAR_CHANT 
	FX		= FX_GenericBuffPersistent60
	ReplaceInCategoryIfLongest	= Yes
End

; Tier 2
ModifierList SpellBookMoriaScurry
	Category = SPELL
	Modifier = SPEED 110%		// speed increased 10%
	Duration = 0					// Duration is forever when set to 0
	;ModelCondition = USER_9 -LEADS TO CRASHES! WE NEED TO FIND SOMETHING ELSE!
End

; Tier 3
ModifierList SpellBookMoriaDarkness
	Category = SPELL
	Modifier = DAMAGE_MULT 125%	
	Modifier = ARMOR 50%
	Modifier = EXPERIENCE 175%
	Duration = 0
	FX		 = FX_InfiniteGenericLeadershipLvl1
	FX2		 = FX_InfiniteGenericLeadershipLvl2
	FX3		 = FX_InfiniteGenericLeadershipLvl3
	
	EndFX	 = FX_StopGenericLeadershipLvl1
	EndFX2	 = FX_StopGenericLeadershipLvl2
	EndFX3	 = FX_StopGenericLeadershipLvl3
	
	MultiLevelFX = Yes
End
