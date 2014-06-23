/////////////////////
// COMMANDSET.INC //
///////////////////
//Elves//
////////



//---------------------------
// ELVEN
//---------------------------
CommandSet ElvenWatchTowerCommandSet
	1 = Command_PurchaseUpgradeElvenSilverthornTowerArrows
	2 = Command_ExitGarrison
	3 = Command_ExitGarrison
	6 = Command_Sell
End

CommandSet EregionForgeCommandSet
	1 = Command_PurchaseTechnologyElvenBasicTraining
	2 = Command_PurchaseTechnologyElvenHeavyArmor
	3 = Command_PurchaseTechnologyElvenForgedBlades
	4 = Command_PurchaseTechnologyElvenSilverthornArrows
	5 = Command_PurchaseUpgradeEregionForgeLevel2
	6 = Command_Sell
End

CommandSet EregionForgeCommandSetLevel2
	1 = Command_PurchaseTechnologyElvenBasicTraining
	2 = Command_PurchaseTechnologyElvenHeavyArmor
	3 = Command_PurchaseTechnologyElvenForgedBlades
	4 = Command_PurchaseTechnologyElvenSilverthornArrows
	5 = Command_PurchaseUpgradeEregionForgeLevel3
	6 = Command_Sell
End

CommandSet EregionForgeCommandSetLevel3
	1 = Command_PurchaseTechnologyElvenBasicTraining
	2 = Command_PurchaseTechnologyElvenHeavyArmor
	3 = Command_PurchaseTechnologyElvenForgedBlades
	4 = Command_PurchaseTechnologyElvenSilverthornArrows
	6 = Command_Sell
End

CommandSet ElvenPorterCommandSet   
   1  = Command_Stop
   2  = Command_PorterExtinguishFire   
   3  = Command_PorterConstructElvenMallornTree
   4  =	Command_PorterConstructElvenBarracks
   5  = Command_PorterConstructElvenGreenPasture
   6  =	Command_PorterConstructElvenEntMoot
   7  = Command_PorterConstructElvenStatue
   8  =	Command_PorterConstructElvenWatchTower
   9  = Command_PorterConstructElvenMirrorOfGaladriel   
   10 = Command_PorterConstructEregionForge
   11 =	Command_ConstructElvenWallHub  
   12 = Command_ConstructElvenFortress

End


CommandSet ElvenMirkwoodArcherCommandSet
	 1 	= Command_ToggleStance
	 12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenWarriorCommandSet
	 1 	= Command_ToggleStance
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenMithlondSentryCommandSet
	1 	= Command_ToggleStance
;	2 	= Command_MithlondSentryZephyrStrike
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenRivendellLancerCommandSet
	1  	= Command_ToggleStance
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenRivendellArcherCommandSet
	1  	= Command_ToggleStance
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenVigilantEntCommandSet	
	1	= Command_ToggleTrebAutoAcquire	
	2	= Command_Bombard
	6	= Command_Sell
	14	= Command_Stop
End

CommandSet ElvenVigilantEntCommandSetStopBombard	
	1 	= Command_ToggleTrebAutoAcquire
	2	= Command_StopBombard
	6	= Command_Sell
	14	= Command_Stop
End

