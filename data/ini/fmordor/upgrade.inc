//////////////////
// UPGRADE.INC //
////////////////
//Mordor//
/////////


Upgrade Upgrade_MordorFaction
	DisplayName		= UPGRADE:MordorFaction
	Type			= PLAYER
End


Upgrade Upgrade_MordorDualEconomyChoice
	DisplayName		= UPGRADE:MordorDualEconomyChoice
	Type			= PLAYER
End


Upgrade Upgrade_MordorFighterFearless
	Type			= OBJECT
End



////---- MORDOR ---------------------------------------------------------------------

////Mordor Fortress Upgrades
Upgrade Upgrade_MordorFortressFireArrowsTrigger //// You actually buy this one, which gives the one below to the whole castle
	Type			= OBJECT
	BuildCost		= MORDOR_FIREARROWS_BUILDCOST
	BuildTime		= MORDOR_FIREARROWS_BUILDTIME
	DisplayName	    	= UPGRADE:FortressFireArrows
	ResearchSound	= UpgradeMordorFortressFlamingMunitions
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MordorFortressMorgulSorceryTrigger
	Type				= OBJECT
	BuildCost			= MORDOR_MORGULSORCERY_BUILDCOST
	BuildTime			= MORDOR_MORGULSORCERY_BUILDTIME
	DisplayName	    	= UPGRADE:FortressMorgulSorcery
	ResearchSound		= UpgradeMordorFortressMorgulSorcery
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MordorFortressMorgulSorcery
	Type			= OBJECT
	BuildCost		= MORDOR_MORGULSORCERY_BUILDCOST
	BuildTime		= MORDOR_MORGULSORCERY_BUILDTIME
	DisplayName	    	= UPGRADE:FortressMorgulSorcery
	;ResearchSound	= UpgradeMordorFortressMorgulSorcery
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MordorFortressDoomPyres
	Type			= OBJECT
	BuildCost		= MORDOR_DOOMPYRES_BUILDCOST
	BuildTime		= MORDOR_DOOMPYRES_BUILDTIME
	DisplayName	    	= UPGRADE:FortressDoomPyres
	ResearchSound	= UpgradeMordorFortressDoomPyres
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MordorFortressMagmaCauldrons
	Type			= OBJECT
	BuildCost		= MORDOR_MAGMACAULDRONS_BUILDCOST
	BuildTime		= MORDOR_MAGMACAULDRONS_BUILDTIME
	DisplayName	    	= UPGRADE:FortressMagmaCauldrons
	ResearchSound	= UpgradeMordorFortressMagmaCauldron
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_MordorFortressLavaMoat
	Type			= OBJECT
	BuildCost		= MORDOR_LAVAMOAT_BUILDCOST
	BuildTime		= MORDOR_LAVAMOAT_BUILDTIME
	DisplayName	    	= UPGRADE:FortressLavaMoat
	ResearchSound	= UpgradeMordorFortressLavaMoat
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

////Mordor Fortress Monument
Upgrade Upgrade_MordorFortressGorgorothSpire
	Type			= OBJECT
	BuildCost		= MORDOR_GORGOROTHSPIRE_BUILDCOST
	BuildTime		= MORDOR_GORGOROTHSPIRE_BUILDTIME
	DisplayName	    = UPGRADE:FortressGorgonothSpire
	ResearchCompleteEvaEvent	= UpgradeGorgonothSpire
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

	;--------------------------

Upgrade Upgrade_MordorTavernLevel2
	Type			= OBJECT
	BuildCost		= MORDOR_TAVERN_LVL2_UPGRADE_COST
	BuildTime		= MORDOR_TAVERN_LVL2_UPGRADE_TIME
	DisplayName		= UPGRADE:MordorTavernLevel2
	ResearchCompleteEvaEvent	= TavernUpgraded
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_MordorTavernLevel3
	Type			= OBJECT
	BuildCost		= MORDOR_TAVERN_LVL3_UPGRADE_COST
	BuildTime		= MORDOR_TAVERN_LVL3_UPGRADE_TIME
	DisplayName		= UPGRADE:MordorTavernLevel3
	ResearchCompleteEvaEvent	= TavernUpgraded
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_MordorOrcPitLevel2
	Type		= OBJECT
	BuildCost	= MORDOR_ORCPIT_LVL2_UPGRADE_COST
	BuildTime	= MORDOR_ORCPIT_LVL2_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorOrcPitLevel2
End

Upgrade Upgrade_MordorOrcPitLevel3
	Type		= OBJECT
	BuildCost	= MORDOR_ORCPIT_LVL3_UPGRADE_COST
	BuildTime	= MORDOR_ORCPIT_LVL3_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorOrcPitLevel3
End

Upgrade Upgrade_MordorMumakilPenLevel2
	Type			= OBJECT
	BuildCost		= MORDOR_MUMAKILPEN_LVL2_UPGRADE_COST
	BuildTime		= MORDOR_MUMAKILPEN_LVL2_UPGRADE_TIME
	DisplayName		= UPGRADE:MordorMumakilPenLevel2
	ResearchCompleteEvaEvent	= MumakilPenUpgraded
