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
