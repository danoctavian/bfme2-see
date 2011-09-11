//////////////////
// UPGRADE.INC //
////////////////
//Dwarves//
//////////

Upgrade Upgrade_DwarfFaction
	DisplayName		= UPGRADE:DwarfFaction
	Type			= PLAYER
End

Upgrade Upgrade_DwarfFighterFearless
	Type			= OBJECT
End

				
//------    Dwarven Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyDwarvenBasicTraining
	DisplayName			= UPGRADE:DwarvenBasicTraining
	Type				= PLAYER
	BuildCost			= DWARVEN_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime			= DWARVEN_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent		= UpgradeBannerCarrierTechnologyReady-Dwarf
End

Upgrade Upgrade_DwarvenBasicTraining
	DisplayName     		= UPGRADE:DwarvenBasicTraining
	Type            		= OBJECT
	Tooltip				= UPGRADE:DwarvenBasicTraining
	BuildCost				= DWARVEN_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime				= DWARVEN_PERSONAL_BASIC_TRAINING_BUILDTIME
	;ResearchCompleteEvaEvent			= UpgradeBannerCarrierReady
	RequiredObjectFilter	= NONE +DwarfBarracks
	StrategicIcon			= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_TechnologyDwarvenSiegeHammer	
	DisplayName     = UPGRADE:DwarvenSiegeHammer	
	Type            = PLAYER
	BuildCost		= DWARVEN_PERSONAL_SIEGE_HAMMER_BUILDCOST
	BuildTime		= DWARVEN_PERSONAL_SIEGE_HAMMER_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeSiegeHammersReady
End

Upgrade Upgrade_DwarvenSiegeHammer	
	DisplayName				= UPGRADE:DwarvenSiegeHammer
	Type					= OBJECT
	Tooltip				= TOOLTIP:DwarvenSiegeHammer
	BuildCost				= DWARVEN_TECH_SIEGE_HAMMER_BUILDCOST
	BuildTime				= DWARVEN_TECH_SIEGE_HAMMER_BUILDTIME
	ResearchSound			= UpgradeSiegeHammer
	UpgradeFX				= FX_PorterDeliverSiegeHammer
	ButtonImage				= BuildingNoArt
	Cursor					= WeaponUpgrade
	RequiredObjectFilter	= NONE +DwarvenSiegeWorks
End

Upgrade Upgrade_TechnologyDwarvenFireArrows
	DisplayName       = UPGRADE:DwarvenFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= DWARVEN_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= DWARVEN_TECH_FIRE_ARROWS_BUILDTIME
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
End

Upgrade Upgrade_DwarvenFireArrows
	DisplayName       = UPGRADE:DwarvenFireArrowUpgrade
  	Tooltip		= TOOLTIP:DwarvenFlamingArrows
	Type              = OBJECT
	BuildCost		= DWARVEN_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= DWARVEN_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = NONE +DwarvenArcheryRange
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_TechnologyDwarvenForgedBlades
	DisplayName     = UPGRADE:DwarvenForgedBlades
	Type            = PLAYER
	BuildCost		= Dwarven_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= Dwarven_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady-Dwarf
End

Upgrade Upgrade_DwarvenForgedBlades
	DisplayName     = UPGRADE:DwarvenForgedBlades
	Type            = OBJECT
	Tooltip			= TOOLTIP:DwarvenForgedBlades
	BuildCost		= DWARVEN_TECH_FORGED_BLADES_BUILDCOST	
	BuildTime		= DWARVEN_TECH_FORGED_BLADES_BUILDTIME	
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	ButtonImage		= BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +DwarvenSiegeWorks
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_TechnologyDwarvenMithrilMail
	DisplayName     = UPGRADE:DwarvenMithrilMail
	Type            = PLAYER
	BuildCost		= DWARVEN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= DWARVEN_PERSONAL_HEAVY_ARMOR_BUILDTIME	
	ResearchCompleteEvaEvent	= UpgradeMithrilMailReady
End

Upgrade Upgrade_DwarvenMithrilMail
	DisplayName     = UPGRADE:DwarvenMithrilMail
	Type            = OBJECT
	Tooltip			= TOOLTIP:DwarvenMithrilMail
	BuildCost		= DWARVEN_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= DWARVEN_TECH_HEAVY_ARMOR_BUILDTIME	
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverMithrilMail
	ButtonImage		= BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +DwarvenSiegeWorks
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_TechnologyDwarvenFlamingShot
	DisplayName     = UPGRADE:DwarvenFlamingShot
	Type            = PLAYER
	BuildCost		= DWARVEN_PERSONAL_FLAMING_SHOT_BUILDCOST
	BuildTime		= DWARVEN_PERSONAL_FLAMING_SHOT_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlamingShotsReady
End

