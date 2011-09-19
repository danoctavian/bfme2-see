


;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

;----------------------------------- ^^
Weapon HumanBodyImpactWarhead_SEE
	ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
  ; FireFX = FX_HumanBodyGroundHit_SEE ;FX_SoldierHitGround
  DamageNugget															; A basic Nugget that just does damage
		Damage			= 100
		Radius			= 5.0
		DamageType		= CRUSH
		DamageFXType	= SMALL_ROCK
		DeathType		= NORMAL
	End
	MetaImpactNugget															; A Nugget that throws things back with force
		; HeroResist			= .75
		ShockWaveAmount		= 15.0
		ShockWaveRadius		= 8.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 0.5
	End
End
