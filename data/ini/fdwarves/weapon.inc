/////////////////
// WEAPON.INC //
///////////////
//Dwarves//
//////////



;//------------------------------------------------------------------------------
Weapon BattleWagonCrush ;// Used when the BattleWagon crushes an enemy.
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0         ;//time between shots, msec
  PreAttackDelay        = 0			;//PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0 
  FireFX				= FX_GenericCrushImpactSound

  DamageNugget                        ;// A basic Nugget that just does damage
    Damage        = DWARVEN_BATTLEWAGON_CRUSH_DAMAGE				;// A whole lot of damage.
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = CRUSHED
    FlankingBonus = 300%
  End
End

;//------------------------------------------------------------------------------
Weapon GuardianCrush ;// Used when the BattleWagon crushes an enemy.
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0         ;//time between shots, msec
  PreAttackDelay        = 0			;//PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0 
  FireFX				= FX_GenericCrushImpactSound

  DamageNugget                        ;// A basic Nugget that just does damage
    Damage        = DWARVEN_GUARDIAN_AXE				;// A whole lot of damage.
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = CRUSHED
    FlankingBonus = 300%
  End
End



;------------------------------------------------------------------------------
Weapon RohanGimliAxe  ; BALANCE Gimli Axe Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
  DelayBetweenShots     = GIMLI_DELAYBETWEENSHOTS 	; time between shots, msec
  PreAttackDelay        = GIMLI_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = GIMLI_FIRINGDURATION 		; min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = GIMLI_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon RohanGimliSuperAxe  ; BALANCE Gimli Axe Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
  DelayBetweenShots     = GIMLI_DELAYBETWEENSHOTS_SUPER 	; time between shots, msec
  PreAttackDelay        = GIMLI_PREATTACKDELAY_SUPER 	; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = GIMLI_FIRINGDURATION_SUPER 		; min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage			= GIMLI_DAMAGE_SUPER
    DamageArc 		= 180
	Radius			= 10.0
    DelayTime		= 0
    DamageType		= HERO
    DamageFXType	= SWORD_SLASH
    DeathType		= NORMAL
  End

  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .99
	ShockWaveAmount		= 30.0
    ShockWaveRadius		= 10
    ShockWaveArc		= 180
    ShockWaveTaperOff = 1
  End
End


;------------------------------------------------------------------------------
Weapon RohanGimliAxeThrown 
	AttackRange         = GIMLI_THROW_RANGE
	WeaponSpeed = 161         ; dist/sec 
	MinWeaponSpeed = 201
	MaxWeaponSpeed = 241      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_GimliAxeThrow
	ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage = 100
	ScatterRadius     = 0.0      ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots = 0        ; time between shots, msec
  	
    AntiAirborneVehicle	= Yes ; added so he can attack fellbeast and birds
    AntiAirborneMonster	= Yes ; added so he can attack fellbeast and birds
  	
  	ClipSize			= 1			; how many shots in a Clip (0 == infinite)
	ClipReloadTime		= 10000     ; how long to reload a Clip, msec
	AutoReloadsClip		= Yes
	;IdleAfterFiringDelay = 2500;
	;HoldAfterFiringDelay = 2500 ; So I don't move while the weapon needs to complete
    InstantLoadClipOnActivate = Yes

	PreAttackDelay        = 1500; 1467             ; 1467 is the prep time for archer.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration      = 1600; 1567    ; Duration of the archer firing shot is 500ms.

	ProjectileNugget
		ProjectileTemplateName = GimliAxeProjectile
		WarheadTemplateName = RohanGimliAxeThrownWarhead
	End
End

;------------------------------------------------------------------------------
Weapon RohanGimliAxeThrownWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
  FireFX                = FX_GondorSwordHit
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget
    Damage        = GIMLI_THROW_DAMAGE
    DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon DwarvenZealotBoomAxeThrown 
	AttackRange         = 200
	WeaponSpeed = 161         ; dist/sec 
	MinWeaponSpeed = 201
	MaxWeaponSpeed = 241      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_GimliAxeThrow
	ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage = 100
	ScatterRadius     = 0.0      ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots = 0        ; time between shots, msec
  	
    AntiAirborneVehicle	= Yes ; added so he can attack fellbeast and birds
    AntiAirborneMonster	= Yes ; added so he can attack fellbeast and birds
  	
  	ClipSize			= 1			; how many shots in a Clip (0 == infinite)
	ClipReloadTime		= 10000     ; how long to reload a Clip, msec
	AutoReloadsClip		= Yes
	;IdleAfterFiringDelay = 2500;
	;HoldAfterFiringDelay = 2500 ; So I don't move while the weapon needs to complete
    InstantLoadClipOnActivate = Yes

	PreAttackDelay        = 1500; 1467             ; 1467 is the prep time for archer.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration      = 1600; 1567    ; Duration of the archer firing shot is 500ms.

	ProjectileNugget
		ProjectileTemplateName = GimliAxeProjectile
		WarheadTemplateName = DwarvenZealotBoomAxeWarhead
	End
End

;------------------------------------------------------------------------------
Weapon DwarvenZealotBoomAxeWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
  FireFX                = FX_GondorSwordHit
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget
    Damage        = 30
    DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
    Radius        = 30.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 30.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
End

;------------------------------------------------------------------------------
;Weapon RohanGimliDwarfTossGroundPound
; DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 100
;    Radius        = 40.0
;    DelayTime     = 0
;    DamageType    = SLASH
;    DamageFXType  = SWORD_SLASH
;    DeathType     = NORMAL
;  End
;  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
;    ShockWaveAmount   = 20.0
;    ShockWaveRadius   = 40.0
;    ShockWaveTaperOff = 0.5
;  End
;End

;------------------------------------------------------------------------------
Weapon RohanGimliLeap  ; BALANCE RohanGimliLeap
  IdleAfterFiringDelay = 0
  AttackRange           = 100.0
  MinimumAttackRange    = 8.0
  WeaponSpeed           = 100.0        ; dist/sec (huge value == effectively instant)
  ProjectileSelf		= Yes ; We don't make the projectile throw ourself
  ClipSize              = 1               ; how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 2200   ;1467 min for animation           ; how long to reload a Clip, msec
  AutoReloadsClip		= Yes	
  PreAttackDelay        = 600
  FiringDuration		= 1500            
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  HitPercentage       = 0 ; Never auto hits, always shoots at a ground position
  ScatterRadius       = 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
  FireFX				= FX_GimliLeap
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = RohanGimliLeapWarhead
  End
End

;-----------------------------------
Weapon RohanGimliLeapWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES
  
  FireFX				= FX_GimliLeapNoVoice
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GIMLI_LEAP_DAMAGE
    Radius        = 30.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 70.0
    ShockWaveRadius   = 40.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
End

