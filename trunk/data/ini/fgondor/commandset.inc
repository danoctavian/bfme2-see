/////////////////////
// COMMANDSET.INC //
///////////////////
//Gondor//
/////////



CommandSet GondorFighterCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorRangerCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16 	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorCaptainCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorArcherCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorCavalryCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorTrebuchetCommandSet
	1 	= Command_ToggleStance
	2 	= Command_ToggleTrebAutoAcquire
	3 	= Command_PurchaseUpgradeGondorFireStones
	4 	= Command_Bombard
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorTrebuchetCommandSetStopBombard
	1 	= Command_ToggleStance
	2 	= Command_ToggleTrebAutoAcquire
	3 	= Command_PurchaseUpgradeGondorFireStones
	4	= Command_StopBombard
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorTrebuchetWallCommandSet
	1 	= Command_ToggleTrebAutoAcquire
	2 	= Command_PurchaseUpgradeGondorFireStones
	3 	= Command_Bombard
	14	= Command_Stop
End

CommandSet GondorTrebuchetWallCommandSetStopBombard
	1 	= Command_ToggleTrebAutoAcquire
	2 	= Command_PurchaseUpgradeGondorFireStones
	3 	= Command_StopBombard
	14	= Command_Stop
End

CommandSet GondorTrebuchetFortressWallCommandSet
	1 	= Command_ToggleTrebAutoAcquire	
	2 	= Command_Bombard
	14	= Command_Stop
End

CommandSet GondorTrebuchetFortressWallCommandSetStopBombard
	1 	= Command_ToggleTrebAutoAcquire	
	2 	= Command_StopBombard
	14	= Command_Stop
End

//--------------Gondor Hordes
CommandSet GondorFighterHordeCommandSet
	1 	= Command_ToggleStance	
	2	= Command_ToggleFormationGondorFighter
	3 	= Command_PurchaseUpgradeGondorForgedBlades
	4	= Command_PurchaseUpgradeGondorHeavyArmor
	5	= Command_PurchaseUpgradeGondorBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorFighterHordeCommandSet_Summoned
	1	= Command_ToggleStance
	2	= Command_ToggleFormationGondorFighter
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorTowerShieldGuardCommandSet
	1 	= Command_ToggleStance		
	2	= Command_TowerGuardPorcupineFormation
	3 	= Command_PurchaseUpgradeGondorForgedBlades
	4 	= Command_PurchaseUpgradeGondorHeavyArmor
	5 	= Command_PurchaseUpgradeGondorBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorTowerShieldGuardCommandSet_Summoned
	1	= Command_ToggleStance
	2	= Command_TowerGuardPorcupineFormation
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorRangerHordeCommandSet
	1 	= Command_ToggleStance
	2	= Command_ArcherBombard
	3	= Command_MenLongShotAbility
	4 	= Command_PurchaseUpgradeGondorFireArrows
	5 	= Command_PurchaseUpgradeGondorBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorRangerHordeCommandSet_Summoned
	1	= Command_ToggleStance
	2	= Command_ArcherBombard
	3	= Command_MenLongShotAbility
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet GondorArcherHordeCommandSet
	1 	= Command_ToggleStance	
	2	= Command_ArcherBombard
	3 	= Command_PurchaseUpgradeGondorFireArrows
	4 	= Command_PurchaseUpgradeGondorHeavyArmor
	5 	= Command_PurchaseUpgradeGondorBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorArcherHordeCommandSet_Summoned
	1	= Command_ToggleStance	
	2	= Command_ArcherBombard
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorKnightHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_PurchaseUpgradeGondorForgedBlades
	3 	= Command_PurchaseUpgradeGondorHeavyArmor
	4 	= Command_PurchaseUpgradeGondorBasicTraining
	12  	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorKnightHordeCommandSet_Summoned
	1	= Command_ToggleStance
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



CommandSet BoromirCommandSet
	1	= Command_ToggleStance
	2 	= Command_SpecialAbilityHornOfGondor
	3 	= Command_SpecialAbilityBoromirForGondor
	4 	= Command_SpecialAbilityCaptainOfGondorBoromir	
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


//Men of the West Blacksmith
CommandSet GondorForgeCommandSet
	1 	= Command_PurchaseTechnologyGondorBasicTraining 
	2 	= Command_PurchaseTechnologyGondorForgedBlades
	3 	= Command_PurchaseTechnologyGondorHeavyArmor
	4 	= Command_PurchaseUpgradeGondorForgeLevel2
	6 	= Command_Sell