Upgrade Upgrade_DwarvenFlamingShot
	DisplayName     = UPGRADE:DwarvenFlamingShot
	Type            = OBJECT
	Tooltip			= TOOLTIP:DwarvenFlamingShot
	BuildCost		= DWARVEN_TECH_FLAMING_SHOT_BUILDCOST	
	BuildTime		= DWARVEN_TECH_FLAMING_SHOT_BUILDTIME	
	ResearchSound	= UpgradeFireStones
	UpgradeFX		= FX_PorterDeliverFlamingShot
	ButtonImage		= BuildingNoArt
	Cursor			= WeaponUpgrade
	RequiredObjectFilter = NONE +DwarvenSiegeWorks
End

Upgrade Upgrade_DwarvenBarracksLevel2
	Type			= OBJECT
	BuildCost		= DWARVEN_BARRACKS_LVL2_UPGRADE_COST
	BuildTime		= DWARVEN_BARRACKS_LVL2_UPGRADE_TIME
	DisplayName		= UPGRADE:DwarvenBarracksLevel2
	ResearchCompleteEvaEvent	= UpgradeHallOfWarriors
End

Upgrade Upgrade_DwarvenBarracksLevel3
	Type			= OBJECT
	BuildCost		= DWARVEN_BARRACKS_LVL3_UPGRADE_COST
	BuildTime		= DWARVEN_BARRACKS_LVL3_UPGRADE_TIME
	DisplayName		= UPGRADE:DwarvenBarracksLevel3
	ResearchCompleteEvaEvent	= UpgradeHallOfWarriors
End

Upgrade Upgrade_DwarvenWallHub
	DisplayName = UPGRADE:Upgrade_DwarvenWallHub
	Type		= OBJECT
	BuildTime		= DWARVEN_WALLSEGMENT_SMALL_BUILDTIME
	BuildCost		= DWARVEN_WALLHUB_SMALL_BUILDCOST
	////////////////////ResearchCompleteEvaEvent	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_DwarvenWallRegularGate
	DisplayName = UPGRADE:Upgrade_DwarvenWallRegularGate
	Type		= OBJECT
	BuildTime		= DWARVEN_WALLGATE_SMALL_BUILDTIME
	BuildCost		= DWARVEN_WALLGATE_SMALL_BUILDCOST
	////////////////////ResearchCompleteEvaEvent	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_DwarvenWallPosternGate
	DisplayName = UPGRADE:Upgrade_DwarvenWallPosternGate
	Type		= OBJECT
	BuildTime		= DWARVEN_POSTERNGATE_SMALL_BUILDTIME
	BuildCost		= DWARVEN_POSTERNGATE_SMALL_BUILDCOST
	////////////////////ResearchCompleteEvaEvent	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_DwarvenWallTower
	DisplayName = UPGRADE:Upgrade_DwarvenWallTower
	Type		= OBJECT
	BuildTime		= DWARVEN_WALLTOWER_SMALL_BUILDTIME
	BuildCost		= DWARVEN_WALLTOWER_SMALL_BUILDCOST
	////////////////////ResearchCompleteEvaEvent	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_DwarvenWallCatapult
	DisplayName = UPGRADE:Upgrade_DwarvenWallCatapult
	Type		= OBJECT
	BuildTime		= DWARVEN_WALLCATAPULT_SMALL_BUILDTIME
	BuildCost		= DWARVEN_WALLCATAPULT_SMALL_BUILDCOST
	////////////////////ResearchCompleteEvaEvent	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_DwarvenTowerForgedBlades
	Type			= OBJECT
	BuildCost		= DWARVEN_SENTRY_TOWER_AXE_UPGRADE_BUILDCOST
	BuildTime		= DWARVEN_SENTRY_TOWER_AXE_UPGRADE_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	DisplayName	= UPGRADE:DwarvenForgedBlades
End


;---------------------------------------------------------------

Upgrade Upgrade_EnableDwarvenGloinSlam
  Type              = OBJECT
End

Upgrade Upgrade_EnableDwarvenGloinShakeFoundation
  Type              = OBJECT
End

Upgrade Upgrade_EnableGloinSmash
  Type              = OBJECT
End


//----------------- DwarvenFortress --------------------------------
Upgrade Upgrade_DwarvenFortressOilCasks
	Type			= OBJECT
	BuildCost		= DWARVEN_OIL_CASK_BUILDCOST
	BuildTime		= DWARVEN_OIL_CASK_BUILDTIME
	UpgradeFX		= FX_DwarvenFortressUpgrade
	DisplayName		= Upgrade:FortressOilCasks
	ResearchSound	= UpgradeDwarfFortressOilCasks
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_DwarvenFortressBanners
	Type				= OBJECT
	BuildCost			= DWARVEN_FORTRESS_BANNER_BUILDCOST
	BuildTime			= DWARVEN_FORTRESS_BANNER_BUILDTIME
	UpgradeFX			= FX_DwarvenFortressUpgrade
	DisplayName			= Upgrade:FortressBanners
	ResearchSound		= UpgradeDwarfFortressBanner
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_DwarvenFortressSiegeKegs
	Type			= OBJECT
	BuildCost		= DWARVEN_SIEGE_KEGS_BUILDCOST
	BuildTime		= DWARVEN_SIEGE_KEGS_BUILDTIME
	UpgradeFX		= FX_DwarvenFortressUpgrade
	DisplayName		= Upgrade:FortressSiegeKegs
	ResearchSound	= UpgradeDwarfFortressSiegeKegs
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_DwarvenFortressMightyCatapult
	Type			= OBJECT
	BuildCost		= DWARVEN_CATAPULT_TOWER_BUILDCOST
	BuildTime		= DWARVEN_CATAPULT_TOWER_BUILDTIME
	UpgradeFX		= FX_DwarvenFortressUpgrade
	DisplayName		= Upgrade:FortressMightyCatapult
	ResearchCompleteEvaEvent	= UpgradeMightyCatapult
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_DwarvenFortressMightyCatapultReady
	Type			= OBJECT
