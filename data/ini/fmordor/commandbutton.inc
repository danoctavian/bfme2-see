////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Mordor//
/////////


CommandButton Command_WitchKingDismount
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityToggleMountedFromFellBeast
	TextLabel		= CONTROLBAR:TheodenMount
	Options			= NEED_TARGET_POS TOGGLE_IMAGE_ON_WEAPONSET	ON_GROUND_ONLY		; Not really image, just audio
	FlagsUsedForToggle	= MOUNTED								; What we really want is to toggle Theoden's audio if he is mounted or unmounted. Ya, this is a hack
	ButtonImage		= HSWitchKingMountDismount HSWitchKingMountDismount
	ButtonBorderType	= ACTION 
	CursorName              = EvilAbilityObj
	InvalidCursorName       = GenericInvalid 
	DescriptLabel		= CONTROLBAR:FellBeastMountTooltip
	InPalantir		= Yes
End

CommandButton Command_WitchKingToggleMounted
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityToggleMounted
	TextLabel		= CONTROLBAR:TheodenMount
	Options			= TOGGLE_IMAGE_ON_WEAPONSET	ON_GROUND_ONLY				; Not really image, just audio
	FlagsUsedForToggle	= MOUNTED								; What we really want is to toggle Theoden's audio if he is mounted or unmounted. Ya, this is a hack
	ButtonImage		= HSWitchKingMountDismount HSWitchKingMountDismount
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:GenericMountTooltip
	InPalantir		= Yes
End


; Fake button for leadership stuff.
CommandButton Command_WitchKingDreadVisage
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityFakeLeadership
	Options			= NONPRESSABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_DreadVisage
	TextLabel               = CONTROLBAR:DreadVisage
	ButtonImage             = HSNazgulDreadVisage
	RadiusCursorType        = TrainingRadiusCursor
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipWitchKingDreadVisage
	InPalantir		= Yes
End

CommandButton Command_HourOfTheWitchKing
	Command                 = SPECIAL_POWER
	SpecialPower            = SpecialAbilityCurseEnemy
	Options                 = NEED_TARGET_ENEMY_OBJECT
	TextLabel               = CONTROLBAR:HourOfTheWitchKing
	ButtonImage             = HSWitchKingHour
	CursorName              = EvilAbilityObj
	InvalidCursorName       = GenericInvalid
	ButtonBorderType        = ACTION
	DescriptLabel           = CONTROLBAR:ToolTipHourOfTheWitchKing
	InPalantir		= Yes
End

CommandButton Command_DrummerTrollLeadership
  	Command                 = NONE
  	;SpecialPower           = SpecialAbilityFakeLeadership
  	Options			= NONPRESSABLE
  	TextLabel               = CONTROLBAR:Leadership
  	ButtonImage             = UCDrummerTroll_Leadership
  	RadiusCursorType        = TrainingRadiusCursor
  	ButtonBorderType        = ACTION
  	DescriptLabel           = CONTROLBAR:DescriptionConstructMordorDrummerTrolls
  	InPalantir		= Yes
End


;CommandButton Command_MordorMumakilKnockbackAttack
;  Command                 = FIRE_WEAPON
;  WeaponSlot              = SECONDARY
;  Options                 = OK_FOR_MULTI_SELECT NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
;  ButtonImage             = SSKnifeAttack
;  CursorName              = StabAttack
;  InvalidCursorName       = StabAttackInvalid
;  ButtonBorderType        = ACTION 
;  DescriptLabel           = CONTROLBAR:ToolTipFireMordorMumakilKnockbackAttack
;End



;/// Spawn Orcs Command
CommandButton Command_SpawnOrcs
  Command           = SPECIAL_POWER
  SpecialPower      = SuperweaponSpawnOrcs
  TextLabel         = CONTROLBAR:SpawnOrcs
  ButtonImage       = SMSpawnOrcs
  ButtonBorderType  = ACTION 
  DescriptLabel     = CONTROLBAR:TooltipSpawnOrcs
