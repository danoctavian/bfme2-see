/////////////////
// WEAPON.INC //
///////////////
//Gondor//
/////////

;------------------------------------------------------------------------------
Weapon DolAmrothLancerCrush
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0				; time between shots, msec
  PreAttackDelay        = 0				;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0
  FireFX		= FX_GenericCrushImpactSound

  DamageNugget
    Damage        = GONDOR_KNIGHTSOFDOL_CRUSH_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = NORMAL
    FlankingBonus = 200%
  End
End


;------------------------------------------------------------------------------
Weapon DolAmrothLancerLance       ; BALANCE
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GondorSwordHit
  DelayBetweenShots     = GONDOR_KNIGHTSOFDOL_DELAYBETWEENSHOTS           ; time between shots, msec
  PreAttackDelay        = GONDOR_KNIGHTSOFDOL_PREATTACKDELAY				; 400 is sword swing delay time before contact with target.
  FiringDuration        = GONDOR_KNIGHTSOFDOL_FIRINGDURATION				; Duration of the sword swing
  PreAttackType         = PER_SHOT											; Do the delay each time we attack a new target

	DamageNugget
		Damage			= GONDOR_KNIGHTSOFDOL_DAMAGE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType		= SWORD_SLASH
		DeathType		= NORMAL
;		DamageScalar  		= 50% NONE +STRUCTURE 			; RotWK 1st attempt to fix bug +ElvenFortress +MenFortress +DwarvenFortress +IsengardFortress +MordorFortress +AngmarFortress +WildFortress	; Added based Communtiy feedback on RotWK
	End


End


;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
;  Gondor
;
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved catapult can attack
Weapon GondorTrebuchetExpansionWeapon		
	AttackRange					= GONDOR_TREBUCHET_RANGE
	MinimumAttackRange			= GONDOR_TREBUCHET_MINRANGE
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= GONDOR_TREBUCHET_DELAYBETWEENSHOTS  
	PreAttackDelay				= GONDOR_TREBUCHET_PREATTACKDELAY
	FiringDuration      		= GONDOR_TREBUCHET_FIRINGDURATION
	AcceptableAimDelta			= GONDOR_TREBUCHET_EXPANSION_AIM_DELTA  
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End

//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved catapult can attack
Weapon GondorTrebuchetSideExpansionWeapon
	AttackRange					= GONDOR_TREBUCHET_RANGE
	MinimumAttackRange			= GONDOR_TREBUCHET_MINRANGE
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= GONDOR_TREBUCHET_DELAYBETWEENSHOTS  
	PreAttackDelay				= GONDOR_TREBUCHET_PREATTACKDELAY
	FiringDuration      		= GONDOR_TREBUCHET_FIRINGDURATION
	AcceptableAimDelta			= GONDOR_TREBUCHET_EXPANSION_SIDE_AIM_DELTA  
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End


;------------------------------------------------------------------------------
Weapon ArnorTrebuchetRock  ; BALANCE Trebuchet Weapon
; For the demo, we are giving trebs 100% accurate tracking rocks.  This'll be balanced out eventually
  ScatterRadiusVsInfantry     = 40.0     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
  AttackRange = GONDOR_TREBUCHET_RANGE
  MinimumAttackRange = GONDOR_TREBUCHET_MINRANGE
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_TREBUCHET_RANGE .003 )
	
	
  WeaponSpeed = 321         ; dist/sec 
  MinWeaponSpeed = 321
  FireFX = FX_TrebuchetWeapon
  HitPercentage       = 70 ; always hits.
  ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.
  ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
  DelayBetweenShots 		= GONDOR_TREBUCHET_DELAYBETWEENSHOTS               ; time between shots, msec
  PreAttackDelay      		= GONDOR_TREBUCHET_PREATTACKDELAY
  PreAttackType       		= PER_SHOT
  FiringDuration      		= GONDOR_TREBUCHET_FIRINGDURATION
  NoVictimNeeded			= Yes ; Need no target
  LeechRangeWeapon      = Yes

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = RockBigTroll
    WarheadTemplateName = GondorTrebuchetRockWarhead
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = RockBigTroll
    WarheadTemplateName = GondorTrebuchetRockWarhead
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = RockBigTroll
    WarheadTemplateName = GondorTrebuchetRockWarhead
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
  End
  
End

;------------------------------------------------------------------------------
Weapon GondorTrebuchetRock  ; BALANCE Trebuchet Weapon
; For the demo, we are giving trebs 100% accurate tracking rocks.  This'll be balanced out eventually
  ScatterRadiusVsInfantry     = 40.0     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
  AttackRange = GONDOR_TREBUCHET_RANGE
  MinimumAttackRange = GONDOR_TREBUCHET_MINRANGE
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_TREBUCHET_RANGE .003 )
	
	
  WeaponSpeed = 321         ; dist/sec 
  MinWeaponSpeed = 321
  FireFX = FX_TrebuchetWeapon
  HitPercentage       = 70 ; always hits.
  ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.
  ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
  DelayBetweenShots 		= GONDOR_TREBUCHET_DELAYBETWEENSHOTS               ; time between shots, msec
  PreAttackDelay      		= GONDOR_TREBUCHET_PREATTACKDELAY
  PreAttackType       		= PER_SHOT
  FiringDuration      		= GONDOR_TREBUCHET_FIRINGDURATION
  NoVictimNeeded			= Yes ; Need no target
  LeechRangeWeapon      = Yes

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
  End
  
