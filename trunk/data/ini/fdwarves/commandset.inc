/////////////////////
// COMMANDSET.INC //
///////////////////
//Dwarves//
//////////



CommandSet DwarvenDemolisherCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityDwarvenDemolisherDeploy
	3	= Command_PurchaseUpgradeDwarvenMithrilMail
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



//---------------------------
// DWARVEN
//---------------------------

CommandSet DwarvenZerkerCommandSet
	1	= Command_ToggleStance
	2  	= Command_ZealotAxeThrow
;	2  	= Command_DwarvenGuardianChargeAttack
	3  	= Command_SpecialAbilityZerkergang
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenZerkerHordeCommandSet
	1	= Command_ToggleStance
	2  	= Command_ZealotAxeThrow
;	2  	= Command_DwarvenGuardianChargeAttack
	3  	= Command_SpecialAbilityZerkergang
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet DwarvenGuardianCommandSet
	1	= Command_ToggleStance
	2  	= Command_DwarvenGuardianChargeAttack
	3  	= Command_PurchaseUpgradeDwarvenMithrilMail
	4  	= Command_PurchaseUpgradeDwarvenForgedBlades
	5  	= Command_PurchaseUpgradeDwarvenBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenAxeThrowerCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenPhalanxCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenBattleWagonCommandSet
	1 	= Command_ToggleStance
	2 	= Command_SpecialAbilityOilBarrels
	3 	= Command_UpgradeBattleWagonAxeThrowers
	4 	= Command_UpgradeBattleWagonBannerCarrier
	5 	= Command_UpgradeBattleWagonMenOfDale
	6 	= Command_UpgradeBattleWagonHearth
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenBattleWagonCommandSet_Upgraded
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityOilBarrels
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenCatapultCommandSet
	1 	= Command_ToggleStance
	2 	= Command_SpecialAbilityDwarvenIronHillsCatapultOilBarrels
	3 	= Command_Bombard
	4 	= Command_ToggleTrebAutoAcquire
	5 	= Command_PurchaseUpgradeDwarvenFlamingShot
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenCatapultCommandSetStopBombard
	1 	= Command_ToggleStance
	2 	= Command_SpecialAbilityDwarvenIronHillsCatapultOilBarrels
	3 	= Command_StopBombard
	4 	= Command_ToggleTrebAutoAcquire
	5 	= Command_PurchaseUpgradeDwarvenFlamingShot
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenForgeWorksCommandSet
 	1 	= Command_ConstructDwarvenBattleWagon
 	2 	= Command_ConstructDwarvenDemolisher
 	3 	= Command_ConstructDwarvenCatapult
 	4 	= Command_PurchaseTechnologyDwarvenFlamingShot
 	5 	= Command_UpgradeDwarvenForgeWorksLevel2
 	6 	= Command_Sell
 	7 	= Command_PurchaseTechnologyDwarvenForgedBlades 
 	8 	= Command_PurchaseTechnologyDwarvenMithrilMail
 	9 	= Command_PurchaseTechnologyDwarvenSiegeHammer

 End
 
 CommandSet DwarvenForgeWorksCommandSetLevel2
 	1 	= Command_ConstructDwarvenBattleWagon
 	2 	= Command_ConstructDwarvenDemolisher
 	3 	= Command_ConstructDwarvenCatapult
 	4 	= Command_PurchaseTechnologyDwarvenFlamingShot
 	5 	= Command_UpgradeDwarvenForgeWorksLevel3
 	6 	= Command_Sell
 	7 	= Command_PurchaseTechnologyDwarvenForgedBlades 
 	8 	= Command_PurchaseTechnologyDwarvenMithrilMail
 	9 	= Command_PurchaseTechnologyDwarvenSiegeHammer
 End
   
 CommandSet DwarvenForgeWorksCommandSetLevel3
 	1 	= Command_ConstructDwarvenBattleWagon
 	2 	= Command_ConstructDwarvenDemolisher
 	3 	= Command_ConstructDwarvenCatapult
  	4 	= Command_PurchaseTechnologyDwarvenFlamingShot
 	6 	= Command_Sell
 	7 	= Command_PurchaseTechnologyDwarvenForgedBlades 
 	8 	= Command_PurchaseTechnologyDwarvenMithrilMail
 	9 	= Command_PurchaseTechnologyDwarvenSiegeHammer
