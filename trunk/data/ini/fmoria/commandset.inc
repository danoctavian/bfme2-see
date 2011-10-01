; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Commandset.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ Moria structures 
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

; ------------------------------------------------------------------------------ SEE!
CommandSet WildPorterCommandSet
    1  	= Command_Stop										//This is generic!
	2  	= Command_PorterExtinguishFire							//This is generic!
	3  	= Command_PorterConstructWildLumberMill 
	4  	= Command_PorterConstructWildMineShaft
	5  	= Command_PorterConstructWildDrum	
	6  	= Command_PorterConstructWildCave
	7  	= Command_PorterConstructWildSpiderPit
	8  	= Command_PorterConstructWildWolfDen 					;Command_ConstructAngmarDen
	9  	= Command_PorterConstructWildFissure  
	10 	= Command_PorterConstructWildTreasureTrove 
	11 	= Command_PorterConstructWildWargSentry
	12 	= Command_PorterConstructWildWallHub	
	13 	= Command_PorterConstructWildSentryTower
	14 	= Command_PorterConstructWildFortress
End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildFortressCommandSet
	InitialVisible = 6
    //	MAIN MENU
	1	= Command_ConstructWildPorter
	2	= Command_SelectRevivablesWildFortress
	3	= Command_SelectUpgradesWildFortress	
	4	= Command_PurchaseNewFireDrake	
	6	= Command_Sell
    //	UPGRADES MENU
	7	= Command_PurchaseUpgradeWildFortressBatCloud
	8 	= Command_PurchaseUpgradeWildFortressStonePavement
	9	= Command_PurchaseUpgradeWildFortressRazorSpines
	10	= Command_PurchaseUpgradeWildFortressFireArrows
	11	= Command_PurchaseUpgradeWildFortressWebCocoon
	12	= Command_PurchaseUpgradeWildFortressDragonNest	
	13	= Command_SpecialAbilityBatCloud
	14	= Command_RadialBack
    //	HERO MENU
	15	= Command_RingHeroReviveSlot		// This is for the ring hero, don't remove!
	16	= Command_CreateAHeroReviveSlot	// Note we also need an extra slot for the Create A Hero!
	17	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	18	= Command_GenericReviveSlot2	;Golfimbul
	19	= Command_GenericReviveSlot3	;Bolg
	20	= Command_GenericReviveSlot4	;Azog
	21	= Command_GenericReviveSlot5	;The Great Goblin
	22	= Command_GenericReviveSlot6	;Shelob
	23	= Command_GenericReviveSlot7	;Cave Troll of Moria
	24	= Command_GenericReviveSlot8	;
	25	= Command_GenericReviveSlot9	;
	26	= Command_GenericReviveSlot10	
	27	= Command_RadialBack		 
End									 
; ------------------------------------------------------------------------------ SEE!
CommandSet WildFortressExpansionPadCornerCommandSet //Added for SEE! 4 corner plots.
	1 	= Command_ConstructWildBurrowsExpansion 
	2 	= Command_ConstructWildSpiderHolesExpansion
	3 	= Command_ConstructWildArrowDenExpansion	
	4 	= Command_ConstructWildGiantSentryExpansion
End
CommandSet WildFortressExpansionPadSideCommandSet //Added for SEE! 3 side plots.
	1 	= Command_ConstructWildBurrowsExpansion 
	2 	= Command_ConstructWildSpiderHolesExpansion
	3 	= Command_ConstructWildArrowDenExpansion	
	4 	= Command_ConstructWildGiantSentryExpansion
End
; ------------------------------------------------------------------------------
CommandSet WildFortressCommandSetAI
    //Main Menu
	1	= Command_ConstructWildPorter
	4	= Command_PurchaseNewFireDrake	
	6	= Command_Sell
    //Upgrades Menu
	7	= Command_PurchaseUpgradeWildFortressBatCloud
	8 	= Command_PurchaseUpgradeWildFortressStonePavement
	9	= Command_PurchaseUpgradeWildFortressRazorSpines
	10	= Command_PurchaseUpgradeWildFortressFireArrows
	11	= Command_PurchaseUpgradeWildFortressWebCocoon
	12	= Command_PurchaseUpgradeWildFortressDragonNest	
	13	= Command_SpecialAbilityBatCloud
	; 8	  = Command_PurchaseUpgradeWildFortressRazorSpinesAI_SEE
	; 9	  = Command_PurchaseUpgradeWildFortressFireArrowsAI_SEE
	; 10	= Command_PurchaseUpgradeWildFortressWebCocoonAI_SEE
    //Hero Menu
	15	= Command_RingHeroReviveSlot		// This is for the ring hero, don't remove.
	16	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	17	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	18	= Command_GenericReviveSlot2
	19	= Command_GenericReviveSlot3 
	20	= Command_GenericReviveSlot4
	21	= Command_GenericReviveSlot5 
