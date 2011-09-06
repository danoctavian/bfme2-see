////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Isengard//
///////////


;CommandButton Command_SetFormationWargLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardWargRiderHordeLineFormation
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= GondorKnightVoiceWedgeFormation	;warg line
;End

;CommandButton Command_SetFormationWargSkirmish
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardWargRiderHorde
;	ButtonImage             = UCFormation_Skirmish
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleSkirmishFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleSkirmishFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= GondorKnightVoiceLineFormation	;warg skirmish
;End


;CommandButton Command_ToggleFormationPikeman
;	Command			= HORDE_TOGGLE_FORMATION	;;Pikeman
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLooseFormation
;	DescriptLabel           = CONTROLBAR:ToolTipTogglePikemanLooseToPorcupineFormation	CONTROLBAR:ToolTipTogglePikemanPorcupineToLooseFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound       = UrukPikemanVoicePorcupine UrukPikemanVoiceLineFormation
;End

;CommandButton Command_SetFormationPikemanPorcupine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardPikemanHordePorcupine
;	ButtonImage             = UCCommon_PorcupineFormation
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:TogglePorcupineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipTogglePorcupineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukPikemanVoicePorcupine
;End

;CommandButton Command_SetFormationPikemanLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardPikemanHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukPikemanVoiceLineFormation
;End


;CommandButton Command_ToggleFormationCrossbow
;	Command			= HORDE_TOGGLE_FORMATION	;;Crossbowman
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Loose
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation	CONTROLBAR:ToggleLooseFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleCrossbowmanLooseToWedgeFormation	CONTROLBAR:ToolTipToggleCrossbowmanWedgeToLooseFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound       = UrukCrossbowmanVoiceWedgeFormation UrukCrossbowmanVoiceLineFormation
;End

;CommandButton Command_SetFormationCrossbowWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardUrukCrossbowHordeWedgeFormation
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation		CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation	CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukCrossbowmanVoiceWedgeFormation
;End

;CommandButton Command_SetFormationCrossbowLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardUrukCrossbowHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukCrossbowmanVoiceLineFormation
;End


CommandButton Command_ToggleFormationIsengardFighter
	Command			= HORDE_TOGGLE_FORMATION	;;Uruk-Hai
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCUruk_ShieldWall  UCUruk_ShieldWallOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:ToggleBlockFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleIFighterLooseToBlockFormation	CONTROLBAR:ToolTipToggleIFighterBlockToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound       = UrukWarriorVoiceFormationBlock UrukWarriorVoiceFormationLine
End

;CommandButton Command_SetFormationIsengardFighterBlock
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardFighterHordeBlock
;	ButtonImage             = UCFormation_Block
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleBlockFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleBlockFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukWarriorVoiceFormationBlock
;End

;CommandButton Command_SetFormationIsengardFighterLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= IsengardFighterHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= UrukWarriorVoiceFormationLine
;End


CommandButton Command_IsengardPikemanPorcupineFormation
	Command			= HORDE_TOGGLE_FORMATION	;;Tower Guard
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= UrukPikemanVoicePorcupine UrukPikemanVoiceLineFormation
End

CommandButton Command_IsengardBloodThirstySacrifice
  Command                 	= BLOODTHIRSTY
  Options                 	= NEED_TARGET_ALLY_OBJECT CONTEXTMODE_COMMAND
  TextLabel               	= CONTROLBAR:Bloodthirsty
  ButtonImage             	= UCOrc_Bloodthirsty
  CursorName              	= EvilAbilityObj
  InvalidCursorName       	= StabAttackInvalid
  ButtonBorderType        	= ACTION
  DescriptLabel           	= CONTROLBAR:ToolTipIsengardBloodthirsty
  InPalantir		  	= Yes
End


;CommandButton Command_SharkuToggleMounted					;for Sharku
;  Command               = SPECIAL_POWER
;  SpecialPower          = SpecialAbilityToggleMounted
;  TextLabel             = CONTROLBAR:SharkuWargMount
;  Options		= TOGGLE_IMAGE_ON_WEAPONSET ON_GROUND_ONLY
;  FlagsUsedForToggle	= MOUNTED
;  ButtonImage           = HSTheodenWarSpeech HSTheodenWarSpeech
;  ButtonBorderType      = ACTION 
;  DescriptLabel         = CONTROLBAR:ToolTipSharkuWargMount
;  InPalantir            = Yes
;  ;UnitSpecificSound     = FaramirRangerVoiceModeKnightMS	FaramirKnightVoiceModeRangerMS
;End

