/////////////////////
// COMMANDSET.INC //
///////////////////
//Isengard//
///////////



CommandSet WargRiderCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWargHowl
	13	= Command_AttackMove	
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet SharkuCommandSet
	1	= Command_ToggleStance
	;2	= Command_SharkuToggleMounted	
	2	= Command_SpecialAbilityTameTheBeast
	3	= Command_SpecialAbilitySharkuBloodHunt
	4	= Command_SpecialAbilitySharkuManEater
	12 	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardWildmanCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardWildmanAxeCommandSet					; BFME2 Expansion Faction Enhancement
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

 
CommandSet IsengardHordeCommandSet
	1 	= Command_ToggleFormation
End

//--------------Isengard Hordes
CommandSet IsengardFighterHordeCommandSet
	1	= Command_ToggleStance		
	2	= Command_ToggleFormationIsengardFighter
	3	= Command_PurchaseUpgradeIsengardForgedBlades
	4	= Command_PurchaseUpgradeIsengardHeavyArmor
	5	= Command_PurchaseUpgradeIsengardBasicTraining
	6	= Command_IsengardBloodThirstySacrifice
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
	
CommandSet WargRiderHordeCommandSet	
	1	= Command_ToggleStance	
	2  	= Command_SpecialAbilityWargHowl
	3 	= Command_PurchaseUpgradeIsengardForgedBlades
	4 	= Command_PurchaseUpgradeIsengardHeavyArmor
	5 	= Command_PurchaseUpgradeIsengardBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet WargPackHordeCommandSet	
	1	= Command_ToggleStance	
	2  	= Command_SpecialAbilityWargHowl
	3 	= Command_PurchaseUpgradeIsengardBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardPikemanHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_IsengardPikemanPorcupineFormation
	3	= Command_PurchaseUpgradeIsengardForgedBlades
	4	= Command_PurchaseUpgradeIsengardHeavyArmor
	5	= Command_PurchaseUpgradeIsengardBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardUrukCrossbowHordeCommandSet	
	1	= Command_ToggleStance	
	2	= Command_ArcherBombard		
	3 	= Command_PurchaseUpgradeIsengardFireArrows
	4 	= Command_PurchaseUpgradeIsengardHeavyArmor
	5 	= Command_PurchaseUpgradeIsengardBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardWildmanHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_SpecialAbilityWildmanPillage
	3 	= Command_PurchaseUpgradeIsengardTorches
	4 	= Command_PurchaseUpgradeIsengardHeavyArmor
	5 	= Command_PurchaseUpgradeIsengardBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardWildmanHordeCommandSet_Summoned
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityWildmanPillage
	12 	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardWildmanAxeHordeCommandSet				; BFME2 Expansion Faction Enhancement
	1 	= Command_ToggleStance
;	2 	= Command_PurchaseUpgradeIsengardForgedBlades		; Originally had Command_SpecialAbilityWildmanPillage
;	3 	= Command_PurchaseUpgradeIsengardHeavyArmor		; Removed as there is no visual indication.
	2 	= Command_PurchaseUpgradeIsengardBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet LurtzCommandSet
	1	= Command_ToggleStance   
	2	= Command_ToggleLurtzWeapon
	3	= Command_LurtzCripple
	4	= Command_SpecialAbilityLurtzCarnage
	5	= Command_LurtzLeadership
	6	= Command_LurtzPillage
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



