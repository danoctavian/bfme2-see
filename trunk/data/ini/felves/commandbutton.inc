////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Elves//
////////


CommandButton Command_ArwenFlood
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityPersonalFlood
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:PersonalFlood
  ButtonImage             = SBGood_Flood
  ButtonBorderType        = ACTION 
  RadiusCursorType        = FloodRadiusCursor
  DescriptLabel           = CONTROLBAR:ToolTipPersonalFlood
  InPalantir              = Yes
End

CommandButton Command_ArwenElvenGrace
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityElvenGrace
  TextLabel               = CONTROLBAR:ElvenGrace
  ButtonImage             = HSAragornAthelas
  CursorName              = Bombard
  RadiusCursorType        = AthelasRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipElvenGrace
  InPalantir			  = Yes
  AutoAbility			  = Yes
  NeedDamagedTarget		  = Yes
  UnitSpecificSound       = ArwenVoiceHeal
End


;CommandButton Command_ToggleFormationElvenMirkwoodArcher
;	Command			= HORDE_TOGGLE_FORMATION	;;Gondor Archer
;	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Ambush UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleAmbushFormation	CONTROLBAR:ToggleLineFormation
;	DescriptLabel          	= CONTROLBAR:ToolTipToggleEMirkwoodArcherLineToAmbushFormation	CONTROLBAR:ToolTipToggleEMirkwoodArcherAmbushToLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;	UnitSpecificSound	= RangerVoiceAmbushFormation GondorArcherVoiceLineFormation
;End

CommandButton Command_ToggleElvenWarriorWeapon
	Command			= TOGGLE_WEAPONSET
	Options			= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel           	= CONTROLBAR:ToggleElvenWarriorWeapons
	ButtonImage         	= UCElven_Sword UCElven_Bow
	ButtonBorderType    	= ACTION 
	DescriptLabel       	= CONTROLBAR:ToolTipToggleElvenWarriorWeapons
	InPalantir		= Yes
	UnitSpecificSound   	= ElvenWarriorVoiceModeSword ElvenWarriorVoiceModeBow
End


CommandButton Command_ElrondFakeLeadership
  	Command                 = SPECIAL_POWER
  	SpecialPower            = SpecialAbilityFakeLeadership
  	Options			= NONPRESSABLE
  	TextLabel               = CONTROLBAR:ElrondLeadership
  	ButtonImage             = HSFaramirLeadership
  	RadiusCursorType        = TrainingRadiusCursor  	
  	ButtonBorderType        = ACTION
  	DescriptLabel           = CONTROLBAR:TooltipElrondLeadership
  	InPalantir		= Yes
End

CommandButton Command_SpecialAbilityElrondElvenGrace
	Command			= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityElrondElvenGrace
	TextLabel		= CONTROLBAR:ElvenGrace
	ButtonImage		= HSAragornAthelas
	CursorName		= Bombard
	RadiusCursorType	= AthelasRadiusCursor
	InvalidCursorName	= GenericInvalid
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipAthelas
	InPalantir		= Yes
	AutoAbility		= Yes
	NeedDamagedTarget	= Yes
End

CommandButton Command_SpecialAbilityElrondFarsight
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityElrondFarsight
	TextLabel		= CONTROLBAR:ElrondFarsight
	DescriptLabel		= CONTROLBAR:ToolTipElrondFarsight
	ButtonImage		= HSElrondFarSight
	Options			= NEED_TARGET_POS
	ButtonBorderType	= ACTION
	RadiusCursorType    	= FarsightRadiusCursor
	InPalantir		= Yes
End

CommandButton Command_SpecialAbilityElrondRestorationHeal
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityElrondRestorationHeal
End

CommandButton Command_SpecialAbilityElrondRestoration
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityElrondRestoration
	TextLabel		= CONTROLBAR:ElrondRestoration
	DescriptLabel		= CONTROLBAR:ToolTipElrondRestoration
	ButtonImage		= HSElrondRestoration
	Options			= NEED_TARGET_POS
	ButtonBorderType	= ACTION
	RadiusCursorType	= HealRadiusCursor
	InPalantir		= Yes
	CommandTrigger		= Command_SpecialAbilityElrondRestorationHeal
End

;CommandButton Command_ToggleElvenThranduilWeapon
;	Command			= TOGGLE_WEAPONSET
;	Options			= TOGGLE_IMAGE_ON_WEAPONSET
;	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
;	TextLabel		= CONTROLBAR:ToggleElvenWarriorWeapons
;	ButtonImage		= UCElven_Sword UCElven_Bow
;	ButtonBorderType	= ACTION 
;	DescriptLabel		= CONTROLBAR:ToolTipToggleThranduilWeapons
;	InPalantir		= Yes
;;	UnitSpecificSound	= ElrondVoiceModeSword ElrondVoiceModeBow
;End

