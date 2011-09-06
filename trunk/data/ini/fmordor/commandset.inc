/////////////////////
// COMMANDSET.INC //
///////////////////
//Mordor//
/////////


CommandSet GothmogCommandSet   
	1 	= Command_ToggleStance	
	2 	= Command_GothmogIronHand
	3 	= Command_SpecialAbilityGothmogCarnage
	4 	= Command_GothmogDayoftheOrc			; Command_LurtzLeadership
	12	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



//--------------Mordor Hordes
CommandSet MordorArcherHordeCommandSet
	1 	= Command_ToggleStance
	2	= Command_ArcherBombard
	3 	= Command_PurchaseUpgradeMordorFireArrows
;	4	= Command_PurchaseUpgradeMordorHeavyArmor		; BFME2 Expansion Faction Enhancement
	4 	= Command_PurchaseUpgradeMordorBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16 	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorOrcScout_HordeCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorGoblinFighterHordeCommandSet
	1	= Command_ToggleStance
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorCorsairsOfUmbarHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeMordorForgedBlades
	3	= Command_PurchaseUpgradeMordorBasicTraining
	4	= Command_ToggleCorsairWeapon	
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorCorsairsOfUmbarHordeFireBombCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeMordorForgedBlades
	3	= Command_PurchaseUpgradeMordorBasicTraining
	4	= Command_ToggleCorsairWeapon
	6	= Command_ArcherBombard
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

//OBSOLETE - MordorHaradrimLancer obsolete in BFME2
CommandSet MordorHaradrimLancerHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeMordorBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
	
CommandSet MordorFighterHordeCommandSet
	1 	= Command_ToggleStance	
	2 	= Command_BloodThirstySacrifice
	3 	= Command_PurchaseUpgradeMordorBasicTraining
;	4	= Command_PurchaseUpgradeMordorHeavyArmor	; BFME2 Expansion Faction Enhancement
;	5	= Command_PurchaseUpgradeMordorForgedBlades	; BFME2 Expansion Faction Enhancement
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorBlackOrcHordeCommandSet
	1 	= Command_ToggleStance	
	2 	= Command_BloodThirstySacrifice
	3	= Command_PurchaseUpgradeMordorForgedBlades	; BFME2 Expansion Faction Enhancement
	4	= Command_PurchaseUpgradeMordorHeavyArmor	; BFME2 Expansion Faction Enhancement
	5 	= Command_PurchaseUpgradeMordorBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

	
CommandSet MordorFighterHordeCommandSet_Summoned
	1 	= Command_ToggleStance
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorEasterlingHordeCommandSet
	1 	= Command_ToggleStance
	2	= Command_MordorEasterlingPorcupineFormation
	3 	= Command_PurchaseUpgradeMordorBasicTraining
	4	= Command_PurchaseUpgradeMordorHeavyArmor
	5	= Command_PurchaseUpgradeMordorForgedBlades
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet MordorCampKeepCommandSet
	1	= Command_ConstructMordorPorter
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

CommandSet MordorTentCommandSet
	1	= Command_BuildMordorArcher
	15	= Command_UpgradeFireArrows
End

CommandSet MordorMumakilCommandSet
	1	= Command_ToggleStance	
	2	= Command_ChargeAttack
	3	= Command_PurchaseUpgradeMordorFireArrows
	4	= Command_PurchaseUpgradeMordorBasicTraining
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorCatapultCommandSet
	1	= Command_ToggleStance	
	2 	= Command_BombardEvil
	3 	= Command_ToggleCatapultWeapon
	4 	= Command_ToggleCatAutoAcquire
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorCatapultCommandSetStopBombard
	1	= Command_ToggleStance	
	2 	= Command_StopBombard
	3 	= Command_ToggleCatapultWeapon
	4 	= Command_ToggleCatAutoAcquire
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorFortressCatapultCommandSet		
	1	= Command_BombardEvil
	2	= Command_ToggleFortressCatapultWeapon
	3	= Command_ToggleCatAutoAcquire		
End