CommandButton Command_SpecialAbilitySharkuBloodHunt
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilitySharkuBloodHunt
  Options		  = NONPRESSABLE
  TextLabel               = CONTROLBAR:BloodHunt
  ButtonImage             = HSSharkuBloodHunt
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipGBloodHunt
  InPalantir		  = Yes
End

CommandButton Command_SpecialAbilitySharkuManEater
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityIsengardSharkuManEaterGrab
  Options				  = NEED_UPGRADE NEED_TARGET_ENEMY_OBJECT OPTION_TWO ;MOUNTED_ONLY ;option two jumps into the eating code
  TextLabel               = CONTROLBAR:SharkuManEater
  ButtonImage             = HSSharkuManEater
  CursorName              = EvilAbilityObj
  NeededUpgrade			  =	Upgrade_SharkuManEater
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipSharkuManEater
  InPalantir		      = Yes
  AutoAbility			  = Yes
End

CommandButton Command_SpecialAbilityIsengardSharkuManEaterFlingPassenger
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityIsengardSharkuManEaterDrop
  TextLabel               = CONTROLBAR:WildMountainGiantGrab
  ButtonImage             = UCEnt_Grab
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityGrabPassenger
  InPalantir			  = Yes
End



CommandButton Command_UnpackExplicitIsengardLumbermill
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackLumbermill
  Object           = IsengardLumberMill
  ButtonImage      = BCLumberMill 
  ButtonBorderType = BUILD  
  DescriptLabel    = CONTROLBAR:ToolTipLumberMill
  Radial           = Yes
End

CommandButton Command_UnpackExplicitIsengardFurnace
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackFurnace
  Object           = IsengardFurnace
  ButtonImage      = BCFurnace
  ButtonBorderType = BUILD
  DescriptLabel    = CONTROLBAR:ToolTipFurnaceUnpack
  Radial           = Yes
End



CommandButton Command_PorterConstructIsengardFurnace
  	Command          		= DOZER_CONSTRUCT
  	Object           		= IsengardFurnace
  	TextLabel        		= CONTROLBAR:ConstructFurnace
  	ButtonImage      		= BCFurnace
  	ButtonBorderType 		= BUILD 
  	DescriptLabel    		= CONTROLBAR:ToolTipFurnace
  	Radial           		= Yes  
End

CommandButton Command_ConstructIsengardTavern
  	Command          		= DOZER_CONSTRUCT
  	Object           		= IsengardTavern
  	TextLabel        		= CONTROLBAR:ConstructIsengardTavern
  	ButtonImage      		= BMTavern
  	ButtonBorderType 		= BUILD 
  	DescriptLabel    		= CONTROLBAR:ToolTipIsengardTavern
  	Radial           		= Yes  
End

CommandButton Command_UpgradeIsengardTavernLevel2					; Added for BFME2 Expansion
	Command				= OBJECT_UPGRADE
	Object				= IsengardTavern
	Upgrade				= Upgrade_IsengardTavernLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardTavernLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardTavernLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardTavernLevel3					; Added for BFME2 Expansion
	Command				= OBJECT_UPGRADE
	Object				= IsengardTavern
	Upgrade				= Upgrade_IsengardTavernLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardTavernLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardTavernLevel3
	Radial				= Yes
	InPalantir			= Yes
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ISENGARD UNIT PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ConstructIsengardPorter
	Command				= UNIT_BUILD
	Object				= IsengardPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardPorter
	ButtonImage			= BIFortress_Porter
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructIsengardPorter
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructIsengardFighterHorde
	Command				= UNIT_BUILD
	Object				= IsengardFighterHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardUrukHai
	ButtonImage			= BIUrukPit_Warriors
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardUrukHai
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecific   			= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructInnIsengardWildmanHorde
	Command				= UNIT_BUILD
	Object				= IsengardWildmanHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardWildmanHorde
	ButtonImage			= BCInn_WildmenofDunland
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardWildmanHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecific   			= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructIsengardWildmanHorde
	Command				= UNIT_BUILD
	Object				= IsengardWildmanHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardWildmanHorde
	ButtonImage			= BCInn_WildmenofDunland
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardWildmanHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecific   			= GondorArcherVoiceBuy      
End
CommandButton Command_ConstructIsengardWildmanAxeHorde
	Command				= UNIT_BUILD
	Object				= IsengardWildmanAxeHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_IsengardTavernLevel2
	TextLabel			= CONTROLBAR:ConstructIsengardWildmanAxeHorde
	ButtonImage			= BIClanSteading_WildAxemenIcon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardWildmanAxeHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecific   			= GondorArcherVoiceBuy      
