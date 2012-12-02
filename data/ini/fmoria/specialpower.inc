; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; SpecialPower.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

;------------------------------------------------------------------------------ BALROG

SpecialPower SpecialAbilityBalrogWings
	Enum			= SPECIAL_GIMLI_LEAP ;SPECIAL_BALROG_WINGS
	ReloadTime		= 10000 //10 secs for SEE! ;15000
	Flags			= LIMIT_DISTANCE
	MaxCastRange	= 1000 //for SEE! ;825
End
SpecialPower SpecialAbilityBalrogScream
	Enum			= SPECIAL_BALROG_SCREAM
	ReloadTime		= 30000 //30 secs for SEE! ;120000
End
SpecialPower SpecialAbilityFireWhip
	Enum			= SPECIAL_AT_VISIBLE_OBJECT ;SPECIAL_FIRE_WHIP
	ReloadTime		= 30000 ;5000
End
SpecialPower SpecialAbilityBalrogBreath
	Enum			= SPECIAL_BALROG_BREATH
	ReloadTime		= 60000 //1 minute for SEE! ;75000 ;20000
	RadiusCursorRadius = BALROG_BREATH_RADIUS
End

; ----------------------------------------------------------------------------- CAVE TROLL of MORIA

SpecialPower SpecialAbilityCaveTrollHitDrum
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 60000
	ObjectFilter	= ANY +TrollDrum ALLIES
End
SpecialPower SpecialAbilityCaveTrollHeroSmash
	Enum			= SPECIAL_WORD_OF_POWER //SPECIAL_GENERAL_TARGETLESS
	ReloadTime		= 60000 //120000
	//RadiusCursorRadius = GLOIN_SMASH_WEAPON_RADIUS
End

;------------------------------------------------------------------------------ MOUNTAIN GIANT

SpecialPower SpecialAbilityWildMountainGiantStomp
	Enum			= SPECIAL_WORD_OF_POWER
	ReloadTime		= 60000
End
SpecialPower SpecialAbilityWildMountainGiantGrab
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 2000
	ObjectFilter = ANY -BIG_MONSTER -MordorSauron -MordorSauron_RingHero -ElvenGaladriel -ElvenGaladriel_RingHero +INFANTRY +HERO
End
SpecialPower SpecialAbilityWildMountainGiantFlingPassenger
	Enum			= SPECIAL_GENERAL_TARGETLESS
End

; ----------------------------------------------------------------------------- SHELOB

SpecialPower SpecialAbilityWildShelobTunnel
	Enum			= SPECIAL_BALROG_WINGS
	ReloadTime		= 90000
	InitiateSound		= ShelobTunnelUp
End
SpecialPower ShelobSpiderlingAllies_SEE
  Enum 				= SPECIAL_SPAWN_ORCS
  ReloadTime 		= 180000	 ; in milliseconds
  ; InitiateSound = SpellSummonSpiderlingsMS
  ; InitiateAtLocationSound = SpellSummonSpiderlingsMS
  ; RadiusCursorRadius = 65.0
End
SpecialPower SpecialAbilityWildShelobPoisonedStinger
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 60000
	ObjectFilter	= AFFECTED_BY_POISON_OBJECTFILTER 			; Removed -MordorFellBeast -MordorFellBeastInterface -AngmarWitchking_Mounted -BlackRiderMountedInterface 
End
SpecialPower SpecialAbilityShelobWebbing
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 10000
	InitiateSound		= LegolasHawkStrikeArrowShoot		;this plays when he fires, not when he targets
	ObjectFilter	= CRIPPLE_STRIKE_OBJECT_FILTER -MONSTER
End

;------------------------------------------------------------------------------ GREAT GOBLIN

SpecialPower SpecialPowerPoisonMist
	Enum					= SPECIAL_SPELL_BOOK_ENSHROUDING_MIST
	ReloadTime				= 240000 ; ; SPELL_RECHARGE_TIME_TIER_2
	Flags					= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	RadiusCursorRadius    	= 150 ;;SPELL_SUNFLARE_EFFECT_RADIUS
	InitiateAtLocationSound 	= SpellEnshroudingMist
	ForbiddenObjectFilter		= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 100
	MaxCastRange			= 150
End

