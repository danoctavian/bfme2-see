////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Gondor//
/////////


CommandButton Command_ToggleFormationGondorFighter
	Command			= HORDE_TOGGLE_FORMATION				; Gondor Soldier
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage		= UCSoldier_ShieldWall   UCSoldier_ShieldWallOff
	ButtonBorderType	= ACTION 
	TextLabel		= CONTROLBAR:ToggleBlockFormation			CONTROLBAR:ToggleLineFormation
	DescriptLabel		= CONTROLBAR:ToolTipToggleGFighterLineToBlockFormation	CONTROLBAR:ToolTipToggleGFighterBlockToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= GondorSoldierVoiceBlockFormationOn GondorSoldierVoiceLineFormation
End


;CommandButton Command_SetFormationGondorFighterBlock
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorFighterHordeBlock
;	ButtonImage             = UCFormation_Block
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleBlockFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleBlockFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorSoldierVoiceBlockFormationOn
;End

;CommandButton Command_SetFormationGondorFighterLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorFighterHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorSoldierVoiceLineFormation
;End

;CommandButton Command_ToggleGondorRangerWeapon
;	Command			= TOGGLE_WEAPONSET
;	Options			= TOGGLE_IMAGE_ON_WEAPONSET
;	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
;	TextLabel               = CONTROLBAR:ToggleGondorRangerWeapons
;	ButtonImage             = UCElven_Sword UCElven_Bow
;	ButtonBorderType        = ACTION 
;	DescriptLabel           = CONTROLBAR:ToolTipToggleGondorRangerWeapons
;	UnitSpecificSound       = RangerVoiceModeSword RangerVoiceModeBow
;	InPalantir		= Yes
;End


;CommandButton Command_SetFormationRangerAmbush
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorRangerHordeAmbushFormation
;	ButtonImage             = UCFormation_Ambush
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleSkirmishFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleSkirmishFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RangerVoiceAmbushFormation
;End

;CommandButton Command_SetFormationRangerLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorRangerHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RangerVoiceLineFormation
;End

;CommandButton Command_ToggleFormationGondorArcher
;	Command			= HORDE_TOGGLE_FORMATION	;;Gondor Archer
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation	CONTROLBAR:ToggleLineFormation
;	DescriptLabel          	= CONTROLBAR:ToolTipToggleGArcherLineToWedgeFormation	CONTROLBAR:ToolTipToggleGArcherWedgeToLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorArcherVoiceWedgeFormation GondorArcherVoiceLineFormation
;End

;CommandButton Command_SetFormationGondorArcherWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorArcherHordeWedgeFormation
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorArcherVoiceWedgeFormation
;End

;CommandButton Command_SetFormationGondorArcherLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorArcherHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorArcherVoiceLineFormation
;End


;CommandButton Command_ToggleFormationKnight
;	Command			= HORDE_TOGGLE_FORMATION	;;Gondor Knight
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleGKnightLineToWedgeFormation CONTROLBAR:ToolTipToggleGKnightWedgeToLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorKnightVoiceWedgeFormation GondorKnightVoiceLineFormation
;End

;CommandButton Command_SetFormationKnightWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorKnightHordeWedgeFormation
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorKnightVoiceWedgeFormation
;End

;CommandButton Command_SetFormationKnightLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= GondorKnightHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= GondorKnightVoiceLineFormation
;End




CommandButton Command_SpecialAbilityHornOfGondor
  Command                 	= SPECIAL_POWER 
  SpecialPower            	= SpecialAbilityHornOfGondor
 ;Options                 	= 
  TextLabel               	= CONTROLBAR:HornofGondor
  ButtonImage             	= HSBorimirHornOfGondor
  ButtonBorderType        	= ACTION 
  DescriptLabel           	= CONTROLBAR:ToolTipHornofGondor
  ;UnitSpecificSound      	= 
  InPalantir			= Yes
  AutoAbility			= Yes
  PresetRange			= 60.0  
End


CommandButton Command_SpecialAbilityBoromirForGondor
  Command                 	= SPECIAL_POWER
  SpecialPower            	= SpecialAbilityFakeLeadership
  Options			= NONPRESSABLE
  TextLabel               	= CONTROLBAR:Leadership
  ButtonImage             	= HSFaramirLeadership
  RadiusCursorType       	= TrainingRadiusCursor
  ButtonBorderType        	= ACTION
  DescriptLabel           	= CONTROLBAR:ToolTipBoromirLeadership
  InPalantir		  	= Yes
