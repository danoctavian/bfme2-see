/////////////////
// WEAPON.INC //
///////////////
//Isengard//
///////////


;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
;  Isengard
;
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon IsengardArcherHordeRangeFinder
	AttackRange				= #SUBTRACT( ISENGARD_URUKCROSSBOW_RANGE 100 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_RANGE .003 )
	
	LeechRangeWeapon		= Yes
	DelayBetweenShots		= 1500
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	CanFireWhileMoving		= No
	HordeAttackNugget
	End
End

Weapon IsengardArcherHordeRangeFinderBombard
	AttackRange				= #SUBTRACT( ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE 100 )
	MinimumAttackRange		= ISENGARD_URUKCROSSBOW_BOMBARD_MINRANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE .003 )
	
	LeechRangeWeapon		= Yes
	DelayBetweenShots		= 1500
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	CanFireWhileMoving		= No
	NoVictimNeeded			= Yes
	BombardType				= Yes
	ScatterRadius			= ARCHER_BOMBARD_SCATTER_RADIUS		; Only used for cursor radius
	HordeAttackNugget
	End
End

;------------------------------------------------------------------------------
Weapon IsengardArcherBow         ; BALANCE Archer Weapon
  AttackRange				= ISENGARD_URUKCROSSBOW_RANGE 
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_RANGE .003 )
	
	
  LeechRangeWeapon		    = Yes
  WeaponSpeed				= 321         ; dist/sec 
  MinWeaponSpeed			= 61
  MaxWeaponSpeed			= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range    
  FireFX = FX_RohanArcherBowWeapon 
  ScaleWeaponSpeed			= Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage				= 100     ;When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius				= 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
  PreAttackRandomAmount 	= 200     ; amount of additional preattack variance for archer type attacks only 
  DelayBetweenShots			= ISENGARD_URUKCROSSBOW_DELAYBETWEENSHOTS 	; time between shots, msec
  PreAttackDelay			= ISENGARD_URUKCROSSBOW_PREATTACKDELAY 	; 733 is the prep time for archer.
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration			= ISENGARD_URUKCROSSBOW_FIRINGDURATION 		; Duration of the archer firing shot is 500ms.
  CanFireWhileMoving		= No
  IsAimingWeapon            = Yes
  
  AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde
  AntiAirborneVehicle		= Yes
  AntiAirborneMonster		= Yes

  CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

  ProjectileNugget                    ; Default arrow
    ProjectileTemplateName    = GoodFactionArrow
    WarheadTemplateName       = IsengardArcherBowWarhead
    ForbiddenUpgradeNames     = Upgrade_IsengardFireArrows
  End

  ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
    ProjectileTemplateName    = GoodFactionFireArrow
    WarheadTemplateName       = IsengardArcherBowFireWarhead
    RequiredUpgradeNames      = Upgrade_IsengardFireArrows
  End

End

Weapon IsengardArcherBowBombard         ; BALANCE Archer Weapon
  AttackRange				= ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE
  MinimumAttackRange		= #SUBTRACT( ISENGARD_URUKCROSSBOW_BOMBARD_MINRANGE 75 )
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE .003 )
	
	
  LeechRangeWeapon		    = Yes
  WeaponSpeed				= 321         ; dist/sec 
  MinWeaponSpeed			= 61
  MaxWeaponSpeed			= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range    
  FireFX = FX_RohanArcherBowWeapon 
  ScaleWeaponSpeed			= Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage				= 0     ;Always scatter
  ScatterRadius				= ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
  PreAttackRandomAmount 	= 200     ; amount of additional preattack variance for archer type attacks only 
  DelayBetweenShots			= ISENGARD_URUKCROSSBOW_DELAYBETWEENSHOTS 	; time between shots, msec
  PreAttackDelay			= ISENGARD_URUKCROSSBOW_PREATTACKDELAY 	; 733 is the prep time for archer.
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration			= ISENGARD_URUKCROSSBOW_FIRINGDURATION 		; Duration of the archer firing shot is 500ms.
  CanFireWhileMoving		= No
  IsAimingWeapon            = Yes
  
  AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde
  AntiAirborneVehicle		= Yes
  AntiAirborneMonster		= Yes

  CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
  
  NoVictimNeeded			= Yes
	BombardType				= Yes

  ProjectileNugget                    ; Default arrow
    ProjectileTemplateName    = GoodFactionArrowBombard
    WarheadTemplateName       = IsengardArcherBowBombardWarhead
    ForbiddenUpgradeNames     = Upgrade_IsengardFireArrows
  End

  ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
    ProjectileTemplateName    = GoodFactionFireArrowBombard
    WarheadTemplateName       = IsengardArcherBowBombardFireWarhead
    RequiredUpgradeNames      = Upgrade_IsengardFireArrows
  End

End


;------------------------------------------------------------------------------
Weapon IsengardArcherBowFireArrow       ; BALANCE Archer Weapon
	AttackRange               = ISENGARD_URUKCROSSBOW_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_RANGE .003 )
	
	
	WeaponSpeed               = 321         ; dist/sec 
	MinWeaponSpeed            = 241
	MaxWeaponSpeed            = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX                    = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed          = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage             = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius             = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots         = ISENGARD_URUKCROSSBOW_DELAYBETWEENSHOTS
	PreAttackDelay            = ISENGARD_URUKCROSSBOW_PREATTACKDELAY    ; 1467 is the prep time for archer.
	PreAttackRandomAmount     = 200    ; amount of additional preattack variance for archer type attacks only  
	PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration            = ISENGARD_URUKCROSSBOW_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
	CanFireWhileMoving		  = No	
	IsAimingWeapon            = Yes
	
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde

  	CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	DamageType				  = FLAME

  	ProjectileNugget          ; Fire arrow available through fire upgrade
    	ProjectileTemplateName  = GoodFactionFireArrow
    	WarheadTemplateName     = IsengardArcherBowFireWarhead
  	End
End

