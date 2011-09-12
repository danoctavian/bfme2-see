; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; CommandButton.INC for MORIA (Wild) faction...
; -------------------------------------------------------------------------------
; NOTE: Keep this organized!


CommandButton Command_WildWallUpgradeToOpeningAI
	Command				= OBJECT_UPGRADE 
	Options				= CANCELABLE NOT_QUEUEABLE
	Object        = WildCastleWallSegmentHoleTempAI
	Upgrade				= Upgrade_PlantShield
	TextLabel     	= CONTROLBAR:Command_DwarvenWallUpgradeToTower
	ButtonImage   = BDWall_AxeTower
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_DwarvenWallUpgradeToTower
	Radial				= Yes
	InPalantir	  = Yes
End

CommandButton Command_SpecialAbilityIgnite
  Command                 	= SPECIAL_POWER 
  SpecialPower            	= SpecialAbilityHeroMode
;  Options                 	= 
  TextLabel               	= CONTROLBAR:SpecialAbilityIgnite
  ButtonImage             	= HSBalrogIgnite
  ButtonBorderType        	= ACTION 
  DescriptLabel           	= CONTROLBAR:ToolTipSpecialAbilityIgnite
	AutoAbility			= Yes
  InPalantir			= Yes
End

;CommandButton Command_SpecialAbilityFlamingSword
;  Command                 	= SPECIAL_POWER 
;  SpecialPower            	= SpecialAbilityFlamingSword
;;  Options                 	= 
;  TextLabel               	= CONTROLBAR:SpecialAbilityFlamingSword
;  ButtonImage             	= HSBalrogFlamingSword
;  ButtonBorderType        	= ACTION 
;  DescriptLabel           	= CONTROLBAR:ToolTipSpecialAbilityFlamingSword
;;  UnitSpecificSound       	= 
;  InPalantir			= Yes
;End

CommandButton Command_SpecialAbilityFireWhip
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityFireWhip
  Options                 = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
  ; Command                 = FIRE_WEAPON 
  ; WeaponSlot              = SECONDARY
  TextLabel               = CONTROLBAR:SpecialAbilityFireWhip
  ButtonImage             = HSBalrogFireWhip
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityFireWhip
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid
	AutoAbility			= Yes
	PresetRange				= 300
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityBalrogScream
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityBalrogScream
;  Options                 = 
  TextLabel               = CONTROLBAR:SpecialAbilityBalrogScream
  ButtonImage             = HSBalrogScream
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityBalrogScream
	AutoAbility			= Yes
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityBalrogBreath
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityBalrogBreath
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilityBalrogBreath
  ButtonImage             = HSBalrogBreathFire
  ButtonBorderType        = ACTION 
  RadiusCursorType        = FireBreathRadiusCursor   
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityBalrogBreath
	AutoAbility			= Yes
  InPalantir			= Yes
End

CommandButton Command_SpecialAbilityBalrogWings
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityBalrogWings
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilityBalrogWings
  ButtonImage             = HSBalrogWings
  ButtonBorderType        = ACTION 
  CursorName			  = EvilAbilityObj  
  InvalidCursorName       = GenericInvalid
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityBalrogWings
;  UnitSpecificSound       = 
	AutoAbility			= Yes
  InPalantir			  = Yes
End

CommandButton Command_GoblinArcherPoisonArrows
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityPoisonArrows
	Options			= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
	ButtonImage		= BWTreasureTrove_PoisonArrows
	CursorName		= EvilAbilityObj
	InvalidCursorName	= GenericInvalid
	TextLabel		= CONTROLBAR:PoisonArrows
	DescriptLabel		= CONTROLBAR:ToolTipPoisonArrows
	InPalantir		= Yes
	ButtonBorderType    	= ACTION
End

CommandButton Command_SpecialAbilityWildmanPillage
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityWildmanPillage
	Options			= NONPRESSABLE
	ButtonImage		= HSDrogothIncinerate
	ButtonBorderType	= ACTION
	TextLabel		= CONTROLBAR:SpecialAbilityWildmanPillage
	DescriptLabel		= CONTROLBAR:ToolTipSpecialAbilityWildmanPillage
	InPalantir		= Yes
	DoubleClick		= Yes
	;UnitSpecificSound	= 
End