;------------------------------------------------------------------------------
Weapon DwarfZerkerLeap  ; BALANCE RohanGimliLeap
  IdleAfterFiringDelay = 0
  AttackRange           = 100.0
  MinimumAttackRange    = 8.0
  WeaponSpeed           = 100.0        ; dist/sec (huge value == effectively instant)
  ProjectileSelf		= Yes ; We don't make the projectile throw ourself
  ClipSize              = 1               ; how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 2200   ;1467 min for animation           ; how long to reload a Clip, msec
  AutoReloadsClip		= Yes	
  PreAttackDelay        = 600
  FiringDuration		= 1500            
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  HitPercentage       = 0 ; Never auto hits, always shoots at a ground position
  ScatterRadius       = 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
  FireFX				= FX_GimliLeap
  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = DwarfZerkerLeapWarhead
  End
End

;-----------------------------------
Weapon DwarfZerkerLeapWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES
  
  FireFX				= FX_GimliLeapNoVoice
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = DWARVEN_ZERKER_LEAP_DAMAGE
    Radius        = 30.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 30.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
End

;------------------------------------------------------------------------------
;Weapon RohanGimliWhirlWind  ; BALANCE RohanGimliWhirlWind
;  IdleAfterFiringDelay	= 0
;  AttackRange           = 20.0 ;150.0
;  MinimumAttackRange    = 4.0
;  WeaponSpeed           = 160.0        ; dist/sec (huge value == effectively instant)
;  ClipSize              = INFINITE_CLIP_SIZE               ; how many shots in a Clip (0 == infinite)
;  ClipReloadTime        = 2000   ;1467 min for animation           ; how long to reload a Clip, msec
;  AutoReloadsClip		= Yes	;We need a rock explicitly picked up.
;  PreAttackDelay        = 600
;  FiringDuration		= 2500            
;  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
;  HitPercentage       = 0 ; Never auto hits, always shoots at a ground position
;  ScatterRadius       = 1  ;When this weapon misses it can randomly miss by as much as this distance.
;  
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 100
;    Radius        = 25.0
;    DelayTime     = 0
;    DamageType    = HERO
;    DamageFXType  = SWORD_SLASH
;    DeathType             = NORMAL
;  End
;End

;----------------------------------------------------------------------

Weapon DwarvenAxeThrowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes
  	
  	DamageNugget
	    Damage        			= DWARVEN_AXETHROWER_DAMAGE
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= SLASH  ;PIERCE
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
;	    DamageScalar  = 5000% NONE +STRUCTURE ; We want to do extra structure damage per JB's request.
	    ForbiddenUpgradeNames	= Upgrade_DwarvenForgedBlades
	End

	DamageNugget
	    Damage        			= DWARVEN_AXETHROWER_DAMAGE_FORGEDBLADES
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= SLASH  ;PIERCE
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
;	    DamageScalar  = 5000% NONE +STRUCTURE ; We want to do extra structure damage per JB's request.
	    RequiredUpgradeNames	= Upgrade_DwarvenForgedBlades
	End
End

Weapon StructureDwarvenAxeThrowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget		= Yes
  	DamageNugget
	    Damage        			= KEEP_BOW_DAMAGE
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= STRUCTURAL					; Moving all structure-based weapons over to Structural Damage for balance reasons - GB
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
	End
End

Weapon StructureDwarvenAxeThrowForgedBladeUpgradedWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget		= Yes
  	DamageNugget
	    Damage        			= KEEP_BOW_UPGRADED_DAMAGE
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= STRUCTURAL					; Moving all structure-based weapons over to Structural Damage for balance reasons - GB
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
	End

	DamageNugget
	    Damage        			= KEEP_BOW_DAMAGE
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= STRUCTURAL					; Moving all structure-based weapons over to Structural Damage for balance reasons - GB
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
	    
	End
End


Weapon DwarvenAxeThrowBombardWarhead
  	RadiusDamageAffects			= ENEMIES 
  	DamageNugget
	    Damage        			= DWARVEN_AXETHROWER_DAMAGE
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= PIERCE
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
;	    DamageScalar  = 5000% NONE +STRUCTURE ; We want to do extra structure damage per JB's request.
	    ForbiddenUpgradeNames	= Upgrade_DwarvenForgedBlades
	End
  	DamageNugget
	    Damage        			= DWARVEN_AXETHROWER_DAMAGE_FORGEDBLADES
		Radius        			= 0.0
	    DelayTime     			= 0
	    DamageType    			= PIERCE
	    DamageFXType  			= SWORD_SLASH					; Not GOOD_ARROW_PIERCE as this creates arrows in the victim :)
	    DeathType     			= EXPLODED
;	    DamageScalar  = 5000% NONE +STRUCTURE ; We want to do extra structure damage per JB's request.
	    RequiredUpgradeNames	= Upgrade_DwarvenForgedBlades
	End
End




;------------------------------------------------------------------------------
Weapon FortressStructureAxeWeapon		// BALANCE Axe Weapon
	AttackRange               	= KEEP_ARCHER_RANGE
	WeaponSpeed               	= 50      // dist/sec 
	MinWeaponSpeed            	= 241
	MaxWeaponSpeed            	= 481		// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX                    	= FX_DwarfAxeThrowerWeapon
	ScaleWeaponSpeed          	= Yes		// Used for lob weapons, scales speed proportional to range
	HitPercentage             	= 100		//When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius             	= 16.0	//When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots         	= Min:KEEP_BOW_DELAYBETWEENSHOTS_MIN Max:KEEP_BOW_DELAYBETWEENSHOTS_MAX
	PreAttackDelay            	= KEEP_BOW_PREATTACKDELAY			// 1467 is the prep time for archer.
	PreAttackType             	= PER_SHOT						//Do the delay each time we attack a new target
	FiringDuration            	= KEEP_BOW_DELAYBETWEENSHOTS_MAX  // Duration of the archer firing shot is 500ms.
	IsAimingWeapon            	= Yes
	AntiAirborneVehicle			= Yes
	AntiAirborneMonster			= Yes
	HitPassengerPercentage		= 20%
	AcceptableAimDelta			= 180.0		// We want to be able to shoot all round, as we canit move.

	CanBeDodged = Yes						// Will check for a DodgePercent on the target to have a second chance at failing HitPercent


	ProjectileNugget													// Default axe
		ProjectileTemplateName  = StructureDwarvenAxe
		WarheadTemplateName     = StructureDwarvenAxeThrowWarhead
		ForbiddenUpgradeNames   = Upgrade_GoodFortressFlamingMunitions  
	End

	ProjectileNugget													// Upgraded axe
		ProjectileTemplateName  = StructureUpgradedDwarvenAxe
		WarheadTemplateName     = StructureDwarvenAxeThrowForgedBladeUpgradedWarhead
		RequiredUpgradeNames	= Upgrade_GoodFortressFlamingMunitions 
	End
End

