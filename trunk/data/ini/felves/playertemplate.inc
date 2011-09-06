/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Elves//
////////

PlayerTemplate FactionElves
	Side              		= Elves
	PlayableSide      		= Yes				; Please note: the presence of "SIDE:Elves" in the string file is what makes this appear in MP as a playable side.  And the skirmish scripts are what actually make it function.
	Evil			  	= No
	StartMoney        		= 0
	MaxLevelMP			= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP			= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_GOOD PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor			= R:43 G:150 B:179
	StartingBuilding		= ElvenFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	;StartingUnit0 			= ElvenLorienArcherHorde 
	;StartingUnitOffset0 		= X:-70 Y:220 Z:0
	
	
	StartingUnit1 			= ElvenPorter 
	StartingUnitOffset1 		= X:30 Y:250 Z:0
	StartingUnit0 			= ElvenPorter
	StartingUnitOffset0 		= X:1 Y:160 Z:0
	
	StartingUnitTacticalWOTR	= ElvenPorter
	StartingUnitTacticalWOTR	= ElvenPorter
	IntrinsicSciences		= SCIENCE_GOOD
	IntrinsicSciencesMP 		= SCIENCE_ELVES
	SpellBook			= GoodSpellBook
	SpellBookMp			= ElvesSpellBook
	PurchaseScienceCommandSet	= GoodSpellStoreCommandSet
	PurchaseScienceCommandSetMP	= ElvesSpellStoreCommandSet
	DisplayName			= INI:FactionElves
	DefaultPlayerAIType		= ElvesSkirmishAI		; Needs to exist before I can change it.
	BeaconName			= MultiplayerBeacon
	LightPointsUpSound		= GondorLightPointsUp
	ObjectiveAddedSound		= Gui_MissionObjectiveNew
	ObjectiveCompletedSound		= Gui_MissionObjectiveCompleted
	InitialUpgrades			= Upgrade_ElfFaction		; Any upgrades this player template is born with.

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set.

	BuildableHeroesMP		= CreateAHero ElvenHaldir ElvenGlorfindel ElvenArwen ElvenLegolas ElvenThranduil ElvenElrond 
	BuildableRingHeroesMP		= ElvenGaladriel_RingHero
	SpellStoreCurrentPowerLabel 	= APT:SpellStoreCurrentEvenstarPower
	SpellStoreMaximumPowerLabel 	= APT:SpellStoreMaximumEvenstarPower
	ResourceModifierObjectFilter 	= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues		= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait		= UPElvenArmy
	LoadScreenMusic			= Shell2MusicForLoadScreen
End