End

Upgrade Upgrade_MordorMumakilPenLevel3
	Type			= OBJECT
	BuildCost		= MORDOR_MUMAKILPEN_LVL3_UPGRADE_COST
	BuildTime		= MORDOR_MUMAKILPEN_LVL3_UPGRADE_TIME
	DisplayName		= UPGRADE:MordorMumakilPenLevel3
	ResearchCompleteEvaEvent	= MumakilPenUpgraded
End

Upgrade Upgrade_MordorSiegeWorksLevel2
	Type		= OBJECT
	BuildCost	= MORDOR_SIEGEWORKS_LVL2_UPGRADE_COST
	BuildTime	= MORDOR_SIEGEWORKS_LVL2_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorSiegeWorksLevel2
End

Upgrade Upgrade_MordorSiegeWorksLevel3
	Type		= OBJECT
	BuildCost	= MORDOR_SIEGEWORKS_LVL3_UPGRADE_COST
	BuildTime	= MORDOR_SIEGEWORKS_LVL3_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorSiegeWorksLevel3
End

Upgrade Upgrade_MordorTrollCageLevel2
	Type		= OBJECT
	BuildCost	= MORDOR_TROLLCAGE_LVL2_UPGRADE_COST
	BuildTime	= MORDOR_TROLLCAGE_LVL2_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorTrollCageLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_MordorTrollCageLevel3
	Type		= OBJECT
	BuildCost	= MORDOR_TROLLCAGE_LVL3_UPGRADE_COST
	BuildTime	= MORDOR_TROLLCAGE_LVL3_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorTrollCageLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_MordorHaradrimPalaceLevel2
	Type		= OBJECT
	BuildCost	= MORDOR_HARADRIMPALACE_LVL2_UPGRADE_COST
	BuildTime	= MORDOR_HARADRIMPALACE_LVL2_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorHaradrimPalaceLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_MordorHaradrimPalaceLevel3
	Type		= OBJECT
	BuildCost	= MORDOR_HARADRIMPALACE_LVL3_UPGRADE_COST
	BuildTime	= MORDOR_HARADRIMPALACE_LVL3_UPGRADE_TIME
	DisplayName	= UPGRADE:MordorHaradrimPalaceLevel3
End

//------    Mordor Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyMordorBasicTraining
	DisplayName       	= UPGRADE:MordorBasicTraining
	Type              	= PLAYER
	BuildCost		= MORDOR_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= MORDOR_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent  = UpgradeBannerCarrierTechnologyReady-Mordor
End

Upgrade Upgrade_MordorBasicTraining
	DisplayName       	= UPGRADE:MordorBasicTraining
	Type             	= OBJECT
	Tooltip			= UPGRADE:MordorBasicTraining
	BuildCost		= MORDOR_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= MORDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent  = UpgradeBannerCarrierReady
	RequiredObjectFilter 	= NONE +MordorOrcPit
	StrategicIcon		= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_TechnologyMordorFireArrows
	DisplayName       	= UPGRADE:MordorFireArrowUpgrade
	Type              	= PLAYER
	BuildCost		= MORDOR_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= MORDOR_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_MordorFireArrows
	DisplayName       	= UPGRADE:MordorFireArrowUpgrade
	Type              	= OBJECT
	Tooltip			= TOOLTIP:MordorFireArrows
	BuildCost		= MORDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= MORDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound		= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter 	= NONE +MordorHaradrimPalace				; Originally "+MordorTavern"
	StrategicIcon		= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_TechnologyMordorForgedBlades
	DisplayName       	= UPGRADE:MordorForgedBladesUpgrade
	Type              	= PLAYER
	BuildCost		= MORDOR_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= MORDOR_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
End

Upgrade Upgrade_MordorForgedBlades
	DisplayName       	= UPGRADE:MordorForgedBladesUpgrade
	Type              	= OBJECT
	Tooltip			= TOOLTIP:MordorForgedBlades
	BuildCost		= MORDOR_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= MORDOR_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound		= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter 	= NONE +MordorSiegeWorks			; Originally "+MordorTavern"
	StrategicIcon		= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_TechnologyMordorHeavyArmor
	DisplayName       	= UPGRADE:MordorHeavyArmorUpgrade
	Type              	= PLAYER
	BuildCost		= MORDOR_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= MORDOR_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHeavyArmorReady
End

Upgrade Upgrade_MordorHeavyArmor
	DisplayName       	= UPGRADE:MordorHeavyArmorUpgrade
	Type              	= OBJECT
	Tooltip			= TOOLTIP:MordorHeavyArmor
	BuildCost		= MORDOR_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= MORDOR_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound		= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	RequiredObjectFilter 	= NONE +MordorSiegeWorks			; Originally "+MordorTavern"
	StrategicIcon		= AptStrategicUnitUpgradeArmor
End
