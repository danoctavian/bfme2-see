/////////////////
// WEAPON.INC //
///////////////
//Rohan//
////////

;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
;  Rohan
;
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon RohirrimCrush  ; Used when the rohirrim crush an enemy.
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0            			; time between shots, msec
  PreAttackDelay        = 0 				;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0
  FireFX		= FX_GenericCrushImpactSound

  DamageNugget                  			; A basic Nugget that just does damage
    Damage        = ROHIRRIM_CRUSH_DAMAGE		; A whole lot of damage.
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = CRUSHED
    FlankingBonus = 200%
  End
End



;------------------------------------------------------------------------------
Weapon RohanFighterSword  ; BALANCE Militia Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ROHAN_PEASANT_DELAYBETWEENSHOTS  ;2000		; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = ROHAN_PEASANT_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = ROHAN_PEASANT_FIRINGDURATION     ; Duration of the sword swing
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ROHAN_FIGHTER_SWORD_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End

;------------------------------------------------------------------------------
Weapon RohanFighterSwordUpgraded  ; BALANCE Militia Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ROHAN_PEASANT_DELAYBETWEENSHOTS  ;2000		; Bad Things happen if delay between shots is less than Preattack+Firing times.  You are ready to fire before you are done firing.
  PreAttackDelay        = ROHAN_PEASANT_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = ROHAN_PEASANT_FIRINGDURATION     ; Duration of the sword swing
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ROHAN_FIGHTER_SWORD_DAMAGE_FORGED_UPGRADE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End

;------------------------------------------------------------------------------
;Weapon RohanFighterRock  ; BALANCE Militia Weapon
;  ScatterRadiusVsInfantry     = 8.0     ;When this weapon is used against infantry, it will always miss by as much as this distance.
;  AttackRange = 240.0
;  MinimumAttackRange = 40.0
;  WeaponSpeed = 201         ; dist/sec 
;  MinWeaponSpeed = 61
;  MaxWeaponSpeed = 301      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
;  ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
;  DelayBetweenShots = 4000               ; time between shots, msec
;
;  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
;    ProjectileTemplateName = RohanFighterRockProjectile
;    WarheadTemplateName = RohanFighterRockWarhead
;  End
;End

;----------------------------
;Weapon RohanFighterRockWarhead
;  RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
;  DamageNugget                        ; A basic Nugget that just does damage
;    Damage        = 20
;    Radius        = 4.0
;    DelayTime     = 0
;    DamageType    = CRUSH
;    DamageFXType  = SMALL_ROCK
;    DeathType     = EXPLODED
;  End
;End

;------------------------------------------------------------------------------
Weapon RohanArcherBowMelee       ; BALANCE Archer Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
;  FireFX                = FX_RohanArcherBowWeapon;
  DelayBetweenShots     = 2000            ; time between shots, msec
  PreAttackDelay        = 666             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = 1000    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ROHAN_YEOMAN_MELEE_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End
;------------------------------------------------------------------------------
Weapon RohanArcherBow
	AttackRange         = ROHAN_YEOMAN_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ROHAN_YEOMAN_RANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ROHAN_YEOMAN_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ROHAN_YEOMAN_BOW_RELOADTIME_MIN Max:ROHAN_YEOMAN_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ROHAN_YEOMAN_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = RohanArcherBowWarhead
		ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
	End
	ProjectileNugget	; Fire arrow avialble through fire upgrade
		ProjectileTemplateName  = GoodFactionFireArrow
		WarheadTemplateName     = RohanArcherBowFireWarhead
		RequiredUpgradeNames    = Upgrade_RohanFireArrows
	End
End

;----------------------------
Weapon RohanArcherBowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ROHAN_YEOMAN_DAMAGE
	  Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = GOOD_ARROW_PIERCE
	    DeathType     = EXPLODED
	End
End

Weapon RohanArcherBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ROHAN_YEOMAN_FIRE_UPGRADE_DAMAGE_FIRE
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
		Damage        = ROHAN_YEOMAN_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End
End

Weapon RohanArcherBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ROHAN_YEOMAN_FIRE_UPGRADE_DAMAGE_FIRE
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
		Damage        = ROHAN_YEOMAN_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End