End

;/// Morder worker commands
CommandButton Command_ConstructMordorBase
  Command             = FOUNDATION_CONSTRUCT
  Object              = MordorBase_DEMO
  ButtonImage         = SMSpawnOrcs ; @todo get image
  ButtonBorderType    = BUILD 
  TextLabel           = CONTROLBAR:ConstructMordorBase
  DescriptLabel       = CONTROLBAR:ToolTipConstructMordorBase
End


CommandButton Command_UnpackExplicitMordorSlaughterhouse
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackSlaughterhouse
  Object           = MordorSlaughterHouse
  ButtonImage      = BCSlaughterHouse 
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipSlaughterhouseUnpack
  Radial           = Yes
End

CommandButton Command_UnpackExplicitMordorLumbermill
  Command          = CASTLE_UNPACK_EXPLICIT_OBJECT
  TextLabel        = CONTROLBAR:UnpackLumbermill
  Object           = MordorLumberMill
  ButtonImage      = BCLumberMill 
  ButtonBorderType = BUILD  
  DescriptLabel    = CONTROLBAR:ToolTipLumberMill
  Radial           = Yes
End



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; MORDOR BUILDING PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
CommandButton Command_SelectUpgradesMordorFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectUpgradesMordorFortress
	ButtonImage             = UCCommon_UpgradeStructureNew
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectUpgradesMordorFortress
	Radial                  = Yes
	CommandRangeStart		= 7	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 7
End

CommandButton Command_SelectRevivablesMordorFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesMordorFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesMordorFortress
	Radial                  = Yes
	CommandRangeStart		= 14	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 11
End

CommandButton Command_SelectRevivablesMordorMonumentFortress
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesMordorFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesMordorFortress
	Radial                  = Yes
	CommandRangeStart		= 6	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 11
End

CommandButton Command_SelectRevivablesMordorFortress_EvilRivendell
	Command                 = PUSH_VISIBLE_COMMAND_RANGE
	TextLabel               = CONTROLBAR:SelectRevivablesMordorFortress
	ButtonImage             = UCCommon_EvilHeroes
	ButtonBorderType        = SYSTEM 
	DescriptLabel           = CONTROLBAR:ToolTipCommandSelectRevivablesMordorFortress
	Radial                  = Yes
	CommandRangeStart		= 13	//Starts its counting at 0, so command button 8 is 7
	CommandRangeCount		= 13
End

;//Mordor fortress expansions
CommandButton Command_ConstructMordorWallCatapultExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = MordorWallCatapultExpansion
	TextLabel        = CONTROLBAR:ConstructMordorWallCatapultExpansion
	ButtonImage      = BMFortress_Catapult
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructMordorWallCatapultExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructMordorBarricadeExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = MordorFortressBarricadeExpansion
	TextLabel        = CONTROLBAR:ConstructMordorBarricadeExpansion
	ButtonImage      = SBEvil_Barricade 
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructElvenWatchtowerExpansion
	Radial           = Yes  
End

CommandButton Command_ConstructMordorGateWatchersExpansion
	Command          = FOUNDATION_CONSTRUCT
    Options			 = CANCELABLE
	Object           = MordorGateWatchersExpansion
	TextLabel        = CONTROLBAR:ConstructMordorGateWatchersExpansion
	ButtonImage      = BMFortress_GateWatchers
	ButtonBorderType = BUILD 
	DescriptLabel    = CONTROLBAR:ToolTipConstructMordorGateWatchersExpansion
	Radial           = Yes  
End

