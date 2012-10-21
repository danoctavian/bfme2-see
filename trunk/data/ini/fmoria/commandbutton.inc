; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; CommandButton.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ Moria structures 
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildLumberMill
	Command				= DOZER_CONSTRUCT
	Object				= WildLumberMill
	TextLabel			= CONTROLBAR:ConstructWildLumberMill
	ButtonImage			= BCLumberMill
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipGenericLumberMill
	Radial				= Yes  
	;InPalantir			= Yes
END

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildMineShaft
	Command				= DOZER_CONSTRUCT
	Object				= WildMineShaft
	TextLabel			= CONTROLBAR:ConstructWildMineShaft
	ButtonImage			= BWAbandonedMineShaft
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildMineShaft
	Radial				= Yes  
	;InPalantir			= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildDrum
	Command				= DOZER_CONSTRUCT
	Object				= TrollDrum
	TextLabel			= CONTROLBAR:ConstructWildDrum
	ButtonImage			= BPCEttenmoorsDrum //BGHeroicStatue
	ButtonBorderType		= BUILD 
	DescriptLabel			= OBJECT:WildDrumDescription
	Radial				= Yes  
	;InPalantir			= Yes	
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildCave
	Command				= DOZER_CONSTRUCT
	Object				= GoblinCave
	TextLabel			= CONTROLBAR:ConstructWildGoblinCave
	ButtonImage			= BWCave
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildGoblinCave
	Radial				= Yes  
	;InPalantir			= Yes
END
CommandButton Command_PurchaseUpgradeWildCaveLevel2
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildCaveLevel2
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildCaveLevel2Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildCaveLevel2Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End
CommandButton Command_PurchaseUpgradeWildCaveLevel3
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildCaveLevel3
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildCaveLevel3Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildCaveLevel3Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildSpiderPit
	Command				= DOZER_CONSTRUCT
	Object				= WildSpiderPit
	TextLabel			= CONTROLBAR:ConstructWildSpiderPit
	ButtonImage			= BWSpiderPit
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildSpiderPit
	Radial				= Yes  
	;InPalantir			= Yes
END
CommandButton Command_PurchaseUpgradeWildSpiderPitLevel2
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildSpiderPitLevel2
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildSpiderPitLevel2Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildSpiderPitLevel2Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End
CommandButton Command_PurchaseUpgradeWildSpiderPitLevel3
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildSpiderPitLevel3
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildSpiderPitLevel3Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildSpiderPitLevel3Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildWolfDen
	Command				= DOZER_CONSTRUCT
	Object				= WolfWargPit
	TextLabel			= CONTROLBAR:ConstructWildWolfDen
	ButtonImage			= KUTrollDenIcon
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildWolfDen
	Radial				= Yes  
	;InPalantir			= Yes
END
CommandButton Command_PurchaseUpgradeWildWolfDenLevel2
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildWolfDenLevel2
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildWolfDenLevel2Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildWolfDenLevel2Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End
CommandButton Command_PurchaseUpgradeWildWolfDenLevel3
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildWolfDenLevel3
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildWolfDenLevel3Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildWolfDenLevel3Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildFissure
	Command				= DOZER_CONSTRUCT
	Object				= GoblinFissure
	TextLabel			= CONTROLBAR:ConstructWildGoblinFissure
	ButtonImage			= BWFissure
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildGoblinFissure
	Radial				= Yes  
	;InPalantir			= Yes
END
CommandButton Command_UpgradeWildFissureLevel2
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildFissureLevel2
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:UpgradeWildFissureLevel2
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildFissureLevel2Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End
CommandButton Command_PurchaseUpgradeWildFissureLevel3
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildFissureLevel3
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:UpgradeWildFissureLevel3
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildFissureLevel3Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildTreasureTrove
	Command				= DOZER_CONSTRUCT
	Object				= WildTreasureTrove
	TextLabel			= CONTROLBAR:ConstructWildTreasureTrove
	ButtonImage			= BWTreasureTrove
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildTreasureTrove
	Radial				= Yes
	;InPalantir			= Yes
END
CommandButton Command_PurchaseUpgradeWildTreasureTroveLevel2
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildTreasureTroveLevel2
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildTreasureTroveLevel2Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildTreasureTroveLevel2Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End
CommandButton Command_PurchaseUpgradeWildTreasureTroveLevel3
  Command           	= OBJECT_UPGRADE
  Upgrade           	= Upgrade_WildTreasureTroveLevel3
  Options				= CANCELABLE
  TextLabel         		= CONTROLBAR:ConstructWildTreasureTroveLevel3Upgrade
  ButtonImage       	= UCCommon_UpgradeStructureNew
  ButtonBorderType  		= UPGRADE
  DescriptLabel     		= CONTROLBAR:ToolTipBuildWildTreasureTroveLevel3Upgrade
  Radial            	= Yes
  InPalantir	   		= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildWargSentry
	Command				= DOZER_CONSTRUCT
	Object				= WildWargSentry
	TextLabel			= CONTROLBAR:ConstructIsengardWargSentry
	ButtonImage			= BIWargSentry
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructIsengardWargSentry
	Radial				= Yes  