CommandButton Command_ThranduilWildWalkButton
  	Command                 = SPECIAL_POWER
  	SpecialPower            = SpecialAbilityFakeLeadership
  	Options			= NONPRESSABLE
  	TextLabel               = CONTROLBAR:WildWalk
  	ButtonImage             = HSThranduilWildWalk
  	RadiusCursorType        = TrainingRadiusCursor  	
  	ButtonBorderType        = ACTION
  	DescriptLabel           = CONTROLBAR:ToolTipThranduilWildWalk
  	InPalantir		= Yes
End

CommandButton Command_SpecialAbilityThornofVengeance
	Command                 = SPECIAL_POWER
	WeaponSlot              = SECONDARY
	SpecialPower            = SpecialAbilityThornVengeance
	Options                 = NEED_TARGET_ENEMY_OBJECT
	TextLabel               = CONTROLBAR:ThornofVengeance
	ButtonImage             = HSThranduilThornofVengeance
	CursorName              = Bombard
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipThornofVengeance
	DisableOnModelCondition = WEAPONSET_TOGGLE_1		
	InPalantir		= Yes
	AutoAbility		= Yes
	;UnitSpecificSound      = FaramirRangerVoiceWoundingArrow
End

CommandButton Command_SpecialAbilityElfCloakThranduil
  	Command                 = SPECIAL_POWER 
  	SpecialPower            = SpecialAbilityElfCloak
 	Options                 = OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
  	TextLabel               = CONTROLBAR:ElvenCloak
  	ButtonImage             = HPFrodoElfCloak
  	ButtonBorderType        = ACTION 
  	DescriptLabel           = CONTROLBAR:ToolTipElvenCloakThranduil
;  	UnitSpecificSound       = 
  	InPalantir		= Yes
End

CommandButton Command_SpecialAbilityMoveUnseen 
	Command			= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityMoveUnseen
	Options			= NEED_TARGET_POS
	TextLabel		= CONTROLBAR:MoveUnseen
	ButtonImage		= HSThranduilMoveUnseen
	RadiusCursorType	= MoveUnseenRadiusCursor
	InvalidCursorName	= GenericInvalid
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipMoveUnseen
	InPalantir		= Yes
End

CommandButton Command_SpecialAbilityDeadEye
  	Command                 = SPECIAL_POWER 
  	SpecialPower            = SpecialAbilityThranduilDeadeye
  	TextLabel               = CONTROLBAR:DeadEye
  	ButtonImage             = HSThranduilDeadeye
  	ButtonBorderType        = ACTION 
  	DescriptLabel           = CONTROLBAR:ToolTipDeadEye
  	InPalantir		= Yes
  	AutoAbility		= Yes
  	AutoDelay		= 20.0 ; this should sync with the Thranduil's hero mode effect time
  	;UnitSpecificSound      = AragornVoiceDeadEye
End





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ELVEN BUILDING PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

CommandButton Command_ConstructElvenFortress
	Command				= DOZER_CONSTRUCT
	Object				= ElvenFortress
	TextLabel			= CONTROLBAR:ConstructElvenFortress
	ButtonImage			= BEFortress
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructElvenFortress
	Radial				= Yes  
End

;//---Elven Fortress Expansions
CommandButton Command_ConstructElvenWatchtowerExpansion
	Command          	= FOUNDATION_CONSTRUCT
    Options			= CANCELABLE
	Object           	= ElvenWatchtowerExpansion
	TextLabel        	= CONTROLBAR:ConstructElvenWatchtowerExpansion
	ButtonImage      	= BEBattleTower 
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipConstructElvenWatchtowerExpansion
	Radial           	= Yes  
End

CommandButton Command_ConstructElvenVigilantEntExpansion
	Command          	= FOUNDATION_CONSTRUCT
    Options			= CANCELABLE
	Object           	= ElvenVigilantEntExpansion
	TextLabel        	= CONTROLBAR:ConstructElvenVigilantEntExpansion
	ButtonImage      	= BEEntMoot_Ents
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipConstructElvenVigilantEntExpansion
	Radial           	= Yes  
End

CommandButton Command_ConstructElvenFloodgateExpansion
	Command          	= FOUNDATION_CONSTRUCT
    Options			= CANCELABLE
	Object           	= ElvenFloodgateExpansion
	TextLabel        	= CONTROLBAR:ConstructElvenFloodgateExpansion
	ButtonImage      	= SBGood_Flood 
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipConstructElvenFloodgateExpansion
	Radial           	= Yes  
End

