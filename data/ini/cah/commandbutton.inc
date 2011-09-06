////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//CREATEAHERO//
//////////////


//**************************************************************************************************************************
//**************************************************************************************************************************
//**************************************************************************************************************************
//------------------- CREATE A HERO START ----------------------------
//**************************************************************************************************************************
//**************************************************************************************************************************
//**************************************************************************************************************************


//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityTeleportToCaster
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityATeleportToCaster//SpecialAbilityTeleportToCaster		//	Name HACK - see special power
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:TeleportLevel1
	ButtonImage		   = HSKingDainSummonRoyalGuard
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipTeleportLevel1
	InPalantir		   = Yes
	
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_TELEPORTLEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityTeleportLevel2
	Command			 = SPECIAL_POWER
	SpecialPower	 = SpecialAbilityStoreObjectsForLevel2Teleport
	Options			 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	TextLabel		 = CONTROLBAR:TeleportLevel2
	ButtonImage		 = HSKingDainSummonRoyalGuard
	ButtonBorderType = ACTION
	DescriptLabel	 = CONTROLBAR:ToolTipTeleportLevel2
	InPalantir		 = Yes
	RadiusCursorType = DominateRadiusCursor
	
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SpecialAbilityTeleportToCaster
	CreateAHeroUICostIfSelected				  = CAH_TELEPORTLEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityTeleportLevel3
	Command			 = SPECIAL_POWER
	SpecialPower	 = SpecialAbilityStoreObjectsForLevel3Teleport
	Options			 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	TextLabel		 = CONTROLBAR:TeleportLevel3
	ButtonImage		 = HSKingDainSummonRoyalGuard
	ButtonBorderType = ACTION
	DescriptLabel	 = CONTROLBAR:ToolTipTeleportLevel3
	InPalantir		 = Yes
	RadiusCursorType = DominateRadiusCursor
	
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SpecialAbilityTeleportLevel2
	CreateAHeroUICostIfSelected				  = CAH_TELEPORTLEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_TeleportStoredList
	Command			 = SPECIAL_POWER
	SpecialPower	 = SpecialAbilityTeleportStoredObjects
	Options			 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	InPalantir		 = No
	RadiusCursorType = EnshroudingMistRadiusCursor	// should be different to the other	power probably.
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_TeleportStoredList_2
	Command			 = SPECIAL_POWER
	SpecialPower	 = SpecialAbilityTeleportStoredObjects_2
	Options			 = CONTEXTMODE_COMMAND NEED_TARGET_POS
	InPalantir		 = No
	RadiusCursorType = EnshroudingMistRadiusCursor	// should be different to the other	power probably.
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityAthelas
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityCreateAHeroAthelas
	TextLabel		   = CONTROLBAR:CAHAthelas
	ButtonImage		   = HSAragornAthelas
	CursorName		   = Bombard
	RadiusCursorType   = AthelasRadiusCursor
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAHAthelas
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 100.0
	NeedDamagedTarget  = Yes
//	UnitSpecificSound  = AragornVoiceAthelas

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_ATHELAS_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityElendil
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityCreateAHeroElendil
//	Options			   = 
	TextLabel		   = CONTROLBAR:CAHElendil
	ButtonImage		   = HSAragornElendil
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Elendil
//	UnitSpecificSound  = AragornVoiceElendil
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 60.0  

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_ELENDIL_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityBladeMaster
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityCreateAHeroBladeMaster
	TextLabel		   = CONTROLBAR:CAHBladeMaster
	ButtonImage		   = HSAragornBladeMaster
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_BladeMaster
	InPalantir		   = Yes
	AutoAbility		   = Yes
	AutoDelay		   = 30.0 // this should sync with the Aragorn's hero mode effect time
	PresetRange		   = 50.0
	UnitSpecificSound  = AragornVoiceBladeMaster

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BLADEMASTER_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_EowynShieldMaiden
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityEowynShieldMaiden
	TextLabel		   = CONTROLBAR:ShieldMaiden
	ButtonImage		   = HSEowynShieldMaiden
	RadiusCursorType   = TrainingRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipShieldMaiden
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 50.0
	UnitSpecificSound  = GenericSpell
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
// CommandButton Command_CreateAHero_SpecialAbilityKingsFavor
// 	Command			   = SPECIAL_POWER 
// 	SpecialPower	   = SpecialAbilityCreateAHeroKingsFavor
// 	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
// 	TextLabel		   = CONTROLBAR:CAHKingsFavor
// 	ButtonImage		   = HPTheodenKing'sFavor
// 	CursorName		   = Bombard
// 	RadiusCursorType   = KingsFavorRadiusCursor
// 	ButtonBorderType   = ACTION	
// 	DescriptLabel	   = CONTROLBAR:ToolTipKingsFavor
// 	AutoAbility		   = No
// 	InPalantir		   = Yes
// 
// 	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
// 	CreateAHeroUIMinimumLevel				  = 1
// 	CreateAHeroUIPrerequisiteButtonName = None
//	CreateAHeroUICostIfSelected				  = 100
// End


//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityWordOfPower
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityCreateAHeroWordOfPower
//	Options			   = 
	TextLabel		   = CONTROLBAR:CAHWordofPower
	ButtonImage		   = Gandolf_radcircle
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipWordofPower_CAH
	AutoAbility		   = Yes
	PresetRange		   = 120.0
//	UnitSpecificSound  = 
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_WORDOFPOWER_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityForcePush_Level1
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityForcePush_Level1
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:ForcePush_Level1
	ButtonImage		   = CAHForcePush
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipForcePush_Level1
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	AutoAbility		   = Yes
	PresetRange		   = 80.0
//	UnitSpecificSound  = 
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_FORCEPUSHLEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityForcePush_Level2
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityForcePush_Level2
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:ForcePush_Level2
	ButtonImage		   = CAHForcePush
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipForcePush_Level2
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	AutoAbility		   = Yes
	PresetRange		   = 80.0
//	UnitSpecificSound  = 
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SpecialAbilityForcePush_Level1
	CreateAHeroUICostIfSelected				  = CAH_FORCEPUSHLEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityForcePush_Level3
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityForcePush_Level3
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:ForcePush_Level3
	ButtonImage		   = CAHForcePush
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipForcePush_Level3
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	AutoAbility		   = Yes
	PresetRange		   = 80.0