End

CommandSet GondorForgeCommandSetLevel2
	1 	= Command_PurchaseTechnologyGondorBasicTraining 
	2 	= Command_PurchaseTechnologyGondorForgedBlades
	3 	= Command_PurchaseTechnologyGondorHeavyArmor
	4 	= Command_PurchaseUpgradeGondorForgeLevel3
	6 	= Command_Sell
End

CommandSet GondorForgeCommandSetLevel3
	1 	= Command_PurchaseTechnologyGondorBasicTraining 
	2 	= Command_PurchaseTechnologyGondorForgedBlades
	3 	= Command_PurchaseTechnologyGondorHeavyArmor
	6 	= Command_Sell
End


CommandSet GondorKnightsofDolCommandSet
	1	= Command_ToggleStance
	2  	= Command_KnightsofDolInspiration
	3  	= Command_ChargeofGlory
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet GondorKnightsofDolHordeCommandSet
	1	= Command_ToggleStance
	2  	= Command_KnightsofDolInspiration
	3  	= Command_ChargeofGlory
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



//--------------------------------------//
//; GONDOR UNIT PRODUCTION COMMAND SETS //
//--------------------------------------// 
CommandSet GondorBarracksCommandSet
  	1	= Command_ConstructGondorFighterHorde
	2 	= Command_ConstructRohanSpearmenHorde
  	3	= Command_ConstructGondorTowerShieldGuardHorde
  	4 	= Command_PurchaseUpgradeGondorBarracksLevel2
  	6	= Command_Sell
End

CommandSet GondorBarracksCommandSetLevel2
  	1	= Command_ConstructGondorFighterHorde
	2 	= Command_ConstructRohanSpearmenHorde
  	3	= Command_ConstructGondorTowerShieldGuardHorde
  	4 	= Command_PurchaseUpgradeGondorBarracksLevel3
  	6	= Command_Sell
End

CommandSet GondorBarracksCommandSetLevel3
  	1	= Command_ConstructGondorFighterHorde
	2 	= Command_ConstructRohanSpearmenHorde
  	3	= Command_ConstructGondorTowerShieldGuardHorde
  	6	= Command_Sell
End

CommandSet GondorBarracksRohanAlliesUpgradedCommandSet
  	1	= Command_ConstructGondorFighterHorde
  	2	= Command_ConstructGondorTowerShieldGuardHorde
  	3 	= Command_ConstructRohanRohirrimHorde
  	6	= Command_Sell
End

CommandSet GondorArcheryCommandSet
	1 	= Command_ConstructGondorArcherHorde
	2 	= Command_ConstructGondorRangerHorde
	3 	= Command_PurchaseTechnologyGondorFireArrows
	4 	= Command_PurchaseUpgradeGondorArcheryRangeLevel2
	6 	= Command_Sell
End

CommandSet GondorArcheryCommandSetLevel2
	1 	= Command_ConstructGondorArcherHorde
	2 	= Command_ConstructGondorRangerHorde
	3 	= Command_PurchaseTechnologyGondorFireArrows
    	4 	= Command_PurchaseUpgradeGondorArcheryRangeLevel3
	6 	= Command_Sell
End

CommandSet GondorArcheryCommandSetLevel3
	1 	= Command_ConstructGondorArcherHorde
	2 	= Command_ConstructGondorRangerHorde
	3 	= Command_PurchaseTechnologyGondorFireArrows
	6 	= Command_Sell   
End

CommandSet GondorArcheryCommandSetForFornost
	1 	= Command_ConstructFornostGondorRangerHorde
	6 	= Command_Sell
End

CommandSet GondorForbiddenPoolCommandSet
	1	= Command_ConstructGondorRangerHorde
End

CommandSet GondorForbiddenPoolForGoodIthilienCommandSet
	1	= Command_ConstructGondorRangerHordeForGoodIthilien
	2	= Command_ConstructGondorFighterHordeForGoodIthilien
	3	= Command_ConstructGondorArcherHordeForGoodIthilien
	4	= Command_ConstructGondorKnightHordeForGoodIthilien
	5	= Command_PurchaseTechnologyGondorFireArrowsForGoodIthilien

End

CommandSet GondorStablesCommandSet
	1	 = Command_ConstructGondorKnightHorde
	2	 = Command_ConstructRohanRohirrimHorde
	3	 = Command_ConstructGondorKnightsofDolHorde
	4	 = Command_PurchaseUpgradeGondorStableLevel2
	6	 = Command_Sell