//------------ISENGARD HORDES--------------
CommandSet IsengardFighterCommandSet
	1	= Command_ToggleStance
	2	= Command_IsengardBloodThirstySacrifice
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardPikemanCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardUrukCrossbowCommandSet
	1	= Command_ToggleStance		
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardBeserkerCommandSet
	1	= Command_ToggleStance	
	2	= Command_SpecialAbilityLightTorch
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardFanaticCommandSet
	1	= Command_ToggleStance
	2  	= Command_SpecialAbilityStoneWall
	3  	= Command_SpecialAbilityDeathWish
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardFanaticHordeCommandSet
	1	= Command_ToggleStance
	2  	= Command_SpecialAbilityStoneWall
	3  	= Command_SpecialAbilityDeathWish
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet IsengardBerserkerHordeCommandSet			; Added for BFME2 Expansion
	1	= Command_ToggleStance	
	2	= Command_SpecialAbilityLightTorch
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardBallistaCommandSet
	1	= Command_ToggleStance	
 	2	= Command_BombardEvil
	3	= Command_ToggleNoAutoAcquire
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardBallistaCommandSetStopBombard
	1	= Command_ToggleStance	
 	2	= Command_StopBombard
	3	= Command_ToggleNoAutoAcquire
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardBallistaWallCommandSet	
	1	= Command_ToggleStance
	2	= Command_BombardEvil
	3	= Command_ToggleNoAutoAcquire
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardBallistaWallCommandSetStopBombard
	1	= Command_ToggleStance
	2	= Command_StopBombard
	3	= Command_ToggleNoAutoAcquire
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet IsengardExplosiveMineCommandSet
	1	= Command_DeployMine
	13	= Command_AttackMove
	14	= Command_Stop
End

CommandSet IsengardDeployedMineCommandSet
	1	= Command_IsengardMineDetonate
End


CommandSet IsengardCampKeepCommandSet
	1	= Command_ConstructIsengardPorter
	2   	= Command_GenericReviveSlot1		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	3	= Command_GenericReviveSlot2		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	4	= Command_GenericReviveSlot3		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	5	= Command_GenericReviveSlot4		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	6	= Command_GenericReviveSlot5		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	7	= Command_GenericReviveSlot6		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	8	= Command_GenericReviveSlot7		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	9	= Command_GenericReviveSlot8		;Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset!
	10	= Command_StartCitadelSelfRepair
End


CommandSet IsengardSiegeLadderCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilitySiegeLadderRetract
	11  	= Command_SpecialAbilitySiegeLadderDeploy // hidden
	12 	= Command_EvacuateSiegeTower
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



CommandSet IsengardSiegeWorksCommandSetLevel1_ForMP		; DONT REMOVE THIS - FROM HERE - NEEDED FOR SKIRMISH AND MP - SSMITH 10.20.05
	1 	= Command_ConstructIsengardBatteringRam
	2 	= Command_ConstructIsengardExplosiveMine
	3 	= Command_ConstructIsengardSiegeLadder
	4 	= Command_ConstructIsengardBallista
	5 	= Command_UpgradeIsengardSiegeWorksLevel2
	6 	= Command_Sell
End

CommandSet IsengardSiegeWorksCommandSetLevel2_ForMP		
	1 	= Command_ConstructIsengardBatteringRam
	2 	= Command_ConstructIsengardExplosiveMine
	3 	= Command_ConstructIsengardSiegeLadder
	4 	= Command_ConstructIsengardBallista
	5 	= Command_UpgradeIsengardSiegeWorksLevel3
	6 	= Command_Sell
End

CommandSet IsengardSiegeWorksCommandSetLevel3_ForMP
	1 	= Command_ConstructIsengardBatteringRam
	2 	= Command_ConstructIsengardExplosiveMine
	3 	= Command_ConstructIsengardSiegeLadder
	4 	= Command_ConstructIsengardBallista
	6 	= Command_Sell
End								; DONT REMOVE THIS - TO HERE - NEEDED FOR SKIRMISH AND MP - SSMITH 10.20.05

CommandSet IsengardTavernCommandSetLevel1			; Added to Isengard for BFME2 Expansion
	1	= Command_ConstructIsengardWildmanHorde
	2	= Command_ConstructIsengardWildmanAxeHorde
;	3	= Command_PurchaseTechnologyMordorHeavyArmor
	5	= Command_UpgradeIsengardTavernLevel2
	6	= Command_Sell
End

CommandSet IsengardTavernCommandSetLevel2			; Added to Isengard for BFME2 Expansion
	1	= Command_ConstructIsengardWildmanHorde
	2	= Command_ConstructIsengardWildmanAxeHorde