End


CommandButton Command_ConstructIsengardUrukCrossbowHorde
	Command				= UNIT_BUILD
	Object				= IsengardUrukCrossbowHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardCrossbowmen
	ButtonImage			= BIUrukPit_Crossbowmen
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardCrossbowmen
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructIsengardPikemanHorde
	Command				= UNIT_BUILD
	Object				= IsengardPikemanHorde
	Options				= NEED_UPGRADE CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardPikemen
	ButtonImage			= BIUrukPit_Pikemen
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardPikemen
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

;CommandButton Command_ConstructIsengardWildmanHorde
;	Command				= UNIT_BUILD
;	Object				= IsengardWildmanHorde
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructIsengardWildmanHorde
;	ButtonImage			= BIUrukPit_Warriors
;	ButtonBorderType		= BUILD 
;	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardWildmanHorde
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount		= Yes
;;    UnitSpecificSound   		= GondorArcherVoiceBuy      
;End


CommandButton Command_IsengardMineDetonate
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityDetonate
	TextLabel		= CONTROLBAR:IsengardMineDetonate
	ButtonImage		= HIDetonateMineIcon
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:ToolTipIsengardMineDetonate
	InPalantir		= Yes
End

CommandButton Command_ConstructIsengardWargPackHorde				; Added for Faction Enhancement BFME2 Expansion
	Command			= UNIT_BUILD
	Object			= IsengardWargPackHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructIsengardWargPack
	ButtonImage		= BIWargPit_WargPackIcon
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardWargPack
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
;    UnitSpecificSound   	= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructIsengardWargRiderHorde
	Command			= UNIT_BUILD
	Object			= IsengardWargRiderHorde
	Options			= NEED_UPGRADE CANCELABLE
	TextLabel		= CONTROLBAR:ConstructIsengardWargRider
	ButtonImage		= BIWargPit_Riders
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardWargRider
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
	NeededUpgrade		= Upgrade_IsengardWargPitLevel2
;    UnitSpecificSound   	= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructIsengardBallista
	Command			= UNIT_BUILD
	Object			= IsengardBallista
	Options			= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_IsengardSiegeWorksLevel2		; originally WorksLevel3
	TextLabel		= CONTROLBAR:ConstructIsengardSiegeBallista
	ButtonImage		= BISiegeWorks_SeigeBallista
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardSiegeBallista
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructIsengardSiegeLadder
	Command			= UNIT_BUILD
	Object			= IsengardSiegeLadder
	Options			= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_IsengardSiegeWorksLevel2
	TextLabel		= CONTROLBAR:ConstructIsengardSiegeLadder
	ButtonImage		= BISiegeWorks_SiegeLadder
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardSiegeLadder
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_ConstructIsengardBerserker
	Command			= UNIT_BUILD
	Object			= IsengardBeserker
	Options			= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_IsengardUrukPitLevel2
	TextLabel		= CONTROLBAR:ConstructIsengardBerserker
	ButtonImage		= BIBerserker
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardBerserker
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_ConstructIsengardBerserkerHorde				; Added for BFME2 Expansion
	Command			= UNIT_BUILD
	Object			= IsengardBerserkerHorde
	Options			= NEED_UPGRADE CANCELABLE
	NeededUpgrade		= Upgrade_IsengardUrukPitLevel3
	TextLabel		= CONTROLBAR:ConstructIsengardBerserkerHorde
	ButtonImage		= BIUrukPit_BerserkerHordeIcon
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardBerserkerHorde
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_ConstructIsengardBatteringRam
	Command			= UNIT_BUILD
	Object			= IsengardBatteringRam
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructIsengardBatteringRam
	ButtonImage		= BISiegeWorks_BatteringRam
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardBatteringRam
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_ConstructIsengardExplosiveMine
	Command			= UNIT_BUILD
	Object			= IsengardExplosiveMine
 	Options			= NEED_UPGRADE CANCELABLE
 	NeededUpgrade		= Upgrade_IsengardSiegeWorksLevel3		; originally WorksLevel2
	TextLabel		= CONTROLBAR:ConstructIsengardExplosiveMine
	ButtonImage		= BISiegeWorks_DemoTeam
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardExplosiveMine
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes     
End

