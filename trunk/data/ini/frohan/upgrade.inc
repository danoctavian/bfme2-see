//////////////////
// UPGRADE.INC //
////////////////
//Rohan//
////////

Upgrade Upgrade_RohanFaction
	DisplayName		= UPGRADE:RohanFaction
	Type			= PLAYER
End

Upgrade Upgrade_RohanDualEconomyChoice
	DisplayName		= UPGRADE:RohanDualEconomyChoice
	Type			= PLAYER
End


Upgrade Upgrade_RohanHorseBow
	DisplayName       = UPGRADE:RohanHorseBow
	Type              = OBJECT
	ButtonImage       = BuildingNoArt
	Cursor			= WeaponUpgrade
End
Upgrade Upgrade_RohanHorseLance
	DisplayName       = UPGRADE:RohanHorseLance
	Type              = OBJECT
	ButtonImage       = BuildingNoArt
	Cursor			= WeaponUpgrade
End
Upgrade Upgrade_RohanHornsOfTheRohirrim
	DisplayName       = UPGRADE:RohanHornsOfTheRohirrim
	Type              = OBJECT
	ButtonImage       = BuildingNoArt
	Cursor			= WeaponUpgrade
End




////--------------------------------------------------------------
////------Men of the West (Used to be rohan)----------------------
////--------------------------------------------------------------
////unit is now men of the west so useing gondor info

Upgrade Upgrade_RohanBasicTraining
	DisplayName			= UPGRADE:GondorBasicTraining
	Type				= OBJECT
	Tooltip				= UPGRADE:GondorBasicTraining
	BuildCost			= GONDOR_PERSONAL_BASIC_TRAINING_BUILDCOST
	BuildTime			= GONDOR_PERSONAL_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent		= UpgradeBannerCarrierReady			;GondorBannerVoiceSalute
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon		= AptStrategicUnitUpgradeBannerCarrier
End

Upgrade Upgrade_RohanFireArrows
	DisplayName       = UPGRADE:GondorFireArrowUpgrade
	Type              = OBJECT
	Tooltip			= TOOLTIP:GondorFlamingArrows
	BuildCost		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FIRE_ARROWS_BUILDTIME
	ResearchSound	= UpgradeFlamingArrows
	UpgradeFX		= FX_PorterDeliverFlamingArrows
	RequiredObjectFilter = ANY +GondorArcherRange +GondorForbiddenPool
	StrategicIcon	= AptStrategicUnitUpgradeArrow
End

Upgrade Upgrade_RohanForgedBladesForRohirrim
	DisplayName       = UPGRADE:GondorForgedBlades
	Type              = OBJECT
	Tooltip			= TOOLTIP:GondorForgedBlades
	BuildCost		= GONDOR_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon	= AptStrategicUnitUpgradeBlade
End

Upgrade Upgrade_RohanHeavyArmorForRohirrim
	DisplayName       = UPGRADE:GondorHeavyArmor
	Type              = OBJECT
	Tooltip			= TOOLTIP:GondorHeavyArmor
	BuildCost		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= GONDOR_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage     = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
	RequiredObjectFilter = NONE +GondorForge
	StrategicIcon	= AptStrategicUnitUpgradeArmor
End

Upgrade Upgrade_RohanHorseShield
	DisplayName       = UPGRADE:GondorKnightShield
	Type              = OBJECT
	Tooltip			  = TOOLTIP:GondorKnightShields
	BuildCost		  = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDCOST
	BuildTime	      = GONDOR_PERSONAL_KNIGHT_SHIELD_BUILDTIME
	ResearchSound	  = UpgradeHeavyArmor
	UpgradeFX		  = FX_PorterDeliverHorseShields
	RequiredObjectFilter = NONE +GondorStable
	StrategicIcon	= AptStrategicUnitUpgradeHorseShield
End
////--------------------------------------------------------------

//----NOTE: These technology upgrades are no longer needed because with the Men of the West
//----We are useing the Gondor Technologies