Weapon IsengardArcherBowBombardFireArrow       ; BALANCE Archer Weapon
	AttackRange               = ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE
	MinimumAttackRange        = #SUBTRACT( ISENGARD_URUKCROSSBOW_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_URUKCROSSBOW_BOMBARD_MAXRANGE .003 )
	
	
	WeaponSpeed               = 321         ; dist/sec 
	MinWeaponSpeed            = 241
	MaxWeaponSpeed            = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX                    = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed          = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage             = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius             = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots         = ISENGARD_URUKCROSSBOW_DELAYBETWEENSHOTS
	PreAttackDelay            = ISENGARD_URUKCROSSBOW_PREATTACKDELAY    ; 1467 is the prep time for archer.
	PreAttackRandomAmount     = 200    ; amount of additional preattack variance for archer type attacks only  
	PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration            = ISENGARD_URUKCROSSBOW_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
	CanFireWhileMoving		  = No	
	IsAimingWeapon            = Yes
	
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde

  	CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
  	
  	NoVictimNeeded			= Yes
	BombardType				= Yes	
	DamageType				  = FLAME

  	ProjectileNugget          ; Fire arrow available through fire upgrade
    	ProjectileTemplateName  = GoodFactionFireArrow
    	WarheadTemplateName     = IsengardArcherBowBombardFireWarhead
  	End
End

;-----------------------------------
Weapon IsengardArcherBowWarhead
	RadiusDamageAffects = ENEMIES
	HitStoredTarget = Yes	; Always hits initial target.
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ISENGARD_URUKCROSSBOW_DAMAGE			
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = EVIL_ARROW_PIERCE
	    DeathType     = NORMAL
  	End
End

Weapon IsengardArcherBowBombardWarhead
	RadiusDamageAffects = ENEMIES
	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ISENGARD_URUKCROSSBOW_DAMAGE			
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = EVIL_ARROW_PIERCE
	    DeathType     = NORMAL
  	End
End


Weapon IsengardArcherBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_URUKCROSSBOW_DAMAGE_UPGRADE_FLAME
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
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_URUKCROSSBOW_DAMAGE_UPGRADE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	End
End

Weapon IsengardArcherBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_URUKCROSSBOW_DAMAGE_UPGRADE_FLAME
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = BURNED
		AcceptDamageAdd = No
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
		Damage        = ISENGARD_URUKCROSSBOW_DAMAGE_UPGRADE
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
Weapon IsengardBannerSword  ; BALANCE Banner Urak-hai Sword Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ISENGARD_URUKFIGHTER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = ISENGARD_URUKFIGHTER_PREATTACKDELAY             ; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ISENGARD_URUKFIGHTER_FIRINGDURATION            ; min 600 for anim
  FireFX                    = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_URUKFIGHTER_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End



;------------------------------------------------------------------------------
Weapon IsengardBannerSwordUpgrade  ; BALANCE Banner Urak-hai Sword Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = 1200            ; time between shots, msec
  PreAttackDelay        = 567             ; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 633            ; min 600 for anim
  FireFX                    = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_URUKFIGHTER_DAMAGE_UPGRADE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End


;------------------------------------------------------------------------------
Weapon IsengardExplosiveMineDroppingWeapon   ; BALANCE Mine Weapon
	AttackRange           = 15.0
	MeleeWeapon           = Yes; Melee should work now, and you get Bomb too. 10/30/2004; so the demo team will seek the melee contact point "Bomb"
	DelayBetweenShots     = 3000            ; time between shots, msec
	PreAttackDelay        = 1466             ; 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration        = 733            ; min 600 for anim
	AcceptableAimDelta    = 15             ; Give it a little leeway

	SpawnAndFadeNugget	
		ObjectTargetFilter = ANY +STRUCTURE +INFANTRY +CAVALRY +MONSTER -ROCK_VENDOR; Used to have no check at all, so just do a basic "game unit" check to keep out rocks and such
		SpawnedObjectName = IsengardDeployedExplosiveMine
		SpawnOffset = X:8 Y:1 Z:0
	End
End

;------------------------------------------------------------------------------
Weapon IsengardExplosiveMineDroppingWeaponPosition			; BALANCE Mine Weapon
	AttackRange				= 15.0
	MeleeWeapon				= No
	DelayBetweenShots			= 3000				; time between shots, msec
	PreAttackDelay			= 1466				; 433 is natural time of the stabbing animation.
	PreAttackType			= PER_SHOT				; Do the delay each time we attack a new target
	FiringDuration			= 733					; min 600 for anim
	AcceptableAimDelta		= 15					; Give it a little leeway
	NoVictimNeeded			= Yes					; Need no target
	OverrideVoiceAttackSound	= ExplosiveMineVoiceDeploy	;Play Special "leave it there voice"

	SpawnAndFadeNugget	
		ObjectTargetFilter = ANY +STRUCTURE +INFANTRY +CAVALRY +MONSTER -ROCK_VENDOR; And funny thing, even though this has Position in the name, nothing actually makes it be Position based.  So when the object one fails on a rock, this one get picked.  So filter goes here too.
		SpawnedObjectName = IsengardDeployedExplosiveMine
		SpawnOffset = X:8 Y:1 Z:0
	End
End

;------------------------------------------------------------------------------
Weapon IsengardExplosiveMineExplosionWeapon   ; BALANCE Mine Weapon
	AttackRange           = 4.0
	DelayBetweenShots     = 2000            ; time between shots, msec
	FireFX                = FX_ExplosiveMine
	RadiusDamageAffects = ALLIES ENEMIES NEUTRALS SELF ; SELF so mine affects siegeworks that made it 

	; The highly destructive exposion that destroys everything. Consentrated to a small radius
	; so that it doesn't destroy objects with awkward bounding boxes, like walls.
	DamageNugget
		Damage        = ISENGARD_EXPLOSIVEMINE_MAIN_DAMAGE
		Radius        = 125.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +HelmsDeepCulvert ; Make sure we one shot kill Culvert but Ballista have to shoot alot
	End

	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 90.0		
		ShockWaveRadius   = 125.0
		ShockWaveTaperOff = 0.66
	End
End

;------------------------------------------------------------------------------
Weapon IsengardBurningPileofLeavesWeapon   ; BALANCE Level Effects
	AttackRange           = 4.0
	DelayBetweenShots     = 2000            ; time between shots, msec
	FireFX                = FX_LeafPileFire

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 200
		Radius        = 75.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = FLAME
		DeathType     = BURNED
		DamageScalar  = 50000% NONE +HelmsDeepCulvert ; Make sure we one shot kill Culvert but Ballista have to shoot alot
	End
	
;	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
;		ShockWaveAmount   = 50.0		
;		ShockWaveRadius   = 75.0
;		ShockWaveTaperOff = 0.5
;	End
End

