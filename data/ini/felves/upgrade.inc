//////////////////
// UPGRADE.INC //
////////////////
//Elves//
////////


Upgrade Upgrade_ElfFaction
	DisplayName		= UPGRADE:ElfFaction
	Type			= PLAYER
End

Upgrade Upgrade_ElvesBetterStealth
  DisplayName       = UPGRADE:ElfStealthUpgrade
  Type              = OBJECT
  ButtonImage       = SCGrabPassenger
  Cursor			= WeaponUpgrade
  UnitSpecificSound = NoSound // GondorPorterVoiceCreateFlame
End



Upgrade Upgrade_ThranduilThornofVengeance
  Type              = OBJECT
End

Upgrade Upgrade_ThranduilDeadeye
  Type              = OBJECT
End

Upgrade Upgrade_ThranduilMoveUnseen
  Type              = OBJECT
End

Upgrade Upgrade_ThranduilElfCloak
  Type              = OBJECT
End


Upgrade Upgrade_ArwenFloodTrigger
	Type = OBJECT
End

Upgrade Upgrade_ArwenElvenGraceTrigger
	Type = OBJECT
End

Upgrade Upgrade_HaldirLeadership
	Type			= OBJECT
End

Upgrade Upgrade_HaldirGoldenArrow
	Type			= OBJECT
End





////---------------------------- ELVES--------------------------
////---Elven Structures---
Upgrade Upgrade_EregionForgeLevel2
   Type            = OBJECT
	BuildCost           = ELVEN_FORGE_LEVEL2_UPGRADE_COST
	BuildTime           = ELVEN_FORGE_LEVEL2_UPGRADE_BUILDTIME
	DisplayName         = UPGRADE:EregionForgeLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End
 
Upgrade Upgrade_EregionForgeLevel3
    Type           = OBJECT
    BuildCost      = ELVEN_FORGE_LEVEL3_UPGRADE_COST
    BuildTime      = ELVEN_FORGE_LEVEL3_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:EregionForgeLevel3
    SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_ElvenBarracksLevel2
   Type            = OBJECT
    BuildCost      = ELVEN_BARRACKS_LEVEL2_UPGRADE_COST
    BuildTime      = ELVEN_BARRACKS_LEVEL2_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:ElvenBarracksLevel2
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End
 
Upgrade Upgrade_ElvenBarracksLevel3
    	Type           = OBJECT
    	BuildCost      = ELVEN_BARRACKS_LEVEL3_UPGRADE_COST
    	BuildTime      = ELVEN_BARRACKS_LEVEL3_UPGRADE_BUILDTIME
    	DisplayName	= UPGRADE:ElvenBarracksLevel3
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FACTORY_UNITUNLOCK
End

Upgrade Upgrade_ElvenGreenPastureLevel2
  	Type            = OBJECT
    	BuildCost      = ELVEN_GREEN_PASTURE_LEVEL2_UPGRADE_COST
    	BuildTime      = ELVEN_GREEN_PASTURE_LEVEL2_UPGRADE_BUILDTIME
    	DisplayName	= UPGRADE:ElvenGreenPastureLevel2
End
 
Upgrade Upgrade_ElvenGreenPastureLevel3
    Type           = OBJECT
    BuildCost      = ELVEN_GREEN_PASTURE_LEVEL3_UPGRADE_COST
    BuildTime      = ELVEN_GREEN_PASTURE_LEVEL3_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:ElvenGreenPastureLevel3
End

Upgrade Upgrade_ElvenMallornTreeLevel2
   Type            = OBJECT
    BuildCost      = ELVEN_MALLORN_TREE_LEVEL2_UPGRADE_COST
    BuildTime      = ELVEN_MALLORN_TREE_LEVEL2_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:ElvenMallornTreeLevel2
End
 
Upgrade Upgrade_ElvenMallornTreeLevel3
    Type           = OBJECT
    BuildCost      = ELVEN_MALLORN_TREE_LEVEL3_UPGRADE_COST
    BuildTime      = ELVEN_MALLORN_TREE_LEVEL3_UPGRADE_BUILDTIME
    DisplayName	= UPGRADE:ElvenMallornTreeLevel3