//	UnitSpecificSound  = 
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SpecialAbilityForcePush_Level2
	CreateAHeroUICostIfSelected				  = CAH_FORCEPUSHLEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityConvertEnemy_L1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityConvertEnemy_L1
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:ConvertEnemy_L1
	ButtonImage		   = CAHConvert
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipConvertEnemy_L1
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate	

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_CONVERTENEMY_L1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityConvertEnemy_L2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityConvertEnemy_L2
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:ConvertEnemy_L2
	ButtonImage		   = CAHConvert
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipConvertEnemy_L2
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SpecialAbilityConvertEnemy_L1
	CreateAHeroUICostIfSelected				  = CAH_CONVERTENEMY_L2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCurseEnemy_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCurseEnemy_Level1
	Options			   = NEED_TARGET_ENEMY_OBJECT
	TextLabel		   = CONTROLBAR:CAH_Curse_Level1
	ButtonImage		   = HSWitchKingHour
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Curse_Level1
	CursorName		   = EvilAbilityObj
	InvalidCursorName  = GenericInvalid
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_CURSE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCurseEnemy_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCurseEnemy_Level2
	Options			   = NEED_TARGET_ENEMY_OBJECT
	TextLabel		   = CONTROLBAR:CAH_Curse_Level2
	ButtonImage		   = HSWitchKingHour
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Curse_Level2
	CursorName		   = EvilAbilityObj
	InvalidCursorName  = GenericInvalid
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityCurseEnemy_Level1
	CreateAHeroUICostIfSelected				  = CAH_CURSE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCurseEnemy_Level3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCurseEnemy_Level3
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_Curse_Level3
	ButtonImage		   = HSWitchKingHour
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Curse_Level3
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityCurseEnemy_Level2
	CreateAHeroUICostIfSelected				  = CAH_CURSE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Fireball_Level1
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityHeroFireball_Level1
	Options			   = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT //	CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:SpecialAbilityCAHFireball1
	ButtonImage		   = HSSarumanFireBallAttack
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCAH_Fireball_Level1
//	UnitSpecificSound  = 
	CursorName		   = EvilAbilityObj
	InvalidCursorName  = GenericInvalid
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_FIREBALL_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Fireball_Level2
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityHeroFireball_Level2
	Options			   = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT //	CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:SpecialAbilityCAHFireball2
	ButtonImage		   = HSSarumanFireBallAttack
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCAH_Fireball_Level2
//	UnitSpecificSound  = 
	CursorName		   = EvilAbilityObj
	InvalidCursorName  = GenericInvalid
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_Fireball_Level1
	CreateAHeroUICostIfSelected				  = CAH_FIREBALL_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Fireball_Level3
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityHeroFireball_Level3
	Options			   = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT //	CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:SpecialAbilityCAHFireball3
	ButtonImage		   = HSSarumanFireBallAttack
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCAH_Fireball_Level3
//	UnitSpecificSound  = 
	CursorName		   = EvilAbilityObj
	InvalidCursorName  = GenericInvalid
	InPalantir		   = Yes
	AutoAbility		   = Yes
	PresetRange		   = 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_Fireball_Level2
	CreateAHeroUICostIfSelected				  = CAH_FIREBALL_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_LightBlast_L1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityLightBlast_L1 
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CAH:Command_CreateAHero_Lightblast_L1_Name
	ButtonImage		   = CAHBlastofLight
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipLightBlast_Level1
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_LIGHTBLAST_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_LightBlast_L2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityLightBlast_L2 
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CAH:Command_CreateAHero_Lightblast_L2_Name
	ButtonImage		   = CAHBlastofLight
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipLightBlast_Level2
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_LightBlast_L1
	CreateAHeroUICostIfSelected				  = CAH_LIGHTBLAST_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_LightBlast_L3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityLightBlast_L3 
	Options			   = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel		   = CAH:Command_CreateAHero_Lightblast_L3_Name
	ButtonImage		   = CAHBlastofLight
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipLightBlast_Level3
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_LightBlast_L2
	CreateAHeroUICostIfSelected				  = CAH_LIGHTBLAST_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_SummonAllies_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroHotWSummonAllies_Level1
	TextLabel		   = CONTROLBAR:HotWSummonAllies_Level1
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipHotWSummonAllies_Level1
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_SummonAllies_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroHotWSummonAllies_Level2
	TextLabel		   = CONTROLBAR:HotWSummonAllies_Level2
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipHotWSummonAllies_Level2
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_HotW_SummonAllies_Level1
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_SummonAllies_Level3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroHotWSummonAllies_Level3
	TextLabel		   = CONTROLBAR:HotWSummonAllies_Level3
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipHotWSummonAllies_Level3
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_HotW_SummonAllies_Level2
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_SummonAllies_Level4
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroHotWSummonAllies_Level4
	TextLabel		   = CONTROLBAR:HotWSummonAllies_Level4
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipHotWSummonAllies_Level4
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_HotW_SummonAllies_Level3
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_SummonAllies_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSoSSummonAllies_Level1
	TextLabel		   = CONTROLBAR:SoSSummonAllies_Level1
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipSoSSummonAllies_Level1
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers  

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL1_COST
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_SummonAllies_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSoSSummonAllies_Level2
	TextLabel		   = CONTROLBAR:SoSSummonAllies_Level2
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipSoSSummonAllies_Level2
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SoS_SummonAllies_Level1
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_SummonAllies_Level3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSoSSummonAllies_Level3
	TextLabel		   = CONTROLBAR:SoSSummonAllies_Level3
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipSoSSummonAllies_Level3
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SoS_SummonAllies_Level2
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_SummonAllies_Level4
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSoSSummonAllies_Level4
	TextLabel		   = CONTROLBAR:SoSSummonAllies_Level4
	ButtonImage		   = CAHSummonAllies
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = SummonOathBreakersRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipSoSSummonAllies_Level4
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SoS_SummonAllies_Level3
	CreateAHeroUICostIfSelected				  = CAH_SUMMONALLIES_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Blink
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityHeroBlink
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:SpecialAbilityHeroBlink
	ButtonImage		   = CAHTeleport
	ButtonBorderType   = ACTION	
	CursorName		   = EvilAbilityObj	 
	InvalidCursorName  = GenericInvalid
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityHeroBlink
	InPalantir		   = Yes   //	 To	be hidden by default

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BLINK_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_A_ToggleWeapon
	Command			   = TOGGLE_WEAPONSET
	Options			   = UNMOUNTED_ONLY	TOGGLE_IMAGE_ON_WEAPONSET NEED_UPGRADE
	NeededUpgrade	   = Upgrade_CreateAHeroToggleWeapon
	FlagsUsedForToggle = WEAPONSET_TOGGLE_1
	TextLabel		   = CONTROLBAR:SpecialAbilityCreateAHeroArcherToggleWeapon
	ButtonImage		   = CAHGoodToggleWeapon
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCreateAHeroArcherToggleWeapon
	InPalantir		   = Yes   
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_TOGGLEWEAPON_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CM_ToggleWeapon
	Command			   = TOGGLE_WEAPONSET 
	Options			   = UNMOUNTED_ONLY	TOGGLE_IMAGE_ON_WEAPONSET NEED_UPGRADE
	NeededUpgrade	   = Upgrade_CreateAHeroToggleWeapon
	FlagsUsedForToggle = WEAPONSET_TOGGLE_1
	TextLabel		   = CONTROLBAR:SpecialAbilityCreateAHeroCorruptedManToggleWeapon_Level1
	ButtonImage		   = CAHEvilToggleWeapon 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCreateAHeroArcherToggleWeapon
	InPalantir		   = Yes   
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_TOGGLEWEAPON_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CM_ToggleWeapon_Level2
	Command			   = TOGGLE_WEAPONSET 
	Options			   = UNMOUNTED_ONLY	TOGGLE_IMAGE_ON_WEAPONSET NEED_UPGRADE
	NeededUpgrade	   = Upgrade_CreateAHeroToggleWeapon_Level2
	FlagsUsedForToggle = WEAPONSET_TOGGLE_1
	TextLabel		   = CONTROLBAR:SpecialAbilityCreateAHeroCorruptedManToggleWeapon_Level2
	ButtonImage		   = CAHEvilToggleWeapon 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipSpecialAbilityCreateAHeroArcherToggleWeapon
	InPalantir		   = Yes   
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_CM_ToggleWeapon
	CreateAHeroUICostIfSelected				  = CAH_TOGGLEWEAPON_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BallLightning_L1
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityBallLightning_L1
	Options			   = NEED_TARGET_ENEMY_OBJECT  //CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_BallLightning_L1
	ButtonImage		   = HSBallLightning
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_BallLightning_L1
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BALLLIGHTNING_L1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BallLightning_L2
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityBallLightning_L2
	Options			   = NEED_TARGET_ENEMY_OBJECT  //CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_BallLightning_L2
	ButtonImage		   = HSBallLightning
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_BallLightning_L2
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_BallLightning_L1
	CreateAHeroUICostIfSelected				  = CAH_BALLLIGHTNING_L2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BallLightning_L3
	Command			   = SPECIAL_POWER 
	SpecialPower	   = SpecialAbilityBallLightning_L3
	Options			   = NEED_TARGET_ENEMY_OBJECT  //CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_BallLightning_L3
	ButtonImage		   = HSBallLightning
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_BallLightning_L3
	AutoAbility		   = Yes
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_BallLightning_L2
	CreateAHeroUICostIfSelected				  = CAH_BALLLIGHTNING_L3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_W_SpecialAbilityTrueSight
	Command			 = SPECIAL_POWER 
	SpecialPower	 = SpecialAbilityCreateAHeroWTrueSight
	TextLabel		 = CONTROLBAR:CAH_W_TrueSight
	ButtonImage	     = HSTrueSight
	ButtonBorderType = ACTION 
	DescriptLabel	 = CONTROLBAR:ToolTipCAH_A_TrueSight
	InPalantir		 = Yes
	AutoAbility		 = Yes
	PresetRange		 = 60.0	 
	UnitSpecificSound = CaH_TrueSight

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_TRUESIGHT_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_A_SpecialAbilityTrueSight
	Command			 = SPECIAL_POWER 
	SpecialPower	 = SpecialAbilityCreateAHeroATrueSight
	TextLabel		 = CONTROLBAR:CAH_A_TrueSight
	ButtonImage	     = HSTrueSight
	ButtonBorderType = ACTION 
	DescriptLabel	 = CONTROLBAR:ToolTipCAH_A_TrueSight
	InPalantir		 = Yes
	AutoAbility		 = Yes
	PresetRange		 = 60.0	
	UnitSpecificSound = CaH_TrueSight

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None 
	CreateAHeroUICostIfSelected				  = CAH_TRUESIGHT_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Invulnerability_Level1
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityCreateAHeroInvulnerability_Level1
  TextLabel               = CONTROLBAR:Invulnerability_Level1
  ButtonImage             = CAHInvulnerability
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipInvulnerability_Level1
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = CaH_Invulnerability

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai

	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_INVULNERABILITY_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Invulnerability_Level2
	Command								= SPECIAL_POWER
	SpecialPower						= SpecialAbilityCreateAHeroInvulnerability_Level2
	TextLabel							= CONTROLBAR:Invulnerability_Level2
	ButtonImage							= CAHInvulnerability
	RadiusCursorType					= TrainingRadiusCursor
	ButtonBorderType					= ACTION
	DescriptLabel						= CONTROLBAR:ToolTipInvulnerability_Level2
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 50.0
	UnitSpecificSound					= CaH_Invulnerability

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel			= 7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_Invulnerability_Level1 
	CreateAHeroUICostIfSelected				  = CAH_INVULNERABILITY_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Invulnerability_Level3
	Command								= SPECIAL_POWER
	SpecialPower						= SpecialAbilityCreateAHeroInvulnerability_Level3
	TextLabel							= CONTROLBAR:Invulnerability_Level3
	ButtonImage							= CAHInvulnerability
	RadiusCursorType					= TrainingRadiusCursor
	ButtonBorderType					= ACTION
	DescriptLabel						= CONTROLBAR:ToolTipInvulnerability_Level3
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 50.0
	UnitSpecificSound					= CaH_Invulnerability

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel			= 10
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_Invulnerability_Level2
	CreateAHeroUICostIfSelected				  = CAH_INVULNERABILITY_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CrippleStrikeRanged_Level1
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroCrippleStrikeRanged_Level1
	Options								= NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:SpecialAbilityCrippleStrikeRanged_Level1
	CursorName							= EvilAbilityObj
	InvalidCursorName					= GenericInvalid 
	ButtonImage							= HSLurtzCrippleStrike
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipSpecialAbilityCrippleStrikeRanged_Level1
	InPalantir							= Yes

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel			= 1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKERANGED_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CrippleStrikeRanged_Level2
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroCrippleStrikeRanged_Level2
	Options								= NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:SpecialAbilityCrippleStrikeRanged_Level2
	CursorName							= EvilAbilityObj
	InvalidCursorName					= GenericInvalid 
	ButtonImage							= HSLurtzCrippleStrike
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipSpecialAbilityCrippleStrikeRanged_Level2
	InPalantir							= Yes

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel			= 3
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_CrippleStrikeRanged_Level1
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKERANGED_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CrippleStrikeRanged_Level3
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroCrippleStrikeRanged_Level3
	Options								= NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:SpecialAbilityCrippleStrikeRanged_Level3
	CursorName							= EvilAbilityObj
	InvalidCursorName					= GenericInvalid 
	ButtonImage							= HSLurtzCrippleStrike
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipSpecialAbilityCrippleStrikeRanged_Level3
	InPalantir							= Yes

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel			= 7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_CrippleStrikeRanged_Level2
	CreateAHeroUICostIfSelected			= CAH_CRIPPLESTRIKERANGED_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CrippleStrikeRanged_Level4
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroCrippleStrikeRanged_Level4
	Options								= NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:SpecialAbilityCrippleStrikeRanged_Level4
	CursorName							= EvilAbilityObj
	InvalidCursorName					= GenericInvalid 
	ButtonImage							= HSLurtzCrippleStrike
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipSpecialAbilityCrippleStrikeRanged_Level4
	InPalantir							= Yes

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel			= 10
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_CrippleStrikeRanged_Level3
	CreateAHeroUICostIfSelected			= CAH_CRIPPLESTRIKERANGED_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_CrippleStrikeMelee_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level1
  Options                 = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilityHotWCrippleStrikeMelee_Level1
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid 
  ButtonImage             = HSCrippleStrikeMelee
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityHotWCrippleStrikeMelee_Level1
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKEMELEE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HotW_CrippleStrikeMelee_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroHotWCrippleStrikeMelee_Level2
  Options                 = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilityHotWCrippleStrikeMelee_Level2
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid 
  ButtonImage             = HSCrippleStrikeMelee
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilityHotWCrippleStrikeMelee_Level2
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_HotW_CrippleStrikeMelee_Level1
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKEMELEE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_CrippleStrikeMelee_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level1
  Options                 = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilitySoSCrippleStrikeMelee_Level1
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid 
  ButtonImage             = HSCrippleStrikeMelee
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilitySoSCrippleStrikeMelee_Level1
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKEMELEE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SoS_CrippleStrikeMelee_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroSoSCrippleStrikeMelee_Level2
  Options                 = NEED_TARGET_ENEMY_OBJECT // CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:SpecialAbilitySoSCrippleStrikeMelee_Level2
  CursorName              = EvilAbilityObj
  InvalidCursorName       = GenericInvalid 
  ButtonImage             = HSCrippleStrikeMelee
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipSpecialAbilitySoSCrippleStrikeMelee_Level2
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_SoS_CrippleStrikeMelee_Level1
	CreateAHeroUICostIfSelected				  = CAH_CRIPPLESTRIKEMELEE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_ToggleMounted
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroToggleMounted
	TextLabel		   = CONTROLBAR:HeroToggleHorse
	Options			   = TOGGLE_IMAGE_ON_WEAPONSET ON_GROUND_ONLY
	FlagsUsedForToggle = MOUNTED
	ButtonImage		   = HSTheodenMountDismount HSTheodenMountDismount
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:HeroToggleHorse_Palantir
	InPalantir		   = Yes  