;------------------------------------------------------------------------------
Weapon StructureAxeWeapon       ; BALANCE Axe Weapon
	AttackRange               = KEEP_ARCHER_RANGE
	WeaponSpeed               = 50       ; dist/sec 
	MinWeaponSpeed            = 241
	MaxWeaponSpeed            = 481		; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX                    = FX_DwarfAxeThrowerWeapon
	ScaleWeaponSpeed          = Yes		; Used for lob weapons, scales speed proportional to range
	HitPercentage             = 100		;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius             = 16.0		;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots         = Min:KEEP_BOW_DELAYBETWEENSHOTS_MIN Max:KEEP_BOW_DELAYBETWEENSHOTS_MAX
	PreAttackDelay            = KEEP_BOW_PREATTACKDELAY   ; 1467 is the prep time for archer.
	PreAttackType             = PER_SHOT	; Do the delay each time we attack a new target
	FiringDuration            = KEEP_BOW_DELAYBETWEENSHOTS_MAX    ; Duration of the archer firing shot is 500ms.
	IsAimingWeapon            = Yes
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	HitPassengerPercentage	= 20%
	AcceptableAimDelta		= 180.0	; We want to be able to shoot all round, as we canit move.

	CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent


	ProjectileNugget													; Default axe
		ProjectileTemplateName  = StructureDwarvenAxe
		WarheadTemplateName     = StructureDwarvenAxeThrowWarhead
		ForbiddenUpgradeNames   = Upgrade_DwarvenTowerForgedBlades 
	End

	ProjectileNugget													; Upgraded axe
		ProjectileTemplateName  = StructureUpgradedDwarvenAxe
		WarheadTemplateName     = StructureDwarvenAxeThrowForgedBladeUpgradedWarhead
		RequiredUpgradeNames	= Upgrade_DwarvenTowerForgedBlades 
	End
End





;//------------------------------------------------------------------------------
;//------------------------------------------------------------------------------
;//------------------------------------------------------------------------------
;
;//  Dwarves
;
;//------------------------------------------------------------------------------
;//------------------------------------------------------------------------------
;//------------------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon DwarvenArcherBowMelee       ; BALANCE Archer Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
;  FireFX                = FX_DwarvenArcherBowWeapon;
  DelayBetweenShots     = 2000            ; time between shots, msec
  PreAttackDelay        = 666             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 1000    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = DWARVEN_MENOFDALE_MELEE_DAMAGE	
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End
;------------------------------------------------------------------------------
Weapon DwarvenArcherBow
	AttackRange         = DWARVEN_MENOFDALE_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_MENOFDALE_RANGE .003 )
	
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = DWARVEN_MENOFDALE_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:DWARVEN_MENOFDALE_BOW_RELOADTIME_MIN Max:DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = DwarvenArcherBowWarhead
		ForbiddenUpgradeNames   = Upgrade_DwarvenFireArrows
	End
	ProjectileNugget	; Fire arrow avialble through fire upgrade
		ProjectileTemplateName  = GoodFactionFireArrow
		WarheadTemplateName     = DwarvenArcherBowFireWarhead
		RequiredUpgradeNames    = Upgrade_DwarvenFireArrows
	End
End

Weapon DwarvenArcherBowBombard
	AttackRange         = DWARVEN_MENOFDALE_BOMBARD_MAXRANGE
	MinimumAttackRange  = #SUBTRACT( DWARVEN_MENOFDALE_BOMBARD_MINRANGE 75 )
	
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_MENOFDALE_BOMBARD_MAXRANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 0     ;Always scatter
	ScatterRadius       = ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = DWARVEN_MENOFDALE_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:DWARVEN_MENOFDALE_BOW_RELOADTIME_MIN Max:DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrowBombard
		WarheadTemplateName     = DwarvenArcherBowBombardWarhead
		ForbiddenUpgradeNames   = Upgrade_DwarvenFireArrows
	End
	ProjectileNugget	; Fire arrow avialble through fire upgrade
		ProjectileTemplateName  = GoodFactionFireArrowBombard
		WarheadTemplateName     = DwarvenArcherBowBombardFireWarhead
		RequiredUpgradeNames    = Upgrade_DwarvenFireArrows
	End
End

;------------------------------------------------------------------------------
Weapon DwarvenBattleWagonMenOfDaleWeapon
	AttackRange         = DWARVEN_MENOFDALE_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_MENOFDALE_RANGE .003 )
	
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = DWARVEN_MENOFDALE_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:DWARVEN_MENOFDALE_BOW_RELOADTIME_MIN Max:DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	CanFireWhileMoving	= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = DwarvenArcherBowWarhead
	End
End

;----------------------------
Weapon DwarvenArcherBowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = DWARVEN_MENOFDALE_DAMAGE
	  Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = GOOD_ARROW_PIERCE
	    DeathType     = EXPLODED
	End
End

Weapon DwarvenArcherBowBombardWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = No
  	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = DWARVEN_MENOFDALE_DAMAGE
	  Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = GOOD_ARROW_PIERCE
	    DeathType     = EXPLODED
	End
End

Weapon DwarvenArcherBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = DWARVEN_MENOFDALE_FIRE_UPGRADE_DAMAGE_FIRE
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
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = DWARVEN_MENOFDALE_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End
End

Weapon DwarvenArcherBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = No

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = DWARVEN_MENOFDALE_FIRE_UPGRADE_DAMAGE_FIRE
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
		DamageScalar  = 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = DWARVEN_MENOFDALE_FIRE_UPGRADE_DAMAGE
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

;//-----------------------------------
Weapon DwarvenMenOfDaleBlackArrowsRangeFinder
	AttackRange			= #SUBTRACT( DWARVEN_MENOFDALE_RANGE 100 ) 
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus			= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_MENOFDALE_RANGE .003 )
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	HordeAttackNugget
		LockWeaponSlot		= QUINARY
	End
End
;//-----------------------------------
Weapon DwarvenZealotBoomAxeRangeFinder
	AttackRange			= 200
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus			= 1
	RangeBonusPerFoot	= #MULTIPLY( 200 .003 )
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = Yes
	HordeAttackNugget
		LockWeaponSlot		= TERTIARY
	End
End

;//-----------------------------------
Weapon DwarvenMenOfDaleBlackArrows
	AttackRange         = DWARVEN_MENOFDALE_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_MENOFDALE_RANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = DWARVEN_MENOFDALE_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:DWARVEN_MENOFDALE_BOW_RELOADTIME_MIN Max:DWARVEN_MENOFDALE_BOW_RELOADTIME_MAX

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = BlackArrowsProjectile
		WarheadTemplateName     = DwarvenMenOfDaleBlackArrowWarhead
	End
End

Weapon DwarvenMenOfDaleBlackArrowWarhead
	RadiusDamageAffects	= ENEMIES 
	HitStoredTarget		= Yes
	DamageNugget
		Damage			= DWARVEN_MENOFDALE_DAMAGE_BLACKARROWS
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= PIERCE
		DamageFXType	= GOOD_ARROW_PIERCE
		DeathType		= EXPLODED
	End
	EmotionWeaponNugget
		EmotionType			= TERROR
		Radius				= 0
		Duration			= 5
		SpecialObjectFilter	= ANY ENEMIES +MONSTER
	End