End

;----------------------------
Weapon GondorTrebuchetRockWarhead
	;FireFX= FX_RockDetonation
	ProjectileCollidesWith = MONSTERS	STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES
	HitPassengerPercentage = 50%
	
	 DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 100.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
		DamageScalar	= 0% ALL ALLIES	
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.75
	End
End

;----------------------------
Weapon GondorTrebuchetRockWarheadFlaming
	;FireFX= FX_Weapon
	ProjectileCollidesWith = MONSTERS	STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES
	HitPassengerPercentage = 50%

	FireLogicNugget ;@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	GONDOR_TREBUCHET_FIRE_RADIUS 
		Damage		=	GONDOR_TREBUCHET_FIRE_DAMAGE 
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_FIRE_UPGRADE_DAMAGE_FLAME  
		Radius = 30
		DelayTime     = 0
		DamageType    = FLAME			; Just a little flame damage in case they want to light on fire.  Main damage must be siege to knock bits out of buildings
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
		DamageScalar	= 0% ALL ALLIES	
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
		AcceptDamageAdd = No
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_FIRE_UPGRADE_DAMAGE  	; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		Radius = 50
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
		DamageScalar	= 0% ALL ALLIES	
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 150% ANY ENEMIES +STRUCTURE 
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.75
	End
	
End
;------------------------------------------------------------------------------
Weapon GondorTrebuchetRockFlaming  ; BALANCE Trebuchet Weapon
	;For the demo, we are giving trebs 100% accurate tracking rocks.  This'll be balanced out eventually
	;ScatterRadiusVsInfantry	= 30.0     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
	AttackRange					= GONDOR_TREBUCHET_FLAME_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_TREBUCHET_FLAME_RANGE .003 )
	
	MinimumAttackRange			= 150.0
	WeaponSpeed					= 321         ; dist/sec 
	MinWeaponSpeed				= 321
	FireFX						= FX_TrebuchetWeapon
	HitPercentage				= 70%     ;Make sure that scatter radius is called so that multiple projectiles will land separately.
	ScatterRadius				= 50.0     ;When this weapon misses it can randomly miss by as much as this distance.
	ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
	DelayBetweenShots			= GONDOR_TREBUCHET_DELAYBETWEENSHOTS 		; time between shots, msec
	PreAttackDelay				= GONDOR_TREBUCHET_PREATTACKDELAY 		
	PreAttackType				= PER_SHOT
	FiringDuration				= GONDOR_TREBUCHET_FIRINGDURATION 		
	NoVictimNeeded				= Yes ; Need no target
	LeechRangeWeapon			= Yes
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming
	End
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming
		RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
	End
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming
		RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
  
End

;----------------------- STRUCTURAL TREBUCHET WEAPONS -------------------------
;------------Need to balance defensive vs offensive trebs hence----------------
;------------------------------------------------------------------------------
Weapon GondorTrebuchetRock_Structural  ; BALANCE Trebuchet Weapon - Defensive
; For the demo, we are giving trebs 100% accurate tracking rocks.  This'll be balanced out eventually
  ScatterRadiusVsInfantry     = 40.0     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
  AttackRange = GONDOR_TREBUCHET_RANGE
  MinimumAttackRange = GONDOR_TREBUCHET_MINRANGE
  
  	;RangeBonusMinHeight      = 30 ;	= 10
	;RangeBonus		= 1
	;RangeBonusPerFoot	= #MULTIPLY( GONDOR_TREBUCHET_RANGE .003 )
	
	
  WeaponSpeed = 321         ; dist/sec 
  MinWeaponSpeed = 321
  FireFX = FX_TrebuchetWeapon
  HitPercentage             = 0     ;Make sure that scatter radius is called so that multiple projectiles will land separately.
  ScatterRadius             = 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
  ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
  DelayBetweenShots 		= GONDOR_TREBUCHET_DELAYBETWEENSHOTS               ; time between shots, msec
  PreAttackDelay      		= GONDOR_TREBUCHET_PREATTACKDELAY
  PreAttackType       		= PER_SHOT
  FiringDuration      		= GONDOR_TREBUCHET_FIRINGDURATION
  NoVictimNeeded			= Yes ; Need no target
  LeechRangeWeapon      = Yes

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead_Structural
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead_Structural
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = GondorTrebuchetRockProjectile
    WarheadTemplateName = GondorTrebuchetRockWarhead_Structural
    RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
  End
  
  ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
  End
  
End

;--------------------------------------------------------------	
	Weapon GondorTrebuchetRockWarhead_Structural
	;FireFX= FX_RockDetonation
	ProjectileCollidesWith = MONSTERS	STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS 
	HitPassengerPercentage = 50%
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		Radius = 20
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
		DamageScalar  = 0% ANY ALLIES +STRUCTURE			; No damage to allied structures.
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.75
	End
End

