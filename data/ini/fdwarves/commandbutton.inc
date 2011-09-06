////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Dwarves//
//////////


CommandButton Command_DwarvenPhalanxPorcupineFormation
	Command			= HORDE_TOGGLE_FORMATION	;;Tower Guard
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= DwarfPhalanxVoicePorcupineBegin DwarfPhalanxVoicePorcupineEnd
End


CommandButton Command_SpecialAbilityOilBarrels
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityDwarvenBattleWagonOilBarrels
	Options				= NEED_TARGET_POS OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:SpecialAbilityOilBarrels
	DescriptLabel			= CONTROLBAR:TooltipSpecialAbilityOilBarrels
	ButtonImage			= BDFortress_OilCasks
	ButtonBorderType		= ACTION
	CursorName			= Bombard
	InvalidCursorName		= GenericInvalid
	InPalantir			= Yes
End

CommandButton Command_UpgradeBattleWagonAxeThrowers
	Command				= OBJECT_UPGRADE
	Object				= DwarvenBattleWagon
	Upgrade				= Upgrade_BattleWagonAxeThrowers
	Options				= CANCELABLE OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:BattleWagonUpgradeAxeThrowers
	DescriptLabel			= CONTROLBAR:ToolTipBattleWagonUpgradeAxeThrowers
	ButtonImage			= BDHallofWarriors_DwarvenAxeThrower
	ButtonBorderType		= BUILD
	InPalantir			= Yes	
End

CommandButton Command_UpgradeBattleWagonBannerCarrier
	Command				= OBJECT_UPGRADE
	Object				= DwarvenBattleWagon
	Upgrade				= Upgrade_BattleWagonBannerCarrier
	Options				= CANCELABLE OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:BattleWagonUpgradeBannerCarrier
	DescriptLabel			= CONTROLBAR:ToolTipBattleWagonUpgradeBannerCarrier
	ButtonImage			= BDHallofWarriors_BannerCarrier
	ButtonBorderType		= BUILD
	InPalantir				= Yes	
End

CommandButton Command_UpgradeBattleWagonMenOfDale
	Command				= OBJECT_UPGRADE
	Object				= DwarvenBattleWagon
	Upgrade				= Upgrade_BattleWagonMenOfDale
	Options				= CANCELABLE OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:BattleWagonUpgradeMenOfDale
	DescriptLabel			= CONTROLBAR:ToolTipBattleWagonUpgradeMenOfDale
	ButtonImage			= BDArcheryRange_MenofDale
	ButtonBorderType		= BUILD
	InPalantir			= Yes	
End

CommandButton Command_UpgradeBattleWagonHearth
	Command				= OBJECT_UPGRADE
	Object				= DwarvenBattleWagon
	Upgrade				= Upgrade_BattleWagonHearth
	Options				= CANCELABLE OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:BattleWagonUpgradeHearth
	DescriptLabel			= OBJECT:HearthWellDescription
	ButtonImage			= BDHearth
	ButtonBorderType		= BUILD
	InPalantir			= Yes	
End

CommandButton Command_SpecialAbilityDwarvenIronHillsCatapultOilBarrels
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityDwarvenIronHillsCatapultOilBarrels
	Options				= NEED_TARGET_POS OK_FOR_MULTI_SELECT
	TextLabel			= CONTROLBAR:SpecialAbilityOilBarrels
	DescriptLabel			= CONTROLBAR:TooltipSpecialAbilityOilBarrels
	ButtonImage			= BDFortress_OilCasks
	ButtonBorderType		= ACTION
	CursorName			= Bombard
	InvalidCursorName		= GenericInvalid
	InPalantir			= Yes
End

CommandButton Command_SpecialAbilityDwarvenDemolisherDeploy
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityDwarvenDemolisherDeploy
	Options				= OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
	TextLabel			= CONTROLBAR:SpecialAbilityDwarvenDemolisherDeploy
	DescriptLabel			= CONTROLBAR:TooltipSpecialAbilityDwarvenDemolisherDeploy
	ButtonImage			= UCCommon_DemolisherDeploy	UCCommon_DemolisherDeployOff
	ButtonBorderType		= ACTION
	InPalantir			= Yes
	AutoAbility			= Yes
	TriggerWhenReady		= Yes
	AutoAbilityDisallowedOnModelCondition	= UNPACKING DEPLOYED PACKING MOVING
	;UnitSpecificSound		= DwarfDemolisherDeployMS		DwarfDemolisherUndeployMS	;this wasn't toggling
End