End
;------------------------------------------------------------------------------
;Weapon RohanArcherBowFireArrow       ; BALANCE Archer Weapon
;	AttackRange               = ROHAN_YEOMAN_RANGE
;	WeaponSpeed               = 321         ; dist/sec 
;	MinWeaponSpeed            = 241
;	MaxWeaponSpeed            = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
;	FireFX                    = FX_RohanArcherBowWeapon
;	ScaleWeaponSpeed          = Yes ; Used for lob weapons, scales speed proportional to range
;	HitPercentage             = 100     ;When this weapon is used it will hit exactly 50% of the time.
;	ScatterRadius             = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
;	DelayBetweenShots         = Min:1000  Max:1100
;	PreAttackDelay            = 400    
;	PreAttackRandomAmount     = 200    ; amount of additional preattack variance for archer type attacks only  
;	PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
;	FiringDuration            = 800    ; Duration of the archer firing shot is 500ms.
;	IsAimingWeapon            = Yes
; 	AntiAirborneVehicle	  = Yes
;	AntiAirborneMonster		= Yes
;	ProjectileNugget          ; Fire arrow available through fire upgrade
;    	ProjectileTemplateName  = GoodFactionFireArrow
;    	WarheadTemplateName     = GondorArcherBowFireWarhead
;  	End
;End


;------------------------------------------------------------------------------
Weapon RohanElvenBow     ; BALANCE Elven warrior bow Weapon
	AttackRange         = ROHAN_ELVEN_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ROHAN_ELVEN_RANGE .003 )
	
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ROHAN_ELVENWARRIOR_BOW_PREATTACKDELAY 
	;PreAttackRandomAmount     = 200   
	PreAttackType       = PER_POSITION
	FiringDuration      = 0

	OverrideVoiceAttackSound			= ElvenWarriorVoiceAttackBow
	OverrideVoiceEnterStateAttackSound	= ElvenWarriorVoiceEnterStateAttackBow
	;OverrideVoiceAttackAirSound		= ElvenWarriorVoiceAttackBow
	;OverrideVoiceAttackStructureSound	= ElvenWarriorVoiceAttackBow
	;OverrideVoiceAttackMachineSound	= ElvenWarriorVoiceAttackBow
	  
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ROHAN_ELVENWARRIOR_BOW_RELOADTIME_MIN Max:ROHAN_ELVENWARRIOR_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ROHAN_ELVENWARRIOR_BOW_RELOADTIME_MAX
	  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget                    ; Default arrow
	    ProjectileTemplateName    = GoodFactionArrow
	    WarheadTemplateName       = ElvenBowWarhead
	    ForbiddenUpgradeNames     = Upgrade_ElvenSilverthornArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
	    ProjectileTemplateName    = GoodFactionFireArrow
	    WarheadTemplateName       = ElvenBowSilverthorneWarhead
	    RequiredUpgradeNames      = Upgrade_ElvenSilverthornArrows
  	End
End


;------------------------------------------------------------------------------
Weapon RohanRohirrimSpear       ; BALANCE Rohirrim Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  DelayBetweenShots     = ROHAN_ROHIRRIM_DELAYBETWEENSHOTS           ; time between shots, msec
  PreAttackDelay        = ROHAN_ROHIRRIM_PREATTACKDELAY             ; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ROHAN_ROHIRRIM_FIRINGDURATION     ; Duration of the sword swing

	DamageNugget                        ; A basic Nugget that just does damage
		Damage					= ROHAN_ROHIRRIM_SWORD_DAMAGE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= CAVALRY
		DamageFXType				= SWORD_SLASH
		DeathType				= NORMAL
		ForbiddenUpgradeNames			= Upgrade_RohanForgedBladesForRohirrim
		FlankingBonus = 50%
	End


   	DamageNugget
		Damage					= ROHAN_ROHIRRIM_SWORD_DAMAGE_FORGED_UPGRADE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= CAVALRY
		DamageFXType				= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames    		= Upgrade_RohanForgedBladesForRohirrim
		FlankingBonus = 50%
	End

End

;------------------------------------------------------------------------------
Weapon RohanRohirrimBow       ; BALANCE Archer Weapon
  AttackRange               = ROHAN_HORSEBOW_RANGE
  
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ROHAN_HORSEBOW_RANGE .003 )
	
	
  WeaponSpeed               = 321         ; dist/sec 
  MinWeaponSpeed            = 241
  MaxWeaponSpeed            = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX                    = FX_RohanArcherBowWeapon
  ScaleWeaponSpeed          = Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100     ;When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius             = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
  
  PreAttackDelay            = 700
  PreAttackType             = PER_SHOT  ; Do the delay each time we attack a new target
  PreAttackRandomAmount     = 200 
  FiringDuration            = 1500		; Duration of the archer firing shot is 1000ms.
  RequireFollowThru			= Yes

  ClipSize 					= 1
  AutoReloadsClip 			= Yes
  ClipReloadTime 			= 1500

  IsAimingWeapon            = Yes
  AntiAirborneVehicle	    = Yes
  AntiAirborneMonster	    = Yes