End			
; ------------------------------------------------------------------------------ SEE!
CommandSet WildFortressExpansionPadSpiderHolesCommandSetAI
	1 	= Command_ConstructWildSpiderHolesExpansion // (ini/fmoria\commandbutton.inc)
End
CommandSet WildFortressExpansionPadArrowDenCommandSetAI
	1 	= Command_ConstructWildArrowDenExpansion // (ini/fmoria\commandbutton.inc)
End
CommandSet WildFortressExpansionPadGiantSentryCommandSetAI
	1 	= Command_ConstructWildGiantSentryExpansion // (ini/fmoria\commandbutton.inc)
End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildCastleWallHubCommandSet
	1 	= Command_WildCastleWallHub_BeginWallSpan	
	4 	= Command_CancelWallSpan
	6 	= Command_Sell
	7 	= Command_StartSelfRepair
End
CommandSet WildWallUpgradeNodeCommandSet
	1 	= Command_WildWallUpgradeToHub 
	2 	= Command_WildWallUpgradeToOpening
	6 	= Command_Sell
	7 	= Command_StartSelfRepair 
End

	CommandSet WildCastleWallHubCommandSetAI_SEE
	1 = Command_WildCastleWallHub_BeginWallSpanAI_SEE	
	4 = Command_CancelWallSpan
	6 = Command_Sell
	End
	CommandSet WildWallUpgradeNodeCommandSetHoleAI
	1 = Command_WildWallUpgradeToOpeningAI //Command_IsengardWallUpgradeToRegularGate
	6 = Command_Sell
	7 = Command_StartSelfRepair
	End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildLumberMillCommandSetLevel1
	1  	= Command_BuildMordorWorker
	6  	= Command_Sell
End
	
; ------------------------------------------------------------------------------ SEE!	
CommandSet WildMineShaftCommandSet
	1 	= Command_ExitGarrison
	2 	= Command_ExitGarrison
	3 	= Command_ExitGarrison
	4 	= Command_ExitGarrison
	5 	= Command_ExitGarrison
	6 	= Command_Sell
	12 	= Command_Evacuate ; Added for SEE!	
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinCaveCommandSet
	1 	= Command_ConstructGoblinArcherHorde 
	2 	= Command_ConstructGoblinFighterHorde
	3 = Command_ConstructGoblinSpearmanHorde //Command_ConstructGoblinPikemanHorde
	;4 = Command_ConstructGoblinDrummer			;Maybe scrap this one?
	4 	= Command_ConstructWildMarauderHorde		;This will require FB & HA (and thus come with it fully upgraded!)
	5 	= Command_PurchaseUpgradeWildCaveLevel2
	6 	= Command_Sell
End
CommandSet GoblinCaveCommandSetLevel2
	1 	= Command_ConstructGoblinArcherHorde 
	2 	= Command_ConstructGoblinFighterHorde
	3 = Command_ConstructGoblinSpearmanHorde //Command_ConstructGoblinPikemanHorde
	;4 = Command_ConstructGoblinDrummer
	4 	= Command_ConstructWildMarauderHorde	
	5 	= Command_PurchaseUpgradeWildCaveLevel3	
	6 	= Command_Sell	
End
CommandSet GoblinCaveCommandSetLevel3
	1 	= Command_ConstructGoblinArcherHorde
	2 	= Command_ConstructGoblinFighterHorde 
	3 	= Command_ConstructGoblinSpearmanHorde //Command_ConstructGoblinPikemanHorde
	;4 = Command_ConstructGoblinDrummer
	4 	= Command_ConstructWildMarauderHorde	
	6 	= Command_Sell