End

; ------------------------------------------------------------------------------ SEE!
CommandButton  Command_PorterConstructWildWallHub
	Command          	= DOZER_CONSTRUCT
	Options			 	= CANCELABLE
	Object           	= WildCastleWallHub
	TextLabel        	= CONTROLBAR:Command_ConstructWildWallHub
	ButtonImage      	= BRBWildBuildHub //BIWall_WallHub
	ButtonBorderType 	= BUILD 
	DescriptLabel    		= CONTROLBAR:TooltipCommand_ConstructWildWallHub
	Radial           	= Yes  
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildSentryTower
	Command				= DOZER_CONSTRUCT
	Object				= WildSentryTower
	TextLabel			= CONTROLBAR:ConstructWildSentryTower
	ButtonImage			= BWSentryTower
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildSentryTower
	Radial				= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_PorterConstructWildFortress
	Command				= DOZER_CONSTRUCT
	Object				= WildFortress
	TextLabel			= CONTROLBAR:ConstructWildFortress
	ButtonImage			= BWFortress
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipConstructWildFortress
	Radial				= Yes
	;InPalantir			= Yes
END

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ Moria units 
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

; ------------------------------------------------------------------------------ SEE!
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
	ShowProductionCount	= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructGoblinFighterHorde
	Command				= UNIT_BUILD
	Object				= GoblinFighterHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade   	= Upgrade_TechnologyWildForgedBlades	
	TextLabel			= CONTROLBAR:ConstructGoblinFighterHorde
	ButtonImage			= BWCave_GoblinWarrior
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinFighterHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructGoblinSpearmanHorde
	Command				= UNIT_BUILD
	Object				= GoblinSpearmanHorde
	Options				= NEED_UPGRADE CANCELABLE
	NeededUpgrade   	= Upgrade_WildCaveLevel2 Upgrade_TechnologyWildForgedBlades
	TextLabel			= CONTROLBAR:ConstructGoblinSpearmanHorde
	ButtonImage			= WFGoblinPikeman_Build //BWCave_GoblinWarrior
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinSpearmanHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackLevel2Cave	
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructWildMarauderHorde
	Command				= UNIT_BUILD
	Object				= WildMarauderHorde
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade   	= Upgrade_WildCaveLevel3 Upgrade_TechnologyWildForgedBlades Upgrade_TechnologyWildHeavyArmor //Upgrade_TechnologyWildSpiderVenomSacks  
	TextLabel			= CONTROLBAR:ConstructWildMarauderHorde
	ButtonImage			= BWFissure_Marauder
	ButtonBorderType		= BUILD  	
	DescriptLabel			= CONTROLBAR:ToolTipBuildWildMarauderHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
	; LacksPrerequisiteLabel	= TOOLTIP:LackLevel2Cave ;; new, mod by Sûlherokhh	
	LacksPrerequisiteLabel		= TOOLTIP:LackLevelWildTreasureTrove_SEE  ;;
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructGoblinWolfRiderHorde
	Command				= UNIT_BUILD
	Object				= GoblinWolfRiderHorde
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_WildWolfDenLevel2 Upgrade_TechnologyWildForgedBlades	
	TextLabel			= CONTROLBAR:ConstructGoblinWolfRiderHorde
	ButtonImage			= WOR_WolfRider //BWSpiderPit_SpiderRider <<< Will make new button! /Naz
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildGoblinWolfRiderHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes      
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructGoblinWargRiderHorde
	Command				= UNIT_BUILD
	Object				= GoblinWargRiderHorde
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_WildWolfDenLevel3 Upgrade_TechnologyWildForgedBlades	
	TextLabel			= CONTROLBAR:ConstructGoblinWargRiderHorde
	ButtonImage			= BIWargPit_Riders //BWSpiderPit_SpiderRider <<< Will make new button! /Naz
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildGoblinWargRiderHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes      
End