CommandSet MordorFortressCatapultCommandSetStopBombard	
	1	= Command_StopBombard
	2	= Command_ToggleFortressCatapultWeapon
	3	= Command_ToggleCatAutoAcquire		
End

CommandSet MordorSiegeTowerCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilitySiegeRetract
	11  	= Command_SpecialAbilitySiegeDeploy // hidden
	12	= Command_EvacuateSiegeTower
	13	= Command_AttackMove
	14	= Command_Stop
	16 	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorArcherCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


//OBSOLETE unit
CommandSet MordorHaradrimLancerCommandSet	
	1	= Command_ToggleStance
//	4	= Command_SpecialAbilityShieldWall
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorHaradrimRiderCommandSet				; Addition for BFME2 Expansion
	1  	= Command_ToggleStance
	2	= Command_PurchaseUpgradeMordorBasicTraining
	3	= Command_PurchaseUpgradeMordorHeavyArmor
	4	= Command_PurchaseUpgradeMordorForgedBlades
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorHaradrimRiderHordeCommandSet				; Addition for BFME2 Expansion
	1  	= Command_ToggleStance
	2	= Command_PurchaseUpgradeMordorBasicTraining
	3	= Command_PurchaseUpgradeMordorHeavyArmor
	4	= Command_PurchaseUpgradeMordorForgedBlades
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorHaradrimArcherCommandSet
	1	= Command_ToggleStance
	3	= Command_ArcherBombard
	4	= Command_PurchaseUpgradeMordorHeavyArmor
	5	= Command_PurchaseUpgradeMordorFireArrows
	6	= Command_PurchaseUpgradeMordorBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
CommandSet MordorHaradrimArcherHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_HaradrimArcherBarbedArrowAbility
	3	= Command_ArcherBombard
	4	= Command_PurchaseUpgradeMordorHeavyArmor
	5	= Command_PurchaseUpgradeMordorFireArrows
	6	= Command_PurchaseUpgradeMordorBasicTraining
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorEasterlingCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorWargHordeCommandSet	
	1	= Command_ToggleStance	
	2  	= Command_SpecialAbilityDireWolfHowl
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet MordorMountainTrollCommandSet
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3  	= Command_SpecialAbilityTrollFindTree 
	4  	= Command_SpecialAbilityTrollFindTastyOrc
	
	13 	= Command_AttackMove
	14 	= Command_Stop
	16	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	17  	= Command_SetStanceBattle
	18  	= Command_SetStanceAggressive
	19  	= Command_SetStanceHoldGround
End

CommandSet MordorMountainTrollRockCommandSet
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3  	= Command_SpecialAbilityTrollFindTree 
	4  	= Command_SpecialAbilityTrollFindTastyOrc
	5	= Command_BombardEvil
	
	13 	= Command_AttackMove
	14 	= Command_Stop
	16	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	17  	= Command_SetStanceBattle
	18  	= Command_SetStanceAggressive
	19  	= Command_SetStanceHoldGround
End

CommandSet MordorMountainTrollRockCommandSetStopBombard
	1	= Command_ToggleStance
	2  	= Command_ToggleMountainTrollRockThrow
	3  	= Command_SpecialAbilityTrollFindTree 
	4  	= Command_SpecialAbilityTrollFindTastyOrc
	5	= Command_StopBombard
	
	13 	= Command_AttackMove
	14 	= Command_Stop
	16	= Command_SpecialAbilityTrollGrabTree			; For context-sensitive tree grab
	17  	= Command_SetStanceBattle
	18  	= Command_SetStanceAggressive
	19  	= Command_SetStanceHoldGround
End

CommandSet MordorAttackTrollCommandSet
	1	= Command_ToggleStance
	2	= Command_DominateTroll
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet MordorDrummerTrollCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityRoar
	3	= Command_DrummerTrollLeadership
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorCaveTrollCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityGrabPassenger
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorGrondCommandSet
	1	= Command_ToggleStance
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorHaradrimHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_ToggleFormationHaradrim
	3 	= Command_PurchaseUpgradeMordorBasicTraining
	//4 	= Command_SetFormationHaradrimWedge
	//5 	= Command_SetFormationHaradrimLine
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