;//---Mordor Fortress Improvements
CommandButton Command_PurchaseUpgradeMordorFortressFireArrows 
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressFireArrowsTrigger
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressFireArrows
	ButtonImage       	= BMOrcPit_FlamingArrows
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressFireArrows
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeMordorFortressMorgulSorcery
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressMorgulSorceryTrigger
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressMorgulSorcery
	ButtonImage       	= BMFortress_MorgulSorcery
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressMorgulSorcery
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeMordorFortressDoomPyres
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressDoomPyres
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressDoomPyres
	ButtonImage       	= BMFortress_DoomPyres
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressDoomPyres
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeMordorFortressMagmaCauldrons
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressMagmaCauldrons
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressMagmaCauldrons
	ButtonImage       	= BMFortress_MagmaCauldrons
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressMagmaCauldrons
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeMordorFortressLavaMoat
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressLavaMoat
	Options			  	= CANCELABLE
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressLavaMoat
	ButtonImage       	= BMFortress_LavaMoat
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressLavaMoat
	Radial            	= Yes
	InPalantir	   		= No
End

CommandButton Command_PurchaseUpgradeMordorFortressGorgorothSpire
	Command           	= OBJECT_UPGRADE
	Upgrade           	= Upgrade_MordorFortressGorgorothSpire
	Options			  	= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_MordorFortressMorgulSorcery
	TextLabel         	= CONTROLBAR:PurchaseUpgradeMordorFortressGorgorothSpire
	ButtonImage       	= BMFortress_GorgonothSpire
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeMordorFortressGorgorothSpire
	Radial            	= Yes
	InPalantir	   		= No
	LacksPrerequisiteLabel  =  ToolTip:LackMorgulSorcery
End

;//Mordor Fortress Special Ability Buttons
CommandButton Command_FireWeaponMordorFortressMagmaCauldrons
	Command				= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityMordorFortressMagmaCauldrons
	TextLabel			= CONTROLBAR:FireWeaponMordorFortressMagmaCauldrons
	ButtonImage			= BMFortress_UseMagmaCauldrons
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipFireWeaponMordorFortressMagmaCauldrons
	Radial				= No
	InPalantir			= Yes
End

CommandButton Command_FireWeaponMordorFortressSpireFireball
	Command				= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityGorgorothSpireFireball
	TextLabel			= CONTROLBAR:FireWeaponMordorFortressSpireFireball
	ButtonImage			= HSSarumanFireballAttack
	Options				= HIDE_WHILE_DISABLED NEED_TARGET_POS
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:ToolTipFireWeaponMordorFortressSpireFireball
	RadiusCursorType    = RainOfFireRadiusCursor
	Radial				= Yes
	InPalantir			= Yes
	AutoAbility			= Yes
End

;//Construction buttons
CommandButton Command_PorterConstructMordorFortress
  Command          = DOZER_CONSTRUCT
  Object           = MordorFortress
  TextLabel        = CONTROLBAR:ConstructMordorFortress
  ButtonImage      = BMFortress
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipConstructMordorFortress
  Radial           = Yes  
End

CommandButton Command_ConstructMordorOrcPit
  Command          = FOUNDATION_CONSTRUCT
  Object           = MordorOrcPit
  TextLabel        = CONTROLBAR:ConstructMordorOrcPit
  ButtonImage      = BMOrcPit
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorOrcPit
  Radial           = Yes  
End

;CommandButton Command_ConstructMordorOrcFletcher
;  Command          = FOUNDATION_CONSTRUCT
;  Object           = MordorOrcFletcher
;  TextLabel        = CONTROLBAR:ConstructMordorOrcFletcher
;  ButtonImage      = BMOrcPit_Archers
;  ButtonBorderType = BUILD 
;  DescriptLabel    = CONTROLBAR:ToolTipMordorOrcFletcher
;  Radial           = Yes  
;End

CommandButton Command_PorterConstructMordorTrollCage
  Command          = DOZER_CONSTRUCT
  Object           = MordorTrollCage
  TextLabel        = CONTROLBAR:ConstructMordorTrollCage
  ButtonImage      = BMTrollCages
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorTrollCage
  Radial           = Yes  
End

