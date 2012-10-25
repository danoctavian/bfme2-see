
; ------------------------------------------------------------------------------
Weapon GenericArcherFlamingArrowsRangeFinder
	AttackRange				= #SUBTRACT( GENERIC_ARCHER_RANGE 25 ) //100
	RangeBonusMinHeight		= 30 ;		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( GENERIC_ARCHER_RANGE .003 )
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted 	= No
	HordeAttackNugget
		LockWeaponSlot		= QUINARY
	End
End
;------------------------------------------------------------------------------
Weapon GenericArcherFlamingArrows      
	AttackRange				= GENERIC_ARCHER_RANGE	;Horde member so it needs to be bigger than the horde weapon attack range
	LeechRangeWeapon		= Yes
	WeaponSpeed			= 300					; dist/sec
	MinWeaponSpeed			= 121
	MaxWeaponSpeed			= 400
	FireFX					= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed		= Yes					; Used for lob weapons, scales speed proportional to range
	HitPercentage				= 100					;When this weapon is used it will hit exactly 50% of the time
	ScatterRadius				= 20.0					;When this weapon misses it can randomly miss by as much as this distance
	CanBeDodged				= Yes					; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	DelayBetweenShots		= 0
	PreAttackDelay			= GENERIC_ARCHER_PREATTACKDELAY
	PreAttackType			= PER_POSITION
	PreAttackRandomAmount	= 200
	FiringDuration				= 0
	
	ClipSize					= 1
	AutoReloadsClip			= Yes
	AutoReloadWhenIdle		= 1
	ClipReloadTime			= Min:ARCHER_BOW_RELOADTIME_MIN Max:ARCHER_BOW_RELOADTIME_MAX
	
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	HitPassengerPercentage	= 20%

	ProjectileNugget
		ProjectileTemplateName	= EvilFactionFireArrow
		WarheadTemplateName		= GenericArcherFlamingArrowsBowWarhead //GoblinArcherSAFireArrowsBowWarhead
	End
End
;-----------------------------------
Weapon GenericArcherFlamingArrowsBowWarhead
	ProjectileCollidesWith		= ENEMIES ALLIES ;(ALLIES temp added for testing the SEE Burning Death FX)
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	HitStoredTarget			= Yes
	
  DamageNugget                       
    Damage        			= ARCHER_DAMAGE_FLAMINGARROWS_FLAME
    Radius        			= 1.0 //0.0	
    DelayTime     			= 0
    DamageType    			= FLAME
    DamageFXType  			= EVIL_ARROW_PIERCE
    DeathType     			= BURNED
    AcceptDamageAdd 		= No
    DamageScalar  			= 25% ALL -STRUCTURE
  End
  
   DamageNugget                        ; A basic Nugget that just does damage
		Damage        		= 1
		Radius        		= 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    		= FLAME
		DamageFXType  		= FLAME
		DeathType     		= BURNED
		AcceptDamageAdd 	= No
		DamageScalar  		= 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
 DamageNugget            ; A basic Nugget that just does damage
    Damage		 			= ARCHER_DAMAGE_FLAMINGARROWS_PIERCE
    Radius		 			= 0.0	; HitStoredTarget means we hurt the person we launched at.
    DelayTime	 			= 0
    DamageType	 			= PIERCE
    DamageFXType 			= EVIL_ARROW_PIERCE
    DeathType	 			= LASERED ;now always used instead of NORMAL (Sûl)
  End

	FireLogicNugget
		LogicType			= INCREASE_BURN_RATE
		Radius				= ARCHER_REGULAR_FIREARROW_BURNRADIUS
		Damage				= ARCHER_REGULAR_FIREARROW_BURNRATEINCREASE
	End
 
End

; ------------------------------------------------------------------------------
Weapon HumanBodyImpactWarhead_SEE
	ProjectileCollidesWith 		= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
	FireFX = FX_HumanBodyGroundHit_SEE ;FX_SoldierHitGround
	DamageNugget															; A basic Nugget that just does damage
		Damage				= 100
		Radius				= 5.0
		DamageType			= CRUSH
		DamageFXType		= SMALL_ROCK
		DeathType			= NORMAL
	End
	MetaImpactNugget															; A Nugget that throws things back with force
		; HeroResist			= .75
		ShockWaveAmount	= 15.0
		ShockWaveRadius		= 8.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 0.5
	End
End
Weapon HorseBodyImpactWarhead_SEE
	ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
   FireFX = FX_HorseBodyGroundHit_SEE ;FX_RockDetonation ;FX_SoldierHitGround
  DamageNugget															; A basic Nugget that just does damage
		Damage				= 300
		Radius				= 8.0
		DamageType			= CRUSH
		DamageFXType		= SMALL_ROCK
		DeathType			= NORMAL
	End
	MetaImpactNugget															; A Nugget that throws things back with force
		; HeroResist			= .75
		ShockWaveAmount	= 25.0
		ShockWaveRadius		= 10.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 0.5
	End
End

; ------------------------------------------------------------------------------
Weapon MordorCaveTrollHitDrum
   LeechRangeWeapon			= Yes
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  AttackRange           	= CAVETROLL_DRUMHIT_RANGE //STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes
  DelayBetweenShots     		= MORDOR_TROLL_PUNCH_DELAYBETWEENSHOTS
  FiringDuration        		= MORDOR_TROLL_PUNCH_FIRINGDURATION
  PreAttackDelay        		= MORDOR_TROLL_PUNCH_PREATTACKDELAY
  PreAttackType         		= PER_SHOT ; Do the delay each time we attack a new target
  PreAttackFX          		= FX_TrollTreeSwing
  FireFX               		= FX_TrollPunchGeneric
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  AcceptableAimDelta			= 7.5 //15.0 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        		= 1
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= SIEGE
		DamageFXType  		= CLUBBING
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
	End
	
  AttributeModifierNugget
    AttributeModifier 			= SpellBookWarChant
    DamageFXType 			= EVIL_ARROW_PIERCE 
    SpecialObjectFilter 		= GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
  End
End

