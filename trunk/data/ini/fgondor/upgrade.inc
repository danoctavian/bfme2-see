//////////////////
// UPGRADE.INC //
////////////////
//Gondor//
/////////

Upgrade Upgrade_GondorFaction
	DisplayName		= UPGRADE:GondorFaction
	Type			= PLAYER
End



Upgrade Upgrade_KnightShield
  DisplayName       = UPGRADE:KnightShield
  Tooltip		= TOOLTIP:GondorKnightShields
  Type              = OBJECT
  ButtonImage       = SCGrabPassenger
  Cursor			= ArmorUpgrade
End


Upgrade Upgrade_GandalfBlast
  Type		    = OBJECT
End

Upgrade Upgrade_GandalfLightningSword
  Type              = OBJECT
End

Upgrade Upgrade_GandalfWordOfPower
  Type              = OBJECT
End

Upgrade Upgrade_GandalfLeadership
  Type              = OBJECT
End

Upgrade Upgrade_Shadowfax
	Type			= OBJECT
End


Upgrade Upgrade_AragornLeadership
  Type				= OBJECT
End

Upgrade Upgrade_AragornElendil
  Type              = OBJECT
End

Upgrade Upgrade_AragornBladeMaster
  Type              = OBJECT
End


Upgrade Upgrade_BoromirHornOfGondor
  Type              = OBJECT
End

Upgrade Upgrade_BoromirForGondorSpeech
  Type              = OBJECT
End

Upgrade Upgrade_BoromirLastStand
  Type              = OBJECT
End

Upgrade Upgrade_DamrodLeadership
  Type              = OBJECT
End

Upgrade Upgrade_DamrodRallyRangers
  Type              = OBJECT
End

Upgrade Upgrade_DamrodDeadlySniper
  Type              = OBJECT
End


Upgrade Upgrade_FaramirLeadership
  Type              = OBJECT
End

Upgrade Upgrade_FaramirWoundingArrow
  Type              = OBJECT
End

Upgrade Upgrade_FaramirKnightRangerToggle
  Type              = OBJECT
End

Upgrade Upgrade_FaramirWarSpeech
  Type              = OBJECT
End

Upgrade Upgrade_FaramirCaptainOfGondor
  Type              = OBJECT
End


Upgrade Upgrade_GondorFighterFearless
	Type			= OBJECT
End


;;------------------------------------
Upgrade Upgrade_MenFortressBoilingOil
	Type			= OBJECT
	BuildCost		= 1500
	BuildTime		= 30
	DisplayName		= Upgrade:FortressBoilingOil
	;ResearchSound	= CampSoldierUpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MenFortressBanners
	Type			= OBJECT
	BuildCost		= 500
	BuildTime		= 5
	DisplayName		= Upgrade:FortressBanners
	ResearchSound	= UpgradeMenFortressBanner
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MenFortressHouseOfHealing
	Type			= OBJECT
	BuildCost		= 1000
	BuildTime		= 30
	DisplayName		= Upgrade:FortressHouseofHealing
	;ResearchSound	= CampSoldierUpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MenFortressIvoryTower
	Type			= OBJECT
	BuildCost		= 2500
	BuildTime		= 30
	DisplayName		= Upgrade:FortressIvoryTower
	ResearchCompleteEvaEvent	= UpgradeIvoryTower
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MenFortressNumenorStoneworkTrigger // You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= GONDOR_NEMENORSTONEWORK_BUILDCOST
	BuildTime		= GONDOR_NEMENORSTONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	;ResearchCompleteEvaEvent	= CampSoldierUpgradeFortress
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeNumenorStonework
	ResearchSound = UpgradeDwarfFortressStonework
End

Upgrade Upgrade_MenFortressNumenorStonework
	Type			= OBJECT
	BuildCost		= GONDOR_NEMENORSTONEWORK_BUILDCOST
	BuildTime		= GONDOR_NEMENORSTONEWORK_BUILDTIME
	DisplayName		= Upgrade:FortressNumenorStonework
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
	ResearchCompleteEvaEvent	= UpgradeNumenorStonework
	ResearchSound = UpgradeDwarfFortressStonework
End


//---------Men of the West Structure Upgrades----------
//----Archery Range----
Upgrade Upgrade_GondorArcheryRangeLevel2
	Type			= OBJECT
	BuildCost		= GONDOR_ARCHERYRANGE_LEVEL2_UPGRADE_COST
	BuildTime		= GONDOR_ARCHERYRANGE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorArcheryRangeLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_GondorArcheryRangeLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_ARCHERYRANGE_LEVEL3_UPGRADE_COST
	BuildTime		= GONDOR_ARCHERYRANGE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorArcheryRangeLevel3