CommandButton Command_PorterConstructMordorSiegeWorks
  Command          = DOZER_CONSTRUCT
  Object           = MordorSiegeWorks
  TextLabel        = CONTROLBAR:ConstructMordorSiegeWorks
  ButtonImage      = BMGreatSiegeWorks
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipordorSiegeWorks
  Radial           = Yes  
End

CommandButton Command_PorterConstructMordorHaradrimPalace
  Command          = DOZER_CONSTRUCT
  Object           = MordorHaradrimPalace
  TextLabel        = CONTROLBAR:ConstructMordorHaradrimPalace
  ButtonImage      = BMHaradrimPalace
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorHaradrimPalace
  Radial           = Yes  
End

CommandButton Command_PorterConstructMumakilPen
  Command          = DOZER_CONSTRUCT
  Object           = MordorMumakilPen
  TextLabel        = CONTROLBAR:ConstructMordorMumakilPen
  ButtonImage      = BMMumakilPen
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipMordorMumakilPen
  Radial           = Yes  
End

CommandButton Command_PorterConstructMordorSlaughterHouse
  Command          = DOZER_CONSTRUCT
  Object           = MordorSlaughterHouse
  TextLabel        = CONTROLBAR:ConstructSlaughterHouse
  ButtonImage      = BCSlaughterHouse
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipFurnace
  Radial           = Yes  
End

CommandButton Command_PorterConstructMordorLumberMill
  Command          = DOZER_CONSTRUCT
  Object           = MordorLumberMill
  TextLabel        = CONTROLBAR:ConstructMordorLumberMill
  ButtonImage      = BCLumberMill
  ButtonBorderType = BUILD 
  DescriptLabel    = CONTROLBAR:ToolTipLumberMill
  Radial           = Yes  
End


CommandButton Command_UpgradeMordorTrollCageLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorTrollCage
	Upgrade				= Upgrade_MordorTrollCageLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorTrollCageLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorTrollCageLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorTrollCageLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorTrollCage
	Upgrade				= Upgrade_MordorTrollCageLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorTrollCageLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorTrollCageLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorOrcPitLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorOrcPit
	Upgrade				= Upgrade_MordorOrcPitLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorOrcPitLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorOrcPitLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorOrcPitLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorOrcPit
	Upgrade				= Upgrade_MordorOrcPitLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorOrcPitLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorOrcPitLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorMumakilPenLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorMumakilPen
	Upgrade				= Upgrade_MordorMumakilPenLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorMumakilPenLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorMumakilPenLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorMumakilPenLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorMumakilPen
	Upgrade				= Upgrade_MordorMumakilPenLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorMumakilPenLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorMumakilPenLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorSiegeWorksLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorSiegeWorks
	Upgrade				= Upgrade_MordorSiegeWorksLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorSiegeWorksLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorSiegeWorksLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorSiegeWorksLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorSiegeWorks
	Upgrade				= Upgrade_MordorSiegeWorksLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorSiegeWorksLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorSiegeWorksLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorTavernLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorTavern
	Upgrade				= Upgrade_MordorTavernLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorTavernLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorTavernLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorTavernLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorTavern
	Upgrade				= Upgrade_MordorTavernLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorTavernLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorTavernLevel3
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorHaradrimPalaceLevel2
	Command				= OBJECT_UPGRADE
	Object				= MordorHaradrimPalace
	Upgrade				= Upgrade_MordorHaradrimPalaceLevel2
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorHaradrimPalaceLevel2
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorHaradrimPalaceLevel2
	Radial				= Yes
	InPalantir			= Yes
End

CommandButton Command_UpgradeMordorHaradrimPalaceLevel3
	Command				= OBJECT_UPGRADE
	Object				= MordorHaradrimPalace
	Upgrade				= Upgrade_MordorHaradrimPalaceLevel3
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:UpgradeMordorHaradrimPalaceLevel3
	ButtonImage			= UCCommon_UpgradeStructureNew
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:TooltipUpgradeMordorHaradrimPalaceLevel3
	Radial				= Yes
	InPalantir			= Yes
End


