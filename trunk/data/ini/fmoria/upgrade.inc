; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Upgrade.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!


Upgrade Upgrade_WildFaction
	DisplayName		= UPGRADE:WildFaction
	Type			= PLAYER
End
Upgrade Upgrade_GoblinFaction
	DisplayName		= UPGRADE:GoblinFaction
	Type			= PLAYER
End

Upgrade Upgrade_GoblinDualEconomyChoice
	DisplayName		= UPGRADE:GoblinDualEconomyChoice
	Type			= PLAYER
End

;--------	FORTRESS  ----------------------------------------

Upgrade Upgrade_WildFortressBatCloud
	Type				= OBJECT
	BuildCost			= WILD_BATCLOUD_BUILDCOST
	BuildTime			= WILD_BATCLOUD_BUILDTIME
	ResearchSound		= UpgradeGoblinFortressBatCloud
	DisplayName			= Upgrade:FortressBatCloud
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_EvilFortressUpgrade
End

Upgrade Upgrade_WildFortressStonePavement
  Type					= OBJECT
  BuildCost				= WILD_STONEWORK_PAVEMENT_BUILDCOST
  BuildTime				= WILD_STONEWORK_PAVEMENT_BUILDTIME
  ResearchSound			= UpgradeGoblinFortressWebCocoon  
  DisplayName			= Upgrade:FortressWildStonePavement
  SkirmishAIHeuristic 		= AI_UPGRADEHEURISTIC_IMPORTANT
  UpgradeFX				= FX_EvilFortressUpgrade  
End

Upgrade Upgrade_WildFortressRazorSpines
	Type				= OBJECT
	BuildCost			= WILD_FORTRESS_RAZORSPINES_BUILDCOST
	BuildTime			= WILD_FORTRESS_RAZORSPINES_BUILDTIME
	ResearchSound		= UpgradeGoblinFortressRazorSpine
	DisplayName			= Upgrade:FortressRazorSpines
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_EvilFortressUpgrade
End

Upgrade Upgrade_WildFortressFireArrowsTrigger
	Type				= OBJECT
	BuildCost			= WILD_FORTRESS_FIREARROWS_BUILDCOST
	BuildTime			= WILD_FORTRESS_FIREARROWS_BUILDTIME
	ResearchSound		= UpgradeGoblinFortressFireArrows
	DisplayName			= Upgrade:FortressFireArrows
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_EvilFortressUpgrade
End

Upgrade Upgrade_WildFortressWebCocoonTrigger
	Type				= OBJECT
	BuildCost			= WILD_FORTRESS_WEBCOCOON_BUILDCOST
	BuildTime			= WILD_FORTRESS_WEBCOCOON_BUILDTIME
	ResearchSound		= UpgradeGoblinFortressWebCocoon
	DisplayName			= Upgrade:FortressWebCocoon
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_EvilFortressUpgrade
End
Upgrade Upgrade_WildFortressWebCocoon
	Type = OBJECT
	; SkirmishAIHeuristic 		= AI_UPGRADEHEURISTIC_FORTRESS ;AI_UPGRADEHEURISTIC_IMPORTANT	
End

Upgrade Upgrade_WildFortressDragonNest
	Type				= OBJECT
	BuildCost			= WILD_DRAGONNEST_BUILDCOST
	BuildTime			= WILD_DRAGONNEST_BUILDTIME
	DisplayName			= Upgrade:FortressDragonsNest
	ResearchCompleteEvaEvent = UpgradeDragonsNestReady
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_EvilFortressUpgrade
End
Upgrade Upgrade_DragonNestFireDrakeButtonEnable
	Type			= OBJECT
End
Upgrade Upgrade_HasDragonNestFireDrake
	Type				= OBJECT
	BuildCost			= WILD_FORTRESS_FIREDRAKE_BUILDCOST
	BuildTime			= WILD_FORTRESS_FIREDRAKE_BUILDTIME
	DisplayName			= Upgrade:WildFortressFireDrake
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
End

;--------	WALLS  ---------------------------------------------

Upgrade Upgrade_WildWallHub
	DisplayName 		= UPGRADE:Upgrade_IsengardWallHub
	Type				= OBJECT
	BuildTime			= WILD_CASTLE_WALLHUB_BUILDTIME
	BuildCost			= WILD_CASTLE_WALLHUB_BUILDCOST
	//ResearchSound			= CampSoldierUpgradeNumenorStonework
End

;--------	CAVE  ----------------------------------------------

Upgrade Upgrade_WildCaveLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_CAVE_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_CAVE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildCaveLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

Upgrade Upgrade_WildCaveLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_CAVE_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_CAVE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildCaveLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

;--------	FISSURE  -------------------------------------------

Upgrade Upgrade_WildFissureLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_FISSURE_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_FISSURE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildFissureLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

Upgrade Upgrade_WildFissureLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_FISSURE_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_FISSURE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildFissureLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

;--------	SPIDER PIT  ----------------------------------------

Upgrade Upgrade_WildSpiderPitLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_SPIDERPIT_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_SPIDERPIT_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildSpiderPitLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

Upgrade Upgrade_WildSpiderPitLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_SPIDERPIT_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_SPIDERPIT_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildSpiderPitLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

;--------	WOLF DEN  ----------------------------------------

Upgrade Upgrade_WildWolfDenLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_WOLFDEN_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_WOLFDEN_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildWolfDenLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

Upgrade Upgrade_WildWolfDenLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_WOLFDEN_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_WOLFDEN_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildWolfDenLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

;--------	TREASUE TROVE  ----------------------------------