End

;CommandButton Command_BoromirLastStandFakeButton
;  Command                 	= SPECIAL_POWER
;  SpecialPower            	= SpecialAbilityFakeLeadership
;  Options			= NONPRESSABLE
;  TextLabel               	= CONTROLBAR:LastStand
;  ButtonImage             	= HSBorimirLastStand
;  RadiusCursorType        	= TrainingRadiusCursor
;  ;Upgrade			= Upgrade_BoromirLastStand
;  ButtonBorderType        	= ACTION
;  DescriptLabel           	= CONTROLBAR:ToolTipLastStand
;  InPalantir		 	= Yes
;  ;UnitSpecificSound       	= TheodenVoiceSpeech
;End

CommandButton Command_SpecialAbilityCaptainOfGondor
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityKingsFavor
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:CaptainofGondor
  ButtonImage             = HSFaramirCaptainOfGongor
  CursorName              = Bombard
  RadiusCursorType        = CaptainOfGondorRadiusCursor
  InvalidCursorName       = GenericInvalid
  ;Upgrade                = Upgrade_FaramirCaptainOfGondor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCaptainofGondor
  AutoAbility		  = No
  InPalantir              = Yes
 ; UnitSpecificSound      = FaramirKnightVoiceCaptain
End

CommandButton Command_SpecialAbilityCaptainOfGondorBoromir
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityKingsFavor
	Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:CaptainofGondor
	ButtonImage             = HSBorimirCaptainOfGondor
	CursorName              = Bombard
	RadiusCursorType        = CaptainOfGondorRadiusCursor
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipCaptainofGondorBoromir
	AutoAbility		= No
	InPalantir              = Yes
End

CommandButton Command_ToggleFaramirWeapon
	Command			=	TOGGLE_WEAPONSET
	Options			=	UNMOUNTED_ONLY TOGGLE_IMAGE_ON_WEAPONSET
	FlagsUsedForToggle	=	WEAPONSET_TOGGLE_1
	TextLabel               =	CONTROLBAR:ToggleFaramirWeapons
	ButtonImage             =	HSFaramirSword UCElven_Bow 
	ButtonBorderType        =	ACTION 
	DescriptLabel           =	CONTROLBAR:ToolTipToggleFaramirWeapons
	InPalantir		=	Yes
End



CommandButton Command_GondorGandalfIstariLight
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityIstariLight 
	Options                 = NEED_TARGET_ENEMY_OBJECT ; CONTEXTMODE_COMMAND
	TextLabel               = CONTROLBAR:IstariLight
	ButtonImage             = HSGandalfIstariLight
	CursorName              = Bombard
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipIstariLight
	AutoAbility		= Yes
	InPalantir		= Yes
End

CommandButton Command_GondorGandalfLightningSword
  Command                 	= SPECIAL_POWER 
  SpecialPower            	= SpecialAbilityLightningSword
  Options                 	= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               	= CONTROLBAR:LightningSword
  ButtonImage             	= HSGandalfLightningSword
  RadiusCursorType        	= LightningSwordRadiusCursor
  ButtonBorderType        	= ACTION 
  DescriptLabel           	= CONTROLBAR:ToolTipLightningSword
  AutoAbility			= No
  InPalantir			= Yes
End

;CommandButton Command_GondorGandalfPartTheHeavens
;  Command           = SPECIAL_POWER
;  SpecialPower      = SuperweaponPartTheHeavens
;  TextLabel         = CONTROLBAR:PartTheHeavens
;; ButtonImage       = SGPartHeavens
;  ButtonImage       = SMRainFire
;  ButtonBorderType  = ACTION 
;  DescriptLabel     = CONTROLBAR:TooltipPartTheHeavens
;End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; GONDOR BUILDING PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

CommandButton Command_ConstructGondorFarm
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorFarm
  TextLabel        = CONTROLBAR:ConstructGondorFarm
  ButtonImage     = BCFarm
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildFarm
  Radial           = Yes  
End

CommandButton Command_ConstructGondorWell
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorWell
  TextLabel        = CONTROLBAR:ConstructGondorWell
  ButtonImage      = BGWell
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HearthWellDescription
  Radial           = Yes  
End