CommandButton Command_ConstructMordorTavern
  	Command          		= DOZER_CONSTRUCT
  	Object           		= MordorTavern
  	TextLabel        		= CONTROLBAR:ConstructMordorTavern
  	ButtonImage      		= BMTavern
  	ButtonBorderType 		= BUILD 
  	DescriptLabel    		= CONTROLBAR:ToolTipMordorTavern
  	Radial           		= Yes  
End

CommandButton Command_PorterconstructMordorBattleTower
	Command				= DOZER_CONSTRUCT
	Object				= MordorBattleTower
	TextLabel			= CONTROLBAR:ConstructMordorBattleTower
	ButtonImage			= BMBattleTower
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructMordorBattleTower
	Radial				= Yes
End




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; MORDOR UNIT PRODUCTION BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
CommandButton Command_ConstructMordorPorter
	Command				= UNIT_BUILD
	Object				= MordorPorter
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorPorter
	ButtonImage			= BMFortress_Porter
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructMordorPorter
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructMordorOrcFighterHorde
	Command				= UNIT_BUILD
	Object				= MordorFighterHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorOrcFighterHorde
	ButtonImage			= BMOrcPit_Horde
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorOrcFighterHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorBlackOrcFighterHorde
	Command				= UNIT_BUILD
	Object				= MordorBlackOrcHorde
	Options				= NEED_UPGRADE CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorBlackOrcHorde
	ButtonImage			= BMOrcPit_BlackOrcIcon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorBlackOrcHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	NeededUpgrade			= Upgrade_MordorOrcPitLevel2
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorOrcArcherHorde
	Command				= UNIT_BUILD
	Object				= MordorArcherHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorOrcArcherHorde
	ButtonImage			= BMOrcPit_Archers
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorOrcArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorHaradrimArcherHorde
	Command				= UNIT_BUILD
	Object				= MordorHaradrimArcherHorde
	Options				= NEED_UPGRADE CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorHaradrimArcherHorde
	ButtonImage			= BMHaradrimPalace_Haradrim
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorHaradrimArcherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	NeededUpgrade			= Upgrade_MordorHaradrimPalaceLevel3		; Originally Level2
;   	UnitSpecificSound  		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorHaradrimRiderHorde
	Command				= UNIT_BUILD
	Object				= MordorHaradrimRiderHorde
	Options				= NEED_UPGRADE CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorHaradrimRiderHorde
	ButtonImage			= BMHaradCalvaryIcon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorHaradrimRiderHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	NeededUpgrade			= Upgrade_MordorHaradrimPalaceLevel2		
;   	UnitSpecificSound  		= GondorArcherVoiceBuy      
End


CommandButton Command_ConstructInnMordorHaradrimHorde
	Command				= UNIT_BUILD
	Object				= MordorHaradrimHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorHaradrimHorde
	ButtonImage			= BMHaradrimPalace_Haradrim
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorHaradrimHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorDrummerTroll
	Command				= UNIT_BUILD
	Object				= MordorDrummerTroll
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_MordorTrollCageLevel2
	TextLabel			= CONTROLBAR:ConstructMordorDrummerTrolls
	ButtonImage			= BMTrollCages_DrummerTroll
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructMordorDrummerTrolls
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes    
	NeededUpgrade			= Upgrade_MordorTrollCageLevel2 
End

CommandButton Command_ConstructMordorMountainTroll
	Command				= UNIT_BUILD
	Object				= MordorMountainTroll
	Options				= CANCELABLE			; Added for the BFME2 Expansion - Faction Enhancement
;	NeededUpgrade			= Upgrade_MordorTrollCageLevel2			; Added for the BFME2 Expansion - Faction Enhancement
	TextLabel			= CONTROLBAR:ConstructMordorMountainTroll
	ButtonImage			= BMTrollCages_MountainTroll
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorMountainTroll
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorAttackTroll
	Command				= UNIT_BUILD
	Object				= MordorAttackTroll
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_MordorTrollCageLevel3
	TextLabel			= CONTROLBAR:ConstructMordorAttackTroll
	ButtonImage			= BMTrollCages_AttackTroll
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorAttackTroll
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
	NeededUpgrade			= Upgrade_MordorTrollCageLevel3