//	UnitSpecificSound  = [WHATEVER]	[WHATEVER]

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName =	None
	CreateAHeroUICostIfSelected				  = CAH_TOGGLEMOUNTED_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCreateAHeroTrainAllies_Level_1
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroTrainAllies_Level_1
	Options								= NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:TrainAllies_Level_1
	ButtonImage							= HPTheodenKing'sFavor
	CursorName							= Bombard
	RadiusCursorType					= KingsFavorRadiusCursor
	InvalidCursorName					= GenericInvalid
	ButtonBorderType					= ACTION 
	DescriptLabel						= CAH:Command_CreateAHero_TrainAllies_Level1_Name
	AutoAbility							= No
	InPalantir							= Yes
	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassCorruptedMan	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassArcher 
	CreateAHeroUIMinimumLevel			= 1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_TRAINALLIES_LEVEL_1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCreateAHeroTrainAllies_Level_2
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroTrainAllies_Level_2
	Options								= NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:TrainAllies_Level_2
	ButtonImage							= HPTheodenKing'sFavor
	CursorName							= Bombard
	RadiusCursorType					= KingsFavorRadiusCursor
	InvalidCursorName					= GenericInvalid
	ButtonBorderType					= ACTION 
	DescriptLabel						= CAH:Command_CreateAHero_TrainAllies_Level2_Name
	AutoAbility							= No
	InPalantir							= Yes

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassCorruptedMan	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassArcher  
	CreateAHeroUIMinimumLevel			= 3
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_SpecialAbilityCreateAHeroTrainAllies_Level_1
	CreateAHeroUICostIfSelected				  = CAH_TRAINALLIES_LEVEL_2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCreateAHeroTrainAllies_Level_3
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroTrainAllies_Level_3
	Options								= NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:TrainAllies_Level_3
	ButtonImage							= HPTheodenKing'sFavor
	CursorName							= Bombard
	RadiusCursorType					= KingsFavorRadiusCursor
	InvalidCursorName					= GenericInvalid
	ButtonBorderType					= ACTION 
	DescriptLabel						= CAH:Command_CreateAHero_TrainAllies_Level3_Name
	AutoAbility							= No
	InPalantir							= Yes
	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassCorruptedMan	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassArcher 
	CreateAHeroUIMinimumLevel			= 7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_SpecialAbilityCreateAHeroTrainAllies_Level_2
	CreateAHeroUICostIfSelected				  = CAH_TRAINALLIES_LEVEL_3_COST
End


//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_WordOfPoultry_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroWordOfPoultry_Level1
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:WordOfPoultry_Level1
  ButtonImage             = CAHCalltheHerd							//HPWordOfPoultry
  CursorName              = Bombard
  RadiusCursorType        = WordOfPoultryRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWordOfPoultry_Level1
  AutoAbility				= No
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	None
	CreateAHeroUICostIfSelected				  = CAH_WORDOFPOULTRY_LEVEL1_COST
End

//--------------------------------------------------------------
CommandButton Command_CreateAHero_WordOfPoultry_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroWordOfPoultry_Level2
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:WordOfPoultry_Level2
  ButtonImage             = CAHCalltheHerd						//HPWordOfPoultry
  CursorName              = Bombard
  RadiusCursorType        = WordOfPoultryRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipWordOfPoultry_Level2
  AutoAbility				= No
  InPalantir			  = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassIstariWizard
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_WordOfPoultry_Level1
	CreateAHeroUICostIfSelected				  = CAH_WORDOFPOULTRY_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_ShieldCrush_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroShieldCrush_Level1
  TextLabel               = CAH:Command_CreateAHero_ShieldCrush_Level1_Name
  ButtonImage             = CAHShieldCrush
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_ShieldCrush_L1
  InPalantir			  = Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_SHIELDCRUSH_LEVEL1_COST
  UnitSpecificSound			= CaH_ShieldCrush
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_ShieldCrush_Level3
  Command					= SPECIAL_POWER 
  SpecialPower				= SpecialAbilityCreateAHeroShieldCrush_Level3
  TextLabel					= CAH:Command_CreateAHero_ShieldCrush_Level3_Name
  ButtonImage				= CAHShieldCrush
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipCAH_ShieldCrush_L3
  InPalantir				= Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_ShieldCrush_Level1
	CreateAHeroUICostIfSelected				  = CAH_SHIELDCRUSH_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