;----------------------------
Weapon GondorTrebuchetRockWarheadFlaming_Structural
	;FireFX= FX_Weapon
	RadiusDamageAffects = ENEMIES 
	HitPassengerPercentage = 50%

	FireLogicNugget ;@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	GONDOR_TREBUCHET_FIRE_RADIUS 
		Damage		=	GONDOR_TREBUCHET_FIRE_DAMAGE 
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_FIRE_UPGRADE_DAMAGE_FLAME  
		Radius = 20
		DelayTime     = 0
		DamageType    = FLAME			; Just a little flame damage in case they want to light on fire.  Main damage must be siege to knock bits out of buildings
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
		DamageScalar  = 0% ANY ALLIES +STRUCTURE			; No damage to allied structures.
		AcceptDamageAdd = No
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_TREBUCHET_FIRE_UPGRADE_DAMAGE  	; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		Radius	      = 20
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
		;DamageScalar  = 200% NONE +MordorMumakil
		DamageScalar  = 0% ANY ALLIES +STRUCTURE			; No damage to allied structures.
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.75
	End
	
	

	;;;;;;; Self perpetuating fire is BAD;;;;;;;;;;;;;;;;;;;;;;;;;;
	;FireLogicNugget ;@@@ fire logic testing
	;	LogicType		=	INCREASE_FUEL
	;	Radius			=	GONDOR_TREBUCHET_FUEL_RADIUS
	;	Damage			=	GONDOR_TREBUCHET_FUEL_DAMAGE
	;	MinMaxBurnRate	=	GONDOR_TREBUCHET_FUEL_MAX_BURNRATE
	;	MinDecay		=	GONDOR_TREBUCHET_FUEL_MIN_DECAY
	;	MaxResistance	=	GONDOR_TREBUCHET_FUEL_MAX_RESISTANCE
	;End
	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	
End
;------------------------------------------------------------------------------
Weapon GondorTrebuchetRockFlaming_Structural  ; BALANCE Trebuchet Weapon - Defensive
	;For the demo, we are giving trebs 100% accurate tracking rocks.  This'll be balanced out eventually
	;ScatterRadiusVsInfantry	= 30.0     ;When this weapon is used against infantry, it will always randomly miss by as much as this distance.
	AttackRange					= GONDOR_TREBUCHET_FLAME_RANGE
	
	;RangeBonusMinHeight      = 30 ;	= 10
	;RangeBonus		= 1
	;RangeBonusPerFoot	= #MULTIPLY( GONDOR_TREBUCHET_FLAME_RANGE .003 )
	
	MinimumAttackRange			= 150.0
	WeaponSpeed					= 321         ; dist/sec 
	MinWeaponSpeed				= 321
	FireFX						= FX_TrebuchetWeapon
	HitPercentage				= 0     ;Make sure that scatter radius is called so that multiple projectiles will land separately.
	ScatterRadius				= 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
	ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
	DelayBetweenShots			= GONDOR_TREBUCHET_DELAYBETWEENSHOTS 		; time between shots, msec
	PreAttackDelay				= GONDOR_TREBUCHET_PREATTACKDELAY 		
	PreAttackType				= PER_SHOT
	FiringDuration				= GONDOR_TREBUCHET_FIRINGDURATION 		
	NoVictimNeeded				= Yes ; Need no target
	LeechRangeWeapon			= Yes
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming_Structural
	End
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming_Structural
		RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
	End
  
	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = GondorTrebuchetRockProjectileFlaming
		WarheadTemplateName = GondorTrebuchetRockWarheadFlaming_Structural
		RequiredUpgradeNames = Upgrade_TrebuchetTripleAmmo
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
  
End

;------------------------------------------------------------------------------
Weapon GondorStructureBow       ; BALANCE Archer Weapon
  AttackRange               = GONDOR_STRUCTURE_ARCHER_RANGE
  WeaponSpeed               = 321       ; dist/sec 
  MinWeaponSpeed            = 241
  MaxWeaponSpeed            = 481		; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX                    = FX_RohanArcherBowWeapon
  ScaleWeaponSpeed          = Yes		; Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100		;When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius             = 16.0		;When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots         = Min:GONDOR_STRUCTURE_ARCHER_BOW_DELAYBETWEENSHOTS_MIN Max:GONDOR_STRUCTURE_ARCHER_BOW_DELAYBETWEENSHOTS_MAX
  PreAttackDelay            = GONDOR_STRUCTURE_ARCHER_BOW_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType             = PER_SHOT	; Do the delay each time we attack a new target
  FiringDuration            = GONDOR_STRUCTURE_ARCHER_BOW_DELAYBETWEENSHOTS_MAX    ; Duration of the archer firing shot is 500ms.
  IsAimingWeapon            = Yes
  AntiAirborneVehicle		= Yes
  AntiAirborneMonster		= Yes
  HitPassengerPercentage	= 20%
  AcceptableAimDelta		= 180.0	; We want to be able to shoot all round, as we canit move.

  CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent


  ProjectileNugget          ; Default arrow
    ProjectileTemplateName  = GoodFactionArrow
    WarheadTemplateName     = StructureBowWarhead
  End
End