//-------------------------------------//
// MORDOR UNIT PRODUCTION COMMAND SETS //
//-------------------------------------//
CommandSet MordorFortressCommandSet
	InitialVisible = 7
	//Main Menu
	1	= Command_ConstructMordorPorter
;	2	= Command_ConstructMordorBlackRiderHorde
	2	= Command_SelectRevivablesMordorFortress
	3	= Command_FireWeaponMordorFortressMagmaCauldrons
	4	= Command_FireWeaponMordorFortressSpireFireball 
	5	= Command_SelectUpgradesMordorFortress	
	6	= Command_Sell

	
		//Upgrades Menu
	8	= Command_PurchaseUpgradeMordorFortressDoomPyres
	9	= Command_PurchaseUpgradeMordorFortressLavaMoat
	10	= Command_PurchaseUpgradeMordorFortressFireArrows
	11	= Command_PurchaseUpgradeMordorFortressMagmaCauldrons
	12	= Command_PurchaseUpgradeMordorFortressMorgulSorcery
	13	= Command_PurchaseUpgradeMordorFortressGorgorothSpire
	14	= Command_RadialBack

	//Hero Menu
	15	= Command_RingHeroReviveSlot
	16	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	17	= Command_GenericReviveSlot1
	18	= Command_GenericReviveSlot2		
	19	= Command_GenericReviveSlot3		
	20	= Command_GenericReviveSlot4    	
	21	= Command_GenericReviveSlot5		
	22	= Command_GenericReviveSlot6    	
	23	= Command_GenericReviveSlot7		
	24	= Command_RadialBack			
End										
										
CommandSet EvilRivendell_MordorFortressCommandSet
	InitialVisible = 6

	//Main Menu
	1	= Command_ConstructMordorPorter
	2	= Command_SelectRevivablesMordorFortress_EvilRivendell	
	3	= Command_SelectUpgradesMordorFortress
	4	= Command_FireWeaponMordorFortressMagmaCauldrons
	5	= Command_FireWeaponMordorFortressSpireFireball 	
	6	= Command_Sell
	
	//Upgrades Menu
	7	= Command_PurchaseUpgradeMordorFortressDoomPyres
	8	= Command_PurchaseUpgradeMordorFortressLavaMoat
	9	= Command_PurchaseUpgradeMordorFortressFireArrows
	10	= Command_PurchaseUpgradeMordorFortressMagmaCauldrons
	11	= Command_PurchaseUpgradeMordorFortressMorgulSorcery
	12	= Command_PurchaseUpgradeMordorFortressGorgorothSpire
	13	= Command_RadialBack

	//Hero Menu
	14	= Command_RingHeroReviveSlot
	15	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	16	= Command_GenericReviveSlot1	
	17	= Command_GenericReviveSlot2		
	18	= Command_GenericReviveSlot3		
	19	= Command_GenericReviveSlot4	
	20	= Command_GenericReviveSlot5		
	21	= Command_GenericReviveSlot6	
	22	= Command_GenericReviveSlot7	
	23	= Command_GenericReviveSlot8	
	24	= Command_GenericReviveSlot9	
	25	= Command_GenericReviveSlot10	
	26	= Command_RadialBack
End

CommandSet MordorFortressExpansionPadCornerCommandSet
	1	= Command_ConstructMordorWallCatapultExpansion
	2	= Command_ConstructMordorBarricadeExpansion
	3	= Command_ConstructMordorGateWatchersExpansion
End

CommandSet MordorTavernCommandSetLevel1
	1	= Command_ConstructMordorCorsairsOfUmbarHorde
	2	= Command_PurchaseTechnologyMordorHeavyArmor
	3	= Command_PurchaseTechnologyMordorForgedBlades
	4	= Command_PurchaseTechnologyMordorFireArrows
	5	= Command_UpgradeMordorTavernLevel2
	6	= Command_Sell
End

CommandSet MordorTavernCommandSetLevel2
	1	= Command_ConstructMordorCorsairsOfUmbarHorde
	2	= Command_PurchaseTechnologyMordorHeavyArmor
	3	= Command_PurchaseTechnologyMordorForgedBlades
	4	= Command_PurchaseTechnologyMordorFireArrows
	5	= Command_UpgradeMordorTavernLevel3
	6	= Command_Sell