;CommandButton Command_ConstructIsengardBannerOrc
;	Command			= UNIT_BUILD
;	Object			= IsengardBannerOrc
;	Options			= CANCELABLE
;	TextLabel		= CONTROLBAR:ConstructIsengardBannerCarrier
;	ButtonImage		= BIArmory_WhiteHandBanner
;	ButtonBorderType	= BUILD 
;	DescriptLabel		= CONTROLBAR:ToolTipBuildIsengardBannerCarrier
;	Radial			= Yes
;	InPalantir	   	= Yes
;	ShowProductionCount	= Yes     
;End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ISENGARD BUILDING PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_SelectUpgradesIsengardFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectUpgradesIsengardFortress
	ButtonImage             = UCCommon_UpgradeStructureNew
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectUpgradesIsengardFortress
	Radial                  = Yes
	CommandRangeStart		= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 8
End

CommandButton Command_SelectRevivablesIsengardFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesIsengardFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesIsengardFortress
	Radial                  = Yes
	CommandRangeStart		= 15	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 10
End

CommandButton Command_SelectRevivablesIsengardMonumentFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesIsengardFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesIsengardFortress
	Radial                  = Yes
	CommandRangeStart		= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 11
End

CommandButton Command_IsengardWizardsTowerLightningStrike
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityLightningStrike
  Options                 = HIDE_WHILE_DISABLED NEED_TARGET_POS
  TextLabel               = CONTROLBAR:WizardsTowerLightningStrike
  ButtonImage             = HSSarumanThunderbolt
  RadiusCursorType        = ThunderBoltRadiusCursor
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWizardsTowerLightningStrike
  CursorName			  = AttackObj
  InvalidCursorName       =	GenericInvalid  
  AutoAbility			  = Yes
  InPalantir			  = Yes
  Radial				  = Yes
End

CommandButton Command_IsengardWargSentryUnleash
	Command					= SPECIAL_POWER 
	SpecialPower            = SpecialAbilityUnleash
	TextLabel               = CONTROLBAR:IsengardWargSentryUnleash
	ButtonImage             = BIWargSentry_Warg
	ButtonBorderType        = ACTION 
	DescriptLabel           = CONTROLBAR:ToolTipIsengardWargSentryUnleash
	Radial					= Yes
	InPalantir				= Yes
	;UnitSpecificSound		= CampOrcReleaseWarg
End

;//---Isengard Fortress Expansions
CommandButton Command_ConstructIsengardTowerExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = IsengardTowerExpansion
	TextLabel        = CONTROLBAR:ConstructIsengardTowerExpansion
	ButtonImage      = BIFortress_ArrowTower
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructIsengardTowerExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructIsengardBallistaExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = IsengardBallistaExpansion
	TextLabel        = CONTROLBAR:ConstructIsengardBallistaExpansion
	ButtonImage      = BISiegeWorks_SeigeBallista 
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructIsengardBallistaExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructIsengardMineLauncherExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = IsengardMineLauncherExpansion
	TextLabel        = CONTROLBAR:ConstructIsengardMineLauncherExpansion
	ButtonImage      = BIFortress_MineLauncher 
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructIsengardMineLauncherExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructIsengardWallHubExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = IsengardCastleWallHubExpansion
	TextLabel        = CONTROLBAR:ConstructIsengardWallHubExpansion
	ButtonImage      = BIWall_WallHub 
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructIsengardWallHubExpansion
	Radial           = Yes  
