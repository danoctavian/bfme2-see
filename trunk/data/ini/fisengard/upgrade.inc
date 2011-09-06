//////////////////
// UPGRADE.INC //
////////////////
//Isengard//
///////////

Upgrade Upgrade_IsengardFaction
	DisplayName		= UPGRADE:IsengardFaction
	Type			= PLAYER
End


Upgrade Upgrade_IsengardDualEconomyChoice
	DisplayName		= UPGRADE:IsengardDualEconomyChoice
	Type			= PLAYER
End

Upgrade Upgrade_IsengardFlamingArrows
	DisplayName       = UPGRADE:FireArrowUpgrade
	Tooltip		= TOOLTIP:IsengardFlamingArrows
	Type              = OBJECT
	ButtonImage       = BuildingNoArt
	Cursor			= WeaponUpgrade
End




////---- ISENGARD ---------------------------------------------------------------------

////Isengard Fortress Upgrades
Upgrade Upgrade_IsengardFortressOrcfireMunitionsTrigger //// You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= ISENGARD_ORCFIREMUNITIONS_BUILDCOST
	BuildTime		= ISENGARD_ORCFIREMUNITIONS_BUILDTIME
	DisplayName       	= Upgrade:FortressOrcfireMunitions
;	ResearchCompleteEvaEvent	= UpgradeFortress
	ResearchSound		= UpgradeIsengardFortressOrcFireMunitions
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressWizardsTower
	Type			= OBJECT
	BuildCost		= ISENGARD_WIZARDSTOWER_BUILDCOST
	BuildTime		= ISENGARD_WIZARDSTOWER_BUILDTIME
	DisplayName		= Upgrade:FortressWizardsTower
	ResearchSound	= UpgradeIsengardFortressWizardTowerStart
	ResearchCompleteEvaEvent	= UpgradeWizardTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressIronPlatingTrigger //// You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= ISENGARD_IRONPLATING_BUILDCOST
	BuildTime		= ISENGARD_IRONPLATING_BUILDTIME
	DisplayName       	= Upgrade:FortressIronPlating
	ResearchSound	= UpgradeIsengardFortressIronPlate
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressIronPlating
	Type			= OBJECT	
	DisplayName       	= Upgrade:FortressIronPlating
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressBurningForges
	Type			= OBJECT
	BuildCost		= ISENGARD_BURNINGFORGES_BUILDCOST
	BuildTime		= ISENGARD_BURNINGFORGES_BUILDTIME
	DisplayName       	= Upgrade:FortressBurningForges
	ResearchSound		= UpgradeIsengardFortressBurningForgesMS
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressExcavations
	Type			= OBJECT
	BuildCost		= ISENGARD_EXCAVATIONS_BUILDCOST
	BuildTime		= ISENGARD_EXCAVATIONS_BUILDTIME
	DisplayName       	= Upgrade:FortressExcavations
;	ResearchSound	= CampOrcUpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_IsengardFortressMurderOfCrows
	Type			= OBJECT
	BuildCost		= ISENGARD_MURDEROFCROWS_BUILDCOST
	BuildTime		= ISENGARD_MURDEROFCROWS_BUILDTIME
	DisplayName       	= Upgrade:FortressMurderofCrows
	ResearchSound		= UpgradeIsengardFortressMurderOfCrows
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

//------    Isengard Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyIsengardBasicTraining
	DisplayName       = UPGRADE:IsengardBasicTraining
	Type              = PLAYER
	BuildCost		= ISENGARD_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= ISENGARD_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady
End

Upgrade Upgrade_IsengardBasicTraining
	DisplayName       = UPGRADE:IsengardBasicTraining
	Type              = OBJECT
	Tooltip		= UPGRADE:IsengardBasicTraining
	BuildCost		= ISENGARD_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= ISENGARD_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierReady
	RequiredObjectFilter = NONE +IsengardArmory
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_TechnologyIsengardFireArrows
	DisplayName       = UPGRADE:IsengardFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= ISENGARD_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= ISENGARD_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_IsengardFireArrows
	DisplayName       = UPGRADE:IsengardFireArrowUpgrade
	Type              = OBJECT
	Tooltip		= TOOLTIP:IsengardFlamingArrows
	BuildCost		= ISENGARD_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= ISENGARD_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = NONE +IsengardArmory
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_TechnologyIsengardForgedBlades
	DisplayName       = UPGRADE:IsengardForgedBlades
	Type              = PLAYER
	BuildCost		= ISENGARD_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= ISENGARD_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
End

Upgrade Upgrade_IsengardForgedBlades
	DisplayName       = UPGRADE:IsengardForgedBlades
	Type              = OBJECT
	Tooltip		= TOOLTIP:IsengardForgedBlades
	BuildCost		= ISENGARD_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= ISENGARD_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	ButtonImage       = BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +IsengardArmory
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_TechnologyIsengardHeavyArmor
	DisplayName       = UPGRADE:IsengardHeavyArmor
	Tooltip		= TOOLTIP:IsengardHeavyArmor
	Type              = PLAYER
	BuildCost		= ISENGARD_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ISENGARD_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHeavyArmorReady
End

