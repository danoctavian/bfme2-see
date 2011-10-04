///////////////////////
// SPECIALPOWER.INC //
/////////////////////
//Moria//
////////

;------------------------------------------------------------------------------
SpecialPower SpecialAbilityBalrogWings
	Enum			= SPECIAL_GIMLI_LEAP ;SPECIAL_BALROG_WINGS
	ReloadTime		= 10000 //10 secs for SEE! ;15000
  Flags					= LIMIT_DISTANCE
  MaxCastRange			= 1000 //for SEE! ;825
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityBalrogScream
	Enum			= SPECIAL_BALROG_SCREAM
	ReloadTime		= 30000 //30 secs for SEE! ;120000
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityBalrogBreath
	Enum			= SPECIAL_BALROG_BREATH
	ReloadTime		= 60000 //1 minute for SEE! ;75000 ;20000
	RadiusCursorRadius = BALROG_BREATH_RADIUS
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityFireWhip
	Enum			= SPECIAL_AT_VISIBLE_OBJECT ;SPECIAL_FIRE_WHIP
	ReloadTime		= 30000 ;5000
End

; -----------------------------------------------------------------------------
SpecialPower SpecialAbilityCaveTrollHitDrum
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 60000
	ObjectFilter	= ANY +TrollDrum ALLIES
End

;------------------------------------------------------------------------------
SpecialPower SpecialAbilityWildMountainGiantGrab
	Enum						   = SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime					   = 2000
	ObjectFilter = ANY -BIG_MONSTER -MordorSauron -MordorSauron_RingHero -ElvenGaladriel -ElvenGaladriel_RingHero +INFANTRY +HERO
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityWildMountainGiantFlingPassenger
	Enum				= SPECIAL_GENERAL_TARGETLESS
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityWildMountainGiantStomp
	Enum						   = SPECIAL_WORD_OF_POWER
	ReloadTime					   = 60000
End

; -----------------------------------------------------------------------------
SpecialPower SpecialAbilityWildShelobPoisonedStinger
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 60000
	ObjectFilter	= AFFECTED_BY_POISON_OBJECTFILTER 			; Removed -MordorFellBeast -MordorFellBeastInterface -AngmarWitchking_Mounted -BlackRiderMountedInterface 
End
; -----------------------------------------------------------------------------
SpecialPower SpecialAbilityWildShelobTunnel
	Enum			= SPECIAL_BALROG_WINGS
	ReloadTime		= 90000
	InitiateSound		= ShelobTunnelUp
End
;------------------------------------------------------------------------------
SpecialPower ShelobSpiderlingAllies_SEE
  Enum 				= SPECIAL_SPAWN_ORCS
  ReloadTime 		= 180000	 ; in milliseconds
  ; InitiateSound = SpellSummonSpiderlingsMS
  ; InitiateAtLocationSound = SpellSummonSpiderlingsMS
  ; RadiusCursorRadius = 65.0
End
;------------------------------------------------------------------------------
SpecialPower SpecialAbilityShelobWebbing
	Enum			= SPECIAL_AT_VISIBLE_OBJECT
	ReloadTime		= 10000
	InitiateSound		= LegolasHawkStrikeArrowShoot		;this plays when he fires, not when he targets
End