End

CommandSet DwarvenBarracksCommandSet
  	1 	= Command_ConstructDwarvenGuardianHorde
  	2 	= Command_ConstructDwarvenPhalanxHorde
  	3 	= Command_PurchaseTechnologyDwarvenBasicTraining
	4	= Command_ConstructDwarvenZerkerHorde 
  	5 	= Command_UpgradeDwarvenBarracksLevel2
  	6 	= Command_Sell
End

CommandSet DwarvenBarracksCommandSetLevel2
  	1 	= Command_ConstructDwarvenGuardianHorde
  	2 	= Command_ConstructDwarvenPhalanxHorde
  	3 	= Command_PurchaseTechnologyDwarvenBasicTraining 
	4	= Command_ConstructDwarvenZerkerHorde
  	5 	= Command_UpgradeDwarvenBarracksLevel3
  	6 	= Command_Sell
End

CommandSet DwarvenBarracksCommandSetLevel3
  	1 	= Command_ConstructDwarvenGuardianHorde
  	2 	= Command_ConstructDwarvenPhalanxHorde
  	3 	= Command_PurchaseTechnologyDwarvenBasicTraining 
	4	= Command_ConstructDwarvenZerkerHorde
 	6 	= Command_Sell
End

CommandSet DwarvenArcheryRangeCommandSet
	1 	= Command_ConstructDwarvenAxeThrowerHorde
	2 	= Command_ConstructDwarvenMenOfDaleHorde	
	3 	= Command_PurchaseTechnologyDwarvenFireArrows
	4 	= Command_PurchaseUpgradeDwarvenArcheryRangeLevel2
	6 	= Command_Sell
End

CommandSet DwarvenArcheryRangeCommandSetLevel2
	1 	= Command_ConstructDwarvenAxeThrowerHorde
	2 	= Command_ConstructDwarvenMenOfDaleHorde	
	3 	= Command_PurchaseTechnologyDwarvenFireArrows
	4 	= Command_PurchaseUpgradeDwarvenArcheryRangeLevel3
	6 	= Command_Sell
End

CommandSet DwarvenArcheryRangeCommandSetLevel3
	1 	= Command_ConstructDwarvenAxeThrowerHorde
	2 	= Command_ConstructDwarvenMenOfDaleHorde	
	3 	= Command_PurchaseTechnologyDwarvenFireArrows
	6 	= Command_Sell
End

CommandSet DwarvenMineShaftCommandSet
	1 	= Command_ExitGarrison
	2 	= Command_ExitGarrison
	3 	= Command_ExitGarrison
	4 	= Command_ExitGarrison
	5 	= Command_ExitGarrison
	6 	= Command_Sell
End

CommandSet DwarvenHallCommandSet
	1 	= Command_ExitGarrison
	2 	= Command_ExitGarrison
	3 	= Command_ExitGarrison
	6 	= Command_Sell
End

//---------------------------
CommandSet GloinCommandSet
	 1 	= Command_ToggleStance
	 2 	= Command_SpecialAbilityDwarvenGloinSlam
	 3 	= Command_SpecialAbilityDwarvenGloinShakeFoundation
	 4 	= Command_SpecialAbilityGloinSmash
    	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DainCommandSet
	 1 	= Command_ToggleStance
	 2 	= Command_SpecialAbilityDainLeadership
	 3 	= Command_SpecialAbilityDainMightyRage
	 4 	= Command_SpecialAbilityStubbornPride
	 5 	= Command_SpecialAbilityDainSummonRoyalGuard
    	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet CaptainofDaleCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityDaleSlamArrow
	3	= Command_SpecialAbilityTrainArchers
	4	= Command_SpecialAbilityDaleBeastSlayerArrow
;	5	= Command_CaptDaleFakeLeadershipButton
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

