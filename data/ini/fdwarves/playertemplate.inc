/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Dwarves//
//////////

PlayerTemplate FactionDwarves
	Side              			= Dwarves
	PlayableSide      			= Yes			; Please note: the presence of "SIDE:Dwarves" in the string file is what makes this appear in MP as a playable side.  And the skirmish scripts are what actually make it function.
	Evil			  		= No
	StartMoney        			= 0
	MaxLevelMP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_GOOD PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor				= R:43 G:150 B:179
	StartingBuilding			= DwarvenFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	
	StartingUnit0 = DwarvenPorter 
	StartingUnitOffset0 = X:1 Y:230 Z:0
	StartingUnit1 = DwarvenPorter
	StartingUnitOffset1 = X:1 Y:150 Z:0
	
	StartingUnitTacticalWOTR		= DwarvenPorter
	StartingUnitTacticalWOTR		= DwarvenPorter
	IntrinsicSciences			= SCIENCE_GOOD
	IntrinsicSciencesMP 			= SCIENCE_DWARVES
	SpellBook				= GoodSpellBook
	SpellBookMp				= DwarvesSpellBook
	PurchaseScienceCommandSet		= GoodSpellStoreCommandSet
	PurchaseScienceCommandSetMP		= DwarvesSpellStoreCommandSet
	DisplayName				= INI:FactionDwarves
	DefaultPlayerAIType			= DwarvesSkirmishAI		; Needs to exist before I can change it.
	BeaconName				= MultiplayerBeacon
	LightPointsUpSound			= GondorLightPointsUp
	ObjectiveAddedSound			= Gui_MissionObjectiveNew
	ObjectiveCompletedSound			= Gui_MissionObjectiveCompleted
	InitialUpgrades				= Upgrade_DwarfFaction		; Any upgrades this player template is born with.

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set. 

	BuildableHeroesMP			= CreateAHero DwarvenCaptainofDale DwarvenGloin DwarvenGimli DwarvenDain 	; Added CaptainofDale for Expansion
	BuildableRingHeroesMP			= ElvenGaladriel_RingHero
	SpellStoreCurrentPowerLabel 		= APT:SpellStoreCurrentEvenstarPower
	SpellStoreMaximumPowerLabel 		= APT:SpellStoreMaximumEvenstarPower
	ResourceModifierObjectFilter 		= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues			= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait			= UPDwarvenArmy
	LoadScreenMusic				= Shell2MusicForLoadScreen
End