;--------------------------------------------------------------------------------- really?
CommandButton Command_ConstructGoblinWolfHorde
	Command			= UNIT_BUILD
	Object			= GoblinWolfHorde
	Options			= CANCELABLE
	TextLabel		= CONTROLBAR:ConstructGoblinWolfHorde
	ButtonImage		= KUDireWolvesIcon
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildGoblinWolfHorde
	Radial			= Yes
	InPalantir		= Yes
	ShowProductionCount	= Yes    
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ConstructWildMountainGiant
	Command				= UNIT_BUILD
	Object				= WildMountainGiant
	Options				= CANCELABLE ;NEED_UPGRADE
	TextLabel			= CONTROLBAR:ConstructWildMountainGiant
	ButtonImage			= BWFissure_Giant
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildWildMountainGiant
	;NeededUpgrade		= Upgrade_WildFissureLevel3
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ToggleMountainTrollRockThrow
	Command				= TOGGLE_WEAPONSET
	Options				= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
	FlagsUsedForToggle	= WEAPONSET_TOGGLE_1
	TextLabel			= CONTROLBAR:ThrowRocks CONTROLBAR:KickAndPunch
	ButtonImage			= UCCommon_TrollThrowRock UCCommon_TrollMelee
	ButtonBorderType		= ACTION
	DescriptLabel			= CONTROLBAR:ToolTipThrowRocks CONTROLBAR:ToolTipKickAndPunch
	InPalantir			= Yes
	UnitSpecificSound		= TrollVoxFindRock TrollVoxFindRock
End
CommandButton Command_SpecialAbilityTrollFindTree
	Command				= WAKE_AUTO_PICKUP 
	TextLabel			= CONTROLBAR:TrollFindTree
	ButtonImage			= UCTroll_GetTree
	ButtonBorderType		= SYSTEM 
	DescriptLabel			= CONTROLBAR:ToolTipTrollFindTree
	Options				= OK_FOR_MULTI_SELECT OPTION_TWO ; Option flag lines up with number in AutoPickup module to differentiate multiples
	InPalantir			= Yes
	UnitSpecificSound		= TrollVoxFindTree
	DisableOnModelCondition = WEAPONSET_TOGGLE_1
End
CommandButton Command_SpecialAbilityTrollFindGoblinToThrow
  Command               = WAKE_AUTO_PICKUP 
  TextLabel              = CONTROLBAR:TrollFindGoblinToThrow
  ButtonImage           = UCTroll_GetOrc
  ButtonBorderType		= SYSTEM 
  DescriptLabel           = CONTROLBAR:ToolTipTrollFindGoblinToThrow
  Options				=  OK_FOR_MULTI_SELECT OPTION_THREE ; Option flag lines up with number in AutoPickup module to differentiate multiples
  InPalantir			= Yes
  DisableOnModelCondition 	= WEAPONSET_TOGGLE_1
End
CommandButton Command_SpecialAbilityTrollHitDrum
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityCaveTrollHitDrum
  Options               = NEED_TARGET_ALLY_OBJECT
  TextLabel              = CONTROLBAR:TrollHitDrum
  CursorName			= EvilAbilityObj
  InvalidCursorName		= GenericInvalid
  ButtonImage           = UCDrummerTroll_Leadership
  ButtonBorderType		= ACTION
  DescriptLabel           = CONTROLBAR:ToolTipTrollFindDrumToHit
  InPalantir			= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_SpecialAbilityWildMountainGiantStomp
  Command               = SPECIAL_POWER 
  SpecialPower          = SpecialAbilityWildMountainGiantStomp
  Options               = OK_FOR_MULTI_SELECT OK_FOR_MULTI_EXECUTE
  TextLabel              = CONTROLBAR:WildMountainGiantStomp
  ButtonImage           = UCGiant_Stomp
  ButtonBorderType		= ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWildMountainGiantStomp
  AutoAbility			  	= Yes
  PresetRange			= #MULTIPLY( WILD_MOUNTAIN_GIANT_STOMP_RADIUS 0.5 )
  InPalantir			= Yes
  DisableOnModelCondition 	= WEAPONSET_TOGGLE_1
  UnitSpecificSound		= MountainGiantVoxStomp