//---------------------------
// DWARVEN HORDES
//---------------------------
CommandSet DwarvenGuardianHordeCommandSet
	1  	= Command_ToggleStance
	2  	= Command_DwarvenGuardianChargeAttack
	3  	= Command_PurchaseUpgradeDwarvenMithrilMail
	4  	= Command_PurchaseUpgradeDwarvenForgedBlades
	5  	= Command_PurchaseUpgradeDwarvenBasicTraining
	6  	= Command_PurchaseUpgradeDwarvenSiegeHammer
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenGuardianHordeToggleCommandSet
	1  	= Command_ToggleStance
	2  	= Command_DwarvenGuardianChargeAttack
	3  	= Command_PurchaseUpgradeDwarvenMithrilMail
	//4  	= Command_ToggleGuardianWeapon
	5  	= Command_PurchaseUpgradeDwarvenBasicTraining
	6  	= Command_ToggleGuardianWeapon
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet DwarvenAxeThrowerHordeCommandSet
	1 	= Command_ToggleStance
	2	= Command_ArcherBombard
	3	= Command_PurchaseUpgradeDwarvenMithrilMail
	4	= Command_PurchaseUpgradeDwarvenForgedBlades
	5	= Command_PurchaseUpgradeDwarvenBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenPhalanxHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_DwarvenPhalanxPorcupineFormation
	3	= Command_PurchaseUpgradeDwarvenMithrilMail
	4	= Command_PurchaseUpgradeDwarvenForgedBlades
	5	= Command_PurchaseUpgradeDwarvenBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenMenOfDaleCommandSet
	1 	= Command_ToggleStance	
	3 	= Command_PurchaseUpgradeDwarvenMithrilMail
	4 	= Command_PurchaseUpgradeDwarvenFireArrows
	5 	= Command_PurchaseUpgradeDwarvenBasicTraining
	6	= Command_ArcherBombard
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenMenOfDaleHordeCommandSet
	1 	= Command_ToggleStance
	2	= Command_ArcherBombard
	3 	= Command_BlackArrows
	4 	= Command_PurchaseUpgradeDwarvenMithrilMail
	5 	= Command_PurchaseUpgradeDwarvenFireArrows
	6 	= Command_PurchaseUpgradeDwarvenBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet DwarvenMenOfDaleCommandSet_Summoned
	1	= Command_ToggleStance
	2	= Command_ArcherBombard
	3 	= Command_BlackArrows
	12 	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
End





CommandSet DwarvenFortressCommandSet
	InitialVisible = 7
	//Main Menu
	1	= Command_ConstructDwarvenPorter
;	2	= Command_ConstructDwarvenZerkerHorde
	2   	= Command_SelectRevivablesDwarvenFortress
	3	= Command_FireWeaponDwarvenFortressOilCasks	
	4	= Command_FireWeaponMightyCatapult
	5   	= Command_SelectUpgradesDwarvenFortress
	6	= Command_Sell

	//Upgardes Menu
	8	= Command_PurchaseUpgradeDwarvenFortressBanners
	9	= Command_PurchaseUpgradeDwarvenFortressSiegeKegs
	10	= Command_PurchaseUpgradeDwarvenFortressFlamingMunitions
	11	= Command_PurchaseUpgradeDwarvenFortressOilCasks
	12	= Command_PurchaseUpgradeDwarvenFortressDwarvenStonework
	13	= Command_PurchaseUpgradeDwarvenFortressMightyCatapult
	14	= Command_RadialBack
	
	//Hero Menu
	15	= Command_RingHeroReviveSlot		// Note that we need an extra slot for the ring hero.
	16	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	17	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	18	= Command_GenericReviveSlot2		
	19	= Command_GenericReviveSlot3		
	20	= Command_GenericReviveSlot4		
	21	= Command_GenericReviveSlot5		
	22	= Command_GenericReviveSlot6		
	23	= Command_GenericReviveSlot7		
	24	= Command_RadialBack				
End											