; CanFireWhileMoving	    = Yes
; CanFireWhileCharging	    = Yes

  CanBeDodged = Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

  HitPassengerPercentage    = 20%

  ProjectileNugget          ; Default arrow
    ProjectileTemplateName  = GoodFactionArrow
    WarheadTemplateName     = RohirrimBowWarhead
    ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
  End

  ProjectileNugget          ; Fire arrow available through fire upgrade
    ProjectileTemplateName  = GoodFactionFireArrow
    WarheadTemplateName     = RohirrimBowFireWarhead
    RequiredUpgradeNames    = Upgrade_RohanFireArrows
  End
End

;----------------------------
Weapon RohirrimBowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ROHAN_ROHIRRIM_BOW_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = GOOD_ARROW_PIERCE
	    DeathType     = EXPLODED
	    DamageScalar  = 50% NONE +GondorTowerShieldGuard +RohanSpearmen +ElvenMithlondSentry +DwarvenPhalanx +ArnorTowerShieldGuard
	    DamageScalar  = 50% NONE +AngmarRhudaurSpearman +WildMarauder +IsengardPikeman +AngmarHillTroll +MordorEasterling
	End
End

Weapon RohirrimBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ROHAN_ROHIRRIM_BOW_FIRE_DAMAGE
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
		Damage        = ROHAN_ROHIRRIM_BOW_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	    	DamageScalar  = 50% NONE +GondorTowerShieldGuard +RohanSpearmen +ElvenMithlondSentry +DwarvenPhalanx +ArnorTowerShieldGuard
	    	DamageScalar  = 50% NONE +AngmarRhudaurSpearman +WildMarauder +IsengardPikeman +AngmarHillTroll +MordorEasterling
	End
End

;------------------------------------------------------------------------------
Weapon RohanStructureBow       ; BALANCE Mini-Tower Weapon
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

Weapon RohanEowynSmiteThrown
	AttackRange			= 300.0
	LeechRangeWeapon		= Yes
	WeaponSpeed			= 161					; dist/sec 
	MinWeaponSpeed			= 201
	MaxWeaponSpeed			= 241					; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_EowynSmiteSpearThrow
	ScaleWeaponSpeed		= Yes					; Used for lob weapons, scales speed proportional to range
	HitPercentage			= 100
	ScatterRadius			= 0.0					; When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots		= 1				; time between shots, msec
	PreAttackDelay			= 1					; 1467 is the prep time for archer.
	PreAttackType			= PER_SHOT				; Do the delay each time we attack a new target
	FiringDuration			= 1				; Duration of the archer firing shot is 500ms.

	ProjectileNugget
		ProjectileTemplateName	= RohanEomerSpearProjectile
		WarheadTemplateName	= RohanEowynSmiteWarhead
	End
End

;------------------------------------------------------------------------------

Weapon RohanEowynSmiteWarhead
	ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects	= ENEMIES NEUTRALS NOT_SIMILAR
	FireFX			= FX_GondorSwordHit
	HitStoredTarget		= Yes						;Always hits initial target.
	DamageNugget
		Damage		= EOWYN_SMITE_DAMAGE
		DamageScalar	= 5% NONE +STRUCTURE
		DamageScalar	= 400% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir
		Radius		= 0.0			;HitStoredTarget means we hurt the person we launched at.	And nobody else.	So a miss hurts nobody.
		DelayTime		= 0
		DamageType		= MAGIC
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
	End
End

;------------------------------------------------------------------------------