End
CommandButton Command_ToggleMountainGiantRockThrow
  Command				= TOGGLE_WEAPONSET
  Options				= TOGGLE_IMAGE_ON_WEAPONSET OK_FOR_MULTI_SELECT
  FlagsUsedForToggle		= WEAPONSET_TOGGLE_1
  TextLabel				= CONTROLBAR:ThrowRocks CONTROLBAR:KickAndPunch
  ButtonImage			= UCCommon_GiantThrowRock UCCommon_GiantMelee
  ButtonBorderType		= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipThrowRocks CONTROLBAR:ToolTipKickAndPunch
  InPalantir			= Yes
  UnitSpecificSound		= EntVoxToggleRockThrow EntVoxToggleRockThrow
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_WildShelobInstillTerror
  Command               = SPECIAL_POWER 
  SpecialPower          = SpecialAbilityScreech
  TextLabel              = CONTROLBAR:WildShelobInstillTerror
  ButtonImage           = HSShelobInstillTerror
  ButtonBorderType		= ACTION 
  DescriptLabel           = CONTROLBAR:TooltipWildShelobInstillTerror
  InPalantir			= Yes
  AutoAbility			  	= Yes
  PresetRange			= 150
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_ShelobSpiderlingAllies_SEE
  Command 				= SPECIAL_POWER
  SpecialPower 			= ShelobSpiderlingAllies_SEE
  ButtonImage 			= SBEvil_SummonSpiderlings
  ; Options = NEED_TARGET_POS
  TextLabel 				= CONTROLBAR:SummonSpiderlingAllies
  ButtonBorderType 		= ACTION
  DescriptLabel 			= CONTROLBAR:TooltipSummonSpiderlingAllies
  ; RadiusCursorType = SpiderlingsRadiusCursor
  ; CursorName = AttackObj
  ; InvalidCursorName  = GenericInvalid
  InPalantir			= Yes
  AutoAbility 			= Yes
  PresetRange 			= 150
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_WildShelobPoisonedStinger
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityWildShelobPoisonedStinger
  Options               = NEED_TARGET_ENEMY_OBJECT
  TextLabel              = CONTROLBAR:WildShelobPoisonedStinger
  CursorName			= EvilAbilityObj
  InvalidCursorName		= GenericInvalid
  ButtonImage           = HSShelobPoisonedStinger
  ButtonBorderType		= ACTION
  DescriptLabel           = CONTROLBAR:ToolTipWildShelobPoisonedStinger
  ;UnitSpecificSound       = LurtzVoiceModeCripplingStrike
  InPalantir			= Yes
  AutoAbility			  	= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_WildShelobTunnel
	Command				= SPECIAL_POWER 
	SpecialPower		= SpecialAbilityWildShelobTunnel
	Options				= NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel			= CONTROLBAR:SpecialAbilityWildShelobTunnel
	ButtonImage			= HSShelobTunnel
	ButtonBorderType		= ACTION 
	CursorName			= EvilAbilityObj  
	InvalidCursorName		= GenericInvalid
	DescriptLabel			= CONTROLBAR:ToolTipSpecialAbilityWildShelobTunnel
;	UnitSpecificSound		= 
	InPalantir			= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_SpecialAbilityWildShelobWebbing_SEE
  Command 				= SPECIAL_POWER 
  SpecialPower 			= SpecialAbilityShelobWebbing
  Options 				= NEED_TARGET_ENEMY_OBJECT ; NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel 				= CONTROLBAR:ShelobWebbing
  ButtonImage 			= HIShelob //HSShelobPoisonedStinger
  CursorName 			= EvilAbilityObj
  InvalidCursorName 		= GenericInvalid
  ButtonBorderType 		= ACTION 
  DescriptLabel 			= CONTROLBAR:ToolTipShelobWebbing
  InPalantir 			= Yes
  AutoAbility 			= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_SpecialAbilityGreatGoblinLeadership
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityFakeLeadership
  Options				= NONPRESSABLE
  TextLabel              = CONTROLBAR:GreatGoblinLeadership
  ButtonImage           = BWTreasureTrove_ScavengedArmor
  RadiusCursorType		= TrainingRadiusCursor
  ButtonBorderType		= ACTION
  DescriptLabel           = CONTROLBAR:ToolTipGreatGoblinLeadership
  InPalantir		  	= Yes
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_SpecialAbilityInServiceOfGreatGoblin
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityDominateEnemy
  Options               = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel              = CONTROLBAR:InService
  ButtonImage           = HSGreatGoblin
  RadiusCursorType		= DwarvenRichesRadiusCursor
  ButtonBorderType		= ACTION
  DescriptLabel           = CONTROLBAR:ToolTipInService
  InPalantir			= Yes
End


CommandButton Command_SpecialPowerPoisonMist
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerPoisonMist
    ButtonImage			= HSPoisonMist
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:PoisonMist
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipPoisonMist
	RadiusCursorType    = EnshroudingMistRadiusCursor
	InPalantir		= Yes
	CursorName			= AttackObj
    InvalidCursorName	= GenericInvalid
End

; ------------------------------------------------------------------------------ SEE!
CommandButton Command_BolgFakeLeadershipButton
  Command               = SPECIAL_POWER
  SpecialPower          = SpecialAbilityFakeLeadership
  Options				= NONPRESSABLE
  TextLabel             	= CONTROLBAR:BolgLeadership
  ButtonImage           = HIGoblinKing
  ButtonBorderType      	= ACTION
  DescriptLabel         	= CONTROLBAR:ToolTipBolgLeadership
  InPalantir            = Yes
End




















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