;------------------------------------------------------------------------------
Weapon IsengardFanaticSword   ; BALANCE Berserker Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ISENGARD_FANATIC_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = ISENGARD_FANATIC_PREATTACKDELAY             ; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ISENGARD_FANATIC_FIRINGDURATION            ; min 600 for anim
  FireFX                = FX_GondorSwordHit
  

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_FANATIC_DAMAGE
    Radius        = ISENGARD_FANATIC_RADIUS
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageArc	  = ISENGARD_FANATIC_ARC
  End	

  MetaImpactNugget      ; A Nugget that throws things back with force
    ShockWaveAmount   = 20.0
    ShockWaveRadius   = 10.0
    ShockWaveTaperOff = 1.0
    ShockWaveArc      = 90
    HeroResist		  = 0.90		; 90% resistance to heroes
  End


End

;------------------------------------------------------------------------------
Weapon IsengardFanaticDeathWishSword   ; BALANCE Berserker Weapon
  LeechRangeWeapon      = Yes
  RadiusDamageAffects = ENEMIES SELF
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ISENGARD_FANATIC_DEATH_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = ISENGARD_FANATIC_PREATTACKDELAY             ; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ISENGARD_FANATIC_FIRINGDURATION            ; min 600 for anim
  FireFX                = FX_GondorSwordHit
  

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_FANATIC_DEATH_DAMAGE
    Radius        = ISENGARD_FANATIC_RADIUS
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageArc	  = ISENGARD_FANATIC_ARC
    DamageScalar  = 10% NONE +IsengardFanatic
  End	

;  MetaImpactNugget      ; A Nugget that throws things back with force
;    ShockWaveAmount   = 20.0
;    ShockWaveRadius   = 10.0
;    ShockWaveTaperOff = 1.0
;    ShockWaveArc      = 90
;    HeroResist		  = 0.90 ; 90% resistance to heroes
;  End
End

;------------------------------------------------------------------------------
Weapon IsengardBerserkerSword   ; BALANCE Berserker Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ISENGARD_BERSERKER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        = ISENGARD_BERSERKER_PREATTACKDELAY             ; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ISENGARD_BERSERKER_FIRINGDURATION            ; min 600 for anim
  FireFX                = FX_GondorSwordHit
  

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_BERSERKER_DAMAGE
    Radius        = ISENGARD_BERSERKER_RADIUS
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageArc	  = ISENGARD_BERSERKER_ARC
  End	

;  MetaImpactNugget      ; A Nugget that throws things back with force
;    ShockWaveAmount   = 20.0
;    ShockWaveRadius   = 10.0
;    ShockWaveTaperOff = 1.0
;    ShockWaveArc      = 90
;    HeroResist		  = 0.90		; 90% resistance to heroes
;  End


End

;------------------------------------------------------------------------------
Weapon IsengardBerserkerTorch   ; BALANCE Berserker Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = 10000 ; This shot will kill us, btw.
  PreAttackDelay        = 1666
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 100           

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = 25	; uped to 25 so that it can light ents on fire
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = FLAME
    DamageFXType  = FLAME
	DeathType     = BURNED
	DamageScalar  = 200000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
  End
  
	FireLogicNugget
		LogicType	= INCREASE_BURN_RATE
		Radius		= 0.0
		Damage		= 25
	End
End

;------------------------------------------------------------------------------
Weapon IsengardPikemanPike     ; BALANCE Isengard Pikeman Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 35
  MeleeWeapon           = Yes	; Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots     = ISENGARD_URUKPIKEMAN_STAB_DELAYBETWEENSHOTS				; time between shots, msec
  PreAttackDelay        = ISENGARD_URUKPIKEMAN_STAB_PREATTACKDELAY				
  PreAttackType         = PER_SHOT			; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = ISENGARD_URUKPIKEMAN_STAB_FIRINGDURATION				
  
	DamageNugget								; A basic Nugget that just does damage
		Damage        = ISENGARD_URUKPIKEMAN_STAB_DAMAGE
		DamageType    = SPECIALIST
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		;LostLeadershipUselessAgainst = CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		ForbiddenUpgradeNames    = Upgrade_IsengardForgedBlades
		FlankingBonus = 50%
	End

	DamageNugget								; A basic Nugget that just does damage
		Damage        = ISENGARD_URUKPIKEMAN_DAMAGE_UPGRADE
		DamageType    = SPECIALIST
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		;LostLeadershipUselessAgainst = CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		RequiredUpgradeNames    = Upgrade_IsengardForgedBlades
		FlankingBonus = 50%
	End
End

//-----------------------------------
Weapon MineLauncherWeapon
	AttackRange					= ISENGARD_MINELAUNCHER_RANGE	
	WeaponSpeed					= 100										// dist/sec 
	MinWeaponSpeed				= 100
	FireFX						= FX_CatapultWeapon
	FXTrigger					= CATAPULT_ROCK	
	DelayBetweenShots			= ISENGARD_MINELAUNCHER_DELAYBETWEENSHOTS	// time between shots, msec	
	PreAttackDelay				= ISENGARD_MINELAUNCHER_PREATTACKDELAY
	PreAttackType				= PER_SHOT									// Do the delay each time we attack a new target
	FiringDuration				= ISENGARD_MINELAUNCHER_FIRINGDURATION		// Catapult firing animation takes 3.0 secs.	
	NoVictimNeeded				= Yes										// Need no target
	LeechRangeWeapon			= Yes
	AcceptableAimDelta			= 45
	  
	ScatterRadiusVsInfantry		= 40.0  
	
	HitPercentage       = 100		// always hits.
    
	ProjectileNugget					
		ProjectileTemplateName			= IsengardMineLauncherProjectile 
		WarheadTemplateName				= MineLauncherWarHead
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:150 Y:0 Z:0			//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
	ProjectileNugget                    
		ProjectileTemplateName			= IsengardMineLauncherProjectile 
		WarheadTemplateName				= MineLauncherWarHead
		WeaponLaunchBoneSlotOverride	= SECONDARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:130 Y:-100 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
	ProjectileNugget                    
		ProjectileTemplateName			= IsengardMineLauncherProjectile 
		WarheadTemplateName				= MineLauncherWarHead
		WeaponLaunchBoneSlotOverride	= TERTIARY
		UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
		AlwaysAttackHereOffset			= X:130 Y:100 Z:0		//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
End