//---------------------------
// ELVEN HORDES
//---------------------------
CommandSet ElvenRivendellLancerHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeElvenHeavyArmor
	3	= Command_PurchaseUpgradeElvenForgedBlades		
	4	= Command_PurchaseUpgradeElvenBasicTraining
	12 	= Command_CaptureBuilding	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenRivendellArcherHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_PurchaseUpgradeElvenHeavyArmor
	3	= Command_PurchaseUpgradeElvenSilverthornArrows			
	4	= Command_PurchaseUpgradeElvenBasicTraining
	12 	= Command_CaptureBuilding	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenLorienWarriorHordeCommandSet
	1	= Command_ToggleStance	
	2 	= Command_PurchaseUpgradeElvenForgedBlades	
	3 	= Command_PurchaseUpgradeElvenHeavyArmor
	4 	= Command_PurchaseUpgradeElvenBasicTraining	
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenLorienArcherHordeCommandSet
	1 	= Command_ToggleStance	
	2	= Command_ArcherBombard
	3 	= Command_PurchaseUpgradeElvenHeavyArmor
	4 	= Command_PurchaseUpgradeElvenSilverthornArrows	
	5 	= Command_PurchaseUpgradeElvenBasicTraining	
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenMithlondSentryHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_MithlondSentryPorcupineFormation
;	3 	= Command_MithlondSentryZephyrStrike
	3 	= Command_PurchaseUpgradeElvenForgedBlades	
	4 	= Command_PurchaseUpgradeElvenHeavyArmor
	5 	= Command_PurchaseUpgradeElvenBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenMirkwoodArcherHordeCommandSet
	1	= Command_ToggleStance
	2	= Command_ArcherBombard
	3	= Command_SpecialAbilityElfCloak
	4	= Command_PurchaseUpgradeElvenSilverthornArrows
	5 	= Command_PurchaseUpgradeElvenBasicTraining
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
;CommandSet ElvenMirkwoodArcherHordeCommandSet_Cloak
;	1 	= Command_ToggleStance
;	3 	= Command_SpecialAbilityElfCloak
;	4 	= Command_PurchaseUpgradeElvenSilverthornArrows
;	5	= Command_ArcherBombard
;	12 	= Command_CaptureBuilding
;	13 	= Command_AttackMove
;	14 	= Command_Stop
;End

CommandSet LindonWarriorCommandSet
	1	= Command_ToggleStance
	2	= Command_ToggleElvenWarriorWeapon
	3 	= Command_PurchaseUpgradeElvenForgedBlades	
	4 	= Command_PurchaseUpgradeElvenSilverthornArrows
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
CommandSet ElvenLindonWarriorHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_ToggleElvenWarriorWeapon
	3 	= Command_PurchaseUpgradeElvenForgedBlades	
	4 	= Command_PurchaseUpgradeElvenSilverthornArrows
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet ElvenLindonWarriorHordeCommandSet_Summoned
	1 	= Command_ToggleStance
	2 	= Command_ToggleElvenWarriorWeapon
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet NoldorWarriorCommandSet
	1	= Command_ToggleStance
	2	= Command_ToggleElvenWarriorWeapon
	3	= Command_ArcherBombard
	4 	= Command_SpecialAbilityNoldorWeaponSong
;	5 	= Command_PurchaseUpgradeElvenSilverthornArrows
	12	= Command_CaptureBuilding	
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End
CommandSet NoldorWarriorHordeCommandSet
	1 	= Command_ToggleStance
	2 	= Command_ToggleElvenWarriorWeapon
	3	= Command_ArcherBombard
	4 	= Command_SpecialAbilityNoldorWeaponSong
;	5 	= Command_PurchaseUpgradeElvenSilverthornArrows
	12	= Command_CaptureBuilding	
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End



CommandSet GaladrielCommandSet
	1 	= Command_ToggleStance
//	2 	= Command_NaturesWrath
	2   	= Command_SpecialPowerSpawnTornado
	3 	= Command_SpecialAbilityTerribleFury
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

CommandSet RohanLegolasCommandSet
	1	= Command_ToggleStance
	2  	= Command_LegolasHawkStrike
	3  	= Command_LegolasKnifeFightingMode
	4  	= Command_SpecialAbilityTrainArchers
	5  	= Command_SpecialAbilityArrowStorm
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End


CommandSet ElrondCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityElrondElvenGrace
	3	= Command_ElrondFakeLeadership
	4	= Command_SpecialAbilityElrondFarsight
	5   	= Command_SpecialPowerSpawnWhirlwind
	6	= Command_SpecialAbilityElrondRestoration
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End