// CommandButton Command_CreateAHero_HotW_Conquer
// 	Command				= SPECIAL_POWER 
// 	SpecialPower		= SpecialAbilityCreateAHeroHotWConquer
// 	Options				= CONTEXTMODE_COMMAND NEED_TARGET_ENEMY_OBJECT
// 	TextLabel			= CONTROLBAR:CAH_HotW_Conquer
// 	ButtonImage			= CAHConquer
// 	ButtonBorderType	= ACTION 
// 	DescriptLabel		= CONTROLBAR:ToolTipCAH_HotW_Conquer
// 	InPalantir			= Yes
// 	AutoAbility			= No
// 	CursorName			= CaptureBuilding
// 	InvalidCursorName	= GenericInvalid
// 
// 	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
// 	CreateAHeroUIMinimumLevel				  = 7
// 	CreateAHeroUIPrerequisiteButtonName = None
//	CreateAHeroUICostIfSelected				  = 700
// End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
// CommandButton Command_CreateAHero_CM_Conquer
// 	Command				= SPECIAL_POWER 
// 	SpecialPower		= SpecialAbilityCreateAHeroCMConquer
// 	Options				= CONTEXTMODE_COMMAND NEED_TARGET_ENEMY_OBJECT
// 	TextLabel			= CONTROLBAR:CAH_CM_Conquer
// 	ButtonImage			= CAHConquer
// 	ButtonBorderType	= ACTION 
// 	DescriptLabel		= CONTROLBAR:ToolTipCAH_CM_Conquer
// 	InPalantir			= Yes
// 	AutoAbility			= No
// 	CursorName			= CaptureBuilding
// 	InvalidCursorName	= GenericInvalid
// 
// 	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
// 	CreateAHeroUIMinimumLevel				  = 7
// 	CreateAHeroUIPrerequisiteButtonName = None
//	CreateAHeroUICostIfSelected				  = 700
// End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Starlight
	Command				= SPECIAL_POWER
	SpecialPower		= SpecialAbilityCreateAHeroStarlight
	TextLabel			= CONTROLBAR:CAH_Starlight
	DescriptLabel		= CONTROLBAR:ToolTipCAH_Starlight
	ButtonImage			= HSGlorfindelStarlight
	ButtonBorderType	= ACTION
	InPalantir			= Yes
	AutoAbility			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_STARLIGHT_COST
	UnitSpecificSound	= CaH_Starlight	
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroThrowSpear_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAThrowSpear_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_ThrowSpear_Level1
  ButtonImage		= HSEomerThrowSpear
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_ThrowSpear_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_THROWSPEAR_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroThrowSpear_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroThrowSpear_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_ThrowSpear_Level2
  ButtonImage		= HSEomerThrowSpear
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_ThrowSpear_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroThrowSpear_Level1
	CreateAHeroUICostIfSelected				  = CAH_THROWSPEAR_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroThrowSpear_Level3
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroThrowSpear_Level3
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_ThrowSpear_Level3
  ButtonImage		= HSEomerThrowSpear
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_ThrowSpear_Level3
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroThrowSpear_Level2
	CreateAHeroUICostIfSelected				  = CAH_THROWSPEAR_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_SpecialAbilityCreateAHeroHeroicCharge
  Command                 = SPECIAL_POWER
  //Options                 = MOUNTED_ONLY
  SpecialPower            = SpecialAbilityCreateAHeroHeroicCharge
  TextLabel               = CONTROLBAR:CAH_HeroicCharge
  ButtonImage             = HPTheodenGloriousCharge
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCAH_HeroicCharge
  InPalantir		      = Yes
  AutoAbility			  = Yes
  PresetRange			  = 160.0
  //UnitSpecificSound       = TheodenVoiceGloriousCharge

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassHeroOfTheWest
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName		  = None
	CreateAHeroUICostIfSelected				  = CAH_HEROICCHARGE_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Level1
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroOilFire_Level1
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level1
	ButtonImage		   = BDFortress_OilCasks
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level1
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilLight
	ToggleButtonName	= Command_CreateAHero_OilFire_Ignite_Level1

	CreateAHeroUIAllowableUpgrades			  =	 Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName =	None
	CreateAHeroUICostIfSelected				  = CAH_OILFIRE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Ignite_Level1
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroIgniteOil_Level1
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level1
	ButtonImage		   = HSFireDrakeInferno
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level1
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilLight
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Level2
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroOilFire_Level2
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level2
	ButtonImage		   = BDFortress_OilCasks
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level2
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilSpill
	ToggleButtonName	= Command_CreateAHero_OilFire_Ignite_Level2

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_OilFire_Level1
	CreateAHeroUICostIfSelected				  = CAH_OILFIRE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Ignite_Level2
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroIgniteOil_Level2
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level2
	ButtonImage		   = HSFireDrakeInferno
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level2
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilLight
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Level3
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroOilFire_Level3
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level3
	ButtonImage		   = BDFortress_OilCasks
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level3
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilSpill
	ToggleButtonName	= Command_CreateAHero_OilFire_Ignite_Level3

	CreateAHeroUIAllowableUpgrades			  =	 Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_OilFire_Level2
	CreateAHeroUICostIfSelected				  = CAH_OILFIRE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_OilFire_Ignite_Level3
	Command			   = SPECIAL_POWER_TOGGLE
	SpecialPower	   = SpecialAbilityCreateAHeroIgniteOil_Level3
	TextLabel		   = CONTROLBAR:CAH_SpillOil_Level3
	ButtonImage		   = HSFireDrakeInferno
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_SpillOil_Level3
	InPalantir		   = Yes  
	UnitSpecificSound  = CaH_OilLight
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_InspireFear_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroInspireFear_Level1
	Options				= NONPRESSABLE
	TextLabel		   = CONTROLBAR:CAH_InspireFear_Level1
	ButtonImage		   = HSSauronTerribleFury
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_InspireFear_Level1
	InPalantir		   = Yes  
//	UnitSpecificSound  = [WHATEVER]	[WHATEVER]

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName =	None
	CreateAHeroUICostIfSelected				  = CAH_INSPIREFEAR_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_InspireFear_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroInspireFear_Level2
	TextLabel		   = CONTROLBAR:CAH_InspireFear_Level2
	ButtonImage		   = HSSauronTerribleFury
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_InspireFear_Level2
	InPalantir		   = Yes  
//	UnitSpecificSound  = [WHATEVER]	[WHATEVER]

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_InspireFear_Level1
	CreateAHeroUICostIfSelected				  = CAH_INSPIREFEAR_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
//CommandButton Command_CreateAHero_InspireFear_Level3
//	Command			   = SPECIAL_POWER
//	SpecialPower	   = SpecialAbilityCreateAHeroInspireFear_Level3
//	TextLabel		   = CONTROLBAR:CAH_InspireFear_Level3
//	ButtonImage		   = HSSauronTerribleFury
//	ButtonBorderType   = ACTION	
//	DescriptLabel	   = CONTROLBAR:ToolTipCAH_InspireFear_Level3
//	InPalantir		   = Yes  
////	UnitSpecificSound  = [WHATEVER]	[WHATEVER]
//
//	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
//	CreateAHeroUIMinimumLevel	= 1 //	10
//	CreateAHeroUIPrerequisiteButtonName =	Command_CreateAHero_InspireFear_Level2
//	CreateAHeroUICostIfSelected				  = 1000
//End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HowlOfRage_Level1
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroHowlOfRage_Level1
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_HowlOfRage_Level1
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipCAH_HowlOfRage_Level1
    ButtonImage			= UCCommon_DrummerTrollRoar
	RadiusCursorType    = WarChantRadiusCursor
	InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_HOWLOFRAGE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HowlOfRage_Level2
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroHowlOfRage_Level2
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_HowlOfRage_Level2
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipCAH_HowlOfRage_Level2
    ButtonImage			= UCCommon_DrummerTrollRoar
	RadiusCursorType    = WarChantRadiusCursor
	InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_HowlOfRage_Level1
	CreateAHeroUICostIfSelected				  = CAH_HOWLOFRAGE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_HowlOfRage_Level3
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroHowlOfRage_Level3
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_HowlOfRage_Level3
	ButtonBorderType	= ACTION 
	DescriptLabel		= CONTROLBAR:TooltipCAH_HowlOfRage_Level3
    ButtonImage			= UCCommon_DrummerTrollRoar
	RadiusCursorType    = WarChantRadiusCursor
	InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_HowlOfRage_Level2
	CreateAHeroUICostIfSelected				  = CAH_HOWLOFRAGE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
