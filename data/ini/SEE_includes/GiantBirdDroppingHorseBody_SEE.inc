  ; #include "..\..\..\..\includes\GiantBirdDroppingHorseBody_SEE.inc"

;############################################################;Sûlherokhh mod start
;-------------Added for SEE since almost all units use this.
  Behavior = SlowDeathBehavior ModuleTag_FallingDeathHorseBody
    DeathTypes          = NONE +NORMAL
    SinkDelay           = 3000
    SinkRate            = 0.5     ; in Dist/Sec
    DestructionDelay    = 8000
    DeathFlags			= DEATH_5     ; Controls animation and weapon choice. Sets BOTH model condition and object status bits.
    ; FX					= INITIAL FX_HorseBodyGroundHit_SEE
    ShadowWhenDead		= Yes      ; Volumetric shadows don't look so bad when sinking into ground
  End
  
  ; Behavior = FireWeaponWhenDeadBehavior ModuleTag_BurningBodyImpact1
		; RequiredStatus	= BURNED
		; StartsActive	= Yes
		; DelayTime		=  0
		; DeathWeapon		= HorseBodyImpactWarhead_SEE
		; WeaponOffset	= X:0 Y:0 Z:0
	; End
  ; Behavior = FireWeaponWhenDeadBehavior ModuleTag_BurningBodyImpact2
		; RequiredStatus	= AFLAME
		; StartsActive	= Yes
		; DelayTime		=  0
		; DeathWeapon		= HorseBodyImpactWarhead_SEE
		; WeaponOffset	= X:0 Y:0 Z:0
	; End
  Behavior = FireWeaponWhenDeadBehavior ModuleTag_FallingDeathHorseBodyImpact
    DeathTypes    = NONE +NORMAL
		RequiredStatus	= DEATH_5
		StartsActive	= Yes
		DelayTime		=  10
		DeathWeapon		= HorseBodyImpactWarhead_SEE
		WeaponOffset	= X:0 Y:0 Z:0
	End
	// Module starts asleep, and wakes up when thrown.
	Behavior = BezierProjectileBehavior ModuleTag_BodyHitHorse ; Module starts asleep, and wakes up when thrown.
		// To tweak a Bezier path
		FirstHeight					= 24	// Height of Bezier control points above highest intervening terrain
		SecondHeight				= 24
		FirstPercentIndent			= 30%	// Percentage of shot distance control points are placed
		SecondPercentIndent			= 70%
		TumbleRandomly				= Yes
		CrushStyle					= Yes	// I don't detonate, I just hit
		DieOnImpact					= Yes
		BounceCount					= 1		// When I hit the ground, I'll arc again
		BounceDistance				= 40	// this far
		BounceFirstHeight			= 24	// Height of Bezier control points above highest intervening terrain
		BounceSecondHeight			= 24
		BounceFirstPercentIndent	= 20%	// Percentage of shot distance control points are placed
		BounceSecondPercentIndent	= 80%
		GroundHitFX       = FX_HorseBodyGroundHit_SEE
		GroundBounceFX    = FX_HorseBodyGroundHit_SEE
	End
;############################################################;Sûlherokhh mod end
