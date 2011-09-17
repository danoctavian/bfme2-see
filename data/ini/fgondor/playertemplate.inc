/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Gondor//
/////////

PlayerTemplate FactionMen
	Side              = Men
	PlayableSide      = Yes
	Evil		  = No
	StartMoney        = 0
	MaxLevelMP	  = #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP	  = #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_GOOD PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor	  = R:43 G:150 B:179
	StartingBuilding  = MenFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	;StartingUnit0 		= GondorFighterHorde 
	;StartingUnitOffset0 	= X:-60 Y:185 Z:0
	
	
	StartingUnit1 		= MenPorter 
	StartingUnitOffset1 	= X:30 Y:200 Z:0
	StartingUnit0 		= MenPorter 
	StartingUnitOffset0 	= X:1 Y:130 Z:0
	
	StartingUnitTacticalWOTR	= MenPorter			;// This unit is placed in tactical mode when playing WOTR. Add multiple lines for multiple units.
	StartingUnitTacticalWOTR	= MenPorter
	IntrinsicSciences		= SCIENCE_GOOD
	IntrinsicSciencesMP 		= SCIENCE_MEN
	SpellBook			= GoodSpellBook
	SpellBookMp			= MenSpellBook
	PurchaseScienceCommandSet	= GoodSpellStoreCommandSet
	PurchaseScienceCommandSetMP	= MenSpellStoreCommandSet
	DisplayName			= INI:FactionGondor //INI:FactionMen
	DefaultPlayerAIType		= MenSkirmishAI
	BeaconName			= MultiplayerBeacon
	LightPointsUpSound		= GondorLightPointsUp
	ObjectiveAddedSound		= Gui_MissionObjectiveNew
	ObjectiveCompletedSound		= Gui_MissionObjectiveCompleted
	InitialUpgrades			= Upgrade_MenFaction		; Any upgrades this player template is born with.

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set.

	BuildableHeroesMP		= CreateAHero GondorBoromir GondorFaramir GondorAragornMP GondorGandalf 
	BuildableRingHeroesMP		= ElvenGaladriel_RingHero
	SpellStoreCurrentPowerLabel 	= APT:SpellStoreCurrentEvenstarPower
	SpellStoreMaximumPowerLabel 	= APT:SpellStoreMaximumEvenstarPower
	ResourceModifierObjectFilter 	= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues		= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait		= UPGondor_Army
	LoadScreenMusic				= Shell2MusicForLoadScreen
End