;//---Elven Fortress Revivables/Upgrades buttons
CommandButton Command_SelectRevivablesElvenFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesElvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesElvenFortress
	Radial                  = Yes
	CommandRangeStart	= 13	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 10
End

CommandButton Command_SelectRevivablesElvenMonumentFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesElvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesElvenFortress
	Radial                  = Yes
	CommandRangeStart	= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 11
End

CommandButton Command_SelectUpgradesElvenFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectUpgradesElvenFortress
	ButtonImage             = UCCommon_UpgradeStructureNew
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectUpgradesElvenFortress
	Radial                  = Yes
	CommandRangeStart	= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 7
End

;//--Elven Fortress Improvements
CommandButton Command_PurchaseUpgradeElvenFortressEaglesNest
	Command           	= OBJECT_UPGRADE
	Options			= CANCELABLE NEED_UPGRADE
	Upgrade           	= Upgrade_ElvenFortressEaglesNest
	NeededUpgrade	  	= Upgrade_ElvenFortressEncasingVines
	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressEaglesNest
	ButtonImage       	= BEFortress_EagleNest
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressEaglesNest
	Radial            	= Yes
	InPalantir	   	= No
	LacksPrerequisiteLabel	= TOOLTIP:LackEagleNestEncasingVines
End

CommandButton Command_PurchaseNewEagle
  	Command			= OBJECT_UPGRADE 
  	Upgrade             	= Upgrade_HasEaglesNestEagle 
  	Options			= CANCELABLE NEED_UPGRADE
  	NeededUpgrade		= Upgrade_ElvenFortressEaglesNest
  	ButtonImage		= HIGwahir
  	ButtonBorderType    	= UPGRADE 
  	Radial			= Yes
  	InPalantir	   	= Yes
  	TextLabel           	= CONTROLBAR:PurchaseElvenEagle
  	DescriptLabel       	= CONTROLBAR:ToolTipPurchaseElvenEagle
  	LacksPrerequisiteLabel	= TOOLTIP:LackEagleNest
	PurchasedLabel		= TOOLTIP:AlreadySummonedCreature
End

CommandButton Command_PurchaseUpgradeElvenFortressEncasingVines
  	Command			= OBJECT_UPGRADE
  	Upgrade			= Upgrade_ElvenFortressEncasingVinesTrigger
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressEncasingVines
  	ButtonImage       	= BEFortress_EncasingVines
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressEncasingVines
  	Radial            	= Yes
  	InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeElvenFortressMysticFountains
  	Command			= OBJECT_UPGRADE
  	Upgrade			= Upgrade_ElvenFortressMysticFountains
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressMysticFountains
  	ButtonImage       	= BEFortress_MysticFountains
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressMysticFountains
  	Radial            	= Yes
  	InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeElvenFortressEnchantedAnvil
  	Command			= OBJECT_UPGRADE
  	Upgrade			= Upgrade_ElvenFortressEnchantedAnvil
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressEnchantedAnvil
  	ButtonImage       	= BEFortress_EnchantedAnvil
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressEnchantedAnvil
  	Radial            	= Yes
  	InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeElvenFortressBlessedMist
  	Command			= OBJECT_UPGRADE
  	Upgrade			= Upgrade_ElvenFortressBlessedMist
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressBlessedMist
  	ButtonImage       	= SBGood_EnshroudingMist
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressBlessedMist
  	Radial            	= Yes
  	InPalantir	   	= No
End

CommandButton Command_PurchaseUpgradeElvenFortressCrystalMoat
  	Command			= OBJECT_UPGRADE
  	Upgrade			= Upgrade_ElvenFortressCrystalMoat
  	Options			= CANCELABLE
  	TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenFortressCrystalMoat
  	ButtonImage       	= BEFortress_CrystalMoat
  	ButtonBorderType  	= UPGRADE
  	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeElvenFortressCrystalMoat
  	Radial            	= Yes
  	InPalantir	   	= No
End

;//---------Foundation Structures-------------------
;//--Elven Structures
CommandButton Command_ConstructElvenEntMoot
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenEntMoot
  TextLabel        = CONTROLBAR:ConstructEntMoot
  ButtonImage      = BEEntMoot
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipElvenEntMoot
  Radial           = Yes  
End

CommandButton Command_ConstructEregionForge
	Command          = FOUNDATION_CONSTRUCT
	Object           = EregionForge
	TextLabel        = CONTROLBAR:ConstructEregionForge
	ButtonImage      = BEEregionForge
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipEregionForge
	Radial           = Yes  
End

