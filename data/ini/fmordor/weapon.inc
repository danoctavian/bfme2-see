/////////////////
// WEAPON.INC //
///////////////
//Mordor//
/////////

;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
;  Mordor
;
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------



//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved catapult can attack
Weapon MordorCatapultExpansionWeapon		
	AttackRange					= MORDOR_CATAPULT_ROCK_RANGE
	MinimumAttackRange			= MORDOR_CATAPULT_ROCK_MINRANGE
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= MORDOR_CATAPULT_ROCK_DELAYBETWEENSHOTS  
	PreAttackDelay				= MORDOR_CATAPULT_ROCK_PREATTACKDELAY
	FiringDuration      		= MORDOR_CATAPULT_ROCK_FIRINGDURATION
	AcceptableAimDelta			= MORDOR_CATAPULT_EXPANSION_AIM_DELTA  
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End

;-----------------------------------
Weapon MordorCatapultRock  ; BALANCE Catapult Weapon
  AttackRange = MORDOR_CATAPULT_ROCK_RANGE
  
  RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_CATAPULT_ROCK_RANGE .003 )
	
	
  MinimumAttackRange		= 150.0		; RotWK originally 100.0
  WeaponSpeed			= 201         	; dist/sec 
  MinWeaponSpeed		= 201
  FireFX			= FX_CatapultWeapon
  DelayBetweenShots		= MORDOR_CATAPULT_ROCK_DELAYBETWEENSHOTS; time between shots, msec
  FXTrigger			= CATAPULT_ROCK
  PreAttackDelay		= MORDOR_CATAPULT_ROCK_PREATTACKDELAY
  PreAttackType			= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration		= MORDOR_CATAPULT_ROCK_FIRINGDURATION    ; Catapult firing animation takes 3.0 secs.
  RequireFollowThru		= Yes
  ShareTimers			= Yes 		; share timer with catapult heads to you can't fire both in quick succession
  NoVictimNeeded		= Yes 		; Need no target
  LeechRangeWeapon		= Yes
  
  ScatterRadiusVsInfantry     = 40.0 ; 
  DisableScatterForTargetsOnWall = Yes
  HitPercentage       = 70 ; always hits.
  ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = MordorCatapultRockProjectile
    WarheadTemplateName = MordorCatapultRockWarhead
  End
End

;------------------------------------------------------------------------------
Weapon MordorCatapultHumanHeads
	AttackRange			= MORDOR_CATAPULT_HEADS_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_CATAPULT_HEADS_RANGE .003 )
	
	MinimumAttackRange	= 100.0
	WeaponSpeed			= 201         ; dist/sec 
	MinWeaponSpeed		= 201
	FireFX				= FX_CatapultWeapon
	DelayBetweenShots	= MORDOR_CATAPULT_HEADS_DELAYBETWEENSHOTS; time between shots, msec
	FXTrigger			= CATAPULT_ROCK
	PreAttackDelay		= MORDOR_CATAPULT_HEADS_PREATTACKDELAY
	PreAttackType		= PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration		= MORDOR_CATAPULT_HEADS_FIRINGDURATION    ; Catapult firing animation takes 3.0 secs.
 	RequireFollowThru	= Yes
	ShareTimers			= Yes ; share timer with catapult rocks to you can't fire both in quick succession
	NoVictimNeeded		= Yes ; Need no target
    LeechRangeWeapon    = Yes

	HitPercentage			= 50 ;misses 50%
	ScatterRadius  		= 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

	
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= MordorCatapultHumanHeadsProjectile
		WarheadTemplateName		= MordorCatapultHumanHeadsWarhead
	End	
End

;-----------------------------------
Weapon MordorCatapultRockWarhead
	ProjectileCollidesWith = MONSTERS NEUTRAL  STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR

	FireLogicNugget ;@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	40
		Damage		=	3
	End

	DamageNugget                        ; A basic Nugget that just does damage to trigger explosive mine
		Damage        = 1
		Radius        = 20
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	// A Nugget that throws things back with force 
	MetaImpactNugget                    
		ShockWaveAmount   = 35.0
		ShockWaveRadius   = 30.0
		ShockWaveTaperOff = 0.75
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = MORDOR_CATAPULT_FLAME_DAMAGE
	    Radius        = 30 ;20.0
	    DelayTime     = 0
	    DamageType    = FLAME
	    DamageFXType  = BIG_ROCK
	    DeathType     = BURNED
	    AcceptDamageAdd = No
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End
	
	
	 DamageNugget                        ; A basic Nugget that just does damage
		Damage        = MORDOR_CATAPULT_ROCK_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 50.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 125% ANY ENEMIES +STRUCTURE
	End
End


Weapon MordorCatapultHumanHeadsWarhead
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	
	FireLogicNugget ;@@@ fire logic testing
		LogicType		=	INCREASE_FUEL
		Radius			=	80
		Damage			=	40
		MinMaxBurnRate	=	100
		MinDecay		=	1
		MaxResistance	=	0
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = MORDOR_CATAPULT_HEADS_DAMAGE   ;Reduced damage for heads. Heads don't break stone.
		Radius        = 4.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
;		DamageScalar  = 0% ANY +STRUCTURE			; No damage to allied structures.
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 40 ;50
		Radius        = 20.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
;		DamageScalar  = 0% ANY +STRUCTURE			; No damage to allied structures.
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force - E4 Hacked
		HeroResist			= .75
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.5
	End
End


;-----------------------------------
Weapon MordorCatapultRock_Structural  ; BALANCE Catapult Weapon
  AttackRange = MORDOR_CATAPULT_ROCK_RANGE
  
  	;RangeBonusMinHeight    = 30 		; = 10
	;RangeBonus		= 1
	;RangeBonusPerFoot	= #MULTIPLY( MORDOR_CATAPULT_ROCK_RANGE .003 )
	
	
  MinimumAttackRange		= 150.0		; RotWK originally 100.0
  WeaponSpeed			= 201         	; dist/sec 
  MinWeaponSpeed		= 201
  FireFX			= FX_CatapultWeapon
  DelayBetweenShots		= MORDOR_CATAPULT_ROCK_DELAYBETWEENSHOTS; time between shots, msec
  FXTrigger			= CATAPULT_ROCK
  PreAttackDelay		= MORDOR_CATAPULT_ROCK_PREATTACKDELAY
  PreAttackType			= PER_SHOT 	; Do the delay each time we attack a new target
  FiringDuration		= MORDOR_CATAPULT_ROCK_FIRINGDURATION    ; Catapult firing animation takes 3.0 secs.
  RequireFollowThru		= Yes
  ShareTimers			= Yes 		; share timer with catapult heads to you can't fire both in quick succession
  NoVictimNeeded		= Yes 		; Need no target
  LeechRangeWeapon		= Yes
  
  ScatterRadiusVsInfantry     = 40.0 ; 
  DisableScatterForTargetsOnWall = Yes
  HitPercentage       = 70 ; always hits.
  ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = MordorCatapultRockProjectile
    WarheadTemplateName = MordorCatapultRockWarhead_Structural
  End
End

;-----------------------------------
Weapon MordorCatapultRockWarhead_Structural
	ProjectileCollidesWith = MONSTERS NEUTRAL STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR

	FireLogicNugget ;@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	40
		Damage		=	3
	End

	DamageNugget                        ; A basic Nugget that just does damage to trigger explosive mine
		Damage        = 1
		Radius        = 20
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	// A Nugget that throws things back with force 
	MetaImpactNugget                    
		ShockWaveAmount   = 35.0
		ShockWaveRadius   = 30.0
		ShockWaveTaperOff = 0.75
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = MORDOR_CATAPULT_FLAME_DAMAGE
	    Radius        = 30 ;20.0
	    DelayTime     = 0
	    DamageType    = FLAME
	    DamageFXType  = BIG_ROCK
	    DeathType     = BURNED
	    AcceptDamageAdd = No
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End
	
	
	 DamageNugget                        ; A basic Nugget that just does damage
		Damage        = MORDOR_CATAPULT_ROCK_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 50.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 125% ANY ENEMIES +STRUCTURE
	End
End

;-----------------------------------

Weapon MordorCatapultRock_Celduin  ; CUSTOM Catapult Rock for Good 6 Celduin
  AttackRange = 5000
  MinimumAttackRange	= 100.0
  WeaponSpeed			= 201 ; dist/sec 
  MinWeaponSpeed		= 201
  FireFX				= FX_CatapultWeapon
  DelayBetweenShots		= 6000; time between shots, msec
  FXTrigger				= CATAPULT_ROCK
  PreAttackDelay		= MORDOR_CATAPULT_ROCK_PREATTACKDELAY
  PreAttackType			= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration		= MORDOR_CATAPULT_ROCK_FIRINGDURATION    ; Catapult firing animation takes 3.0 secs.
  RequireFollowThru		= Yes
  ShareTimers			= Yes ; share timer with catapult heads to you can't fire both in quick succession
  NoVictimNeeded		= Yes ; Need no target
  LeechRangeWeapon		= Yes
  
  ScatterRadiusVsInfantry     = 40.0 ; 
  DisableScatterForTargetsOnWall = Yes
  HitPercentage       = 100 ; always hits.