End

;//-----------------------------------
Weapon DwarvenIronHillsCatapultRock  ;// BALANCE Catapult Weapon
  AttackRange = DWARVEN_CATAPULT_ROCK_RANGE
  MinimumAttackRange	= DWARVEN_CATAPULT_ROCK_MINRANGE
  
  RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_CATAPULT_ROCK_RANGE .003 )
  
  WeaponSpeed			= 201         ;// dist/sec 
  MinWeaponSpeed		= 201
  FireFX				= FX_DwarvenCatapultWeapon
  DelayBetweenShots		= DWARVEN_CATAPULT_ROCK_DELAYBETWEENSHOTS	;// time between shots, msec
  FXTrigger				= CATAPULT_ROCK
  PreAttackDelay		= DWARVEN_CATAPULT_ROCK_PREATTACKDELAY
  PreAttackType			= PER_SHOT									;// Do the delay each time we attack a new target
  FiringDuration		= DWARVEN_CATAPULT_ROCK_FIRINGDURATION		;// Catapult firing animation takes 3.0 secs.
  RequireFollowThru		= Yes
  ShareTimers			= Yes ;// share timer with catapult heads to you can't fire both in quick succession
  NoVictimNeeded		= Yes ;// Need no target
  LeechRangeWeapon		= Yes
  
  ScatterRadiusVsInfantry			= 40.0  
  DisableScatterForTargetsOnWall	= Yes
  HitPercentage					= 70 ;//always hits.
  ScatterRadius					= 50.0 ;When this weapon misses it can randomly miss by as much as this distance.

  ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = DwarvenCatapultRockProjectile		;MordorCatapultRockProjectile
    WarheadTemplateName = DwarvenIronHillsCatapultRockWarhead
  End

  ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = DwarvenCatapultRockProjectile2		;MordorCatapultRockProjectile
    WarheadTemplateName = DwarvenIronHillsCatapultRockWarhead
    WeaponLaunchBoneSlotOverride = SECONDARY
  End
  
  ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
	
End

;//-----------------------------------
;//-----------------------------------
Weapon DwarvenIronHillsCatapultRockWarhead
	ProjectileCollidesWith = MONSTERS STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES
	HitPassengerPercentage = 50%
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = DWARVEN_CATAPULT_ROCK_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 50.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
	    DamageScalar  = 0% ALL ALLIES			; No damage to allies
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


;//-----------------------------------
Weapon DwarvenIronHillsCatapultFlamingShot  ;// BALANCE Catapult Weapon
  AttackRange = DWARVEN_CATAPULT_ROCK_RANGE
  MinimumAttackRange	= DWARVEN_CATAPULT_ROCK_MINRANGE
  
  RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_CATAPULT_ROCK_RANGE .003 )
  
  WeaponSpeed			= 201         ;// dist/sec 
  MinWeaponSpeed		= 201
  FireFX				= FX_DwarvenCatapultWeapon
  DelayBetweenShots		= DWARVEN_CATAPULT_ROCK_DELAYBETWEENSHOTS	;// time between shots, msec
  FXTrigger				= CATAPULT_ROCK
  PreAttackDelay		= DWARVEN_CATAPULT_ROCK_PREATTACKDELAY
  PreAttackType			= PER_SHOT									;// Do the delay each time we attack a new target
  FiringDuration		= DWARVEN_CATAPULT_ROCK_FIRINGDURATION		;// Catapult firing animation takes 3.0 secs.
  RequireFollowThru		= Yes
  ShareTimers			= Yes ;// share timer with catapult heads to you can't fire both in quick succession
  NoVictimNeeded		= Yes ;// Need no target
  LeechRangeWeapon		= Yes
  
  ScatterRadiusVsInfantry			= 40.0  
  DisableScatterForTargetsOnWall	= Yes
  HitPercentage				= 70 ;//always hits.
  ScatterRadius				= 50.0 ;When this weapon misses it can randomly miss by as much as this distance.

  ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = DwarvenCatapultFlamingShotProjectile
    WarheadTemplateName = DwarvenCatapultFlamingShotWarhead
;    ForbiddenUpgradeNames   = Upgrade_AllFactionUpgrade
  End

  ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
    ProjectileTemplateName = DwarvenCatapultFlamingShotProjectile
    WarheadTemplateName = DwarvenCatapultFlamingShotWarhead
    WeaponLaunchBoneSlotOverride = SECONDARY
;    ForbiddenUpgradeNames   = Upgrade_AllFactionUpgrade
  End
  
  
  	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
End
;-----------------------------------
Weapon DwarvenCatapultFlamingShotWarhead
	ProjectileCollidesWith = MONSTERS	STRUCTURES	; Structures is the default, btw.
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES
	HitPassengerPercentage = 50%

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
	
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = DWARVEN_CATAPULT_FLAME_DAMAGE
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
		Damage        = DWARVEN_CATAPULT_ROCK_DAMAGEUPGRADE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 100.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
	    DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    DamageScalar  = 150% ANY ENEMIES +STRUCTURE
	End
End



;//-----------------------------------
Weapon DwarvenIronHillsCatapultOilBarrel  ;// BALANCE Catapult Weapon
	AttackRange					= DWARVEN_CATAPULT_OILBARREL_RANGE
	MinimumAttackRange			= DWARVEN_CATAPULT_ROCK_MINRANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_CATAPULT_OILBARREL_RANGE .003 )
	
	
	WeaponSpeed					= 100
	MinWeaponSpeed				= 80
	MaxWeaponSpeed				= 150
	ScaleWeaponSpeed			= Yes
	HitPercentage				= 100
	PreAttackType				= PER_SHOT
	;FireFX						= FX_DwarvenCatapultWeapon	;sound played by triggersound
	DamageType					= FLAME
	AcceptableAimDelta			= 180.0
	DelayBetweenShots			= DWARVEN_CATAPULT_ROCK_DELAYBETWEENSHOTS	;// time between shots, msec
	FXTrigger					= CATAPULT_ROCK
	PreAttackDelay				= DWARVEN_CATAPULT_ROCK_PREATTACKDELAY
	FiringDuration				= DWARVEN_CATAPULT_ROCK_FIRINGDURATION		;// Catapult firing animation takes 3.0 secs.
	RequireFollowThru			= Yes
	ShareTimers					= Yes ;// share timer with catapult heads to you can't fire both in quick succession
	NoVictimNeeded				= Yes ;// Need no target
	LeechRangeWeapon			= Yes
  
	ScatterRadiusVsInfantry			= 40.0  
	DisableScatterForTargetsOnWall	= Yes

	ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = DwarvenIronHillsCatapultOilBarrelProjectile
		WarheadTemplateName = BattleWagonOilBarrelWarhead
	End

	ProjectileNugget                    ;// A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = DwarvenIronHillsCatapultOilBarrelProjectile2
		WarheadTemplateName = BattleWagonOilBarrelWarhead
		WeaponLaunchBoneSlotOverride = SECONDARY
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
End