CommandButton Command_ConstructElvenBarracks
	Command          = FOUNDATION_CONSTRUCT
	Object           = ElvenBarracks
	TextLabel        = CONTROLBAR:ConstructElvenBarracks
	ButtonImage      = BEElvenBarracks
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipElvenBarracks
	Radial           = Yes  
End

CommandButton Command_ConstructERElvenBarracks
  Command          	= FOUNDATION_CONSTRUCT
  Object           	= ElderRacesElvenBarracks
  TextLabel        	= CONTROLBAR:ConstructElvenBarracks
  ButtonImage      	= BEElvenBarracks
  ButtonBorderType 	= BUILD 
  DescriptLabel    	= CONTROLBAR:ToolTipElvenBarracks
  Radial           	= Yes  
End

CommandButton Command_ConstructElvenGreenPasture
  Command          	= FOUNDATION_CONSTRUCT
  Object           	= ElvenGreenPasture
  TextLabel        	= CONTROLBAR:ConstructElvenStable
  ButtonImage      	= BEGreenPasture
  ButtonBorderType 	= BUILD 
  DescriptLabel    	= CONTROLBAR:ToolTipGreenPasture
  Radial           	= Yes  
End

CommandButton Command_ConstructElvenStatue
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenStatue
  TextLabel        = CONTROLBAR:ConstructElvenStatue
  ButtonImage      = BEHeroicStatue
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HeroicStatueDescription
  Radial           = Yes  
End

CommandButton Command_ConstructElvenWatchTower
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenBattleTower
  TextLabel        = CONTROLBAR:ConstructElvenBattleTower
  ButtonImage      = BEBattleTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBattleTower
  Radial           = Yes  
End

CommandButton Command_ConstructElvenMallornTree
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenMallornTree
  TextLabel        = CONTROLBAR:ConstructElvenMallornTree
  ButtonImage      = BEMallornTree
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMallornTree
  Radial           = Yes  
End

CommandButton Command_ConstructElvenGrove
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenGrove
  TextLabel        = CONTROLBAR:ConstructElvenGrove
;  ButtonImage      = BCElvenGrove
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipElvenBarracks
  Radial           = Yes  
End

CommandButton Command_ConstructElvenMirrorOfGaladriel
  Command          = FOUNDATION_CONSTRUCT
  Object           = ElvenMirrorOfGaladriel
  TextLabel        = CONTROLBAR:ConstructGaladrielsWell
  ButtonImage      = BEMirrorGaladriel
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HearthWellDescription
  Radial           = Yes  
End



;//--Porter Structures
CommandButton Command_PorterConstructElvenEntMoot
  Command          = DOZER_CONSTRUCT
  Object           = ElvenEntMoot
  TextLabel        = CONTROLBAR:ConstructEntMoot
  ButtonImage      = BEEntMoot
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipElvenEntMoot
  Radial           = Yes  
End

CommandButton Command_PorterConstructEregionForge
	Command          = DOZER_CONSTRUCT
	Object           = EregionForge
	TextLabel        = CONTROLBAR:ConstructEregionForge
	ButtonImage      = BEEregionForge
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipEregionForge
	Radial           = Yes  
End

CommandButton Command_PurchaseUpgradeEregionForgeLevel2
   Command           = OBJECT_UPGRADE
   Object            = EregionForge
   Upgrade           = Upgrade_EregionForgeLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:PurchaseUpgradeEregionForgeLevel2
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType	= BUILD
   DescriptLabel     = CONTROLBAR:ToolTipBuildEregionForgeLevel2
   Radial            = Yes
   InPalantir        = Yes
End


CommandButton Command_PurchaseUpgradeEregionForgeLevel3
   Command           = OBJECT_UPGRADE
   Object            = EregionForge
   Upgrade           = Upgrade_EregionForgeLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:PurchaseUpgradeEregionForgeLevel3
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType	= BUILD
   DescriptLabel     = CONTROLBAR:ToolTipBuildEregionForgeLevel3
   Radial            = Yes
   InPalantir        = Yes
End


CommandButton Command_PorterConstructElvenBarracks
	Command          = DOZER_CONSTRUCT
	Object           = ElvenBarracks
	TextLabel        = CONTROLBAR:ConstructElvenBarracks
	ButtonImage      = BEElvenBarracks
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipElvenBarracks
	Radial           = Yes  
End

CommandButton Command_PurchaseUpgradeElvenBarracksLevel2
   Command           	= OBJECT_UPGRADE
   Upgrade           	= Upgrade_ElvenBarracksLevel2
   Options           	= CANCELABLE
   TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenBarracksLevel2
   ButtonImage       	= UCCommon_UpgradeStructureNew
   ButtonBorderType	= BUILD
   DescriptLabel     	= CONTROLBAR:ToolTipBuildElvenBarracksLevel2   		; Originally CONTROLBAR:ToolTipUpgradeDwarvenBarracksLevel2
   Radial            	= Yes
   InPalantir        	= Yes
