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


ModifierList BalrogIgniteState
	Category = SPELL
	Modifier = ARMOR 50%		// Additive.  Sum of these are subtracted from all entries in Armor.ini
	Modifier = DAMAGE_MULT 200%		// Multiplicitive.  Damage multiplied by this, will compound in multiple bonuses
	Duration = 30000
End