CommandSet DwarvenFortressCommandSet_DolGuldur
	InitialVisible = 7
	//Main Menu
	1	= Command_ConstructDwarvenPorter
	2	= Command_FireWeaponDwarvenFortressOilCasks	
	3   	= Command_SelectRevivablesDwarvenFortress_DolGuldur
	4   	= Command_SelectUpgradesDwarvenFortress
	5	= Command_FireWeaponMightyCatapult
	6	= Command_Sell

	//Upgardes Menu
	8	= Command_PurchaseUpgradeDwarvenFortressBanners
	9	= Command_PurchaseUpgradeDwarvenFortressSiegeKegs
	10	= Command_PurchaseUpgradeDwarvenFortressFlamingMunitions
	11	= Command_PurchaseUpgradeDwarvenFortressOilCasks
	12	= Command_PurchaseUpgradeDwarvenFortressDwarvenStonework
	13	= Command_PurchaseUpgradeDwarvenFortressMightyCatapult
	14	= Command_RadialBack
	
	//Hero Menu
	15	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	16	= Command_GenericReviveSlot2		
	17	= Command_GenericReviveSlot3		
	18	= Command_GenericReviveSlot4		
	19	= Command_GenericReviveSlot5		
	20	= Command_GenericReviveSlot6			
	21	= Command_RadialBack
End

CommandSet DwarvenFortressExpansionPadCornerCommandSet
	1 	= Command_ConstructDwarvenCatapultExpansion
	2 	= Command_ConstructDwarvenEreborTowerTowerExpansion
	3 	= Command_ConstructDwarvenHallExpansion
	4 	= Command_ConstructDwarvenWallHubExpansion
End

CommandSet DwarvenFortressExpansionPadSideCommandSet
	1 	= Command_ConstructDwarvenCatapultExpansion
	2	= Command_ConstructDwarvenEreborTowerTowerExpansion
	3 	= Command_ConstructDwarvenHallExpansion
	4 	= Command_ConstructDwarvenWallHubExpansion
End

CommandSet DwarvenSummonedCitadelPadCommandSet
	1 	= Command_ConstructDwarvenCatapultExpansionCitadel
	2 	= Command_ConstructDwarvenEreborTowerTowerExpansion
	3 	= Command_ConstructDwarvenHallExpansion
	4 	= Command_ConstructDwarvenWallHubExpansion
End

CommandSet DwarvenSummonedCitadelCommandSet
	1	= Command_ConstructDwarvenPorter		
	2	= Command_ExitGarrison
	3	= Command_ExitGarrison
	4	= Command_ExitGarrison
	6	= Command_Sell
End

CommandSet DwarvenSummonedCitadelCommandSetBuyCatapult
	1	= Command_ConstructDwarvenPorter	
	2	= Command_PurchaseNewDwarvenCitadelWallCatapult
	3	= Command_ExitGarrison
	4	= Command_ExitGarrison
	5	= Command_ExitGarrison
	6	= Command_Sell
End



CommandSet DwarvenMonumentFortressCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructDwarvenPorter
	2	= Command_SelectRevivablesDwarvenMonumentFortress

	//Hero Menu
	8	= Command_RingHeroReviveSlot
	9	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	10	= Command_GenericReviveSlot1	
	11	= Command_GenericReviveSlot2		
	12	= Command_GenericReviveSlot3		
	13	= Command_GenericReviveSlot4	
	14	= Command_GenericReviveSlot5		
	15	= Command_GenericReviveSlot6	
	16	= Command_GenericReviveSlot7	
	17	= Command_GenericReviveSlot8	
	18	= Command_RadialBack
End

CommandSet DwarvenMonumentFortressRebuildCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructDwarvenPorter
	2	= Command_SelectRevivablesDwarvenMonumentFortress
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

/////////////-------------------------------------------------------------
CommandSet DwarvesSpellBookCommandSet
	1 = Command_SpellBookHeal
	2 = Command_SpellBookRebuild
	3 = Command_SpellBookRallyingCall
	
	4 = Command_SpellBookHobbitAllies
	5 = Command_SpellBookLoneTowerDwarf
	6 = Command_SpellBookDwarvenRiches
	7 = Command_SpellBookMenOfDaleAllies

	8 = Command_SpellBookCloudBreak
	9 = Command_SpellBookUndermine
	10 = Command_SpellBookBombard

	11 = Command_SpellBookEarthquake
	12 = Command_SpellBookCitadel