CommandButton Command_ConstructGondorBarracks
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorBarracks
  TextLabel        = CONTROLBAR:ConstructGondorBarracks
  ButtonImage      = BGBarracks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildBarracks
  Radial           = Yes
End

CommandButton Command_ConstructGondorStable
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorStable
  TextLabel        = CONTROLBAR:ConstructGondorStable
  ButtonImage      = BGStables
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildStable
  Radial           = Yes
End

CommandButton Command_ConstructGondorMarketPlace
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorMarketPlace
  TextLabel        = CONTROLBAR:ConstructGondorMarketPlace
  ButtonImage      = BGMarketplace
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildMarketPlace
  Radial           = Yes  
End

CommandButton Command_ConstructGondorStatue
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorHeroStatue
  TextLabel        = CONTROLBAR:ConstructGondorStatue
  ButtonImage      = BGHeroicStatue
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HeroicStatueDescription
  Radial           = Yes  
End

CommandButton Command_ConstructGondorStoneMaker
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorStoneMaker
  Options		   = NEEDS_CASTLE_KINDOF
  AffectsKindOf	   = WALK_ON_TOP_OF_WALL DEFENSIVE_WALL
  TextLabel        = CONTROLBAR:ConstructGondorStoneMaker
  ;ButtonImage      = BGStoneworker
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildStoneMaker
  Radial           = Yes  
End

CommandButton Command_ConstructGondorArcherRange
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorArcherRange
  TextLabel        = CONTROLBAR:ConstructGondorArcherRange
  ButtonImage      = BGArcheryRange
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildArcherRange
  Radial           = Yes  
End

CommandButton Command_ConstructGondorWorkshop
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorWorkshop
  TextLabel        = CONTROLBAR:ConstructGondorWorkshop
  ButtonImage      = BGWorkshop
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildWorkshop
  Radial           = Yes  
End

;CommandButton Command_ConstructGondorBattleTower
;  Command          = FOUNDATION_CONSTRUCT
;  Object           = GondorBattleTower
;  TextLabel        = CONTROLBAR:ConstructGondorBattleTower
;  ButtonImage      = BGBattleTower
;  ButtonBorderType = BUILD 
;  DescriptLabel    = CONTROLBAR:ToolTipBuildGondorBattleTower
;  Radial           = Yes  
;End

CommandButton Command_ConstructGondorKeep
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorKeep
  TextLabel        = CONTROLBAR:ConstructGondorKeep
  ButtonImage      = BGBattleTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBuildGondorKeep
  Radial           = Yes  
End

;CommandButton Command_ConstructGondorWhiteTower
;  Command          = FOUNDATION_CONSTRUCT
;  Object           = GondorWhiteTower
;  TextLabel        = CONTROLBAR:ConstructGondorWhiteTower
;  ButtonImage      = SCGrabPassenger
;  ButtonBorderType = BUILD 
;  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildWhiteTower
;  Radial           = Yes  
;End

CommandButton Command_ConstructGondorHseHeal
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorHseHeal
  TextLabel        = CONTROLBAR:ConstructGondorHseHeal
  ButtonImage      = BGFortress_HouseofHealing
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildHseHeal
  Radial           = Yes  
End

CommandButton Command_ConstructGondorBlackSmith
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorForge
  TextLabel        = CONTROLBAR:ConstructGondorBlackSmith
  ButtonImage      = BGBlacksmith 
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildBlackSmith
  Radial           = Yes
  ;UnitSpecificSound = GondorMasonBuildSmithy
End

CommandButton Command_ConstructGondorWall
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorInnerWall
  TextLabel        = CONTROLBAR:ConstructGondorWall
  ButtonImage      = BRWall
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorWall
  Radial           = Yes  
End



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; GONDOR UNIT PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ConstructGondorFighterHorde
	Command				= UNIT_BUILD
	Object				= GondorFighterHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorFighterHorde
	ButtonImage			= BGBarracks_Soldiers
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorFighterHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End


CommandButton Command_ConstructGondorTowerShieldGuardHorde
	Command				= UNIT_BUILD
	Object				= GondorTowerShieldGuardHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_GondorBarracksLevel2
	TextLabel			= CONTROLBAR:ConstructGondorShieldGuardHorde
	ButtonImage			= BGBarracks_TowerGuard
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorShieldGuardHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes      
End