End

Upgrade Upgrade_DwarvenFortressDwarvenStoneworkTrigger // You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= DWARVEN_STONEWORK_BANNER_BUILDCOST
	BuildTime		= DWARVEN_STONEWORK_BANNER_BUILDTIME
	UpgradeFX		= FX_DwarvenFortressUpgrade
	DisplayName		= Upgrade:FortressDwarvenStonework
	ResearchSound	= UpgradeDwarfFortressStonework
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_DwarvenFortressDwarvenStonework
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= 30
	DisplayName		= Upgrade:FortressDwarvenStonework
	UpgradeFX		= FX_DwarvenFortressUpgrade
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

//----MineShaft----
Upgrade Upgrade_DwarvenMineShaftLevel2
	Type			= OBJECT
	BuildCost		= DWARVEN_MINE_LEVEL2_UPGRADE_COST
	BuildTime		= DWARVEN_MINE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:DwarvenMineShaftLevel2
End

Upgrade Upgrade_DwarvenMineShaftLevel3
	Type			= OBJECT
	BuildCost		= DWARVEN_MINE_LEVEL3_UPGRADE_COST
	BuildTime		= DWARVEN_MINE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:DwarvenMineShaftLevel3
End

//----ArcheryRange----
Upgrade Upgrade_DwarvenArcheryRangeLevel2
	Type			= OBJECT
	BuildCost		= DWARVEN_ARCHERYRANGE_LEVEL2_UPGRADE_COST
	BuildTime		= DWARVEN_ARCHERYRANGE_LEVEL2_UPGRADE_BUILDTIME
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
	DisplayName		= Upgrade:DwarvenArcheryRangeLevel2
End

Upgrade Upgrade_DwarvenArcheryRangeLevel3
	Type			= OBJECT
	BuildCost		= DWARVEN_ARCHERYRANGE_LEVEL3_UPGRADE_COST
	BuildTime		= DWARVEN_ARCHERYRANGE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:DwarvenArcheryRangeLevel3
End

//----ForgeWorks----
Upgrade Upgrade_DwarvenForgeWorksLevel2
	Type			= OBJECT
	BuildCost		= DWARVEN_FORGEWORKS_LEVEL2_UPGRADE_COST
	BuildTime		= DWARVEN_FORGEWORKS_LEVEL2_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:DwarvenorgeWorksLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_DwarvenForgeWorksLevel3
	Type			= OBJECT
	BuildCost		= DWARVEN_FORGEWORKS_LEVEL3_UPGRADE_COST
	BuildTime		= DWARVEN_FORGEWORKS_LEVEL3_UPGRADE_BUILDTIME
	DisplayName	    = UPGRADE:DwarvenorgeWorksLevel3 
End

;-------------------------------------------------

Upgrade Upgrade_BattleWagonAxeThrowers
	Type			= OBJECT
	BuildCost		= DWARVEN_BATTLEWAGON_UPGRADE_COST
	BuildTime		= DWARVEN_BATTLEWAGON_UPGRADE_TIME
	ResearchSound	= DwarfBattleWagonVoiceUpgradeAxeThrower
	DisplayName       = UPGRADE:BattlewagonAxeThrowers
End

Upgrade Upgrade_BattleWagonBannerCarrier
	Type			= OBJECT
	BuildCost		= DWARVEN_BATTLEWAGON_UPGRADE_COST
	BuildTime		= DWARVEN_BATTLEWAGON_UPGRADE_TIME
	ResearchSound	= DwarfBattleWagonUpgradeBannerCarrierMS
	DisplayName       = UPGRADE:BattlewagonBannerCarrier
End

Upgrade Upgrade_BattleWagonMenOfDale
	Type			= OBJECT
	BuildCost		= DWARVEN_BATTLEWAGON_UPGRADE_COST
	BuildTime		= DWARVEN_BATTLEWAGON_UPGRADE_TIME
	ResearchSound	= DwarfBattleWagonVoiceUpgradeMenOfDale
	DisplayName       = UPGRADE:BattlewagonMenofDale
End

Upgrade Upgrade_BattleWagonHearth
	Type			= OBJECT
	BuildCost		= DWARVEN_BATTLEWAGON_HEARTH_COST
	BuildTime		= DWARVEN_BATTLEWAGON_UPGRADE_TIME_HEARTH
	ResearchSound	= DwarfBattleWagonUpgradeHearthMS
	DisplayName       = UPGRADE:BattlewagonHearth
End