;//-----------------------------------
Weapon MineLauncherWarHead
	ProjectileCollidesWith	= MONSTERS	STRUCTURES	// Structures is the default, btw.
	RadiusDamageAffects		= ENEMIES ALLIES NOT_SIMILAR

	;// The highly destructive exposion that destroys everything. Consentrated to a small radius
	;// so that it doesn't destroy objects with awkward bounding boxes, like walls.
	DamageNugget
		Damage        = ISENGARD_MINELAUNCHER_DAMAGE
		Radius        = ISENGARD_MINELAUNCHER_RADIUS
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = FLAME
		DeathType     = BURNED		
		DamageScalar  = 0% NONE +IsengardFortressCitadel +IsengardBallistaExpansion +IsengardTowerExpansion
	End

	MetaImpactNugget                    // A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount		= 50.0		
		ShockWaveRadius		= 30.0
		ShockWaveTaperOff	= 0.75
	End
End

;//------------------------------------------------------------------------------
Weapon WizardTowerLightningWeapon  ;// BALANCE WizardTowerLightning		
	AttackRange				= ISENGARD_WIZARDSTOWER_LIGHTNING_RANGE
	WeaponSpeed				= 900		;// dist/sec 
	HitPercentage			= 100		;// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots		= 500		;// time between shots, msec
	PreAttackDelay      	= 3000	
	PreAttackType       	= PER_ATTACK	;// Do the delay each time we attack a new target
	AcceptableAimDelta		= 0
	FireFX						= FX_WizardTowerClouds
	FiringDuration      	= 1
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes

    ProjectileNugget					
		ProjectileTemplateName			= WizardTowerProjectile 
		WarheadTemplateName				= WizardTowerWarHead
		WeaponLaunchBoneSlotOverride	= SECONDARY
	;	UseAlwaysAttackOffset			= Yes					//Causes project to always target an offset from the attacker
	;	AlwaysAttackHereOffset			= X:0 Y:0 Z:400			//Used with UseAlwaysAttackOffset, this specifies the offset from the attacker to strike
	End
End	
;---------------------------------------------------------------------------------------
Weapon WizardTowerWarHead

	ProjectileCollidesWith	= MONSTERS	STRUCTURES	// Structures is the default, btw.
	RadiusDamageAffects		= ENEMIES ALLIES NOT_SIMILAR

	// A Nugget that throws things back with force
	MetaImpactNugget                    ;// A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 150.0
		ShockWaveRadius		= ISENGARD_WIZARDSTOWER_LIGHTNING_SHOT_DMG_RADIUS
		ShockWaveTaperOff	= 0.2
		ShockWaveZMult		= 1.50		
		KillObjectFilter	= INSTANT_DEATH_ON_METAIMPACT_OBJFILTER
	End

	//Start a fire
	FireLogicNugget 
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	ISENGARD_WIZARDSTOWER_LIGHTNING_FIRE_RADIUS
		Damage		=	ISENGARD_WIZARDSTOWER_LIGHTNING_FIRE_START_RAD
	End

	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        		= ISENGARD_WIZARDSTOWER_LIGHTNING_DAMAGE_FLAME
		Radius				= ISENGARD_WIZARDSTOWER_LIGHTNING_SHOT_DMG_RADIUS    //Radius of damage			
		DamageType    		= FLAME
		DamageFXType  		= BOLT
		DeathType     		= NORMAL //BURNED
	End

	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        		= ISENGARD_WIZARDSTOWER_LIGHTNING_DAMAGE
		Radius				= ISENGARD_WIZARDSTOWER_LIGHTNING_SHOT_DMG_RADIUS    //Radius of damage			
		DamageType    		= MAGIC
		DamageFXType  		= BOLT
		DeathType     		= NORMAL //BURNED
	End
End



;------------------------------------------------------------------------------
Weapon IsengardBatteringRam ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = 10.0		   ; Note - needs to be at least 30 to approach walls at a 45 degree angle to path grid. 
	AntiStructure         = Yes                                      ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No                                       ; ditto
	MeleeWeapon           = Yes			                       ; Try Melee to get close to door
	AcceptableAimDelta    = 20                                       ; Can't ram sideways (but give a little slack)
	DelayBetweenShots     = ISENGARD_BATTERINGRAM_DELAYBETWEENSHOTS  ; time between shots, msec. 
	PreAttackDelay        = ISENGARD_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT                                 ; Do the delay each time we attack
	FiringDuration        = ISENGARD_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHit
	LeechRangeWeapon      = Yes

	DamageNugget                                                     ; A basic Nugget that just does damage
		Damage        = ISENGARD_BATTERINGRAM_DAMAGE
		Radius        = 0.0
		;DelayTime    = 2800				                 ; Contact of nose.  Preattack is being used by trolls putting hands on ram
		DamageType    = SIEGE
		DeathType     = NORMAL
		DamageScalar  = 0% NONE +HelmsDeepdoSectionB1 +HelmsDeepdoSectionA2 +HelmsDeepdoSectionD +HelmsDeepTower +HelmsDeepdoStairsA5 +HelmsDeepGatehouseRight +HelmsDeepGatehouseCenter +HelmsDeepGatehouseLeft +HelmsDeepdoSectionA5 +HelmsDeepdoStairsA4 +HelmsDeepkiSectionA3 +HelmsDeepRampart05 +HelmsDeepkiSectionA5 +HelmsDeepdiSectionA6 +HelmsDeepdiSectionA7 +HelmsDeepdiSectionA8 +HelmsDeepkiSectionB +HelmsDeepRampart04 +HelmsDeepRampart03 +HelmsDeepRampart02 +HelmsDeepdoStairsA1
	End
End

;------------------------------------------------------------------------------
Weapon IsengardBatteringRamGate ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = 58.0 ; Make sure this is greater than the distance between obj center and the Ram contact points in the gate
	AntiStructure         = Yes            ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No             ; ditto
	MeleeWeapon           = Yes			   ; Try Melee to get close to door
	AcceptableAimDelta    = 20             ; Can't ram sideways (but give a little slack)
	DelayBetweenShots     = ISENGARD_BATTERINGRAM_DELAYBETWEENSHOTS           ; time between shots, msec. 
	PreAttackDelay        = ISENGARD_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT       ; Do the delay each time we attack
	FiringDuration        = ISENGARD_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHitGate
	LeechRangeWeapon      = Yes

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_BATTERINGRAM_DAMAGE
		Radius        = 0.0
		;DelayTime     = 2800				; Contact of nose.  Preattack is being used by trolls putting hands on ram
		DamageType    = SIEGE
		DeathType     = NORMAL
	End