;added for bonus mission

CommandSet ElrondEpilogueCommandSet
	1	= Command_ToggleStance
	2	= Command_SpecialAbilityElrondElvenGrace
	3	= Command_ElrondFakeLeadership
	4	= Command_SpecialPowerSpawnWhirlwind
	5   	= Command_SpecialAbilityElrondRestoration
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  	= Command_SetStanceBattle
	17  	= Command_SetStanceAggressive
	18  	= Command_SetStanceHoldGround
End




//------------------------------------//
// ELVEN UNIT PRODUCTION COMMAND SETS //
//------------------------------------//
CommandSet ElvenFortressCommandSet
	InitialVisible = 6
	//Main Menu
	1	= Command_ConstructElvenPorter
;	2	= Command_ConstructNoldorWarriorHorde				; Added for BFME2 Expansion
	2   	= Command_SelectRevivablesElvenFortress
	3	= Command_SelectUpgradesElvenFortress
	4	= Command_PurchaseNewEagle	
	6	= Command_Sell
	
		//Improvements
	7       = Command_PurchaseUpgradeElvenFortressEnchantedAnvil
	8	= Command_PurchaseUpgradeElvenFortressBlessedMist
	9	= Command_PurchaseUpgradeElvenFortressCrystalMoat
	10	= Command_PurchaseUpgradeElvenFortressMysticFountains
	11	= Command_PurchaseUpgradeElvenFortressEncasingVines
	12	= Command_PurchaseUpgradeElvenFortressEaglesNest
	13	= Command_RadialBack
	
	//Heroes
	14	= Command_RingHeroReviveSlot
	15	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	16	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	17	= Command_GenericReviveSlot2	
	18	= Command_GenericReviveSlot3	
	19	= Command_GenericReviveSlot4	
	20	= Command_GenericReviveSlot5	
	21	= Command_GenericReviveSlot6	
	22	= Command_GenericReviveSlot7
	23	= Command_RadialBack			
End

CommandSet ElvenFortressCommandSet_GoodGreyHavens
	InitialVisible = 6
	//Main Menu
	1	= Command_ConstructElvenPorter
	2   	= Command_SelectRevivablesElvenFortress
	3	= Command_SelectUpgradesElvenFortress
	4	= Command_PurchaseNewEagle	
	
		//Improvements
	7       = Command_PurchaseUpgradeElvenFortressEnchantedAnvil
	8	= Command_PurchaseUpgradeElvenFortressBlessedMist
	9	= Command_PurchaseUpgradeElvenFortressCrystalMoat
	10	= Command_PurchaseUpgradeElvenFortressMysticFountains
	11	= Command_PurchaseUpgradeElvenFortressEncasingVines
	12	= Command_PurchaseUpgradeElvenFortressEaglesNest
	13	= Command_RadialBack
	
	//Heroes
	14	= Command_RingHeroReviveSlot
	15	= Command_CreateAHeroReviveSlot		// Note we also need an extra slot for the Create A Hero
	16	= Command_GenericReviveSlot1		//Revives any hero. Use Slot1-Slot8 and keep them UNIQUE within the same commandset! 
	17	= Command_GenericReviveSlot2	
	18	= Command_GenericReviveSlot3	
	19	= Command_GenericReviveSlot4	
	20	= Command_GenericReviveSlot5	
	21	= Command_GenericReviveSlot6	
	22	= Command_GenericReviveSlot7
	23	= Command_RadialBack			
End

CommandSet ElvenFortressExpansionPadCornerCommandSet
 	1 	= Command_ConstructElvenWatchtowerExpansion
	2 	= Command_ConstructElvenVigilantEntExpansion
	3 	= Command_ConstructElvenFloodgateExpansion
	4 	= Command_ConstructElvenCastleWallHubExpansion
End

CommandSet ElvenFortressExpansionPadSideCommandSet
End

