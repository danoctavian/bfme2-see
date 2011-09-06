/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Mordor//
/////////

PlayerTemplate FactionMordor
	Side					= Mordor
	PlayableSide      			= Yes
	Evil			  		= Yes
	StartMoney        			= 0
	MaxLevelMP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_EVIL PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor				= R:175 G:49 B:33
	StartingBuilding			= MordorFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	StartingUnit0 		= MordorPorter 
	StartingUnitOffset0 	= X:1 Y:240 Z:0
	
	StartingUnit1 		= MordorPorter
	StartingUnitOffset1 	= X:1 Y:190 Z:0
	
	StartingUnitTacticalWOTR		= MordorPorter
	StartingUnitTacticalWOTR		= MordorPorter
	IntrinsicSciences			= SCIENCE_EVIL
	IntrinsicSciencesMP 			= SCIENCE_MORDOR
	SpellBook				= EvilSpellBook
	SpellBookMp				= MordorSpellBook
	PurchaseScienceCommandSet		= EvilSpellStoreCommandSet
	PurchaseScienceCommandSetMP		= MordorSpellStoreCommandSet
	DisplayName				= INI:FactionMordor
	DefaultPlayerAIType			= MordorSkirmishAI
	BeaconName				= MultiplayerBeacon
	LightPointsUpSound			= MordorLightPointsUp
	ObjectiveAddedSound			= Gui_MissionObjectiveNew
	ObjectiveCompletedSound			= Gui_MissionObjectiveCompleted
	InitialUpgrades				= Upgrade_MordorDualEconomyChoice Upgrade_MordorFaction Upgrade_EvilDualEconomyChoice;Any upgrades this player template is born with.

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set.
	BuildableHeroesMP			= CreateAHero MordorGothmog MordorMouthOfSauron KhamulFellBeast MorgomirFellBeast MordorWitchKingOnFellBeast ;// NeutralGollum EvilMenBlackRider EvilMenBlackRider MordorFellBeast MordorFellBeast
	BuildableRingHeroesMP			= MordorSauron_RingHero
	SpellStoreCurrentPowerLabel 		= APT:SpellStoreCurrentRingPower
	SpellStoreMaximumPowerLabel 		= APT:SpellStoreMaximumRingPower
	ResourceModifierObjectFilter 		= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues			= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait			= UPMordor_Army
	LoadScreenMusic				= Shell2MusicForLoadScreen
End