End

CommandButton Command_ConstructMordorBlackRiderHorde					; Added for the BFME2 Expansion - Faction Enhancement
	Command				= UNIT_BUILD
	Object				= MordorBlackRiderHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_MordorSiegeWorksLevel3
	TextLabel			= CONTROLBAR:BlackRiderRecruit
	ButtonImage			= HIBlackRidersIcon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:LW_ToolTip_MordorBlackRiderHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End


CommandButton Command_ConstructMordorMumakil
	Command				= UNIT_BUILD
	Object				= MordorMumakil
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorMumakil
	ButtonImage			= BMMumakilPen_Mumakil
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorMumakil
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorSiegeTower
	Command				= UNIT_BUILD
	Object				= MordorSiegeTower
 	Options				= NEED_UPGRADE CANCELABLE
 	NeededUpgrade			= Upgrade_MordorSiegeWorksLevel2
	TextLabel			= CONTROLBAR:ConstructMordorSiegeTower
	ButtonImage			= BMGreatSiegeWorks_SiegeTower
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorSiegeTower
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_ConstructMordorCatapult
	Command				= UNIT_BUILD
	Object				= MordorCatapult
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade			= Upgrade_MordorSiegeWorksLevel2
	TextLabel			= CONTROLBAR:ConstructMordorCatapult
	ButtonImage			= BMGreatSiegeWorks_Catapult
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorCatapult
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

;CommandButton Command_ConstructMordorGrond
;	Command				= UNIT_BUILD
;	Object				= MordorGrond
;	Options				= NEED_UPGRADE CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructMordorGrond
;	ButtonImage			= BMGreatSiegeWorks_Grond
;	ButtonBorderType		= BUILD 
;	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorGrond
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount		= Yes
;;    UnitSpecificSound   		= GondorArcherVoiceBuy      
;End

;CommandButton Command_GrondCloud
;	Command                 	= SPECIAL_POWER 
;	SpecialPower            	= SpecialAbilityGrondCloud
;	TextLabel               	= CONTROLBAR:GrondCloud
;	ButtonImage             	= UCGrond_Cloud
;	ButtonBorderType        	= ACTION
;	DescriptLabel           	= CONTROLBAR:ToolTipSpecialAbilityGrondPower
;	InPalantir			= Yes
;End

CommandButton Command_ConstructMordorWargHorde
	Command			= UNIT_BUILD
	Object			= MordorWargHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructMordorWargHorde
	ButtonImage		= BIWargSentry
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildMordorWargHorde
	Radial			= Yes
	InPalantir		= Yes
	ShowProductionCount	= Yes    
End


CommandButton Command_ConstructMordorCorsairsOfUmbarHorde
	Command				= UNIT_BUILD
	Object				= MordorCorsairsOfUmbarHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade			= Upgrade_MordorHaradrimPalaceLevel2			; Addition from BFME2 Expansion
	TextLabel			= CONTROLBAR:ConstructMordorCorsairsOfUmbarHorde
	ButtonImage			= BMTavern_Corsair
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorCorsairsOfUmbarHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End

CommandButton Command_ConstructMordorCorsairsOfUmbarHordeInn
	Command				= UNIT_BUILD
	Object				= MordorCorsairsOfUmbarHordeInn
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorCorsairsOfUmbarHorde
	ButtonImage			= BMTavern_Corsair
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorCorsairsOfUmbarInnHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
End


CommandButton Command_ConstructEasterlingHorde
	Command				= UNIT_BUILD
	Object				= MordorEasterlingHorde
	Options				= CANCELABLE ;NEED_UPGRADE
	TextLabel			= CONTROLBAR:ConstructMordorEasterlingHorde
	ButtonImage			= BMHaradrimPalace_SoldiersRhun
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorEasterlingHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   = GondorArcherVoiceBuy      
End