CommandButton Command_SpecialAbilityZerkergang
	Command			= SPECIAL_POWER 
	Options			= OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
	SpecialPower		= SpecialAbilityGimliHeroMode
	TextLabel		= CONTROLBAR:ZerkSlayer
	ButtonImage		= DUZerkBeserkGangIcon
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipZerkSlayer
	UnitSpecificSound	= DwarfZerkVoiceLeap
	InPalantir		= Yes
	AutoAbility		= Yes
End


CommandButton Command_RohanGimliLeap
  Command			= SPECIAL_POWER 
  SpecialPower			= SpecialAbilityGimliLeap
  Options			= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:Leap
  ButtonImage			= HSGimliLeap
  RadiusCursorType		= LeapRadiusCursor
  CursorName			= Bombard
  ButtonBorderType		= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipLeap
  InPalantir			= Yes
End

CommandButton Command_ZealotAxeThrow
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityZealotBoomAxe
	Options				= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
  	ButtonImage             = HSGimliAxeThrow
  	NeededUpgrade			  =	Upgrade_MiniHordeLvl2
	CursorName			= Bombard
	InvalidCursorName		= GenericInvalid
  	TextLabel               = CONTROLBAR:AxeThrow
  	DescriptLabel           = CONTROLBAR:ToolTipAxeThrow
	InPalantir			= Yes
	ButtonBorderType    		= ACTION
End


CommandButton Command_GimliAxeThrow
  Command                 = FIRE_WEAPON
  WeaponSlot              = TERTIARY
  Options                 = NEED_TARGET_ENEMY_OBJECT NO_PLAY_UNIT_SPECIFIC_SOUND_FOR_AUTO_ABILITY ; NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:AxeThrow
  ButtonImage             = HSGimliAxeThrow
  CursorName              = Bombard
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipAxeThrow
  InvalidCursorName       = GenericInvalid
  AutoAbility			  = Yes  
  UnitSpecificSound       = GimliVoiceModeAxeThrow
  SetAutoAbilityUnitSound = GimliVoiceModeAxeThrow ; Only when he is set to use it, not each time he uses it
  InPalantir			  = Yes
End



CommandButton Command_ConstructDwarvenPorter
	Command				= UNIT_BUILD
	Object				= DwarvenPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructDwarvenPorter
	ButtonImage			= BDFortress_Porter
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipConstructDwarvenPorter
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes     
End

CommandButton Command_PorterConstructDwarvenFortress
	Command				= DOZER_CONSTRUCT
	Object				= DwarvenFortress
	TextLabel			= CONTROLBAR:ConstructDwarvenFortress
	ButtonImage			= BDFortress
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructDwarvenFortress
	Radial				= Yes
	;InPalantir			= Yes
End

CommandButton Command_ConstructDwarvenSentryTower
	Command				= DOZER_CONSTRUCT
	Object				= DwarvenSentryTower
	TextLabel			= CONTROLBAR:ConstructDwarvenSentryTower
	ButtonImage			= SBGood_LoneTower
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipConstructDwarvenSentryTower
	Radial				= Yes
End

CommandButton Command_ConstructDwarvenBarracks
	Command          	= DOZER_CONSTRUCT
	Object           	= DwarfBarracks
	TextLabel        	= CONTROLBAR:ConstructDwarvenBarracks
	ButtonImage      	= BDHallWarriors
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipConstructDwarvenBarracks
	Radial           	= Yes  
End

CommandButton Command_ConstructDwarvenHearth
	Command         	= DOZER_CONSTRUCT
	Object           	= DwarvenHearth
	TextLabel        	= CONTROLBAR:ConstructDwarvenHearth
	ButtonImage	 	= BDHearth
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= OBJECT:HearthWellDescription
	Radial           	= Yes  
End


CommandButton Command_PurchaseTechnologyDwarvenFireArrows ;building
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenFireArrows 
	NeededUpgrade			= Upgrade_DwarvenArcheryRangeLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanFireArrows
	ButtonImage			= BGArcheryRange_FireArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyRohanFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ArcheryRange
End

CommandButton Command_PurchaseUpgradeDwarvenFireArrows
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_DwarvenFireArrows 
	NeededUpgrade			= Upgrade_TechnologyDwarvenFireArrows
	TextLabel			= CONTROLBAR:FireArrowUpgrade
	ButtonImage			= BGArcheryRange_FireArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeGondorFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenFireArrows
End

CommandButton Command_PurchaseTechnologyDwarvenBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyDwarvenBasicTraining
	ButtonImage			= BDHallofWarriors_BannerCarrier
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyDwarvenBasicTraining
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3HallOfWarriors
End

CommandButton Command_PurchaseUpgradeDwarvenBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_DwarvenBasicTraining 
	NeededUpgrade			= Upgrade_TechnologyDwarvenBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeDwarvenBasicTraining
	ButtonImage			= BDHallofWarriors_BannerCarrier
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenBasicTraining
End
;//Fire Arrow upgrade to be purchased by units
CommandButton Command_PurchaseUpgradeDwarvenForgedBlades	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_DwarvenForgedBlades
	NeededUpgrade			= Upgrade_TechnologyDwarvenForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeDwarvenForgedBlades
	ButtonImage			= BDForgeWorks_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenForgedBlades
End
;//Fire Arrow technology to be purchased by a building
CommandButton Command_PurchaseTechnologyDwarvenForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenForgedBlades
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyDwarvenForgedBlades
	ButtonImage			= BDForgeWorks_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyDwarvenForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ForgeWorks
End

CommandButton Command_PurchaseUpgradeDwarvenSiegeHammer	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	;FlagsUsedForToggle		= WEAPONSET_TOGGLE_1
	Upgrade				= Upgrade_DwarvenSiegeHammer
	NeededUpgrade			= Upgrade_TechnologyDwarvenSiegeHammer
	;-NeededUpgrade			= Upgrade_TechnologyDwarvenForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeDwarvenSiegeHammer	
	ButtonImage			= BDForgeWorks_SiegeHammers	
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenSiegeHammer	
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenSiegeHammer
End

CommandButton Command_ToggleGuardianWeapon
	Command				= TOGGLE_WEAPONSET
	Options				= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle		= WEAPONSET_TOGGLE_1
	TextLabel           		= CONTROLBAR:ToggleDwarvenGuardianWeapons
	ButtonImage         		= UCElven_Sword UCElven_Bow
	ButtonBorderType    		= ACTION 
	DescriptLabel       		= CONTROLBAR:ToolTipToggleGuardianWeapons
	InPalantir			= Yes
	;UnitSpecificSound   		= ElvenWarriorVoiceModeSword GuardianVoiceModeBow
End




;//Fire Arrow technology to be purchased by a building
CommandButton Command_PurchaseTechnologyDwarvenSiegeHammer	
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenSiegeHammer	
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyDwarvenSiegeHammer	
	ButtonImage			= BDForgeWorks_SiegeHammers	
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyDwarvenSiegeHammer	
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3ForgeWorks
End

;//Fire Arrow upgrade to be purchased by units
CommandButton Command_PurchaseUpgradeDwarvenMithrilMail
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_DwarvenMithrilMail
	NeededUpgrade			= Upgrade_TechnologyDwarvenMithrilMail
	TextLabel			= CONTROLBAR:PurchaseUpgradeDwarvenMithrilMail
	ButtonImage			= BDForgeWorks_MithrilMail
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenMithrilMail
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenMithrilMail
End
;//Fire Arrow technology to be purchased by a building
CommandButton Command_PurchaseTechnologyDwarvenMithrilMail
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenMithrilMail
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyDwarvenMithrilMail
	ButtonImage			= BDForgeWorks_MithrilMail
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyDwarvenMithrilMail
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3ForgeWorks
End

CommandButton Command_PurchaseUpgradeDwarvenFlamingShot	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_DwarvenFlamingShot
	NeededUpgrade			= Upgrade_TechnologyDwarvenFlamingShot
	TextLabel			= CONTROLBAR:PurchaseUpgradeDwarvenFlamingShot
	ButtonImage			= BGWorkshop_FireStone
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFlamingShot
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackDwarvenFlamingShot
End

CommandButton Command_PurchaseTechnologyDwarvenFlamingShot
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyDwarvenFlamingShot
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyDwarvenFlamingShot
	ButtonImage			= BGWorkshop_FireStone
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyDwarvenFlamingShot
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3ForgeWorks
End

 CommandButton Command_UpgradeDwarvenForgeWorksLevel2
 	Command				= OBJECT_UPGRADE
 	Object				= DwarvenSiegeWorks ;//Note this object is really the Forge works just named incorrectly.
 	Upgrade				= Upgrade_DwarvenForgeWorksLevel2
 	Options				= CANCELABLE
 	TextLabel			= CONTROLBAR:UpgradeDwarvenForgeWorksLevel2
 	ButtonImage			= UCCommon_UpgradeStructureNew
 	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipUpgradeDwarvenForgeWorksLevel2
 	Radial				= Yes
 	InPalantir			= Yes
 End
 
 CommandButton Command_UpgradeDwarvenForgeWorksLevel3
 	Command				= OBJECT_UPGRADE
 	Object				= DwarvenSiegeWorks ;//Note this object is really the Forge works just named incorrectly.
 	Upgrade				= Upgrade_DwarvenForgeWorksLevel3
 	Options				= CANCELABLE
 	TextLabel			= CONTROLBAR:UpgradeDwarvenForgeWorksLevel3
 	ButtonImage			= UCCommon_UpgradeStructureNew
 	ButtonBorderType		= BUILD
 	DescriptLabel			= CONTROLBAR:ToolTipUpgradeDwarvenForgeWorksLevel3
 	Radial				= Yes
  	InPalantir			= Yes
 End

 CommandButton Command_ConstructDwarvenForgeWorks
 	Command          = DOZER_CONSTRUCT
 	Object           = DwarvenSiegeWorks ;//Note this object is really the Forge works just named incorrectly.
 	TextLabel        = CONTROLBAR:ConstructDwarvenForgeWorks
 	ButtonImage      = BDForgeWorks
 	ButtonBorderType = BUILD 
 	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenForgeWorks
 	Radial           = Yes  
 End