End

;//---Isengard Fortress Improvements
CommandButton Command_PurchaseUpgradeIsengardFortressOrcfireMunitions 
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressOrcfireMunitionsTrigger
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressOrcfireMunitions
	ButtonImage       	= BMOrcPit_FlamingArrows
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressOrcfireMunitions
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeIsengardFortressIronPlating 
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressIronPlatingTrigger
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressIronPlating
	ButtonImage       	= BIFortress_IronPlating
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressIronPlating
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeIsengardFortressBurningForges
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressBurningForges
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressBurningForges
	ButtonImage       	= BIFortress_BurningForges
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressBurningForges
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeIsengardFortressExcavations
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressExcavations
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressExcavations
	ButtonImage       	= BIFortress_Excavations
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressExcavations
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeIsengardFortressMurderOfCrows
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressMurderOfCrows
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressMurderOfCrows
	ButtonImage       	= SBEvil_Crebain
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressMurderOfCrows
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_SpecialAbilityMurderOfCrows
	Command				= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityMurderOfCrows
	Options				= NEED_TARGET_POS CONTEXTMODE_COMMAND
	NeededUpgrade		= Upgrade_IsengardFortressMurderOfCrows
	TextLabel			= CONTROLBAR:SpecialAbilityMurderOfCrows
	ButtonImage			= SBEvil_Crebain
	ButtonBorderType	= ACTION 
	CursorName			= EvilAbilityObj  
	InvalidCursorName	= GenericInvalid
	DescriptLabel		= CONTROLBAR:ToolTipSpecialAbilityMurderOfCrows
	ShowButton			= No
	Radial				= No
	InPalantir	   		= No	; To be hidden by default
	AutoAbility			= Yes
End

;//---Isengard Fortress Monument
CommandButton Command_PurchaseUpgradeIsengardFortressWizardsTower 
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_IsengardFortressWizardsTower	
	Options			  	= CANCELABLE NEED_UPGRADE
	NeededUpgrade	    = Upgrade_IsengardFortressIronPlating
	TextLabel         	= CONTROLBAR:PurchaseUpgradeIsengardFortressWizardsTower
	ButtonImage       	= BIFortress_WizardTower
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFortressWizardsTower
	Radial            	= Yes
	InPalantir	   		= No
	LacksPrerequisiteLabel  =  ToolTip:LackIronPlating
End

;//--Isengard Upgrades


;//---Isengard Structures
CommandButton Command_ConstructIsengardBattleTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardBattleTower
  TextLabel        = CONTROLBAR:ConstructIsengardBattleTower
  ButtonImage      = BIWatchTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBuildIsengardBattleTower
  Radial           = Yes  
End

CommandButton Command_PorterConstructIsengardBattleTower
  Command          = DOZER_CONSTRUCT
  Object           = IsengardBattleTower
  TextLabel        = CONTROLBAR:ConstructIsengardBattleTower
  ButtonImage      = BIWatchTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBuildIsengardBattleTower
  Radial           = Yes  
End


CommandButton Command_ConstructIsengardUrukPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardUrukPit
  TextLabel        = CONTROLBAR:ConstructIsengardUrukPit
  ButtonImage      = BIUrukPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardUrukPit
  Radial           = Yes  
End

CommandButton Command_ConstructIsengardWargPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardWargPit
  TextLabel        = CONTROLBAR:ConstructIsengardWargPit
  ButtonImage      = BIWargPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardWargPit
  Radial           = Yes
End

CommandButton Command_PorterConstructIsengardWargPit
  Command          = DOZER_CONSTRUCT
  Object           = IsengardWargPit
  TextLabel        = CONTROLBAR:ConstructIsengardWargPit
  ButtonImage      = BIWargPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardWargPit
  Radial           = Yes
End

CommandButton Command_ConstructIsengardSiegeWorks
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardSiegeWorks
  TextLabel        = CONTROLBAR:ConstructIsengardSiegeWorks
  ButtonImage      = BISiegeWorks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardSiegeWorks
  Radial           = Yes  
End