CommandButton Command_BuildMordorArcher
	Command				= UNIT_BUILD
	Object				= MordorArcher
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorArcher
	ButtonImage			= BMOrcPit_Archers
	ButtonBorderType		= BUILD
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorArcher
	ShowProductionCount 		= Yes
	InPalantir	   		= Yes
End

CommandButton Command_BuildMordorWorker
	Command				= UNIT_BUILD
	Object				= MordorWorker
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:BuildMordorWorker
	ButtonImage			= BCFurnace_OrcLaborer
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorWorker
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End

CommandButton Command_BuildMordorTributeCart
	Command				= UNIT_BUILD
	Object				= MordorTributeCart
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructMordorTributeCart
	;ButtonImage			= RM_TrollPorter
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipBuildMordorTributeCart
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount		= Yes
;    UnitSpecificSound   		= GondorArcherVoiceBuy      
End	


//Mordor Catapult
CommandButton Command_MordorPurchaseNewWallCatapult
	Command					= OBJECT_UPGRADE 
	Upgrade					= Upgrade_HasWallTrebuchet
	Options					= CANCELABLE
	ButtonImage				= BMGreatSiegeWorks_Catapult
	ButtonBorderType		= UPGRADE 
	Radial					= Yes
	InPalantir	   			= Yes
	TextLabel				= CONTROLBAR:MordorCatapultUpgrade
	DescriptLabel			= CONTROLBAR:ToolTipMordorCatapultUpgrade
End


;;;;;;;;;;;;;;;; TEST COMMAND SETS BELOW ;;;;;;;;;;;;;;;;;;;;;;;;;;
CommandButton Command_ConstructMordorBaseTest
  Command             	= FOUNDATION_CONSTRUCT
  Object              	= MordorBase
  ButtonImage         	= SMSpawnOrcs ; @todo get image
  ButtonBorderType    	= BUILD 
  ; TextLabel           = CONTROLBAR:ConstructMordorBase
  ; DescriptLabel       = CONTROLBAR:ToolTipConstructMordorBase
End









;---- MORDOR ---------------------------------------------------------------------
CommandButton Command_PurchaseTechnologyMordorBasicTraining
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyMordorBasicTraining 
	NeededUpgrade			= Upgrade_MordorOrcPitLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyMordorBasicTraining
	ButtonImage			= BMOrcPit_RedEyeBanner
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyMordorBasicTraining
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2OrcPitBanner
End

CommandButton Command_PurchaseUpgradeMordorBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_MordorBasicTraining 
	NeededUpgrade			= Upgrade_TechnologyMordorBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeMordorBasicTraining
	ConflictingLabel		= CONTROLBAR:BatallionAreadyHasUpgrade
	ButtonImage			= BMOrcPit_RedEyeBanner
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeMordorBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackMordorBasicTraining
End

CommandButton Command_PurchaseTechnologyMordorFireArrows
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyMordorFireArrows 
	NeededUpgrade			= Upgrade_MordorHaradrimPalaceLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyMordorFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyMordorFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel3HaradFireArrows
End

CommandButton Command_PurchaseTechnologyMordorFireArrows_ForMirkwood
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	Upgrade				= Upgrade_TechnologyMordorFireArrows 
	TextLabel			= CONTROLBAR:PurchaseTechnologyMordorFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyMordorFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2OrcPitFireArrows
End

CommandButton Command_PurchaseUpgradeMordorFireArrows
	Command				= OBJECT_UPGRADE
	TextLabel			= CONTROLBAR:FireArrowUpgrade
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_MordorFireArrows 
	NeededUpgrade			= Upgrade_TechnologyMordorFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeMordorFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackMordorFireArrow
End

CommandButton Command_PurchaseTechnologyMordorForgedBlades
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyMordorForgedBlades 
	NeededUpgrade			= Upgrade_MordorSiegeWorksLevel2				; originally MordorTavernLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyMordorForgedBlades
	ButtonImage			= BIArmory_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyMordorForgedBlades
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2SiegeForgedBlades
End