CommandButton Command_ConstructGondorArcherHorde
	Command				= UNIT_BUILD
	Object				= GondorArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorArcherHorde
	ButtonImage			= BGArcheryRange_Archers
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildGondorArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructGondorRangerHorde
	Command				= UNIT_BUILD
	Object				= GondorRangerHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_GondorArcheryRangeLevel2
	NeededUpgradeAny		= Yes
	TextLabel			= CONTROLBAR:ConstructGondorRangerHorde
	ButtonImage			= BGArcheryRange_Rangers
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildGondorRangerHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy
End

CommandButton Command_ConstructFornostGondorRangerHorde
	Command				= UNIT_BUILD
	Object				= GondorRangerInnHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorRangerSummonedHorde
	ButtonImage			= BCInn_DunedainRanger
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildGondorRangerSummonedHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy
End

CommandButton Command_ConstructInnGondorRangerHorde
	Command				= UNIT_BUILD
	Object				= GondorRangerInnHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorRangerSummonedHorde
	ButtonImage			= BCInn_DunedainRanger
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildGondorRangerSummonedHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy
End

CommandButton Command_PurchaseUpgradeGondorArcheryRangeLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorArcheryRangeLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorArcheryRangeLevel2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorArcheryRangeLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorArcheryRangeLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorArcheryRangeLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorArcheryRangeLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorArcheryRangeLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorForgeLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorForgeLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorForgeLevel2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorForgeLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorForgeLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorForgeLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorForgeLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorForgeLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_ConstructGondorKnightHorde
	Command				= UNIT_BUILD
	Object				= GondorKnightHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorKnightHorde
	ButtonImage			= BGStables_Knights
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorKnightHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes      
End

CommandButton Command_ConstructGondorTrebuchet
	Command				= UNIT_BUILD
	Object				= GondorTrebuchet
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorTrebuchet
	ButtonImage			= BGWorkshop_Trebuchet
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorTrebuchet
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

;CommandButton Command_ConstructGondorArcher
;	Command				= UNIT_BUILD
;	Object				= GondorArcher
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructGondorArcher
;	ButtonImage			= BGArcheryRange_Archers
;	ButtonBorderType    		= BUILD 
;	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorArcher
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount		= Yes
;End

;CommandButton Command_ConstructGondorCavalry
;  Command       = UNIT_BUILD
;  Object        = GondorCavalry
;  Options		= CANCELABLE
;  TextLabel     = CONTROLBAR:ConstructGondorCavalry
;  ButtonImage   = BGStables_Knights 
;  ButtonBorderType        = BUILD 
;  DescriptLabel           = CONTROLBAR:ToolTipBuildGondorCavalry
;End

;CommandButton Command_ConstructGondorManAtArms
;	Command				= UNIT_BUILD
;	Object				= GondorFighter
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructGondorManAtArms
;	ButtonImage			= BGBarracks_Soldiers
;	ButtonBorderType		= BUILD 
;	DescriptLabel			= CONTROLBAR:ToolTipBuildGondorManAtArms
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount		= Yes
;End


CommandButton Command_ConstructGondorPeasant
	Command				= UNIT_BUILD
	Object				= GondorWorker ;;;---should become peasant ASAP
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGondorPeasant
	ButtonImage			= BGFortress_Porter
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorPeasant
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes    
End

;CommandButton Command_CreateSilverTreeBanner 
;	Command				= UNIT_BUILD
;	Object				= GondorBanner
;	Options				= NEED_UPGRADE CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructGondorSilverTreeBanner 
;	ButtonImage			= BGBlacksmith_SilverTreeBanner
;	ButtonBorderType    		= BUILD 
;	DescriptLabel       		= CONTROLBAR:ToolTipBuildGondorSilverTreeBanner 
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount	= Yes 
;End

CommandButton Command_ConstructGondorFighterHordeForGoodIthilien
	Command			= UNIT_BUILD
	Object			= GondorFighterHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructGondorFighterHorde
	ButtonImage		= BGBarracks_Soldiers
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildGondorFighterHorde
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes      
End

CommandButton Command_ConstructGondorRangerHordeForGoodIthilien
	Command			= UNIT_BUILD
	Object			= GondorRangerHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructGondorRangerHorde
	ButtonImage		= BGArcheryRange_Rangers
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildGondorRangerHordeForGoodIthilien
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy
End