End


;------------------------------------------------------------------------------
Weapon IsengardBatteringRamWall ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	AttackRange           = 20.0
	AntiStructure         = Yes            ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No             ; ditto
	MeleeWeapon           = Yes			   ; Try Melee to get close to door
	AcceptableAimDelta    = 40             ; give a lot of slack !!!!!!!!!!!!!!!! 
	DelayBetweenShots     = ISENGARD_BATTERINGRAM_DELAYBETWEENSHOTS           ; time between shots, msec. 
	PreAttackDelay        = ISENGARD_BATTERINGRAM_PREATTACKDELAY        
	PreAttackType         = PER_SHOT       ; Do the delay each time we attack
	FiringDuration        = ISENGARD_BATTERINGRAM_FIRINGDURATION
	FireFX                = FX_BatteringRamHitGate
	LeechRangeWeapon      = Yes

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_BATTERINGRAM_DAMAGE
		Radius        = 0.0
		;DelayTime     = 2800				; Contact of nose.  Preattack is being used by trolls putting hands on ram
		DamageType    = SIEGE
		DeathType     = NORMAL
	End
End

;------------------------------------------------------------------------------
Weapon IsengardBatteringRamWithMine ; BALANCE Battering Ram
	CanFireWhileMoving    = No
	RadiusDamageAffects = ALLIES ENEMIES NEUTRALS SELF SUICIDE; Turning off friendly fire for all allies, but ya know, this could say NotSimilar and then he could hit friendlies except for trolls
	AttackRange           = 40.0
	AntiStructure         = Yes            ; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround            = No             ; ditto
	MeleeWeapon           = No	; Need to have some range to look right.
	AcceptableAimDelta    = 20             ; Can't ram sideways (but give a little slack)
	DelayBetweenShots     = 3000           ; time between shots, msec. 
	PreAttackDelay        = 1300        
	PreAttackType         = PER_SHOT       ; Do the delay each time we attack
	FiringDuration        = 1100      
	PassengerProportionalAttack = Yes  
	MaxAttackPassengers   = 4
	ProjectileFilterInContainer = NONE +MINE ; We don't make the projectile, it is in our Contain module.
	FireFX                = FX_BatteringRamHitUpgrade
	LeechRangeWeapon      = Yes

	DamageNugget                        ; A basic Nugget that just does damage
		Damage		= 2000
		Radius		= 50.0
		DelayTime   = 1				; Contact of nose.  Preattack is being used by trolls putting hands on ram
		DamageType  = SIEGE
		DeathType   = NORMAL
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 60.0
		ShockWaveRadius		= 24.0
		ShockWaveTaperOff	= 0.7
	End
End



;------------------------------------------------------------------------------
Weapon IsengardFortressMurderOfCrowsWeapon
	AttackRange		= 80
	WeaponSpeed		= 801		; dist/sec 
	HitPercentage		= 100		; When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 2000		; time between shots, msec
	PreAttackDelay      	= 400
	PreAttackType       	= PER_SHOT	; Do the delay each time we attack a new target
	
	FiringDuration      	= 1100
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	WeaponOCLNugget
		WeaponOCLName = OCL_IsengardFortressMurderOfCrows
	End
End

;------------------------------------------------------------------------------
Weapon IsengardFortressMurderOfCrowsBasicWeapon
	AttackRange		= 100
	RadiusDamageAffects 	= ENEMIES NOT_SIMILAR
	DelayBetweenShots	= 1000      	; time between shots, msec	
	FiringDuration      	= 1000
	CanFireWhileMoving	= Yes
	DamageNugget                        	; A basic Nugget that just does damage
		Damage		= 10
		Radius		= 50.0
		DamageType	= PIERCE
		;DamageFXType	= MAGIC
		DeathType	= NORMAL
		DamageSpeed	= 1400.0
	End
End

;------------------------------------------------------------------------------
Weapon IsengardSharkuManEaterGrab
	AttackRange        		= 8.0
	DelayBetweenShots		= 30            ; time between shots, msec
	FiringDuration			= 30
	MeleeWeapon			= Yes
	ChaseWeapon			= Yes ; Not full melee, but we get to move to attack a passive acquire, even if player owned.

	GrabNugget                    			; A Nugget that makes me grab you
		SpecialObjectFilter		= NONE +INFANTRY -HERO
		ContainTargetOnEffect   = Yes
		RemoveTargetFromOtherContain = Yes	; Rip out of any other contain (eg horde)
		ImpactTargetOnEffect	= Yes ;... if for some reason, I can not contain you, I'll try to give you a shove
		ShockWaveAmount   	= 50.0
		ShockWaveRadius   	= 16.0
		ShockWaveTaperOff 	= 0.75
		ShockWaveZMult    	= 1.1
	End
	
	SpecialModelConditionNugget
		ModelConditionNames = STUNNED_FLAILING
		ModelConditionDuration = 1250
	End
End

;------------------------------------------------------------------------------
Weapon IsengardSharkuManEaterWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ; Remember, the projectile is a rock, who has no allies
  RadiusDamageAffects	= ENEMIES NEUTRALS SELF				; Self for when this warhead is attached to an already grabbed unit being thrown as projectile instead of a rock
  DamageNugget
	SpecialObjectFilter		= NONE +INFANTRY -HERO
	Radius		  = 0.0				; Second damage nugget does instant death for only the direct target (which will be the unit thrown)
	DamageType    = CRUSH
    DeathType     = CRUSHED
    ForceKillObjectFilter	= NONE +INFANTRY -HERO
  End
End




;----------------------------
Weapon WargRiderWeapon
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackDelay		= ISENGARD_WARGRIDER_PREATTACKDELAY
  DelayBetweenShots     = ISENGARD_WARGRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration		= ISENGARD_WARGRIDER_FIRINGDURATION
  
  FireFX                = FX_GondorSwordHit
  ;AimDirection			= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_WARGRIDER_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End  
End



;----------------------------
Weapon WargPackWeapon
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackDelay		= ISENGARD_WARGRIDER_PREATTACKDELAY
  DelayBetweenShots     = ISENGARD_WARGRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration		= ISENGARD_WARGRIDER_FIRINGDURATION
  
  FireFX                = FX_GondorSwordHit
  ;AimDirection			= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_WARGRIDER_WARG_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End  