CommandButton Command_ConstructDwarvenMineShaft
	Command          = DOZER_CONSTRUCT
	Object           = DwarvenMineShaft
	TextLabel        = CONTROLBAR:ConstructDwarvenMineShaft
	ButtonImage      = BDMineShaft
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:TooltipConstructDwarvenMineShaft
	Radial           = Yes  
End

CommandButton Command_ConstructDwarvenStatue
	Command          = DOZER_CONSTRUCT
	Object           = DwarvenStatue
	TextLabel        = CONTROLBAR:ConstructDwarvenStatue
	ButtonImage      = BDHeroicStatue
	ButtonBorderType = BUILD 
	DescriptLabel    = OBJECT:HeroicStatueDescription
	Radial           = Yes  
End

CommandButton Command_ConstructDwarvenWallHub
	Command       		= DOZER_CONSTRUCT
	Object        		= DwarvenWallHubSmall
	TextLabel     		= CONTROLBAR:ConstructDwarvenWallHub
	ButtonImage   		= BDWall_WallHub
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:ToolTipConstructDwarvenWallHub
	Radial			= Yes
	;InPalantir	   	= Yes
End

CommandButton Command_DwarvenCastleWallHub_BeginWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= DwarvenWallHubSmall
	Options			= OPTION_ONE
	TextLabel     		= CONTROLBAR:Command_DwarvenCastleWallHub_BeginWallSpan
	ButtonImage   		= BDWall_BuildWall
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:TooltipCommand_DwarvenCastleWallHub_BeginWallSpan
	Radial			= Yes
	InPalantir	   	= No
End


CommandButton Command_DwarvenCastleWallHub_BeginRamp
	Command       		= DOZER_CONSTRUCT
	Object        		= DwarvenCastleWallHub
	Options			= OPTION_TWO
	TextLabel     		= CONTROLBAR:Command_DwarvenCastleWallHub_BeginRamp
	ButtonImage   		= BuildingNoArt;;;; NEED TO REPLACE THIS!!!!!!!!!!!!!!!!!
	ButtonBorderType    	= BUILD
	DescriptLabel      	= CONTROLBAR:Command_DwarvenCastleWallHub_BeginRamp
	Radial			= Yes
	InPalantir	   	= Yes
End

CommandButton Command_DwarvenCastleWallHub_SmallWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= DwarvenWallHubSmall
	Options			= OPTION_THREE
	TextLabel     		= CONTROLBAR:Command_DwarvenCastleWallHub_SmallWallSpan
	ButtonImage   		= BDWall_BuildWall
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:Command_DwarvenCastleWallHub_SmallWallSpan
	Radial			= Yes
	InPalantir	   	= No
End



CommandButton Command_ConstructDwarvenArcheryRange
	Command          	= DOZER_CONSTRUCT
	Object           	= DwarvenArcheryRange
	TextLabel        	= CONTROLBAR:ConstructDwarvenArcheryRange
	ButtonImage      	= BDArcheryRange
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:TooltipConstructDwarvenArcheryRange
	Radial           	= Yes  
End
	
CommandButton Command_DwarvenWallUpgradeToHub
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= DwarvenCastleWallHub
	Upgrade			= Upgrade_DwarvenWallHub
	TextLabel     		= CONTROLBAR:Command_DwarvenWallUpgradeToHub
	ButtonImage   		= BDWall_WallHub
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToHub
	Radial			= Yes
	InPalantir	   	= Yes
End
CommandButton Command_DwarvenWallUpgradeToRegularGate
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= DwarvenCastleWallGate
	Upgrade			= Upgrade_DwarvenWallRegularGate
	TextLabel     		= CONTROLBAR:Command_DwarvenWallUpgradeToRegularGate
	ButtonImage   		= BDWall_Gate
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToRegularGate
	Radial			= Yes
	InPalantir	   	= Yes