End

CommandSet GondorStablesCommandSetLevel2
	1	 = Command_ConstructGondorKnightHorde
	2	 = Command_ConstructRohanRohirrimHorde
	3	 = Command_ConstructGondorKnightsofDolHorde
	4	 = Command_PurchaseUpgradeGondorStableLevel3
	6	 = Command_Sell
End

CommandSet GondorStablesCommandSetLevel3
	1	 = Command_ConstructGondorKnightHorde
	2	 = Command_ConstructRohanRohirrimHorde
	3	 = Command_ConstructGondorKnightsofDolHorde
	6	 = Command_Sell
End

CommandSet GondorWorkshopCommandSet
	1	= Command_ConstructGondorTrebuchet
	2	= Command_PurchaseTechnologyGondorFireStones
	3	= Command_PurchaseUpgradeGondorWorkshopLevel2
	6	= Command_Sell
End

CommandSet GondorWorkshopCommandSetLevel2
	1	= Command_ConstructGondorTrebuchet
	2	= Command_PurchaseTechnologyGondorFireStones
	3	= Command_PurchaseUpgradeGondorWorkshopLevel3
	6	= Command_Sell
End

CommandSet GondorWorkshopCommandSetLevel3
	1	= Command_ConstructGondorTrebuchet
	2	= Command_PurchaseTechnologyGondorFireStones
	6	= Command_Sell
End



CommandSet GondorWhiteTowerCommandSet
	1	= Command_ConstructGondorPeasant
End

CommandSet GondorStoneWorkerCommandSet
	1	= Command_UpgradeNumenorStonework
	2	= Command_UpgradeBattleTowersToUseFireArrows
	6	= Command_Sell
End

// The thought on the order here is that some are Radial only, and some are palantir only.  The palantir can only see 1-6,
// but the radial system ignores the numbers and just fills in buttons.  So the palantir-only ones get 1-6, and the rest pile up behind.
CommandSet MenFortressCommandSet
	InitialVisible = 7
	//Main Menu
	1	= Command_ConstructMenPorter
;	2	= Command_ConstructGondorKnightsofDolHorde
	2   	= Command_SelectRevivablesMenFortress	
	3	= Command_FireWeaponMenFortressBoilingOil
	4	= Command_SpecialAbilityIvoryTowerVision
	6	= Command_Sell
	5   	= Command_SelectUpgradesMenFortress

	//Upgrades Menu
	8	= Command_PurchaseUpgradeMenFortressBanners
	9	= Command_PurchaseUpgradeMenFortressHouseOfHealing
	10	= Command_PurchaseUpgradeMenFortressFlamingMunitions
	11	= Command_PurchaseUpgradeMenFortressBoilingOil
	12	= Command_PurchaseUpgradeMenFortressNumenorStonework
	13	= Command_PurchaseUpgradeMenFortressIvoryTower
	14	= Command_RadialBack

	//Hero Menu
	15	= Command_RingHeroReviveSlot
	16	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	17	= Command_GenericReviveSlot1		//Revives any hero. keep them UNIQUE within the same commandset! 
	18	= Command_GenericReviveSlot2		
	19	= Command_GenericReviveSlot3		
	20	= Command_GenericReviveSlot4		
	21	= Command_GenericReviveSlot5		
	22	= Command_GenericReviveSlot6		
	23	= Command_GenericReviveSlot7		
	24	= Command_RadialBack				
End											

CommandSet MenFortressCommandSetForFornost
	InitialVisible = 1
	1	= Command_ConstructWildPorter
;	2	= Command_ConstructGondorKnightsofDolHorde
End

CommandSet MenFortressExpansionPadCornerCommandSet
	1 = Command_ConstructMenTrebuchetExpansion
	2 = Command_ConstructMenArrowTowerExpansion
	3 = Command_ConstructMenGarrisonDormitory
 	4 = Command_ConstructMenWallHubExpansion
End

CommandSet MenFortressExpansionPadSideCommandSet
	1 = Command_ConstructMenTrebuchetSideExpansion
	2 = Command_ConstructMenArrowTowerExpansion
	3 = Command_ConstructMenGarrisonDormitory
End