// CommandButton Command_CreateAHero_Infernal_Level1
//   Command                 = SPECIAL_POWER 
//   SpecialPower            = SpecialAbilityCreateAHeroInfernal_Level1
//   TextLabel               = CONTROLBAR:CAH_Infernal_L1
//   ButtonImage             = HSFireDrakeInferno
//   ButtonBorderType        = ACTION 
//   DescriptLabel           = CONTROLBAR:ToolTipCAH_Infernal_L1
//   InPalantir			  = Yes
//   AutoAbility				= No
// 				
// 	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
// 	CreateAHeroUIMinimumLevel				  = 3
// 	CreateAHeroUIPrerequisiteButtonName = None
//	CreateAHeroUICostIfSelected				  = 300
// End
// 
// //------------------- Create A Hero ----------------------------
// //--------------------------------------------------------------
// CommandButton Command_CreateAHero_Infernal_Level2
//   Command                 = SPECIAL_POWER 
//   SpecialPower            = SpecialAbilityCreateAHeroInfernal_Level2
//   TextLabel               = CONTROLBAR:CAH_Infernal_L2
//   ButtonImage             = HSFireDrakeInferno
//   ButtonBorderType        = ACTION 
//   DescriptLabel           = CONTROLBAR:ToolTipCAH_Infernal_L2
//   InPalantir			  = Yes
//   AutoAbility				= No
// 					
// 	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
// 	CreateAHeroUIMinimumLevel				  = 7
// 	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Infernal_Level1
//	CreateAHeroUICostIfSelected				  = 700
// End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BerserkerRage_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroBerserkerRage_Level1
  TextLabel               = CONTROLBAR:CAH_BerserkerRage_L1
  ButtonImage             = CAHBerserkerRage
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BerserkerRage_L1
  InPalantir			  = Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BERSERKERRAGE_LEVEL1_COST
  UnitSpecificSound			= CaH_BerserkerRage
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BerserkerRage_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroBerserkerRage_Level2
  TextLabel               = CONTROLBAR:CAH_BerserkerRage_L2
  ButtonImage             = CAHBerserkerRage
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BerserkerRage_L2
  InPalantir			  = Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BerserkerRage_Level1
	CreateAHeroUICostIfSelected				  = CAH_BERSERKERRAGE_LEVEL2_COST
  UnitSpecificSound			= CaH_BerserkerRage
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BerserkerRage_Level3
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroBerserkerRage_Level3
  TextLabel               = CONTROLBAR:CAH_BerserkerRage_L3
  ButtonImage             = CAHBerserkerRage
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BerserkerRage_L3
  InPalantir			  = Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BerserkerRage_Level2
	CreateAHeroUICostIfSelected				  = CAH_BERSERKERRAGE_LEVEL3_COST
  UnitSpecificSound			= CaH_BerserkerRage
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BerserkerRage_Level4
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroBerserkerRage_Level4
  TextLabel               = CONTROLBAR:CAH_BerserkerRage_L4
  ButtonImage             = CAHBerserkerRage
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BerserkerRage_L4
  InPalantir			  = Yes
  AutoAbility				= No
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BerserkerRage_Level3
	CreateAHeroUICostIfSelected				  = CAH_BERSERKERRAGE_LEVEL4_COST
  UnitSpecificSound			= CaH_BerserkerRage
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroFireBomb_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroFireBomb_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_FireBomb_Level1
  ButtonImage		= UCCommon_Firebomb
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_FireBomb_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_FIREBOMB_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroFireBomb_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroFireBomb_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_FireBomb_Level2
  ButtonImage		= UCCommon_Firebomb
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_FireBomb_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroFireBomb_Level1
	CreateAHeroUICostIfSelected				  = CAH_FIREBOMB_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroFireBomb_Level3
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroFireBomb_Level3
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_FireBomb_Level3
  ButtonImage		= UCCommon_Firebomb
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_FireBomb_Level3
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroFireBomb_Level2
	CreateAHeroUICostIfSelected				  = CAH_FIREBOMB_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroFireBomb_Level4
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroFireBomb_Level4
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_FireBomb_Level4
  ButtonImage		= UCCommon_Firebomb
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_FireBomb_Level4
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroFireBomb_Level3
	CreateAHeroUICostIfSelected				  = CAH_FIREBOMB_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroPoisonAttack_Level1
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroPoisonAttack_Level1
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_PoisonAttack_Level1
	DescriptLabel			= CONTROLBAR:ToolTipCAH_PoisonAttack_Level1
	ButtonImage				= BWTreasureTrove_PoisonBlades
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_POISONATTACK_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroPoisonAttack_Level2
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroPoisonAttack_Level2
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_PoisonAttack_Level2
	DescriptLabel			= CONTROLBAR:ToolTipCAH_PoisonAttack_Level2
	ButtonImage				= BWTreasureTrove_PoisonBlades
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroPoisonAttack_Level1
	CreateAHeroUICostIfSelected				  = CAH_POISONATTACK_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroPoisonAttack_Level3
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroPoisonAttack_Level3
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_PoisonAttack_Level3
	DescriptLabel			= CONTROLBAR:ToolTipCAH_PoisonAttack_Level3
	ButtonImage				= BWTreasureTrove_PoisonBlades
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroPoisonAttack_Level2
	CreateAHeroUICostIfSelected				  = CAH_POISONATTACK_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroPoisonAttack_Level4
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroPoisonAttack_Level4
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_PoisonAttack_Level4
	DescriptLabel			= CONTROLBAR:ToolTipCAH_PoisonAttack_Level4
	ButtonImage				= BWTreasureTrove_PoisonBlades
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassServantsOfSauron 
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroPoisonAttack_Level3
	CreateAHeroUICostIfSelected				  = CAH_POISONATTACK_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroUntamedAllegiance
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroUntamedAllegiance
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_UntamedAllegiance
    ButtonImage			= HSSharkuTameBeast
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:ToolTipCAH_UntamedAllegiance
    RadiusCursorType	= UntamedAllegianceRadiusCursor
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_UNTAMEDALLEGIANCE_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAttachSpy_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAttachSpy_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_AttachSpy_Level1
  ButtonImage		= HSSpy
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_AttachSpy_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_ATTACHSPY_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAttachSpy_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAttachSpy_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_AttachSpy_Level2
  ButtonImage		= HSSpy
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_AttachSpy_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroAttachSpy_Level1
	CreateAHeroUICostIfSelected				  = CAH_ATTACHSPY_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCoerce_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCoerce_Level1
	Options			   = NEED_TARGET_ENEMY_OBJECT CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_Coerce_Level1
	ButtonImage		   = CAHCoerce
	CursorName		   = Bombard
	ButtonBorderType   = ACTION
	InvalidCursorName	= GenericInvalid
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Coerce_Level1
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_COERCE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCoerce_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCoerce_Level2
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_Coerce_Level2
	ButtonImage		   = CAHCoerce
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Coerce_Level2
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityCoerce_Level1
	CreateAHeroUICostIfSelected				  = CAH_COERCE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityCoerce_Level3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroCoerce_Level3
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	TextLabel		   = CONTROLBAR:CAH_Coerce_Level3
	ButtonImage		   = CAHCoerce
	RadiusCursorType   = DominateRadiusCursor
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Coerce_Level3
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityCoerce_Level2
	CreateAHeroUICostIfSelected				  = CAH_COERCE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityDisguise
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroDisguise
	Options			   = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_ALLY_OBJECT NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
	TextLabel		   = CAH:Command_CreateAHero_SpecialAbilityDisguise_Name
	ButtonImage		   = CAHDisguise
	CursorName		   = Bombard
	ButtonBorderType   = ACTION
	InvalidCursorName	= GenericInvalid
	DescriptLabel	   = CONTROLBAR:ToolTipCAH_Disguise
	InPalantir		   = Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_DISGUISE_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CM_SpecialAbilityStealth_Level1
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroCMStealth_Level1
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_CM_Stealth_Level1
	DescriptLabel			= CONTROLBAR:ToolTipCAH_CM_Stealth_Level1_Palantir
	ButtonImage				= HSStealth
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_STEALTH_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CM_SpecialAbilityStealth_Level2
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroCMStealth_Level2
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_CM_Stealth_Level2
	DescriptLabel			= CONTROLBAR:ToolTipCAH_CM_Stealth_Level2_Palantir
	ButtonImage				= HSStealth
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_CM_SpecialAbilityStealth_Level1
	CreateAHeroUICostIfSelected				  = CAH_STEALTH_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_CM_SpecialAbilityStealth_Level3
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroElvenCloak
	TextLabel				= CAH:Command_CreateAHero_CM_SpecialAbilityStealth_Level3_Name
	DescriptLabel			= CONTROLBAR:ToolTipCAH_CM_Stealth_Level3_Palantir
	ButtonImage				= HPFrodoElfCloak
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_CM_SpecialAbilityStealth_Level2
	CreateAHeroUICostIfSelected				  = CAH_STEALTH_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_A_SpecialAbilityStealth_Level1
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroAStealth_Level1
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_A_Stealth_Level1
	DescriptLabel			= CONTROLBAR:ToolTipCAH_CM_Stealth_Level2_Palantir
	ButtonImage				= HSStealth
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_STEALTH_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_A_SpecialAbilityStealth_Level2
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroElvenCloak
	TextLabel				= CONTROLBAR:CAH_CM_Stealth_Level2
	DescriptLabel			= CONTROLBAR:ToolTipCAH_CM_Stealth_Level3_Palantir
	ButtonImage				= HPFrodoElfCloak
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_A_SpecialAbilityStealth_Level1
	CreateAHeroUICostIfSelected				  = CAH_STEALTH_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityClimbWalls
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroClimbWalls
	Options					= NONPRESSABLE NEED_UPGRADE
	TextLabel				= CONTROLBAR:CAH_ClimbWalls
	DescriptLabel			= CONTROLBAR:ToolTipCAH_ClimbWalls
	ButtonImage				= UCGoblin_ClimbWalls
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel	= 1 //	1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = 100
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroStealMoney_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroStealMoney_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT
  TextLabel			= CONTROLBAR:CAH_StealMoney_Level1
  ButtonImage		= HSStealMoney
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_StealMoney_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_STEALMONEY_LEVEL1_COST
End