End

CommandSet MordorTavernCommandSetLevel3
	1	= Command_ConstructMordorCorsairsOfUmbarHorde
	2	= Command_PurchaseTechnologyMordorHeavyArmor
	3	= Command_PurchaseTechnologyMordorForgedBlades
	4	= Command_PurchaseTechnologyMordorFireArrows
	6	= Command_Sell
End

CommandSet MordorTavernCommandSetLevel1_ForMirkwood				; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	1	= Command_PurchaseTechnologyMordorFireArrows_ForMirkwood	; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	2	= Command_ConstructMordorCorsairsOfUmbarHorde			; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	3	= Command_Sell							; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
End										; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05

CommandSet MordorTavernCommandSetLevel2_ForMirkwood				; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	1	= Command_PurchaseTechnologyMordorFireArrows_ForMirkwood	; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	2	= Command_UpgradeMordorTavernLevel3				; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	3	= Command_Sell							; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
End										; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05

CommandSet MordorTavernCommandSetLevel3_ForMirkwood				; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	1	= Command_PurchaseTechnologyMordorFireArrows_ForMirkwood	; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
	2	= Command_Sell							; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05
End										; DONT REMOVE THIS - NEEDED FOR EVIL OLD FOREST ROAD MISSION - SSMITH 10.14.05

CommandSet MordorBattleTowerCommandSet
	1	= Command_PurchaseSentryTowerFireArrowsUpgrade
	6	= Command_Sell
End

CommandSet MordorOrcPitCommandSetLevel1
  	1	= Command_ConstructMordorOrcFighterHorde
  	2	= Command_ConstructMordorOrcArcherHorde
  	3	= Command_ConstructMordorBlackOrcFighterHorde
  	4	= Command_PurchaseTechnologyMordorBasicTraining
  	5 	= Command_UpgradeMordorOrcPitLevel2
  	6	= Command_Sell
End

CommandSet MordorOrcPitCommandSetLevel2
  	1	= Command_ConstructMordorOrcFighterHorde
  	2	= Command_ConstructMordorOrcArcherHorde
  	3	= Command_ConstructMordorBlackOrcFighterHorde
  	4	= Command_PurchaseTechnologyMordorBasicTraining
  	5 	= Command_UpgradeMordorOrcPitLevel3
  	6	= Command_Sell
End

CommandSet MordorOrcPitCommandSetLevel3
  	1	= Command_ConstructMordorOrcFighterHorde
  	2	= Command_ConstructMordorOrcArcherHorde
  	3	= Command_ConstructMordorBlackOrcFighterHorde
  	4	= Command_PurchaseTechnologyMordorBasicTraining
  	6	= Command_Sell
End

CommandSet MordorOrcFletcherCommandSet
  	1	= Command_ConstructMordorOrcArcherHorde
  	6	= Command_Sell
End

CommandSet MordorHaradrimPalaceCommandSetLevel1
  	1	= Command_ConstructEasterlingHorde
	2 	= Command_ConstructMordorHaradrimRiderHorde
  	3	= Command_ConstructMordorCorsairsOfUmbarHorde	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_ConstructMordorHaradrimArcherHorde
	5	= Command_PurchaseTechnologyMordorFireArrows	; BFME EXPANSION PACT Faction Enhancement
  	6	= Command_Sell
  	7 	= Command_UpgradeMordorHaradrimPalaceLevel2
End

CommandSet MordorHaradrimPalaceCommandSetLevel2
  	1	= Command_ConstructEasterlingHorde
	2 	= Command_ConstructMordorHaradrimRiderHorde
  	3	= Command_ConstructMordorCorsairsOfUmbarHorde	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_ConstructMordorHaradrimArcherHorde
	5	= Command_PurchaseTechnologyMordorFireArrows	; BFME EXPANSION PACT Faction Enhancement
  	6	= Command_Sell
  	7 	= Command_UpgradeMordorHaradrimPalaceLevel3
End