CommandButton Command_WildMarauderPorcupineFormation
	Command			= HORDE_TOGGLE_FORMATION	;;Tower Guard
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= MarauderVoicePorcupine MarauderVoiceDisengage
End



CommandButton Command_ConstructWildBabyDrakeHorde
	Command				= UNIT_BUILD
	Object				= WildBabyDrakeHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_WildFissureLevel3
	TextLabel			= CONTROLBAR:ConstructWildBabyDrakeHorde
	ButtonImage			= HIFireDrakeBroodIcon
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipWildBabyDrakeHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End



CommandButton Command_ConstructGoblinFighterHorde
	Command				= UNIT_BUILD
	Object				= GoblinFighterHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGoblinFighterHorde
	ButtonImage			= BWCave_GoblinWarrior
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinFighterHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructGoblinArcherHorde
	Command				= UNIT_BUILD
	Object				= GoblinArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGoblinArcherHorde
	ButtonImage			= BWCave_GoblinArcher
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructInnGoblinArcherHorde
	Command				= UNIT_BUILD
	Object				= GoblinArcherHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGoblinArcherHorde
	ButtonImage			= BWCave_GoblinArcher
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructGoblinFighterHordeFromDefectedLair
	Command				= UNIT_BUILD
	Object				= GoblinFighterHorde_FromDefectedLair
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGoblinFighterHorde
	ButtonImage			= BWCave_GoblinWarrior
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinFighterHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructGoblinArcherHordeFromDefectedLair
	Command				= UNIT_BUILD
	Object				= GoblinArcherHorde_FromDefectedLair
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructGoblinArcherHorde
	ButtonImage			= BWCave_GoblinArcher
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_UnpackExplicitWildLumbermill
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackLumbermill
  Object           = WildLumberMill
  ButtonImage      = BCLumberMill 
  ButtonBorderType = BUILD  
  DescriptLabel    = CONTROLBAR:ToolTipLumberMill
  Radial           = Yes
End

CommandButton Command_ConstructGoblinCave
	Command				= DOZER_CONSTRUCT
	Object				= GoblinCave
	TextLabel			= CONTROLBAR:ConstructGoblinCave
	ButtonImage			= BWCave
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipGoblinCave
	Radial				= Yes  
End

CommandButton Command_ConstructGoblinFissure
	Command				= DOZER_CONSTRUCT
	Object				= GoblinFissure
	TextLabel			= CONTROLBAR:ConstructGoblinFissure
	ButtonImage			= BWFissure
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipGoblinFissure
	Radial				= Yes  
End

CommandButton Command_ConstructGoblinTroll
	Command				= UNIT_BUILD
	Object				= GoblinCaveTroll
	Options				= CANCELABLE NEED_UPGRADE
	TextLabel			= CONTROLBAR:ConstructGoblinCaveTroll
	ButtonImage			= BWFissure_CaveTroll
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinCaveTroll
	NeededUpgrade			= Upgrade_WildFissureLevel2
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End


CommandButton Command_ConstructWildCorsairsOfUmbarHordeInn
	Command				= UNIT_BUILD
	Object				= WildCorsairsOfUmbarHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorCorsairsOfUmbarHorde
	ButtonImage			= BMTavern_Corsair
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorCorsairsOfUmbarInnHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End


//////////////////////////////////////////////////////

CommandButton Command_SpecialAbilityShelobWebbing
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityShelobWebbing
  Options                 = NEED_TARGET_ENEMY_OBJECT ; NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:ShelobWebbing
  ButtonImage             = BuildingNoArt
  CursorName              = Bombard
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipShelobWebbing
  InPalantir			  = Yes
  AutoAbility			  = Yes
 ; UnitSpecificSound       = LegolasVoiceModeHawkStrike
  DisableOnModelCondition = WEAPONLOCK_SECONDARY					; disable if currently using swords
End

CommandButton Command_WildShelobInstillTerror
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityScreech
  TextLabel               = CONTROLBAR:WildShelobInstillTerror
  ButtonImage             = HSShelobInstillTerror
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:TooltipWildShelobInstillTerror
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 150
End

CommandButton Command_WildShelobPoisonedStinger
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityWildShelobPoisonedStinger
  Options                 = NEED_TARGET_ENEMY_OBJECT
  TextLabel               = CONTROLBAR:WildShelobPoisonedStinger
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid
  ButtonImage             = HSShelobPoisonedStinger
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipWildShelobPoisonedStinger
  ;UnitSpecificSound       = LurtzVoiceModeCripplingStrike
  InPalantir			  = Yes
  AutoAbility			  = Yes