Upgrade Upgrade_IsengardHeavyArmor
	DisplayName       = UPGRADE:IsengardHeavyArmor
	Type              = OBJECT
	Tooltip		= TOOLTIP:IsengardHeavyArmor
	BuildCost		= ISENGARD_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ISENGARD_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BuildingNoArt
	Cursor				= WeaponUpgrade
	RequiredObjectFilter = NONE +IsengardArmory
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_IsengardTorches
	DisplayName		= UPGRADE:IsengardTorchesUpgrade
	Tooltip			= TOOLTIP:IsengardTorches
	Type			= OBJECT
	BuildCost		= ISENGARD_PERSONAL_TORCHES_BUILDCOST
	BuildTime		= ISENGARD_PERSONAL_TORCHES_BUILDTIME
	ResearchSound	= UpgradeTorchMS							;CampOrcUpgradeTorches
End

Upgrade Upgrade_IsengardWallHub
	DisplayName = UPGRADE:Upgrade_IsengardWallHub
	Type		= OBJECT
	BuildTime		= ISENGARD_CASTLE_WALLHUB_BUILDTIME
	BuildCost		= ISENGARD_CASTLE_WALLHUB_BUILDCOST
	////////////////////ResearchSound	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_IsengardWallRegularGate
	DisplayName = UPGRADE:Upgrade_IsengardWallRegularGate
	Type		= OBJECT
	BuildTime		= ISENGARD_CASTLE_WALLGATE_BUILDTIME
	BuildCost		= ISENGARD_CASTLE_WALLGATE_BUILDCOST
	////////////////////ResearchSound	= CampSoldierUpgradeNumenorStonework
End

//----Isen Warg Sentry----
Upgrade Upgrade_WargSentryPurchaseButtonEnable
	Type			= OBJECT
End

Upgrade Upgrade_HasWargSentry
	Type			= OBJECT
	BuildCost		= 100
	BuildTime		= 10.0
	DisplayName		= Upgrade:WargSentry
	ResearchCompleteEvaEvent = UpgradeWargSentryWargReady
End

//----IsengardUrukPit----
Upgrade Upgrade_IsengardUrukPitLevel2
	Type			= OBJECT
	BuildCost		= ISENGARD_URUKPIT_LEVEL2_UPGRADE_COST
	BuildTime		= ISENGARD_URUKPIT_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardUrukPitLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_IsengardUrukPitLevel3
	Type			= OBJECT
	BuildCost		= ISENGARD_URUKPIT_LEVEL3_UPGRADE_COST
	BuildTime		= ISENGARD_URUKPIT_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardUrukPitLevel3 
End

//----IsengardSiegeWorks----
Upgrade Upgrade_IsengardSiegeWorksLevel2
	Type			= OBJECT
	BuildCost		= ISENGARD_URUKSIEGE_LEVEL2_UPGRADE_COST
	BuildTime		= ISENGARD_URUKSIEGE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardSiegeWorksLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_IsengardSiegeWorksLevel3
	Type			= OBJECT
	BuildCost		= ISENGARD_URUKSIEGE_LEVEL3_UPGRADE_COST
	BuildTime		= ISENGARD_URUKSIEGE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardSiegeWorksLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK 
End

//----IsengardWargPit----
Upgrade Upgrade_IsengardWargPitLevel2
	Type			= OBJECT
	BuildCost		= ISENGARD_WARGPIT_LEVEL2_UPGRADE_COST
	BuildTime		= ISENGARD_WARGPIT_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardWargPitLevel2
	ResearchCompleteEvaEvent	= WargPitUpgraded
End

Upgrade Upgrade_IsengardWargPitLevel3
	Type			= OBJECT
	BuildCost		= ISENGARD_WARGPIT_LEVEL3_UPGRADE_COST
	BuildTime		= ISENGARD_WARGPIT_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardWargPitLevel3
	ResearchCompleteEvaEvent	= WargPitUpgraded
End

//----IsengardArmory----
Upgrade Upgrade_IsengardArmoryLevel2
	Type			= OBJECT
	BuildCost		= ISENGARD_ARMORY_LEVEL2_UPGRADE_COST
	BuildTime		= ISENGARD_ARMORY_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardArmoryLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_IsengardArmoryLevel3
	Type			= OBJECT
	BuildCost		= ISENGARD_ARMORY_LEVEL3_UPGRADE_COST
	BuildTime		= ISENGARD_ARMORY_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:IsengardArmoryLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT 
End

//-------IsengardTavern---------
Upgrade Upgrade_IsengardTavernLevel2
	Type			= OBJECT
	BuildCost		= ISENGARD_TAVERN_LVL2_UPGRADE_COST
	BuildTime		= ISENGARD_TAVERN_LVL2_UPGRADE_TIME
	DisplayName		= UPGRADE:IsengardTavernLevel2
	ResearchCompleteEvaEvent	= TavernUpgraded
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_IsengardTavernLevel3
	Type			= OBJECT
	BuildCost		= ISENGARD_TAVERN_LVL3_UPGRADE_COST
	BuildTime		= ISENGARD_TAVERN_LVL3_UPGRADE_TIME
	DisplayName		= UPGRADE:ISengardTavernLevel3
	ResearchCompleteEvaEvent	= TavernUpgraded
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