;------------------------------------------------------------------------------
Weapon GondorArcherBow  
	AttackRange         = GONDOR_ARCHER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_ARCHER_RANGE .003 )
	
    LeechRangeWeapon    = Yes
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = GONDOR_ARCHER_BOW_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0
	  
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:GONDOR_ARCHER_BOW_RELOADTIME_MIN Max:GONDOR_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= GONDOR_ARCHER_BOW_RELOADTIME_MAX 
	  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GondorArcherArrow
		WarheadTemplateName     = GondorArcherBowWarhead
		ForbiddenUpgradeNames   = Upgrade_GondorFireArrows
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = GondorArcherFireArrow
		WarheadTemplateName     = GondorArcherBowFireWarhead
		RequiredUpgradeNames    = Upgrade_GondorFireArrows
	End
End

Weapon GondorArcherBowBombard
	AttackRange         = GONDOR_ARCHER_BOMBARD_MAXRANGE
	MinimumAttackRange	= #SUBTRACT( GONDOR_ARCHER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_ARCHER_BOMBARD_MAXRANGE .003 )
	
    LeechRangeWeapon    = Yes
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 0     ; Always miss and get scattered
	ScatterRadius       = ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = GONDOR_ARCHER_BOW_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0
	  
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:GONDOR_ARCHER_BOW_RELOADTIME_MIN Max:GONDOR_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= GONDOR_ARCHER_BOW_RELOADTIME_MAX 
	  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	NoVictimNeeded			= Yes ; For use with Bombard
	BombardType				= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GondorArcherArrowBombard
		WarheadTemplateName     = GondorArcherBowBombardWarhead
		ForbiddenUpgradeNames   = Upgrade_GondorFireArrows
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = GondorArcherFireArrowBombard
		WarheadTemplateName     = GondorArcherBowBombardFireWarhead
		RequiredUpgradeNames    = Upgrade_GondorFireArrows
	End
End

;----------------------------
Weapon GondorArcherBowWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon GondorArcherBowBombardWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End


Weapon GondorArcherBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage          = 1
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType      = FLAME
		DamageFXType    = FLAME
		DeathType       = BURNED
		AcceptDamageAdd = No
		DamageScalar    = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	DamageNugget                        
		Damage          = GONDOR_ARCHER_FIRE_UPGRADE_DAMAGE
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime       = 0
		DamageType      = FLAME
		DamageFXType    = GOOD_ARROW_PIERCE
		DeathType       = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 25% ALL -STRUCTURE
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage          = GONDOR_ARCHER_DAMAGE
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime       = 0
		DamageType      = PIERCE
		DamageFXType    = GOOD_ARROW_PIERCE
		DeathType       = NORMAL
	End
End

Weapon GondorArcherBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES

	DamageNugget                        ; A basic Nugget that just does damage
		Damage          = 1
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType      = FLAME
		DamageFXType    = FLAME
		DeathType       = BURNED
		AcceptDamageAdd = No
		DamageScalar    = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	DamageNugget                        
		Damage          = GONDOR_ARCHER_FIRE_UPGRADE_DAMAGE
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime       = 0
		DamageType      = FLAME
		DamageFXType    = GOOD_ARROW_PIERCE
		DeathType       = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 25% ALL -STRUCTURE
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage          = GONDOR_ARCHER_DAMAGE
		Radius          = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime       = 0
		DamageType      = PIERCE
		DamageFXType    = GOOD_ARROW_PIERCE
		DeathType       = NORMAL
	End
	
	FireLogicNugget
		LogicType	= INCREASE_BURN_RATE
		Radius		= 1.0
		Damage		= ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE
	End
End

;------------------------------------------------------------------------------
Weapon GondorRangerBow  
	AttackRange         = GONDOR_RANGER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_RANGER_RANGE .003 )
	
    LeechRangeWeapon    = Yes
	WeaponSpeed 		= 321         ; dist/sec 
	MinWeaponSpeed 		= 241
	MaxWeaponSpeed 		= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX 				= FX_RohanArcherBowWeapon
	PlayFXWhenStealthed = Yes
	ScaleWeaponSpeed 	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage     	= 100     ;When this weapon is used it will hit exactly 80% of the time.
	ScatterRadius     	= 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots 	= 0
	PreAttackDelay      = GONDOR_RANGER_BOW_PREATTACKDELAY
	PreAttackType       = PER_POSITION
	PreAttackRandomAmount     = 200 
	FiringDuration      = 0
	
	ClipSize 			= 1
	AutoReloadsClip 	= Yes
	AutoReloadWhenIdle 	= 1	
	ClipReloadTime 		= Min:GONDOR_RANGER_BOW_RELOADTIME_MIN Max:GONDOR_RANGER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= GONDOR_RANGER_BOW_RELOADTIME_MAX
	
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
  	CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	ProjectileNugget                    ; Default arrow
		ProjectileTemplateName    = GoodFactionArrow
		WarheadTemplateName       = GondorRangerBowWarhead
		ForbiddenUpgradeNames     = Upgrade_GondorFireArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
		ProjectileTemplateName    = GoodFactionFireArrow
		WarheadTemplateName       = GondorRangerBowFireWarhead
		RequiredUpgradeNames      = Upgrade_GondorFireArrows
	End