//CommandButton Command_GoblinArcherSAFireArrows
//	Command				= SPECIAL_POWER
//	SpecialPower		= SpecialAbilitySAFireArrows
//	Options				= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
//	ButtonImage			= BMOrcPit_FlamingArrows
//	CursorName			= EvilAbilityObj
//	InvalidCursorName		= GenericInvalid
//	TextLabel			= CONTROLBAR:SAFireArrows
//	DescriptLabel			= CONTROLBAR:ToolTipSAFireArrows
//	InPalantir			= Yes
//	ButtonBorderType    	= ACTION
//End

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
	ButtonImage     = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType = ACTION 
	TextLabel        = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel     = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	PresetRange		= 25
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



CommandButton Command_ConstructWildHillTrollHorde
	Command				= UNIT_BUILD
	Object				= WildHillTroll
	Options				= CANCELABLE ;NEED_UPGRADE
	;NeededUpgrade		= Upgrade_WildSpiderPitLevel2
	;NeededUpgradeAny	= Yes
	TextLabel			= CONTROLBAR:ConstructWildHillTrollHorde
	ButtonImage			= KUHillTrollIcon
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildWildHillTrollHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount	= Yes    
End

CommandButton Command_ConstructWildCaveTroll //Command_ConstructGoblinTroll
	Command				= UNIT_BUILD
	Object				= GoblinCaveTroll
	Options				= CANCELABLE NEED_UPGRADE
	NeededUpgrade		= Upgrade_WildSpiderPitLevel2	
	TextLabel			= CONTROLBAR:ConstructGoblinCaveTroll
	ButtonImage			= BWFissure_CaveTroll
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipBuildGoblinCaveTroll
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
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
  TextLabel = CONTROLBAR:PurchaseWildFortressStonePavement_SEE ;each faction will need it's own strings
  ButtonImage = BIFortressFloorMoria
  ButtonBorderType = UPGRADE
  DescriptLabel = CONTROLBAR:ToolTipPurchaseWildFortressStonePavement_SEE  ;each faction will need it's own strings
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
	LacksPrerequisiteLabel		= TOOLTIP:LackWildFortressStonePavement_SEE  ;each faction will need it's own strings
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

CommandButton Command_WildWallUpgradeToHub
	Command				= OBJECT_UPGRADE 
	Options				= CANCELABLE NOT_QUEUEABLE
	Object        		= WildCastleWallHub //IsengardCastleWallHub
	Upgrade				= Upgrade_WildWallHub //IsengardWallHub
	TextLabel     		= CONTROLBAR:Command_WildWallUpgradeToHub
	ButtonImage   		= BRBWildBuildHub //BIWall_WallHub
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:TooltipCommand_WildWallUpgradeToHub
	Radial				= Yes
	InPalantir	   		= Yes
End
CommandButton Command_WildWallUpgradeToOpening
  Command               = SELL
  TextLabel				= CONTROLBAR:Command_WildWallUpgradeToRegularGate
  ButtonImage           = BRBWildBuildWall
  ButtonBorderType       = SYSTEM
  DescriptLabel			=CONTROLBAR:TooltipCommand_WildWallUpgradeToRegularGate
  Radial				= Yes
	InPalantir	   		= No
End
CommandButton Command_WildCastleWallHub_BeginWallSpan
	Command       		= DOZER_CONSTRUCT
	Object        		= WildCastleWallHub
	Options				= OPTION_ONE
	TextLabel     		= CONTROLBAR:Command_WildCastleWallHub_BeginWallSpan
	ButtonImage   		= BRBWildBuildWall //BIWall_BuildWall
	ButtonBorderType    	= BUILD
	DescriptLabel       	= CONTROLBAR:TooltipCommand_WildCastleWallHub_BeginWallSpan
	Radial				= Yes
	InPalantir	   		= No
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






CommandButton Command_ConstructWildTrollSling
	Command				= UNIT_BUILD
	Options				= NEED_UPGRADE CANCELABLE	
	Object				= AngmarTrollSling
	NeededUpgrade		= Upgrade_WildFissureLevel3	
	TextLabel			= CONTROLBAR:ConstructAngmarTrollSling
	ButtonImage			= KUTrollSlingIcon
	ButtonBorderType    	= BUILD 
	DescriptLabel       	= CONTROLBAR:ToolTipBuildAngmarTrollSling
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackLevel3Fissure	
End




























; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ Moria technology 
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

CommandButton Command_PurchaseTechnologyWildBasicTraining		//"MORIA BANNER CARRIER"
	Command				= PLAYER_UPGRADE
	Options				= CANCELABLE
	Upgrade				= Upgrade_TechnologyWildBasicTraining 
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildBasicTraining
	ButtonImage			= BWTreasureTrove_BannerCarrier
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyWildBasicTraining
	Radial				= Yes
	InPalantir			= Yes