CommandButton Command_ConstructGondorArcherHordeForGoodIthilien
	Command			= UNIT_BUILD
	Object			= GondorArcherHorde
	Options			= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_StructureLevel2
	TextLabel		= CONTROLBAR:ConstructGondorArcherHorde
	ButtonImage		= BGArcheryRange_Archers
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:TooltipBuildForbiddenPoolArchers
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructGondorKnightHordeForGoodIthilien
	Command			= UNIT_BUILD
	Object			= GondorKnightHorde
	Options			= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_StructureLevel3
	TextLabel		= CONTROLBAR:ConstructGondorKnightHorde
	ButtonImage		= BGStables_Knights
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:TooltipBuildForbiddenPoolKnights
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes      
End

CommandButton Command_ConstructGondorKnightsofDolHorde					; ADDED for BFME2 Expansion 
	Command			= UNIT_BUILD
	Object			= GondorKnightsofDolHorde
	Options			= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_GondorStableLevel3
	TextLabel		= CONTROLBAR:ConstructGondorKnightsofDolHorde
	ButtonImage		= BGStables_KnightDolAmrothIcon
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildGondorKnightsofDolHorde
	Radial			= Yes
	InPalantir		= Yes
	ShowProductionCount	= Yes    
End

CommandButton Command_PurchaseUpgradeGondorBarracksLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorBarracksLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorBarracks2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorBarracksLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorBarracksLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorBarracksLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorBarracksLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorBarracksLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorStableLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorStableLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorStable2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorStableLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorStableLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorStableLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorStableLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorStableLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorWorkshopLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorWorkshopLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorWorkshop2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorWorkshopLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PurchaseUpgradeGondorWorkshopLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorWorkshopLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructGondorWorkshopLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildGondorWorkshopLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End



CommandButton Command_UpgradeGondorOpenGarrison
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_OpenGarrison
  Options				= CANCELABLE
  Object				= GondorCastleUpgrade		; Note this is so that cost modifiers are effective, does not use template for anything else.
  ButtonImage			  = BGBattleTower
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:BattleTowerUpgrade
  DescriptLabel           = CONTROLBAR:ToolTipBattleTowerUpgrade
End

CommandButton Command_UpgradeGondorPosternGate
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_PosternGate
  Options				= CANCELABLE
  ButtonImage			  = BGWall_PosternGatetemp
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:PosternGateUpgrade
  DescriptLabel           = CONTROLBAR:ToolTipPosternGateUpgrade
End

CommandButton Command_UpgradeGondorTrebuchetTurret
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_TrebuchetTurret
  Object				= GondorCastleUpgrade			; Note this is so that cost modifiers are effective, does not use template for anything else.
  Options				= CANCELABLE
  ButtonImage			  = BGFortress_Trebuchet
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		= Yes
  TextLabel               = CONTROLBAR:Command_MenWallUpgradeToTrebuchet
  DescriptLabel           = CONTROLBAR:ToolTipCommand_MenWallUpgradeToTrebuchet
End

//Men Trebuchets
CommandButton Command_PurchaseNewWallTreb
  Command					= OBJECT_UPGRADE 
  Upgrade					= Upgrade_HasWallTrebuchet
  Options					= CANCELABLE
  ButtonImage			  	= BGFortress_Trebuchet
  ButtonBorderType        	= UPGRADE 
  Radial				  	= Yes
  InPalantir	   			= Yes
  TextLabel					= CONTROLBAR:TrebuchetUpgrade
  DescriptLabel				= CONTROLBAR:ToolTipTrebuchetUpgrade
End


;CommandButton Command_GondorGandalfIstariLight
;	Command                 = SPECIAL_POWER
;	SpecialPower            = SpecialAbilityIstariLight 
;	Options                 = NEED_TARGET_ENEMY_OBJECT ; CONTEXTMODE_COMMAND
;	TextLabel               = CONTROLBAR:IstariLight
;	ButtonImage             = HSGandalfIstariLight
;	CursorName              = Bombard
;	InvalidCursorName       = GenericInvalid
;	ButtonBorderType        = ACTION
;	DescriptLabel           = CONTROLBAR:ToolTipIstariLight
;	AutoAbility			  = Yes
;	InPalantir			  = Yes
;End