;  ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = MordorCatapultRockProjectile
    WarheadTemplateName = MordorCatapultRockWarhead
  End
End

;//-----------------------------------oo
Weapon MordorGorgorothSpireWeapon		;// BALANCE Spire Weapon
  	AttackRange		= MORDOR_GORGOROTHSPIRE_ROCK_RANGE
  	MinimumAttackRange	= 100.0
  	WeaponSpeed		= 201			;// dist/sec 
  	MinWeaponSpeed		= 201
  	DelayBetweenShots	= MORDOR_GORGOROTHSPIRE_ROCK_DELAYBETWEENSHOTS	;// time between shots, msec
  	FXTrigger		= CATAPULT_ROCK
  	PreAttackDelay		= MORDOR_GORGOROTHSPIRE_ROCK_PREATTACKDELAY
  	PreAttackType		= PER_SHOT		;// Do the delay each time we attack a new target
  	FiringDuration		= MORDOR_GORGOROTHSPIRE_ROCK_FIRINGDURATION		;// Catapult firing animation takes 3.0 secs.
  	RequireFollowThru	= Yes
  	ShareTimers		= No ;Yes			;// share timer with catapult heads to you can't fire both in quick succession
  	NoVictimNeeded		= Yes			;// Need no target
  	LeechRangeWeapon	= Yes
  	
  	ScatterRadiusVsInfantry		= 40.0  
  	DisableScatterForTargetsOnWall	= Yes
  	HitPercentage			= 100	;// always hits.

	ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= MordorGorgorothSpireProjectile
		WarheadTemplateName		= MordorGorgorothSpireWarhead
		WeaponLaunchBoneSlotOverride = SECONDARY	
	End														   
End

;//-----------------------------------
Weapon MordorGorgorothSpireWarhead
	ProjectileCollidesWith	= MONSTERS	STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 50
		Damage			= 400
		MinMaxBurnRate	= 12
		MaxResistance	= 5
	End
	
	FireLogicNugget ;//@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	50
		Damage		=	5
	End

	DamageNugget                        ; A basic Nugget that just does damage to trigger explosive mine
		Damage        = 1
		Radius        = 150
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = MORDOR_GORGOROTHSPIRE_ROCK_DAMAGE	; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
	    Radius        = 150 ;20.0
	    DelayTime     = 0
	    DamageType    = SIEGE
	    DamageFXType  = BIG_ROCK
	    DeathType     = EXPLODED
;		DamageScalar  = 0% ANY +STRUCTURE			; No damage to allied structures.
	End

	DamageNugget                        ; A basic Nugget that just does damage
	    Damage			= MORDOR_GORGOROTHSPIRE_FLAME_DAMAGE
	    Radius			= 150 ;20.0
	    DelayTime		= 0
	    DamageType		= FLAME
	    DamageFXType	= BIG_ROCK
	    DeathType		= BURNED
	    AcceptDamageAdd = No
;		DamageScalar	= 0% ANY +STRUCTURE			; No damage to allied structures.
	End

	MetaImpactNugget                    ;// A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 150.0
		ShockWaveTaperOff	= 0.2
		ShockWaveZMult		= 1.20		
	End
End


;------------------------------------------------------------------------------
Weapon MordorCatapultRockDemo  ; BALANCE Catapult Weapon
  ScatterRadiusVsInfantry     = 0.08     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
  AttackRange = 480.0; 1500
  MinimumAttackRange = 100.0
  WeaponSpeed = 321         ; dist/sec 
  MinWeaponSpeed = 321
  FireFX = FX_CatapultWeapon
  DelayBetweenShots = 9000               ; time between shots, msec
  PreAttackDelay      = 1166      ; 1.166 is the prep time for trebuchet
  PreAttackType       = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration      = 5500    ; Trebuchet firing animation takes 5.5 secs.

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = MordorCatapultRockWarheadDemo
  End
End

;-------------------------------------------------------------------------------
Weapon MordorCatapultRockWarheadDemo
  FireFX= FX_RockDetonation
  RadiusDamageAffects = ENEMIES NOT_SIMILAR
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 100
    Radius        = 68.0
    DelayTime     = 0
    DamageType    = SIEGE
    DamageFXType  = BIG_ROCK
    DeathType     = EXPLODED
  End
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 1
    Radius        = 20.0
    DelayTime     = 0
    DamageType    = SIEGE
    DamageFXType  = BIG_ROCK
    DeathType     = EXPLODED
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 25.0
    ShockWaveRadius   = 20.0
    ShockWaveTaperOff = 0.75
  End
End



;-------------------------------------------------------------------------------
Weapon WitchKingMorgulBlade     ; BALANCE Witch King Weapon
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = WITCHKING_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay        = WITCHKING_SWORD_PREATTACKDELAY 	; 300 is mace swing delay time before contact with target.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack
	FireFX                = FX_GondorSwordHit
	FiringDuration        = WITCHKING_FIRINGDURATION 	; Duration of the mace swing 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = WITCHKING_DAMAGE				
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = SLASH
		;DamageFXType  = NONE
		DeathType     = NORMAL
		DamageScalar  = 10% NONE +RohanEowyn
	End
End

;-------------------------------------------------------------------------------
; this weapon is the same as WitchKingMorgulBlade with an added AttributeModifierNugget used for his special attack
Weapon WitchKingMorgulBladeSpecialPower     ; BALANCE Orc Warrior Weapon
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = WITCHKING_MORGULBLADE_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay        = WITCHKING_MORGULBLADE_PREATTACKDELAY 		; 300 is mace swing delay time before contact with target.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack
	FireFX                = FX_GondorSwordHit
	FiringDuration        = WITCHKING_MORGULBLADE_FIRINGDURATION 		; Duration of the mace swing
	;ClipSize				= 1
	;AutoReloadsClip			= Yes
	;ClipReloadTime			= 5000 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = WITCHKING_MORGULBLADE_DAMAGE
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = WITCH_KING_MORGUL_BLADE
		DeathType     = NORMAL
		DamageScalar  = 10% NONE +RohanEowyn
	End
	AttributeModifierNugget
		SpecialObjectFilter = ALL -TomBombadil -TomBombadil_Summoned
		AttributeModifier = WitchKingMorgulBladeEffect
	End
End


;------------------------------------------------------------------------------
Weapon MordorOliphantDeathStraightInitial  ; BALANCE Oliphant Death Knealing down over units
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 10
    Radius        = 24.0
    DelayTime     = 0
    DamageType    = FORCE
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 40.0
    ShockWaveRadius   = 24.0
    ShockWaveTaperOff = 0.5
  End
End


;------------------------------------------------------------------------------
Weapon FellbeastGrabWeapon  ; BALANCE Fellbeast grabbing victim fire weapon
  CanSwoop		= Yes  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = NAZGUL_GRAB_SPLASH_DAMAGE
    Radius        = NAZGUL_GRAB_RADIUS_OF_DAMAGE
    DelayTime     = 0
    DamageType    = FORCE
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= 0.0		;knock down heroes too
	ShockWaveArc		= NAZGUL_GRAB_ARC_OF_SHOCK
    ShockWaveAmount		= NAZGUL_GRAB_AMOUNT_OF_SHOCK
    ShockWaveRadius		= NAZGUL_GRAB_RADIUS_OF_SHOCK
    ShockWaveTaperOff	= 0.75
  End
End

;------------------------------------------------------------------------------
;Weapon MordorOliphantDeathStraightFinal  ; BALANCE Oliphant Death toppling over units
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 10
;    Radius        = 40.0
;    DelayTime     = 0
;    DamageType    = FORCE
;    DeathType     = NORMAL
;  End
;  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
;    ShockWaveAmount   = 75.0
;    ShockWaveRadius   = 40.0
;    ShockWaveTaperOff = 0.6
;  End
;End


;------------------------------------------------------------------------------
Weapon MordorOliphantToppleFinal  ; BALANCE Oliphant Death toppling over units
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 10
    Radius        = 72.0
    DelayTime     = 0
    DamageType    = FORCE
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 72.0
    ShockWaveTaperOff = 0.6
  End
End

;------------------------------------------------------------------------------
Weapon MordorSiegeTowerToppleFinal  ; BALANCE Oliphant Death toppling over units
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 30
    Radius        = 35.0
    DelayTime     = 0
    DamageType    = FORCE
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 45.0
    ShockWaveRadius   = 35.0
    ShockWaveTaperOff = 0.6
  End
End


Weapon MordorOliphantE3Death
  DamageNugget                        ; A basic Nugget that just does damage
    Damage				= 500
    Radius				= 80.0
    DelayTime			= 0
    DamageType			= FORCE
    DeathType			= NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount		= 50.0
    ShockWaveRadius		= 80.0
    ShockWaveTaperOff	= 0.6
  End