End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildSpiderPitCommandSet 			;(Troll Cave in SEE)
	1 	= Command_ConstructWildHillTrollHorde  					//Command_ConstructWildSpiderlingHorde
	2 	= Command_ConstructWildCaveTroll 							//Command_ConstructWildSpiderRiderHorde
	3 	= Command_PurchaseTechnologyWildSpiderVenom			//Command_PurchaseSpiderVenomSackScienceUpgrade
	4 	= Command_PurchaseUpgradeWildSpiderPitLevel2
	6 	= Command_Sell
End
CommandSet WildSpiderPitCommandSetLevel2
	1 	= Command_ConstructWildHillTrollHorde 					//Command_ConstructWildSpiderlingHorde
	2 	= Command_ConstructWildCaveTroll 							//Command_ConstructWildSpiderRiderHorde
	3 	= Command_PurchaseTechnologyWildSpiderVenom
	4 	= Command_PurchaseUpgradeWildSpiderPitLevel3
	6 	= Command_Sell
End
CommandSet WildSpiderPitCommandSetLevel3
	1 	= Command_ConstructWildHillTrollHorde 					//Command_ConstructWildSpiderlingHorde
	2 	= Command_ConstructWildCaveTroll 							//Command_ConstructWildSpiderRiderHorde
	3 	= Command_PurchaseTechnologyWildSpiderVenom
	6 	= Command_Sell
End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildWolfDenCommandSet
	;1 = Command_ConstructGoblinWargPack
	2 	= Command_ConstructGoblinWolfRiderHorde
	3 	= Command_ConstructGoblinWargRiderHorde
	4 	= Command_PurchaseUpgradeWildWolfDenLevel2
	6 	= Command_Sell
End
CommandSet WildWolfDenCommandSetLevel2
	;1 = Command_ConstructGoblinWargPack
	2 	= Command_ConstructGoblinWolfRiderHorde
	3 	= Command_ConstructGoblinWargRiderHorde
	4 	= Command_PurchaseUpgradeWildWolfDenLevel3
	6 	= Command_Sell
End
CommandSet WildWolfDenCommandSetLevel3
	;1 = Command_ConstructGoblinWargPack
	2 	= Command_ConstructGoblinWolfRiderHorde
	3 	= Command_ConstructGoblinWargRiderHorde
	6 	= Command_Sell
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinFissureCommandSet	
	1 	= Command_PurchaseTechnologyWildForgedBlades
	2 	= Command_PurchaseTechnologyWildHeavyArmor
	3 	= Command_PurchaseTechnologyWildFireArrows
	4 	= Command_ConstructWildMountainGiant ;Command_ConstructWildTrollSling
	5 	= Command_UpgradeWildFissureLevel2
	6 	= Command_Sell
End
CommandSet GoblinFissureCommandSetLevel2
	1 	= Command_PurchaseTechnologyWildForgedBlades
	2 	= Command_PurchaseTechnologyWildHeavyArmor
	3 	= Command_PurchaseTechnologyWildFireArrows
	4 	= Command_ConstructWildMountainGiant ;Command_ConstructWildTrollSling
	5 	= Command_PurchaseUpgradeWildFissureLevel3
	6 	= Command_Sell
End
CommandSet GoblinFissureCommandSetLevel3
	1 	= Command_PurchaseTechnologyWildForgedBlades
	2 	= Command_PurchaseTechnologyWildHeavyArmor
	3 	= Command_PurchaseTechnologyWildFireArrows 	
	4 	= Command_ConstructWildTrollSling
	5	= Command_ConstructWildMountainGiant					//TEMP for testing! Will be summon only!
	6 	= Command_Sell
End

; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤ Moria units
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinArcherCommandSet
	1 	= Command_ToggleStance
	2 	= Command_ArcherBombard
	3 	= Command_PurchaseUpgradeGenericArcherFlamingArrows //Command_PurchaseUpgradePoisonArrows 
	4 	= Command_PurchaseUpgradeWildBasicTraining 
	5 	= Command_PurchaseUpgradeWildHeavyArmor
	6 	= Command_PurchaseUpgradeWildSpiderVenomArrows //Command_PurchaseUpgradeWildFireArrows
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinFighterCommandSet
	1 	= Command_ToggleStance
	2 	= Command_PurchaseUpgradeWildForgedBlade 				; Pre-req!
	3 	= Command_PurchaseUpgradeWildBasicTraining
	4 	= Command_PurchaseUpgradeWildHeavyArmor
	5 	= Command_PurchaseUpgradeWildSpiderVenomBlades //Command_PurchaseSpiderVenomForGoblinsUpgrade //Command_PoisonedBlades
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16 	= Command_SetStanceBattle
	17 	= Command_SetStanceAggressive
	18 	= Command_SetStanceHoldGround
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinSpearmanCommandSet
	1 	= Command_ToggleStance
	2 	= Command_PurchaseUpgradeWildForgedBlade 				; Pre-req!
	3 	= Command_PurchaseUpgradeWildBasicTraining
	4 	= Command_PurchaseUpgradeWildHeavyArmor
	5 	= Command_PurchaseUpgradeWildSpiderVenomBlades //Command_PurchaseSpiderVenomForGoblinsUpgrade //Command_PoisonedBlades
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16 	= Command_SetStanceBattle
	17 	= Command_SetStanceAggressive
	18 	= Command_SetStanceHoldGround
End

; ------------------------------------------------------------------------------ SEE!
CommandSet WildMarauderCommandSet
	1  	= Command_ToggleStance
	2  	= Command_WildMarauderPorcupineFormation
	3	= Command_PurchaseUpgradeWildBasicTraining
	4 	= Command_PurchaseUpgradeWildForgedBlade				; Pre-req!
	5 	= Command_PurchaseUpgradeWildHeavyArmor				; Pre-req!
	6 	= Command_PurchaseUpgradeWildSpiderVenomBlades //Command_PurchaseUpgradeWildBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16	= Command_SetStanceBattle
	17	= Command_SetStanceAggressive
	18	= Command_SetStanceHoldGround
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinWargRiderCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWargHowl
	3 	= Command_PurchaseUpgradeWildForgedBlade 				; Pre-req!
	4 	= Command_PurchaseUpgradeWildBasicTraining	
	5 	= Command_PurchaseUpgradeWildHeavyArmor	
	;6 	= Command_PurchaseUpgradeWildSpiderVenomBlades		; Has no BC glow! But not all units needs to exploit this power anyways!
	12 	= Command_CaptureBuilding	
	13 	= Command_AttackMove	
	14	= Command_Stop	
	16 	= Command_SetStanceBattle
	17 	= Command_SetStanceAggressive
	18 	= Command_SetStanceHoldGround	
End

; ------------------------------------------------------------------------------ SEE!
CommandSet GoblinWolfRiderCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWolfHowl
	3 	= Command_PurchaseUpgradeWildForgedBlade 				; Pre-req!
	4 	= Command_PurchaseUpgradeWildBasicTraining	
	5 	= Command_PurchaseUpgradeWildHeavyArmor	
	;6 	= Command_PurchaseUpgradeWildSpiderVenomBlades		; Has no BC glow! But not all units needs to exploit this power anyways!
	12 	= Command_CaptureBuilding	
	13 	= Command_AttackMove	
	14	= Command_Stop	
	16 	= Command_SetStanceBattle
	17 	= Command_SetStanceAggressive
	18 	= Command_SetStanceHoldGround	
End

; ------------------------------------------------------------------------------ SEE!
CommandSet CaveTrollCommandSet
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3	= Command_SpecialAbilityTrollFindTree 
	4	= Command_SpecialAbilityTrollFindGoblinToThrow
	6	= Command_SpecialAbilityTrollHitDrum
	13	= Command_AttackMove
	14	= Command_Stop
	15	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

































; ------------------------------------------------------------------------------	
CommandSet ShelobCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityShelobWebbing
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WildShelobCommandSet
	1	= Command_ToggleStance
	2	= Command_WildShelobInstillTerror
	3	= Command_WildShelobPoisonedStinger
	4	= Command_WildShelobTunnel
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet AzogCommandSet				; Added for Faction Enhancement BFME2 Expansion
	1	= Command_ToggleStance
	2	= Command_AzogBrigandage
	3	= Command_AzogFury
	4	= Command_AzogCracktheWhip
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