End

Upgrade Upgrade_GondorForgeLevel2
	Type			= OBJECT
	BuildCost		= GONDOR_FORGE_LEVEL2_UPGRADE_COST
	BuildTime		= GONDOR_FORGE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorBlacksmithLevel2
End

Upgrade Upgrade_GondorForgeLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_FORGE_LEVEL3_UPGRADE_COST
	BuildTime		= GONDOR_FORGE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorBlacksmithLevel3
End

Upgrade Upgrade_GondorBarracksLevel2
	Type			= OBJECT
	BuildCost		= GONDOR_BARRACKS_LEVEL2_UPGRADE_COST
	BuildTime		= GONDOR_BARRACKS_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorBarracksLevel2
End

Upgrade Upgrade_GondorBarracksLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_BARRACKS_LEVEL3_UPGRADE_COST
	BuildTime		= GONDOR_BARRACKS_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorBarracksLevel3
End

Upgrade Upgrade_GondorStableLevel2
	Type			= OBJECT
	BuildCost		= GONDOR_STABLE_LEVEL2_UPGRADE_COST
	BuildTime		= GONDOR_STABLE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorStablesLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_GondorStableLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_STABLE_LEVEL3_UPGRADE_COST
	BuildTime		= GONDOR_STABLE_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorStablesLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_GondorWorkshopLevel2
	Type			= OBJECT
	BuildCost		= GONDOR_WORKSHOP_LEVEL2_UPGRADE_COST
	BuildTime		= GONDOR_WORKSHOP_LEVEL2_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorWorkshopLevel2
End

Upgrade Upgrade_GondorWorkshopLevel3
	Type			= OBJECT
	BuildCost		= GONDOR_WORKSHOP_LEVEL3_UPGRADE_COST
	BuildTime		= GONDOR_WORKSHOP_LEVEL3_UPGRADE_BUILDTIME
	DisplayName		= Upgrade:GondorWorkshopLevel3
End




//------    Gondor Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyGondorBasicTraining
	DisplayName       = UPGRADE:GondorBasicTraining
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady
End

Upgrade Upgrade_GondorBasicTraining
	DisplayName       = UPGRADE:GondorBasicTraining
	Type              = OBJECT
	Tooltip		= UPGRADE:GondorBasicTraining
	BuildCost		= GONDOR_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierReady
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_TechnologyGondorFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_GondorFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
  	Tooltip		= TOOLTIP:GondorFlamingArrows
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +GondorArcherRange +GondorForbiddenPool
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_TechnologyGondorForgedBlades
	DisplayName       = UPGRADE:GondorForgedBlades
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
End

Upgrade Upgrade_GondorForgedBlades
	DisplayName       = UPGRADE:GondorForgedBlades
  	Tooltip		= TOOLTIP:GondorForgedBlades
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_TechnologyGondorHeavyArmor
	DisplayName       = UPGRADE:GondorHeavyArmor
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= GONDOR_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHeavyArmorReady
End

Upgrade Upgrade_GondorHeavyArmor
	DisplayName       = UPGRADE:GondorHeavyArmor
	Tooltip		= TOOLTIP:GondorHeavyArmor
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_TechnologyGondorKnightShield
	DisplayName       = UPGRADE:GondorKnightShield
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_KNIGHT_SHIELD_BUILDCOST
	BuildTime		= GONDOR_TECH_KNIGHT_SHIELD_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeKnightShieldsReady
End

Upgrade Upgrade_GondorKnightShield
	DisplayName       = UPGRADE:GondorKnightShield
  	Tooltip		= TOOLTIP:GondorKnightShields
	Type              = OBJECT
	BuildCost		= GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHorseShields
	RequiredObjectFilter = NONE +GondorStable
	StrategicIcon	= AptStrategicUnitUpgradeHorseShield
End

Upgrade Upgrade_TechnologyGondorFireStones
	DisplayName       = UPGRADE:GondorFireStones
	Type              = PLAYER
	BuildCost		= GONDOR_TECH_FIRE_STONES_BUILDCOST
	BuildTime		= GONDOR_TECH_FIRE_STONES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlamingShotsReady
End

Upgrade Upgrade_GondorFireStones
	DisplayName       = UPGRADE:GondorFireStones
	Type              = OBJECT
	Tooltip		= TOOLTIP:GondorFireStones
	BuildCost		= GONDOR_PERSONAL_FIRE_STONES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_STONES_BUILDTIME
	ResearchSound	= UpgradeFireStones
	UpgradeFX		= FX_PorterDeliverFireStones
	RequiredObjectFilter = NONE +GondorWorkshop
End