End

CommandButton Command_WildShelobTunnel
	Command					= SPECIAL_POWER 
	SpecialPower			= SpecialAbilityWildShelobTunnel
	Options					= NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel				= CONTROLBAR:SpecialAbilityWildShelobTunnel
	ButtonImage				= HSShelobTunnel
	ButtonBorderType		= ACTION 
	CursorName				= EvilAbilityObj  
	InvalidCursorName		= GenericInvalid
	DescriptLabel			= CONTROLBAR:ToolTipSpecialAbilityWildShelobTunnel
;	UnitSpecificSound		= 
	InPalantir				= Yes
End






;//----------------------------------------------------------------------------------------

CommandButton Command_SelectUpgradesWildFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectUpgradesWildFortress
	ButtonImage             = UCCommon_UpgradeStructureNew
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectUpgradesWildFortress
	Radial                  = Yes
	CommandRangeStart	= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 8
End

CommandButton Command_SelectRevivablesWildFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesGoblinFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesWildFortress
	Radial                  = Yes
	CommandRangeStart		= 14	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 13
End

CommandButton Command_SelectRevivablesWildMonmentFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesGoblinFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesWildFortress
	Radial                  = Yes
	CommandRangeStart		= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 11
End

CommandButton Command_SelectRevivablesWildFortress_EvilLorien
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesGoblinFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesWildFortress
	Radial                  = Yes
	CommandRangeStart		= 13	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 5
End

CommandButton Command_SelectRevivablesWildFortress_EvilRivendell
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesGoblinFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesWildFortress
	Radial                  = Yes
	CommandRangeStart		= 13	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 14
End


CommandButton Command_PurchaseNewFireDrake
  Command                 = OBJECT_UPGRADE 
  Upgrade                 = Upgrade_HasDragonNestFireDrake 
  Options				  = CANCELABLE NEED_UPGRADE
  NeededUpgrade			  = Upgrade_WildFortressDragonNest
  ButtonImage			  = HIDrogoth //HIFireDrake ;Drogoth for SEE!
  ButtonBorderType        = UPGRADE 
  Radial				  = Yes
  InPalantir	   		  = Yes
  TextLabel               = CONTROLBAR:PurchaseWildFireDrake
  DescriptLabel           = CONTROLBAR:ToolTipPurchaseWildFireDrake
  LacksPrerequisiteLabel  = TOOLTIP:LackDragonNest
  PurchasedLabel		  = TOOLTIP:AlreadySummonedCreature
End

;//Wild Fortress Improvements
CommandButton Command_PurchaseUpgradeWildFortressDragonNest
	Command           = OBJECT_UPGRADE
	Options			  = CANCELABLE NEED_UPGRADE
	Upgrade           = Upgrade_WildFortressDragonNest Upgrade_DragonNestFireDrakeButtonEnable	
	NeededUpgrade	  = Upgrade_WildFortressWebCocoon	
	TextLabel         = CONTROLBAR:PurchaseUpgradeWildFortressDragonNest
	ButtonImage       = BWFortress_DragonNest
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeWildFortressDragonNest
	Radial            = Yes
	InPalantir	   	  = No
	LacksPrerequisiteLabel	= TOOLTIP:LackDragonNestWebCocoon
End

CommandButton Command_PurchaseUpgradeWildFortressBatCloud
	Command           = OBJECT_UPGRADE
	Options			  = CANCELABLE
	Upgrade           = Upgrade_WildFortressBatCloud
	TextLabel         = CONTROLBAR:PurchaseUpgradeWildFortressBatCloud
	ButtonImage       = SBEvil_CaveBats
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeWildFortressBatCloud
	Radial            = Yes
	InPalantir	   	  = No
End

CommandButton Command_SpecialAbilityBatCloud
	Command				= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityBatCloud
	Options				= NEED_TARGET_POS CONTEXTMODE_COMMAND
	NeededUpgrade		= Upgrade_WildFortressBatCloud
	TextLabel			= CONTROLBAR:SpecialAbilityBatCloud
	ButtonImage			= SBEvil_CaveBats
	ButtonBorderType	= ACTION 
	CursorName			= EvilAbilityObj  
	InvalidCursorName	= GenericInvalid
	DescriptLabel		= CONTROLBAR:ToolTipSpecialAbilityBatCloud
	ShowButton			= No
	Radial				= No
	InPalantir	   		= No	; To be hidden by default
	AutoAbility			= Yes