End

Weapon GondorRangerBowBombard  
	AttackRange         = GONDOR_RANGER_BOMBARD_MAXRANGE
	MinimumAttackRange	= #SUBTRACT( GONDOR_RANGER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GONDOR_RANGER_BOMBARD_MAXRANGE .003 )
	
    LeechRangeWeapon    = Yes
	WeaponSpeed 		= 321         ; dist/sec 
	MinWeaponSpeed 		= 241
	MaxWeaponSpeed 		= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX 				= FX_RohanArcherBowWeapon
	PlayFXWhenStealthed = Yes
	ScaleWeaponSpeed 	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage     	= 0     ; Always scatter
	ScatterRadius     	= ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots 	= 0
	PreAttackDelay      = GONDOR_RANGER_BOW_PREATTACKDELAY
	PreAttackType       = PER_POSITION
	PreAttackRandomAmount     = 200 
	FiringDuration      = 0
	
	ClipSize 			= 1
	AutoReloadsClip 	= Yes
	AutoReloadWhenIdle 	= 1	
	ClipReloadTime 		= Min:GONDOR_RANGER_BOW_RELOADTIME_MIN Max:GONDOR_RANGER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= GONDOR_RANGER_BOW_RELOADTIME_MAX
	
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
  	CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	NoVictimNeeded			= Yes ; For use with Bombard
	BombardType				= Yes
	
	ProjectileNugget                    ; Default arrow
		ProjectileTemplateName    = GoodFactionArrowBombard
		WarheadTemplateName       = GondorRangerBowBombardWarhead
		ForbiddenUpgradeNames     = Upgrade_GondorFireArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
		ProjectileTemplateName    = GoodFactionFireArrowBombard
		WarheadTemplateName       = GondorRangerBowBombardFireWarhead
		RequiredUpgradeNames      = Upgrade_GondorFireArrows
	End
End