End




;----------------------------
Weapon SharkuWeapon
  LeechRangeWeapon	= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackDelay	= 1250
  DelayBetweenShots     = ISENGARD_WARGRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration	= 750
  RequireFollowThru	= Yes
  IsAimingWeapon        = Yes
  AcceptableAimDelta    = 10 
  
  ClipSize 		= 1
  AutoReloadsClip 	= Yes
  ClipReloadTime 	= ISENGARD_WARGRIDER_FIRINGDURATION
  
  FireFX                = FX_GondorSwordHit
  AimDirection		= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = SHARKU_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End  
End

;----------------------------
Weapon WargRiderWeaponUpgraded
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  PreAttackDelay	= ISENGARD_WARGRIDER_PREATTACKDELAY
  DelayBetweenShots     = ISENGARD_WARGRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration	= ISENGARD_WARGRIDER_FIRINGDURATION
  RequireFollowThru	= Yes
  IsAimingWeapon        = Yes
  AcceptableAimDelta    = 10 
  
  ClipSize 		= 1
  AutoReloadsClip 	= Yes
  ClipReloadTime 	= ISENGARD_WARGRIDER_FIRINGDURATION
  
  FireFX                = FX_GondorSwordHit
;  AimDirection		= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_WARGRIDER_DAMAGE_UPGRADE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End



;------------------------------------------------------------------------------
Weapon WargRiderlessWeapon
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  PreAttackDelay		= ISENGARD_WARGRIDER_WARG_PREATTACKDELAY
  DelayBetweenShots     = ISENGARD_WARGRIDER_WARG_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration		= ISENGARD_WARGRIDER_WARG_FIRINGDURATION
  FireFX                = FX_WargRiderlessAttack

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ISENGARD_WARGRIDER_WARG_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
    ;DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = 10% ANY +STRUCTURE
  End
End



//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved catapult can attack
Weapon IsengardBallistaExpansionWeapon		
	AttackRange					= ISENGARD_BALLISTA_RANGE
	MinimumAttackRange			= ISENGARD_BALLISTA_MINRANGE
	LeechRangeWeapon			= Yes
	DelayBetweenShots			= ISENGARD_BALLISTA_DELAYBETWEENSHOTS  
	PreAttackDelay				= ISENGARD_BALLISTA_PREATTACKDELAY
	FiringDuration      		= ISENGARD_BALLISTA_FIRINGDURATION
	AcceptableAimDelta			= ISENGARD_BALLISTA_EXPANSION_AIM_DELTA  
	FinishAttackOnceStarted		= Yes    

	//This nugget tells the objects slave to perform the attack
	SlaveAttackNugget
	End
End

;------------------------------------------------------------------------------
Weapon IsengardBallistaWeapon; BALANCE Ballista Weapon
	AttackRange = ISENGARD_BALLISTA_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ISENGARD_BALLISTA_RANGE .003 )
	
	MinimumAttackRange = 100.0
	WeaponSpeed = 401         ; dist/sec 
	MinWeaponSpeed = 401

	FXTrigger = CATAPULT_ROCK
	PreAttackType       = PER_SHOT ; Do the delay each time we attack a new target

	PreAttackDelay      = ISENGARD_BALLISTA_PREATTACKDELAY
	FiringDuration      = ISENGARD_BALLISTA_FIRINGDURATION
	DelayBetweenShots	= ISENGARD_BALLISTA_DELAYBETWEENSHOTS
	RequireFollowThru	= Yes
	NoVictimNeeded		= Yes ; Need no target
	LeechRangeWeapon = Yes
	
	ClipSize 			= 1
	AutoReloadsClip 	= Yes
	ClipReloadTime 		= ISENGARD_BALLISTA_FIRINGDURATION
	  
	HitPercentage       = 70 ; Hit percentage must be 100% to allow it to target units on walls.  Otherwise becomes useless. .  
	ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = IsengardSiegeBallistaProjectile
		WarheadTemplateName = IsengardBallistaWeaponWarhead
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
End

;-----------------------------------
Weapon IsengardBallistaWeaponWarhead
  RadiusDamageAffects = ENEMIES ALLIES NEUTRALS; NOT_SIMILAR


  DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_BALLISTA_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
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
;	HeroResist			= .75
    ShockWaveAmount   = 10.0
    ShockWaveRadius   = 20.0
    ShockWaveTaperOff = 0.5
  End
End

;-----------------------------------
Weapon IsengardBallistaWeaponWarhead_Structural
  RadiusDamageAffects = ENEMIES ALLIES NEUTRALS; NOT_SIMILAR


  DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ISENGARD_BALLISTA_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
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
;	HeroResist			= .75
    ShockWaveAmount   = 10.0
    ShockWaveRadius   = 20.0
    ShockWaveTaperOff = 0.5
  End
End

;------------------------------------------------------------------------------
Weapon IsengardFortressBallistaWeapon	;// BALANCE Fortress Ballista Weapon
	AttackRange			= ISENGARD_BALLISTA_RANGE
	MinimumAttackRange	= 40.0
	WeaponSpeed			= 401         ; dist/sec 
	MinWeaponSpeed		= 401
	FireFX				= FX_BallistaWeapon
	FXTrigger			= CATAPULT_ROCK
	PreAttackType       = PER_SHOT ; Do the delay each time we attack a new target

	PreAttackDelay      = ISENGARD_BALLISTA_PREATTACKDELAY
	FiringDuration      = ISENGARD_BALLISTA_FIRINGDURATION
	DelayBetweenShots	= ISENGARD_BALLISTA_DELAYBETWEENSHOTS
	RequireFollowThru	= Yes
	NoVictimNeeded		= Yes ; Need no target
	LeechRangeWeapon	= Yes
	
	ClipSize 			= 1
	AutoReloadsClip 	= Yes
	ClipReloadTime 		= ISENGARD_BALLISTA_FIRINGDURATION
	  
	HitPercentage       = 70 ; Hit percentage must be 100% to allow it to target units on walls.  Otherwise becomes useless. .  
	ScatterRadius       = 50.0     ;When this weapon misses it can randomly miss by as much as this distance.

	ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= IsengardSiegeBallistaProjectile
		WarheadTemplateName		= IsengardBallistaWeaponWarhead_Structural
		ForbiddenUpgradeNames	= Upgrade_EvilFortressFlamingMunitions
	End

	ProjectileNugget          ;// Upgraded ballista
		ProjectileTemplateName  = IsengardSiegeBallistaFireProjectile
		WarheadTemplateName     = IsengardBallistaWeaponUpgradedWarhead_Structural
		RequiredUpgradeNames	= Upgrade_EvilFortressFlamingMunitions
	End