CommandButton Command_CreateAHeroStealMoney_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroStealMoney_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT
  TextLabel			= CONTROLBAR:CAH_StealMoney_Level2
  ButtonImage		= HSStealMoney
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_StealMoney_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroStealMoney_Level1
	CreateAHeroUICostIfSelected				  = CAH_STEALMONEY_LEVEL2_COST
End

CommandButton Command_CreateAHeroStealMoney_Level3
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroStealMoney_Level3
  Options			= NEED_TARGET_ENEMY_OBJECT
  TextLabel			= CONTROLBAR:CAH_StealMoney_Level3
  ButtonImage		= HSStealMoney
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_StealMoney_Level3
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHeroStealMoney_Level2
	CreateAHeroUICostIfSelected				  = CAH_STEALMONEY_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAssassin_Level1
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroAssassin_Level1
	Options								= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT	CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:CAH_Assassin_Level1
	ButtonImage							= HSWormtongueBackStab
	CursorName							= Bombard
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipCAH_Assassin_Level1
	InvalidCursorName					= GenericInvalid
	//UnitSpecificSound					= EomerVoiceModeThrow
	DisableOnModelCondition				= WEAPONSET_TOGGLE_1					// disable if currently using bow
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 200.0

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel			= 1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_HEROASSASSIN_LEVEL1_COST
End

//------------------- Create A Hero	----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAssassin_Level2
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroAssassin_Level2
	Options								= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT	CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:CAH_Assassin_Level2
	ButtonImage							= HSWormtongueBackStab
	CursorName							= Bombard
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipCAH_Assassin_Level2
	InvalidCursorName					= GenericInvalid
	DisableOnModelCondition				= WEAPONSET_TOGGLE_1					// disable if currently using bow
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 200.0

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel			= 3
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHeroAssassin_Level1
	CreateAHeroUICostIfSelected				  = CAH_HEROASSASSIN_LEVEL2_COST
End

//------------------- Create A Hero	----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAssassin_Level3
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroAssassin_Level3
	Options								= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT	CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:CAH_Assassin_Level3
	ButtonImage							= HSWormtongueBackStab
	CursorName							= Bombard
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipCAH_Assassin_Level3
	InvalidCursorName					= GenericInvalid
	//UnitSpecificSound					= EomerVoiceModeThrow
	DisableOnModelCondition				= WEAPONSET_TOGGLE_1					// disable if currently using bow
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 200.0

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel			= 7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHeroAssassin_Level2
	CreateAHeroUICostIfSelected				  = CAH_HEROASSASSIN_LEVEL3_COST
End

//------------------- Create A Hero	----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroAssassin_Level4
	Command								= SPECIAL_POWER	
	SpecialPower						= SpecialAbilityCreateAHeroAssassin_Level4
	Options								= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT	CONTEXTMODE_COMMAND
	TextLabel							= CONTROLBAR:CAH_Assassin_Level4
	ButtonImage							= HSWormtongueBackStab
	CursorName							= Bombard
	ButtonBorderType					= ACTION 
	DescriptLabel						= CONTROLBAR:ToolTipCAH_Assassin_Level4
	InvalidCursorName					= GenericInvalid
	//UnitSpecificSound					= EomerVoiceModeThrow
	DisableOnModelCondition				= WEAPONSET_TOGGLE_1					// disable if currently using bow
	InPalantir							= Yes
	AutoAbility							= Yes
	PresetRange							= 200.0

	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassCorruptedMan
	CreateAHeroUIMinimumLevel			= 10
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHeroAssassin_Level3
	CreateAHeroUICostIfSelected				  = CAH_HEROASSASSIN_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_RainOfArrows_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroRainOfArrows_Level1
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:CAH_RainOfArrows_Level1
  ButtonImage             = HSLegolasArrowWind
  CursorName              = Bombard
  RadiusCursorType        = ArrowStormRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_RainOfArrows_Level1
  InPalantir			  = Yes
  AutoAbility			  = No
//  UnitSpecificSound       = LegolasVoiceModeArrowWind
  EnableOnModelCondition = WEAPONSET_TOGGLE_1					// disable if currently using swords

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_RAINOFARROWS_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_RainOfArrows_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroRainOfArrows_Level2
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:CAH_RainOfArrows_Level2
  ButtonImage             = HSLegolasArrowWind
  CursorName              = Bombard
  RadiusCursorType        = ArrowStormRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_RainOfArrows_Level2
  InPalantir			  = Yes
  AutoAbility			  = No
//  UnitSpecificSound       = LegolasVoiceModeArrowWind
  EnableOnModelCondition = WEAPONSET_TOGGLE_1					// disable if currently using swords

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_RainOfArrows_Level1
	CreateAHeroUICostIfSelected				  = CAH_RAINOFARROWS_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_RainOfArrows_Level3
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroRainOfArrows_Level3
  Options                 = NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel               = CONTROLBAR:CAH_RainOfArrows_Level3
  ButtonImage             = HSLegolasArrowWind
  CursorName              = Bombard
  RadiusCursorType        = ArrowStormRadiusCursor
  InvalidCursorName       = GenericInvalid
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_RainOfArrows_Level3
  InPalantir			  = Yes
  AutoAbility			  = No
//  UnitSpecificSound       = LegolasVoiceModeArrowWind
  EnableOnModelCondition = WEAPONSET_TOGGLE_1					// disable if currently using swords

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_RainOfArrows_Level2
	CreateAHeroUICostIfSelected				  = CAH_RAINOFARROWS_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityHealing_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroHealing_Level1
  TextLabel               = CONTROLBAR:CAH_Healing_Level1
  ButtonImage             = HSAragornAthelas
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_Healing_Level1
  InPalantir			  = Yes
  AutoAbility				= No

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_HEALING_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityHealing_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroHealing_Level2
  TextLabel               = CONTROLBAR:CAH_Healing_Level2
  ButtonImage             = HSAragornAthelas
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_Healing_Level2
  InPalantir			  = Yes
  AutoAbility				= No

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityHealing_Level1
	CreateAHeroUICostIfSelected				  = CAH_HEALING_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityArrowBonus_Level1
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroArrowBonus_Level1
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_ArrowBonus_Level1
	DescriptLabel			= CONTROLBAR:ToolTipCAH_ArrowBonus_Level1
	ButtonImage				= HSHaldirGoldenArrow
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_ARROWBONUS_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityArrowBonus_Level2
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroArrowBonus_Level2
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_ArrowBonus_Level2
	DescriptLabel			= CONTROLBAR:ToolTipCAH_ArrowBonus_Level2
	ButtonImage				= HSHaldirGoldenArrow
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityArrowBonus_Level1
	CreateAHeroUICostIfSelected				  = CAH_ARROWBONUS_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityArrowBonus_Level3
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroArrowBonus_Level3
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_ArrowBonus_Level3
	DescriptLabel			= CONTROLBAR:ToolTipCAH_ArrowBonus_Level3
	ButtonImage				= HSHaldirGoldenArrow
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityArrowBonus_Level2
	CreateAHeroUICostIfSelected				  = CAH_ARROWBONUS_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityArrowBonus_Level4
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroArrowBonus_Level4
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_ArrowBonus_Level4
	DescriptLabel			= CONTROLBAR:ToolTipCAH_ArrowBonus_Level4
	ButtonImage				= HSHaldirGoldenArrow
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_SpecialAbilityArrowBonus_Level3
	CreateAHeroUICostIfSelected				  = CAH_ARROWBONUS_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SummonFamiliar_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSummonFamiliar_Level1
	TextLabel		   = CONTROLBAR:CAH_SummonFamiliar_Level1
	ButtonImage		   = CAHSummonFamiliar
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = FamiliarRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipCAH_SummonFamiliar_Level1
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_SUMMONFAMILIAR_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SummonFamiliar_Level2
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSummonFamiliar_Level2
	TextLabel		   = CONTROLBAR:CAH_SummonFamiliar_Level2
	ButtonImage		   = CAHSummonFamiliar
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = FamiliarRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipCAH_SummonFamiliar_Level2
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_SummonFamiliar_Level1
	CreateAHeroUICostIfSelected				  = CAH_SUMMONFAMILIAR_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SummonFamiliar_Level3
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroSummonFamiliar_Level3
	TextLabel		   = CONTROLBAR:CAH_SummonFamiliar_Level3
	ButtonImage		   = CAHSummonFamiliar
	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	RadiusCursorType   = FamiliarRadiusCursor
	CursorName		   = Bombard
	InvalidCursorName  = GenericInvalid	 
	ButtonBorderType   = ACTION	
	DescriptLabel	   = CONTROLBAR:TooltipCAH_SummonFamiliar_Level3
	InPalantir		   = Yes