//-----------------------------------
Weapon DwarvenMightyCatapultFortressWeapon ;// BALANCE Catapult Weapon
	AttackRange					= DWARVEN_MIGHTYCATAPULT_RANGE
	MinimumAttackRange			= 200.0
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= DWARVEN_MIGHTYCATAPULT_DELAYBETWEENSHOTS  
	PreAttackDelay				= DWARVEN_MIGHTYCATAPULT_PREATTACKDELAY
	FiringDuration      		= DWARVEN_MIGHTYCATAPULT_FIRINGDURATION	
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End

//-----------------------------------
Weapon DwarvenMightyCatapultRock  ;// BALANCE Catapult Weapon
	AttackRange						= DWARVEN_MIGHTYCATAPULT_RANGE
	MinimumAttackRange				= 200.0
	WeaponSpeed						= 201         ;// dist/sec 
	MinWeaponSpeed					= 180
	FireFX							= FX_DwarvenMightyCatapultWeapon	;FX_DwarvenCatapultWeapon
	DelayBetweenShots				= DWARVEN_MIGHTYCATAPULT_DELAYBETWEENSHOTS	;// time between shots, msec
	FXTrigger						= CATAPULT_ROCK
	PreAttackDelay					= DWARVEN_MIGHTYCATAPULT_PREATTACKDELAY
	PreAttackType					= PER_SHOT									;// Do the delay each time we attack a new target
	FiringDuration					= DWARVEN_MIGHTYCATAPULT_FIRINGDURATION		;// Catapult firing animation takes 3.0 secs.
	RequireFollowThru				= Yes
	ShareTimers						= Yes ;// share timer with catapult heads to you can't fire both in quick succession
	NoVictimNeeded					= Yes ;// Need no target
	LeechRangeWeapon				= Yes
	//AcceptableAimDelta				= 180
	  
	ScatterRadiusVsInfantry				= 40.0  
	DisableScatterForTargetsOnWall			= Yes
	HitPercentage					= 1  ;//always hits.
	ScatterRadius					= 100.0			; When this weapon misses it can randomly miss by as much as this distance.
	ScatterIndependently				= Yes
		

	// A Nugget that creates an Object and sends it to the target with a Warhead
	ProjectileNugget                    
		ProjectileTemplateName = DwarvenMightyCatapultProjectile
		WarheadTemplateName = DwarvenMightyCatapultFlamingShotWarhead
;		ForbiddenUpgradeNames   = Upgrade_AllFactionUpgrade
	End

	// A Nugget that creates an Object and sends it to the target with a Warhead
	ProjectileNugget                    
		ProjectileTemplateName = DwarvenMightyCatapultProjectile2	
		WarheadTemplateName = DwarvenMightyCatapultFlamingShotWarhead
		WeaponLaunchBoneSlotOverride = SECONDARY
;		ForbiddenUpgradeNames   = Upgrade_AllFactionUpgrade
	End

	// A Nugget that creates an Object and sends it to the target with a Warhead
	ProjectileNugget                   
		ProjectileTemplateName = DwarvenMightyCatapultProjectile3	
		WarheadTemplateName = DwarvenMightyCatapultFlamingShotWarhead
		WeaponLaunchBoneSlotOverride = TERTIARY
;		ForbiddenUpgradeNames   = Upgrade_AllFactionUpgrade
	End
End

//-----------------------------------
Weapon DwarvenMightyCatapultFlamingShotWarhead
	ProjectileCollidesWith	= MONSTERS	STRUCTURES	// Structures is the default, btw.
	RadiusDamageAffects		= ENEMIES ALLIES NOT_SIMILAR

	// Increase the burn rate in the area
	FireLogicNugget 
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	DWARVEN_MIGHTYCATAPULT_DAMAGE_RADIUS
		Damage		=	3
	End

	// A basic Nugget that just does damage to trigger explosive mine
	DamageNugget                        
		Damage        = 1
		Radius        = 20
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	// A Nugget that throws things back with force 
	MetaImpactNugget             
;		HeroResist			= .75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= DWARVEN_MIGHTYCATAPULT_DAMAGE_RADIUS
		ShockWaveTaperOff	= 0.75
	End
	
	// A basic Nugget that just does damage
	DamageNugget                        
	    Damage        = DWARVEN_MIGHTYCATAPULT_ROCK_DAMAGE	// Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
	    Radius        = DWARVEN_MIGHTYCATAPULT_DAMAGE_RADIUS 
	    DelayTime     = 0
	    DamageType    = SIEGE
	    DamageFXType  = BIG_ROCK
	    DeathType     = EXPLODED
	    DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    DamageScalar  = 50% ANY ENEMIES +INFANTRY
	    DamageScalar  = 50% ANY ENEMIES +CAVALRY 
	End

	// A basic Nugget that just does damage
	DamageNugget                        
	    Damage        	= DWARVEN_MIGHTYCATAPULT_FLAME_DAMAGE
	    Radius        	= DWARVEN_MIGHTYCATAPULT_DAMAGE_RADIUS 
	    DelayTime     	= 0
	    DamageType    	= FLAME
	    DamageFXType  	= BIG_ROCK
	    DeathType     	= BURNED
	    AcceptDamageAdd = No
	    DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    DamageScalar  = 50% ANY ENEMIES +INFANTRY
	    DamageScalar  = 50% ANY ENEMIES +CAVALRY 
	End
End

;//---------------------------------- STRUCTURAL CATAPULT WEAPONS -------------
;--------------------------- For teh balance stuff! ---------------------------

//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved catapult can attack
Weapon DwarvenCatapultExpansionWeapon		
	AttackRange					= DWARVEN_CATAPULT_ROCK_RANGE
	MinimumAttackRange			= DWARVEN_CATAPULT_ROCK_MINRANGE
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= DWARVEN_CATAPULT_ROCK_DELAYBETWEENSHOTS  
	PreAttackDelay				= DWARVEN_CATAPULT_ROCK_PREATTACKDELAY
	FiringDuration      		= DWARVEN_CATAPULT_ROCK_FIRINGDURATION
	AcceptableAimDelta			= DWARVEN_CATAPULT_EXPANSION_AIM_DELTA  
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End

;------------------------------------------------------------------------------

Weapon DwarvenGuardianThrowingAxe
	AttackRange         = DWARVEN_AXETHROWER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_AXETHROWER_RANGE .003 )
	
	WeaponSpeed			= 120 ;321         ; dist/sec 
	MinWeaponSpeed      = 120
	MaxWeaponSpeed      = 300      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_DwarfAxeThrowerWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 80     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	PreAttackRandomAmount     = 400  

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	PreAttackType       = PER_SHOT
	PreAttackDelay      = 200 ; time from start of anim to axe release
	FiringDuration      = 2000 ; duration of firing cycle
	DelayBetweenShots   = DWARVEN_AXETHROWER_DELAYBETWEENSHOTS;
	CanFireWhileMoving	= No
  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = DwarvenAxe
		WarheadTemplateName     = DwarvenAxeThrowWarhead
		ForbiddenUpgradeNames   = Upgrade_DwarvenForgedBlades
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = DwarvenAxeForgedBlade
		WarheadTemplateName     = DwarvenAxeThrowWarhead
		RequiredUpgradeNames    = Upgrade_DwarvenForgedBlades
	End