//---------------------------
// GOBLIN/WILD
//---------------------------
CommandSet WildCorsairsOfUmbarHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeWildForgedBlade
	3	= Command_PurchaseUpgradeWildBasicTraining
	4	= Command_ToggleCorsairWeapon	
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
CommandSet WildCorsairsOfUmbarHordeFireBombCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeWildForgedBlade
	3	= Command_PurchaseUpgradeWildBasicTraining
	4	= Command_ToggleCorsairWeapon
	6	= Command_ArcherBombard
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End








CommandSet WildSpiderlingCommandSet
	 1 = Command_ToggleStance
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildSpiderlingHordeCommandSet
	 1 = Command_ToggleStance
	 2 = Command_PurchaseSpiderVenomSacksUpgrade
	 3 = Command_PurchaseUpgradeWildBasicTraining
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildSpiderlingCommandSet_Summoned
	1 = Command_ToggleStance
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildSpiderRiderCommandSet
	 1 = Command_ToggleStance
	 2 = Command_ToggleSpiderRiderWeapon
	 3 = Command_PurchaseUpgradeWildFireArrows
	 4 = Command_PurchaseUpgradeWildForgedBlade
	12 = Command_CaptureBuilding
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildSpiderRiderHordeCommandSet
	 1 = Command_ToggleStance	
	 2 = Command_ToggleSpiderRiderWeapon
	 3 = Command_PurchaseUpgradeWildFireArrows
	 4 = Command_PurchaseUpgradeWildForgedBlade
	 5 = Command_PurchaseUpgradeWildBasicTraining
	12 = Command_CaptureBuilding
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildMountainGiantCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWildMountainGiantStomp	
	3	= Command_ToggleMountainGiantRockThrow
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WildMountainGiantRockCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWildMountainGiantStomp	
	3	= Command_ToggleMountainGiantRockThrow
	4	= Command_BombardEvil
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WildMountainGiantRockCommandSetStopBombard
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWildMountainGiantStomp	
	3	= Command_ToggleMountainGiantRockThrow
	4	= Command_StopBombard
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



CommandSet WildMarauderSwordsCommandSet				; Added for Faction Enhancement BFME2 Expansion
	1  	= Command_ToggleStance
	2  	= Command_AngmarTrollChargeAttack
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WildMarauderHordeCommandSet
	1  	= Command_ToggleStance
	2  	= Command_WildMarauderPorcupineFormation
	3	= Command_PurchaseUpgradeWildForgedBlade
	4 	= Command_PurchaseUpgradeWildHeavyArmor
	5 	= Command_PurchaseUpgradeWildBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WildMarauderSwordsHordeCommandSet			; Added for Faction Enhancement BFME2 Expansion
	1  	= Command_ToggleStance
	2  	= Command_AngmarTrollChargeAttack
	3	= Command_PurchaseUpgradeWildForgedBlade
	4 	= Command_PurchaseUpgradeWildHeavyArmor
	5 	= Command_PurchaseUpgradeWildBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End










CommandSet EvilLorien_WildFortressCommandSet
	InitialVisible = 6
	//Main Menu
	1   	= Command_ConstructWildPorter
	2   	= Command_SelectRevivablesWildFortress_EvilLorien
	//3   	= Command_SelectUpgradesWildFortress	
	//4   	= Command_PurchaseNewFireDrake	
	//6	= Command_Sell

	//Upgrades Menu
	7	= Command_PurchaseUpgradeWildFortressBatCloud
	8	= Command_PurchaseUpgradeWildFortressRazorSpines
	9	= Command_PurchaseUpgradeWildFortressFireArrows
	10	= Command_PurchaseUpgradeWildFortressWebCocoon
	11	= Command_PurchaseUpgradeWildFortressDragonNest	
	12	= Command_SpecialAbilityBatCloud
	13	= Command_RadialBack

	//Hero Menu
	14	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	15	= Command_GenericReviveSlot2
	16	= Command_GenericReviveSlot3
	17	= Command_GenericReviveSlot4	
	18	= Command_RadialBack
End