CommandSet ElvenWallUpgradeNodeCommandSet
	1 	= Command_ElvenWallUpgradeToHub
	2 	= Command_ElvenWallUpgradeToRegularGate
	6 	= Command_Sell
	7 	= Command_StartSelfRepair
End

CommandSet ElvenCastleWallHubCommandSet
	1 	= Command_ElvenCastleWallHub_BeginWallSpan
	4 	= Command_CancelWallSpan
	6 	= Command_Sell
End

CommandSet ElvenWallCliffCapCommandSet
	6 	= Command_Sell
End


// THIS STRUCTURE MAY NOT REQUIRE A COMMAND SET, SINCE IT AUTOPRODUCES ITS ELVES
CommandSet ElvenBarracksCommandSet // this is the elven barracks from the original lotr game that was on the rohan side in the single player campaign
  //1	= Command_ConstructElvenWarriorHorde
  //2	= Command_ConstructElvenMirkwoodArcherHorde
  //6	= Command_Sell
End

CommandSet ERElvenBarracksCommandSet
  	1 	= Command_ConstructElvenLorienWarriorHorde
  	2 	= Command_ConstructElvenLorienArcherHorde
  	3 	= Command_ConstructElvenMithlondSentryHorde
  	4 	= Command_ConstructElvenMirkwoodArcherHorde
 	5 	= Command_ConstructNoldorWarriorHorde
  	7 	= Command_PurchaseUpgradeElvenBarracksLevel2
  	6 	= Command_Sell
End

CommandSet ElvenBarracksCommandSetLevel2
  	1 	= Command_ConstructElvenLorienWarriorHorde
  	2 	= Command_ConstructElvenLorienArcherHorde
  	3 	= Command_ConstructElvenMithlondSentryHorde
  	4 	= Command_ConstructElvenMirkwoodArcherHorde
  	5 	= Command_ConstructNoldorWarriorHorde
  	7 	= Command_PurchaseUpgradeElvenBarracksLevel3
  	6 	= Command_Sell
End

CommandSet ElvenBarracksCommandSetLevel3
  	1 	= Command_ConstructElvenLorienWarriorHorde
  	2 	= Command_ConstructElvenLorienArcherHorde
  	3 	= Command_ConstructElvenMithlondSentryHorde
  	4 	= Command_ConstructElvenMirkwoodArcherHorde
  	5 	= Command_ConstructNoldorWarriorHorde
  	6 	= Command_Sell
;  	7 	= Command_ConstructElvenLindonWarriorHorde
;  	8 	= Command_ConstructElvenImladrisWarriorHorde
End

CommandSet ElvenGreenPastureCommandSet
  	1 	= Command_ConstructElvenRivendellLancers
  	2 	= Command_ConstructElvenRivendellArchers
  	3 	= Command_ConstructElvenGreenPastureLevel2
  	6 	= Command_Sell
End

CommandSet ElvenGreenPastureCommandSetLevel2
  	1 	= Command_ConstructElvenRivendellLancers
  	2 	= Command_ConstructElvenRivendellArchers
  	3 	= Command_ConstructElvenGreenPastureLevel3
  	6 	= Command_Sell
End

CommandSet ElvenGreenPastureCommandSetLevel3
  	1 	= Command_ConstructElvenRivendellLancers
  	2 	= Command_ConstructElvenRivendellArchers
  	6 	= Command_Sell
End



CommandSet ElvenArwenCommandSet
	1	= Command_ToggleStance
	2	= Command_MountHorseArwen
	3	= Command_ArwenElvenGrace	
	4	= Command_ArwenFlood
	12	= Command_CaptureBuilding
	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet ElvenHaldirCommandSet
	1	= Command_ToggleStance
	2	= Command_ToggleHaldirWeapon
	3	= Command_HaldirFakeLeadershipButton
	4	= Command_HaldirGoldenArrow
	12	= Command_CaptureBuilding
 	13	= Command_AttackMove
	14	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet ElvenGlorfindelCommandSet
	1	= Command_ToggleStance 
	2 	= Command_MountHorseGlorfindel
	3 	= Command_SpecialAbilityGlorfindelBladeOfPurity
	4 	= Command_SpecialAbilityGlorfindelWindRider
	5 	= Command_GlorfindelStarlight
	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End