End

CommandButton Command_DwarvenWallUpgradeToPosternGate
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= DwarvenWallPosternGate
	Upgrade			= Upgrade_DwarvenWallPosternGate
	TextLabel     		= CONTROLBAR:Command_DwarvenWallUpgradeToPosternGate
	ButtonImage   		= BDWall_PosternGate
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipCommand_MenWallUpgradeToPosternGate
	Radial			= Yes
	InPalantir	   	= Yes
End

CommandButton Command_DwarvenWallUpgradeToTower
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= DwarvenCastleWallTower
	Upgrade			= Upgrade_DwarvenWallTower
	TextLabel     		= CONTROLBAR:Command_DwarvenWallUpgradeToTower
	ButtonImage   		= BDWall_AxeTower
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToTower
	Radial			= Yes
	InPalantir	   	= Yes
End

CommandButton Command_DwarvenWallUpgradeToCatapult
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= DwarvenCastleWallCatapult
	Upgrade			= Upgrade_DwarvenWallCatapult
	TextLabel     		= CONTROLBAR:Command_DwarvenWallUpgradeToCatapult
	ButtonImage   		= BDWall_Catapult
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToCatapult
	Radial			= Yes
	InPalantir	   	= Yes
End




;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;//; DWARVEN STRUCTURE PRODUCTION BUTTONS ;;
;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

CommandButton Command_PurchaseUpgradeDwarvenArcheryRangeLevel2
   Command           	= OBJECT_UPGRADE
   Upgrade           	= Upgrade_DwarvenArcheryRangeLevel2
   Options           	= CANCELABLE
   TextLabel         	= CONTROLBAR:ConstructDwarvenArcheryRangeLevel2Upgrade
   ButtonImage       	= UCCommon_UpgradeStructureNew
   ButtonBorderType  	= UPGRADE
   DescriptLabel     	= CONTROLBAR:ToolTipBuildDwarvenArcheryRangeLevel2Upgrade
   Radial            	= Yes
   InPalantir        	= Yes
End

CommandButton Command_PurchaseUpgradeDwarvenArcheryRangeLevel3
   Command           	= OBJECT_UPGRADE
   Upgrade           	= Upgrade_DwarvenArcheryRangeLevel3
   Options           	= CANCELABLE
   TextLabel         	= CONTROLBAR:ConstructDwarvenArcheryRangeLevel3Upgrade
   ButtonImage       	= UCCommon_UpgradeStructureNew
   ButtonBorderType  	= UPGRADE
   DescriptLabel     	= CONTROLBAR:ToolTipBuildDwarvenArcheryRangeLevel3Upgrade
   Radial            	= Yes
   InPalantir        	= Yes
End

;CommandButton Command_PurchaseUpgradeDwarvenForgeWorksLevel2
;   Command           	= OBJECT_UPGRADE
;   Upgrade           	= Upgrade_DwarvenForgeWorksLevel2
;   Options           	= CANCELABLE
;   TextLabel         	= CONTROLBAR:ConstructDwarvenForgeWorksLevel2Upgrade
;   ButtonImage       	= UCCommon_UpgradeStructureNew
;   ButtonBorderType  	= UPGRADE
;   DescriptLabel     	= CONTROLBAR:ToolTipBuildDwarvenForgeWorksLevel2Upgrade
;   Radial            	= Yes
;   InPalantir        	= Yes
;End

;CommandButton Command_PurchaseUpgradeDwarvenForgeWorksLevel3
;   Command           	= OBJECT_UPGRADE
;   Upgrade           	= Upgrade_DwarvenForgeWorksLevel3
;   Options           	= CANCELABLE
;   TextLabel         	= CONTROLBAR:ConstructDwarvenForgeWorksLevel3Upgrade
;   ButtonImage       	= UCCommon_UpgradeStructureNew
;   ButtonBorderType  	= UPGRADE
;   DescriptLabel     	= CONTROLBAR:ToolTipBuildDwarvenForgeWorksLevel3Upgrade
;   Radial            	= Yes
;   InPalantir        	= Yes
;End


;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;//; DWARVEN UNITS PRODUCTION BUTTONS ;;
;//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

CommandButton Command_ConstructDwarvenBatteringRam
	Command				= UNIT_BUILD
	Object				= DwarvenDemolisher
	Options				= CANCELABLE	
	TextLabel			= CONTROLBAR:ConstructDwarvenBatteringRam
	ButtonImage			= BDForgeWorks_Demolisher
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildDwarvenBatteringRam
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ForgeWorksDemolisher
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructDwarvenCatapult
	Command				= UNIT_BUILD
	Object				= DwarvenCatapult
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel2
	TextLabel			= CONTROLBAR:ConstructDwarvenCatapult
	ButtonImage			= BDForgeWorks_Catapult
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildDwarvenCatapult
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ForgeWorks
End