Weapon RohanEomerSpear						; BALANCE Rohan Eomer Spear Weapon
	AttackRange 		= 300.0
	LeechRangeWeapon		= Yes
	WeaponSpeed			= 261				; dist/sec 
	MinWeaponSpeed		= 161
	MaxWeaponSpeed 		= 301				; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX 			= FX_EomerSpearThrow
	ScaleWeaponSpeed 		= Yes				; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 100
	ScatterRadius     	= 0.0				;When this weapon misses it can randomly miss by as much as this distance.
	AntiAirborneVehicle     = Yes
	AntiAirborneMonster	= Yes

	PreAttackDelay		= 1
	PreAttackType		= PER_SHOT			; Do the delay each time we attack a new target
	FiringDuration		= 2000			; Duration of the archer firing shot is 500ms.
	HoldAfterFiringDelay	= 2000

	ProjectileNugget						; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RohanEomerSpearProjectile
		WarheadTemplateName	= RohanEomerSpearWarhead
	End
End

;-----------------------------------

Weapon RohanEomerSpearWarhead
	RadiusDamageAffects	= ENEMIES NEUTRALS NOT_SIMILAR 
	FireFX			= FX_GondorSwordHit
	HitStoredTarget		= Yes
	DamageNugget       				                 ; A basic Nugget that just does damage
		;Eomer ONLY
		Damage		= EOMER_SPEAR_DAMAGE	
		DamageScalar	= 5% NONE +STRUCTURE			
		Radius		= 10
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level1 Upgrade_CreateAHeroThrowSpear_Level2 Upgrade_CreateAHeroThrowSpear_Level3
	End
	DamageNugget       				                 ; A basic Nugget that just does damage
		;Create a hero level 1 power!
		Damage		= CAH_SPEAR_DAMAGE_LVL1	
		DamageScalar	= 5% NONE +STRUCTURE			
		Radius		= 10
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level2 Upgrade_CreateAHeroThrowSpear_Level3
	End
	DamageNugget       				                 ; A basic Nugget that just does damage
		;Create a hero level 2 power!
		Damage		= CAH_SPEAR_DAMAGE_LVL2	
		DamageScalar	= 5% NONE +STRUCTURE			
		Radius		= 10
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level3
	End
	DamageNugget       				                 ; A basic Nugget that just does damage
		;Create a hero level 3 power!
		Damage		= CAH_SPEAR_DAMAGE_LVL3	
		DamageScalar	= 5% NONE +STRUCTURE			
		Radius		= 10
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroThrowSpear_Level3
	End
End

;------------------------------------------------------------------------------
Weapon GamlingSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = GAMLING_DELAYBETWEENSHOTS 			
             ; time between shots, msec
  PreAttackDelay        = GAMLING_PREATTACKDELAY 				; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FiringDuration        = GAMLING_FIRINGDURATION 				; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = GAMLING_DAMAGE					
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;-----------------------------------

Weapon TheodenSword
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = THEODEN_DELAYBETWEENSHOTS 		; time between shots, msec
  FireFX                = FX_GondorSwordHit
  PreAttackDelay        = THEODEN_PREATTACKDELAY 		; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT 				; Do the delay each time we attack a new target
  FiringDuration        = THEODEN_FIRINGDURATION 		; Duration of the sword swing
  DamageNugget                        				; A basic Nugget that just does damage
    Damage        = THEODEN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;-----------------------------------
Weapon TheodenSwordMounted
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = THEODEN_MOUNTED_DELAYBETWEENSHOTS 	; time between shots, msec
  FireFX                = FX_GondorSwordHit
  PreAttackDelay        = THEODEN_MOUNTED_PREATTACKDELAY  	; is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT 				; Do the delay each time we attack a new target
  FiringDuration        = THEODEN_MOUNTED_FIRINGDURATION 	; Duration of the sword swing
  DamageNugget                        				; A basic Nugget that just does damage
    Damage        = THEODEN_MOUNTED_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;-----------------------------------
Weapon EomerSword
  LeechRangeWeapon		= Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = EOMER_DELAYBETWEENSHOTS 		; time between shots, msec
  FireFX                = FX_GondorSwordHit
  PreAttackDelay        = EOMER_PREATTACKDELAY 			; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT 				; Do the delay each time we attack a new target
  FiringDuration        = EOMER_FIRINGDURATION 			; Duration of the sword swing
  DamageNugget                        				; A basic Nugget that just does damage
    Damage        = EOMER_DAMAGE					
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End


;------------------------------------------------------------------------------
Weapon EowynSword ; BALANCE Eowyn Sword Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
  DelayBetweenShots     = EOWYN_DELAYBETWEENSHOTS 			; time between shots, msec
  PreAttackDelay        = EOWYN_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = EOWYN_FIRINGDURATION 			; min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = EOWYN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