End

CommandButton Command_PurchaseUpgradeElvenBarracksLevel3
   Command           	= OBJECT_UPGRADE
   Upgrade           	= Upgrade_ElvenBarracksLevel3
   Options           	= CANCELABLE
   TextLabel         	= CONTROLBAR:PurchaseUpgradeElvenBarracksLevel3
   ButtonImage      	= UCCommon_UpgradeStructureNew
   ButtonBorderType	= BUILD
   DescriptLabel     	= CONTROLBAR:ToolTipBuildElvenBarracksLevel3
   Radial            	= Yes
   InPalantir        	= Yes
End

CommandButton Command_PorterConstructElvenGreenPasture
  Command          	= DOZER_CONSTRUCT
  Object           	= ElvenGreenPasture
  TextLabel        	= CONTROLBAR:ConstructElvenStable
  ButtonImage      	= BEGreenPasture
  ButtonBorderType 	= BUILD 
  DescriptLabel    	= CONTROLBAR:ToolTipGreenPasture
  Radial           	= Yes  
End

CommandButton Command_ConstructElvenGreenPastureLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_ElvenGreenPastureLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructElvenGreenPastureLevel2Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildElvenGreenPastureLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End
 
CommandButton Command_ConstructElvenGreenPastureLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_ElvenGreenPastureLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructElvenGreenPastureLevel3Upgrade
   ButtonImage       = UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildElvenGreenPastureLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PorterConstructElvenStatue
  Command          = DOZER_CONSTRUCT
  Object           = ElvenStatue
  TextLabel        = CONTROLBAR:ConstructElvenStatue
  ButtonImage      = BEHeroicStatue
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HeroicStatueDescription
  Radial           = Yes  
End

CommandButton Command_PorterConstructElvenWatchTower
  Command          = DOZER_CONSTRUCT
  Object           = ElvenBattleTower
  TextLabel        = CONTROLBAR:ConstructElvenBattleTower
  ButtonImage      = BEBattleTower
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipBattleTower
  Radial           = Yes  
End

CommandButton Command_PorterConstructElvenMallornTree
  Command          = DOZER_CONSTRUCT
  Object           = ElvenMallornTree
  TextLabel        = CONTROLBAR:ConstructElvenMallornTree
  ButtonImage      = BEMallornTree
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMallornTree
  Radial           = Yes  
End

CommandButton Command_PorterConstructElvenGrove
  Command          = DOZER_CONSTRUCT
  Object           = ElvenGrove
  TextLabel        = CONTROLBAR:ConstructElvenGrove
;  ButtonImage      = BCElvenGrove
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipElvenBarracks
  Radial           = Yes  
End

CommandButton Command_PorterConstructElvenMirrorOfGaladriel
  Command          = DOZER_CONSTRUCT
  Object           = ElvenMirrorOfGaladriel
  TextLabel        = CONTROLBAR:ConstructGaladrielsWell
  ButtonImage      = BEMirrorGaladriel
  ButtonBorderType = BUILD 
  DescriptLabel    = OBJECT:HearthWellDescription
  Radial           = Yes  
End

;CommandButton Command_ConstructElvenFarm
;  Command          = FOUNDATION_CONSTRUCT
;  Object           = ElvenFarm
;  TextLabel        = CONTROLBAR:ConstructElvenFarm
;  ButtonImage      = BEMallornTree
;  ButtonBorderType = BUILD 
;  DescriptLabel    = CONTROLBAR:ToolTipElvenFarm
;  Radial           = Yes
;End

CommandButton Command_ConstructElvenWallHub
	Command       		= DOZER_CONSTRUCT
	Object        		= ElvenCastleWallHub
	TextLabel     		= CONTROLBAR:ConstructElvenWallHub
	ButtonImage   		= BEWall_WallHub
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:ToolTipConstructElvenWallHub
	Radial			= Yes
End


CommandButton  Command_ConstructElvenWallHubExpansion
	Command          	= FOUNDATION_CONSTRUCT
	Options			= CANCELABLE
	Object           	= ElvenCastleWallHub
	TextLabel        	= CONTROLBAR:Command_ConstructElvenWallHubExpansion
	ButtonImage      	= BEWall_WallHub
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipCommand_ConstructElvenWallHubExpansion
	Radial           	= Yes  
End