End

;------------------------------------------------------------------------------
Weapon MordorCatapultRockFlame  ; BALANCE Catapult Weapon
  RadiusDamageAffects = ENEMIES NEUTRALS
  DamageFieldNugget                   ; A Nugget that lays down an area of damage that persists independantly
    WeaponTemplateName = SmallFireFieldWeapon  
    Duration = 3000                            
  End
End


;------------------------------------------------------------------------------
Weapon MordorGrondRam
  LeechRangeWeapon      = Yes
  CanFireWhileMoving    = No
  AttackRange           = 5.0
  AntiStructure         = Yes            ; Ram ONLY affects structures -- buildings, walls, gates
  AntiGround            = No             ; ditto
  MeleeWeapon           = No			 ; Need to have some range to look right.
  AcceptableAimDelta    = 20             ; Can't ram sideways (but give a little slack) -- actually a little more!
  DelayBetweenShots     = 5500           ; time between shots, msec. Placeholder until animations are in
  PreAttackDelay        = 3000        
  PreAttackType         = PER_ATTACK       ; Do the delay each time we attack
  FiringDuration        = 4500      
  HoldAfterFiringDelay  = 3000 ; So I don't move while the weapon needs to complete

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_GROND_DAMAGE
    Radius        = 5.0
    DelayTime     = 2500				; Contact of nose.  Preattack is being used by trolls putting hands on ram
    DamageType    = SIEGE
    DamageFXType  = STRUCTURAL
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon MordorGrondRamBuilding
  LeechRangeWeapon      = Yes
  CanFireWhileMoving    = No
  AttackRange           = 40.0
  AntiStructure         = Yes            ; Ram ONLY affects structures -- buildings, walls, gates
  AntiGround            = No             ; ditto
  MeleeWeapon           = No			 ; Need to have some range to look right.
  AcceptableAimDelta    = 20             ; Can't ram sideways (but give a little slack)
  DelayBetweenShots     = 5500           ; time between shots, msec. Placeholder until animations are in
  PreAttackDelay        = 3000        
  PreAttackType         = PER_ATTACK       ; Do the delay each time we attack
  FiringDuration        = 4500      
  HoldAfterFiringDelay  = 3000 ; So I don't move while the weapon needs to complete

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_GROND_DAMAGE
    Radius        = 5.0
    DelayTime     = 2500				; Contact of nose.  Preattack is being used by trolls putting hands on ram
    DamageType    = SIEGE
    DamageFXType  = STRUCTURAL
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
; This is the normal attack now
Weapon MordorMumakilKnockback  ; BALANCE Mumakil Weapon
	AttackRange					= 44.0	; Should be less than the damage radius, so we don't just barely catch the bad guy.
	DelayBetweenShots			= 4000            ; time between shots, msec
    	FiringDuration			= 2600	;2600 ;min 933 for anim              ; how long to reload a Clip, msec
    	PreAttackDelay			= 1400
    	PreAttackType			= PER_SHOT ; Do the delay each time we attack a new target
	FireFX						= FX_MUMStructureAtk
	DamageDealtAtSelfPosition	= Yes ; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta			= 15.0 
	ChaseWeapon					= Yes ; Not full melee, but we get to move to attack a passive acquire, even if player owned.
	;CannotTargetCastleVictims	= Yes
	HoldAfterFiringDelay		= 2400
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage					= MUMAKIL_NORMAL_ATTACK
		Radius					= 140.0
		DamageArc				= 30
		DamageType				= SIEGE
		DamageFXType			= CLUBBING
		DeathType				= NORMAL
		DamageScalar			= 0% NONE +WALK_ON_TOP_OF_WALL +BLOCKING_GATE ; This is a trick.  Marked as CanAttackWalls so he won't think he can walk on them, but then told he can't do damage to them so he won't attack.
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage					= MUMAKIL_NORMAL_ATTACK
		Radius					= 140.0
		DamageTaperOff 				= 70
		DamageArc				= 30
		DamageType				= SIEGE
		DamageFXType			= CLUBBING
		DeathType				= NORMAL
		DamageScalar  			= 0% ALL -WALL_UPGRADE -WALL_HUB -WALL_SEGMENT -DEFENSIVE_WALL			; No damage to allied structures.
		DamageScalar			= 0% NONE +WALK_ON_TOP_OF_WALL +BLOCKING_GATE ; This is a trick.  Marked as CanAttackWalls so he won't think he can walk on them, but then told he can't do damage to them so he won't attack.
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
		;HeroResist			= .75
		ShockWaveAmount			= 60.0
		ShockWaveRadius			= 100.0
		ShockWaveTaperOff		= 0.7
		ShockWaveArc			= 30
	End
End

;-------------------------------------------------------------------------------
Weapon MordorMumakilCharge ; This is the rangefinding weapon for charging
	RadiusDamageAffects			= ENEMIES 
	AttackRange					= 300.0
	DelayBetweenShots			= 30000            ; time between shots, msec
	FiringDuration				= 0 
	;PreAttackDelay				= 1400
	PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
	;PreAttackFX				= FX_TrollTreeSwing
	CanFireWhileCharging		= yes
	;MeleeWeapon					= Yes
	;CannotTargetCastleVictims	= Yes
	AcceptableAimDelta	= 15		
		
	DamageNugget                        ; A basic Nugget that just does damage
		Damage					= 1.0
		Radius					= 1.0
		DamageType				= CRUSH
		DamageFXType			= CLUBBING
		DeathType				= NORMAL
		DamageScalar			= 0% NONE +STRUCTURE	
	End
End

;-------------------------------------------------------------------------------
Weapon MordorMumakilChargeSpecial ; This is a special script driven version of the rangefinder
	AttackRange					= 5000.0
	DelayBetweenShots			= 0            ; time between shots, msec
	FiringDuration				= 0 ;min 933 for anim              ; how long to reload a Clip, msec
	;PreAttackDelay				= 1400
	PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
	;PreAttackFX				= FX_TrollTreeSwing
	CanFireWhileCharging		= yes
	MeleeWeapon					= Yes
	;CannotTargetCastleVictims	= Yes
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage					= 300
		Radius					= 24.0
		DamageType				= CRUSH
		DamageFXType			= CLUBBING
		DeathType				= NORMAL
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount			= 60.0
		ShockWaveRadius			= 24.0
		ShockWaveTaperOff		= 0.7
	End
End

;------------------------------------------------------------------------------
Weapon MordorMumakilHeroEffect     ; This is the weapon that does the actual charge damage.  Fired from the ChargeOnly labeled FireWeaponUpdate.
  LeechRangeWeapon      = No
  RadiusDamageAffects = ENEMIES 
  AttackRange           = 20.0
  MeleeWeapon           = No
  DelayBetweenShots     = 500            ; time between shots, msec
  PreAttackDelay        = 166             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
;  FireFX                = FX_TrebuchetImpactHit
;  FireFX                = FX_TrollTreeHit
  FiringDuration        = 333    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 50
    Radius        = 50.0
    DamageType	  = CRUSH
    DamageFXType  = CLUBBING
    DeathType	  = NORMAL
;    DamageType    = FLAME
;	DamageFXType	= FLAME
;	DeathType		= BURNED
 End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 40.0
    ShockWaveRadius   = 40.0
    ShockWaveTaperOff = 0.66
  End
End

;------------------------------------------------------------------------------
; This is the normal punch, not the AOE, rock, siege or tree
Weapon MordorCaveTrollPunch  ; BALANCE CaveTroll Weapon Normal
  LeechRangeWeapon		= Yes
  RadiusDamageAffects = ENEMIES 
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = MORDOR_TROLL_PUNCH_DELAYBETWEENSHOTS
  FiringDuration        = MORDOR_TROLL_PUNCH_FIRINGDURATION
  PreAttackDelay        = MORDOR_TROLL_PUNCH_PREATTACKDELAY
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackFX          	= FX_TrollTreeSwing
  FireFX               	= FX_TrollPunchGeneric
  DamageDealtAtSelfPosition = Yes ; A melee based AoE.  Arc radiates from me, not them
  AcceptableAimDelta	= 15.0 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_TROLL_PUNCH_DAMAGE
    Radius        = 50.0
    DamageArc      = 45
    DamageType    = SIEGE
    DamageFXType  = CLUBBING
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   = 20.0
    ShockWaveRadius   = 40.0
    ShockWaveTaperOff = 1.0
    ShockWaveArc      = 45
    ShockWaveZMult    = 1.20
 ;   HeroResist		  = 0.90		; 90% resistance to heroes
  End
End