CommandButton Command_ConstructGondorSentryTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = GondorSentryTower
  TextLabel        = CONTROLBAR:ConstructGondorSentryTower
  ButtonImage      = BGSentryTwr
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipGondorBuildSentryTower
  Radial           = Yes  
End



;---- GONDOR ---------------------------------------------------------------------
CommandButton Command_PurchaseTechnologyGondorBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorBasicTraining
	ButtonImage			= BGBlacksmith_SilverTreeBanner
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorBasicTraining
	Radial				= Yes
	InPalantir			= Yes
	;LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlackSmithBanner
End

CommandButton Command_PurchaseUpgradeGondorBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_GondorBasicTraining 
	NeededUpgrade		= Upgrade_TechnologyGondorBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeGondorBasicTraining
	ButtonImage			= BGBlacksmith_SilverTreeBanner
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeGondorBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorBasicTraining
End

CommandButton Command_PurchaseTechnologyGondorFireArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorFireArrows 
	NeededUpgrade		= Upgrade_GondorArcheryRangeLevel3			; RotWK Balance patch - originally 2
	NeededUpgradeAny	= Yes
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorFireArrows
	ButtonImage			= BGArcheryRange_FireArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorFireArrowsTechnology
End

CommandButton Command_PurchaseTechnologyGondorFireArrowsForGoodIthilien
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorFireArrows 
	NeededUpgrade		= Upgrade_StructureLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorFireArrows
	ButtonImage			= BGArcheryRange_FireArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2ForbiddenPool
End

CommandButton Command_PurchaseUpgradeGondorFireArrows
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_GondorFireArrows 
	NeededUpgrade		= Upgrade_TechnologyGondorFireArrows
	TextLabel			= CONTROLBAR:FireArrowUpgrade
	ButtonImage			= BGArcheryRange_FireArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeGondorFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorFireArrows
End

;----------------------------------
CommandButton Command_PurchaseTechnologyGondorForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorForgedBlades 
	NeededUpgrade		= Upgrade_GondorForgeLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlackSmithForgedBlades
End

CommandButton Command_PurchaseUpgradeGondorForgedBlades
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_GondorForgedBlades
	NeededUpgrade		= Upgrade_TechnologyGondorForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeGondorForgedBlades
	ButtonImage			= BRArmory_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeGondorForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorForgedBlades
End

;----------------------------------
CommandButton Command_PurchaseTechnologyGondorHeavyArmor
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorHeavyArmor 
	NeededUpgrade		= Upgrade_GondorForgeLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorHeavyArmor
	ButtonImage			= BGBlacksmith_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorHeavyArmor
	Radial				= Yes
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlacksmithHeavyArmor
End

CommandButton Command_PurchaseUpgradeGondorHeavyArmor
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_GondorHeavyArmor 
	NeededUpgrade		= Upgrade_TechnologyGondorHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeGondorHeavyArmor
	ButtonImage			= BGBlacksmith_HeavyArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeGondorHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorHeavyArmor
End

CommandButton Command_PurchaseTechnologyGondorFireStones
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyGondorFireStones 
	NeededUpgrade		= Upgrade_GondorWorkshopLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyGondorFireStones
	ButtonImage			= BGWorkshop_FireStone
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyGondorFireStones
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2Workshop
End

CommandButton Command_PurchaseUpgradeGondorFireStones
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_GondorFireStones
	NeededUpgrade		= Upgrade_TechnologyGondorFireStones
	TextLabel			= CONTROLBAR:PurchaseUpgradeGondorFireStones
	ButtonImage			= BGWorkshop_FireStone
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeGondorFireStones
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackGondorFireStones
End


CommandButton Command_MenLongShotAbility
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityMenLongShot
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT NEED_TARGET_POS
	NeededUpgrade			= Upgrade_ObjectLevel2
	TextLabel			= CONTROLBAR:MenLongShotAbility
	DescriptLabel			= CONTROLBAR:ToolTipMenLongShotAbility
	ButtonImage			= UCCommon_Longshot
	ButtonBorderType		= ACTION
	InPalantir			= Yes	
	PresetRange			= GONDOR_RANGER_LONGSHOT_RANGE
	RadiusCursorType		= LongShotRadiusCursor
    CursorName				= AttackObj	
	InvalidCursorName		= GenericInvalid
End