End
CommandButton Command_PurchaseTechnologyWildForgedBlades		//"SCAVENGED WEAPONS"
	Command				= PLAYER_UPGRADE 
	Options				= CANCELABLE 
	Upgrade				= Upgrade_TechnologyWildForgedBlades
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildForgedBlades
	ButtonImage			= BWTreasureTrove_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyWildForgedBlades
	Radial				= Yes
	InPalantir			= Yes
End
CommandButton Command_PurchaseTechnologyWildHeavyArmor		//"SCAVENGED ARMOR"
	Command				= PLAYER_UPGRADE 
	Options				= NEED_UPGRADE CANCELABLE 
	Upgrade				= Upgrade_TechnologyWildHeavyArmor
	NeededUpgrade		= Upgrade_StructureLevel2
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildHeavyArmor
	ButtonImage			= BWTreasureTrove_ScavengedArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyWildHeavyArmor
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackLevel2Fissure
End
CommandButton Command_PurchaseTechnologyWildSpiderVenom 		//"VENOM SACS"
	Command           	= PLAYER_UPGRADE
	Options			  	= NEED_UPGRADE CANCELABLE	
	Upgrade           	= Upgrade_TechnologyWildSpiderVenomSacks //Upgrade_WildSpiderVenomSackScience
	TextLabel         	= CONTROLBAR:PurchaseTechnologyWildSpiderVenomSacks
	ButtonImage       	= BWSpiderPit_VenomSacks
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseTechnologyWildSpiderVenomSacks
	NeededUpgrade	  	= Upgrade_StructureLevel3 Upgrade_TechnologyWildBasicTraining
	Radial            	= Yes
	InPalantir	      	= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackVenomSacks
End
CommandButton Command_PurchaseTechnologyWildFireArrows		//"FLAMING ARROWS" (New generic ability!)
	Command				= PLAYER_UPGRADE
	Options				= NEED_UPGRADE CANCELABLE
	Upgrade				= Upgrade_TechnologyWildFireArrows 
	NeededUpgrade		= Upgrade_StructureLevel3
	TextLabel			= CONTROLBAR:PurchaseTechnologyWildFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseTechnologyWildFireArrows
	Radial				= Yes
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackLevel3Fissure
End

; ------------------------------------------------------------------------------

CommandButton Command_PurchaseUpgradeWildBasicTraining
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildBasicTraining 
	NeededUpgrade		= Upgrade_TechnologyWildBasicTraining
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildBasicTraining
	ButtonImage			= BWTreasureTrove_BannerCarrier
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeWildBasicTraining
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackWildBasicTraining
End
CommandButton Command_PurchaseUpgradeWildForgedBlade	//Pre-req for Goblin Warriors & Spearmen
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildForgedBlades
	NeededUpgrade		= Upgrade_TechnologyWildForgedBlades
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildForgedBlade
	ButtonImage			= BWTreasureTrove_ForgedBlades
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeWildForgedBlade
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackWildForgedBlades
End
CommandButton Command_PurchaseUpgradeWildHeavyArmor
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildHeavyArmor
	NeededUpgrade		= Upgrade_TechnologyWildHeavyArmor
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildHeavyArmor
	ButtonImage			= BWTreasureTrove_ScavengedArmor
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeWildHeavyArmor
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackWildHeavyArmor
End
CommandButton Command_PurchaseUpgradeWildSpiderVenomBlades ;This is for Warriors!
	Command           	= OBJECT_UPGRADE
	Options			  	= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE	
	Upgrade           	= Upgrade_WildSpiderVenomSacks
	NeededUpgrade	  	= Upgrade_TechnologyWildSpiderVenomSacks Upgrade_ObjectLevel2//WildSpiderVenomSackScience
	TextLabel         	= CONTROLBAR:PurchaseUpgradeWildVenomBlade
	ButtonImage       	= BWTreasureTrove_PoisonBlades
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeWildVenomBlade
	InPalantir	      	= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackVenomSacksTechnology
End
CommandButton Command_PurchaseUpgradeWildSpiderVenomArrows ;This is for Archers!
	Command           	= OBJECT_UPGRADE
	Options			  	= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE	
	Upgrade           	= Upgrade_WildSpiderVenomSacks
	NeededUpgrade	  	= Upgrade_TechnologyWildSpiderVenomSacks  Upgrade_ObjectLevel2//WildSpiderVenomSackScience
	TextLabel         	= CONTROLBAR:PurchaseUpgradeWildVenomArrow
	ButtonImage       	= BWTreasureTrove_PoisonArrows
	ButtonBorderType  	= UPGRADE
	DescriptLabel     	= CONTROLBAR:ToolTipPurchaseUpgradeWildVenomArrow
	InPalantir	      	= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackVenomSacksTechnology
End
CommandButton Command_PurchaseUpgradeWildFireArrows	
	Command				= OBJECT_UPGRADE
	Options				= NEED_UPGRADE OK_FOR_MULTI_SELECT CANCELABLE
	Upgrade				= Upgrade_WildFireArrows
	NeededUpgrade		= Upgrade_TechnologyWildFireArrows
	TextLabel			= CONTROLBAR:PurchaseUpgradeWildFireArrows
	ButtonImage			= BMOrcPit_FlamingArrows
	ButtonBorderType		= UPGRADE
	DescriptLabel			= CONTROLBAR:ToolTipPurchaseUpgradeWildFireArrows
	InPalantir			= Yes
	LacksPrerequisiteLabel	= TOOLTIP:LackWildFireArrows
End

; ------------------------------------------------------------------------------






























CommandButton Command_PurchaseSpiderVenomSacksUpgrade //OBSOLETE! (This was used for Spider Riders)
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

//CommandButton Command_PoisonedBlades //NOT USED IN SEE!
//	Command				= SPECIAL_POWER
//	Options				= OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
//	SpecialPower		= SpecialAbilityGoblinFighterPoisonedBlades
//	TextLabel			= CONTROLBAR:SpecialAbilityGoblinFighterPoisonedBlades
//	DescriptLabel			= CONTROLBAR:ToolTipSpecialAbilityGoblinFighterPoisonedBlades
//	InPalantir			= Yes
//	ButtonBorderType		= ACTION
//	ButtonImage			= BWTreasureTrove_PoisonBlades
//End
//CommandButton Command_GoblinArcherPoisonArrows //NOT USED IN SEE!
//	Command			= SPECIAL_POWER
//	SpecialPower		= SpecialAbilityPoisonArrows
//	Options			= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT OK_FOR_MULTI_EXECUTE OK_FOR_MULTI_SELECT
//	ButtonImage		= BWTreasureTrove_PoisonArrows
//	CursorName		= EvilAbilityObj
//	InvalidCursorName	= GenericInvalid
//	TextLabel		= CONTROLBAR:PoisonArrows
//	DescriptLabel		= CONTROLBAR:ToolTipPoisonArrows
//	InPalantir		= Yes
//	ButtonBorderType    	= ACTION
//End

CommandButton Command_ConstructGoblinCave //???
	Command				= DOZER_CONSTRUCT
	Object				= GoblinCave
	TextLabel			= CONTROLBAR:ConstructGoblinCave
	ButtonImage			= BWCave
	ButtonBorderType		= BUILD											
	DescriptLabel			= CONTROLBAR:ToolTipGoblinCave
	Radial				= Yes  
End
CommandButton Command_ConstructGoblinFissure //???
	Command				= DOZER_CONSTRUCT
	Object				= GoblinFissure
	TextLabel			= CONTROLBAR:ConstructGoblinFissure
	ButtonImage			= BWFissure
	ButtonBorderType		= BUILD 
	DescriptLabel			= CONTROLBAR:ToolTipGoblinFissure
	Radial				= Yes  
End

;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------

; Tier 1
CommandButton Command_SpellBookMoriaDeepDrums
	Command			= SPELL_BOOK
    SpecialPower		= SpellBookMoriaDeepDrums
	Options			= NEED_TARGET_POS
	TextLabel		= CONTROLBAR:MoriaSpellbookDeepDrums
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookDeepDrums
    ButtonImage			= ZZButtonImage
	RadiusCursorType    	= WarChantRadiusCursor
End

CommandButton Command_PurchaseSpellMoriaDeepDrums
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE
    ButtonImage			= ZZButtonImage
    Science				= SCIENCE_MoriaDeepDrums
    TextLabel			= CONTROLBAR:MoriaSpellbookDeepDrums
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookDeepDrums
End

CommandButton Command_SpellBookMoriaCaveBats
	Command				= SPELL_BOOK
    SpecialPower		= SpellBookMoriaCaveBats
    ButtonImage			= SBEvil_CaveBats
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:MoriaSpellbookCaveBats
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookCaveBats
	RadiusCursorType    = CaveBatsRadiusCursor
End

CommandButton Command_PurchaseSpellMoriaCaveBats
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE
    ButtonImage			= SBEvil_CaveBats
    Science				= SCIENCE_MoriaCaveBats
    TextLabel			= CONTROLBAR:MoriaSpellbookCaveBats
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookCaveBats
End

; Tier 2
CommandButton Command_SpellBookMoriaCalltheHorde
	Command				= SPELL_BOOK
	TextLabel			= CONTROLBAR:MoriaSpellbookCallTheHorde
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookCallTheHorde   
	SpecialPower		= SpellBookMoriaCallTheHorde
	ButtonImage			= ZZButtonImage
End