;----------------------------
Weapon GondorRangerBowWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES ( 4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_RANGER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon GondorRangerBowBombardWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES ( 4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_RANGER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End


Weapon GondorRangerBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        
		Damage        = GONDOR_RANGER_FIRE_UPGRADE_DAMAGE_FLAME
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = GOOD_ARROW_PIERCE
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
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_RANGER_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End
End

Weapon GondorRangerBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES

	DamageNugget                        
		Damage        = GONDOR_RANGER_FIRE_UPGRADE_DAMAGE_FLAME
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = GOOD_ARROW_PIERCE
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
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = GONDOR_RANGER_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	FireLogicNugget
		LogicType	= INCREASE_BURN_RATE
		Radius		= 1.0
		Damage		= ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE
	End
End

;------------------------------------------------------------------------------
Weapon GondorAragornSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes

  DelayBetweenShots     = ARAGORN_DELAYBETWEENSHOTS 		; time between shots, msec
  PreAttackDelay        = ARAGORN_PREATTACKDELAY 			; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT						; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  ;FireFX                = FX_IsildurSword
  FiringDuration        = ARAGORN_FIRINGDURATION 			; Duration of the sword swing

  DamageNugget												; A basic Nugget that just does damage
    Damage        = ARAGORN_DAMAGE
    DamageScalar  = 50000% NONE +RohanOathbreaker
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon GondorAragornHeroSword
	LeechRangeWeapon	= Yes
	AttackRange			= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon			= Yes
  
	DelayBetweenShots     = ARAGORN_DELAYBETWEENSHOTS 		; time between shots, msec
	PreAttackDelay        = ARAGORN_PREATTACKDELAY 			; 400 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT						; Do the delay each time we attack a new target
	FireFX                = FX_GondorSwordHit
	;FireFX                = FX_IsildurSword
	FiringDuration        = ARAGORN_FIRINGDURATION 			; Duration of the sword swing

  	RadiusDamageAffects = ENEMIES NEUTRALS

	DamageNugget												; A basic Nugget that just does damage
		Damage			= ARAGORN_DAMAGE
    		DamageScalar  		= 50000% NONE +RohanOathbreaker
		Radius			= 10
		DelayTime		= 0
		DamageType		= HERO
		DeathType		= NORMAL
	End
End

;------------------------------------------------------------------------------
Weapon GondorIsildurNarsil
	LeechRangeWeapon	= Yes
	AttackRange			= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon			= Yes
	DelayBetweenShots     = ARAGORN_DELAYBETWEENSHOTS 		; time between shots, msec
	PreAttackDelay        = 2333 			; 400 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT						; Do the delay each time we attack a new target
	FireFX                = FX_GondorSwordHit
	FiringDuration        = 1333 			; Duration of the sword swing
   
  DamageNugget												; A basic Nugget that just does damage
	Damage			= 10000
	Radius			= 10
	DelayTime		= 0
	DamageType		= HERO
	DeathType		= NORMAL
  End

End


;------------------------------------------------------------------------------
;Weapon GondorAragornKnifeThrow
;  AttackRange = 300
;  WeaponSpeed = 321         ; dist/sec 
;  MinWeaponSpeed = 241
;  MaxWeaponSpeed = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
;  FireFX = FX_HaradrimSpearThrow
;  PlayFXWhenStealthed = Yes
;  ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
;  HitPercentage     = 100     ;When this weapon is used it will hit exactly 80% of the time.
;  ScatterRadius     = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
;  DelayBetweenShots = 1000        ; time between shots, msec
;  PreAttackDelay        = 2000             ; 1467 is the prep time for archer.
;  PreAttackRandomAmount = 0     ; amount of additional preattack variance for archer type attacks only  
;  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
;  FiringDuration      = 1000    ; Duration of the archer firing shot is 500ms.
;  AntiAirborneVehicle		= Yes
;  AntiAirborneMonster		= Yes
;
;  ProjectileNugget            ; Default knife
;    ProjectileTemplateName    = AragornKnife
;    WarheadTemplateName       = AragornKnifeWarhead
;  End
;End

;----------------------------
;Weapon AragornKnifeWarhead
;  RadiusDamageAffects = ENEMIES 
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 200
;    Radius        = 1.6
;    DelayTime     = 0
;    DamageType    = HERO
;    DamageFXType  = GOOD_ARROW_PIERCE
;    DeathType     = EXPLODED
;  End
;End

;------------------------------------------------------------------------------
Weapon GondorAragornDwarfToss
  IdleAfterFiringDelay  = 0 ; So I don't chuck Gimli, and then chase him because the target doesn't die until he hits him
  AttackRange           = 4000.0
  MinimumAttackRange    = 40.0
  WeaponSpeed           = 120.0        ; dist/sec (huge value == effectively instant)
  ProjectileFilterInContainer = NONE +GIMLI ; We don't make the projectile, it is in our Contain module.
  ClipSize              = 1               ; how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 5400 
  PreAttackDelay        = 1633             
  FiringDuration        = 2700
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  HitPercentage       = 0 ; never auto hits, always aims at ground
  ScatterRadius       = 4.0     ;When this weapon is used it can randomly miss by as much as this distance.

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = GondorAragornDwarfTossWarhead
  End
End

;----------------------------
Weapon GondorAragornDwarfTossWarhead
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 1
    Radius        = 0.8
    DelayTime     = 0
  End
End

;------------------------------------------------------------------------------
Weapon FaramirBow       
    AttackRange			= FARAMIR_BOW_RANGE
    
    RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( FARAMIR_BOW_RANGE .003 )
    				
    LeechRangeWeapon    = Yes
    WeaponSpeed			= 321         ; dist/sec 
    MinWeaponSpeed		= 241
    MaxWeaponSpeed		= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
    FireFX				= FX_RohanArcherBowWeapon
    ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
    HitPercentage		= 100     ;When this weapon is used it will hit exactly 75% of the time.
    ScatterRadius		= 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
   
    DelayBetweenShots	= FARAMIR_BOW_DELAYBETWEENSHOTS        ; time between shots, msec
    PreAttackDelay		= FARAMIR_BOW_PREATTACKDELAY             ; 1467 is the prep time for archer.
    PreAttackType		= PER_POSITION
    FiringDuration		= FARAMIR_BOW_FIRINGDURATION   ; Duration of the archer firing shot is 500ms.
 
    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle	= 1	
    ClipReloadTime		= Min:FARAMIR_BOW_RELOADTIME_MIN Max:FARAMIR_BOW_RELOADTIME_MAX
    ContinuousFireOne	= 0
    ContinuousFireCoast	= FARAMIR_BOW_RELOADTIME_MAX
   	
    AntiAirborneVehicle	= Yes
    AntiAirborneMonster	= Yes  
    
    CanFireWhileMoving		= Yes
   
    ProjectileNugget                    ; Default arrow
       ProjectileTemplateName    = GoodFactionArrow
       WarheadTemplateName       = FaramirBowWarhead
    End
End


;----------------------------
Weapon FaramirBowWarhead
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS ; Remember, the projectile is a rock, who has no allies
  RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = FARAMIR_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO_RANGED
    ;DamageScalar  = 25000% NONE +MordorMumakil
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon GondorArcherBowMelee       ; BALANCE Archer Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_RohanArcherBowWeapon;
  DelayBetweenShots     = 1700            ; time between shots, msec
  PreAttackDelay        = 666             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 1000    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 5
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon GondorCavalrySword
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  DelayBetweenShots         = GONDOR_KNIGHT_DELAYBETWEENSHOTS
  PreAttackDelay            = GONDOR_KNIGHT_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration            = GONDOR_KNIGHT_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_KNIGHT_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End


;------------------------------------------------------------------------------
Weapon GondorCavalrySwordUpgraded
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots         = GONDOR_KNIGHT_DELAYBETWEENSHOTS
  PreAttackDelay            = GONDOR_KNIGHT_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration            = GONDOR_KNIGHT_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_KNIGHT_FORGEDBLADES_UPGRADE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End



;------------------------------------------------------------------------------
Weapon GondorSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = GONDOR_SOLDIER_SWORD_DELAYBETWEENSHOTS  ; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = GONDOR_SOLDIER_SWORD_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = GONDOR_SOLDIER_SWORD_FIRINGDURATION    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_SOLDIER_SWORD
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End

;------------------------------------------------------------------------------
Weapon GondorSwordUpgraded
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = GONDOR_SOLDIER_SWORD_DELAYBETWEENSHOTS  ; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = GONDOR_SOLDIER_SWORD_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = GONDOR_SOLDIER_SWORD_FIRINGDURATION    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GONDOR_SOLDIER_SWORD_UPGRADE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End



;------------------------------------------------------------------------------
Weapon GondorTowerShieldGuardSword
	LeechRangeWeapon		= Yes
	AttackRange				= 35.0
	MeleeWeapon				= Yes
	DelayBetweenShots		= GONDOR_TOWERGUARD_DELAYBETWEENSHOTS
	ClipSize				= INFINITE_CLIP_SIZE
	PreAttackDelay			= GONDOR_TOWERGUARD_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
	PreAttackType			= PER_SHOT ; Do the delay each time we attack a new target
	FireFX					= FX_GondorSwordHit
	FireFlankFX		= FX_Flanking
	FiringDuration			= GONDOR_TOWERGUARD_FIRINGDURATION    ; Duration of the sword swing

	DamageNugget
	    Damage				= GONDOR_TOWERGUARD_DAMAGE
	    DelayTime				= 40
	    DamageType				= SPECIALIST
	    DamageFXType			= SWORD_SLASH
	    DeathType				= NORMAL
	    FlankingBonus = 50%
	    ForbiddenUpgradeNames	= Upgrade_GondorForgedBlades
	End
	
    DamageNugget
		Damage					= GONDOR_TOWERGUARD_FORGEDBLADES_UPGRADE_DAMAGE
		DelayTime				= 40
		DamageType				= SPECIALIST
		DamageFXType				= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus = 50%
		RequiredUpgradeNames	= Upgrade_GondorForgedBlades
	End  
  
End



;------------------------------------------------------------------------------
Weapon FaramirSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GondorSwordHit
  DelayBetweenShots     = FARAMIR_DELAYBETWEENSHOTS 			; time between shots, msec
  PreAttackDelay        = FARAMIR_PREATTACKDELAY 	; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = FARAMIR_FIRINGDURATION 	; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = FARAMIR_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon BoromirSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = BOROMIR_DELAYBETWEENSHOTS 			
             ; time between shots, msec
  PreAttackDelay        = BOROMIR_PREATTACKDELAY 				; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FiringDuration        = BOROMIR_FIRINGDURATION 				; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BOROMIR_DAMAGE					
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon GondorRangerSword 
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = 800            ; time between shots, msec
	PreAttackDelay        = 700             ; 567 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FireFX                = FX_GondorSwordHit
	FireFlankFX		= FX_Flanking
	FiringDuration        = 800    ; Duration of the sword swing
	;OverrideVoiceAttackSound = ElvenWarriorVoiceAttack   ;RangerVoiceAttackSword


	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = GONDOR_RANGER_SWORD_DAMAGE
	    Radius        = 0.0
	    DelayTime     = 0
	    DamageType    = SLASH
	    DamageFXType  = SWORD_SLASH
	    DeathType     = NORMAL
	    FlankingBonus = 50%
	End
End

;------------------------------------------------------------------------------
Weapon GandalfSword
  LeechRangeWeapon = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  FireFX                = FX_GandalfSwordHit
  DelayBetweenShots     = GANDALF_THE_GREY_DELAYBETWEENSHOTS 		; time between shots, msec
  PreAttackDelay        = GANDALF_THE_GREY_PREATTACKDELAY 
  FiringDuration		= GANDALF_THE_GREY_FIRINGDURATION 		
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GANDALF_THE_GREY_DAMAGE				
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon GandalfWizardBlast ; small microwave push
	IdleAfterFiringDelay = 0
	LeechRangeWeapon	 = Yes
	AttackRange = GANDALF_FORCE_ATTACK_RANGE
	WeaponSpeed = 401         ; dist/sec 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
	DelayBetweenShots = 5000               ; time between shots, msec
	PreAttackDelay        = 100
	PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
	FireFX                = FX_TelekinesisAtBone
	FiringDuration        = 100
	DamageDealtAtSelfPosition = Yes 
	IsAimingWeapon		= Yes
	AcceptableAimDelta	= 15
	AntiAirborneVehicle	= No
	AntiAirborneMonster	= No

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= GANDALF_FORCE_ATTACK_DAMAGE
		DamageArc 		= 75
		Radius			= 110.0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 ; must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount   = 70.0
		ShockWaveArc	  = 75
		ShockWaveRadius   = 110.0
		ShockWaveTaperOff = 0.75
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End



;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
Weapon GandalfSwordMounted			;Mounted sword is the same as normal sword except it bends to the left
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GandalfSwordMountedHit
  DelayBetweenShots     = 2000            ; time between shots, msec
  PreAttackDelay        = 750
  FiringDuration		= 750
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  AimDirection			= 270		; In order to aim at something, we aim this far off (to the right would be aiming at 270 degrees).

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 150
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
;Weapon GandalfStaffWeaponMounted  ; BALANCE GandalfStaffWeapon
;	AttackRange			= GANDALF_PHASER_RANGE ;200
;	LeechRangeWeapon	= Yes
;	WeaponSpeed			= 801      ; dist/sec 
;	HitPercentage		= 100		; When this weapon is used it will hit exactly 100% of the time.
;	
;	DelayBetweenShots	= 4500		; time between shots, msec
;	PreAttackDelay      = 2000
;	PreAttackType       = PER_SHOT	; Do the delay each time we attack a new target
;	FireFX              = FX_GandalfBeamWeaponMounted
;	FiringDuration      = 2500
;		
;	AntiAirborneVehicle	= Yes
;	AntiAirborneMonster = Yes
;	ClipSize			= 1			; how many shots in a Clip (0 == infinite)
;	ClipReloadTime		= 30000     ; how long to reload a Clip, msec
;	AutoReloadsClip		= Yes
;	IdleAfterFiringDelay = 2500;
;	HoldAfterFiringDelay = 2500;
;
;	RadiusDamageAffects = ENEMIES NOT_SIMILAR
;
;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage        = 120
;		Radius        = 17.6
;		DelayTime     = 600				;The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
;		DamageType    = MAGIC
;		DamageFXType  = FLAME
;		DeathType     = NORMAL
;	End
;	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
;		ShockWaveAmount		= 50.0
;		ShockWaveRadius		= 17.6
;		ShockWaveTaperOff	= 0.5
;		DelayTime			= 600		;The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
;	End
;
;End

;------------------------------------------------------------------------------

Weapon FaramirWoundArrow
	AttackRange				= FARAMIR_WOUNDING_ARROW_RANGE
	LeechRangeWeapon			= Yes
	WeaponSpeed				= 321				 ; dist/sec 
	MinWeaponSpeed			= 241
	MaxWeaponSpeed			= 481			; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_FaramirWoundingArrow
	ScaleWeaponSpeed			= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage			= 100		 ;When this weapon is used it will hit exactly 75% of the time.
	ScatterRadius			= 0.0		 ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots			= 15000									; time between shots, msec
	PreAttackDelay			= 1										; we want isntant
	PreAttackType			= PER_POSITION
	FiringDuration			= 1										; Duration of the archer firing shot is 500ms.
	ClipSize				= 1
	AutoReloadsClip			= Yes
	AutoReloadWhenIdle		= 1	
	ClipReloadTime			= Min:FARAMIR_BOW_RELOADTIME_MIN Max:FARAMIR_BOW_RELOADTIME_MAX
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	PreferredTargetBone		= B_LLLID ; Likes to shoot things in their left eye.
	ProjectileNugget										; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= FaramirSpecialArrow
		WarheadTemplateName	= FaramirWoundArrowWarhead
	End
End

;------------------------------

Weapon FaramirWoundArrowWarhead

	ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = FARAMIR_WOUNDING_ARROW_DAMAGE
		DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
		DamageScalar  = 300% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir
		DamageScalar  = 150% NONE +MordorMountainTroll +MordorCaveTroll +MordorDrummerTroll
		DamageScalar  = 200% NONE +RohanTreeBerd +RohanEntFir +RohanEntBirch +RohanEntFir_Summoned +RohanEntBirch_Summoned 
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	EmotionWeaponNugget
		EmotionType			= TERROR
		Radius				= 0
		Duration			= 5
		SpecialObjectFilter	= ANY ENEMIES +MONSTER
	End

End


;----------------------------------------------------------------------------------
Weapon GondorIsildurSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes

  DelayBetweenShots     = ARAGORN_DELAYBETWEENSHOTS 		; time between shots, msec
  PreAttackDelay        = ARAGORN_PREATTACKDELAY 			; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT						; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  ;FireFX                = FX_IsildurSword
  FiringDuration        = ARAGORN_FIRINGDURATION 			; Duration of the sword swing

  DamageNugget												; A basic Nugget that just does damage
    Damage        = ARAGORN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End


//------------------------------------------------------------------------------
// This weapon doesn't do any damage, it spawns an object which does delayed damage.
Weapon MenLongShotWeapon
	RadiusDamageAffects		= ENEMIES NEUTRALS
	FireFX					= FX_ArrowVolleyPhaseOne	

	// make our members fire a dummy weapon
	HordeAttackNugget
		LockWeaponSlot		= QUINARY
	End
End

//------------------------------------------------------------------------------
Weapon MenLongShotWeaponReal
	RadiusDamageAffects		= ENEMIES NEUTRALS

	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        				= GONDOR_RANGER_LONGSHOT_DAMAGE
		Radius        				= GONDOR_RANGER_LONGSHOT_CURSOR_RADIUS
		DamageMaxHeightAboveTerrain = 1
		DelayTime     				= 0
		DamageType    				= PIERCE
		DeathType     				= NORMAL
	End
End

//------------------------------------------------------------------------------
Weapon MenLongShotFakeWeapon
	RadiusDamageAffects		= ENEMIES NEUTRALS
	;FireFX 					= FX_IthilienRangerLongShot
	
	// don't play an anim during this phase, wait until OCL has 
	// spawned the tracer arrow before playing the shoot anim
	PreAttackDelay			= 2000 
	
	FiringDuration			= 2000
	AttackRange				= 99999999
End