End

CommandButton Command_PurchaseUpgradeWildFortressFireArrows
	Command           = OBJECT_UPGRADE
	Options			  = CANCELABLE
	Upgrade           = Upgrade_WildFortressFireArrowsTrigger
	TextLabel         = CONTROLBAR:PurchaseUpgradeWildFortressFireArrows
	ButtonImage       = BMOrcPit_FlamingArrows
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeWildFortressFireArrows
	Radial            = Yes
	InPalantir	   	  = No
End

CommandButton Command_PurchaseUpgradeWildFortressStonePavement
  Command = OBJECT_UPGRADE
  Upgrade = Upgrade_WildFortressStonePavement
  Options = CANCELABLE
  TextLabel = CONTROLBAR:PurchaseWildFortressStonePavement ;each faction will need it's own strings
  ButtonImage = BIFortressFloorMoria
  ButtonBorderType = UPGRADE
  DescriptLabel = CONTROLBAR:ToolTipPurchaseWildFortressStonePavement  ;each faction will need it's own strings
  Radial = Yes
  InPalantir = No
End

CommandButton Command_PurchaseUpgradeWildFortressWebCocoon
	Command           = OBJECT_UPGRADE
	Upgrade           = Upgrade_WildFortressWebCocoonTrigger
	Options			  	= CANCELABLE NEED_UPGRADE
	NeededUpgrade	    = Upgrade_WildFortressStonePavement
	TextLabel         = CONTROLBAR:PurchaseUpgradeWildFortressWebCocoon
	ButtonImage       = BWFortress_WebCocoon
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeWildFortressWebCocoon
	Radial            = Yes
	InPalantir	   	  = No
	LacksPrerequisiteLabel		= TOOLTIP:LackWildFortressStonePavement  ;each faction will need it's own strings
End

CommandButton Command_PurchaseUpgradeWildFortressRazorSpines
	Command           = OBJECT_UPGRADE
	Options			  = CANCELABLE
	Upgrade           = Upgrade_WildFortressRazorSpines
	TextLabel         = CONTROLBAR:PurchaseUpgradeWildFortressRazorSpines
	ButtonImage       = BWFortress_RazorSpines
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseUpgradeWildFortressRazorSpines
	Radial            = Yes
	InPalantir	   	  = No
End


;//Wild Fortress Expansions
CommandButton Command_ConstructWildBurrowsExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = WildBurrowsExpansion
	TextLabel        = CONTROLBAR:ConstructWildBurrowsExpansion
	ButtonImage      = BWFortress_Burrows
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructWildBurrowsExpansion
	Radial           = Yes  
End
CommandButton Command_ConstructWildSpiderHolesExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = WildSpiderHolesExpansion
	TextLabel        = CONTROLBAR:ConstructWildSpiderHolesExpansion
	ButtonImage      = SBEvil_SummonSpiderlings
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructWildSpiderHolesExpansion
	Radial           = Yes  
End
CommandButton Command_ConstructWildArrowDenExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = WildArrowDenExpansion
	TextLabel        = CONTROLBAR:ConstructWildArrowDenExpansion
	ButtonImage      = BWFortress_ArrowDen
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructWildArrowDenExpansion
	Radial           = Yes  
End
CommandButton Command_ConstructWildGiantSentryExpansion
	Command				= FOUNDATION_CONSTRUCT
    Options				= CANCELABLE
	Object           	= WildGiantSentryExpansion
	TextLabel         	= CONTROLBAR:ConstructWildGiantSentryExpansion
	ButtonImage      	= BWFissure_Giant
	ButtonBorderType  	= BUILD 
	DescriptLabel    	 	= CONTROLBAR:ToolTipConstructWildGiantSentryExpansion
	Radial           	= Yes  
End

CommandButton Command_WildCastleWallHub_BeginWallSpanAI_SEE
	Command = DOZER_CONSTRUCT
	Object = WildCastleWallHubAI
	Options = OPTION_ONE
	TextLabel = CONTROLBAR:Command_WildCastleWallHub_BeginWallSpan
	ButtonImage = BRBWildBuildWall //BIWall_BuildWall
	ButtonBorderType = BUILD
	DescriptLabel = CONTROLBAR:TooltipCommand_WildCastleWallHub_BeginWallSpan
	Radial = Yes
	InPalantir = No