End

Weapon DwarvenGuardianThrowingAxeBombard
	AttackRange         = DWARVEN_AXETHROWER_BOMBARD_MAXRANGE
	MinimumAttackRange  = #SUBTRACT( DWARVEN_AXETHROWER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_AXETHROWER_BOMBARD_MAXRANGE .003 )
	
	WeaponSpeed			= 150 ;321         ; dist/sec 
	MinWeaponSpeed      = 80
	MaxWeaponSpeed      = 300      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_DwarfAxeThrowerWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 0     ;Always scatter
	ScatterRadius       = ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	PreAttackType       = PER_SHOT
	PreAttackDelay      = 666 ; time from start of anim to axe release
	FiringDuration      = 2500 ; duration of firing cycle
	DelayBetweenShots   = DWARVEN_AXETHROWER_DELAYBETWEENSHOTS;
	CanFireWhileMoving	= No
  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	NoVictimNeeded			= Yes
	BombardType				= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = DwarvenAxeBombard
		WarheadTemplateName     = DwarvenAxeThrowBombardWarhead
	End
End

;------------------------------------------------------------------------------

Weapon DwarvenBattleWagonAxeThrowerWeapon
	AttackRange         = DWARVEN_AXETHROWER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_AXETHROWER_RANGE .003 )
	
	WeaponSpeed			= 120 ;321         ; dist/sec 
	MinWeaponSpeed      = 120
	MaxWeaponSpeed      = 300      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_DwarfAxeThrowerWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 80     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	PreAttackRandomAmount     = 400  

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	PreAttackType       = PER_SHOT
	PreAttackDelay      = 666 ; time from start of anim to axe release
	FiringDuration      = 2000 ; duration of firing cycle
	DelayBetweenShots   = DWARVEN_AXETHROWER_DELAYBETWEENSHOTS;
	CanFireWhileMoving	= Yes
  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = DwarvenAxe
		WarheadTemplateName     = DwarvenAxeThrowWarhead
	End
End

;//------------------------------------------------------------------------------
Weapon DwarvenGuardianAxe
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = DWARVEN_GUARDIAN_AXE_DELAYBETWEENSHOTS  ; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = DWARVEN_GUARDIAN_AXE_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = DWARVEN_GUARDIAN_AXE_FIRINGDURATION    ; Duration of the sword swing

	; base damage against everything, siegehammer or forgedblades not present
	DamageNugget
		Damage					= DWARVEN_GUARDIAN_AXE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= SLASH
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
		ForbiddenUpgradeNames	= Upgrade_DwarvenSiegeHammer
	End
  
	; base damage against units, siege hammer present
	DamageNugget
		Damage					= DWARVEN_GUARDIAN_AXE_SIEGEHAMMER_VS_UNIT
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= SLASH
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
		SpecialObjectFilter		= ALL -STRUCTURE
		RequiredUpgradeNames	= Upgrade_DwarvenSiegeHammer
	End

	; base damage against structures, siege hammer present
	DamageNugget
		Damage					= DWARVEN_GUARDIAN_AXE_SIEGEHAMMER_VS_STRUCTURE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= SLASH
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
		SpecialObjectFilter		= NONE +STRUCTURE
		RequiredUpgradeNames	= Upgrade_DwarvenSiegeHammer
	End

	; forged blade increment, add this damage to everything we attack
	DamageNugget
		Damage					= DWARVEN_GUARDIAN_AXE_UPGRADE_INCREMENT
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
		RequiredUpgradeNames	= Upgrade_DwarvenForgedBlades
	End
End


;//------------------------------------------------------------------------------
Weapon DwarvenPhalanxPike     ;// BALANCE Dwarven Phalanx Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 36
  MeleeWeapon           = Yes	;// Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots     = DWARVEN_PHALANX_STAB_DELAYBETWEENSHOTS				;// time between shots, msec
  PreAttackDelay        = DWARVEN_PHALANX_STAB_PREATTACKDELAY				
  PreAttackType         = PER_SHOT			;// Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = DWARVEN_PHALANX_STAB_FIRINGDURATION				
  
	DamageNugget								;// A basic Nugget that just does damage
		Damage        					= DWARVEN_PHALANX_STAB_DAMAGE
		DamageType    					= SPECIALIST
		DamageFXType  					= SWORD_SLASH
		DeathType     					= NORMAL		
		ForbiddenUpgradeNames			= Upgrade_DwarvenForgedBlades ;// Need to replace with Dwarven equivalent
		FlankingBonus = 50%
	End

	DamageNugget								;// A basic Nugget that just does damage
		Damage        					= DWARVEN_PHALANX_DAMAGE_UPGRADE
		DamageType    					= SPECIALIST
		DamageFXType  					= SWORD_SLASH
		DeathType     					= NORMAL
		FlankingBonus = 50%		
		RequiredUpgradeNames			= Upgrade_DwarvenForgedBlades ;// Need to replace with Dwarven equivalent
	End
End
;//------------------------------------------------------------------------------
Weapon DwarvenZerkerAxe
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = DWARVEN_ZERKER_AXE_DELAYBETWEENSHOTS  ; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = DWARVEN_ZERKER_AXE_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = DWARVEN_ZERKER_AXE_FIRINGDURATION    ; Duration of the sword swing

	; base damage against everything, siegehammer or forgedblades not present
	DamageNugget
		Damage					= DWARVEN_ZERKER_AXE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force 
		HeroResist	  = .5
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 10.0
		ShockWaveTaperOff = 0.75
	    	ShockWaveZMult    = 1.2
	End
  
End

;//------------------------------------------------------------------------------
Weapon DwarvenDainAxe  ;// BALANCE Dain Axe Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2					;// dist/sec (huge value == effectively instant)
  DelayBetweenShots     = DAIN_DELAYBETWEENSHOTS 	;// time between shots, msec
  PreAttackDelay        = DAIN_PREATTACKDELAY 		;// 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT					;// Do the delay each time we attack a new target
  FiringDuration        = DAIN_FIRINGDURATION 		;// min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = DAIN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End


;//------------------------------------------------------------------------------
Weapon YurgHorn		;//Used by the BattleWagon
  LeechRangeWeapon		= Yes
  AttackRange           = 0.0
  MeleeWeapon           = Yes
  FireFX                = FX_YurgHornAttackImpactSound
  DelayBetweenShots     = DWARVEN_BATTLEWAGON_DELAYBETWEENSHOTS
  PreAttackDelay        = DWARVEN_BATTLEWAGON_PREATTACKDELAY	;// 1467 is the prep time for archer.
  PreAttackType         = PER_SHOT								;// Do the delay each time we attack a new target
  FiringDuration        = DWARVEN_BATTLEWAGON_FIRINGDURATION    ;// Duration of the archer firing shot is 500ms.

  DamageNugget                        ;// A basic Nugget that just does damage
    Damage        = DWARVEN_BATTLEWAGON_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    ;DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 300%
  End