;------------------------------------------------------------------------------
; This is the building attack bash, not the AOE, rock, siege or tree
Weapon MordorCaveTrollBash  ; BALANCE CaveTroll Weapon Normal
	LeechRangeWeapon	  = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	RadiusDamageAffects	  = ENEMIES 
	MeleeWeapon           = Yes
	FireFX                = FX_TrollBash
	DelayBetweenShots     = MORDOR_TROLL_SHOULDER_DELAYBETWEENSHOTS            ; time between shots, msec
	FiringDuration        = MORDOR_TROLL_SHOULDER_FIRINGDURATION
	PreAttackDelay        = MORDOR_TROLL_SHOULDER_PREATTACKDELAY
	PreAttackType         = PER_SHOT
	PreAttackFX           = FX_TrollTreeSwing
	AcceptableAimDelta	  = 35.0 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = MORDOR_TROLL_SHOULDER_DAMAGE
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = CLUBBING
		DeathType     = NORMAL
	End
End

;------------------------------------------------------------------------------
; This is the attack with a tree in hand
; BALANCE CaveTroll Weapon Club
;
Weapon MordorCaveTrollClubSwing
	LeechRangeWeapon			= Yes
	RadiusDamageAffects			= ENEMIES								; Turning off friendly fire for all allies, but ya know, this could say NotSimilar and then he could hit friendlies except for trolls
	MeleeWeapon					= Yes
	AttackRange					= 20									; this was tuned with the Damage and shock wave nugget so it looks good with club
	FireFX						= FX_TrollClubHit
	DelayBetweenShots			= MORDOR_TROLL_TREE_DELAYBETWEENSHOTS	; time between shots, msec
	FiringDuration				= MORDOR_TROLL_TREE_FIRINGDURATION
	PreAttackDelay				= MORDOR_TROLL_TREE_PREATTACKDELAY
	PreAttackType				= PER_SHOT								; Do the delay each time we attack a new target
	PreAttackFX					= FX_TrollTreeSwing
	DamageDealtAtSelfPosition	= Yes									; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta			= 35.0 

	DamageNugget									; A basic Nugget that just does damage
		Damage			= MORDOR_TROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		;DamageScalar		= 200% NONE +HERO
		Radius			= 60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc		= 90
		DamageType		= SIEGE
		DamageFXType		= CLUBBING
		DeathType		= NORMAL
	End

	MetaImpactNugget								; A Nugget that throws things back with force
		ShockWaveAmount   = 40.0
		ShockWaveRadius   = 50.0
		ShockWaveTaperOff = 0.75
		ShockWaveArc      = 90
		ShockWaveZMult    = 1.20
;		HeroResist		  = 0.90					; 90% resistance to heroes
	End
End

;------------------------------------------------------------------------------
; This is the attack with a tree in hand
; BALANCE CaveTroll Weapon Club
;
Weapon MordorAttackTrollClubSwing
	LeechRangeWeapon			= Yes
	RadiusDamageAffects			= ENEMIES								; Turning off friendly fire for all allies, but ya know, this could say NotSimilar and then he could hit friendlies except for trolls
	MeleeWeapon					= Yes
	AttackRange					= 30									; this was tuned with the Damage and shock wave nugget so it looks good with club
	FireFX						= FX_TrollClubHit
	ClipSize					= INFINITE_CLIP_SIZE					; how many shots in a Clip (0 == infinite)
	AutoReloadsClip				= No									; We need a rock explicitly picked up.
	DelayBetweenShots			= MORDOR_ATTACKTROLL_TREE_DELAYBETWEENSHOTS	; time between shots, msec
	FiringDuration				= MORDOR_ATTACKTROLL_TREE_FIRINGDURATION
	PreAttackDelay				= MORDOR_ATTACKTROLL_TREE_PREATTACKDELAY
	PreAttackType				= PER_SHOT								; Do the delay each time we attack a new target
	PreAttackFX					= FX_TrollTreeSwing
	DamageDealtAtSelfPosition	= Yes									; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta			= 35.0 

	DamageNugget									; A basic Nugget that just does damage
		Damage			= MORDOR_ATTACKTROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		DamageScalar		= 50% NONE +HERO +PIKE
		Radius			= 60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc		= 90
		DamageType		= SIEGE
		DamageFXType		= CLUBBING
		DeathType		= NORMAL
	End

	MetaImpactNugget								; A Nugget that throws things back with force
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 60.0
		ShockWaveTaperOff = 0.75
		ShockWaveArc      = 90
		ShockWaveZMult    = 1.20
;		HeroResist		  = 0.90					; 90% resistance to heroes
	End
End

;------------------------------------------------------------------------------
; This is the attack with rock in hand
Weapon MordorCaveTrollRockThrow  ; BALANCE CaveTroll Weapon Rock
	IdleAfterFiringDelay	= 2167 ; So I don't chuck rock, and then chase it because the target doesn't die until the rock hits him
	AttackRange				= MORDOR_TROLL_ROCK_RANGE	
	WeaponSpeed				= 240.0        ; dist/sec (huge value == effectively instant)
	ProjectileFilterInContainer	= ANY +ROCK +INFANTRY; We don't make the projectile, it is in our Contain module.
	;FireFX					= FX_TrollTreeHit
	PreAttackDelay			= MORDOR_TROLL_ROCK_PREATTACKDELAY
	PreAttackType			= PER_SHOT ; Do the delay each time we attack a new target
	HitPercentage			= 0 ; never auto hits, always hits ground
	ScatterRadius			= 4.0     ;When this weapon misses it can randomly miss by as much as this distance.
	FiringDuration			= MORDOR_TROLL_ROCK_FIRINGDURATION
	DelayBetweenShots		= MORDOR_TROLL_ROCK_DELAYBETWEENSHOTS
	NoVictimNeeded			= Yes ; Need no target
    LeechRangeWeapon		= Yes

	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		WarheadTemplateName = MordorCaveTrollRockThrowWarhead
	End
End

;----------------------------------------------------------------------------------------------------------------
;
;	This is the toggle weapon for troll. They will reload, throw, reload straight away, and constantly hold a rock.
;
Weapon TrollRockThrow
	;IdleAfterFiringDelay		= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload			= Yes
	AttackRange					= MORDOR_TROLL_ROCK_RANGE
	WeaponSpeed					= 200.0							; dist/sec (huge value == effectively instant)
	FireFX						= FX_EntThrowSmallRock
	PreAttackDelay				= 1400
	FiringDuration				= 2000
	PreAttackType				= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots			= 6100
	HitPercentage				= 0								; never auto hits, always hits ground
	ScatterRadius				= 4.0							; When this weapon misses it can randomly miss by as much as this distance.
	IsAimingWeapon				= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded				= Yes							; Need no target
	LeechRangeWeapon			= Yes

	AutoReloadWhenIdle			= 1500							; should be a bit less than IdleAfterFiringDelay
	ClipSize 					= 1
	AutoReloadsClip 			= Yes
	ClipReloadTime 				= 2100

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigTroll
		WarheadTemplateName		= MordorCaveTrollRockThrowWarhead
	End
End

;-----------------------------------
Weapon MordorCaveTrollRockThrowWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
;		FireFX = FX_RockDetonation
		DamageNugget															; A basic Nugget that just does damage
		Damage			= MORDOR_CAVE_TROLL_ROCK_DAMAGE
		Radius			= 12.0
		DamageType		= SIEGE
		DamageFXType	= SMALL_ROCK
		DeathType		= NORMAL
	End
	MetaImpactNugget															; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 12.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 1.20
	End
End

;----------------------------------------------------------------------------------------------------------------
;
;	This is the weapon for a troll picking up a nearby goblin and throwing him. 
;
Weapon CaveTrollGoblinThrow
	;IdleAfterFiringDelay		= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload			= Yes
	AttackRange					= ROHAN_TREEBEARD_ROCK_RANGE
	WeaponSpeed					= 200.0							; dist/sec (huge value == effectively instant)
	FireFX						= FX_EntThrowSmallRock
	PreAttackDelay				= 1400
	FiringDuration				= 2000
	PreAttackType				= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots			= 6100
	HitPercentage				= 0								; never auto hits, always hits ground
	ScatterRadius				= 4.0							; When this weapon misses it can randomly miss by as much as this distance.
	IsAimingWeapon				= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded				= Yes							; Need no target
	LeechRangeWeapon			= Yes

	AutoReloadWhenIdle			= 1500							; should be a bit less than IdleAfterFiringDelay
	ClipSize 					= 1
	AutoReloadsClip 			= No
	ClipReloadTime 				= 2100
	
	ProjectileFilterInContainer = NONE +INFANTRY				; Throw out contained infantry

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		WarheadTemplateName			= CaveTrollGoblinThrowWarhead
	End
End

;-----------------------------------
Weapon CaveTrollGoblinThrowWarhead
	ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
;		FireFX = FX_RockDetonation
		DamageNugget															; A basic Nugget that just does damage
		Damage			= MORDOR_CAVE_TROLL_ROCK_DAMAGE
		Radius			= 12.0
		DamageType		= SIEGE
		DamageFXType	= SMALL_ROCK
		DeathType		= NORMAL
	End
	MetaImpactNugget															; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 12.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 1.20
	End
End