CommandButton Command_ConstructDwarvenBattleWagon
	Command				= UNIT_BUILD
	Object				= DwarvenBattleWagon
	Options				= CANCELABLE	
	TextLabel			= CONTROLBAR:ConstructDwarvenBattleWagon
	ButtonImage			= BDForgeWorks_Battlewagon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildDwarvenBattleWagon
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructDwarvenGuardianHorde
	Command				= UNIT_BUILD
	Object				= DwarvenGuardianHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructDwarvenGuardianHorde
	ButtonImage			= BDHallofWarriors_DwarvenGuardian
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildDwarvenGuardianHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End

CommandButton Command_ConstructDwarvenZerkerHorde
	Command				= UNIT_BUILD
	Object				= DwarvenZerkerHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_DwarvenBarracksLevel3
	TextLabel			= CONTROLBAR:ConstructDwarvenZerkerHorde
	ButtonImage			= BDDwarvenZerkerIcon
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildDwarvenZerkerHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End


CommandButton Command_ConstructDwarvenPhalanxHorde
	Command				= UNIT_BUILD
	Object				= DwarvenPhalanxHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructDwarvenPhalanxHorde
	ButtonImage			= BDHallofWarriors_DwarvenPhalanx
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildDwarvenPhalanxHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End

CommandButton Command_ConstructDwarvenDemolisher
	Command				= UNIT_BUILD
	Object				= DwarvenDemolisher
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_DwarvenForgeWorksLevel2
	TextLabel			= CONTROLBAR:ConstructDwarvenDemolisher
	ButtonImage			= BDForgeWorks_Demolisher
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildDwarvenDemolisher
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ForgeWorks
End

CommandButton Command_ConstructDwarvenAxeThrowerHorde
	Command				= UNIT_BUILD
	Object				= DwarvenAxeThrowerHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructDwarvenAxeThrowerHorde
	ButtonImage			= BDHallofWarriors_DwarvenAxeThrower
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildDwarvenAxeThrowerHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End

CommandButton Command_UpgradeDwarvenBarracksLevel2
	Command				= OBJECT_UPGRADE
	Object				= DwarfBarracks
	Upgrade				= Upgrade_DwarvenBarracksLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeDwarvenBarracksLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipUpgradeDwarvenBarracksLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeDwarvenBarracksLevel3
	Command				= OBJECT_UPGRADE
	Object				= DwarfBarracks
	Upgrade				= Upgrade_DwarvenBarracksLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeDwarvenBarracksLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipUpgradeDwarvenBarracksLevel3		; Originally CONTROLBAR:ToolTipBuildDwarvenArcheryRangeLevel3Upgrade
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_ConstructDwarvenMenOfDaleHorde
	Command				= UNIT_BUILD
	Object				= DwarvenMenOfDaleHorde
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_DwarvenArcheryRangeLevel2
	TextLabel			= CONTROLBAR:ConstructDwarvenMenOfDale
	ButtonImage			= BDArcheryRange_MenofDale
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildDwarvenMenOfDaleHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
   	UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructInnDwarvenMenOfDaleHorde
	Command				= UNIT_BUILD
	Object				= DwarvenMenOfDaleHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructDwarvenMenOfDale
	ButtonImage			= BDArcheryRange_MenofDale
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildDwarvenMenOfDaleInnHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy      
End

//Dwarven Catapults
CommandButton Command_DwarvenPurchaseNewWallCatapult
	Command					= OBJECT_UPGRADE 
	Upgrade					= Upgrade_HasWallTrebuchet
	Options					= CANCELABLE
	ButtonImage				= BDFortress_Catapult
	ButtonBorderType		= UPGRADE 
	Radial					= Yes
	InPalantir	   			= Yes
	TextLabel				= CONTROLBAR:DwarvenCatapultUpgrade
	DescriptLabel			= CONTROLBAR:ToolTipDwarvenCatapultUpgrade
End


CommandButton Command_PurchaseNewDwarvenCitadelWallCatapult
	Command                 = OBJECT_UPGRADE 
	Upgrade                 = Upgrade_HasWallTrebuchet
	Options					= CANCELABLE
	ButtonImage				= BDFortress_Catapult
	ButtonBorderType        = UPGRADE 
	Radial					= Yes
	InPalantir	   			= Yes
	TextLabel               = CONTROLBAR:DwarvenCatapultUpgrade
	DescriptLabel           = CONTROLBAR:ToolTipDwarvenCatapultUpgrade
