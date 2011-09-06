////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Rohan//
////////



;CommandButton Command_ToggleFormationRohirrim
;	Command			= HORDE_TOGGLE_FORMATION	;;Rohirrim
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleRohirrimLineToWedgeFormation CONTROLBAR:ToolTipToggleRohirrimWedgeToLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RohirrimVoiceWedgeFormation RohirrimVoiceLineFormation
;End

;CommandButton Command_SetFormationRohirrimWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanRohirrimHordeWedgeFormation
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RohirrimVoiceWedgeFormation
;End

;CommandButton Command_SetFormationRohirrimLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanRohirrimHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RohirrimVoiceLineFormation
;End

CommandButton Command_ToggleFormationRohirrimArcher
	Command			= HORDE_TOGGLE_FORMATION	;;Rohirrim
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Line
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:ToggleWedgeFormation CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleRohirrimArcherLineToWedgeFormation CONTROLBAR:ToolTipToggleRohirrimArcherWedgeToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= RohirrimVoiceWedgeFormation RohirrimVoiceLineFormation
End

;CommandButton Command_SetFormationRohirrimArcherWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanRohirrimArcherHordeWedgeFormation
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RohirrimVoiceWedgeFormation
;End

;CommandButton Command_SetFormationRohirrimArcherLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanRohirrimArcherHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RohirrimVoiceLineFormation
;End

CommandButton Command_ToggleFormationRohanArcherHorde				;aka YeomanArcher
	Command			= HORDE_TOGGLE_FORMATION	;;Yeoman Archer
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Skirmish UCFormation_Line
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:ToggleSkirmishFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleRArcherLineToSkirmishFormation	CONTROLBAR:ToolTipToggleRArcherSkirmishToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= YeomanArcherVoiceSkirmishFormation YeomanArcherVoiceLineFormation
End

;CommandButton Command_SetFormationRohanArcherSkirmish
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanArcherHordeSkirmishFormation
;	ButtonImage             = UCFormation_Skirmish
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleSkirmishFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleSkirmishFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= YeomanArcherVoiceSkirmishFormation
;End

;CommandButton Command_SetFormationRohanArcherLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= RohanArcherHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= YeomanArcherVoiceLineFormation
;End



CommandButton Command_RohanPorcupineFormation
	Command			= HORDE_TOGGLE_FORMATION	;;Tower Guard
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= PeasantMaleVoicePorcupine PeasantMaleVoicePorcupineOut
End

;CommandButton Command_ConstructRohanOathbreakerHorde
;	Command			= UNIT_BUILD
;	Options			= CANCELABLE
;	Object			= RohanOathbreakerHorde
;	TextLabel		= CONTROLBAR:ConstructMordorOrcFighterHorde
;	;ButtonImage		= BMOrcPit_Horde
;	;ButtonBorderType	= BUILD 
;	;DescriptLabel		= CONTROLBAR:ToolTipBuildMordorOrcFighterHorde
;	;Radial			= Yes
;	;IsClickable		= No
;;   UnitSpecificSound   	= GondorArcherVoiceBuy      
;End

/////////////////////////////EOMER//////////////////

CommandButton Command_MountHorseEomer
  Command               	= SPECIAL_POWER
  SpecialPower          	= SpecialAbilityToggleMounted
  TextLabel             	= CONTROLBAR:TheodenMount
  Options			= TOGGLE_IMAGE_ON_WEAPONSET ON_GROUND_ONLY
  FlagsUsedForToggle		= MOUNTED
  ButtonImage           	= HSTheodenMountDismount HSTheodenMountDismount
  ButtonBorderType      	= ACTION 
  DescriptLabel         	= CONTROLBAR:GenericMountTooltip
  InPalantir            	= Yes  
  UnitSpecificSound     	= EomerVoiceMountMS			EomerVoiceDismountMS
End

CommandButton Command_RohanEomerHorseLordLeadership
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:HorseLordLeadership
  ButtonImage             = HSEomerLeadership
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipEomerLeadership
  InPalantir		  = Yes
End

CommandButton Command_RohanEomerOutlawLeadership
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership2
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:OutlawLeadership
  ButtonImage             = UCCommon_Pillage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipOutlawLeadership
  InPalantir		  = Yes
End

CommandButton Command_RohanEomerSpear
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilitySpearThrow
  Options			= NEED_TARGET_ENEMY_OBJECT ; NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:ThrowSpear
  ButtonImage		= HSEomerThrowSpear
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipThrowSpear
  InvalidCursorName	= GenericInvalid
  UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0