End



;-----------------------Wild------------------------------------

CommandButton Command_ConstructWildPorter
	Command				= UNIT_BUILD
	Object				= WildPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructWildPorter
	ButtonImage			= BWFortress_Porter
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipConstructWildPorter
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes     
End

CommandButton Command_ConstructWildSpiderlingHorde
	Command				= UNIT_BUILD
	Object				= WildSpiderlingHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructWildSpiderlingHorde
	ButtonImage			= BWSpiderPit_Spiderling
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipBuildWildSpiderlingHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes      
End

CommandButton Command_ConstructWildSpiderRiderHorde
	Command				= UNIT_BUILD
	Object				= GoblinSpiderRiderHorde
	Options				= CANCELABLE NEED_UPGRADE
	TextLabel			= CONTROLBAR:ConstructWildSpiderRiderHorde
	ButtonImage			= BWSpiderPit_SpiderRider
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipBuildWildSpiderRiderHorde
	NeededUpgrade		= Upgrade_WildSpiderPitLevel2
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes      
End

CommandButton Command_PurchaseSpiderVenomSackScienceUpgrade
	Command           = PLAYER_UPGRADE
	Upgrade           = Upgrade_WildSpiderVenomSackScience
	Options			  = CANCELABLE NEED_UPGRADE
	TextLabel         = CONTROLBAR:PurchaseTechnologySpiderVenomSacks
	ButtonImage       = BWSpiderPit_VenomSacks
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseTechnologySpiderVenomSacks
	NeededUpgrade	  = Upgrade_WildSpiderPitLevel3
	Radial            = Yes
	InPalantir	      = Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackVenomSacks
End

CommandButton Command_PurchaseSpiderVenomSacksUpgrade
	Command           = OBJECT_UPGRADE
	Upgrade           = Upgrade_WildSpiderVenomSacks
	Options			  = CANCELABLE NEED_UPGRADE	OK_FOR_MULTI_SELECT
	TextLabel         = CONTROLBAR:PurchaseSpiderVenomSacks
	ButtonImage       = BWSpiderPit_VenomSacks
	ButtonBorderType  = UPGRADE
	DescriptLabel     = CONTROLBAR:ToolTipPurchaseSpiderVenomSacks
	NeededUpgrade	  = Upgrade_WildSpiderVenomSackScience
	InPalantir	      = Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackVenomSacksTechnology
End

CommandButton Command_ConstructWildMarauderHorde
	Command			= UNIT_BUILD
	Object			= WildMarauderHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructWildMarauderHorde
	ButtonImage		= BWFissure_Marauder
	ButtonBorderType	= BUILD											
	DescriptLabel		= CONTROLBAR:ToolTipBuildWildMarauderHorde
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructWildMarauderSwordHorde					; Faction enhancement for BFME2 Expansion
	Command			= UNIT_BUILD
	Object			= WildMarauderSwordHorde
	Options			= NEED_UPGRADE CANCELABLE
	TextLabel		= CONTROLBAR:ConstructWildMarauderSwordHorde
	ButtonImage		= BWFissure_SwordsmanIcon
	ButtonBorderType	= BUILD											
	DescriptLabel		= CONTROLBAR:ToolTipBuildWildMarauderSwordHorde
	NeededUpgrade		= Upgrade_WildFissureLevel2
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructWildMountainGiant
	Command			= UNIT_BUILD
	Object			= WildMountainGiant
	Options			= CANCELABLE NEED_UPGRADE
	TextLabel		= CONTROLBAR:ConstructWildMountainGiant
	ButtonImage		= BWFissure_Giant
	ButtonBorderType	= BUILD											
	DescriptLabel		= CONTROLBAR:ToolTipBuildWildMountainGiant
	NeededUpgrade		= Upgrade_WildFissureLevel3
	Radial			= Yes
	InPalantir	   	= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ToggleSpiderRiderWeapon
	Command			= TOGGLE_WEAPONSET
	Options			= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel           	= CONTROLBAR:ToggleSpiderRiderWeapons
	ButtonImage        	= UCElven_Bow UCElven_Sword
	ButtonBorderType    	= ACTION 
	DescriptLabel       	= CONTROLBAR:ToolTipToggleSpiderRiderWeapons
	InPalantir		= Yes