CommandSet GondorGandalfCommandSet
	1	= Command_ToggleStance
	2  	= Command_SpecialAbilityWizardBlast
	3  	= Command_GondorGandalfLightningSword
	4  	= Command_GandalfShadowfax
	5  	= Command_GondorGandalfIstariLight
	6  	= Command_SpecialAbilityWordOfPower
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet GondorFaramirCommandSet
	1	= Command_ToggleStance
	2	= Command_ToggleFaramirWeapon
	3	= Command_SpecialAbilityWoundArrow
	4	= Command_ToggleMounted
	5	= Command_FaramirFakeLeadershipButton
	6	= Command_SpecialAbilityCaptainOfGondor
	12 = Command_CaptureBuilding
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet GondorDamrodCommandSet
	1	= Command_ToggleStance
	2	= Command_ToggleDamrodWeapon
	3	= Command_SpecialAbilityDamrodLeadership
	4	= Command_SpecialAbilityDamrodDeadlySniper
	5	= Command_SpecialPowerRallyRangers
	12 = Command_CaptureBuilding
	13 = Command_AttackMove
	14 = Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet GondorWorkerCommandSet	
	1  	= Command_ConstructGondorFarm
	2  	= Command_ConstructGondorBarracks
	3  	= Command_ConstructGondorMarketPlace
	4  	= Command_ConstructGondorHseHeal
	5  	= Command_ConstructGondorBlackSmith
	13 	= Command_AttackMove
	15	= Command_Stop
End



CommandSet GondorAragornCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityAthelas
	3	= Command_SpecialAbilityBladeMaster
	4 	= Command_AragornFakeLeadershipButton
	5 	= Command_SpecialAbilityElendil
	6 	= Command_SpawnOathbreakers
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet GondorEarnurCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityAthelas
	3	= Command_SpecialAbilityEarnurBladeMaster
	4 	= Command_EarnurFakeLeadershipButton
	5 	= Command_SpecialAbilityElendil
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet GondorIsildurCommandSet	
	1	=	Command_ToggleStance
	2	= Command_SpecialAbilityNarsilAttack
	13	= Command_AttackMove
	15	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End



CommandSet GondorFoundationCommandSet
	1  = Command_ConstructGondorFarm
	2  = Command_ConstructGondorBlackSmith
	3  = Command_ConstructGondorBarracks
	4  = Command_ConstructGondorArcherRange
	5  = Command_ConstructGondorStatue
	6  = Command_ConstructGondorWell
	7  = Command_ConstructGondorKeep
	8  = Command_ConstructGondorStable
	9  = Command_ConstructGondorWorkshop
	10 = Command_ConstructGondorStoneMaker
	11 = Command_ConstructGondorMarketPlace
End

CommandSet GondorFoundation_IndependantCommandSet
	1  = Command_ConstructGondorFarm
	2  = Command_ConstructGondorBlackSmith
	3  = Command_ConstructGondorBarracks
	4  = Command_ConstructGondorArcherRange
	5  = Command_ConstructGondorStatue
	6  = Command_ConstructGondorWell
	7  = Command_ConstructGondorKeep
	8  = Command_ConstructGondorStable
	9  = Command_ConstructGondorWorkshop
	11 = Command_ConstructGondorMarketPlace
End

CommandSet GondorFoundationCommandSetUpgradedEntMoot
	1  = Command_ConstructGondorFarm
	2  = Command_ConstructGondorBlackSmith
	3  = Command_ConstructGondorBarracks
	4  = Command_ConstructGondorArcherRange
	5  = Command_ConstructGondorStatue
	6  = Command_ConstructGondorWell
	7  = Command_ConstructGondorKeep
	8  = Command_ConstructGondorStable
	9  = Command_ConstructGondorWorkshop
	10 = Command_ConstructGondorStoneMaker
	11 = Command_ConstructGondorMarketPlace
	12 = Command_ConstructEntMoot
End

CommandSet GondorBaseDefenceFoundationCommandSet
	1 = Command_ConstructGondorSentryTower
End

CommandSet GondorWallFoundationCommandSet
  1  = Command_ConstructGondorWall
End


CommandSet PosternGateCommandSet
	1 = Command_UpgradeGondorPosternGate
End

CommandSet PosternGateCommandSetMk2
	1 = Command_UpgradeGondorPosternGate
End

CommandSet GondorCastleWallCommandSet
	1 = Command_UpgradeGondorTrebuchetTurret
	2 = Command_UpgradeGondorOpenGarrison
	3 = Command_UpgradeGondorPosternGate