;	3	= Command_PurchaseTechnologyMordorHeavyArmor
	5	= Command_UpgradeIsengardTavernLevel3
	6	= Command_Sell
End

CommandSet IsengardTavernCommandSetLevel3			; Added to Isengard for BFME2 Expansion
	1	= Command_ConstructIsengardWildmanHorde
	2	= Command_ConstructIsengardWildmanAxeHorde
;	3	= Command_PurchaseTechnologyMordorHeavyArmor
	6	= Command_Sell
End



//--------------------------------------------//
// ISENGARD STRUCTURE PRODUCTION COMMAND SETS //
//--------------------------------------------//
CommandSet IsengardLumberMillCommandSetLevel1
  1  = Command_BuildMordorWorker
  6  = Command_Sell
End

CommandSet IsengardFortressCommandSet
	InitialVisible	= 6
	//Main menu can select heroes, upgrades sub menus, or build a porter.
	1	= Command_ConstructIsengardPorter
;	2	= Command_ConstructIsengardBerserkerHorde
	2	= Command_SelectRevivablesIsengardFortress
	3	= Command_SelectUpgradesIsengardFortress
	4	= Command_IsengardWizardsTowerLightningStrike	
	6	= Command_Sell
	
		//Improvements
	7	= Command_PurchaseUpgradeIsengardFortressMurderOfCrows
	8	= Command_PurchaseUpgradeIsengardFortressBurningForges
	9	= Command_PurchaseUpgradeIsengardFortressExcavations
	10	= Command_PurchaseUpgradeIsengardFortressOrcfireMunitions
	11	= Command_PurchaseUpgradeIsengardFortressIronPlating
	12	= Command_PurchaseUpgradeIsengardFortressWizardsTower    	
	13	= Command_SpecialAbilityMurderOfCrows
	14	= Command_RadialBack

	//Heroes
	16	= Command_RingHeroReviveSlot
	17	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	18	= Command_GenericReviveSlot1 
	19	= Command_GenericReviveSlot2 
	20	= Command_GenericReviveSlot3 
	21	= Command_GenericReviveSlot4 
	22	= Command_GenericReviveSlot5
	23	= Command_GenericReviveSlot6 
	24	= Command_GenericReviveSlot7 
	25	= Command_RadialBack
End

CommandSet IsengardFortressExpansionPadCornerCommandSet
	1 = Command_ConstructIsengardTowerExpansion
	2 = Command_ConstructIsengardBallistaExpansion
	3 = Command_ConstructIsengardMineLauncherExpansion
	4 = Command_ConstructIsengardWallHubExpansion
End

CommandSet IsengardWallUpgradeNodeCommandSet
	1 = Command_IsengardWallUpgradeToHub
	2 = Command_IsengardWallUpgradeToRegularGate
	6 = Command_Sell
	7 = Command_StartSelfRepair 
	
End

CommandSet IsengardCastleWallHubCommandSet
	1 = Command_IsengardCastleWallHub_BeginWallSpan	
	4 = Command_CancelWallSpan
	6 = Command_Sell
End

CommandSet IsengardWallCliffCapCommandSet
	6 = Command_Sell
End

CommandSet IsengardUrukPitCommandSetLevel1
  	1 = Command_ConstructIsengardFighterHorde
  	2 = Command_ConstructIsengardUrukCrossbowHorde
  	3 = Command_ConstructIsengardPikemanHorde
  	4 = Command_ConstructIsengardBerserker
  	5 = Command_ConstructIsengardBerserkerHorde
  	7 = Command_UpgradeIsengardUrukPitLevel2
  	6 = Command_Sell
End

CommandSet IsengardUrukPitCommandSetLevel2
  	1 = Command_ConstructIsengardFighterHorde
  	2 = Command_ConstructIsengardUrukCrossbowHorde
  	3 = Command_ConstructIsengardPikemanHorde
  	4 = Command_ConstructIsengardBerserker
  	5 = Command_ConstructIsengardBerserkerHorde			; Changed from Berserker to BerserkerHorde
  	7 = Command_UpgradeIsengardUrukPitLevel3
  	6 = Command_Sell