;	UnitSpecificSound   	= ElvenWarriorVoiceModeSword ElvenWarriorVoiceModeBow
End

CommandButton Command_ToggleCorsairWeapon
	Command			= TOGGLE_WEAPONSET
	Options			= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel		= CONTROLBAR:ThrowFireBombs CONTROLBAR:Knife
	ButtonImage		= UCCommon_FireBomb UCElven_Sword
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipFireBombs CONTROLBAR:ToolTipKnife
	InPalantir		= Yes
	UnitSpecificSound	= CorsairVoiceWeaponSwitchFirebombs CorsairVoiceWeaponSwitchSwords
End

CommandButton Command_ToggleMountainGiantRockThrow
	Command			= TOGGLE_WEAPONSET
	Options			= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel		= CONTROLBAR:ThrowRocks CONTROLBAR:KickAndPunch
	ButtonImage		= UCCommon_GiantThrowRock UCCommon_GiantMelee
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipThrowRocks CONTROLBAR:ToolTipKickAndPunch
	InPalantir		= Yes
	UnitSpecificSound	= EntVoxToggleRockThrow EntVoxToggleRockThrow
End

CommandButton Command_SpecialAbilityWildMountainGiantStomp
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityWildMountainGiantStomp
  Options                 = OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
  TextLabel               = CONTROLBAR:WildMountainGiantStomp
  ButtonImage             = UCGiant_Stomp
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWildMountainGiantStomp
  AutoAbility			  = Yes
  PresetRange			  = #MULTIPLY( WILD_MOUNTAIN_GIANT_STOMP_RADIUS 0.5 )
  InPalantir			  = Yes
  DisableOnModelCondition = WEAPONSET_TOGGLE_1
  UnitSpecificSound       = MountainGiantVoxStomp
End



CommandButton Command_PorterConstructWildMineShaft
	Command				= DOZER_CONSTRUCT
	Object				= WildMineShaft
	TextLabel			= CONTROLBAR:ConstructWildMineShaft
	ButtonImage			= BWAbandonedMineShaft
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildMineShaft
	Radial				= Yes  
	;InPalantir			= Yes
End

CommandButton Command_PorterConstructWildLumberMill
	Command				= DOZER_CONSTRUCT
	Object				= WildLumberMill
	TextLabel			= CONTROLBAR:ConstructWildLumberMill
	ButtonImage			= BCLumberMill
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipLumberMill
	Radial				= Yes  
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildCave
	Command				= DOZER_CONSTRUCT
	Object				= GoblinCave
	TextLabel			= CONTROLBAR:ConstructWildGoblinCave
	ButtonImage			= BWCave
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildGoblinCave
	Radial				= Yes  
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildFissure
	Command				= DOZER_CONSTRUCT
	Object				= GoblinFissure
	TextLabel			= CONTROLBAR:ConstructWildGoblinFissure
	ButtonImage			= BWFissure
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildGoblinFissure
	Radial				= Yes  
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildSpiderPit
	Command				= DOZER_CONSTRUCT
	Object				= WildSpiderPit
	TextLabel			= CONTROLBAR:ConstructWildWildSpiderPit
	ButtonImage			= BWSpiderPit
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildWildSpiderPit
	Radial				= Yes  
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildFortress
	Command				= DOZER_CONSTRUCT
	Object				= WildFortress
	TextLabel			= CONTROLBAR:ConstructWildFortress
	ButtonImage			= BWFortress
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildFortress
	Radial				= Yes
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildTreasureTrove
	Command				= DOZER_CONSTRUCT
	Object				= WildTreasureTrove
	TextLabel			= CONTROLBAR:ConstructWildTreasureTrove
	ButtonImage			= BWTreasureTrove
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildTreasureTrove
	Radial				= Yes
	;InPalantir			= Yes
END

CommandButton Command_PorterConstructWildSentryTower
	Command				= DOZER_CONSTRUCT
	Object				= WildSentryTower
	TextLabel			= CONTROLBAR:ConstructWildSentryTower
	ButtonImage			= BWSentryTower
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipConstructWildSentryTower
	Radial				= Yes
End

