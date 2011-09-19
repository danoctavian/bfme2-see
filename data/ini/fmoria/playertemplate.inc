/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Moria//
////////

PlayerTemplate FactionWild
	Side					= Wild
	PlayableSide				= Yes
	Evil					= Yes
	StartMoney				= 0
	MaxLevelMP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_EVIL PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor				= R:84 G:114 B:71
	StartingBuilding			= WildFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	StartingUnit0 		= GoblinArcherHorde 
	StartingUnitOffset0 	= X:-60 Y:200 Z:0
	
	StartingUnit1 		= WildPorter 
	StartingUnitOffset1 	= X:30 Y:215 Z:0
	
	StartingUnit2 				= WildPorter
	StartingUnitOffset2 			= X:1 Y:120 Z:0
	StartingUnitTacticalWOTR		= WildPorter
	StartingUnitTacticalWOTR		= WildPorter
	IntrinsicSciences			= SCIENCE_EVIL
	IntrinsicSciencesMP			= SCIENCE_WILD
	DefaultPlayerAIType			= WildSkirmishAI
	SpellBook				= EvilSpellBook
	SpellBookMp				= WildSpellBook
	PurchaseScienceCommandSet		= EvilSpellStoreCommandSet
	PurchaseScienceCommandSetMP		= WildSpellStoreCommandSet
	DisplayName				= INI:FactionWild
	BeaconName				= MultiplayerBeacon
	LightPointsUpSound			= IsengardLightPointsUp
	ObjectiveAddedSound			= Gui_MissionObjectiveNew
	ObjectiveCompletedSound			= Gui_MissionObjectiveCompleted
	InitialUpgrades				= Upgrade_WildFaction Upgrade_GoblinDualEconomyChoice Upgrade_EvilDualEconomyChoice //Any upgrades this player template is born with.

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set.

	BuildableHeroesMP			= CreateAHero WildGoblinKing WildAzog WildShelob Drogoth // Alatar Pallando Drogoth
	BuildableRingHeroesMP			= MordorSauron_RingHero
	SpellStoreCurrentPowerLabel 		= APT:SpellStoreCurrentRingPower
	SpellStoreMaximumPowerLabel 		= APT:SpellStoreMaximumRingPower
	ResourceModifierObjectFilter 		= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues			= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait			= UPGoblinArmy
	LoadScreenMusic				= Shell2MusicForLoadScreen
End