CommandButton Command_PorterConstructIsengardSiegeWorks
  Command          = DOZER_CONSTRUCT
  Object           = IsengardSiegeWorks
  TextLabel        = CONTROLBAR:ConstructIsengardSiegeWorks
  ButtonImage      = BISiegeWorks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardSiegeWorks
  Radial           = Yes  
End

CommandButton Command_PorterConstructIsengardLumberMill
	Command				= DOZER_CONSTRUCT
	Object				= IsengardLumberMill
	TextLabel			= CONTROLBAR:ConstructIsengardLumberMill
	ButtonImage			= BCLumberMill
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipLumberMill
	Radial				= Yes  
End

CommandButton Command_PorterConstructIsengardWargSentry
	Command				= DOZER_CONSTRUCT
	Object				= IsengardWargSentry
	TextLabel			= CONTROLBAR:ConstructIsengardWargSentry
	ButtonImage			= BIWargSentry
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructIsengardWargSentry
	Radial				= Yes  
End

CommandButton Command_PorterConstructIsengardFortress
	Command				= DOZER_CONSTRUCT
	Object				= IsengardFortress
	TextLabel			= CONTROLBAR:ConstructIsengardFortress
	ButtonImage			= BIFortress
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructIsengardFortress
	Radial				= Yes  
End

CommandButton Command_ConstructIsengardArmory
  Command          = FOUNDATION_CONSTRUCT
  Object           = IsengardArmory
  TextLabel        = CONTROLBAR:ConstructIsengardArmory
  ButtonImage      = BIArmory
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardArmory
  Radial           = Yes
End

CommandButton Command_PorterConstructIsengardArmory
  Command          = DOZER_CONSTRUCT
  Object           = IsengardArmory
  TextLabel        = CONTROLBAR:ConstructIsengardArmory
  ButtonImage      = BIArmory
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipIsengardArmory
  Radial           = Yes
End

CommandButton Command_PurchaseNewWargSentry
  Command                 	= OBJECT_UPGRADE 
  Upgrade                 	= Upgrade_HasWargSentry 
  Options			= CANCELABLE NEED_UPGRADE
  NeededUpgrade			= Upgrade_WargSentryPurchaseButtonEnable
  ButtonImage			= BIWargSentry
  ButtonBorderType        	= UPGRADE 
  Radial			= Yes
  InPalantir	   		= Yes
  TextLabel               	= CONTROLBAR:PurchaseIsengardWargSentry
  DescriptLabel           	= CONTROLBAR:ToolTipPurchaseIsengardWargSentry
  PurchasedLabel		= TOOLTIP:AlreadySummonedCreature
  End

CommandButton  Command_PorterConstructIsengardWallHub
	Command          	= DOZER_CONSTRUCT
	Options			= CANCELABLE
	Object           	= IsengardCastleWallHub
	TextLabel        	= CONTROLBAR:Command_ConstructIsengardCastleWallHub
	ButtonImage      	= BIWall_WallHub
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipCommand_ConstructIsengardCastleWallHub
	Radial           	= Yes  
End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ISENGARD WALL BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_IsengardWallUpgradeToHub
	Command				= OBJECT_UPGRADE 
	Options				= CANCELABLE NOT_QUEUEABLE
	Object        		= IsengardCastleWallHub
	Upgrade				= Upgrade_IsengardWallHub
	TextLabel     		= CONTROLBAR:Command_IsengardWallUpgradeToHub
	ButtonImage   		= BIWall_WallHub
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_IsengardWallUpgradeToHub
	Radial				= Yes
	InPalantir	   		= Yes
End
   
CommandButton Command_IsengardWallUpgradeToRegularGate
	Command				= OBJECT_UPGRADE 
	Options				= CANCELABLE NOT_QUEUEABLE
	Object        		= IsengardCastleWallGate
	Upgrade				= Upgrade_IsengardWallRegularGate
	TextLabel     		= CONTROLBAR:Command_IsengardWallUpgradeToRegularGate
	ButtonImage   		= BIWall_MainGate
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_IsengardWallUpgradeToRegularGate
	Radial				= Yes
	InPalantir	   		= Yes
End