CommandButton	Command_ConstructElvenCastleWallHubExpansion
	Command          	= FOUNDATION_CONSTRUCT
	Options			= CANCELABLE
	Object           	= ElvenCastleWallHubExpansion
	TextLabel        	= CONTROLBAR:Command_ConstructElvenWallHubExpansionCastle
	ButtonImage      	= BEWall_WallHub
	ButtonBorderType 	= BUILD 
	DescriptLabel    	= CONTROLBAR:ToolTipCommand_ConstructElvenWallHubExpansion
	Radial           	= Yes  
End

CommandButton Command_SelectRevivablesHouseofElrond
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesElvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesElvenFortress
	Radial                  = Yes
	CommandRangeStart	= 2	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 8
End
CommandButton Command_SelectRevivablesThroneOfErebor
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesElvenFortress
	ButtonImage             = UCCommon_GoodHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesElvenFortress
	Radial                  = Yes
	CommandRangeStart	= 14	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount	= 7
End
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ELVEN WALL BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ElvenWallUpgradeToHub
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= ElvenCastleWallHub
	Upgrade			= Upgrade_ElvenWallHub
	TextLabel     		= CONTROLBAR:Command_ElvenWallUpgradeToHub
	ButtonImage   		= BEWall_WallHub
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_ElvenWallUpgradeToHub
	Radial			= Yes
	InPalantir	   	= Yes
End
   
CommandButton Command_ElvenWallUpgradeToRegularGate
	Command			= OBJECT_UPGRADE 
	Options			= CANCELABLE NOT_QUEUEABLE
	Object        		= ElvenCastleWallGate
	Upgrade			= Upgrade_ElvenWallRegularGate
	TextLabel     		= CONTROLBAR:Command_ElvenWallUpgradeToRegularGate
	ButtonImage   		= BEWall_MainGate
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:TooltipCommand_ElvenWallUpgradeToRegularGate
	Radial			= Yes
	InPalantir	   	= Yes
End

CommandButton Command_ElvenCastleWallHub_BeginWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= ElvenCastleWallHub
	Options			= OPTION_ONE
	TextLabel     		= CONTROLBAR:Command_ElvenCastleWallHub_BeginWallSpan
	ButtonImage   		= BEWall_BuildWall
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:TooltipCommand_ElvenCastleWallHub_BeginWallSpan
	Radial			= Yes
	InPalantir	   	= No
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; ELVEN UNIT PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ConstructElvenPorter
	Command				= UNIT_BUILD
	Object				= ElvenPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructElvenPorter
	ButtonImage			= BEFortress_Porter
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructElvenPorter
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes
End

;CommandButton Command_ConstructElvenWarriorHorde
;	Command				= UNIT_BUILD
;	Object				= RohanElvenWarriorHorde
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructElvenWarriorHorde
;	ButtonImage			= BEElvenBarracks_LorienWarrior
;	ButtonBorderType		= BUILD 
;	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenWarriorHordeWithNoPrerequisites
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy  
;	Options				= NEED_UPGRADE			
;	Upgrade				= Upgrade_StructureLevel2
;End

CommandButton Command_ConstructElvenLorienWarriorHorde
	Command				= UNIT_BUILD
	Object				= ElvenLorienWarriorHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructElvenLorienWarriorHorde
	ButtonImage			= BEElvenBarracks_LorienWarrior
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenLorienWarriorHordeWithNoPrerequisites
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy  
;	Options				= NEED_UPGRADE			
;	Upgrade				= Upgrade_StructureLevel2
End

CommandButton Command_ConstructElvenLorienArcherHorde
	Command				= UNIT_BUILD
	Object				= ElvenLorienArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructElvenLorienArcherHorde
	ButtonImage			= BEElvenBarracks_LorienArcher
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenLorienArcherHordeWithNoPrerequisites
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructElvenLindonWarriorHorde
	Command				= UNIT_BUILD
	Object				= LindonWarriorHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructElvenLindonWarriorHorde
	ButtonImage			= BEElvenBarracks_LorienWarrior
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenLindonWarriorHordeWithNoPrerequisites
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   	= GondorArcherVoiceBuy  
;	Options				= NEED_UPGRADE			
;	Upgrade				= Upgrade_StructureLevel2
End

CommandButton Command_ConstructNoldorWarriorHorde					; Added for BFME2 Expansion
	Command				= UNIT_BUILD
	Object				= NoldorWarriorHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_ElvenBarracksLevel3
	TextLabel			= CONTROLBAR:ConstructNoldorWarriorHorde
	ButtonImage			= BEElvenBarracks_NoldorWarriorsIcon
	ButtonBorderType    		= BUILD 
	DescriptLabel       		= CONTROLBAR:ToolTipBuildNoldorWarriorHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount		= Yes    
End