;------------------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;------------------------------------------------------------------------------


;------------------------------------------------------------------------------ TIER 1
SpecialPower SpellBookMoriaDeepDrums
	Enum			= SPECIAL_SPELL_BOOK_WAR_CHANT
	Flags			= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime      	= SPELL_RECHARGE_TIME_TIER_1 ; in milliseconds
	RadiusCursorRadius	= 75.0	
	RequiredSciences		= SCIENCE_MoriaDeepDrums
	InitiateAtLocationSound = MoriaGoblinsDrummerArrives_SEE ;DRUMS IN DA DEEP!
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaPlunder
	Enum			= SPECIAL_SPELL_BOOK_ARMY_OF_THE_DEAD
	RequiredSciences		= SCIENCE_MoriaPlunder
	ReloadTime      	= SPELL_RECHARGE_TIME_TIER_1 ; in milliseconds
	;InitiateAtLocationSound = ArmyDeadEnterMono		;ArmyDeadEnterStereo	- Up to naz!
	RadiusCursorRadius	= 100.0 //200.0  
	ViewObjectDuration	= 5000
	ViewObjectRange		= 150
	Flags					= NEEDS_OBJECT_FILTER RESPECT_RECHARGE_TIME_DISCOUNT
	ObjectFilter			= SPELLBOOK_MORIA_PLUNDER_OBJECT_FILTER
End
	
;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaCaveBats
	Enum			= SPECIAL_SPELL_BOOK_CAVE_BATS
	Flags			= WATER_OK RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime		= SPELL_RECHARGE_TIME_TIER_1 ; in milliseconds
	RadiusCursorRadius	= 75.0
	RequiredSciences		= SCIENCE_MoriaCaveBats
	InitiateAtLocationSound	= SpellCaveBats
End


;------------------------------------------------------------------------------ TIER 2
SpecialPower SpellBookMoriaCallTheHorde
	Enum				= SPECIAL_SPELL_BOOK_CALL_THE_HORDE
	RequiredSciences		= SCIENCE_MoriaCallTheHorde
	ReloadTime			= SPELL_RECHARGE_TIME_TIER_2   ; in milliseconds
	InitiateSound			= SpellCallTheHordeStereo
	Flags				= RESPECT_RECHARGE_TIME_DISCOUNT
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaScurry
	Enum				= SPECIAL_SPELL_BOOK_ELVEN_GIFTS
    RequiredSciences			= SCIENCE_MoriaScurry
    ReloadTime      			= 0 ; in milliseconds
    Flags						= RESPECT_RECHARGE_TIME_DISCOUNT
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaUntamedAllegiance
	Enum				= SPECIAL_SPELL_BOOK_UNTAMED_ALLEGIANCE
	Flags				= NEEDS_OBJECT_FILTER RESPECT_RECHARGE_TIME_DISCOUNT
	RadiusCursorRadius		= 60
	RequiredSciences		= SCIENCE_MoriaUntamedAllegiance
	ReloadTime			= SPELL_RECHARGE_TIME_TIER_2						; in milliseconds
	ViewObjectDuration		= 10000
	ViewObjectRange			= 200
	ObjectFilter			= CREEP_OBJECTFILTER
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaDeteriorate
	Enum						= SPECIAL_SPELL_BOOK_EAGLE_ALLIES
	ReloadTime					= SPELL_RECHARGE_TIME_TIER_2   ; in milliseconds
	RadiusCursorRadius			= 100.0   ; Match the radius in FXList SummonBalrogStart
	RequiredSciences				= SCIENCE_MoriaDeteriorate
	ViewObjectDuration = 5000
	ViewObjectRange = 100
	Flags					= NEEDS_OBJECT_FILTER RESPECT_RECHARGE_TIME_DISCOUNT
	ObjectFilter			= SPELLBOOK_MORIA_DETERIORATE_OBJECT_FILTER
End
//
//	Enum		= SPECIAL_WOUND_ARROW
//	ReloadTime	= SPELL_RECHARGE_TIME_TIER_2
//	//PublicTimer	= No
//	ObjectFilter = CREATE_A_HERO_SPY_OBJECT_FILTER
//	RequiredSciences				= SCIENCE_MoriaDeteriorate
//	Flags					= NEEDS_OBJECT_FILTER RESPECT_RECHARGE_TIME_DISCOUNT
//	ObjectFilter			= SPELLBOOK_MORIA_DETERIORATE_OBJECT_FILTER
//End