//---- ROHAN ---------------------------------------------------------------------
Upgrade Upgrade_TechnologyRohanBasicTraining
	DisplayName       = UPGRADE:RohanBasicTraining
	Type              = PLAYER
	BuildCost		= ROHAN_TECH_BASIC_TRAINING_BUILDCOST
	BuildTime		= ROHAN_TECH_BASIC_TRAINING_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeBannerCarrierTechnologyReady		//RohanBannerVoiceSalute
End

Upgrade Upgrade_TechnologyRohanFireArrows
	DisplayName       = UPGRADE:RohanFireArrowUpgrade
	Type              = PLAYER
	BuildCost		= ROHAN_TECH_FIRE_ARROWS_BUILDCOST
	BuildTime		= ROHAN_TECH_FIRE_ARROWS_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeFlameArrowsReady
	SkirmishAIHeuristic = AI_UPGRADEHEURISTIC_IMPORTANT
End

//-------------------
Upgrade Upgrade_TechnologyRohanForgedBlades
	DisplayName       = UPGRADE:RohanForgedBlades
	Type              = PLAYER
	BuildCost		= ROHAN_TECH_FORGED_BLADES_BUILDCOST
	BuildTime		= ROHAN_TECH_FORGED_BLADES_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeForgedBladesReady
End

Upgrade Upgrade_RohanForgedBlades
	DisplayName       = UPGRADE:RohanForgedBlades
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanForgedBlades
	BuildCost		= ROHAN_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
	
	SubUpgradeTemplateNames = Upgrade_RohanForgedBladesForPeasants Upgrade_RohanForgedBladesForElves //Upgrade_RohanForgedBladesForRohirrim 
End

Upgrade Upgrade_RohanForgedBladesForPeasants
	DisplayName       = UPGRADE:RohanForgedBlades
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanForgedBlades
	BuildCost		= ROHAN_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
End

Upgrade Upgrade_RohanForgedBladesForElves
	DisplayName       = UPGRADE:RohanForgedBlades
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanForgedBlades
	BuildCost		= ROHAN_PERSONAL_FORGED_BLADES_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_FORGED_BLADES_BUILDTIME
	ResearchSound	= UpgradeForgedBlades
	UpgradeFX		= FX_PorterDeliverForgedBlades
End

//-------------------
Upgrade Upgrade_TechnologyRohanHeavyArmor
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = PLAYER
	BuildCost		= ROHAN_TECH_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_TECH_HEAVY_ARMOR_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHeavyArmorReady
End

Upgrade Upgrade_RohanHeavyArmor
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanHeavyArmor
	BuildCost		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
	
	SubUpgradeTemplateNames = Upgrade_RohanHeavyArmorForRohirrimArchers Upgrade_RohanHeavyArmorForElves Upgrade_RohanHeavyArmorForArchers Upgrade_RohanHeavyArmorForPeasants //Upgrade_RohanHeavyArmorForRohirrim
End

Upgrade Upgrade_RohanHeavyArmorForRohirrimArchers
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanHeavyArmor
	BuildCost		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
End

Upgrade Upgrade_RohanHeavyArmorForElves
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanHeavyArmor
	BuildCost		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
End

Upgrade Upgrade_RohanHeavyArmorForArchers
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanHeavyArmor
	BuildCost		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
End

Upgrade Upgrade_RohanHeavyArmorForPeasants
	DisplayName       = UPGRADE:RohanHeavyArmor
	Type              = OBJECT
	//Tooltip		= TOOLTIP:RohanHeavyArmor
	BuildCost		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDCOST
	BuildTime		= ROHAN_PERSONAL_HEAVY_ARMOR_BUILDTIME
	ResearchSound	= UpgradeHeavyArmor
	UpgradeFX		= FX_PorterDeliverHeavyArmor
	ButtonImage       = BRArmory_HeavyArmor
	Cursor			= ArmorUpgrade
End

//-------------------
Upgrade Upgrade_TechnologyRohanHorseShield
	DisplayName       = UPGRADE:RohanHorseShield
	Type              = PLAYER
	BuildCost		= ROHAN_TECH_HORSE_SHIELD_BUILDCOST
	BuildTime		= ROHAN_TECH_HORSE_SHIELD_BUILDTIME
	ResearchCompleteEvaEvent	= UpgradeHorseShieldsReady
End