CommandSet MordorHaradrimPalaceCommandSetLevel3
  	1	= Command_ConstructEasterlingHorde
	2 	= Command_ConstructMordorHaradrimRiderHorde
  	3	= Command_ConstructMordorCorsairsOfUmbarHorde	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_ConstructMordorHaradrimArcherHorde
	5	= Command_PurchaseTechnologyMordorFireArrows	; BFME EXPANSION PACT Faction Enhancement
  	6	= Command_Sell
End

CommandSet MordorMumakilPenCommandSetLevel1
  	1	= Command_ConstructMordorMumakil
  	2 	= Command_UpgradeMordorMumakilPenLevel2
  	6	= Command_Sell
End

CommandSet MordorMumakilPenCommandSetLevel2
  	1	= Command_ConstructMordorMumakil
  	2 	= Command_UpgradeMordorMumakilPenLevel3
  	6	= Command_Sell
End

CommandSet MordorMumakilPenCommandSetLevel3
  	1	= Command_ConstructMordorMumakil
  	6	= Command_Sell
End

CommandSet MordorTrollCageCommandSetLevel1
;	1	= Command_ConstructMordorWargHorde	; BFME EXPANSION PACT Faction Enhancement
	1	= Command_ConstructMordorMountainTroll
	2	= Command_ConstructMordorDrummerTroll
	3	= Command_ConstructMordorAttackTroll
	4	= Command_UpgradeMordorTrollCageLevel2
	6	= Command_Sell
End

CommandSet MordorTrollCageCommandSetLevel2
;	1	= Command_ConstructMordorWargHorde		; BFME EXPANSION PACT Faction Enhancement
	1	= Command_ConstructMordorMountainTroll
	2	= Command_ConstructMordorDrummerTroll
	3	= Command_ConstructMordorAttackTroll
	4	= Command_UpgradeMordorTrollCageLevel3
	6	= Command_Sell
End

CommandSet MordorTrollCageCommandSetLevel3
;	1	= Command_ConstructMordorWargHorde	; BFME EXPANSION PACT Faction Enhancement
	1	= Command_ConstructMordorMountainTroll
	2	= Command_ConstructMordorDrummerTroll
	3	= Command_ConstructMordorAttackTroll
	6	= Command_Sell
End

CommandSet MordorSiegeWorksCommandSetLevel1
  	1	= Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
  	;3	= Command_ConstructMordorSiegeTower
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
  	7	= Command_UpgradeMordorSiegeWorksLevel2
End

CommandSet MordorSiegeWorksCommandSetLevel2
  	1 	= Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
  	;3	= Command_ConstructMordorSiegeTower
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
  	7	= Command_UpgradeMordorSiegeWorksLevel3
End

CommandSet MordorSiegeWorksCommandSetLevel3
  	1	= Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
  	;3	= Command_ConstructMordorSiegeTower
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
End

CommandSet MordorSiegeWorksCommandSetLevel1_ForMP		; DONT REMOVE THIS - FROM HERE - NEEDED FOR SKIRMISH AND MP - SSMITH 10.20.05
  	1	= Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
  	7	= Command_UpgradeMordorSiegeWorksLevel2
  	8	= Command_ConstructMordorSiegeTower
End

CommandSet MordorSiegeWorksCommandSetLevel2_ForMP
  	1 = Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
  	7	= Command_UpgradeMordorSiegeWorksLevel3
  	8	= Command_ConstructMordorSiegeTower
End

CommandSet MordorSiegeWorksCommandSetLevel3_ForMP
  	1	= Command_ConstructMordorBatteringRam
  	2	= Command_ConstructMordorCatapult
	3	= Command_PurchaseTechnologyMordorForgedBlades	; BFME EXPANSION PACT Faction Enhancement
	4	= Command_PurchaseTechnologyMordorHeavyArmor	; BFME EXPANSION PACT Faction Enhancement
	5	= Command_ConstructMordorBlackRiderHorde
  	6	= Command_Sell
 	7	= Command_ConstructMordorSiegeTower
End								; DONT REMOVE THIS - TO HERE - NEEDED FOR SKIRMISH AND MP - SSMITH 10.20.05