End


////////////////EOWYN
CommandButton Command_Disguise
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityDisguise
;  Options                 = 
  TextLabel               = CONTROLBAR:Disguise
  ButtonImage             = HSEowynDisguise
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipDisguise
  InPalantir              = Yes
  ; UnitSpecificSound       = EowynVoiceDisguiseOn EowynVoiceDisguiseOff Played by SpecialDisguiseUpdate's stuff, can't toggle right here
End

CommandButton Command_EowynSmite
  Command		= SPECIAL_POWER 
  SpecialPower		= SpecialAbilitySmite
  Options		= NEED_TARGET_ENEMY_OBJECT ; NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel		= CONTROLBAR:Smite
  ButtonImage		= HSEowynSmite
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipSmite
  InvalidCursorName	= GenericInvalid
  UnitSpecificSound	= EowynVoiceModeSmite
  ; SetAutoAbilityUnitSound = EowynVoiceSmiteOn ; FILL IN
  ; UnsetAutoAbilityUnitSound = EowynVoicesmiteOff ; FILL IN
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange	    = 200.0
End

CommandButton Command_EowynShieldMaiden
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityEowynShieldMaiden
  TextLabel               = CONTROLBAR:ShieldMaiden
  ButtonImage             = HSEowynShieldMaiden
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipShieldMaiden
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = GenericSpell
End

CommandButton Command_MountHorseEowyn
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityToggleMounted
  TextLabel             = CONTROLBAR:TheodenMount
  Options				= TOGGLE_IMAGE_ON_WEAPONSET ON_GROUND_ONLY
  FlagsUsedForToggle	= MOUNTED
  ButtonImage           = HSTheodenMountDismount HSTheodenMountDismount
  ButtonBorderType      = ACTION 
  DescriptLabel         = CONTROLBAR:ToolTipEowynMount
  InPalantir            = Yes  
  UnitSpecificSound     = EowynVoiceModeMountMS		EowynVoiceModeFootMS
End

/////////////////////////

CommandButton Command_UnpackExplicitRohanFarm
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackRohanFarm
  Object           = RohanFarmMultiplayer
  ButtonImage      = BCFarm 
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanFarmUnpack
  Radial           = Yes
End




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ROHAN BUILDING PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

CommandButton Command_ConstructRohanArmory
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanArmory
  TextLabel        = CONTROLBAR:ConstructRohanArmory
  ButtonImage      = BRArmory
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanArmory
  Radial           = Yes  
End

CommandButton Command_ConstructRohanArcherRange
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanArcherRange
  TextLabel        = CONTROLBAR:ConstructRohanArcherRange
  ButtonImage      = BRArcheryRange
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanArcherRange
  Radial           = Yes  
End

CommandButton Command_ConstructRohanStable
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanStable
  TextLabel        = CONTROLBAR:ConstructRohanStable
  ButtonImage      = BRStables
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanStable
  Radial           = Yes  
End

CommandButton Command_ConstructRohanFarm
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanFarm
  TextLabel        = CONTROLBAR:ConstructRohanFarm
  ButtonImage      = BCFarm
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanFarm
  Radial           = Yes  
End

CommandButton Command_ConstructRohanWall
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanInnerWall
  TextLabel        = CONTROLBAR:ConstructRohanWall
  ButtonImage      = BRWall
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanWall
  Radial           = Yes  
End

CommandButton Command_ConstructRohanElvenWarriorHorde
	Command				= UNIT_BUILD
	Object				= RohanElvenWarriorHorde
	TextLabel			= CONTROLBAR:ConstructElvenWarriorHorde
	ButtonImage			= BEElvenBarracks_LorienWarrior
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenWarriorHorde
	Radial				= Yes
	InPalantir	   		= Yes
	IsClickable			= Yes
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_StructureLevel2
	ShowProductionCount	= Yes      
End



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ROHAN UNIT PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ConstructRohanArcherHorde
	Command				= UNIT_BUILD
	Object				= RohanArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructRohanArcherHorde
	ButtonImage			= BRArcheryRange_YeomanArchers
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildRohanArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructRohanPeasantHorde
	Command				= UNIT_BUILD
	Object				= RohanPeasantHorde  
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructRohanPeasant ;;;---should become peasant ASAP
	ButtonImage			= BCFarm_Peasants
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildRohanPeasant ;;;---should become peasant ASAP
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes     
End