CommandButton Command_PurchaseUpgradeWildCaveLevel2
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildCaveLevel2
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildCaveLevel2Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildCaveLevel2Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildCaveLevel3
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildCaveLevel3
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildCaveLevel3Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildCaveLevel3Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_UpgradeWildFissureLevel2
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildFissureLevel2
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:UpgradeWildFissureLevel2
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildFissureLevel2Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildFissureLevel3
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildFissureLevel3
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:UpgradeWildFissureLevel3
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildFissureLevel3Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildSpiderPitLevel2
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildSpiderPitLevel2
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildSpiderPitLevel2Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildSpiderPitLevel2Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildSpiderPitLevel3
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildSpiderPitLevel3
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildSpiderPitLevel3Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildSpiderPitLevel3Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildTreasureTroveLevel2
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildTreasureTroveLevel2
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildTreasureTroveLevel2Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildTreasureTroveLevel2Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildTreasureTroveLevel3
  Command           = OBJECT_UPGRADE
  Upgrade           = Upgrade_WildTreasureTroveLevel3
  Options			= CANCELABLE
  TextLabel         = CONTROLBAR:ConstructWildTreasureTroveLevel3Upgrade
  ButtonImage       = UCCommon_UpgradeStructureNew
  ButtonBorderType  = UPGRADE
  DescriptLabel     = CONTROLBAR:ToolTipBuildWildTreasureTroveLevel3Upgrade
  Radial            = Yes
  InPalantir	   	= Yes
End

CommandButton Command_PurchaseUpgradeWildBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildBasicTraining 
	NeededUpgrade		= Upgrade_TechnologyWildBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildBasicTraining
	ButtonImage			= BWTreasureTrove_BannerCarrier
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeWildBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackWildBasicTraining
End

CommandButton Command_PurchaseTechnologyWildBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	Upgrade				= Upgrade_TechnologyWildBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildBasicTraining
	ButtonImage			= BWTreasureTrove_BannerCarrier
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyWildBasicTraining
	Radial				= Yes
	InPalantir			= Yes
End

;//Fire Arrow upgrade to be purchased by units
CommandButton Command_PurchaseUpgradeWildFireArrows	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildFireArrows
	NeededUpgrade		= Upgrade_TechnologyWildFireArrows
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeWildFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackWildFireArrows
End
;//Fire Arrow technology to be purchased by a building
CommandButton Command_PurchaseTechnologyWildFireArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyWildFireArrows 
	NeededUpgrade		= Upgrade_WildTreasureTroveLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyWildFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3TreasureTrove
	
End

CommandButton Command_PoisonedBlades
	Command				= SPECIAL_POWER
	Options				= OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
	SpecialPower		= SpecialAbilityGoblinFighterPoisonedBlades
	TextLabel			= CONTROLBAR:SpecialAbilityGoblinFighterPoisonedBlades
	DescriptLabel		= CONTROLBAR:ToolTipSpecialAbilityGoblinFighterPoisonedBlades
	InPalantir			= Yes
	ButtonBorderType	= ACTION
	ButtonImage			= BWTreasureTrove_PoisonBlades
End

CommandButton Command_PurchaseUpgradeWildForgedBlade	;upgrade for units
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildForgedBlades
	NeededUpgrade		= Upgrade_TechnologyWildForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildForgedBlade
	ButtonImage			= BWTreasureTrove_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeWildForgedBlade
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackWildForgedBlades
End

CommandButton Command_PurchaseTechnologyWildForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyWildForgedBlades
	NeededUpgrade		= Upgrade_WildTreasureTroveLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildForgedBlades
	ButtonImage			= BWTreasureTrove_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyWildForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2TreasureTrove
	
End

CommandButton Command_PurchaseUpgradeWildHeavyArmor	;upgrade for units
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildHeavyArmor
	NeededUpgrade		= Upgrade_TechnologyWildHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildHeavyArmor
	ButtonImage			= BWTreasureTrove_ScavengedArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeWildHeavyArmor
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackWildHeavyArmor
End

CommandButton Command_PurchaseTechnologyWildHeavyArmor
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyWildHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildHeavyArmor
	ButtonImage			= BWTreasureTrove_ScavengedArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseechnologyWildHeavyArmor
	Radial				= Yes
	InPalantir			= Yes
End