//	UnitSpecificSound  = AragornVoiceSummonOathbreakers
//	AutoAbility		   = Yes //
//	TriggerWhenReady   = Yes //

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_SummonFamiliar_Level2
	CreateAHeroUICostIfSelected				  = CAH_SUMMONFAMILIAR_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpawnTornado_Level1
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerCreateAHeroSpawnTornado_Level1
    ButtonImage			= HSGaladriel_NaturesWrath
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_SpawnTornado_Level1
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_SpawnTornado_Level1
	RadiusCursorType    = NaturesWrathRadiusCursor
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName			= None
	CreateAHeroUICostIfSelected				  = CAH_SPAWNTORNADO_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpawnTornado_Level2
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerCreateAHeroSpawnTornado_Level2
    ButtonImage			= HSGaladriel_NaturesWrath
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_SpawnTornado_Level2
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_SpawnTornado_Level2
	RadiusCursorType    = NaturesWrathRadiusCursor
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName			=	Command_CreateAHero_SpawnTornado_Level1
	CreateAHeroUICostIfSelected				  = CAH_SPAWNTORNADO_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpawnTornado_Level3
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialPowerCreateAHeroSpawnTornado_Level3
    ButtonImage			= HSGaladriel_NaturesWrath
	Options				= NEED_TARGET_POS
	TextLabel			= CONTROLBAR:CAH_SpawnTornado_Level3
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_SpawnTornado_Level3
	RadiusCursorType    = NaturesWrathRadiusCursor
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel					=	10
	CreateAHeroUIPrerequisiteButtonName			=	Command_CreateAHero_SpawnTornado_Level2
	CreateAHeroUICostIfSelected				  = CAH_SPAWNTORNADO_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_AxeThrow_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAxeThrow_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_AxeThrow_Level1
  ButtonImage		= HSAxeThrow
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_AxeThrow_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel					=	1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_AXETHROW_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_AxeThrow_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAxeThrow_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_AxeThrow_Level2
  ButtonImage		= HSAxeThrow
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_AxeThrow_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_AxeThrow_Level1
	CreateAHeroUICostIfSelected				  = CAH_AXETHROW_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_AxeThrow_Level3
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroAxeThrow_Level3
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_AxeThrow_Level3
  ButtonImage		= HSAxeThrow
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_AxeThrow_Level3
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_AxeThrow_Level2
	CreateAHeroUICostIfSelected				  = CAH_AXETHROW_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_EarthShaker_Level1
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroEarthShaker_Level1
  TextLabel               = CONTROLBAR:CAH_EarthShaker_Level1
  ButtonImage             = HSEarthShaker
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_EarthShaker_Level1
  InPalantir			  = Yes
  AutoAbility			  = No

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_EARTHSHAKER_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_EarthShaker_Level2
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroEarthShaker_Level2
  TextLabel               = CONTROLBAR:CAH_EarthShaker_Level2
  ButtonImage             = HSEarthShaker
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_EarthShaker_Level2
  InPalantir			  = Yes
  AutoAbility			  = No

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_EarthShaker_Level1
	CreateAHeroUICostIfSelected				  = CAH_EARTHSHAKER_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_EarthShaker_Level3
  Command                 = SPECIAL_POWER 
  SpecialPower            = SpecialAbilityCreateAHeroEarthShaker_Level3
  TextLabel               = CONTROLBAR:CAH_EarthShaker_Level3
  ButtonImage             = HSEarthShaker
  ButtonBorderType        = ACTION 
  DescriptLabel           = CONTROLBAR:ToolTipCAH_EarthShaker_Level3
  InPalantir			  = Yes
  AutoAbility			  = No

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel					=	10
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_EarthShaker_Level2
	CreateAHeroUICostIfSelected				  = CAH_EARTHSHAKER_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Leap_Level1
  Command					= SPECIAL_POWER 
  SpecialPower				= SpecialAbilityCreateAHeroLeap_Level1
  Options					= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel					= CONTROLBAR:CAH_Leap_Level1
  ButtonImage				= HSLeap
  RadiusCursorType			= LeapRadiusCursor
  CursorName				= Bombard
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipCAH_Leap_Level1
  InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_LEAP_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Leap_Level2
  Command					= SPECIAL_POWER 
  SpecialPower				= SpecialAbilityCreateAHeroLeap_Level2
  Options					= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel					= CONTROLBAR:CAH_Leap_Level2
  ButtonImage				= HSLeap
  RadiusCursorType			= LeapRadiusCursor
  CursorName				= Bombard
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipCAH_Leap_Level2
  InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_Leap_Level1
	CreateAHeroUICostIfSelected				  = CAH_LEAP_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Charge_Level1
  Command				= SPECIAL_POWER
  SpecialPower			= SpecialAbilityCreateAHeroCharge_Level1
  Options				= OK_FOR_MULTI_SELECT
  TextLabel				= CONTROLBAR:CAH_Charge_Level1
  ButtonImage			= UCGuardian_BullRush
  ButtonBorderType		= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipCAH_DwarfCharge_L1
  InPalantir			= Yes
  CursorName			= Bombard
  InvalidCursorName		= GenericInvalid
  PresetRange			= 50.0
  UnitSpecificSound	= CaH_DwarfCharge
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_CHARGE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Charge_Level2
  Command				= SPECIAL_POWER
  SpecialPower			= SpecialAbilityCreateAHeroCharge_Level2
  Options				= OK_FOR_MULTI_SELECT
  TextLabel				= CONTROLBAR:CAH_Charge_Level2
  ButtonImage			= UCGuardian_BullRush
  ButtonBorderType		= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipCAH_DwarfCharge_L2
  InPalantir			= Yes
  CursorName			= Bombard
  InvalidCursorName		= GenericInvalid
  PresetRange			= 50.0
  UnitSpecificSound	= CaH_DwarfCharge
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Charge_Level1
	CreateAHeroUICostIfSelected				  = CAH_CHARGE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Charge_Level3
  Command				= SPECIAL_POWER
  SpecialPower			= SpecialAbilityCreateAHeroCharge_Level3
  Options				= OK_FOR_MULTI_SELECT
  TextLabel				= CONTROLBAR:CAH_Charge_Level3
  ButtonImage			= UCGuardian_BullRush
  ButtonBorderType		= ACTION 
  DescriptLabel			= CONTROLBAR:ToolTipCAH_DwarfCharge_L3
  InPalantir			= Yes
  CursorName			= Bombard
  InvalidCursorName		= GenericInvalid
  PresetRange			= 50.0
  UnitSpecificSound	= CaH_DwarfCharge
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Charge_Level2
	CreateAHeroUICostIfSelected				  = CAH_CHARGE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Sapper_Level1
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroSapper_Level1
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_Sapper_Level1
  ButtonImage		= HSSapper
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_Sapper_Level1
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_SAPPER_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Sapper_Level2
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroSapper_Level2
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_Sapper_Level2
  ButtonImage		= HSSapper
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_Sapper_Level2
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Sapper_Level1
	CreateAHeroUICostIfSelected				  = CAH_SAPPER_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Sapper_Level3
  Command			= SPECIAL_POWER 
  SpecialPower		= SpecialAbilityCreateAHeroSapper_Level3
  Options			= NEED_TARGET_ENEMY_OBJECT // NEED_TARGET_NEUTRAL_OBJECT CONTEXTMODE_COMMAND
  TextLabel			= CONTROLBAR:CAH_Sapper_Level3
  ButtonImage		= HSSapper
  CursorName		= Bombard
  ButtonBorderType	= ACTION 
  DescriptLabel		= CONTROLBAR:ToolTipCAH_Sapper_Level3
  InvalidCursorName	= GenericInvalid
  //UnitSpecificSound	= EomerVoiceModeThrow
  InPalantir		= Yes
  AutoAbility		= Yes
  PresetRange		= 200.0
					
	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Sapper_Level2
	CreateAHeroUICostIfSelected				  = CAH_SAPPER_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Bombard_Level1
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroBombard_Level1
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:CAH_Bombard_Level1
    ButtonImage			= SBGood_Bombard
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_Bombard_Level1
    RadiusCursorType	= RainOfFireRadiusCursor
    CursorName			= AttackObj
    InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BOMBARD_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Bombard_Level2
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroBombard_Level2
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:CAH_Bombard_Level2
    ButtonImage			= SBGood_Bombard
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_Bombard_Level2
    RadiusCursorType	= RainOfFireRadiusCursor
    CursorName			= AttackObj
    InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Bombard_Level1
	CreateAHeroUICostIfSelected				  = CAH_BOMBARD_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Bombard_Level3
	Command				= SPECIAL_POWER
    SpecialPower		= SpecialAbilityCreateAHeroBombard_Level3
	Options				= NEED_TARGET_POS 
	TextLabel			= CONTROLBAR:CAH_Bombard_Level3
    ButtonImage			= SBGood_Bombard
	ButtonBorderType	= ACTION
	DescriptLabel		= CONTROLBAR:TooltipCAH_Bombard_Level3
    RadiusCursorType	= RainOfFireRadiusCursor
    CursorName			= AttackObj
    InvalidCursorName	= GenericInvalid
	InPalantir			= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_Bombard_Level2
	CreateAHeroUICostIfSelected				  = CAH_BOMBARD_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_Toughness
	Command					= SPECIAL_POWER
	SpecialPower			= SpecialAbilityCreateAHeroToughness
	Options					= NONPRESSABLE
	TextLabel				= CONTROLBAR:CAH_Toughness
	DescriptLabel			= CONTROLBAR:ToolTipCAH_Toughness_Palantir
	ButtonImage				= HSKingDainStubbornPride
	ButtonBorderType		= ACTION
	InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_TOUGHNESS_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BattleRage_Level1
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityCreateAHeroBattleRage_Level1
  TextLabel               = CONTROLBAR:CAH_BattleRage_Level1
  ButtonImage             = HSKingDainMightyRage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BattleRage_Level1
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = CaH_BattleRage

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
		//CreateAHeroUIIconImageName				  =	HSInvulnerability							does not exist
	CreateAHeroUIMinimumLevel				  = 1
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_BATTLERAGE_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BattleRage_Level2
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityCreateAHeroBattleRage_Level2
  TextLabel               = CONTROLBAR:CAH_BattleRage_Level2
  ButtonImage             = HSKingDainMightyRage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BattleRage_Level2
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = CaH_BattleRage

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
		//CreateAHeroUIIconImageName				  =	HSInvulnerability							does not exist
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BattleRage_Level1
	CreateAHeroUICostIfSelected				  = CAH_BATTLERAGE_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BattleRage_Level3
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityCreateAHeroBattleRage_Level3
  TextLabel               = CONTROLBAR:CAH_BattleRage_Level3
  ButtonImage             = HSKingDainMightyRage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BattleRage_Level3
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = CaH_BattleRage

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
		//CreateAHeroUIIconImageName				  =	HSInvulnerability							does not exist
	CreateAHeroUIMinimumLevel				  = 7
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BattleRage_Level2
	CreateAHeroUICostIfSelected				  = CAH_BATTLERAGE_LEVEL3_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHeroLeadership
	Command								= SPECIAL_POWER
	SpecialPower						= SpecialAbilityFakeLeadership
	Options								= NONPRESSABLE
	TextLabel							= CONTROLBAR:Leadership
	ButtonImage							= HSLurtzLeadership
	RadiusCursorType					= TrainingRadiusCursor
	//Upgrade							= Upgrade_LurtzLeadership
	ButtonBorderType					= ACTION
	DescriptLabel						= CONTROLBAR:ToolTipCreateAHeroLeadership
	InPalantir							= Yes
	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassCorruptedMan	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassArcher
	CreateAHeroUIMinimumLevel			= 1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_LEADERSHIP_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_BattleRage_Level4
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityCreateAHeroBattleRage_Level4
  TextLabel               = CONTROLBAR:CAH_BattleRage_Level4
  ButtonImage             = HSKingDainMightyRage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipCAH_BattleRage_Level4
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 50.0
  UnitSpecificSound	      = CaH_BattleRage

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
		//CreateAHeroUIIconImageName				  =	HSInvulnerability							does not exist
	CreateAHeroUIMinimumLevel				  = 10
	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BattleRage_Level3
	CreateAHeroUICostIfSelected				  = CAH_BATTLERAGE_LEVEL4_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