End

;-----------------------------------
Weapon IsengardBallistaWeaponUpgradedWarhead
	RadiusDamageAffects = ENEMIES ALLIES NEUTRALS	;// NOT_SIMILAR

	DamageNugget		;//Adding Fire Damamge Nugget
		Damage        	= 500
		Radius        	= 0.0			;// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     	= 0
		DamageType    	= FLAME
		DamageFXType  	= FLAME
		DeathType     	= BURNED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End	
	DamageNugget                        ;// A basic Nugget that just does damage
		Damage        	= ISENGARD_BALLISTA_UPGRADED_DAMAGE	;// Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		Radius         = 50.0
		DelayTime     	= 0
		DamageType    	= SIEGE
		DamageFXType  	= BIG_ROCK
		DeathType     	= EXPLODED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 150% ANY ENEMIES +STRUCTURE
	End	
	MetaImpactNugget		;// A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount   	= 10.0
		ShockWaveRadius   	= 5.0
		ShockWaveTaperOff 	= 0.5
	End
	
End

;-----------------------------------
Weapon IsengardBallistaWeaponUpgradedWarhead_Structural
	RadiusDamageAffects = ENEMIES ALLIES NEUTRALS	;// NOT_SIMILAR

	DamageNugget		;//Adding Fire Damamge Nugget
		Damage        	= 500
		Radius        	= 0.0			;// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     	= 0
		DamageType    	= FLAME
		DamageFXType  	= FLAME
		DeathType     	= BURNED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End	
	DamageNugget                        ;// A basic Nugget that just does damage
		Damage        	= ISENGARD_BALLISTA_UPGRADED_DAMAGE	;// Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		Radius         = 50.0
		DelayTime     	= 0
		DamageType    	= SIEGE
		DamageFXType  	= BIG_ROCK
		DeathType     	= EXPLODED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 150% ANY ENEMIES +STRUCTURE
	End	
	MetaImpactNugget		;// A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount   	= 10.0
		ShockWaveRadius   	= 5.0
		ShockWaveTaperOff 	= 0.5
	End
	
End




;------------------------------------------------------------------------------
Weapon LurtzWeapon ;BALANCE Lurtz
  LeechRangeWeapon      = Yes
;  AttackRange           = 20.0
  AttackRange           = 15.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = LURTZ_DELAYBETWEENSHOTS 			; time between shots, msec
  PreAttackDelay        = LURTZ_PREATTACKDELAY 				; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = LURTZ_FIRINGDURATION 				; min 600 for anim
  ; IdleAfterFiringDelay  = LURTZ_FIRINGDURATION ; don't set for any weapon other than rocks.  
  FireFX                = FX_GondorSwordHit
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = LURTZ_DAMAGE					
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon LurtzCarnageWeapon ;BALANCE Lurtz
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = LURTZ_CARNAGE_DELAYBETWEENSHOTS 		; time between shots, msec
  PreAttackDelay        = LURTZ_CARNAGE_PREATTACKDELAY 			; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = LURTZ_CARNAGE_FIRINGDURATION 			; min 600 for anim
  ; IdleAfterFiringDelay  = LURTZ_CARNAGE_FIRINGDURATION ; don't set for any weapon other than rocks.  
  FireFX                = FX_GondorSwordHit
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = LURTZ_CARNAGE_DAMAGE				
    Radius        = ISENGARD_BERSERKER_RADIUS
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageArc	  = ISENGARD_BERSERKER_ARC
  End
End


;------------------------------------------------------------------------------
Weapon IsengardWildmanCudgel  ; BALANCE
	LeechRangeWeapon	= Yes
	AttackRange			= 30.0
	MeleeWeapon			= Yes
	DelayBetweenShots	= ISENGARD_WILDMAN_DELAYBETWEENSHOTS            ; time between shots, msec
	PreAttackDelay		= ISENGARD_WILDMAN_PREATTACKDELAY             ; 433 is natural time of the stabbing animation.
	PreAttackType		= PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration		= ISENGARD_WILDMAN_FIRINGDURATION            ; min 600 for anim
	FireFX				= FX_GondorSwordHit
	FireFlankFX			= FX_Flanking

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= ISENGARD_WILDMAN_TORCH_DAMAGE
		Radius			= ISENGARD_WILDMAN_TORCH_RADIUS
		DelayTime		= 0
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		AcceptDamageAdd	= No
		RequiredUpgradeNames    = Upgrade_IsengardTorches
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= ISENGARD_WILDMAN_DAMAGE
		Radius			= ISENGARD_WILDMAN_RADIUS
		DelayTime		= 0
		DamageType		= SLASH
		DamageFXType		= CLUBBING
		DeathType		= NORMAL
		FlankingBonus	= 50%
	End
End

;------------------------------------------------------------------------------
Weapon IsenguardLurtzBow       ; BALANCE Archer Weapon ;orc archer
	AttackRange			= LURTZ_BOW_RANGE					; 350 ; Horde member so it needs to be bigger than the horde weapon attack range.
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( LURTZ_BOW_RANGE .003 )  
	
	LeechRangeWeapon    = Yes	
	WeaponSpeed			= 300         ; dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= 40.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= LURTZ_BOW_DELAYBETWEENSHOTS	; time between shots, msec
	PreAttackDelay      = LURTZ_BOW_PREATTACKDELAY
	PreAttackType       = PER_POSITION ; Do the delay each time we attack a new target
	FiringDuration      = LURTZ_BOW_FIRINGDURATION		; Duration of the archer firing shot is 500ms.
;	RequireFollowThru	= Yes
;	IdleAfterFiringDelay = 0 ; don't set for any weapon other than rocks. 
;	HoldAfterFiringDelay = 1333 ; don't set for any weapon other than rocks. 

    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle	= 1	
    ClipReloadTime		= Min:LURTZ_BOW_RELOADTIME_MIN Max:LURTZ_BOW_RELOADTIME_MAX
    ContinuousFireOne	= 0
    ContinuousFireCoast	= LURTZ_BOW_RELOADTIME_MAX

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	ProjectileNugget			; Fire arrow available through fire upgrade
		ProjectileTemplateName  = EvilFactionArrow
		WarheadTemplateName     = IsengardLurtzBowWarhead
	End	