;------------------------------------------------------------------------------
Weapon MordorCaveTrollRampage
  AttackRange = 160.0
  FireFX           = FX_RampageDust
  RadiusDamageAffects = ALLIES ENEMIES SAME_HEIGHT_ONLY
  DelayBetweenShots = 1000                 ; time between shots, msec
  ClipSize = 5                            ; how many shots in a Clip (0 == infinite)
  ClipReloadTime = 1000                      ; how long to reload a Clip, msec

  ; Sequential order of the target positions to follow this list
  IgnoreLinearFirstTarget = Yes
  LinearTarget = X: 0.0   Y: 0.0	T:5
  LinearTarget = X: 20.0  Y: 10.0	T:4
  LinearTarget = X: 0.0   Y: 20.0	T:5
  LinearTarget = X:-20.0  Y: 0.0	T:5
  LinearTarget = X: 0.0   Y:-20.0	T:0
  LinearTarget = X: 0.0   Y: 0.0	T:5

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 100
    Radius        = 20.0
    DamageType            = CRUSH
    DeathType             = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 20.0
    ShockWaveTaperOff = 1.0
  End
End

;------------------------------------------------------------------------------
Weapon MordorCaveTrollTreeRampage
  AttackRange = 160.0
  FireFX           = FX_RampageDust
  RadiusDamageAffects = ALLIES ENEMIES SAME_HEIGHT_ONLY
  DelayBetweenShots = 1000                 ; time between shots, msec
  ClipSize = 5                            ; how many shots in a Clip (0 == infinite)
  ClipReloadTime = 1000                      ; how long to reload a Clip, msec

  ; Sequential order of the target positions to follow this list
  IgnoreLinearFirstTarget = Yes
  LinearTarget = X: 0.0   Y: 0.0	T:5
  
  LinearTarget = X: 20.0  Y: 10.0	T:4 ;punch

  LinearTarget = X: 0.0   Y: 30.0	T:5 ;tree

  LinearTarget = X:-20.0  Y: 0.0	T:5 ;punch

  LinearTarget = X: 0.0   Y:-30.0	T:0 ;tree
  LinearTarget = X: 0.0   Y: 0.0	T:5 ;clearout

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 100
    Radius        = 20.0
    DamageType            = CRUSH
    DeathType             = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 20.0
    ShockWaveTaperOff = 1.0
  End
End

;------------------------------------------------------------------------------
Weapon MumakilRampage
	AttackRange = 160.0
;	FireFX           = FX_RampageDust
	RadiusDamageAffects = ALLIES ENEMIES NOT_SIMILAR
	DelayBetweenShots = 0                ; time between shots, msec
	ClipSize = INFINITE_CLIP_SIZE                            ; how many shots in a Clip (0 == infinite)
	ClipReloadTime = 0                      ; how long to reload a Clip, msec
   
     ; Sequential order of the target positions to follow this list
	
	LinearTarget = X: 0			Y: 0		T: 7		; T: 43 -42	+1
	LinearTarget = X: 72.272	Y: 7.216	T: 6		; T: 43	-42	+2
	LinearTarget = X: 84.496	Y: 9.25 	T: 1		; T: 6	-6	+2
	LinearTarget = X: 80.55	 	Y: 48.24 	T: 0		; T: 3	-6	-1
	LinearTarget = X: 60.88		Y: 64.00	T: 1		; T: 3	-0	+2
	LinearTarget = X: 29.13   	Y: 78.37	T: 0		; T: 2		+4
	LinearTarget = X: -2.55 	Y: 85.55	T: 1		; T: 3		+1
	LinearTarget = X:-34.80  	Y: 76.95	T: 0		; T: 3	
	LinearTarget = X: -66.8  	Y: 62.64	T: 1		; T: 3		+1
	LinearTarget = X:-81.65 	Y: 30.48	T: 0		; T: 1		+2
	LinearTarget = X: -92.18	Y: -2.72	T: 1		; T: 4		+0
	LinearTarget = X:-81.2 		Y: -31.48	T: 0		; T: 4		+4
	LinearTarget = X: -58.93  	Y: -63.19	T: 1		; T: 4		+2
	LinearTarget = X:-35.4		Y: -82.56	T: 1		; T: 4		+0
	LinearTarget = X: -13.91	Y: -80.33	T: 2		; T: 14		+2
	LinearTarget = X: -13.91	Y: -80.33	T: 1		; T: 5		+1
	LinearTarget = X:-35.404  	Y: -82.56	T: 0		; T: 2		+3
	LinearTarget = X: -58.93	Y: -63.19	T: 1		; T: 1		-2
	LinearTarget = X:-81.17 	Y: -31.48	T: 0		; T: 2		+0
	LinearTarget = X: -92.18 	Y: -2.72	T: 0		; T: 2		+2
	LinearTarget = X:-81.65 	Y: 30.48	T: 1		; T: 3		-1
	LinearTarget = X: -66.80	Y: 62.64	T: 1		; T: 5		-2
	LinearTarget = X:-34.80  	Y: 76.95	T: 1		; T: 6		-2
;	LinearTarget = X: -2.554  	Y: 85.56	T: 1		; T: 8		+0
	LinearTarget = X:-34.80  	Y: 76.95	T: 1		; T: 2	
	LinearTarget = X: -66.80	Y: 62.64	T: 1		; T: 3		-1
	LinearTarget = X:-81.65 	Y: 30.48	T: 0		; T: 4		+3
	LinearTarget = X: -92.18	Y: -2.72	T: 1		; T: 2		-1
	LinearTarget = X:-81.18 	Y: -31.48	T: 0		; T: 3		+2
	LinearTarget = X: -58.94	Y: -63.19	T: 1		; T: 3		-1
	LinearTarget = X:-35.40	    Y: -82.56	T: 0		; T: 3		+2
	LinearTarget = X: -13.9 	Y: -80.33	T: 1		; T: 2		-2
	LinearTarget = X:20.14		Y: -80.38	T: 0		; T: 3		+1
	LinearTarget = X:52.44		Y: -60.40	T: 0		; T: 2		+3
	LinearTarget = X:79.11		Y:-46.74	T: 1		; T: 3		+0
	LinearTarget = X:92.25	 	Y: -19.45	T: 0		; T: 3		+3
	LinearTarget = X:98.89		Y:9.25		T: 3		; T: 5		+2
;	LinearTarget = X:90.95	 	Y: 48.24	T: 1		; T: 7		+3
;	LinearTarget = X:60.89    	Y:64.01		T: 1		; T: 9		+0
	LinearTarget = X:90.95 		Y: 48.24	T: 2		; T: 6		+-
	LinearTarget = X:98.99		Y:9.25		T: 3.2		; T: 3		+3
  
   
	DamageNugget                        ; A basic Nugget that just does damage
		Damage				= 100
		Radius				= 25.6
		DelayTime			= 0
		DamageType			= FORCE
		DeathType			= NORMAL
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 25.6
		ShockWaveTaperOff	= 0.8
		;ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 0.920
	End

End



;------------------------------------------------------------------------------
Weapon MordorArcherBow       ; BALANCE Archer Weapon ;orc archer
	AttackRange			= MORDOR_ARCHER_RANGE   ;Horde member so it needs to be bigger than the horde weapon attack range.

	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_ARCHER_RANGE .003 )   
   
    LeechRangeWeapon    = Yes
	WeaponSpeed			= 300         ; dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= 20.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= 0
	PreAttackDelay      = MORDOR_ARCHER_PREATTACKDELAY
	PreAttackType       = PER_POSITION
	PreAttackRandomAmount     = 200 
	FiringDuration      = 0
	
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:MORDOR_ARCHER_BOW_RELOADTIME_MIN Max:MORDOR_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= MORDOR_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = EvilFactionArrow
		WarheadTemplateName     = MordorArcherBowWarhead
		ForbiddenUpgradeNames   = Upgrade_MordorFireArrows
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = EvilFactionFireArrow
		WarheadTemplateName     = MordorArcherBowFireWarhead
		RequiredUpgradeNames    = Upgrade_MordorFireArrows
	End
End

Weapon MordorArcherBowBombard       ; BALANCE Archer Weapon ;orc archer
	AttackRange			= MORDOR_ARCHER_BOMBARD_MAXRANGE   ;Horde member so it needs to be bigger than the horde weapon attack range.
	MinimumAttackRange	= #SUBTRACT( MORDOR_ARCHER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_ARCHER_BOMBARD_MAXRANGE .003 )   
	
	
    LeechRangeWeapon    = Yes
	WeaponSpeed			= 300         ; dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 0     ;Always scatter
	ScatterRadius		= ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= 0
	PreAttackDelay      = MORDOR_ARCHER_PREATTACKDELAY
	PreAttackType       = PER_POSITION
	PreAttackRandomAmount     = 200 
	FiringDuration      = 0
	
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:MORDOR_ARCHER_BOW_RELOADTIME_MIN Max:MORDOR_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= MORDOR_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = EvilFactionArrowBombard
		WarheadTemplateName     = MordorArcherBowBombardWarhead
		ForbiddenUpgradeNames   = Upgrade_MordorFireArrows
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = EvilFactionFireArrowBombard
		WarheadTemplateName     = MordorArcherBowBombardFireWarhead
		RequiredUpgradeNames    = Upgrade_MordorFireArrows
	End