Upgrade Upgrade_WildTreasureTroveLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_TREASURETROVE_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_TREASURETROVE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildTreasureTroveLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!
End

Upgrade Upgrade_WildTreasureTroveLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_TREASURETROVE_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_TREASURETROVE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildTreasureTroveLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK //Added for SEE!	
End






Upgrade Upgrade_GoblinKingPoisonedStinger
	Type			= OBJECT
End
Upgrade Upgrade_GoblinKingCallFromTheDeep
	Type			= OBJECT
End







//----MineShaft----
Upgrade Upgrade_WildMineShaftLevel2
	Type			= OBJECT
	BuildCost		= GOBLIN_MINE_LEVEL2_UPGRADE_COST
	BuildTime		= GOBLIN_MINE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildMineShaftLevel2
End

Upgrade Upgrade_WildMineShaftLevel3
	Type			= OBJECT
	BuildCost		= GOBLIN_MINE_LEVEL3_UPGRADE_COST
	BuildTime		= GOBLIN_MINE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:WildMineShaftLevel3
End

//----Tower----
Upgrade Upgrade_SentryTowerFireArrows
	Type			= OBJECT
	BuildCost		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDCOST
	BuildTime		= WILD_SENTRY_TOWER_ARROW_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:FortressFireArrows
	ResearchSound	= UpgradeFlamingArrows
End



//------     Wild Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyWildBasicTraining
	DisplayName       	= UPGRADE:WildBasicTraining
	Type              	= PLAYER
	BuildCost			= WILD_TECH_BASIC_TRAINING_BUILDCOST	
	BuildTime			= WILD_TECH_BASIC_TRAINING_BUILDTIME	
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady-Wild
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_TechnologyWildFireArrows
	DisplayName     	= UPGRADE:WildFireArrowUpgrade
	Type            	= PLAYER
	BuildCost			= WILD_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime			= WILD_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
End
Upgrade Upgrade_TechnologyWildForgedBlades
	DisplayName     	= UPGRADE:WildForgedBlades
	Type            	= PLAYER
	BuildCost			= WILD_TECH_FORGED_BLADES_BUILDCOST
	BuildTime			= WILD_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_TechnologyWildHeavyArmor
	DisplayName     	= UPGRADE:WildHeavyArmor
	Type            	= PLAYER
	BuildCost			= WILD_TECH_HEAVY_ARMOR_BUILDCOST	
	BuildTime			= WILD_TECH_HEAVY_ARMOR_BUILDTIME		
	ResearchCompleteEvaEvent	= UpgradeScavengedArmorReady
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_WildSpiderVenomSackScience ;change to TechnologyWildSpiderVenomSack
	DisplayName				= UPGRADE:WildPoisonBlades //Upgrade:WildVenomSacs
	Type					= PLAYER
	BuildCost				= GOBLIN_SPIDERPIT_VENOMSACK_SCIENCE_UPGRADE_COST
	BuildTime				= GOBLIN_SPIDERPIT_VENOMSACK_SCIENCE_UPGRADE_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeVenomSacsReady
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End














Upgrade Upgrade_WildBasicTraining 
	DisplayName     = UPGRADE:WildBasicTraining 
	Type            = OBJECT
	Tooltip			= UPGRADE:WildBasicTraining 
	BuildCost		= WILD_PERSONAL_BASIC_TRAINING_BUILDCOST	
	BuildTime		= WILD_PERSONAL_BASIC_TRAINING_BUILDTIME	
	//ResearchSound	= UpgradeHeavyArmor
	//UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage     = BuildingNoArt
	//Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +WildTreasureTrove
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_WildFireArrows
	DisplayName     = UPGRADE:WildFireArrowUpgrade
	Type            = OBJECT
	Tooltip			= TOOLTIP:WildFlamingArrows
	BuildCost		= WILD_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= WILD_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = NONE +GoblinFissure //WildTreasureTrove
	StrategicIcon	= AptStrategicUnitUpgradeArrow
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_WildForgedBlades
	DisplayName     = UPGRADE:WildForgedBlades
	Type            = OBJECT
	Tooltip			= TOOLTIP:WildForgedBlades
	BuildCost		= WILD_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= WILD_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	ButtonImage		= BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +GoblinFissure //WildTreasureTrove
	StrategicIcon	= AptStrategicUnitUpgradeBlade
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_WildHeavyArmor
	DisplayName     = UPGRADE:WildHeavyArmor
	Type            = OBJECT
	Tooltip			= TOOLTIP:WildHeavyArmor
	BuildCost		= WILD_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= WILD_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage     = BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +GoblinFissure //WildTreasureTrove
	StrategicIcon	= AptStrategicUnitUpgradeArmor
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End
Upgrade Upgrade_WildSpiderVenomSacks
	DisplayName				= Upgrade:WildVenomSacs
	Type					= OBJECT
	Tooltip					= TOOLTIP:WildVenomSacs
	BuildCost				= GOBLIN_SPIDERPIT_VENOMSACK_UPGRADE_COST
	BuildTime				= GOBLIN_SPIDERPIT_VENOMSACK_UPGRADE_BUILDTIME
	ResearchSound			= UpgradeVenomSacks //SpiderRiderVoicePoison?
	UpgradeFX				= FX_PorterDeliverSilverthornArrows //Added for SEE!	
	RequiredObjectFilter		= NONE +WildSpiderPit	
	StrategicIcon				= AptStrategicUnitUpgradeBlade	
	SkirmishAIHeuristic			= AI_UPGRADEHEURISTIC_IMPORTANT	
End