End

;------------------------------------------------------------------------------
Weapon IsenguardLurtzBowMelee       ; BALANCE Lurtz Melee  Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  FireFX                = FX_RohanArcherBowWeapon;
;  DelayBetweenShots     = 1500            ; time between shots, msec
  PreAttackDelay        = 1500             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 1500    ; Duration of the sword swing
  ; IdleAfterFiringDelay 	= 0 ; don't set for any weapon other than rocks. 
  ; HoldAfterFiringDelay 	= 1500 ; don't set for any weapon other than rocks.  

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = LURTZ_BOW_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;-----------------------------------
Weapon IsengardLurtzBowWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = LURTZ_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    ;DamageScalar  = 25000% NONE +MordorMumakil
    DamageType    = HERO_RANGED
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End


//------------------------------------------------------------------------------
Weapon IsenguardLurtzBowStun       // BALANCE Archer Weapon //orc archer
	AttackRange			= LURTZ_CRIPPLE_RANGE_WEAPON
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( LURTZ_BOW_RANGE .003 ) 
	
	WeaponSpeed			= 300				   //dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400				   //dist/sec Upper	limit on scaling, when attacking past nominal "max"	range
	FireFX				= FX_LurtzCripplingStrike 
	ScaleWeaponSpeed	= Yes				   //Used for lob weapons, scales speed	proportional to	range
	HitPercentage		= 100				   //When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= 0.0				   //When this weapon misses it	can	randomly miss by as	much as	this distance.
	DelayBetweenShots	= 1100
	PreAttackDelay		= 1
	PreAttackType		= PER_SHOT			   //Do	the	delay each time	we attack a	new	target
	FiringDuration		= 1000				   //Duration of the archer	firing shot	is 500ms.
	IdleAfterFiringDelay = 1000
	// HoldAfterFiringDelay = 1000 // 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	ProjectileNugget			// Fire arrow available through fire upgrade
		ProjectileTemplateName  = LurtzArrowProjectile
		WarheadTemplateName     = LurtzStunBowWarhead
		SpecialObjectFilter		= ALL -MACHINE -GondorGwaihir -Drogoth -MordorFellBeast -MordorWitchKing		; Added to RotWK Balance patch
	End
End

;-----------------------------------

Weapon LurtzStunBowWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL
	RadiusDamageAffects = ENEMIES NEUTRALS 
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = LURTZ_BOW_STUN_DAMAGE 
   	 	DamageScalar  = 10% NONE +STRUCTURE 
   		DamageScalar  = 400% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir                                             
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	End

	DamageNugget
		Damage                   = LURTZ_BOW_STUN_DAMAGE                                               
		Radius        		 = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType               = HERO_RANGED
		DamageFXType             = EVIL_ARROW_PIERCE
		DeathType                = NORMAL
		SpecialObjectFilter      = ALL -HERO
	End

	AttributeModifierNugget
		AttributeModifier        = LurtzCripplingStrike
		DamageFXType             = EVIL_ARROW_PIERCE 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER
	End            
End





;------------------------------------------------------------------------------
;Weapon IsengardExplosiveMineDroppingWeaponCAMPEA   ; BALANCE Mine Weapon
;	AttackRange           = 4.0
;	MeleeWeapon           = Yes
;	DelayBetweenShots     = 3000            ; time between shots, msec
;	PreAttackDelay        = 1466             ; 433 is natural time of the stabbing animation.
;	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
;	FiringDuration        = 733            ; min 600 for anim
;
;	SpawnAndFadeNugget	
;		SpawnedObjectName = IsengardDeployedExplosiveMineCAMPEA
;		SpawnOffset = X:8 Y:1 Z:0
;	End
;End

;------------------------------------------------------------------------------
;Weapon IsengardExplosiveMineExplosionWeaponCAMPEA   ; BALANCE Mine Weapon
;	AttackRange           = 4.0
;	DelayBetweenShots     = 2000            ; time between shots, msec
;	FireFX                = FX_ExplosiveMine
;
;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage        = 20
;		Radius        = 20.0
;		DelayTime     = 0
;		DamageType    = SIEGE
;		DamageFXType  = FLAME
;		DeathType     = BURNED
;		DamageScalar  = 500000% NONE +HelmsDeepCulvert +HelmsDeepGate +HelmsDeepSectionAi +HelmsDeepSectionC ;Make sure we one shot kill Culvert but Ballista have to shoot alot
;	End
;
;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage        = 1000
;		Radius        = 205.0
;		DelayTime     = 0
;		DamageType    = FORCE
;		DeathType     = NORMAL
;	End
;	
;	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
;		ShockWaveAmount   = 90.0		
;		ShockWaveRadius   = 205.0
;		ShockWaveTaperOff = 0.66
;	End
;End



;------------------------------------------------------------------------------
Weapon IsengardScaffoldLargeCollapseWeapon     
	AttackRange			= 4.0
	DelayBetweenShots		= 2000				; time between shots, msec
	;FireFX			= FX_ScaffoldDie			; currently just used for audio only

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 800  				; A whole lot of damage.
		Radius        = 50.0
		DelayTime     = 0
		DamageType    = CRUSH
		DeathType     = CRUSHED
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 1000
		Radius        = 50.0
		DelayTime     = 0
		DamageType    = FORCE
		DeathType     = NORMAL
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 90.0		
		ShockWaveRadius   = 75.0
		ShockWaveTaperOff = 0.66
	End
End


;------------------------------------------------------------------------------
Weapon IsengardScaffoldSmallCollapseWeapon     
	AttackRange           = 4.0
	DelayBetweenShots     = 2000            ; time between shots, msec

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 400  				; A whole lot of damage.
		Radius        = 30.0
		DelayTime     = 0
		DamageType    = CRUSH
		DeathType     = CRUSHED
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 500
		Radius        = 30.0
		DelayTime     = 0
		DamageType    = FORCE
		DeathType     = NORMAL
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force 
;		HeroResist			= .75
		ShockWaveAmount   = 90.0		
		ShockWaveRadius   = 50.0
		ShockWaveTaperOff = 0.66
	End
End