End

;------------------------------------------------------------------------------
Weapon MordorBarricadeArcherBow       ; BALANCE Archer Weapon ;orc archer
	AttackRange					= MORDOR_ARCHER_RANGE   ;Horde member so it needs to be bigger than the horde weapon attack range.
    LeechRangeWeapon    		= Yes
	WeaponSpeed					= 300         ; dist/sec 
	MinWeaponSpeed				= 121
	MaxWeaponSpeed				= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX						= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed			= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage				= 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius				= 20.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta			= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots			= 0
	PreAttackDelay      		= MORDOR_ARCHER_PREATTACKDELAY
	PreAttackType       		= PER_POSITION
	PreAttackRandomAmount		= 200 
	FiringDuration				= 0
	
	ClipSize					= 1
	AutoReloadsClip				= Yes
	AutoReloadWhenIdle			= 1	
	ClipReloadTime				= Min:MORDOR_ARCHER_BOW_RELOADTIME_MIN Max:MORDOR_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne			= 0
	ContinuousFireCoast			= MORDOR_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle			= Yes
	AntiAirborneMonster			= Yes
	HitPassengerPercentage		= 20%
	CanBeDodged					= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = EvilFactionArrow
		WarheadTemplateName     = MordorArcherBarricadeBowWarhead
		ForbiddenUpgradeNames   = Upgrade_EvilFortressFlamingMunitions
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = EvilFactionFireArrow
		WarheadTemplateName     = MordorArcherBarricadeBowFireWarhead
		RequiredUpgradeNames    = Upgrade_EvilFortressFlamingMunitions
	End
End

;-----------------------------------
Weapon MordorArcherBarricadeBowWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_ARCHER_BARRICADE_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = STRUCTURAL
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon MordorArcherBarricadeBowFireWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.

  DamageNugget                       
    Damage        = MORDOR_ARCHER_BARRICADE_DAMAGE_FIRE_FLAME
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = FLAME
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = BURNED
    AcceptDamageAdd = No
    DamageScalar  = 25% ALL -STRUCTURE
  End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 1
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

  DamageNugget                       
    Damage        = MORDOR_ARCHER_BARRICADE_DAMAGE_FIRE_PIERCE		
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = STRUCTURAL
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End



;-----------------------------------
Weapon MordorArcherBowWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon MordorArcherBowBombardWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon MordorArcherBowFireWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.

  DamageNugget                       
    Damage        = MORDOR_ARCHER_DAMAGE_FIRE_FLAME
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = FLAME
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = BURNED
    AcceptDamageAdd = No
    DamageScalar  = 25% ALL -STRUCTURE
  End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 1
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

  DamageNugget                       
    Damage        = MORDOR_ARCHER_DAMAGE_FIRE_PIERCE		
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon MordorArcherBowBombardFireWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 

  DamageNugget                       
    Damage        = MORDOR_ARCHER_DAMAGE_FIRE_FLAME
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = FLAME
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = BURNED
    AcceptDamageAdd = No
    DamageScalar  = 25% ALL -STRUCTURE
  End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 1
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

  DamageNugget                       
    Damage        = MORDOR_ARCHER_DAMAGE_FIRE_PIERCE		
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End

	FireLogicNugget
		LogicType	= INCREASE_BURN_RATE
		Radius		= 1.0
		Damage		= ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE
	End
End

;------------------------------------------------------------------------------
Weapon MordorArcherBowMelee       ; BALANCE Archer Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_RohanArcherBowWeaponFlaming;
  DelayBetweenShots     = 1700            ; time between shots, msec
  PreAttackDelay        = 666             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 1000    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_ARCHER_DAMAGE_MELEE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
;Weapon MordorArcherBowForBlackGate       ; BALANCE Archer Weapon ;orc archer
;	AttackRange			= 350.0  ; 350 ; Horde member so it needs to be bigger than the horde weapon attack range.
;	WeaponSpeed			= 300         ; dist/sec 
;	MinWeaponSpeed		= 121
;	MaxWeaponSpeed		= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
;	FireFX				= FX_RohanArcherBowWeapon  
;	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
;	HitPercentage		= 100     ;When this weapon is used it will hit exactly 100% of the time.
;	ScatterRadius		= 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
;	DelayBetweenShots	= 1900
;	PreAttackDelay      = 1888
;	PreAttackType       = PER_SHOT ; Do the delay each time we attack a new target
;	FiringDuration      = 466    ; Duration of the archer firing shot is 500ms.
;
;	ProjectileNugget			; Fire arrow available through fire upgrade
;		ProjectileTemplateName  = EvilFactionArrow
;		WarheadTemplateName     = MordorArcherBowWarheadForBlackGate
;	End
;End

;-----------------------------------
;Weapon MordorArcherBowWarheadForBlackGate
;  ProjectileCollidesWith = ENEMIES
;  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
;  HitStoredTarget = Yes	; Always hits initial target.
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 500
;    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
;    DelayTime     = 0
;    DamageType    = HERO
;    DamageFXType  = EVIL_ARROW_PIERCE
;    DeathType     = NORMAL
;  End
;End

;------------------------------------------------------------------------------
Weapon MordorArcherBowNoFire       ; BALANCE Archer Weapon
  AttackRange = 240.0 ;700
  WeaponSpeed = 321         ; dist/sec 
  MinWeaponSpeed = 61
  MaxWeaponSpeed = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX = FX_RohanArcherBowWeapon
  ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage     = 100     ;When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius     = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots = 667               ; time between shots, msec
  PreAttackDelay        = 2167             ; 1467 is the prep time for archer.
  PreAttackRandomAmount = 200     ; amount of additional preattack variance for archer type attacks only
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration      = 667    ; Duration of the archer firing shot is 500ms.
  IsAimingWeapon = Yes

  ProjectileNugget                    ; Default arrow
    ProjectileTemplateName    = EvilFactionArrow
    WarheadTemplateName       = MordorArcherBowNoFireWarhead
    ForbiddenUpgradeNames     = Upgrade_MordorFireArrows
  End

  ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
    ProjectileTemplateName    = EvilFactionFireArrow
    WarheadTemplateName       = MordorArcherBowNoFireWarhead
    RequiredUpgradeNames      = Upgrade_MordorFireArrows
  End
End

;-----------------------------------
Weapon MordorArcherBowNoFireWarhead
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS ; Remember, the projectile is a rock, who has no allies
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 20
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon MordorGoblinSword     ; BALANCE Orc Warrior Weapon ;Orc Fighter
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = MORDOR_GOBLIN_SWORDSMAN_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = MORDOR_GOBLIN_SWORDSMAN_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = MORDOR_GOBLIN_SWORDSMAN_FIRINGDURATION    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_GOBLIN_SWORDSMAN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End


;------------------------------------------------------------------------------
Weapon MordorWarriorAxe     ; BALANCE Orc Warrior Weapon ;Orc Fighter
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = MORDOR_FIGHTER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = MORDOR_FIGHTER_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FiringDuration        = MORDOR_FIGHTER_FIRINGDURATION    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_FIGHTER_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

Weapon GundabadWarriorAxe     ; BALANCE Orc Warrior Weapon ;Orc Fighter			ADDED FOR EXPANSION
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = MORDOR_FIGHTER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = MORDOR_FIGHTER_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FiringDuration        = MORDOR_FIGHTER_FIRINGDURATION    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ANGMAR_GUNDABAD_ORC_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End


Weapon MordorWorkerAxe     ; BALANCE Orc Worker Weapon
	LeechRangeWeapon	= Yes
	AttackRange			= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon			= Yes
	DelayBetweenShots	= MORDOR_LABORER_DELAYBETWEENSHOTS            ; time between shots, msec
	PreAttackDelay		= MORDOR_LABORER_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
	PreAttackType		= PER_SHOT ; Do the delay each time we attack
	FireFX				= FX_GondorSwordHit
	FiringDuration		= MORDOR_LABORER_FIRINGDURATION    ; Duration of the mace swing 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= MORDOR_LABORER_DAMAGE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= CHOP
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		DamageScalar	= 300% NONE +RohanEntBirch +RohanGenericEnt +RohanTreeBerd +RohanEntFir +RohanEntAsh 
	End
End




;------------------------------------------------------------------------------
Weapon MordorLance     ; BALANCE Haradrim Lance Weapon
  ; IdleAfterFiringDelay	= 1110 ; no do not do this.  This means go directly to idle after one attack. like troll rock throw, when he only has 1 rock to throw.
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = 2000            ; time between shots, msec
  PreAttackDelay        = 867             ; 867 is lance pierce delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = 1110    ; Duration of the lance pierce attack

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_HARADRIM_LANCER_MELEE_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End

;------------------------------------------------------------------------------
Weapon MordorLanceThrown       ; BALANCE Haradrim Lance as Thrown Weapon
  AttackRange 			= MORDOR_HARADRIM_LANCER_RANGE
  LeechRangeWeapon      = Yes
