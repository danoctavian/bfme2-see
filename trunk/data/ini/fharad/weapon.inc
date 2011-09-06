/////////////////
// WEAPON.INC //
///////////////
//Harad//
////////




;------------------------------------------------------------------------------
Weapon HaradrimLancerLance       ; BALANCE
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GondorSwordHit
  DelayBetweenShots     = ELVEN_RIVENDELLLANCER_DELAYBETWEENSHOTS           ; time between shots, msec
  PreAttackDelay        = ELVEN_RIVENDELLLANCER_PREATTACKDELAY				; 400 is sword swing delay time before contact with target.
  FiringDuration        = ELVEN_RIVENDELLLANCER_FIRINGDURATION				; Duration of the sword swing
  PreAttackType         = PER_SHOT											; Do the delay each time we attack a new target

	DamageNugget
		Damage			= ELVEN_RIVENDELLLANCER_LANCE_DAMAGE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= CAVALRY
		DamageFXType	= SWORD_SLASH
		DeathType		= NORMAL
		ForbiddenUpgradeNames    = Upgrade_MordorForgedBlades
	End

	DamageNugget
		Damage			= ELVEN_RIVENDELLLANCER_LANCE_DAMAGE_UPGRADE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= CAVALRY
		DamageFXType		= SWORD_SLASH
		DeathType		= NORMAL
		RequiredUpgradeNames    = Upgrade_MordorForgedBlades
	End

End


;------------------------------------------------------------------------------
Weapon HaradrimPalaceBow       ; BALANCE Archer Weapon
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
    ProjectileTemplateName  = EvilFactionArrow
    WarheadTemplateName     = FortressArrowTowerBowWarhead
    ForbiddenUpgradeNames	= Upgrade_MordorHaradrimPalaceLevel3
  End
  ProjectileNugget          ; Default arrow
    ProjectileTemplateName  = EvilFactionFireArrow
    WarheadTemplateName     = FortressArrowTowerBowUpgradedWarhead
    RequiredUpgradeNames	= Upgrade_MordorHaradrimPalaceLevel3
  End

End




;------------------------------------------------------------------------------
Weapon HaradrimBow ; BALANCE Archer Weapon ;orc archer
  AttackRange 			= MORDOR_HARADRIM_BOW_RANGE
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_HARADRIM_BOW_RANGE .003 )   
  
  LeechRangeWeapon      = Yes
  WeaponSpeed 			= 401         ; dist/sec 
  MinWeaponSpeed 		= 121
  MaxWeaponSpeed 		= 601      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX 				= FX_RohanArcherBowWeapon  
  ScaleWeaponSpeed	 	= Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage     	= 100     ;When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius     	= 40.0     ;When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots 	= MORDOR_HARADRIM_BOW_DELAYBETWEENSHOTS
  PreAttackDelay        = MORDOR_HARADRIM_BOW_PREATTACKDELAY
  PreAttackRandomAmount     = 200 
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration      	= MORDOR_HARADRIM_BOW_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
  AntiAirborneVehicle	= Yes
  AntiAirborneMonster	= Yes
  CanBeDodged				= Yes

  ProjectileNugget                    ; Default arrow
    ProjectileTemplateName    = EvilFactionArrow
    WarheadTemplateName       = HaradrimBowWarhead
    ForbiddenUpgradeNames	  = Upgrade_MordorFireArrows
  End
  ProjectileNugget	; Fire arrow available through fire upgrade
    ProjectileTemplateName  = EvilFactionFireArrow
	WarheadTemplateName     = HaradrimBowFireWarhead
	RequiredUpgradeNames    = Upgrade_MordorFireArrows
  End

End

Weapon HaradrimBowBombard ; BALANCE Archer Weapon ;orc archer
	AttackRange 			= MORDOR_HARADRIM_BOW_BOMBARD_MAXRANGE
	MinimumAttackRange	= #SUBTRACT( MORDOR_HARADRIM_BOW_BOMBARD_MINRANGE 75 )

	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_HARADRIM_BOW_BOMBARD_MAXRANGE .003 )  
  
	LeechRangeWeapon      = Yes
	WeaponSpeed 			= 401         ; dist/sec 
	MinWeaponSpeed 		= 121
	MaxWeaponSpeed 		= 601      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX 				= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed	 	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage     	= 0     ;Always scatter
	ScatterRadius     	= ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots 	= MORDOR_HARADRIM_BOW_DELAYBETWEENSHOTS
	PreAttackDelay        = MORDOR_HARADRIM_BOW_PREATTACKDELAY
	PreAttackRandomAmount     = 200 
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration      	= MORDOR_HARADRIM_BOW_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	CanBeDodged			= Yes
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget                    ; Default arrow
		ProjectileTemplateName    = EvilFactionArrowBombard
		WarheadTemplateName       = HaradrimBowBombardWarhead
		ForbiddenUpgradeNames	  = Upgrade_MordorFireArrows
	End
	ProjectileNugget	; Fire arrow available through fire upgrade
		ProjectileTemplateName  = EvilFactionFireArrowBombard
		WarheadTemplateName     = HaradrimBowBombardFireWarhead
		RequiredUpgradeNames    = Upgrade_MordorFireArrows
	End