End

CommandSet IsengardUrukPitCommandSetLevel3
  	1 = Command_ConstructIsengardFighterHorde
  	2 = Command_ConstructIsengardUrukCrossbowHorde
  	3 = Command_ConstructIsengardPikemanHorde
  	4 = Command_ConstructIsengardBerserker
  	5 = Command_ConstructIsengardBerserkerHorde			; Changed from Berserker to BerserkerHorde
  	6 = Command_Sell
End

; Command_ConstructIsengardSiegeLadder removed, if required add to map.ini

CommandSet IsengardSiegeWorksCommandSetLevel1
	1 = Command_ConstructIsengardBatteringRam
	2 = Command_ConstructIsengardBallista
	3 = Command_ConstructIsengardExplosiveMine		
	4 = Command_UpgradeIsengardSiegeWorksLevel2
	6 = Command_Sell
End

CommandSet IsengardSiegeWorksCommandSetLevel2
	1 = Command_ConstructIsengardBatteringRam
	2 = Command_ConstructIsengardBallista
	3 = Command_ConstructIsengardExplosiveMine
	4 = Command_UpgradeIsengardSiegeWorksLevel3
	6 = Command_Sell
End

CommandSet IsengardSiegeWorksCommandSetLevel3
	1 = Command_ConstructIsengardBatteringRam
	2 = Command_ConstructIsengardBallista
	3 = Command_ConstructIsengardExplosiveMine
	6 = Command_Sell
End

CommandSet IsengardWargPitCommandSetLevel1
  	1	= Command_ConstructIsengardWargPackHorde
  	2	= Command_ConstructIsengardWargRiderHorde
  	3 	= Command_UpgradeIsengardWargPitLevel2
  	6	= Command_Sell
End

CommandSet IsengardWargPitCommandSetLevel2
  	1	= Command_ConstructIsengardWargPackHorde
  	2	= Command_ConstructIsengardWargRiderHorde
  	3 	= Command_UpgradeIsengardWargPitLevel3
  	6	= Command_Sell
End

CommandSet IsengardWargPitCommandSetLevel3
  	1	= Command_ConstructIsengardWargPackHorde
  	2	= Command_ConstructIsengardWargRiderHorde
  	6	= Command_Sell
End

CommandSet IsengardArmoryCommandSetLevel1
	1 = Command_PurchaseTechnologyIsengardBasicTraining
	2 = Command_PurchaseTechnologyIsengardHeavyArmor
	3 = Command_PurchaseTechnologyIsengardForgedBlades
	4 = Command_PurchaseTechnologyIsengardFireArrows
	5 = Command_PurchaseUpgradeIsengardArmoryLevel2
	6 = Command_Sell
End
CommandSet IsengardArmoryCommandSetLevel2
	1 = Command_PurchaseTechnologyIsengardBasicTraining
	2 = Command_PurchaseTechnologyIsengardHeavyArmor
	3 = Command_PurchaseTechnologyIsengardForgedBlades
	4 = Command_PurchaseTechnologyIsengardFireArrows
	5 = Command_PurchaseUpgradeIsengardArmoryLevel3
	6 = Command_Sell
End
CommandSet IsengardArmoryCommandSetLevel3
	1 = Command_PurchaseTechnologyIsengardBasicTraining
	2 = Command_PurchaseTechnologyIsengardHeavyArmor
	3 = Command_PurchaseTechnologyIsengardForgedBlades
	4 = Command_PurchaseTechnologyIsengardFireArrows
	6 = Command_Sell
End

CommandSet IsengardWargSentryCommandSet
	1 = Command_PurchaseNewWargSentry
	2 = Command_IsengardWargSentryUnleash
	6 = Command_Sell
End

CommandSet IsengardEconomyPlotCommandSet
  1  = Command_UnpackExplicitIsengardLumbermill
  2  = Command_UnpackExplicitIsengardFurnace
End