CommandButton Command_ConstructMenPorter
	Command				= UNIT_BUILD
	Object				= MenPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMenPorter
	ButtonImage			= BGFortress_Porter
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenPorter
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_PorterConstructMenFarm
	Command       		= DOZER_CONSTRUCT
	Object        		= GondorFarm 
	TextLabel     		= CONTROLBAR:ConstructMenFarm
	ButtonImage   		= BCFarm
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenFarm
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenBarracks
	Command       		= DOZER_CONSTRUCT
	Object        		= GondorBarracks
	TextLabel     		= CONTROLBAR:ConstructMenBarracks
	ButtonImage   		= BGBarracks
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenBarracks
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenArcheryRange
	Command				= DOZER_CONSTRUCT
	Object				= GondorArcherRange
	TextLabel			= CONTROLBAR:ConstructMenArcheryRange
	ButtonImage			= BGArcheryRange
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipMenArcheryRange
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenStable
	Command				= DOZER_CONSTRUCT
	Object				= GondorStable
	TextLabel			= CONTROLBAR:ConstructMenStable
	ButtonImage			= BGStables
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenStable
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenWorkshop
	Command				= DOZER_CONSTRUCT
	Object				= GondorWorkshop
	TextLabel			= CONTROLBAR:ConstructMenWorkshop
	ButtonImage			= BGWorkshop
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenWorkshop
	Radial				= Yes  
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenSentryTower
	Command				= DOZER_CONSTRUCT
	Object				= GondorBattleTower
	TextLabel			= CONTROLBAR:ConstructMenSentryTower
	ButtonImage			= BGBattleTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenSentryTower
	Radial				= Yes  
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenWell
	Command				= DOZER_CONSTRUCT
	Object				= GondorWell
	TextLabel			= CONTROLBAR:ConstructMenWell
	ButtonImage			= BGWell
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:HearthWellDescription
	Radial				= Yes
	;InPalantir	   		= Yes
End

CommandButton Command_PorterConstructMenStatue
	Command				= DOZER_CONSTRUCT
	Object				= GondorStatue
	TextLabel			= CONTROLBAR:ConstructMenStatue
	ButtonImage			= BGHeroicStatue
	ButtonBorderType	= BUILD 
	DescriptLabel		= OBJECT:HeroicStatueDescription
	Radial				= Yes  
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructMenFortress
	Command				= DOZER_CONSTRUCT
	Object				= MenFortress
	TextLabel			= CONTROLBAR:ConstructMenFortress
	ButtonImage			= BGFortress
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenFortress
	Radial				= Yes
	;InPalantir			= Yes
End


CommandButton Command_PorterConstructMenFortressTutorial
	Command				= DOZER_CONSTRUCT
	Object				= MenFortress_Tutorial
	TextLabel			= CONTROLBAR:ConstructMenFortress
	ButtonImage			= BGFortress
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenFortress
	Radial				= Yes
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructMenBlacksmith
	Command				= DOZER_CONSTRUCT
	Object				= GondorForge
	TextLabel			= CONTROLBAR:ConstructMenBlacksmith
	ButtonImage			= BGBlacksmith 
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenBlacksmith
	Radial				= Yes
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructMenMarketPlace
	Command				= DOZER_CONSTRUCT
	Object				= GondorMarketPlace
	TextLabel			= CONTROLBAR:ConstructMenMarketPlace
	ButtonImage			= BGMarketplace
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenMarketPlace
	Radial				= Yes  
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructMenStoneMaker
	Command				= DOZER_CONSTRUCT
	Object				= GondorStoneMaker
	AffectsKindOf		= WALK_ON_TOP_OF_WALL DEFENSIVE_WALL
	TextLabel			= CONTROLBAR:ConstructMenStoneMaker
	;ButtonImage			= BGStoneworker
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructMenStoneMaker
	Radial				= Yes  
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructMenWallHub
	Command       		= DOZER_CONSTRUCT
	Object        		= MenWallHubSmall
	TextLabel     		= CONTROLBAR:ConstructMenWallHub
	ButtonImage   		= BGWall_WallHub
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:ToolTipConstructMenWallHub
	Radial				= Yes
	;InPalantir	   		= Yes
End


CommandButton Command_GondorCastleWallHub_BeginWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= MenWallHubSmall
	Options			= OPTION_ONE
	TextLabel     		= CONTROLBAR:Command_GondorCastleWallHub_BeginWallSpan
	ButtonImage   		= BGWall_Wall
	ButtonBorderType    	= BUILD
	DescriptLabel      	= CONTROLBAR:ToolTipCommand_GondorCastleWallHub_BeginWallSpan
	Radial				= Yes
	InPalantir	   		= No