End

//----Wall Treb/Cat commandsets---------

//---Men of the West Trebs---
CommandSet GondorCastleWallUpgradeCommandSetBuyNewTreb
	1 = Command_PurchaseNewWallTreb
	6 = Command_Sell	
End


CommandSet GondorCastleBaseKeepCommandSet
	1	= Command_GenericReviveSlot1
	2	= Command_GenericReviveSlot2
	3	= Command_GenericReviveSlot3
	4	= Command_GenericReviveSlot4
	5	= Command_GenericReviveSlot5
	6	= Command_GenericReviveSlot6
//	7	= Command_EvacuateGarrison
//	8	= Command_ExitGarrison
	9	= Command_StartCitadelSelfRepair
End

CommandSet GondorCastleBaseKeepRebuildCommandSet     //Rebuildable version
	1	= Command_GenericReviveSlot1
	2	= Command_GenericReviveSlot2
	3	= Command_GenericReviveSlot3
	4	= Command_GenericReviveSlot4
	5	= Command_GenericReviveSlot5
	6	= Command_GenericReviveSlot6
	7	= Command_StartSelfRepair
//	8	= Command_ExitGarrison
End


CommandSet GondorCastleWallHubCommandSet
	1 = Command_GondorCastleWallHub_BeginWallSpan
	2 = Command_GondorCastleWallHub_BeginRamp
	3 = Command_GondorCastleWallHub_SmallWallSpan
	6 = Command_Sell
	
End

CommandSet GondorCastleWallHubSmallCommandSet
	1 = Command_GondorCastleWallHub_BeginWallSpan
	4 = Command_CancelWallSpan
	6 = Command_Sell
End

CommandSet GondorCastleWallHubSmallUpgradeableCommandSet
	1 = Command_GondorCastleWallHub_BeginWallSpan
	2 = Command_MenWallUpgradeToRegularGate
	3 = Command_MenWallUpgradeToPosternGate
	4 = Command_MenWallUpgradeToTower
	5 = Command_MenWallUpgradeToTrebuchet
	6 = Command_Sell
End

CommandSet MenWallSegmentCommandSet
	1 = Command_MenWallUpgradeToHub
	2 = Command_MenWallUpgradeToRegularGate
	3 = Command_MenWallUpgradeToPosternGate
	4 = Command_MenWallUpgradeToTower
	5 = Command_MenWallUpgradeToTrebuchet
	6 = Command_Sell
	7 = Command_StartSelfRepair
End 
   
CommandSet MenWallCliffCapCommandSet
	6 = Command_Sell
End 
   
CommandSet MenWallUpgradeNodeCommandSet
	1 = Command_MenWallUpgradeToHub
	2 = Command_MenWallUpgradeToRegularGate
	3 = Command_MenWallUpgradeToPosternGate
	4 = Command_MenWallUpgradeToTower
	5 = Command_MenWallUpgradeToTrebuchet
End

CommandSet MenPorterCommandSet 
   1  = Command_Stop
   2  = Command_PorterExtinguishFire
   3  = Command_PorterConstructMenFarm
   4  = Command_PorterConstructMenBarracks
   5  = Command_PorterConstructMenArcheryRange
   6  = Command_PorterConstructMenStable
   7  = Command_PorterConstructMenWorkshop
   8  = Command_PorterConstructMenSentryTower
   9  = Command_PorterConstructMenWell
   10 = Command_PorterConstructMenStatue
   11 = Command_PorterConstructMenBlacksmith
   12 = Command_PorterConstructMenMarketPlace
   13 = Command_PorterConstructMenWallHub
   14 = Command_PorterConstructMenFortress 
End

CommandSet MenPorterCommandSetForTutorial 
   1  = Command_Stop
   2  = Command_PorterExtinguishFire
   3  = Command_PorterConstructMenFarm
   4  = Command_PorterConstructMenBarracks
   5  = Command_PorterConstructMenArcheryRange
   6  = Command_PorterConstructMenStable
   7  = Command_PorterConstructMenWorkshop
   8  = Command_PorterConstructMenSentryTower
   9  = Command_PorterConstructMenWell
   10 = Command_PorterConstructMenStatue
   11 = Command_PorterConstructMenBlacksmith
   12 = Command_PorterConstructMenMarketPlace
   13 = Command_PorterConstructMenWallHub
   14 = Command_PorterConstructMenFortressTutorial 
End