;// For Adam's Evil Rivendell map
CommandSet EvilRivendell_WildFortressCommandSet
	InitialVisible = 6
	//Main Menu
	1   	= Command_ConstructWildPorter
	2   	= Command_SelectRevivablesWildFortress_EvilRivendell
	3   	= Command_SelectUpgradesWildFortress	
	4   	= Command_PurchaseNewFireDrake	
	6	= Command_Sell

	//Upgrades Menu
	7	= Command_PurchaseUpgradeWildFortressBatCloud
	8	= Command_PurchaseUpgradeWildFortressWebCocoon
	9	= Command_PurchaseUpgradeWildFortressRazorSpines
	10	= Command_PurchaseUpgradeWildFortressFireArrows
	11	= Command_PurchaseUpgradeWildFortressDragonNest	
	12	= Command_SpecialAbilityBatCloud
	13	= Command_RadialBack

	//Hero Menu
	14  	= Command_RingHeroReviveSlot		// This is for the ringhero, don't remove.
	15  	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	16	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	17	= Command_GenericReviveSlot2	
	18	= Command_GenericReviveSlot3	
	19	= Command_GenericReviveSlot4	
	20	= Command_GenericReviveSlot5	
	21	= Command_GenericReviveSlot6	
	22	= Command_GenericReviveSlot7	
	23  	= Command_GenericReviveSlot8		
	24	= Command_GenericReviveSlot9	
	25	= Command_GenericReviveSlot10	
	26  	= Command_GenericReviveSlot11	
	27  	= Command_RadialBack			
End

// ------------ EVIL GREY HAVENS CUSTOM

CommandSet EGH_WildFortressCommandSet
	InitialVisible = 6
	//Main Menu
	1   	= Command_ConstructWildPorter
	2   	= Command_SelectRevivablesWildFortress
	//3   	= Command_SelectUpgradesWildFortress	
	//4   	= Command_PurchaseNewFireDrake	
	6	= Command_Sell

	//Upgrades Menu
	//7	= Command_PurchaseUpgradeWildFortressBatCloud
	//8	= Command_PurchaseUpgradeWildFortressWebCocoon
	//9	= Command_PurchaseUpgradeWildFortressRazorSpines
	//10	= Command_PurchaseUpgradeWildFortressFireArrows
	//11	= Command_PurchaseUpgradeWildFortressDragonNest	
	//12	= Command_SpecialAbilityBatCloud
	//13	= Command_RadialBack

	//Hero Menu
	14	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	//15	= Command_GenericReviveSlot2
	//16	= Command_GenericReviveSlot3
	//17	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	//18	= Command_RingHeroReviveSlot		// This is for the ring hero, don't remove.
	19	= Command_RadialBack
End

CommandSet EGH_WildFortressExpansionPadCornerCommandSet
	1 = Command_ConstructWildArrowDenExpansion
	2 = Command_ConstructWildSpiderHolesExpansion
	//3 = Command_ConstructWildGiantSentryExpansion	
	//4 = Command_ConstructWildBurrowsExpansion
End

CommandSet EGH_WildFortressExpansionPadSideCommandSet
	1 = Command_ConstructWildArrowDenExpansion
	2 = Command_ConstructWildSpiderHolesExpansion
	//3 = Command_ConstructWildGiantSentryExpansion
	//4 = Command_ConstructWildBurrowsExpansion
End

CommandSet EGH_WildPorterCommandSet
    1  = Command_Stop
	2  = Command_PorterExtinguishFire
	3  = Command_PorterConstructWildMineShaft
	//4  = Command_PorterConstructWildLumberMill
	5  = Command_PorterConstructWildCave
	//6  = Command_PorterConstructWildSpiderPit
	7  = Command_PorterConstructWildFissure  
	8  = Command_PorterConstructWildSentryTower
	9  = Command_PorterConstructWildTreasureTrove
	10 = Command_PorterConstructWildFortress

End

CommandSet EGH_GoblinFissureCommandSet	
	1 = Command_ConstructWildMarauderHorde
	//2 = Command_ConstructGoblinTroll
	//3 = Command_ConstructWildMountainGiant
	//4 = Command_PurchaseUpgradeWildFissureLevel2
	6 = Command_Sell
End


CommandSet WildMountainGiantSentryCommandSet
	1  = Command_ToggleTrebAutoAcquire
	3  = Command_BombardEvil
	14 = Command_Stop
End

CommandSet WildMountainGiantSentryCommandSetStopBombard
	1  = Command_ToggleTrebAutoAcquire
	3  = Command_StopBombard
	14 = Command_Stop