End


CommandButton Command_GondorCastleWallHub_BeginRamp
	Command       		= DOZER_CONSTRUCT
	Object        		= GondorCastleWallHub
	Options				= OPTION_TWO
	TextLabel     		= CONTROLBAR:Command_GondorCastleWallHub_BeginRamp
	ButtonImage   		= BuildingNoArt;;;; NEED TO REPLACE THIS!!!!!!!!!!!!!!!!!
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:Command_GondorCastleWallHub_BeginRamp
	Radial				= Yes
	InPalantir	   		= Yes
End

CommandButton Command_GondorCastleWallHub_SmallWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= MenWallHubSmall
	Options				= OPTION_THREE
	TextLabel     		= CONTROLBAR:Command_GondorCastleWallHub_SmallWallSpan
	ButtonImage   		= BGWall_Wall
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:Command_GondorCastleWallHub_SmallWallSpan
	Radial				= Yes
	InPalantir	   		= No
End



CommandButton Command_MenWallUpgradeToHub
  Command               = OBJECT_UPGRADE 
    Options			 = CANCELABLE NOT_QUEUEABLE
	Object        		= GondorCastleWallHub
	Upgrade             = Upgrade_MenWallHub
	TextLabel     		= CONTROLBAR:Command_MenWallUpgradeToHub
	ButtonImage   		= BGWall_WallHub
	ButtonBorderType    = UPGRADE
	DescriptLabel       = CONTROLBAR:ToolTipCommand_MenWallUpgradeToHub
	Radial				= Yes
	InPalantir	   		= Yes
End
CommandButton Command_MenWallUpgradeToRegularGate
  Command               = OBJECT_UPGRADE 
    Options			 = CANCELABLE NOT_QUEUEABLE
	Object        		= MenWallGate
	Upgrade             = Upgrade_MenWallRegularGate
	TextLabel     		= CONTROLBAR:Command_MenWallUpgradeToRegularGate
	ButtonImage   		= BGWall_MainGate
	ButtonBorderType    = UPGRADE
	DescriptLabel       = CONTROLBAR:ToolTipCommand_MenWallUpgradeToRegularGate
	Radial				= Yes
	InPalantir	   		= Yes
End
CommandButton Command_MenWallUpgradeToPosternGate
  Command               = OBJECT_UPGRADE 
    Options			 = CANCELABLE NOT_QUEUEABLE
	Object        		= MenWallPosternGate
	Upgrade             = Upgrade_MenWallPosternGate
	TextLabel     		= CONTROLBAR:Command_MenWallUpgradeToPosternGate
	ButtonImage   		= BGWall_PosternGatetemp
	ButtonBorderType    = UPGRADE
	DescriptLabel       = CONTROLBAR:ToolTipCommand_MenWallUpgradeToPosternGate
	Radial				= Yes
	InPalantir	   		= Yes
End
CommandButton Command_MenWallUpgradeToTower
  Command               = OBJECT_UPGRADE 
    Options			 = CANCELABLE NOT_QUEUEABLE
	Object        		= GondorCastleWallTower
	Upgrade             = Upgrade_MenWallTower
	TextLabel     		= CONTROLBAR:Command_MenWallUpgradeToTower
	ButtonImage   		= BGWall_ArrowTower
	ButtonBorderType    = UPGRADE
	DescriptLabel       = CONTROLBAR:ToolTipCommand_MenWallUpgradeToTower
	Radial				= Yes
	InPalantir	   		= Yes
End
CommandButton Command_MenWallUpgradeToTrebuchet
  Command               = OBJECT_UPGRADE 
    Options			 = CANCELABLE NOT_QUEUEABLE
	Object        		= GondorCastleWallTrebuchet
	Upgrade             = Upgrade_MenWallTrebuchet
	TextLabel     		= CONTROLBAR:Command_MenWallUpgradeToTrebuchet
	ButtonImage   		= BGWall_Trebuchet
	ButtonBorderType    = UPGRADE
	DescriptLabel       = CONTROLBAR:ToolTipCommand_MenWallUpgradeToTrebuchet
	Radial				= Yes
	InPalantir	   		= Yes
End