CommandButton Command_PurchaseUpgradeMordorForgedBlades
	Command				= OBJECT_UPGRADE
	TextLabel			= CONTROLBAR:PurchaseUpgradeIsengardForgedBlades
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_MordorForgedBlades 
	NeededUpgrade			= Upgrade_TechnologyMordorForgedBlades
	ButtonImage			= BIArmory_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeMordorForgedBlades
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackMordorForgedBlades
End

CommandButton Command_PurchaseTechnologyMordorHeavyArmor
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyMordorHeavyArmor 
	NeededUpgrade			= Upgrade_MordorSiegeWorksLevel3				; Added for BFME2 Expansion
	TextLabel			= CONTROLBAR:PurchaseTechnologyMordorHeavyArmor
	ButtonImage			= BIArmory_HeavyArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyMordorHeavyArmor
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackLevel2SiegeForgedHeavyArmor
End

CommandButton Command_PurchaseUpgradeMordorHeavyArmor
	Command				= OBJECT_UPGRADE
	TextLabel			= CONTROLBAR:PurchaseUpgradeMorderHeavyArmor
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_MordorHeavyArmor 
	NeededUpgrade			= Upgrade_TechnologyMordorHeavyArmor
	ButtonImage			= BIArmory_HeavyArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeIsengardHeavyArmor
	InPalantir			= Yes
	LacksPrerequisiteLabel		= TOOLTIP:LackMordorHeavyArmor
End

CommandButton Command_BlackRiderDreadVisage
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:DreadVisage
  ButtonImage             = KUDreadVisageIcon
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipWitchKingDreadVisage
  InPalantir		  = Yes
End

CommandButton Command_BlackRiderMorgulBlade
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityBlackRiderMorgulBlade
  Options                 = NEED_TARGET_ENEMY_OBJECT ; CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:BlackRiderMorgulBlade
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid
  ButtonImage             = HSNazgulMorgulBlade
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipBlackRiderMorgulBlade
  ;UnitSpecificSound       = LurtzVoiceModeCripplingStrike
  InPalantir			  = Yes
  AutoAbility			  = Yes  
End


CommandButton Command_MountHorseBlackRider
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityToggleMounted
  TextLabel             = CONTROLBAR:TheodenMount
  Options				= TOGGLE_IMAGE_ON_WEAPONSET ON_GROUND_ONLY OK_FOR_MULTI_EXECUTE
  FlagsUsedForToggle	= MOUNTED
  ButtonImage           = HIBlackRiderMount HIBlackRiderMount
  ButtonBorderType      = ACTION 
  DescriptLabel         = CONTROLBAR:GenericMountTooltip
  InPalantir            = Yes  
  UnitSpecificSound     = HorseWhinnyForMountButton	UnmountButtonFoley
End



;CommandButton Command_ConstructMordorDozer
;	Command				= UNIT_BUILD
;	Object				= MordorDozer
;	Options				= CANCELABLE
;	TextLabel			= CONTROLBAR:ConstructMordorDozer
;	ButtonImage			= BCFarm_Peasants
;	ButtonBorderType    = BUILD 
;	DescriptLabel       = CONTROLBAR:ToolTipBuildMordorDozer
;	Radial				= Yes
;	InPalantir	   		= Yes
;	ShowProductionCount	= Yes     
;End

CommandButton Command_PorterConstructMordorOrcPit
	Command       		= DOZER_CONSTRUCT
	Object        		= MordorOrcPit
	TextLabel     		= CONTROLBAR:ConstructMordorOrcPit
	ButtonImage   		= BMOrcPit
	ButtonBorderType    = BUILD 
	DescriptLabel       = CONTROLBAR:ToolTipMordorOrcPit
	Radial				= Yes
	;InPalantir	   		= Yes
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; MORDOR STRUCTURE BUTTONS ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 