End

;-----------------------------------
Weapon HaradrimBowWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_HARADRIM_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon HaradrimBowBombardWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NOT_SIMILAR 
  HitStoredTarget = No
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = MORDOR_HARADRIM_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon HaradrimBowFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.

	DamageNugget                        
		Damage        = MORDOR_HARADRIM_FIRE_UPGRADE_FLAME
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
		Damage        = MORDOR_HARADRIM_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	End
End

Weapon HaradrimBowBombardFireWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = No

	DamageNugget                        
		Damage        = MORDOR_HARADRIM_FIRE_UPGRADE_FLAME
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
		Damage        = MORDOR_HARADRIM_FIRE_UPGRADE_DAMAGE
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
Weapon HaradrimCrushedWeapon
	AttackRange = 20.0
	WeaponSpeed = 261         ; dist/sec 
	MinWeaponSpeed = 61
	MaxWeaponSpeed = 301      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_HaradrimSpearThrow
	ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100
	ScatterRadius     = 20.0         ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots = 3000        ; time between shots, msec
	PreAttackDelay        = 1500    ; 1500 is the prep time for archer.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FiringDuration      = 1000    ; Duration of the archer firing shot is 1000ms.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = 100
		Radius        = 20
		DelayTime     = 10
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

End



Weapon HaradrimArcherMissileHordeRangefinder
	AttackRange			= #SUBTRACT( MORDOR_HARADRIM_BOW_RANGE 100 )  ; Slightly shorter than the archer's actual weapon
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_HARADRIM_BOW_RANGE .003 )
	
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

Weapon HaradrimArcherMissileHordeRangefinderBombard
	AttackRange			= #SUBTRACT( MORDOR_HARADRIM_BOW_BOMBARD_MAXRANGE 100 ) 
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( MORDOR_HARADRIM_BOW_BOMBARD_MAXRANGE .003 )
	
	MinimumAttackRange		= MORDOR_HARADRIM_BOW_BOMBARD_MINRANGE
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


Weapon HaradrimMountedHordeRangefinder
	AttackRange			= 380
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


//------------------------------------------------------------------------------
Weapon HaradrimBarbedArrowRangeFinder
	AttackRange				= #SUBTRACT( MORDOR_HARADRIM_BOW_RANGE 100 ) 
	RangeBonusMinHeight      = 30 ;		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( MORDOR_HARADRIM_BOW_RANGE .003 )
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


//------------------------------------------------------------------------------
Weapon HaradrimBarbedArrow // BALANCE Archer Weapon ;orc archer
  AttackRange 			= MORDOR_HARADRIM_BOW_RANGE  // Horde member so it needs to be bigger than the horde weapon attack range.
  LeechRangeWeapon      = Yes
  WeaponSpeed 			= 401			// dist/sec 
  MinWeaponSpeed 		= 121
  MaxWeaponSpeed 		= 601			// dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX 				= FX_HaradrimArcherBowBarbedWeapon				;FX_RohanArcherBowWeapon	;audio only
  ScaleWeaponSpeed	 	= Yes			// Used for lob weapons, scales speed proportional to range
  HitPercentage     	= 100			//When this weapon is used it will hit exactly 50% of the time.
  ScatterRadius     	= 40.0			//When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots 	= MORDOR_HARADRIM_BOW_DELAYBETWEENSHOTS
  PreAttackDelay        = MORDOR_HARADRIM_BOW_BARBEDARROWS_PREATTACKDELAY
  PreAttackRandomAmount = 200 
  PreAttackType         = PER_SHOT		// Do the delay each time we attack a new target
  FiringDuration      	= MORDOR_HARADRIM_BOW_FIRINGDURATION    // Duration of the archer firing shot is 500ms.  

  ProjectileNugget                    ; Default arrow
    ProjectileTemplateName    = BarbedArrowProjectile
    WarheadTemplateName       = HaradrimBarbedArrowWarhead
  End
End

//-----------------------------------
Weapon HaradrimBarbedArrowWarhead
	ProjectileCollidesWith	= ENEMIES
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR 
	HitStoredTarget			= Yes	// Always hits initial target.
	
	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        = MORDOR_HARADRIM_BOW_DAMAGE
		Radius        = 0.0			// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	End

	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        = MORDOR_HARADRIM_BARBED_ARROW_DAMAGE
		Radius        = 0.0			// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	End
	
	// A Nugget that throws things back with force
	MetaImpactNugget								
;		HeroResist			= .75
		ShockWaveAmount		= 10
		ShockWaveRadius		= 1.0
		ShockWaveArc		= 75				// Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End

End