End

;//------------------------------------------------------------------------------
Weapon DwarvenBattleWagonPassengerPike      ;// BALANCE BattleWagon Pike Weapon
	AttackRange               	= DWARVEN_BATTLEWAGON_PASSENGER_RANGE
	WeaponSpeed               	= 321       ;// dist/sec 
	MinWeaponSpeed            	= 241
	MaxWeaponSpeed            	= 481		;// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	AcceptableAimDelta			= 180
	FireFX						= FX_GondorSwordHit	
	HitPercentage             	= 100		;//When this weapon is used it will hit exactly 50% of the time.	
	DelayBetweenShots         	= DWARVEN_BATTLEWAGON_PASSENGER_DELAYBETWEENSHOTS
	PreAttackDelay            	= DWARVEN_BATTLEWAGON_PASSENGER_PREATTACKDELAY	
	PreAttackType             	= PER_SHOT	;// Do the delay each time we attack a new target
	FiringDuration            	= DWARVEN_BATTLEWAGON_PASSENGER_FIRINGDURATION    ;// Duration of the archer firing shot is 500ms.
	CanFireWhileMoving		  	= Yes	
	CanBeDodged					= No

  	ProjectileNugget
		ProjectileTemplateName    = BattleWagonArrow
    	WarheadTemplateName     = DwarvenBattleWagonPassengerPikeWarhead
    	;ForbiddenUpgradeNames     = Upgrade_DwarvenForgedBlade
  	End
  	 
  	;ProjectileNugget                    ; Default arrow
	;	ProjectileTemplateName    = BattleWagonArrow
	;	RequiredUpgradeNames      = Upgrade_DwarvenForgedBlade
	;End

End

;//-----------------------------------
Weapon DwarvenBattleWagonPassengerPikeWarhead
	RadiusDamageAffects		= ENEMIES
	HitStoredTarget			= Yes	;// Always hits initial target.
	DamageNugget                    ;// A basic Nugget that just does damage
	    Damage			= DWARVEN_BATTLEWAGON_PASSENGER_DAMAGE			
		Radius			= 0.0	;// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime		= 0
	    DamageType		= SLASH	
	    DamageFXType	= SWORD_SLASH
	    DeathType		= NORMAL
  	End
End
;//------------------------------------------------------------------------------
Weapon DwarvenBattleWagonPassengerPikeUpgraded      ;// BALANCE BattleWagon Pike Weapon
	AttackRange               	= DWARVEN_BATTLEWAGON_PASSENGER_RANGE
	WeaponSpeed               	= 321       ;// dist/sec 
	MinWeaponSpeed            	= 241
	MaxWeaponSpeed            	= 481		;// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	AcceptableAimDelta			= 180
	FireFX						= FX_GondorSwordHit	
	HitPercentage             	= 100		;//When this weapon is used it will hit exactly 50% of the time.	
	DelayBetweenShots         	= DWARVEN_BATTLEWAGON_PASSENGER_DELAYBETWEENSHOTS
	PreAttackDelay            	= DWARVEN_BATTLEWAGON_PASSENGER_PREATTACKDELAY	
	PreAttackType             	= PER_SHOT	;// Do the delay each time we attack a new target
	FiringDuration            	= DWARVEN_BATTLEWAGON_PASSENGER_FIRINGDURATION    ;// Duration of the archer firing shot is 500ms.
	CanFireWhileMoving		  	= Yes	
	CanBeDodged					= No

	ProjectileNugget                    ; Default arrow
		ProjectileTemplateName    = BattleWagonArrow
		WarheadTemplateName     = DwarvenBattleWagonPassengerPikeWarheadUpgraded
		;RequiredUpgradeNames      = Upgrade_DwarvenForgedBlade
	End

End

;//-----------------------------------
Weapon DwarvenBattleWagonPassengerPikeWarheadUpgraded
	RadiusDamageAffects		= ENEMIES
	HitStoredTarget			= Yes	;// Always hits initial target.
	DamageNugget                    ;// A basic Nugget that just does damage
	    Damage			= DWARVEN_BATTLEWAGON_PASSENGER_DAMAGE_UPGRADED		
		Radius			= 0.0	;// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime		= 0
	    DamageType		= SLASH	
	    DamageFXType	= SWORD_SLASH
	    DeathType		= NORMAL
  	End
End

;------------------------------------------------------------------------------
Weapon GloinAxe  ; BALANCE Gimli Axe Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
  DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	; time between shots, msec
  PreAttackDelay        = GLOIN_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = GLOIN_FIRINGDURATION 		; min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = GLOIN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon DwarvenGloinSlamWeapon
	RadiusDamageAffects		= ENEMIES
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= 30.0
	MeleeWeapon			= Yes
	WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
	FireFX				= FX_GloinSlam
	DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay        = GLOIN_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration        = GLOIN_FIRINGDURATION 		; min 600 for anim
	DamageDealtAtSelfPosition = Yes				; A melee based AoE.  Arc radiates from me, not them

	; Crush damage.
	DamageNugget								; A basic Nugget that just does damage
		Damage			= GLOIN_SLAM_DAMAGE
		Radius			= 50.0
		DamageArc		= 75
		DelayTime		= 0
		DamageType		= CRUSH
		DamageFXType	= MAGIC
		DeathType		= NORMAL
		CylinderAOE		= Yes
		DamageMaxHeight	= 50
	End

	; SIEGE damage. - Changing all structural to siege damage. -GB
	DamageNugget								; A basic Nugget that just does damage
		Damage			= GLOIN_SLAM_DAMAGE_STRUCTURAL
		Radius			= 50.0
		DamageArc		= 75
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType	= MAGIC
		DeathType		= NORMAL
		CylinderAOE		= Yes
		DamageMaxHeight	= 50
	End

	; Push back
	MetaImpactNugget							; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 50
		ShockWaveRadius		= 45
		ShockWaveArc		= 75				; Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

;------------------------------------------------------------------------------
Weapon DwarvenGloinShakeFoundationWeapon
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= 30.0
	AntiStructure         = Yes                                      ; ShakeFoundation ONLY affects structures -- buildings, walls, gates
	AntiGround            = No                                       ; ditto
	MeleeWeapon			= Yes
	WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
	FireFX				= FX_GloinShake
	DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay        = GLOIN_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration        = GLOIN_FIRINGDURATION 		; min 600 for anim

	; Structural damage.
	DamageNugget								; A basic Nugget that just does damage
		Damage			= GLOIN_SHAKEFOUNDATION_DAMAGE
		DamageScalar  		= 50% NONE +COMMANDCENTER
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType		= MAGIC
		DeathType		= NORMAL
	End

	; Temporarily disable the target building
	ParalyzeNugget
		Radius			= 0.0
		Duration		= 30000
		ParalyzeFX			= FX_ParalyzeStructure
	End

	; Force open any gate hit by this (which will also be paralyzed, so it will be stuck open for the duration)
	OpenGateNugget
		Radius			= 0.0
	End