CommandButton Command_ConstructRohanSpearmenHorde
	Command				= UNIT_BUILD
	Object				= RohanSpearmenHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructRohanSpearmenHorde
	ButtonImage			= BGBarracks_RohanSpearmenIcon
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildRohanSpearmenHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
;;; ROHAN STABLES  commands
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; ROHAN ArcheryRange / Elven Barracks commands
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;ROHAN ARMORY commands
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;CommandButton Command_ConstructRohanBannerUnit 
;	Command				= UNIT_BUILD
;	Object				= RohanBanner
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructRohanBannerUnits 
;	ButtonImage			= BRArmory_Banner
;	ButtonBorderType    = BUILD 
;	DescriptLabel       = CONTROLBAR:ToolTipConstructRohanBannerUnits
;	Radial				= Yes
;	InPalantir	   		= 	Yes
;	ShowProductionCount	= Yes 
;End

;CommandButton Command_ConstructRohanRoyalGuardHorde
;	Command				= UNIT_BUILD
;	Object				= RohanRoyalGuardHorde
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructRohanRoyalGuardHorde
;	ButtonImage			= BRArcheryRange_LongBow
;	ButtonBorderType	= BUILD 
;	DescriptLabel		= CONTROLBAR:ToolTipBuildRohanRoyalGuardHorde
;	Radial				= Yes
;	InPalantir	   		= 	Yes
;	ShowProductionCount	= Yes
;   UnitSpecificSound   = GondorArcherVoiceBuy      
;End

CommandButton Command_ConstructRohanRohirrimHorde
	Command					= UNIT_BUILD
	Object					= RohanRohirrimHorde
	Options					= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_GondorStableLevel2
	NeededUpgradeAny		= Yes
	TextLabel				= CONTROLBAR:ConstructRohanRohirrimHorde
	ButtonImage				= BGStables_Rohirrim
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildRohanRohirrimHorde
	Radial					= Yes
	InPalantir	   			= Yes
	ShowProductionCount		= Yes      
	LacksPrerequisiteLabel	= TOOLTIP:LackLevel2Stables
End

CommandButton Command_ConstructRohanRohirrimArcherHorde
	Command				= UNIT_BUILD
	Object				= RohanRohirrimArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructRohanRohirrimArcherHorde
	ButtonImage			= BGStables_Rohirrim
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipBuildRohanRohirrimArcherHorde
	Radial				= Yes
	InPalantir	   		= 	Yes
	ShowProductionCount	= Yes      
End



CommandButton Command_UpgradeRohanOpenGarrison
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_OpenGarrison
  Options				= CANCELABLE
  ButtonImage			  = BRWall_BattleTower
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:BattleTowerUpgrade
  DescriptLabel           = CONTROLBAR:ToolTipBattleTowerUpgrade
End

CommandButton Command_UpgradeRohanPosternGate
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_PosternGate
  Options				= CANCELABLE
  ButtonImage			  = BRWall_PosternGate
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:PosternGateUpgrade
  DescriptLabel           = CONTROLBAR:ToolTipPosternGateUpgrade
End

CommandButton Command_UpgradeRohanWallBanner
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_WallBanner
  Options				  = CANCELABLE
  ButtonImage			  = BRWall_Upgrade
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:FlagsUpgrade;TrebuchetUpgrade
  DescriptLabel           = CONTROLBAR:ToolTipFlagsUpgrade;CONTROLBAR:ToolTipTrebuchetUpgrade
End


CommandButton Command_ConstructRohanSentryTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = RohanSentryTower
  TextLabel        = CONTROLBAR:ConstructRohanSentryTower
  ButtonImage      = BRSentryTwr
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipRohanBuildSentryTower
  Radial           = Yes  
End



CommandButton Command_PurchaseUpgradeRohanForgedBladesForRohirrim	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanForgedBladesForRohirrim ;Upgrade_GondorForgedBlades
	NeededUpgrade		= Upgrade_TechnologyGondorForgedBlades ;Rohirrim now combined with gondor to form Men of the West
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanForgedBlades
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmorForRohirrim
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmorForRohirrim ;Upgrade_GondorHeavyArmor
	NeededUpgrade		= Upgrade_TechnologyGondorHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

CommandButton Command_PurchaseUpgradeRohanFireArrows
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanFireArrows  ;Upgrade_GondorFireArrows
	NeededUpgrade		= Upgrade_TechnologyGondorFireArrows
	TextLabel			= CONTROLBAR:FireArrowUpgrade
	ButtonImage			= BRArcheryRange_FireArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanFireArrows
End

CommandButton Command_PurchaseUpgradeRohanBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanBasicTraining  ;Upgrade_GondorBasicTraining
	NeededUpgrade		= Upgrade_TechnologyGondorBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanBasicTraining
	ButtonImage			= BGBlacksmith_SilverTreeBanner
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanBasicTraining
End



;---- ROHAN ---------------------------------------------------------------------
;//None of the PurchaseTechnology are needed for Rohan any more.  Now that Gondor and Rohan
;//Are combined into the Men of the West we'll be useing Gondor's Technology Upgrades

CommandButton Command_PurchaseTechnologyRohanBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	;Options				= NEED_UPGRADE
	Upgrade				= Upgrade_TechnologyRohanBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanBasicTraining
	ButtonImage			= BRArmory_Banner
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyRohanBasicTraining
	Radial				= Yes
	InPalantir			= Yes
End



CommandButton Command_PurchaseTechnologyRohanFireArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyRohanFireArrows 
	NeededUpgrade		= Upgrade_StructureLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanFireArrows
	ButtonImage			= BRArcheryRange_FireArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyRohanFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ArcheryRange
End

;-------------------
;//No longer needed can be taken out
CommandButton Command_PurchaseTechnologyRohanForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	;Options				= NEED_UPGRADE
	Upgrade				= Upgrade_TechnologyRohanForgedBlades 
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyRohanForgedBlades
	Radial				= Yes
	InPalantir			= Yes
End

;//for peasants
CommandButton Command_PurchaseUpgradeRohanForgedBlades
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanForgedBlades 
	NeededUpgrade		= Upgrade_TechnologyRohanForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanForgedBlades
End

CommandButton Command_PurchaseUpgradeRohanForgedBladesForPeasants
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanForgedBladesForPeasants
	NeededUpgrade		= Upgrade_TechnologyRohanForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanForgedBlades
End

CommandButton Command_PurchaseUpgradeRohanForgedBladesForElves
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanForgedBladesForElves
	NeededUpgrade		= Upgrade_TechnologyRohanForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanForgedBlades
End

;-------------------
CommandButton Command_PurchaseTechnologyRohanHeavyArmor
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	;Options				= NEED_UPGRADE			
	Upgrade				= Upgrade_TechnologyRohanHeavyArmor 
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyRohanHeavyArmor
	Radial				= Yes
	InPalantir	   		= Yes
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmor
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmor 
	NeededUpgrade		= Upgrade_TechnologyRohanHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmorForRohirrimArchers
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmorForRohirrimArchers
	NeededUpgrade		= Upgrade_TechnologyRohanHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmorForElves
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmorForElves
	NeededUpgrade		= Upgrade_TechnologyRohanHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmorForArchers
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmorForArchers
	NeededUpgrade		= Upgrade_TechnologyRohanHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

CommandButton Command_PurchaseUpgradeRohanHeavyArmorForPeasants
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_RohanHeavyArmorForPeasants
	NeededUpgrade		= Upgrade_TechnologyRohanHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeRohanHeavyArmor
	ButtonImage			= BRArmory_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeRohanHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackRohanHeavyArmor
End

;-------------------
CommandButton Command_PurchaseTechnologyRohanHorseShield
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyRohanHorseShield 
	NeededUpgrade		= Upgrade_StructureLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyRohanHorseShield
	ButtonImage			= BRArmory_Shields
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyRohanHorseShield
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2Stables
End



CommandButton Command_PorterConstructRohanFarm
	Command       		= DOZER_CONSTRUCT
	Object        		= RohanFarm 
	TextLabel     		= CONTROLBAR:ConstructRohanFarm
	ButtonImage   		= BGWorkshop_Trebuchet
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipUSABuildPowerPlant
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructRohanBarracks
	Command       		= DOZER_CONSTRUCT
	Object        		= ElvenBarracks
	TextLabel     		= CONTROLBAR:ConstructRohanBarracks
	ButtonImage   		= BGWorkshop_Trebuchet
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipUSABuildPowerPlant
	Radial				= Yes
	;InPalantir	   		= Yes
End


CommandButton Command_PorterConstructRohanWallHub
	Command       		= DOZER_CONSTRUCT
	Object        		= GondorCastleWallHub
	TextLabel     		= CONTROLBAR:GondorCastleWallHub
	ButtonImage   		= BCFarm_Peasants
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:ToolTipCommand_PorterConstructRohanWallHub
	Radial				= Yes
	;InPalantir	   		= Yes
End