CommandButton Command_IsengardCastleWallHub_BeginWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= IsengardCastleWallHub
	Options				= OPTION_ONE
	TextLabel     		= CONTROLBAR:Command_IsengardCastleWallHub_BeginWallSpan
	ButtonImage   		= BIWall_BuildWall
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:TooltipCommand_IsengardCastleWallHub_BeginWallSpan
	Radial				= Yes
	InPalantir	   		= No
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ISENGARD BUILDING UPGRADE BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

CommandButton Command_UpgradeIsengardUrukPitLevel2
	Command				= OBJECT_UPGRADE
	Object				= IsengardUrukPit
	Upgrade				= Upgrade_IsengardUrukPitLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardUrukPitLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardUrukPitLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardUrukPitLevel3
	Command				= OBJECT_UPGRADE
	Object				= IsengardUrukPit
	Upgrade				= Upgrade_IsengardUrukPitLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardUrukPitLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardUrukPitLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardSiegeWorksLevel2
	Command				= OBJECT_UPGRADE
	Object				= IsengardSiegeWorks
	Upgrade				= Upgrade_IsengardSiegeWorksLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardSiegeWorksLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardSiegeWorksLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardSiegeWorksLevel3
	Command				= OBJECT_UPGRADE
	Object				= IsengardSiegeWorks
	Upgrade				= Upgrade_IsengardSiegeWorksLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardSiegeWorksLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardSiegeWorksLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardWargPitLevel2
	Command				= OBJECT_UPGRADE
	Object				= IsengardWargPit
	Upgrade				= Upgrade_IsengardWargPitLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardWargPitLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardWargPitLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeIsengardWargPitLevel3
	Command				= OBJECT_UPGRADE
	Object				= IsengardWargPit
	Upgrade				= Upgrade_IsengardWargPitLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeIsengardWargPitLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeIsengardWargPitLevel3
	Radial				= Yes
	InPalantir			= Yes
End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ISENGARD UPGRADES		   ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


;---- ISENGARD ---------------------------------------------------------------------

CommandButton Command_PurchaseUpgradeIsengardArmoryLevel2
	Command				= OBJECT_UPGRADE
	Upgrade				= Upgrade_IsengardArmoryLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardArmoryLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardArmoryLevel2
	Radial				= Yes
	InPalantir	   		= Yes
End

CommandButton Command_PurchaseUpgradeIsengardArmoryLevel3
	Command				= OBJECT_UPGRADE
	Upgrade				= Upgrade_IsengardArmoryLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructIsengardArmoryLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipBuildIsengardArmoryLevel3
	Radial				= Yes
	InPalantir	   		= Yes
End

;-------------------------------------------------------------------------------------

CommandButton Command_PurchaseTechnologyIsengardBasicTraining
	Command				= PLAYER_UPGRADE
	Upgrade				= Upgrade_TechnologyIsengardBasicTraining 
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:PurchaseTechnologyIsengardBasicTraining
	ButtonImage			= BIArmory_WhiteHandBanner
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyIsengardBasicTraining
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_PurchaseUpgradeIsengardBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_IsengardBasicTraining 
	NeededUpgrade			= Upgrade_TechnologyIsengardBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeIsengardBasicTraining
	ButtonImage			= BIArmory_WhiteHandBanner
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardBasicTraining
End

CommandButton Command_PurchaseTechnologyIsengardFireArrows
	Command				= PLAYER_UPGRADE
	Upgrade				= Upgrade_TechnologyIsengardFireArrows 
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_IsengardArmoryLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyIsengardFireArrows
	ButtonImage			= BIArmory_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyIsengardFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardFireArrowsTech
End

CommandButton Command_PurchaseUpgradeIsengardFireArrows
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_IsengardFireArrows 
	NeededUpgrade			= Upgrade_TechnologyIsengardFireArrows
	TextLabel			= CONTROLBAR:FireArrowUpgrade
	ButtonImage			= BIArmory_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardFireArrows
End

;-------------------
CommandButton Command_PurchaseTechnologyIsengardForgedBlades
	Command				= PLAYER_UPGRADE
	Upgrade				= Upgrade_TechnologyIsengardForgedBlades 
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_IsengardArmoryLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyIsengardForgedBlades
	ButtonImage			= BIArmory_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyIsengardForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardForgedBladesTech
End