CommandSet MordorRhunBarracksCommandSet
  1	= Command_ConstructEasterlingHorde
  6	= Command_Sell
End



//------//
// Misc //
//------//

CommandSet MordorFighterCommandSet
	1	= Command_ToggleStance	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet MordorMouthOfSauronCommandSet
	1 	= Command_ToggleStance
	2 	= Command_MountHorseMouthOfSauron
	3 	= Command_MouthOfSauronDoubt
	4 	= Command_MouthOfSauronDissent
	5 	= Command_MouthOfSauronEvilEye
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18 	= Command_SetStanceHoldGround
End

CommandSet LumberMillCommandSet
  1  = Command_BuildMordorWorker
  6  = Command_Sell
End

CommandSet MordorLumberMillCommandSetLevel1
  1  = Command_BuildMordorWorker
  6  = Command_Sell
End

CommandSet MordorSpawnOrcs
  1  = Command_SpawnOrcs
;  14 = Command_GuardUnit
  15 = Command_Stop
End


CommandSet MordorEconomyPlotCommandSet
  1  = Command_UnpackExplicitMordorLumbermill
  2  = Command_UnpackExplicitMordorSlaughterhouse
End



CommandSet MordorWorkerCommandSet	
	1	= Command_Harvest
 	2	= Command_ConstructMordorBase
    	3	= Command_ConstructMordorBaseTest
	13  = Command_AttackMove	
	14  = Command_Stop
End

CommandSet MordorBaseTestCommandSet
  1  = Command_UpgradeTest
  2  = Command_UpgradeTest_2
End

CommandSet FellBeastCommandSet
	1 	= Command_ToggleStance
	2	= Command_SpecialAbilityScreech
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle			
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet KhamulFellBeastCommandSet
	1 	= Command_ToggleStance
	2	= Command_KhamulDismount		; Added for the BFME2 Expansion Pact  MountHorseBlackRider
	3 	= Command_SpecialAbilityScreech
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle			
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet KhamulCommandSet
	1	= Command_ToggleStance 
	2	= Command_KhamulToggleMounted
	3	= Command_BlackRiderDreadVisage
	4	= Command_BlackRiderMorgulBlade
;	5	= Command_SpecialAbilityScreechBlackRider
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet MorgomirCommandSet
	1	= Command_ToggleStance 
	2	= Command_MorgomirToggleMounted
	3	= Command_BlackRiderDreadVisage
	4	= Command_BlackRiderMorgulBlade
;	5	= Command_SpecialAbilityScreechBlackRider
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End



CommandSet MordorNazgulRidingFellBeastCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityScreech
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet MordorWitchKingRidingFellBeastCommandSet
	1 	= Command_ToggleStance
	2 	= Command_WitchKingDismount	
	3 	= Command_WitchKingDreadVisage
	4 	= Command_SpecialAbilityScreechWitchKing
	5 	= Command_HourOfTheWitchKing
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet MordorWitchKingCommandSet
	1 	= Command_ToggleStance
	2 	= Command_WitchKingToggleMounted
	3 	= Command_WitchKingDreadVisage
	4 	= Command_SpecialAbilityScreechWitchKing
	5 	= Command_HourOfTheWitchKing
	12 	= Command_CaptureBuilding	
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet MordorBaseDefenceFoundationCommandSet
	1 = Command_ConstructEvilSentryTower
End


CommandSet MordorFoundationCommandSet
  3  = Command_ConstructMordorOrcPit
;  4  = Command_ConstructMordorHaradrimPalace
;  5  = Command_ConstructMordorTrollCage
;  6  = Command_ConstructMordorSiegeWorks
;  7  = Command_ConstructMordorPen
;  9  = Command_ConstructMordorOrcFletcher
;  10  = Command_ConstructMordorUmbarTavern
;  11  = Command_ConstructMordorBarracks 
End



//---------------------------------------------------------
//Evil Monument Fortress Command Sets.  Used for buildings like Helms Deep, Osgiliath etc.
CommandSet MordorMonumentFortressCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructMordorPorter
	2	= Command_SelectRevivablesMordorMonumentFortress
	
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