End



CommandSet GoblinFoundationCommandSet
	1 = Command_ConstructGoblinCave
	2 = Command_ConstructGoblinFissure
End

CommandSet GoblinFoundation_IndependantCommandSet
	1 = Command_ConstructGoblinCave
	2 = Command_ConstructGoblinFissure
End







CommandSet WildSpiderPitCommandSet_ForFornost
	1 = Command_ConstructWildSpiderRiderHorde
	2 = Command_PurchaseTechnologyWildSpiderVenom ;Command_PurchaseSpiderVenomSackScienceUpgrade
	3 = Command_PurchaseUpgradeWildSpiderPitLevel2
	6 = Command_Sell
End
CommandSet WildSpiderPitCommandSetLevel2_ForFornost
	1 = Command_ConstructWildSpiderRiderHorde
	2 = Command_PurchaseTechnologyWildSpiderVenom ;Command_PurchaseSpiderVenomSackScienceUpgrade
	3 = Command_PurchaseUpgradeWildSpiderPitLevel3
	6 = Command_Sell
End
CommandSet WildSpiderPitCommandSetLevel3_ForFornost
	1 = Command_ConstructWildSpiderRiderHorde
	2 = Command_PurchaseTechnologyWildSpiderVenom ;Command_PurchaseSpiderVenomSackScienceUpgrade
	6 = Command_Sell
End



CommandSet WildTreasureTroveCommandSet
	1 = Command_PurchaseTechnologyWildBasicTraining
	;2 = Command_PurchaseTechnologyWildHeavyArmor
	;3 = Command_PurchaseTechnologyWildForgedBlades
	;4 = Command_PurchaseTechnologyWildFireArrows
	5 = Command_PurchaseUpgradeWildTreasureTroveLevel2
	6 = Command_Sell
End

CommandSet WildTreasureTroveCommandSetLevel2
	1 = Command_PurchaseTechnologyWildBasicTraining
	;2 = Command_PurchaseTechnologyWildHeavyArmor
	;3 = Command_PurchaseTechnologyWildForgedBlades
	;4 = Command_PurchaseTechnologyWildFireArrows
	5 = Command_PurchaseUpgradeWildTreasureTroveLevel3
	6 = Command_Sell
End

CommandSet WildTreasureTroveCommandSetLevel3
	1 = Command_PurchaseTechnologyWildBasicTraining
	;2 = Command_PurchaseTechnologyWildHeavyArmor
	;3 = Command_PurchaseTechnologyWildForgedBlades
	;4 = Command_PurchaseTechnologyWildFireArrows
	6 = Command_Sell	
End


CommandSet GoblinEconomyPlotCommandSet
  1  = Command_UnpackExplicitWildLumbermill
  2  = Command_ConstructGoblinCave
End


CommandSet DrogothCommandSet
	1 = Command_ToggleStance
	2 = Command_DrogothFireball
	3 = Command_DrogothWingBlast
	4 = Command_DrogothFireflight 
	5 = Command_DrogothIncinerate
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet WildMonumentFortressCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructWildPorter
	2	= Command_SelectRevivablesWildMonmentFortress
	
	//Hero Menu
	7	= Command_RingHeroReviveSlot
	8	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	9	= Command_GenericReviveSlot1	
	10	= Command_GenericReviveSlot2		
	11	= Command_GenericReviveSlot3		
	12	= Command_GenericReviveSlot4	
	13	= Command_GenericReviveSlot5		
	14	= Command_GenericReviveSlot6	
	15	= Command_GenericReviveSlot7	
	16	= Command_GenericReviveSlot8	
	17	= Command_RadialBack
End

CommandSet WildMonumentFortressRebuildCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructWildPorter
	2	= Command_SelectRevivablesWildMonmentFortress
	3	= Command_StartSelfRepair
	
	//Hero Menu
	7	= Command_RingHeroReviveSlot
	8	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	9	= Command_GenericReviveSlot1	
	10	= Command_GenericReviveSlot2		
	11	= Command_GenericReviveSlot3		
	12	= Command_GenericReviveSlot4	
	13	= Command_GenericReviveSlot5		
	14	= Command_GenericReviveSlot6	
	15	= Command_GenericReviveSlot7	
	16	= Command_GenericReviveSlot8	
	17	= Command_RadialBack