CommandButton Command_PurchaseUpgradeIsengardForgedBlades
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_IsengardForgedBlades 
	NeededUpgrade			= Upgrade_TechnologyIsengardForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeIsengardForgedBlades
	ButtonImage			= BIArmory_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardForgedBlades
End

;-------------------

CommandButton Command_PurchaseTechnologyIsengardHeavyArmor
	Command				= PLAYER_UPGRADE
	Upgrade				= Upgrade_TechnologyIsengardHeavyArmor 
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_IsengardArmoryLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyIsengardHeavyArmor
	ButtonImage			= BIArmory_HeavyArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyIsengardHeavyArmor
	Radial				= Yes
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardHeavyArmorTech
End

CommandButton Command_PurchaseUpgradeIsengardHeavyArmor
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_IsengardHeavyArmor 
	NeededUpgrade			= Upgrade_TechnologyIsengardHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeIsengardHeavyArmor
	ButtonImage			= BIArmory_HeavyArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardHeavyArmor
End

CommandButton Command_PurchaseUpgradeIsengardTorches
	Command				= OBJECT_UPGRADE
	Options				= OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_IsengardTorches
	TextLabel			= CONTROLBAR:PurchaseUpgradeIsengardTorches
	ButtonImage			= BIArmory_Torches
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardTorches
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackIsengardTorches
End



//Isengard Ballista
CommandButton Command_IsengardPurchaseNewWallBallista
	Command					= OBJECT_UPGRADE 
	Upgrade					= Upgrade_HasWallTrebuchet
	Options					= CANCELABLE
	ButtonImage				= BISiegeWorks_SeigeBallista
	ButtonBorderType		= UPGRADE 
	Radial					= Yes
	InPalantir	   			= Yes
	TextLabel				= CONTROLBAR:IsengardBallistaUpgrade
	DescriptLabel			= CONTROLBAR:ToolTipIsengardBallistaUpgrade
End




CommandButton Command_SarumanThunderBolt
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityLightingBolt
  Options                 = NEED_TARGET_POS
  TextLabel               = CONTROLBAR:ThunderBolt
  ButtonImage             = HSSarumanThunderbolt
  RadiusCursorType        = ThunderBoltRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipThunderBolt
  AutoAbility			  = Yes
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityIsengardWizardBlast
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialPowerTelekeneticPush
  Options                 = NEED_TARGET_ENEMY_OBJECT ; CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:WizardBlast
  ButtonImage             = HPSarumanWizardBlast
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWizardBlast
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid
  AutoAbility			  = Yes
  PresetRange			  = 80.0
;  UnitSpecificSound       = 
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityDominateEnemy
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityDominateEnemy
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:Dominate
  ButtonImage             = HSSarumanDominate
  RadiusCursorType        = DominateRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipDominate
  InPalantir			  = Yes
  ;UnitSpecificSound       = SarumanVoiceDominate
End

CommandButton Command_SpecialAbilityTameTheBeast
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityTameTheBeast
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:TameTheBeast
  ButtonImage             = HSSharkuTameBeast
  RadiusCursorType        = DominateRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipTameTheBeast
  InPalantir			  = Yes
  ;UnitSpecificSound       = SarumanVoiceDominate
End


CommandButton Command_SarumanFireball
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilitySarumanFireball
  Options                 = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT ; CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilitySarumanFireball
  ButtonImage             = HSSarumanFireBallAttack
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilitySarumanFireball
;  UnitSpecificSound       = 
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 200.0
End



;CommandButton Command_ConstructIsengardDozer
;	Command				= UNIT_BUILD
;	Object				= IsengardDozer
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructIsengardDozer
;	ButtonImage			= BCFarm_Peasants
;	ButtonBorderType    = BUILD 
;	DescriptLabel       = CONTROLBAR:ToolTipBuildIsengardDozer
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount	= Yes     
;End

CommandButton Command_PorterConstructIsengardUrukPit
	Command       		= DOZER_CONSTRUCT
	Object        		= IsengardUrukPit
	TextLabel     		= CONTROLBAR:ConstructIsengardUrukPit
	ButtonImage   		= BIUrukPit
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructIsengardUrukPit
	Radial				= Yes
	;InPalantir	   		= Yes
End