End


CommandButton Command_DwarvenChargeAttack
  Command				= SPECIAL_POWER
  SpecialPower				= SpecialAbilityDwarvenCharge
  Options				= OK_FOR_MULTI_SELECT NEED_TARGET_ENEMY_OBJECT 
  TextLabel				= CONTROLBAR:DwarvenGuardianChargeAttack
  ButtonImage				= UCGuardian_BullRush
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipSpecialAbilityDwarvenGuardianChargeAttack
  InPalantir				= Yes
  CursorName				= Bombard
  InvalidCursorName			= GenericInvalid
  PresetRange				= 50.0
;  UnitSpecificSound			= 
End

CommandButton Command_DwarvenGuardianChargeAttack
  Command				= SPECIAL_POWER
  SpecialPower				= SpecialAbilityDwarvenCharge
  Options				= OK_FOR_MULTI_SELECT NEED_TARGET_ENEMY_OBJECT 
  TextLabel				= CONTROLBAR:DwarvenGuardianChargeAttack
  ButtonImage				= UCGuardian_BullRush
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipSpecialAbilityDwarvenGuardianChargeAttack
  InPalantir				= Yes
  CursorName				= Bombard
  InvalidCursorName			= GenericInvalid
  PresetRange				= 50.0
;  UnitSpecificSound			= 
End



CommandButton Command_SpecialAbilityGloinSmash
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityGloinSmash
  Options				  = NEED_TARGET_POS
  TextLabel               = CONTROLBAR:GloinSmash
  ButtonImage             = HSGloinShatterHammer
  RadiusCursorType		  = LeapRadiusCursor
  CursorName		      = Bombard
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipGloinSmash
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityDwarvenGloinSlam
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityDwarvenGloinSlam
  Options				  = NEED_TARGET_ENEMY_OBJECT
  TextLabel               = CONTROLBAR:GloinSlam
  CursorName			  = Bombard
  InvalidCursorName		  = GenericInvalid
  ButtonImage             = HSGloinSlam
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipDwarvenGloinSlam
  AutoAbility			  = Yes
  PresetRange			  = 120.0
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityDwarvenGloinShakeFoundation
  Command                 = SPECIAL_POWER 
  Options				  = NEED_TARGET_ENEMY_OBJECT
  SpecialPower            = SpecialAbilityDwarvenGloinShakeFoundation
  TextLabel               = CONTROLBAR:GloinShakeFoundation
  CursorName			  = Bombard
  InvalidCursorName		  = GenericInvalid
  ButtonImage             = HSGloinShakeFoundation
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipDwarvenGloinShakeFoundation
  InPalantir			  = Yes
  
  AutoAbility			  = Yes
  AffectsKindOf		      = STRUCTURE
  PresetRange			  = 15.0
End


;-------------------------------------------------------------------------------------
CommandButton Command_SelectUpgradesDwarvenFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectUpgradesDwarvenFortress
	ButtonImage             = UCCommon_UpgradeStructureNew
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectUpgradesDwarvenFortress
	Radial                  = Yes
	CommandRangeStart		= 7	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 7
End

CommandButton Command_SelectRevivablesDwarvenFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesDwarvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesDwarvenFortress
	Radial                  = Yes
	CommandRangeStart		= 14	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 10
End

CommandButton Command_SelectRevivablesDwarvenMonumentFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesDwarvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesDwarvenFortress
	Radial                  = Yes
	CommandRangeStart		= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 11
End

CommandButton Command_SelectRevivablesDwarvenFortress_DolGuldur
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesDwarvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesDwarvenFortress
	Radial                  = Yes
	CommandRangeStart		= 14	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 7
End

CommandButton Command_ConstructDwarvenCatapultExpansion
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenCatapultExpansion
	TextLabel        = CONTROLBAR:ConstructDwarvenCatapultExpansion
	ButtonImage      = BDFortress_Catapult
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenCatapultExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructDwarvenCatapultExpansionCitadel
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenCatapultExpansion
	TextLabel        = CONTROLBAR:ConstructDwarvenCatapultExpansion
	ButtonImage      = BDFortress_Catapult
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToCatapult
	Radial           = Yes  
End

CommandButton Command_ConstructDwarvenEreborTowerTowerExpansion
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenEreborTowerTowerExpansion
	TextLabel        = CONTROLBAR:ConstructDwarvenEreborTowerTowerExpansion
	ButtonImage      = BDFortress_AxeTower
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenEreborTowerTowerExpansion
	Radial           = Yes  
End 