;  MinimumAttackRange	= MORDOR_HARADRIM_LANCER_SWITCH_RANGE_HORDE
  WeaponSpeed 			= 261         ; dist/sec 
  MinWeaponSpeed 		= 61
  MaxWeaponSpeed 		= 361      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX 				= FX_HaradrimSpearThrow
  ScaleWeaponSpeed 		= Yes ; Used for lob weapons, scales speed proportional to range
  AcceptableAimDelta	= 15.0 
  HitPercentage       	= 100
  ScatterRadius     	= 20.0         ;When this weapon misses it can randomly miss by as much as this distance.
 ; DelayBetweenShots 	= MORDOR_HARADRIM_LANCER_DELAYBETWEENSHOTS        ; time between shots, msec
  PreAttackDelay        = MORDOR_HARADRIM_LANCER_PREATTACKDELAY    ; 1500 is the prep time for archer.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration      	= MORDOR_HARADRIM_LANCER_FIRINGDURATION    ; Duration of the archer firing shot is 1000ms.
  CanBeDodged				= Yes
  
  RequireFollowThru			= Yes
  IsAimingWeapon            = Yes
 

  ClipSize 					= 1
  AutoReloadsClip 			= Yes
  ClipReloadTime 			= Min:2800 Max:2800

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = MordorLanceProjectile
    WarheadTemplateName = MordorLanceThrownWarhead
  End
End


;-----------------------------------
Weapon MordorLanceThrownWarhead
  HitStoredTarget = Yes	; Always hits initial target.
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_HARADRIM_LANCER_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;-----------------------------------
Weapon MordorEasterlingPike     ; BALANCE Mordor Easterling Pike
  LeechRangeWeapon      = Yes
  AttackRange           = 30
  MeleeWeapon           = Yes ; Melee means to square off next to opponent.  This is more of a ranged weapon with no projectile
  PreAttackDelay        = MORDOR_SOLDIERRHUN_PREATTACKDELAY             ; 867 is lance pierce delay time before contact with target.
  FiringDuration        = MORDOR_SOLDIERRHUN_FIRINGDURATION    ; Duration of the lance pierce attack
  DelayBetweenShots     = MORDOR_SOLDIERRHUN_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  
  AcceptableAimDelta	= 15.0 
  RequireFollowThru		= Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= MORDOR_SOLDIERRHUN_DAMAGE
    Radius        			= 0.0
    DelayTime     			= 0
    DamageType    			= SPECIALIST
    DamageFXType  			= SWORD_SLASH
    DeathType     			= NORMAL
    ForbiddenUpgradeNames	= Upgrade_MordorForgedBlades
  End

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= MORDOR_SOLDIERRHUN_DAMAGE_UPGRADED
    Radius        			= 0.0
    DelayTime     			= 0
    DamageType    			= SPECIALIST
    DamageFXType  			= SWORD_SLASH
    DeathType     			= NORMAL
    RequiredUpgradeNames	= Upgrade_MordorForgedBlades
  End
End

;------------------------------------------------------------------------------
;Weapon MordorEasterlingButt     ; BALANCE Mordor Easterling Butt
;  LeechRangeWeapon      = Yes
;  AttackRange           = 10.0
;  MeleeWeapon           = Yes
;  DelayBetweenShots     = 2000            ; time between shots, msec
;  FireFX                = FX_GondorSwordHit
;  FiringDuration        = 2000
;
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 40
;    Radius        = 1.0
;    DelayTime     = 0
;    DamageType    = SPECIALIST
;    DeathType     = NORMAL
;  End
;End



;------------------------------------------------------------------------------
Weapon MordorFortressMagmaCauldronsWeapon
	IdleAfterFiringDelay	= 0
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR
	DelayBetweenShots		= 5000					;// time between shots, msec
	PreAttackDelay        	= 600
	PreAttackType         	= PER_ATTACK			;// Do the delay each time we attack a new target
	;PreAttackFX           	= FX_MagmaCauldronAttack	;FX_GandalfPreAttackBlast	;this didn't work
	;FireFX                	= FX_MagmaCauldronAttack	;FX_GandalfBlast	;this triggers too late
	DamageNugget									;// A basic Nugget that just does damage
		Damage			= 600
		Radius			= 250.0
		DamageType    	= FLAME
		DamageFXType  	= FLAME
		DeathType     	= BURNED
	End
End

;------------------------------------------------------------------------------
Weapon SauronMace
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon			= Yes
	AcceptableAimDelta		= 60				; Just needs to sort of face in the general direction.
	FireFX				= FX_SauronMaceHit
	DelayBetweenShots		= 500				; time between shots, msec
	PreAttackDelay			= 2000				; 300 is mace swing delay time before contact with target.
	PreAttackType			= PER_SHOT			; Do the delay each time we attack
	FiringDuration			= 3667				; Duration of the mace swing
	DamageDealtAtSelfPosition = Yes				; A melee based AoE.  Arc radiates from me, not them

	; Crush damage.
	DamageNugget								; A basic Nugget that just does damage
		Damage			= SAURON_DAMAGE
		Radius			= 80.0
		DamageArc		= 75
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType		= MAGIC
		DeathType		= NORMAL
		DamageScalar  		= 40% NONE +HERO
	End

	; Magic damage.
	DamageNugget								; A basic Nugget that just does damage
		Damage			= SAURON_DAMAGE
		Radius			= 80.0
		DamageArc		= 75
		DelayTime		= 0
		DamageType		= MAGIC
		DamageFXType		= MAGIC
		DeathType		= NORMAL
		DamageScalar  		= 40% NONE +HERO
	End

	; Push back
	MetaImpactNugget							; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 70
		ShockWaveRadius		= 75
		ShockWaveArc		= 75				; Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End


;------------------------------------------------------------------------------
Weapon SauronFiresOfDoomWeapon
	AttackRange			= 300
	WeaponSpeed			= 801	; dist/sec 
	HitPercentage		= 100		; When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 2000		; time between shots, msec
	PreAttackDelay      = 400
	PreAttackType       = PER_SHOT		; Do the delay each time we attack a new target
	
	FiringDuration      = 1100
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	WeaponOCLNugget
		WeaponOCLName = OCL_FiresOfDoom
	End
End

;------------------------------------------------------------------------------
Weapon EvilEyeWeapon  ; BALANCE EvilEyeWeapon
	AttackRange			= GANDALF_PHASER_RANGE				;600
	LeechRangeWeapon	= Yes
	WeaponSpeed			= 801   ; dist/sec 
	HitPercentage		= 100		; When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 4500		; time between shots, msec
	FireFX              = FX_EvilEyeWeapon
	FiringDuration      = 1
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	AcceptableAimDelta	= 15

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GANDALF_PHASER_DAMAGE	
		DamageScalar  = 200% NONE +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth	
		DamageScalar  = 180% NONE +MordorFellBeast
		Radius        = 17.6
		DelayTime     = 200           ;The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
		DamageType    = MAGIC
		DamageFXType  = FLAME
		DeathType     = NORMAL
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist          =   0.75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 17.6
		ShockWaveTaperOff	= 0.5
		DelayTime			= 200		;The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
	End
End



;------------------------------------------------------------------------------
; This is the Nazgul Grab Attack
Weapon NazgulGrabAttack  				; BALANCE NazgulGrabAttack
	AttackRange        		= 20.0
	FireFX				= FX_FellbeastGrab  
	DelayBetweenShots		= 30            ; time between shots, msec
	FiringDuration			= 30
	MeleeWeapon			= Yes
	CanSwoop			= Yes
	ChaseWeapon			= Yes ; Not full melee, but we get to move to attack a passive acquire, even if player owned.

	DamageNugget                       		; A basic Nugget that just does damage
		Damage        		= 240
		Radius        		= 50 ;0.8
		DamageScalar		= 0%	ANY +HERO +PORTER  +DwarvenZerker +DwarvenZerkerHorde +NoldorWarrior +NoldorWarriorHorde +GondorKnightsofDol +GondorKnightsofDolHorde +WildBabyDrake +WildBabyDrakeHorde +MordorBlackRider +MordorBlackRiderHorde +IsengardFanatic +IsengardBerserkerHorde 