CommandButton Command_PurchaseSpellMoriaCalltheHorde
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= ZZButtonImage 
    Science				= SCIENCE_MoriaCallTheHorde
    TextLabel			= CONTROLBAR:MoriaSpellbookCallTheHorde
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookCallTheHorde
End

CommandButton Command_SpellBookMoriaScurry
	Command = SPELL_BOOK
	Options				= NONPRESSABLE
	TextLabel			= CONTROLBAR:MoriaSpellbookScurry
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookScurry  
	SpecialPower		= SpellBookMoriaScurry
    ButtonImage			= ZZButtonImage 
End

CommandButton Command_PurchaseSpellMoriaScurry
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= ZZButtonImage
    Science				= SCIENCE_MoriaScurry
    TextLabel			= CONTROLBAR:MoriaSpellbookScurry
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookScurry
	
	;; Trigger this command button when the purchase science is activated
	CommandTrigger		= Command_SpellBookMoriaScurry
End

CommandButton Command_SpellBookMoriaUntamedAllegiance
	Command				= SPELL_BOOK
	SpecialPower		= SpellBookMoriaUntamedAllegiance
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:MoriaSpellbookUntamedAllegiance
	ButtonImage			= HSSharkuTameBeast
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:ToolTipMoriaSpellbookUntamedAllegiance
	RadiusCursorType	= UntamedAllegianceRadiusCursor
End

CommandButton Command_PurchaseSpellMoriaUntamedAllegiance
	ButtonImage			= HSSharkuTameBeast
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBA
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE
    ButtonImage			= HSSharkuTameBeast
    Science				= SCIENCE_MoriaUntamedAllegiance
    TextLabel			= CONTROLBAR:MoriaSpellbookUntamedAllegiance
	DescriptLabel		= CONTROLBAR:ToolTipMoriaSpellbookUntamedAllegiance
End

CommandButton Command_SpellBookMoriaShelob
	Command				= SPELL_BOOK
	SpecialPower		= SpellBookMoriaShelob
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:MoriaSpellbookShelob
	ButtonImage			= HIShelob
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:ToolTipMoriaSpellbookShelob
	RadiusCursorType	= SpiderlingsRadiusCursor
    CursorName          = AttackObj
    InvalidCursorName   = GenericInvalid  
End

CommandButton Command_PurchaseSpellMoriaShelob
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= HIShelob
	Science				= SCIENCE_MoriaShelob
    TextLabel			= CONTROLBAR:MoriaSpellbookShelob
	DescriptLabel		= CONTROLBAR:ToolTipMoriaSpellbookShelob
End

CommandButton Command_SpellBookMoriaDarkness
	Command			= SPELL_BOOK
    SpecialPower		= SpellBookMoriaDarkness
    ButtonImage			= SBEvil_Darkness
	TextLabel		= CONTROLBAR:MoriaSpellbookDarkness
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookDarkness
End

CommandButton Command_PurchaseSpellMoriaDarkness
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= SBEvil_Darkness 
    Science				= SCIENCE_MoriaDarkness
    TextLabel			= CONTROLBAR:MoriaSpellbookDarkness
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookDarkness
End

CommandButton Command_SpellBookMoriaWatcher
	Command				= SPELL_BOOK
	SpecialPower		= SpellBookMoriaWatcher
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:MoriaSpellbookWatcher
	ButtonImage			= SBEvil_SummonWatcher
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookWatcher
	RadiusCursorType	= SummonWatcherRadiusCursor
    CursorName          = AttackObj
    InvalidCursorName   = GenericInvalid  
End

CommandButton Command_PurchaseSpellMoriaWatcher
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= SBEvil_SummonWatcher ;Needs replacement
	Science				= SCIENCE_MoriaWatcher
    TextLabel			= CONTROLBAR:MoriaSpellbookWatcher
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookWatcher
End

CommandButton Command_SpellBookMoriaStoneGiants
	Command			= SPELL_BOOK
	SpecialPower		= SpellBookMoriaStoneGiants
	Options			= NEED_TARGET_POS 
	TextLabel		= CONTROLBAR:MoriaSpellbookStoneGiants
	ButtonImage		= KUSummonGiantIcon
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookStoneGiants
	RadiusCursorType	= SummonGiantsRadiusCursor
    CursorName          = AttackObj
    InvalidCursorName   = GenericInvalid  
End

CommandButton Command_PurchaseSpellMoriaStoneGiants
	Command				= PURCHASE_SCIENCE
	ButtonBorderType	= UPGRADE 
    ButtonImage			= KUSummonGiantIcon 
    Science				= SCIENCE_MoriaStoneGiants
    TextLabel			= CONTROLBAR:MoriaSpellbookStoneGiants
	DescriptLabel		= CONTROLBAR:TooltipMoriaSpellbookStoneGiants
End