CommandSet IsengardBaseDefenceFoundationCommandSet
	1 = Command_ConstructEvilSentryTower
End


CommandSet IsengardFoundationCommandSet
  3  = Command_ConstructIsengardUrukPit
  4  = Command_ConstructIsengardBattleTower
  5  = Command_ConstructIsengardWargPit
  6  = Command_ConstructIsengardArmory
  7  = Command_ConstructIsengardSiegeWorks
End


CommandSet IsengardMonumentFortressCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructIsengardPorter
	2   	= Command_SelectRevivablesIsengardMonumentFortress

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


CommandSet IsengardMonumentFortressRebuildCommandSet	
	InitialVisible	= 6	
	
	//Main Menu
	1	= Command_ConstructIsengardPorter
	2	= Command_SelectRevivablesIsengardMonumentFortress
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


CommandSet IsengardSpellBookCommandSet
	1 = Command_SpellBookWarChant
	2 = Command_SpellBookPalantirVision
	3 = Command_SpellBookCrebain

	4 = Command_SpellBookIsengardTaint
	5 = Command_SpellBookIndustry
	6 = Command_SpellBookDevastation
	7 = Command_SpellBookWildMenAllies
	
	8 = Command_SpellBookFreezingRain
	9 = Command_SpellBookFueltheFires
	10 = Command_SpellBookWatcherAlly 
	
	11 = Command_SpellBookDragonAlly
	12 = Command_SpellBookDragonStrike
End

CommandSet IsengardSpellStoreCommandSet
	1 = Command_PurchaseSpellPalantirVision
	2 = Command_PurchaseSpellWarChant
	3 = Command_PurchaseSpellCrebain

	4 = Command_PurchaseSpellWildMenAllies		; Command_PurchaseSpellDevastation
	5 = Command_PurchaseSpellIsengardTaint
	6 = Command_PurchaseSpellDevastation		; Command_PurchaseSpellWildMenAllies
	7 = Command_PurchaseSpellIndustry
	
	8 = Command_PurchaseSpellFueltheFires		; Command_PurchaseSpellWatcherAlly
	9 = Command_PurchaseSpellFreezingRain
	10 = Command_PurchaseSpellWatcherAlly		; Command_PurchaseSpellFueltheFires
	
	11 = Command_PurchaseSpellDragonAlly
	12 = Command_PurchaseSpellDragonStrike
End


//---Isengard Ballista---
CommandSet IsengardUpgradeCommandSetBuyNewBallista
	1 = Command_IsengardPurchaseNewWallBallista
	6 = Command_Sell	
End


CommandSet SarumanCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityIsengardWizardBlast
	3	= Command_SarumanFireball
	4	= Command_SpecialAbilityDominateEnemy
	5	= Command_SpecialAbilitySpeechCraft
	6	= Command_SarumanThunderBolt	
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet WormtongueCommandSet
	1	= Command_ToggleStance
	2  	= Command_SpecialAbilityWormtongueEscape
	3  	= Command_SpecialAbilityWormtongueVenomousWords
	4  	= Command_SpecialAbilityWormtongueBackstab
	5  	= Command_SpecialAbilityWormtongueCorrodeAllegiance
	12	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet IsengardPorterCommandSet
	1  = Command_Stop
	2  = Command_PorterExtinguishFire
	3  = Command_PorterConstructIsengardFurnace
	4  = Command_PorterConstructIsengardLumberMill
	5 = Command_ConstructIsengardTavern
	6  = Command_PorterConstructIsengardUrukPit
	7  = Command_PorterConstructIsengardWargPit
	8  = Command_PorterConstructIsengardSiegeWorks
	9  = Command_PorterConstructIsengardBattleTower
	10  = Command_PorterConstructIsengardWargSentry
	11 = Command_PorterConstructIsengardArmory
	12 = Command_PorterConstructIsengardWallHub

	13 = Command_PorterConstructIsengardFortress 
End


CommandSet CommandSetInnIsengardFaction
	1	= Command_ConstructInnIsengardWildmanHorde
	2	= Command_StartSelfRepair
End