;;No grabbing the heroes (Who won't fit in the container anyway.)
;;This is a hack because canWeaponAffect doesn't check that the weapon is a grabbing weapon and the unit isn't grabbable.
;;-CB (only an intern, I just does what I's told)
		DelayTime     		= 0
		DamageType    		= HERO
		DamageFXType  		= CLUBBING
		DeathType     		= NORMAL
	End
	
	GrabNugget                    			; A Nugget that makes me grab you
		SpecialObjectFilter		= ANY +GRAB_AND_DROP   -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde -GondorKnightsofDol -GondorKnightsofDolHorde -WildBabyDrake -WildBabyDrakeHorde -MordorBlackRider -MordorBlackRiderHorde -IsengardFanatic -IsengardBerserkerHorde 
		ContainTargetOnEffect   = Yes
		ImpactTargetOnEffect	= Yes ;... if for some reason, I can not contain you, I'll try to give you a shove
		ShockWaveAmount   	= 50.0
		ShockWaveRadius   	= 16.0
		ShockWaveTaperOff 	= 0.75
		ShockWaveZMult    	= 1.1
	End
End


;------------------------------------------------------------------------------
; This is the normal Nazgul Plow Attack
Weapon NazgulPlowAttack  						; BALANCE NazgulPlowAttack
   RadiusDamageAffects    = ENEMIES NOT_SIMILAR
     AttackRange          = 24.0
     AcceptableAimDelta   = 5			      ; Just needs to sort of face in the general direction.
     DelayBetweenShots    = 4000			; time between shots, msec
     FiringDuration		  = 4500			; has to be as long as the swoop-follow-through, or you can use an interrupt exploit to re-attack repeatedly
     FireFX               = FX_BuildingHitByFlyer

	AntiAirborneVehicle    = Yes			;allows attack of flying units
	AntiAirborneMonster    = Yes			;no... THIS allows attack of flying units because somebody was a funny man.
	AntiAirborneInfantry   = Yes	  
	MeleeWeapon            = No
	CanSwoop               = Yes
	ChaseWeapon            = Yes ; Not full melee, but we get to move to attack a passive acquire, even if player owned.

	DamageNugget     ; A basic Nugget that just does damage
		Damage         = NAZGUL_PLOW_DAMAGE_OUTER
    		DamageScalar   = 0% ANY +MordorWitchKingOnFellBeast +MordorFellBeast
    		DamageScalar   = 1000% NONE +MACHINE 
    		DamageScalar   = 30% NONE +HERO
    		DamageScalar   = 70% NONE +STRUCTURE		; Added for the RotWK Balance patch
		Radius         = 40.0
		DelayTime      = 1
		DamageType     = SIEGE
		DamageFXType   = CLUBBING
		DeathType      = NORMAL
	End
	DamageNugget     ; A basic Nugget that just does damage
		Damage         = NAZGUL_FLY_INTO_DAMAGE 
    		DamageScalar   = 0% ANY +MordorWitchKingOnFellBeast +MordorFellBeast
		Radius         = 40.0
		DelayTime      = 1
		DamageType     = FLY_INTO
		DamageFXType   = CLUBBING
		DeathType      = NORMAL
	End
	DamageNugget     ; Another one that also does damage
		Damage        = NAZGUL_PLOW_DAMAGE_INNER
    		DamageScalar   = 0% ANY +MordorWitchKingOnFellBeast +MordorFellBeast
    		DamageScalar  = 1000% NONE +MACHINE 
    		DamageScalar  = 30% NONE +HERO
    		DamageScalar   = 70% NONE +STRUCTURE		; Added for the RotWK Balance patch
		Radius        = 12.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = CLUBBING
		DeathType     = NORMAL
	End
	MetaImpactNugget     ; A Nugget that throws things back with force
;		HeroResist         = 50.0     ;always works on heroes
		ShockWaveAmount    = 60.0
		ShockWaveRadius    = 48.0
		ShockWaveTaperOff  =  0.5
	End
End


;------------------------------------------------------------------------------
; This is the normal Nazgul Claw Attack
Weapon NazgulClawAttack							; BALANCE NazgulClawAttack
	AttackRange				= 20.0
	AcceptableAimDelta			= 5			; Just needs to sort of face in the general direction.
	DelayBetweenShots			= 250			; time between shots, msec
	ClipSize				= 2			;4	; how many shots in a Clip (0 == infinite)
	ClipReloadTime				= 2000
	AutoReloadsClip				= Yes	
	FireFX					= FX_FellbeastClawAttack		;FX_TrollTreeHit
	AntiAirborneVehicle			= Yes			;allows attack of flying units
	AntiAirborneInfantry			= Yes	  
	AntiAirborneMonster			= Yes
	MeleeWeapon				= Yes
	CanSwoop				= Yes
	ChaseWeapon				= Yes ; Not full melee, but we get to move to attack a passive acquire, even if player owned.

	DamageNugget                        				; A basic Nugget that just does damage
		Damage				= NAZGUL_CLAW_DAMAGE
    		DamageScalar  			= 1000% NONE +MACHINE 
    		DamageScalar   			= 250% NONE +MordorMumakil
		Radius				= 40 ;24.0
		DelayTime     			= 1		
		DamageType			= SIEGE
		DamageFXType			= CLUBBING
		DeathType			= NORMAL
	End
End


Weapon MordorArcherMissileHordeRangefinder
	AttackRange			= #SUBTRACT( MORDOR_ARCHER_RANGE 100 )  ; Slightly shorter than the archer's actual weapon
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_ARCHER_RANGE .003 )
	
	DelayBetweenShots		= 1000 ;1500
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a mumakil.
	FinishAttackOnceStarted = No
	HordeAttackNugget
	End
End

Weapon MordorArcherMissileHordeRangefinderBombard
	AttackRange			= #SUBTRACT( MORDOR_ARCHER_BOMBARD_MAXRANGE 100 ) 
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_ARCHER_BOMBARD_MAXRANGE .003 )
	
	MinimumAttackRange		= MORDOR_ARCHER_BOMBARD_MINRANGE
	DelayBetweenShots		= 1000 ;1500
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a mumakil.
	FinishAttackOnceStarted = No
	NoVictimNeeded			= Yes
	BombardType				= Yes	
	ScatterRadius			= ARCHER_BOMBARD_SCATTER_RADIUS		; Only used for cursor radius
	HordeAttackNugget
	End
End


;------------------------------------------------------------------------------
; This is the normal punch, not the AOE, rock, siege or tree
Weapon MordorDrummerTrollPunch; BALANCE DrummerTroll Weapon Normal
  LeechRangeWeapon = Yes
  RadiusDamageAffects = ENEMIES 
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = MORDOR_DRUMMERTROLL_DELAYBETWEENSHOTS            			; time between shots, msec
  FiringDuration        = MORDOR_DRUMMERTROLL_FIRINGDURATION            			; min 1900 for anim
  PreAttackDelay        = MORDOR_DRUMMERTROLL_PREATTACKDELAY
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackFX           = FX_TrollTreeSwing
  FireFX                = FX_TrollPunchGeneric								;FX_TrollTreeHit
  DamageDealtAtSelfPosition = Yes 										; A melee based AoE.  Arc radiates from me, not them
  AcceptableAimDelta	= 10.0 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_DRUMMERTROLL_DAMAGE
    Radius        = 60.0
    DamageArc      = 50
    DamageType    = CRUSH
    DamageFXType  = CLUBBING
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 60.0
    ShockWaveArc      = 90
    ShockWaveTaperOff = .75
    ShockWaveZMult    = 1.2
;    HeroResist		  = 0.90		; 90% resistance to heroes
  End
End


;-----------------------------------
Weapon MordorMtTrollBored
  AttackRange           = 40.0
  PreAttackFX           = FX_TrollTreeSwing
  FireFX                = FX_TrollPunchGeneric		;FX_TrollTreeHit
  RadiusDamageAffects = ALLIES

	SpecialModelConditionNugget
		ModelConditionNames = USER_2			; Can be used to set multiple, and it doesn't use the normal hit reaction because this one is special
		ModelConditionDuration = 2000
		SpecialObjectFilter = NONE +MordorCaveTroll +MordorMountainTroll +GoblinCaveTroll
	End

	SpecialModelConditionNugget
		ModelConditionNames = USER_3 
		ModelConditionDuration = 21000
		SpecialObjectFilter = NONE +MordorMountainTroll	
	End
End

//------------------------------------------------------------------------------
Weapon MordorGateWatchersFearWeapon
	AttackRange			= MORDOR_GATEWATCHEREXPANSION_RANGE    
	HitPercentage       = 100											//When this weapon is used it will hit exactly 50% of the time.    
	PreAttackDelay      = MORDOR_GATEWATCHEREXPANSION_PREATTACKDELAY	//prep time for the unit/structure to fire.
	PreAttackType       = PER_SHOT										//Do the delay each time we attack a new target
	FiringDuration      = MORDOR_GATEWATCHEREXPANSION_FIRINGDURATION	//Duration of the archer firing shot is 500ms.  
	AcceptableAimDelta	= 180.0											//We want to be able to shoot all round, as we cant move.
	DelayBetweenShots   = MORDOR_GATEWATCHEREXPANSION_DELAYBETWEENSHOTS
	FireFX				= FX_FearBlast
	
	EmotionWeaponNugget
		EmotionType			= TERROR
		Radius				= MORDOR_GATEWATCHEREXPANSION_FEAR_RADIUS
		Duration			= MORDOR_GATEWATCHEREXPANSION_FEAR_DURATION		
		SpecialObjectFilter	= ALL -HERO ENEMIES ; -HERO needed because Shelob has terror/fear nuggets to respond to Black Arrows.
	End

End

