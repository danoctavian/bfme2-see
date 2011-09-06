/////////////////////////
// PLAYERTEMPLATE.INC //
///////////////////////
//Isengard//
///////////

PlayerTemplate FactionIsengard
	Side              			= Isengard
	PlayableSide      			= Yes
	Evil			  		= Yes
	StartMoney        			= 0
	MaxLevelMP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_DEFAULT PLAYER_PURCHASE_POINTS_GRANTED )
	MaxLevelSP				= #DIVIDE( PLAYER_MAX_PURCHASE_POINTS_EVIL PLAYER_PURCHASE_POINTS_GRANTED )
	PreferredColor				= R:216 G:175 B:48
	StartingBuilding			= IsengardFortress
	
	;------------- NO STARTING UNITS FOR YOU -------
	
	StartingUnit0 = IsengardPorter 
	StartingUnitOffset0 = X:1 Y:230 Z:0
	
	StartingUnit1 = IsengardPorter
	StartingUnitOffset1 = X:1 Y:150 Z:0
	
	StartingUnitTacticalWOTR		= IsengardPorter
	StartingUnitTacticalWOTR		= IsengardPorter
	IntrinsicSciences			= SCIENCE_EVIL
	IntrinsicSciencesMP			= SCIENCE_ISENGARD
	DefaultPlayerAIType 			= IsengardSkirmishAI
	SpellBook				= EvilSpellBook
	SpellBookMp				= IsengardSpellBook
	PurchaseScienceCommandSet		= EvilSpellStoreCommandSet
	PurchaseScienceCommandSetMP		= IsengardSpellStoreCommandSet
	DisplayName				= INI:FactionIsengard
	BeaconName				= MultiplayerBeacon
	LightPointsUpSound			= IsengardLightPointsUp
	ObjectiveAddedSound			= Gui_MissionObjectiveNew
	ObjectiveCompletedSound			= Gui_MissionObjectiveCompleted

	// NOTE: It is very important that the create-a-hero be the first buildable hero, to ensure that the create-a-hero and the ring hero are always 
	// attached to the first two buttons in the command set.

	BuildableHeroesMP			= CreateAHero IsengardWormTongue IsengardLurtz IsengardSharku IsengardSaruman 
	BuildableRingHeroesMP			= MordorSauron_RingHero
	InitialUpgrades				= Upgrade_IsengardDualEconomyChoice Upgrade_IsengardFaction Upgrade_EvilDualEconomyChoice;Any upgrades this player template is born with.
	SpellStoreCurrentPowerLabel 		= APT:SpellStoreCurrentRingPower
	SpellStoreMaximumPowerLabel 		= APT:SpellStoreMaximumRingPower
	ResourceModifierObjectFilter 		= RESOURCE_MODIFIER_OBJECT_FILTER
	ResourceModifierValues			= 100 100 100 100 90 85 80 75 71 68 66
	MultiSelectionPortrait			= UPIsengard_Army
	LoadScreenMusic				= Shell2MusicForLoadScreen
End