//---------------------------------------------------------
//Evil Monument Fortress Command Sets with Rebuild capability
CommandSet MordorMonumentFortressRebuildCommandSet	
	InitialVisible	= 6
	
	//Main Menu
	1	= Command_ConstructMordorPorter
	2	= Command_SelectRevivablesMordorMonumentFortress
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



CommandSet MordorSpellBookCommandSet
	1 = Command_SpellBookTaint
	2 = Command_SpellBookEyeofSauron
	3 = Command_SpellBookWarChant

	4 = Command_SpellBookIndustry
	5 = Command_SpellBookBarricade
	6 = Command_SpellBookUntamedAllegiance
	7 = Command_SpellBookArrowVolleyEvil	
	
	8 = Command_SpellBookEvilBombard
	9 = Command_SpellBookDarkness
	10 = Command_SpellBookAwakenWyrm
	
	11 = Command_SpellBookBalrogAlly
	12 = Command_SpellBookRainOfFire
End

CommandSet MordorSpellStoreCommandSet
	1 = Command_PurchaseSpellTaint
	2 = Command_PurchaseSpellEyeofSauron
	3 = Command_PurchaseSpellWarChant

	4 = Command_PurchaseSpellIndustry		; Command_PurchaseSpellBarricade
	5 = Command_PurchaseSpellUntamedAllegiance
	6 = Command_PurchaseSpellBarricade		; Command_PurchaseSpellIndustry
	7 = Command_PurchaseSpellArrowVolleyEvil
	
	8 = Command_PurchaseSpellEvilBombard		; Command_PurchaseSpellAwakenWyrm
	9 = Command_PurchaseSpellDarkness
	10 = Command_PurchaseSpellAwakenWyrm		; Command_PurchaseSpellEvilBombard
	
	11 = Command_PurchaseSpellBalrogAlly
	12 = Command_PurchaseSpellRainOfFire
End


//---Mordor Catapult---
CommandSet MordorUpgradeCommandSetBuyNewCatapult
	1 = Command_MordorPurchaseNewWallCatapult
	6 = Command_Sell	
End


CommandSet BuildTributeCartCommandSet
	1 = Command_BuildMordorTributeCart
End


CommandSet MordorPorterCommandSet
	1  = Command_Stop
	2  = Command_PorterExtinguishFire
	3  = Command_PorterConstructMordorSlaughterHouse
	4  = Command_PorterConstructMordorLumberMill
	5  = Command_PorterConstructMordorOrcPit
	6  = Command_PorterConstructMordorHaradrimPalace
	7  = Command_PorterConstructMordorTrollCage
	8  = Command_PorterConstructMordorSiegeWorks
	9  = Command_PorterConstructMumakilPen
;	10 = Command_ConstructMordorTavern
	11 = Command_PorterconstructMordorBattleTower
	12 = Command_PorterConstructMordorFortress
	
//  10  = Command_ConstructMordorOrcFletcher
//  11  = Command_ConstructMordorUmbarTavern
//  12  = Command_ConstructMordorBarracks 
End

CommandSet MordorPorterCommandSet_ForMirkwood
	1  = Command_Stop
	2  = Command_PorterExtinguishFire
	3  = Command_PorterConstructMordorSlaughterHouse
	4  = Command_PorterConstructMordorLumberMill
	5  = Command_PorterConstructMordorOrcPit
	6  = Command_PorterConstructMordorHaradrimPalace
	7  = Command_PorterConstructMordorTrollCage
	8  = Command_PorterConstructMordorSiegeWorks
	9  = Command_PorterConstructMumakilPen
	10 = Command_PorterConstructIsengardBattleTower
	11 = Command_ConstructMordorTavern
	12 = Command_PorterConstructMordorFortress
	
//  10  = Command_ConstructMordorOrcFletcher
//  11  = Command_ConstructMordorUmbarTavern
//  12  = Command_ConstructMordorBarracks 
End


CommandSet CommandSetInnMordorFaction
	1	= Command_ConstructMordorCorsairsOfUmbarHordeInn
	2	= Command_StartSelfRepair
End