End


CommandSet WildSpellBookCommandSet
	1 = Command_SpellBookGroundView
	2 = Command_SpellBookUnitView					 			
	3 = Command_SpellBookCommanderView									
	4 = Command_SpellBookGeneralView							 	
	5 = Command_SpellBookAerialView 	 	
	
	6 = Command_SpellBookTaint
	7 = Command_SpellBookWarChant
	8 = Command_SpellBookCaveBats

	9 = Command_SpellBookUntamedAllegiance
	10 = Command_SpellBookScavenger
	11 = Command_SpellBookWildMenAllies
	12 = Command_SpellBookSpiderlingAllies
	
	13 = Command_SpellBookDarkness
	14 = Command_SpellBookAwakenWyrm
	15 = Command_SpellBookWatcherAlly
	
	16 = Command_SpellBookBalrogAlly
	17 = Command_SpellBookDragonAlly
End

CommandSet WildSpellStoreCommandSet
	1 = Command_PurchaseSpellWarChant
	2 = Command_PurchaseSpellTaint
	3 = Command_PurchaseSpellCaveBats

	4 = Command_PurchaseSpellSpiderlingAllies	; Command_PurchaseSpellWildMenAllies
	5 = Command_PurchaseSpellScavenger
	6 = Command_PurchaseSpellUntamedAllegiance
	7 = Command_PurchaseSpellWildMenAllies		; Command_PurchaseSpellSpiderlingAllies
	
	8 = Command_PurchaseSpellAwakenWyrm
	9 = Command_PurchaseSpellDarkness
	10 = Command_PurchaseSpellWatcherAlly
	
	11 = Command_PurchaseSpellDragonAlly
	12 = Command_PurchaseSpellBalrogAlly
End




CommandSet WildFireDrakeCommandSet
	1	= Command_ToggleStance
	2	= Command_FireDrakeBroodInferno //Command_FireDrakeInferno	
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildBabyDrakeCommandSet
	1	= Command_ToggleStance
	2	= Command_FireDrakeBroodInferno
	3	= Command_SpecialAbilityTerribleFury
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WildBabyDrakeHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_FireDrakeBroodInferno
;	3	= Command_SpecialAbilityFDBTerribleFury
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet WildGoblinKingCommandSet
	1	= Command_ToggleStance
	2	= Command_GoblinKingSkullTotem
	3	= Command_GoblinKingMountScorpion
	4	= Command_GoblinKingFakeLeadershipButton
	5	= Command_GoblinKingPoisonedStinger
	6	= Command_GoblinKingCallFromTheDeep
	12 	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet MountedWildGoblinKingCommandSet				; Mounted version.
	1	= Command_ToggleStance
	2	= Command_GoblinKingMountedSkullTotem
	3	= Command_GoblinKingMountScorpion
	4	= Command_GoblinKingFakeLeadershipButton
	5	= Command_GoblinKingPoisonedStinger
	6	= Command_GoblinKingCallFromTheDeep
	12 	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet CommandSetInnWildFaction
	1	= Command_ConstructWildCorsairsOfUmbarHordeInn
	2	= Command_StartSelfRepair
End




CommandSet CaveTrollRockCommandSet
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3	= Command_SpecialAbilityTrollFindTree 
	4	= Command_SpecialAbilityTrollFindGoblinToThrow
	5	= Command_BombardEvil
	13	= Command_AttackMove
	14	= Command_Stop
	16	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	17  	= Command_SetStanceBattle
	18  	= Command_SetStanceAggressive
	19  	= Command_SetStanceHoldGround
End

CommandSet CaveTrollRockCommandSetStopBombard
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3	= Command_SpecialAbilityTrollFindTree 
	4	= Command_SpecialAbilityTrollFindGoblinToThrow
	5	= Command_StopBombard
	13	= Command_AttackMove
	14	= Command_Stop
	16	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	17  	= Command_SetStanceBattle
	18  	= Command_SetStanceAggressive
	19  	= Command_SetStanceHoldGround
End


//---Goblin Giant Sentry---
CommandSet GoblinUpgradeCommandSetBuyNewGiantSentry
	1 = Command_GoblinPurchaseNewWallGiantSentry
	6 = Command_Sell	
End