End

;------------------------------------------------------------------------------
Weapon GloinSmashWeapon ; Big Blue Ring Blast
	IdleAfterFiringDelay = 0
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               ; time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
	PreAttackFX           = FX_GloinShatterPre
	FireFX                = FX_GloinShatterhammer
	FiringDuration      = 1400
	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= GANDALF_WORD_OF_POWER_DAMAGE
		Radius			= GLOIN_SMASH_WEAPON_RADIUS
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 ; must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount   = 70.0
		ShockWaveRadius   = 500.0
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End

;------------------------------------------------------------------------------
Weapon DwarvenBatteringRam ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE		   ; Note - needs to be at least 30 to approach walls at a 45 degree angle to path grid. 
	AntiStructure         = Yes                                      ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No                                       ; ditto
	MeleeWeapon           = Yes										; Try Melee to get close to door
	AcceptableAimDelta    = 20                                       ; Can't ram sideways (but give a little slack)
	DelayBetweenShots     = DWARVEN_BATTERINGRAM_DELAYBETWEENSHOTS  ; time between shots, msec. 
	PreAttackDelay        = DWARVEN_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT                                 ; Do the delay each time we attack
	FiringDuration        = DWARVEN_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHit
	LeechRangeWeapon      = Yes

	DamageNugget
		Damage        = DWARVEN_BATTERINGRAM_DAMAGE
		Radius        = 0.0										; Contact of nose.  Preattack is being used by trolls putting hands on ram
		DamageType    = SIEGE
		DeathType     = NORMAL
	End
End

;------------------------------------------------------------------------------
Weapon DwarvenBatteringRamGate ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = 58.0 ; Make sure this is greater than the distance between obj center and the Ram contact points in the gate
	AntiStructure         = Yes       									     ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No        									     ; ditto
	MeleeWeapon           = Yes											   ; Try Melee to get close to door
	AcceptableAimDelta    = 20        									     ; Can't ram sideways (but give a little slack)
	DelayBetweenShots     = DWARVEN_BATTERINGRAM_DELAYBETWEENSHOTS           ; time between shots, msec. 
	PreAttackDelay        = DWARVEN_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT										; Do the delay each time we attack
	FiringDuration        = DWARVEN_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHitGate
	LeechRangeWeapon      = Yes

	DamageNugget
		Damage        = DWARVEN_BATTERINGRAM_DAMAGE
		Radius        = 0.0
		DamageType    = SIEGE
		DeathType     = NORMAL
	End
End


;------------------------------------------------------------------------------
Weapon DwarvenBatteringRamWall ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = 20.0
	AntiStructure         = Yes      										  ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No       										  ; ditto
	MeleeWeapon           = Yes												 ; Try Melee to get close to door
	AcceptableAimDelta    = 40       										  ; give a lot of slack !!!!!!!!!!!!!!!! 
	DelayBetweenShots     = DWARVEN_BATTERINGRAM_DELAYBETWEENSHOTS           ; time between shots, msec. 
	PreAttackDelay        = DWARVEN_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT									; Do the delay each time we attack
	FiringDuration        = DWARVEN_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHitGate
	LeechRangeWeapon      = Yes

	DamageNugget
		Damage        = DWARVEN_BATTERINGRAM_DAMAGE
		Radius        = 0.0
		DamageType    = SIEGE
		DeathType     = NORMAL
	End
End


;------------------------------------------------------------------------------
Weapon DwarvenFortressOilCasksWeapon
	IdleAfterFiringDelay	= 0
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR
	WeaponSpeed				= 75         
	DelayBetweenShots		= 5000					// time between shots, msec
	PreAttackDelay			= 700
	PreAttackType			= PER_ATTACK			// Do the delay each time we attack a new target
	//PreAttackFX				= FX_GandalfPreAttackBlast
	//FireFX					= FX_GandalfBlast
	
	// A basic Nugget that just does damage
	DamageNugget                        
		Damage			= 600
		Radius			= 200.0
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		DamageScalar	= 0% NONE +DwarvenCatapultFortress
	End

	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= 70.0
		Damage			= 20
	End	

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 100.0
		Damage			= 40
		MinMaxBurnRate	= 20
		MinDecay		= 1
		MaxResistance	= 0
	End	
	
	//Oil Cask Projectiles
	ProjectileNugget                    
		ProjectileTemplateName			= OilCaskProjectileProjectile 
		WarheadTemplateName				= OilCaskWarhead
		WeaponLaunchBoneSlotOverride	= SECONDARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:40 Y:75 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
	ProjectileNugget                    
		ProjectileTemplateName			= OilCaskProjectileProjectile 
		WarheadTemplateName				= OilCaskWarhead
		WeaponLaunchBoneSlotOverride	= TERTIARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:40 Y:-75 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
	ProjectileNugget                    
		ProjectileTemplateName			= OilCaskProjectileProjectile 
		WarheadTemplateName				= OilCaskWarhead
		WeaponLaunchBoneSlotOverride	= QUATERNARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:-40 Y:75 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
	ProjectileNugget                    
		ProjectileTemplateName			= OilCaskProjectileProjectile 
		WarheadTemplateName				= OilCaskWarhead
		WeaponLaunchBoneSlotOverride	= QUINARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:-40 Y:-75 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
End

//-----------------------------------
Weapon OilCaskWarhead
	ProjectileCollidesWith	= MONSTERS	STRUCTURES			// Structures is the default, btw.
	RadiusDamageAffects		= ENEMIES ALLIES NOT_SIMILAR
End



;----------------------------------------------------------------------------------

Weapon DwarvenMissileHordeRangefinder
	AttackRange			= #SUBTRACT( DWARVEN_AXETHROWER_RANGE 100 )  ;;;; 300 is too far! 220.0 ; Slightly shorter than the archer's actual weapon
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_AXETHROWER_RANGE .003 )
	
	DelayBetweenShots		= 1000 ;1500
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	HordeAttackNugget
	End
End

Weapon DwarvenMissileHordeRangefinderBombard
	AttackRange			= #SUBTRACT( DWARVEN_AXETHROWER_BOMBARD_MAXRANGE 100 ) 
	MinimumAttackRange		= DWARVEN_AXETHROWER_BOMBARD_MINRANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( DWARVEN_AXETHROWER_BOMBARD_MAXRANGE .003 )
	
	DelayBetweenShots		= 1000 ;1500
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	NoVictimNeeded			= Yes
	BombardType				= Yes	
	ScatterRadius			= ARCHER_BOMBARD_SCATTER_RADIUS		; Only used for cursor radius
	HordeAttackNugget
	End
End