End

////---Elven Fortress---
Upgrade Upgrade_ElvenFortressEaglesNest
	Type			= OBJECT
	BuildCost		= ELVEN_EAGLENEST_BUILDCOST
	BuildTime		= ELVEN_EAGLENEST_BUILDTIME
	DisplayName		= UPGRADE:FortressEaglesNest
	ResearchCompleteEvaEvent	= UpgradeEaglesNest
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_EaglesNestEagleButtonEnable
	Type			= OBJECT
End

Upgrade Upgrade_HasEaglesNestEagle
	Type			= OBJECT
	BuildCost		= ELVEN_EAGLE_BUILDCOST
	BuildTime		= ELVEN_EAGLE_BUILDTIME
	DisplayName		= OBJECT:GondorGwiegher

End

//// You actually buy this one, which gives the one below to the whole castle
Upgrade Upgrade_ElvenFortressEncasingVinesTrigger
	Type				= OBJECT
	BuildCost			= ELVEN_ENCASINGVINES_BUILDCOST
	BuildTime			= ELVEN_ENCASINGVINES_BUILDTIME
	DisplayName			= UPGRADE:FortressEncasingVines
	ResearchSound		= UpgradeElfFortressEncasingVines		;CampElfUpgradeFortress
	SkirmishAIHeuristic	= AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_ElvenFortressEncasingVines
	Type			= OBJECT
	BuildCost		= ELVEN_ENCASINGVINES_BUILDCOST
	BuildTime		= ELVEN_ENCASINGVINES_BUILDTIME
	DisplayName	= UPGRADE:FortressEncasingVines
	;ResearchSound	= UpgradeElfFortressEncasingVines
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_ElvenFortressMysticFountains
	Type				= OBJECT
	BuildCost			= ELVEN_MYSTICFOUNTAINS_BUILDCOST
	BuildTime			= ELVEN_MYSTICFOUNTAINS_BUILDTIME
	DisplayName			= UPGRADE:FortressMysticFountains
	ResearchSound		= UpgradeElfFortressMysticFountains
	SkirmishAIHeuristic 	= AI_UPGRADEHEURISTIC_IMPORTANT
	UpgradeFX			= FX_DwarvenFortressUpgrade
End

Upgrade Upgrade_ElvenFortressEnchantedAnvil
	Type			= OBJECT
	BuildCost		= ELVEN_ENCHANTEDANVIL_BUILDCOST
	BuildTime		= ELVEN_ENCHANTEDANVIL_BUILDTIME
	DisplayName	= UPGRADE:FortressEnchantedAnvil
	ResearchSound	= UpgradeElfFortressEnchantedAnvil
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_ElvenFortressBlessedMist
	Type			= OBJECT
	BuildCost		= ELVEN_BLESSEDMIST_BUILDCOST
	BuildTime		= ELVEN_BLESSEDMIST_BUILDTIME
	DisplayName	= UPGRADE:FortressBlessedMist
	ResearchSound	= UpgradeElfFortressBlessedMist
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

Upgrade Upgrade_ElvenFortressCrystalMoat
	Type			= OBJECT
	BuildCost		= ELVEN_CRYSTALMOAT_BUILDCOST
	BuildTime		= ELVEN_CRYSTALMOAT_BUILDTIME
	DisplayName	= UPGRADE:FortressCrystalMoat
	ResearchSound	= UpgradeElfFortressCrystalMoat
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_FORTRESS
End

//------     Elven Upgrades	--------------------------------------------------------
Upgrade Upgrade_TechnologyElvenBasicTraining
	DisplayName       = UPGRADE:ElvenBasicTraining
	Type              = PLAYER
	BuildCost		= ELVEN_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= ELVEN_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady-Elf
End

Upgrade Upgrade_ElvenBasicTraining
	DisplayName       = UPGRADE:ElvenBasicTraining
	Type              = OBJECT
	Tooltip		= UPGRADE:ElvenBasicTraining
	BuildCost		= ELVEN_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierReady
	RequiredObjectFilter = ANY +EregionForge ;+ElvenGreenPasture 
	StrategicIcon	= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_TechnologyElvenSilverthornArrows
	DisplayName		= UPGRADE:ElvenSilverthornArrows
	Type			= PLAYER
	Tooltip			= TOOLTIP:ElvenSilverthornArrows
	BuildCost		= ELVEN_TECH_SILVERTHORN_ARROWS_BUILDCOST
	BuildTime		= ELVEN_TECH_SILVERTHORN_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeSilverThorneArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