CommandButton Command_ConstructElvenImladrisWarriorHorde
	Command				= UNIT_BUILD
	Object				= ImladrisWarriorHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructElvenImladrisWarriorHorde
	ButtonImage			= BEElvenBarracks_LorienArcher
	ButtonBorderType	= BUILD 
	DescriptLabel		= CONTROLBAR:ToolTipBuildElvenImladrisWarriorHordeWithNoPrerequisites
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End


CommandButton Command_ConstructElvenMirkwoodArcherHorde
	Command				= UNIT_BUILD
	Object				= ElvenMirkwoodArcherHorde
	TextLabel			= CONTROLBAR:ConstructElvenMirkwoodArcherHorde
	ButtonImage			= BEElvenBarracks_MirkwoodArcher
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenMirkwoodArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	IsClickable			= Yes
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_ElvenBarracksLevel2
	ShowProductionCount		= Yes    
End

CommandButton Command_ConstructElvenMithlondSentryHorde
	Command				= UNIT_BUILD
	Object				= ElvenMithlondSentryHorde
	TextLabel			= CONTROLBAR:ConstructElvenMithlondSentryHorde
	ButtonImage			= BEElvenBarracks_MithlondSentry
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenMithlondSentryHorde
	Radial				= Yes
	InPalantir	   		= Yes
	IsClickable			= Yes
	Options				= CANCELABLE
	ShowProductionCount		= Yes      
End

CommandButton Command_ConstructElvenRivendellLancers
	Command				= UNIT_BUILD
	Object				= ElvenRivendellLancerHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:BuildElvenRivendellLancers
	ButtonImage			= BEGreenPasture_RivendellLancer
	ButtonBorderType		= BUILD													
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenRivendellLancers
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructElvenRivendellArchers					; Added for BFME2 Expansion
	Command				= UNIT_BUILD
	Object				= ElvenRivendellArcherHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_ElvenGreenPastureLevel2
	TextLabel			= CONTROLBAR:BuildElvenRivendellArchers
	ButtonImage			= BEGreenPasture_RivendellArcherIcon
	ButtonBorderType		= BUILD													
	DescriptLabel			= CONTROLBAR:ToolTipBuildElvenRivendellArchers
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End





CommandButton Command_SpecialAbilityElfCloak
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityElfCloak
  Options                 = OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
  TextLabel               = CONTROLBAR:ElvenCloak
  ButtonImage             = HPFrodoElfCloak
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipElvenCloak
;  UnitSpecificSound       = 
  InPalantir			  = Yes
End

CommandButton Command_SpecialAbilityElfCloakSam
  Command		= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityElfCloak
;  Options		= 
  TextLabel		= CONTROLBAR:ElvenCloak
  ButtonImage		= HPFrodoElfCloak
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipElvenCloak
  UnitSpecificSound	= SamVoiceElvenCloak
  InPalantir		= Yes
  AutoAbility			= Yes
  TriggerWhenReady		= Yes
End



;------------------------- ELVEN TECHNOLOGY AND UPGRADES -------------------------------

CommandButton Command_PurchaseTechnologyElvenHeavyArmor
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	Upgrade				= Upgrade_TechnologyElvenHeavyArmor 
	TextLabel			= CONTROLBAR:PurchaseTechnologyElvenHeavyArmor
	ButtonImage			= BEEregionForge_ElvenArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyElvenHeavyArmor
	Radial				= Yes
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlacksmithHeavyArmor
End

CommandButton Command_PurchaseUpgradeElvenHeavyArmor
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_ElvenHeavyArmor 
	NeededUpgrade		= Upgrade_TechnologyElvenHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeElvenHeavyArmor
	ButtonImage			= BEEregionForge_ElvenArmor
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeElvenHeavyArmor
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackElvenHeavyArmor
End

;//----------Purchased at Building------
CommandButton Command_PurchaseTechnologyElvenSilverthornArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyElvenSilverthornArrows
	NeededUpgrade		= Upgrade_EregionForgeLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyElvenSilverthornArrows
	ButtonImage			= BEEregionForge_SilverthornArrows
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyElvenSilverthornArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackSilverthornTechnology
End



;//----------Purchased on Unit-------
CommandButton Command_PurchaseUpgradeElvenSilverthornArrows
	Command					= OBJECT_UPGRADE
	Options					= NEED_UPGRADE CANCELABLE OK_FOR_MULTI_SELECT
	NeededUpgrade			= Upgrade_TechnologyElvenSilverthornArrows
	Upgrade					= Upgrade_ElvenSilverthornArrows
	TextLabel				= CONTROLBAR:PurchaseUpgradeElvenSilverthornArrows
	ButtonImage				= BEEregionForge_SilverthornArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:TooltipPurchaseUpgradeElvenSilverthornArrows
	InPalantir				= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LacksTechnologyElvenSilverthornArrows