End

CommandSet DwarvesSpellStoreCommandSet
	1 = Command_PurchaseSpellRallyingCallMP
	2 = Command_PurchaseSpellRebuild
	3 = Command_PurchaseSpellHeal
	
	4 = Command_PurchaseSpellMenOfDaleAllies
	5 = Command_PurchaseSpellHobbitAllies		; Command_PurchaseSpellDwarvenRiches
	6 = Command_PurchaseSpellLoneTower
	7 = Command_PurchaseSpellDwarvenRiches		; Command_PurchaseSpellHobbitAllies

	8 = Command_PurchaseSpellBombard
	9 = Command_PurchaseSpellUndermine		; Command_PurchaseSpellCloudBreak
	10 = Command_PurchaseSpellCloudBreak		; Command_PurchaseSpellUndermine

	11 = Command_PurchaseSpellEarthquake
	12 = Command_PurchaseSpellCitadel
End
////////////////////--------------------------------------------------------------

//---Dwarven Catapults---
CommandSet DwarvenUpgradeCommandSetBuyNewCatapult
	1 = Command_DwarvenPurchaseNewWallCatapult
	6 = Command_Sell	
End

CommandSet DwarvenCastleWallHubCommandSet
	1 = Command_GondorCastleWallHub_BeginWallSpan
	2 = Command_GondorCastleWallHub_BeginRamp
	3 = Command_GondorCastleWallHub_SmallWallSpan
	4 = Command_CancelWallSpan
	6 = Command_Sell

End

CommandSet DwarvenCastleWallHubSmallCommandSet
	1 = Command_DwarvenCastleWallHub_BeginWallSpan
	4 = Command_CancelWallSpan
	6 = Command_Sell
End

CommandSet DwarvenPorterCommandSet
   1  = Command_Stop
   2  = Command_PorterExtinguishFire
   3  = Command_ConstructDwarvenMineShaft
   4  =	Command_ConstructDwarvenBarracks
   5  = Command_ConstructDwarvenArcheryRange
   6  = Command_ConstructDwarvenForgeWorks
   7  = Command_ConstructDwarvenSentryTower
   8  =	Command_ConstructDwarvenHearth
   9  = Command_ConstructDwarvenStatue
   10 = Command_ConstructDwarvenWallHub
   11 =	Command_PorterConstructDwarvenFortress 
 
End

CommandSet DwarvenWallUpgradeNodeCommandSet
	1 = Command_DwarvenWallUpgradeToHub
	2 = Command_DwarvenWallUpgradeToRegularGate
	3 = Command_DwarvenWallUpgradeToPosternGate
	4 = Command_DwarvenWallUpgradeToTower
	5 = Command_DwarvenWallUpgradeToCatapult
End

CommandSet DwarvenWallSegmentCommandSet
	1 = Command_DwarvenWallUpgradeToHub
	2 = Command_DwarvenWallUpgradeToRegularGate
	3 = Command_DwarvenWallUpgradeToPosternGate
	4 = Command_DwarvenWallUpgradeToTower
	5 = Command_DwarvenWallUpgradeToCatapult
	6 = Command_Sell
	7 = Command_StartSelfRepair

End

CommandSet DwarvenWallCliffCapCommandSet
	6 = Command_Sell
End

CommandSet DwarvenCatapultFortressCommandSet
	1 = Command_ToggleTrebAutoAcquire
	3 = Command_Bombard
	14 = Command_Stop
End

CommandSet DwarvenCatapultFortressCommandSetStopBombard
	1 = Command_ToggleTrebAutoAcquire
	3 = Command_StopBombard
	14 = Command_Stop
End


CommandSet CommandSetInnDwarvenFaction
	1	= Command_ConstructInnDwarvenMenOfDaleHorde
	2	= Command_StartSelfRepair
End


CommandSet RohanGimliCommandSet
	1	= Command_ToggleStance
	2  	= Command_GimliAxeThrow
	3  	= Command_RohanGimliLeap
	4  	= Command_SpecialAbilitySlayer
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End