Upgrade Upgrade_ElvenSilverthornArrows
	DisplayName		= UPGRADE:ElvenSilverthornArrows
	Type			= OBJECT
	Tooltip			= TOOLTIP:ElvenSilverthornArrows
	BuildCost		= ELVEN_PERSONAL_SILVERTHORN_ARROWS_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_SILVERTHORN_ARROWS_BUILDTIME
	ResearchSound	= UpgradeSilverThornArrows
	RequiredObjectFilter = ANY +EregionForge +ArnorForge
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_ElvenSilverthornArrowsTower
	DisplayName		= UPGRADE:ElvenSilverthornArrows
	Type			= OBJECT
	BuildCost		= ELVEN_PERSONAL_SILVERTHORN_ARROWS_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_SILVERTHORN_ARROWS_BUILDTIME
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_TechnologyElvenForgedBlades
	DisplayName       = UPGRADE:ElvenForgedBlades
	Type              = PLAYER
	BuildCost		= ELVEN_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= ELVEN_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady-Elf
End

Upgrade Upgrade_ElvenForgedBlades
	DisplayName     = UPGRADE:ElvenForgedBlades
  	Tooltip			= TOOLTIP:ElvenForgedBlades
	Type            = OBJECT
	BuildCost		= ELVEN_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter = ANY +EregionForge +ArnorForge
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_TechnologyElvenCloak
	DisplayName       = UPGRADE:ElvenCloak
	Type              = PLAYER
	BuildCost		= ELVEN_TECH_CLOAK_BUILDCOST
	BuildTime		= ELVEN_TECH_CLOAK_BUILDTIME
	;ResearchSound	= PorterHeavyArmorVoiceReady
End

Upgrade Upgrade_ElvenCloak
	DisplayName     = UPGRADE:ElvenCloak
	//Tooltip			= TOOLTIP:ElvenCloak
	Type            = OBJECT
	BuildCost		= ELVEN_PERSONAL_CLOAK_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_CLOAK_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
End

Upgrade Upgrade_TechnologyElvenHeavyArmor
	DisplayName       = UPGRADE:ElvenHeavyArmor
	Type              = PLAYER
	BuildCost		= ELVEN_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ELVEN_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeElvenArmorReady
End

Upgrade Upgrade_ElvenHeavyArmor
	DisplayName       = UPGRADE:ElvenHeavyArmor
	Tooltip		= TOOLTIP:ElvenHeavyArmor
	Type              = OBJECT
	BuildCost		= ELVEN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ELVEN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	RequiredObjectFilter = NONE +EregionForge
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_ElderRacesWarBarding
	DisplayName     = UPGRADE:ElderRacesWarBarding
	Tooltip			= TOOLTIP:ElderRacesWarBarding
	Type            = OBJECT
	BuildCost		= ELDERRACES_PERSONAL_WAR_BARDING_BUILDCOST
	BuildTime		= ELDERRACES_PERSONAL_WAR_BARDING_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
End

Upgrade Upgrade_ElvenWallHub
	DisplayName = UPGRADE:Upgrade_ElvenWallHub
	Type		= OBJECT
	BuildTime		= ELVEN_CASTLE_WALLHUB_BUILDTIME
	BuildCost		= ELVEN_CASTLE_WALLHUB_BUILDCOST
	////////////////////ResearchSound	= CampSoldierUpgradeNumenorStonework
End

Upgrade Upgrade_ElvenWallRegularGate
	DisplayName = UPGRADE:Upgrade_ElvenWallRegularGate
	Type		= OBJECT
	BuildTime		= ELVEN_CASTLE_WALLGATE_BUILDTIME
	BuildCost		= ELVEN_CASTLE_WALLGATE_BUILDCOST
	////////////////////ResearchSound	= CampSoldierUpgradeNumenorStonework
End