CommandButton Command_ConstructDwarvenHallExpansion
	Command          = FOUNDATION_CONSTRUCT
	Object           = DwarvenHallExpansion
	TextLabel        = CONTROLBAR:ConstructDwarvenHallExpansion
	ButtonImage      = BDFortress_Bunker
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenHallExpansion
	Radial           = Yes  
End 

;CommandButton Command_ConstructDwarvenGarrisonTowerExpansion
;	Command          = FOUNDATION_CONSTRUCT
;	Object           = DwarvenGarrisonTowerExpansion
;	TextLabel        = CONTROLBAR:ConstructDwarvenGarrisonTowerExpansion
;	ButtonImage      = SBLoneTower
;	ButtonBorderType = BUILD 
;	DescriptLabel    = CONTROLBAR:ToolTipConstructDwarvenGarrisonTowerExpansion
;	Radial           = Yes  
;End

CommandButton	Command_ConstructDwarvenWallHubExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = DwarvenWallHubSmallExpansion
	TextLabel        = CONTROLBAR:Command_ConstructDwarvenWallHubExpansion
	ButtonImage      = BDWall_WallHub
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:TooltipCommand_ConstructDwarvenWallHubExpansion
	Radial           = Yes  
End

CommandButton Command_PurchaseUpgradeDwarvenFortressDwarvenStonework 
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_DwarvenFortressDwarvenStoneworkTrigger
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:PurchaseUpgradeDwarvenFortressDwarvenStonework
  ButtonImage       = BDFortress_DwarvenStonework
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressDwarvenStonework
  Radial            = Yes
  InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeDwarvenFortressFlamingMunitions 
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_GoodFortressFlamingMunitionsTrigger
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:PurchaseUpgradeDwarvenFortressFlamingMunitions
  ButtonImage       = BDFortress_FlamingMunitions
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressFlamingMunitions
  Radial            = Yes
  InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeDwarvenFortressBanners 
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_DwarvenFortressBanners
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:PurchaseUpgradeDwarvenFortressBanners
  ButtonImage       = BDFortress_Banners
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressBanners
  Radial            = Yes
  InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeDwarvenFortressSiegeKegs 
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_DwarvenFortressSiegeKegs
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:PurchaseUpgradeDwarvenFortressSiegeKegs
  ButtonImage       = BDFortress_SiegeKegs
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressSiegeKegs
  Radial            = Yes
  InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeDwarvenFortressMightyCatapult 
	Command           = OBJECT_UPGRADE
	Options			  = NEED_UPGRADE CANCELABLE
	Upgrade           = Upgrade_DwarvenFortressMightyCatapult
	NeededUpgrade	  = Upgrade_DwarvenFortressDwarvenStonework
	TextLabel         = CONTROLBAR:PurchaseUpgradeDwarvenFortressMightyCatapult
	ButtonImage       = BDFortress_MightyCatapult
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressMightyCatapult
	Radial            = Yes
	InPalantir	   	  = No
	LacksPrerequisiteLabel		= TOOLTIP:LackMightyCatapultDwarvenStonework
End

CommandButton Command_PurchaseUpgradeDwarvenFortressOilCasks
  	Command           	= OBJECT_UPGRADE
  	Upgrade           	= Upgrade_DwarvenFortressOilCasks 
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeDwarvenFortressOilCasks
  	ButtonImage       	= BDFortress_OilCasks
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeDwarvenFortressOilCasks
  	Radial            	= Yes
  	InPalantir	   	= No
End

CommandButton Command_FireWeaponDwarvenFortressOilCasks
  	Command                 = SPECIAL_POWER 
  	SpecialPower            = SpecialAbilityDwarvenFortressOilCasks
	Options			= NEED_UPGRADE
	NeededUpgrade		= Upgrade_DwarvenFortressOilCasks
  	TextLabel               = CONTROLBAR:FireWeaponDwarvenFortressOilCasks
  	ButtonImage             = BDFortress_FireOilCasks
  	ButtonBorderType        = ACTION 
  	DescriptLabel           = CONTROLBAR:ToolTipFireWeaponDwarvenFortressOilCasks
  	Radial			= No
  	InPalantir		= Yes
  	AutoAbility		= Yes
  	LacksPrerequisiteLabel	= TOOLTIP:LackOilCasks
End

CommandButton Command_FireWeaponMightyCatapult
	Command			= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityMightyCatapultLauncher
	TextLabel		= CONTROLBAR:FireWeaponMightyCatapult
	ButtonImage		= BDFortress_Catapult
	Options			= HIDE_WHILE_DISABLED NEED_TARGET_POS
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipFireWeaponMightyCatapult
	RadiusCursorType    	= RainOfFireRadiusCursor
	Radial			= Yes
	InPalantir		= Yes
	AutoAbility		= Yes
End