CommandSet ElvenThranduilCommandSet	
	1	= Command_ToggleStance
    	2  	= Command_ThranduilWildWalkButton
	3  	= Command_SpecialAbilityMoveUnseen ; Command_SpecialAbilityDeadEye
	4  	= Command_SpecialAbilityElfCloakThranduil
    	5  	= Command_SpecialAbilityDeadEye ; Command_SpecialAbilityMoveUnseen
    	6  	= Command_SpecialAbilityThornofVengeance
    	12 	= Command_CaptureBuilding
	13 	= Command_AttackMove
	14 	= Command_Stop
	16  = Command_SetStanceBattle
	17  = Command_SetStanceAggressive
	18  = Command_SetStanceHoldGround
End


CommandSet ElvenFoundationCommandSet  
   3  = Command_ConstructElvenMallornTree
   4  =	Command_ConstructElvenBarracks
   5  = Command_ConstructElvenGreenPasture
   6  =	Command_ConstructElvenEntMoot
   7  = Command_ConstructElvenStatue
   8  =	Command_ConstructElvenWatchTower
   9  = Command_ConstructElvenMirrorOfGaladriel   
   10 = Command_ConstructEregionForge
End

CommandSet ElvenMonumentFortressCommandSet	
	InitialVisible	= 6

	//Main Menu
	1	= Command_ConstructElvenPorter
	2	= Command_SelectRevivablesElvenMonumentFortress

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


CommandSet ElvenMonumentFortressRebuildCommandSet	
	InitialVisible	= 6

	//Main Menu
	1	= Command_ConstructElvenPorter
	2	= Command_SelectRevivablesElvenMonumentFortress
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


CommandSet ElvesSpellBookCommandSet
	1 = Command_SpellBookRallyingCall
	2 = Command_SpellBookHeal
	3 = Command_SpellBookFarsight
	
	4 = Command_SpellBookTomBombadil
	5 = Command_SpellBookEnshroudingMist
	6 = Command_SpellBookArrowVolleyGood
	7 = Command_SpellBookElvenWood

	8 = Command_SpellBookCloudBreak
	9 = Command_SpellBookEntAllies
	10 = Command_SpellBookEagleAllies

	11 = Command_SpellBookFlood
	12 = Command_SpellBookSunflare
End

CommandSet ElvesSpellStoreCommandSet
	1 = Command_PurchaseSpellRallyingCallMP
	2 = Command_PurchaseSpellHeal
	3 = Command_PurchaseSpellFarsight
	
	4 = Command_PurchaseSpellEnshroudingMistMP
	5 = Command_PurchaseSpellArrowVolleyGood
	6 = Command_PurchaseSpellElvenWood
	7 = Command_PurchaseSpellTomBombadil

	8 = Command_PurchaseSpellEagleAllies
	9 = Command_PurchaseSpellCloudBreak
	10 = Command_PurchaseSpellEntAllies

	11 = Command_PurchaseSpellSunflare
	12 = Command_PurchaseSpellFlood
End



CommandSet ElvenCastleBaseKeepCommandSet
	1	= Command_GenericReviveSlot1
	2	= Command_GenericReviveSlot2
	3	= Command_GenericReviveSlot3
	4	= Command_GenericReviveSlot4
	5	= Command_GenericReviveSlot5
	6	= Command_GenericReviveSlot6
	7	= Command_GenericReviveSlot7
	9	= Command_StartCitadelSelfRepair
End


CommandSet CommandSetInnElvenFaction
	1	= Command_ConstructInnElvenHobbitShirrif
	2	= Command_StartSelfRepair
End