;------------------------------------------------------------------------------ TIER 3
SpecialPower SpellBookMoriaShelob
	Enum						= SPECIAL_SPELL_BOOK_AWAKEN_WYRM
	ReloadTime					= SPELL_RECHARGE_TIME_TIER_3   ; in milliseconds
	RadiusCursorRadius			= 75.0 ; Match the radius in FXList SummonBalrogStart
	RequiredSciences				= SCIENCE_MoriaShelob
	ViewObjectDuration = 5000
	ViewObjectRange = 100
	Flags					= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter	= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange	= 75.0
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaDarkness
	Enum                     = SPECIAL_SPELL_BOOK_DARKNESS
	RequiredSciences          = SCIENCE_MoriaDarkness
	ReloadTime               = 360000; RotWK originally SPELL_RECHARGE_TIME_TIER_3 ;600000 in milliseconds
	InitiateAtLocationSound  = SpellDarkness
	Flags					 = RESPECT_RECHARGE_TIME_DISCOUNT
	ObjectFilter	= ANY -STRUCTURE -DwarvenZerker -NoldorWarrior -GondorKnightsofDol -WildBabyDrake -IsengardFanatic -MordorBlackRider 
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaWatcher
	Enum						= SPECIAL_SPELL_BOOK_WATCHER_ALLY
	Flags						= WATER_OK NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime					= SPELL_RECHARGE_TIME_TIER_3
	RadiusCursorRadius			= 90.0
	RequiredSciences				= SCIENCE_MoriaWatcher
	ViewObjectDuration = 5000
	ViewObjectRange = 100
	ForbiddenObjectFilter		= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 90.0
End


;------------------------------------------------------------------------------ TIER 4
SpecialPower SpellBookMoriaStoneGiants
	Enum						= SPECIAL_SPELL_BOOK_GENERAL_SUMMON
	Flags						= WATER_OK NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ReloadTime					= SPELL_RECHARGE_TIME_TIER_4
	RadiusCursorRadius			= 110.0 ;90.0
	RequiredSciences				= SCIENCE_MoriaStoneGiants
	ViewObjectDuration = 5000
	ViewObjectRange = 100
	ForbiddenObjectFilter		= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange		= 110.0 ;90.0
End

;------------------------------------------------------------------------------
SpecialPower SpellBookMoriaEarthquake
	Enum					= SPECIAL_SPELL_BOOK_EARTHQUAKE
	RadiusCursorRadius		= 300
	RequiredSciences		= SCIENCE_MoriaEarthquake
	ReloadTime				= SPELL_RECHARGE_TIME_TIER_4 ; in milliseconds
	InitiateAtLocationSound	= SpellEarthquakeMS
	ViewObjectDuration		= 10000
	ViewObjectRange			= 200
	Flags					= RESPECT_RECHARGE_TIME_DISCOUNT
End





//////////////////////////////////////////// Added by Ridder Geel for SEE! 

SpecialPower SpellBookBalrogAllyFort
	Enum						= SPECIAL_SPELL_BOOK_BALROG_ALLY
	ReloadTime					= SPELL_RECHARGE_TIME_TIER_4   ; in milliseconds
	RadiusCursorRadius			= 75.0 ; Match the radius in FXList SummonBalrogStart
	//RequiredSciences				= SCIENCE_BalrogAlly
	ViewObjectDuration = 5000
	ViewObjectRange = 100
	Flags					= NO_FORBIDDEN_OBJECTS RESPECT_RECHARGE_TIME_DISCOUNT
	ForbiddenObjectFilter	= NO_SUMMON_NEAR_OBJECT_FILTER
	ForbiddenObjectRange	= 75.0
End

;------------------------------------------------------------------------------
SpecialPower SpellBookScavengerMoria
	Enum				= SPECIAL_SPELL_BOOK_SCAVENGER
//    RequiredSciences			= SCIENCE_Scavenger
    ReloadTime				= 0   ; in milliseconds
    Flags				= RESPECT_RECHARGE_TIME_DISCOUNT
End