End
;//----------Purchased on Battle Tower-----
CommandButton Command_PurchaseUpgradeElvenSilverthornTowerArrows
	Command					= OBJECT_UPGRADE
	Options					= CANCELABLE
	Upgrade					= Upgrade_ElvenSilverthornArrowsTower
	TextLabel				= CONTROLBAR:PurchaseUpgradeElvenSilverthornArrows
	ButtonImage				= BEEregionForge_SilverthornArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:TooltipPurchaseUpgradeElvenSilverthornArrowsBattleTower
	Radial				    = Yes
	InPalantir				= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LacksTechnologyElvenSilverthornArrows
End

CommandButton Command_PurchaseTechnologyElvenBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyElvenBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyElvenBasicTraining
	ButtonImage			= BEEregionForge_BannerCarrier
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseTechnologyElvenBasicTraining
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlackSmithBanner
End

CommandButton Command_PurchaseUpgradeElvenBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_ElvenBasicTraining 
	NeededUpgrade		= Upgrade_TechnologyElvenBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeElderRacesBasicTraining
	ButtonImage			= BEEregionForge_BannerCarrier
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeElderRacesBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackElderRacesBasicTraining
End

CommandButton Command_PurchaseTechnologyElvenForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyElvenForgedBlades 
	NeededUpgrade			= Upgrade_EregionForgeLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyElvenForgedBlades
	ButtonImage			= BEEregionForge_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyGondorForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2EregionForge
End

CommandButton Command_PurchaseUpgradeElvenForgedBlades
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_ElvenForgedBlades 
	NeededUpgrade		= Upgrade_TechnologyElvenForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeElvenForgedBlades
	ButtonImage			= BEEregionForge_ForgedBlades
	ButtonBorderType	= UPGRADE
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseUpgradeElvenForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackElvenForgedBlades
End

CommandButton Command_ToggleHaldirWeapon
	Command				= TOGGLE_WEAPONSET
	Options				= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel           = CONTROLBAR:ToggleElvenWarriorWeapons
	ButtonImage         = UCElven_Bow UCElven_Sword
	ButtonBorderType    = ACTION 
	DescriptLabel       = CONTROLBAR:ToolTipToggleElvenWarriorWeapons
	InPalantir			= Yes
	UnitSpecificSound   = HaldirVoiceModeBow HaldirVoiceModeSword
End

CommandButton Command_HaldirFakeLeadershipButton
  	Command                 = SPECIAL_POWER
  	SpecialPower            = SpecialAbilityFakeLeadership
  	Options					= NONPRESSABLE
  	TextLabel               = CONTROLBAR:Leadership
  	ButtonImage             = HSFaramirLeadership
  	RadiusCursorType        = TrainingRadiusCursor  	
  	ButtonBorderType        = ACTION
  	DescriptLabel           = CONTROLBAR:ToolTipHaldirLeadership
  	InPalantir				= Yes
End

CommandButton Command_HaldirGoldenArrow
	Command				= SPECIAL_POWER
	SpecialPower			= SpecialAbilityHaldirGoldenArrow
	Options				= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
	TextLabel			= CONTROLBAR:HaldirGoldenArrow
	DescriptLabel			= CONTROLBAR:ToolTipHaldirGoldenArrow
	ButtonImage			= HSHaldirGoldenArrow
	ButtonBorderType		= ACTION
	InPalantir			= Yes
	AutoAbility			= Yes
	PresetRange			= HALDIR_BOW_RANGE
	CursorName			= Bombard
	InvalidCursorName		= GenericInvalid
End

CommandButton Command_PurchaseTechnologyElderRacesMagicArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyElderRacesMagicArrows 
	TextLabel			= CONTROLBAR:PurchaseTechnologyElderRacesMagicArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyGondorForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlackSmithForgedBlades
End

CommandButton Command_PurchaseUpgradeElderRacesMagicArrows
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_ElderRacesMagicArrows 
	NeededUpgrade			= Upgrade_TechnologyElderRacesMagicArrows
	TextLabel			= CONTROLBAR:PurchaseUpgradeElderRacesMagicArrows
;	ButtonImage			= BRArmory_MagicArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeElderRacesMagicArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackElderRacesForgedBlades
End

CommandButton Command_PurchaseTechnologyElvenCloak
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyElvenCloak 
	TextLabel			= CONTROLBAR:PurchaseTechnologyElvenCloak
	ButtonImage			= HSPippinElvenCloak
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyElvenCloak
	Radial				= Yes
	InPalantir	   		= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2BlacksmithHeavyArmor
End