;CommandButton Command_CreateAHero_BattleRage_Level4
;  Command                 = SPECIAL_POWER
;  SpecialPower            = SpecialAbilityCreateAHeroBattleRage_Level4
;  TextLabel               = CONTROLBAR:CAH_BattleRage_Level4
;;  ButtonImage             = HSKingDainMightyRage
;  RadiusCursorType        = TrainingRadiusCursor
;  ButtonBorderType        = ACTION
;  DescriptLabel           = CONTROLBAR:ToolTipCAH_BattleRage_Level4
;  InPalantir			  = Yes
;  AutoAbility			  = Yes
;  PresetRange			  = 50.0
;  UnitSpecificSound	      = CaH_BattleRage
;
;	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassDwarf
;		//CreateAHeroUIIconImageName				  =	HSInvulnerability							does not exist
;	CreateAHeroUIMinimumLevel				  = 10
;	CreateAHeroUIPrerequisiteButtonName = Command_CreateAHero_BattleRage_Level3
;	CreateAHeroUICostIfSelected				  = CAH_BATTLERAGE_LEVEL4_COST
;End


//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_TrollLeap_Level1
  Command					= SPECIAL_POWER 
  SpecialPower				= SpecialAbilityCreateAHeroTrollLeap_Level1
  Options					= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel					= CONTROLBAR:CAH_Leap_Level1
  ButtonImage				= KURogashLeapIcon
  RadiusCursorType			= LeapRadiusCursor
  CursorName				= Bombard
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipCAH_Leap_Level1
  InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel					=	3
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected				  = CAH_LEAP_LEVEL1_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_TrollLeap_Level2
  Command					= SPECIAL_POWER 
  SpecialPower				= SpecialAbilityCreateAHeroTrollLeap_Level2
  Options					= NEED_TARGET_POS CONTEXTMODE_COMMAND
  TextLabel					= CONTROLBAR:CAH_Leap_Level2
  ButtonImage				= KURogashLeapIcon
  RadiusCursorType			= LeapRadiusCursor
  CursorName				= Bombard
  ButtonBorderType			= ACTION 
  DescriptLabel				= CONTROLBAR:ToolTipCAH_Leap_Level2
  InPalantir				= Yes

	CreateAHeroUIAllowableUpgrades				=	Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel					=	7
	CreateAHeroUIPrerequisiteButtonName	= Command_CreateAHero_TrollLeap_Level1
	CreateAHeroUICostIfSelected				  = CAH_LEAP_LEVEL2_COST
End

//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_CreateAHero_SpecialAbilityDominateTroll_Level1
	Command			   = SPECIAL_POWER
	SpecialPower	   = SpecialAbilityCreateAHeroDominateTroll
//	Options			   = NEED_TARGET_POS CONTEXTMODE_COMMAND
	Options			   = NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
	TextLabel		   = CONTROLBAR:CAH_DominateTroll_Level1
	ButtonImage		   = HSSharkuTameBeast
//	RadiusCursorType   = UntamedAllegianceRadiusCursor
	CursorName		= EvilAbilityObj
	InvalidCursorName	= GenericInvalid  
	ButtonBorderType   = ACTION
	DescriptLabel	   = CONTROLBAR:ToolTipDominateTroll
	InPalantir		   = Yes
//	UnitSpecificSound  = SarumanVoiceDominate

	CreateAHeroUIAllowableUpgrades			  =	Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel				  = 3
	CreateAHeroUIPrerequisiteButtonName = None
	CreateAHeroUICostIfSelected				  = CAH_DOMINATETROLL_COST
End


//------------------- Create A Hero ----------------------------
//--------------------------------------------------------------
CommandButton Command_SpecialAbilityNoPowerDummy
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityNoPowerDummy
	Options			= NONPRESSABLE
	ButtonImage		= CAHNoPower
	ButtonBorderType	= ACTION
	TextLabel		= CONTROLBAR:SpecialAbilityNoPower
	DescriptLabel		= CONTROLBAR:ToolTipSpecialAbilityNoPower
	ShowButton		= No
	Radial			= No
	InPalantir	   	= No							; To be hidden by default
	
	CreateAHeroUIAllowableUpgrades		= Upgrade_CreateAHero_ClassHeroOfTheWest Upgrade_CreateAHero_ClassIstariWizard Upgrade_CreateAHero_ClassDwarf Upgrade_CreateAHero_ClassCorruptedMan	Upgrade_CreateAHero_ClassServantsOfSauron Upgrade_CreateAHero_ClassArcher Upgrade_CreateAHero_ClassOlogHai
	CreateAHeroUIMinimumLevel		= 1
	CreateAHeroUIPrerequisiteButtonName	= None
	CreateAHeroUICostIfSelected = 0
End






//**************************************************************************************************************************
//**************************************************************************************************************************
//**************************************************************************************************************************
//------------------- CREATE A HERO END ----------------------------
//**************************************************************************************************************************
//**************************************************************************************************************************
//**************************************************************************************************************************

