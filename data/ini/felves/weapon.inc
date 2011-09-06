/////////////////
// WEAPON.INC //
///////////////
//Elves//
////////



;------------------------------------------------------------------------------
Weapon LegolasBow
	AttackRange		= LEGOLAS_BOW_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( LEGOLAS_BOW_RANGE .003 )
					
	WeaponSpeed		= 321         			; dist/sec 
	MinWeaponSpeed		= 241
	MaxWeaponSpeed		= 481      			; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX			= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed	= Yes 				; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 100     			;When this weapon is used it will hit exactly 100% of the time.
	ScatterRadius		= 5.0     			;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20				; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= LEGOLAS_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay      	= LEGOLAS_PREATTACKDELAY 	; 1467 is the prep time for archer.
	PreAttackType       	= PER_POSITION 			; Do the delay each time we attack a new target
	FiringDuration      	= LEGOLAS_FIRINGDURATION 	; Duration of the archer firing shot is 500ms.

    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle		= 1	
    ClipReloadTime		= Min:LEGOLAS_RELOADTIME_MIN Max:LEGOLAS_RELOADTIME_MAX
    ContinuousFireOne		= 0
    ContinuousFireCoast		= LEGOLAS_RELOADTIME_MAX

    AntiAirborneVehicle		= Yes
    AntiAirborneMonster		= Yes
    CanFireWhileMoving		= Yes
    
	ProjectileNugget                    			; Default Arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = LegolasBowWarhead
	End
End

;-----------------------------------
Weapon LegolasBowWarhead
  ProjectileCollidesWith 	= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR
  HitStoredTarget 		= Yes					; Always hits initial target.
  DamageNugget                       					; A basic Nugget that just does damage
    Damage        		= LEGOLAS_BOW_DAMAGE
    ;DamageScalar  		= 25000% NONE +MordorMumakil
    Radius        		= 0.0					; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     		= 0
    DamageType    		= HERO_RANGED
    DamageFXType  		= GOOD_ARROW_PIERCE
    DeathType     		= NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon LegolasHawkStrike
    AttackRange 	= LEGOLAS_HAWKSTRIKE_RANGE
    WeaponSpeed 	= 321         					; dist/sec 
    MinWeaponSpeed 	= 241
    MaxWeaponSpeed 	= 481      					; dist/sec Upper limit on scaling, when attacking past nominal "max" range
    FireFX 		= FX_RohanArcherBowWeapon
    ScaleWeaponSpeed 	= Yes 						; Used for lob weapons, scales speed proportional to range
    HitPercentage     	= 100     					;When this weapon is used it will hit exactly 75% of the time.

	;All these delays are controlled by the special power. Basically the special power can
	;launch whenever it's ready.
    DelayBetweenShots		= 0					; time between shots, msec
    PreAttackDelay		= 3000					; we want isntant
    PreAttackType		= PER_POSITION
    FiringDuration		= 1000					; Duration of the archer firing shot is 500ms.
    ClipSize 			= 1
    AutoReloadsClip 		= Yes
    AutoReloadWhenIdle 		= 1	
    ClipReloadTime 		= Min:1 Max:1

    AntiAirborneVehicle		= Yes
    AntiAirborneMonster		= Yes
    
	PreferredTargetBone = B_LLLID 					; Likes to shoot things in their left eye.

	ProjectileNugget                    				; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = LegolasSpecialArrow
		WarheadTemplateName = LegolasHawkStrikeWarhead
	End
	ProjectileNugget                    				; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName = LegolasSpecialArrow2ndArrow
		WarheadTemplateName = LegolasHawkStrikeWarhead
	End
End

;------------------------------
Weapon LegolasHawkStrikeWarhead
	ProjectileCollidesWith 	= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects 	= ENEMIES NEUTRALS NOT_SIMILAR
	HitStoredTarget 	= Yes					; Always hits initial target.
	DamageNugget                        				; A basic Nugget that just does damage
    		DamageScalar  	= 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
		Damage        	= LEGOLAS_HAWKSTRIKE_DAMAGE
		Radius        	= 20
		DelayTime     	= 0
		DamageType    	= HERO
		DamageFXType  	= GOOD_ARROW_PIERCE
		DeathType     	= NORMAL
   		DamageScalar  	= 250% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth
    	End
End

;------------------------------------------------------------------------------
Weapon LegolasSword  ; BALANCE Legolas Sword Weapon
	LeechRangeWeapon      	= Yes
	AttackRange           	= 20.0
	MeleeWeapon           	= Yes
	DelayBetweenShots     	= LEGOLAS_KNIFE_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay        	= LEGOLAS_KNIFE_PREATTACKDELAY 		;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	PreAttackType         	= PER_SHOT 
	FireFX                	= FX_GondorSwordHit
	FiringDuration        	= LEGOLAS_KNIFE_FIRINGDURATION 		;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	RadiusDamageAffects 	= ENEMIES NEUTRALS NOT_SIMILAR
	DamageNugget                        				; A basic Nugget that just does damage
		Damage        	= LEGOLAS_KNIFE_DAMAGE
		Radius        	= 10.0
		DelayTime     	= 0
		DamageType    	= HERO
		DamageFXType  	= SWORD_SLASH
		DeathType     	= NORMAL
	End
End



;------------------------------------------------------------------------------
Weapon MirkwoodArcherBow
	AttackRange         = ELVEN_MIRKWOOD_ARCHER_RANGE
	
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_RANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ELVEN_MIRKWOOD_ARCHER_BOW_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MIN Max:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = ElvenMirkwoodArcherBowWarhead
		ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
	End
	ProjectileNugget	; Fire arrow avialble through fire upgrade
		ProjectileTemplateName  = GoodFactionFireArrow
		WarheadTemplateName     = RohanArcherBowFireWarhead
		RequiredUpgradeNames    = Upgrade_RohanFireArrows
	End
End

Weapon MirkwoodArcherBowBombard
	AttackRange         = ELVEN_MIRKWOOD_ARCHER_BOMBARD_MAXRANGE
	MinimumAttackRange  = #SUBTRACT( ELVEN_MIRKWOOD_ARCHER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_BOMBARD_MAXRANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 0     ;Always scatter
	ScatterRadius       = ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ELVEN_MIRKWOOD_ARCHER_BOW_PREATTACKDELAY  
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MIN Max:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = GoodFactionArrowBombard
		WarheadTemplateName     = ElvenArcherBowBombardWarhead
		ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
	End
	ProjectileNugget	; Fire arrow avialble through fire upgrade
		ProjectileTemplateName  = GoodFactionFireArrowBombard
		WarheadTemplateName     = RohanArcherBowBombardFireWarhead
		RequiredUpgradeNames    = Upgrade_RohanFireArrows
	End
End

;------------------------------------------------------------------------------
Weapon MirkwoodArcherSilverthornBow ;from RohanArcherBow
	AttackRange         = ELVEN_MIRKWOOD_ARCHER_RANGE	; increased range
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_RANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ELVEN_MIRKWOOD_ARCHER_BOW_PREATTACKDELAY
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MIN Max:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = MirkwoodArcherSilverthornProjectile
		WarheadTemplateName     = MirkwoodArcherSilverthornBowWarhead
	End
End

Weapon MirkwoodArcherSilverthornBowBombard ;from RohanArcherBow
	AttackRange         = ELVEN_MIRKWOOD_ARCHER_BOMBARD_MAXRANGE
	MinimumAttackRange  = #SUBTRACT( ELVEN_MIRKWOOD_ARCHER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_RANGE .003 )
	
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = ELVEN_MIRKWOOD_ARCHER_BOW_PREATTACKDELAY
	PreAttackRandomAmount     = 200  
	PreAttackType       = PER_POSITION
	FiringDuration      = 0   

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MIN Max:ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ELVEN_MIRKWOOD_ARCHER_BOW_RELOADTIME_MAX 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  = MirkwoodArcherSilverthornProjectileBombard
		WarheadTemplateName     = MirkwoodArcherSilverthornBowBombardWarhead
	End
End

;----------------------------
Weapon MirkwoodArcherSilverthornBowWarheadStructural
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
   		Damage        = STRUCTURE_BOW_DAMAGE
    		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    		DelayTime     = 0
    		DamageType    = STRUCTURAL ; Moving all structure-based weapons over to Structural Damage for balance reasons - GB
    		DamageFXType  = GOOD_ARROW_PIERCE
    		DeathType     = NORMAL
    		DamageScalar  = 0% NONE +EntMoot +ElvenEntMoot
  	End
	


	; Damage to everything else is increased
  	DamageNugget
	    	Damage        		= STRUCTURE_BOW_DAMAGE
		Radius        		= 0.0
	    	DelayTime     		= 0
		DamageType		= MAGIC
		DamageFXType		= MAGIC
	    	DeathType     		= EXPLODED
	End
	

	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End

End


;----------------------------
Weapon MirkwoodArcherSilverthornBowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
	
	; Damage to structures is the same as before
  	DamageNugget
  		;SpecialObjectFilter = NONE +STRUCTURE
	    	Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE_UPGRADE_PIERCE
		Radius        = 0.0
	   	DelayTime     = 0
	    	DamageType    = PIERCE
	    	DamageFXType  = GOOD_ARROW_PIERCE
	    	DeathType     = EXPLODED
	End

	; Damage to everything else is increased
  	DamageNugget
  		;SpecialObjectFilter 	= ALL -STRUCTURE
	    	Damage        		= ELVEN_MIRKWOOD_ARCHER_DAMAGE_UPGRADE_MAGIC
		Radius        		= 0.0
	    	DelayTime     		= 0
		DamageType		= MAGIC
		DamageFXType		= MAGIC
	    	DeathType     		= EXPLODED
	    	DamageScalar  = 25% NONE +STRUCTURE
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End

End

Weapon MirkwoodArcherSilverthornBowBombardWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = No
	
	; Damage to structures is the same as before
  	DamageNugget
  		;SpecialObjectFilter = NONE +STRUCTURE
	    	Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE_UPGRADE_PIERCE
		Radius        = 0.0
	   	DelayTime     = 0
	    	DamageType    = PIERCE
	    	DamageFXType  = GOOD_ARROW_PIERCE
	    	DeathType     = EXPLODED
	End

	; Damage to everything else is increased
  	DamageNugget
  		;SpecialObjectFilter 	= ALL -STRUCTURE
	    	Damage        		= ELVEN_MIRKWOOD_ARCHER_DAMAGE_UPGRADE_MAGIC
		Radius        		= 0.0
	    	DelayTime     		= 0
		DamageType		= MAGIC
		DamageFXType		= MAGIC
	    	DeathType     		= EXPLODED
	    	DamageScalar  = 25% NONE +STRUCTURE
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End

End




;------------------------------------------------------------------------------
Weapon LorienElvenBow     ; BALANCE Lorien Archer weapon
	AttackRange         = ELVEN_LORIENARCHER_ARCHER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_LORIENARCHER_ARCHER_RANGE .003 )
	
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
	    WarheadTemplateName       = LorienBowWarhead
	    ForbiddenUpgradeNames     = Upgrade_ElvenSilverthornArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
	    ProjectileTemplateName    = MirkwoodArcherSilverthornProjectile
	    WarheadTemplateName       = LorienBowSilverthorneWarhead
	    RequiredUpgradeNames      = Upgrade_ElvenSilverthornArrows
  	End
End

;------------------------------------------------------------------------------
Weapon ElvenHorseBow     ; BALANCE Lorien Archer weapon
	AttackRange         = ELVEN_HORSEARCHER_ARCHER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_HORSEARCHER_ARCHER_RANGE .003 )
	
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 0
	PreAttackDelay      = 700 
	;PreAttackRandomAmount     = 200   
	PreAttackType       = PER_SHOT
	FiringDuration      = 1500
  	RequireFollowThru			= Yes

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
	    WarheadTemplateName       = HorseBowWarhead
	    ForbiddenUpgradeNames     = Upgrade_ElvenSilverthornArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
	    ProjectileTemplateName    = MirkwoodArcherSilverthornProjectile
	    WarheadTemplateName       = LorienBowSilverthorneWarhead
	    RequiredUpgradeNames      = Upgrade_ElvenSilverthornArrows
  	End
End

;------------------------------------------------------------------------------
Weapon HorseBowWarhead
  ; ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES (4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES ;(12/15/05 removed everything buy ENEMIES since that's how most other bows work) NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_LORIENARCHER_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
    DamageScalar  = 150% NONE +CAVALRY
    DamageScalar  = 50% NONE +GondorTowerShieldGuard +RohanSpearmen +ElvenMithlondSentry +DwarvenPhalanx +ArnorTowerShieldGuard
    DamageScalar  = 50% NONE +AngmarRhudaurSpearman +WildMarauder +IsengardPikeman +AngmarHillTroll +MordorEasterling
  End
End

;------------------------------------------------------------------------------
Weapon LorienMallornTreeBow     ; BALANCE Lorien Archer weapon
	AttackRange         = ELVEN_LORIENARCHER_ARCHER_RANGE

	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481		; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes		; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100		;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       = 16.0		;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta	= 20		; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 10
	PreAttackDelay      = ROHAN_ELVENWARRIOR_BOW_PREATTACKDELAY 
	PreAttackType       = PER_POSITION
	FiringDuration      = 100

	OverrideVoiceAttackSound			= ElvenWarriorVoiceAttackBow
	  
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= 800
	ContinuousFireOne	= 0
	ContinuousFireCoast	= ROHAN_ELVENWARRIOR_BOW_RELOADTIME_MAX
	  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget                    ; Default arrow
	    ProjectileTemplateName    = GoodFactionArrow
	    WarheadTemplateName       = StructureBowWarhead
	End
End


Weapon LorienElvenBowBombard     ; BALANCE Lorien Archer weapon
	AttackRange         = ELVEN_LORIENARCHER_ARCHER_BOMBARD_MAXRANGE
	MinimumAttackRange  = #SUBTRACT( ELVEN_LORIENARCHER_ARCHER_BOMBARD_MINRANGE 75 )
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_LORIENARCHER_ARCHER_BOMBARD_MAXRANGE .003 )
	
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 0     ;Always scatter
	ScatterRadius       = ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	  
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
	
	NoVictimNeeded		= Yes
	BombardType			= Yes

	ProjectileNugget                    ; Default arrow
	    ProjectileTemplateName    = GoodFactionArrowBombard
	    WarheadTemplateName       = LorienBowBombardWarhead
	    ForbiddenUpgradeNames     = Upgrade_ElvenSilverthornArrows
	End
	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
	    ProjectileTemplateName    = MirkwoodArcherSilverthornProjectileBombard
	    WarheadTemplateName       = LorienBowBombardSilverthorneWarhead
	    RequiredUpgradeNames      = Upgrade_ElvenSilverthornArrows
  	End
End

;----------------------------
Weapon LorienBowWarhead
  ; ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES (4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES ;(12/15/05 removed everything buy ENEMIES since that's how most other bows work) NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_LORIENARCHER_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon LorienBowBombardWarhead
  ; ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES (4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES ;(12/15/05 removed everything buy ENEMIES since that's how most other bows work)  NEUTRALS ALLIES NOT_SIMILAR
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_LORIENARCHER_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;----------------------------
Weapon LorienBowSilverthorneWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ELVEN_LORIENARCHER_ARCHER_DAMAGE_UPGRADE_PIERCE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	; Damage to everything else is increased
  	DamageNugget
  		;SpecialObjectFilter = ALL -STRUCTURE
	    	Damage        	= ELVEN_LORIENARCHER_ARCHER_DAMAGE_UPGRADE_MAGIC
		Radius        	= 0.0
	    	DelayTime     	= 0
		DamageType	= MAGIC
		DamageFXType	= MAGIC
	    DeathType     	= EXPLODED
	    DamageScalar  = 25% NONE +STRUCTURE
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End
	
End

Weapon LorienBowBombardSilverthorneWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ELVEN_LORIENARCHER_ARCHER_DAMAGE_UPGRADE_PIERCE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	; Damage to everything else is increased
  	DamageNugget
  		;SpecialObjectFilter = ALL -STRUCTURE
	    	Damage        	= ELVEN_LORIENARCHER_ARCHER_DAMAGE_UPGRADE_MAGIC
		Radius        	= 0.0
	    	DelayTime     	= 0
		DamageType	= MAGIC
		DamageFXType	= MAGIC
	    DeathType     	= EXPLODED
	    DamageScalar  = 25% NONE +STRUCTURE
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End
	
End

;----------------------------
Weapon ElvenBowSilverthorneWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ROHAN_ELVEN_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	; Damage to everything else is increased
  	DamageNugget
  		SpecialObjectFilter = ALL -STRUCTURE
	    Damage        = 5
		Radius        = 0.0
	    DelayTime     = 0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
	    DeathType     = EXPLODED
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End
	
End



//-----------------------------------------------------------------------------
// This is the attack with rock in hand
Weapon ElvenVigilantEntRockThrow // BALANCE VigilantEnt Weapon Rock
	HoldDuringReload			= Yes							// Cache any commands during the reload so we don't wander off half way through reload.
	AttackRange					= ELVEN_VIGILANTENT_ROCK_RANGE
	MinimumAttackRange 			= ELVEN_VIGILANTENT_ROCK_RANGE_MIN
	
	WeaponSpeed					= 200.0							// dist/sec (huge value == effectively instant)
	FireFX						= FX_EntThrowSmallRock
	PreAttackDelay				= 800
	FiringDuration				= 3200
	PreAttackType				= PER_SHOT						// Do the delay each time we attack a new target
	DelayBetweenShots			= 6000
	HitPercentage				= 0								// never auto hits, always hits ground
	ScatterRadius				= 4.0							// When this weapon misses it can randomly miss by as much as this distance.
	IsAimingWeapon				= Yes							// Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded				= Yes							// Need no target
	LeechRangeWeapon			= Yes
	AcceptableAimDelta			= 90

	HoldAfterFiringDelay		= 4000
	AutoReloadWhenIdle			= 2500
	AutoReloadsClip 			= No
	ClipReloadTime 				= 4250
	
	// A Nugget that creates an Object and sends it to the target with a Warhead
	ProjectileNugget                    			
		ProjectileTemplateName	= VigilantEntRock
		WarheadTemplateName		= VigilantEntRockWarhead
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
End

//----------------------------
Weapon VigilantEntRockWarhead
	//FireFX				= FX_ImpactEntRock
	ProjectileCollidesWith	= ENEMIES NEUTRAL  STRUCTURES WALLS 
	RadiusDamageAffects		= ENEMIES ALLIES NEUTRALS 
  
	// A basic Nugget that just does damage
	DamageNugget                        
		Damage        = ELVEN_VIGILANTENT_ROCK_DAMAGE
		Radius        = 20.0
		DelayTime     = 0
		DamageType    = SIEGE ; BALANCE BABY -GB
		DamageFXType  = SMALL_ROCK
		DeathType     = NORMAL
	    DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	End

	// A Nugget that throws things back with force
	MetaImpactNugget                    
;		HeroResist			= .75
		ShockWaveAmount   = 25.0
		ShockWaveRadius   = 20.0
		ShockWaveTaperOff = 0.75
		//ShockWaveZMult    = 1.20
	End
End



;------------------------------------------------------------------------------
Weapon RivendellArcherBow       ; BALANCE Archer Weapon
  AttackRange               = ELVEN_RIVENDELLARCHER_HORSEBOW_RANGE
  	
	
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
    WarheadTemplateName     = RivendellArcherBowWarhead
    ForbiddenUpgradeNames   = Upgrade_ElvenSilverthornArrows
  End

	ProjectileNugget                    ; Fire arrow available from fire arrow upgrade
	    ProjectileTemplateName    = MirkwoodArcherSilverthornProjectile
	    WarheadTemplateName       = RivendellArcherBowSilverthornWarhead
	    RequiredUpgradeNames      = Upgrade_ElvenSilverthornArrows
  	End
End

;----------------------------
Weapon RivendellArcherBowWarhead
  	RadiusDamageAffects = ENEMIES 
	HitStoredTarget = Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ELVEN_RIVENDELLARCHER__BOW_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
	    DelayTime     = 0
	    DamageType    = PIERCE
	    DamageFXType  = GOOD_ARROW_PIERCE
	    DeathType     = EXPLODED
	End
End

Weapon RivendellArcherBowSilverthornWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget = Yes	; Always hits initial target.
	
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ELVEN_RIVENDELLARCHER_DAMAGE_UPGRADE_PIERCE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
	End

	; Damage to everything else is increased
  	DamageNugget
  		;SpecialObjectFilter = ALL -STRUCTURE
	    	Damage        	= ELVEN_RIVENDELLARCHER_DAMAGE_UPGRADE_MAGIC
		Radius        	= 0.0
	    	DelayTime     	= 0
		DamageType	= MAGIC
		DamageFXType	= MAGIC
	    DeathType     	= EXPLODED
	    DamageScalar  = 25% NONE +STRUCTURE
	End
	
	; ..and meta impact damage on infantry
	MetaImpactNugget
		SpecialObjectFilter = NONE +INFANTRY
		ShockWaveAmount   = 50.0
		ShockWaveRadius   = 10.0
		ShockWaveArc      = 90 ; in degrees to each side 180 is full circle
		ShockWaveTaperOff = 1.0
		ShockWaveSpeed    = 0.0
		ShockWaveZMult    = 1.0
		OnlyWhenJustDied = Yes
	End

End

;------------------------------------------------------------------------------
Weapon ElvenRivendellLancerLance       ; BALANCE
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
		ForbiddenUpgradeNames    = Upgrade_ElvenForgedBlades
	End

	DamageNugget
		Damage			= ELVEN_RIVENDELLLANCER_LANCE_DAMAGE_UPGRADE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= CAVALRY
		DamageFXType		= SWORD_SLASH
		DeathType		= NORMAL
		RequiredUpgradeNames    = Upgrade_ElvenForgedBlades
	End

End



;------------------------------------------------------------------------------
Weapon MithlondSentryPike     ; BALANCE
  LeechRangeWeapon      = Yes
  AttackRange           = 30
  MeleeWeapon           = Yes	; Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots     = ELVEN_MITHLONDSENTRY_PIKE_DELAYBETWEENSHOTS				; time between shots, msec
  PreAttackDelay        = ELVEN_MITHLONDSENTRY_PIKE_PREATTACKDELAY				
  PreAttackType         = PER_SHOT			; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX		= FX_Flanking
  FiringDuration        = ELVEN_MITHLONDSENTRY_PIKE_FIRINGDURATION				
  
	DamageNugget								; A basic Nugget that just does damage
		Damage        = ELVEN_MITHLONDSENTRY_PIKE_DAMAGE
		DamageType    = SPECIALIST
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		;LostLeadershipUselessAgainst = CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		ForbiddenUpgradeNames    = Upgrade_ElvenForgedBlades
		FlankingBonus = 50%
	End

	DamageNugget								; A basic Nugget that just does damage
		Damage        = ELVEN_MITHLONDSENTRY_PIKE_DAMAGE_UPGRADE
		DamageType    = SPECIALIST
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		;LostLeadershipUselessAgainst = CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		RequiredUpgradeNames    = Upgrade_ElvenForgedBlades
		FlankingBonus = 50%
	End
End

;------------------------------------------------------------------------------
Weapon ZephyrStrikeWeapon     ; BALANCE
	IdleAfterFiringDelay = 0
	AttackRange = ZEPHYR_STRIKE_RANGE
	MinimumAttackRange = 0.8
	WeaponSpeed = 401         ; dist/sec 
	MinWeaponSpeed = 241
	MaxWeaponSpeed = 601      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               ; time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
	PreAttackFX           = FX_GandalfPreAttackBlast
	FireFX                = FX_GandalfBlast
	FiringDuration      = 1400
  
	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= ZEPHYR_STRIKE_DAMAGE
		Radius			= ZEPHYR_STRIKE_RADIUS
		DamageType		= FORCE
		DamageFXType	= SWORD_SLASH
		DeathType		= EXPLODED
		DamageSpeed		= ZEPHYR_STRIKE_SHOCKWAVE_SPEED ; must match the ShockWaveSpeed below
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount   = ZEPHYR_STRIKE_SHOCKWAVE_AMOUNT
		ShockWaveRadius   = ZEPHYR_STRIKE_SHOCKWAVE_RADIUS
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = ZEPHYR_STRIKE_SHOCKWAVE_SPEED
	End
End


;------------------------------------------------------------------------------
Weapon ElvenBattleTowerBow       ; BALANCE Archer Weapon
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
  AcceptableAimDelta		= 360.0	; We want to be able to shoot all round, as we canit move.

  CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent


  ProjectileNugget          ; Default arrow
    ProjectileTemplateName  = GoodFactionArrow
    WarheadTemplateName     = StructureBowWarhead
    ForbiddenUpgradeNames   = Upgrade_ElvenSilverthornArrowsTower
  End

  ProjectileNugget          ; Upgraded arrow
    ProjectileTemplateName  = MirkwoodArcherSilverthornProjectile
    WarheadTemplateName     = MirkwoodArcherSilverthornBowWarheadStructural
    RequiredUpgradeNames	= Upgrade_ElvenSilverthornArrowsTower
  End
End



;------------------------------------------------------------------------------
Weapon ElvenWarriorSword 
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = 800            ; time between shots, msec
	PreAttackDelay        = 700             ; 567 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FireFX                = FX_GondorSwordHit
	FireFlankFX			= FX_Flanking
	FiringDuration        = 800    ; Duration of the sword swing
	;OverrideVoiceAttackSound = ElvenWarriorVoiceAttack

	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ELVEN_FIGHTER_MELEE_DAMAGE
	    DamageScalar  = 75% NONE +Structure
	    Radius        = 0.0
	    DelayTime     = 0
	    DamageType    = SLASH
	    DamageFXType  = SWORD_SLASH
	    DeathType     = NORMAL
	    FlankingBonus = 50%
	   	ForbiddenUpgradeNames      = Upgrade_ElvenForgedBlades
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ELVEN_FIGHTER_MELEE_DAMAGE_UPGRADE
		DamageScalar  = 75% NONE +Structure
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		FlankingBonus = 50%
		RequiredUpgradeNames      = Upgrade_ElvenForgedBlades
	End
End

;------------------------------------------------------------------------------
Weapon ElvenLindonWarriorSword 
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = 800            ; time between shots, msec
	PreAttackDelay        = 700             ; 567 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
	FireFX                = FX_GondorSwordHit
	FireFlankFX			= FX_Flanking
	FiringDuration        = 800    ; Duration of the sword swing
	;OverrideVoiceAttackSound = ElvenWarriorVoiceAttack

	DamageNugget                        ; A basic Nugget that just does damage
	    Damage        = ELVEN_LINDONWARRIOR_MELEE_DAMAGE
	    Radius        = 0.0
	    DelayTime     = 0
	    DamageType    = HERO
	    DamageFXType  = SWORD_SLASH
	    DeathType     = NORMAL
	    FlankingBonus = 50%
	   	ForbiddenUpgradeNames      = Upgrade_ElvenForgedBlades
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = ELVEN_LINDONWARRIOR_MELEE_DAMAGE_UPGRADE
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		FlankingBonus = 50%
		RequiredUpgradeNames      = Upgrade_ElvenForgedBlades
	End
End


;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;
;  Elves
;
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon HaldirBow
	AttackRange			= HALDIR_BOW_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( HALDIR_BOW_RANGE .003 )
	
					
	WeaponSpeed			= 321         ; dist/sec 
	MinWeaponSpeed		= 241
	MaxWeaponSpeed		= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage		= 100     ;When this weapon is used it will hit exactly 100% of the time.
	ScatterRadius		= 5.0     ;When this weapon misses it can randomly miss by as much as this distance.

	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= HALDIR_DELAYBETWEENSHOTS 	; time between shots, msec
	PreAttackDelay      = HALDIR_PREATTACKDELAY 	; 1467 is the prep time for archer.
	PreAttackType       = PER_POSITION ; Do the delay each time we attack a new target
	FiringDuration      = HALDIR_FIRINGDURATION 	; Duration of the archer firing shot is 500ms.

    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle	= 1	
    ClipReloadTime		= Min:HALDIR_RELOADTIME_MIN Max:HALDIR_RELOADTIME_MAX
    ContinuousFireOne	= 0
    ContinuousFireCoast	= HALDIR_RELOADTIME_MAX
    InstantLoadClipOnActivate = Yes

    AntiAirborneVehicle	= Yes
    AntiAirborneMonster	= Yes
    
	ProjectileNugget                    ; Default Arrow
		ProjectileTemplateName  = GoodFactionArrow
		WarheadTemplateName     = HaldirBowWarhead
	End
End

;-----------------------------------
Weapon HaldirBowWarhead
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = HALDIR_BOW_DAMAGE
    ;DamageScalar  = 25000% NONE +MordorMumakil
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO_RANGED
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon HaldirGoldenArrow
	AttackRange					= HALDIR_BOW_RANGE				
	LeechRangeWeapon			= Yes
	WeaponSpeed					= 321
	MinWeaponSpeed				= 241
	MaxWeaponSpeed				= 481
	FireFX						= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed			= Yes
	HitPercentage				= 100
	ScatterRadius				= 5.0

	DelayBetweenShots			= HALDIR_DELAYBETWEENSHOTS
	PreAttackDelay				= HALDIR_PREATTACKDELAY
	PreAttackType				= PER_SHOT
	FiringDuration				= HALDIR_FIRINGDURATION

	ProjectileNugget
		ProjectileTemplateName	= HaldirGoldenArrowProjectile
		WarheadTemplateName		= HaldirGoldenArrowWarhead
	End
End

;-----------------------------------
Weapon HaldirGoldenArrowWarhead
	ProjectileCollidesWith	= ENEMIES NEUTRAL
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR
	HitStoredTarget			= Yes
	DamageNugget
		Damage				= HALDIR_GOLDENARROW_DAMAGE
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= HERO_RANGED
		DamageFXType		= GOOD_ARROW_PIERCE
		DeathType			= NORMAL
	End
End


;------------------------------------------------------------------------------
Weapon HaldirSword  ; BALANCE Haldir Sword Weapon
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	DelayBetweenShots     = HALDIR_SWORD_DELAYBETWEENSHOTS 	       ; time between shots, msec
	PreAttackDelay        = HALDIR_SWORD_PREATTACKDELAY 	;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	PreAttackType         = PER_SHOT 
	FireFX                = FX_GondorSwordHit
	FiringDuration        = HALDIR_SWORD_FIRINGDURATION 			;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = HALDIR_SWORD_DAMAGE
		Radius        = 10.0
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
	End
End


;------------------------------------------------------

Weapon LorienArcherMissileHordeRangefinder
	AttackRange			= #SUBTRACT( ELVEN_LORIENARCHER_ARCHER_RANGE 100 )  ; Slightly shorter than the archer's actual weapon
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_LORIENARCHER_ARCHER_RANGE .003 )
	
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a ship.
	FinishAttackOnceStarted = No
	HordeAttackNugget
	End
End

Weapon LorienArcherMissileHordeRangefinderBombard
	AttackRange				= #SUBTRACT( ELVEN_LORIENARCHER_ARCHER_BOMBARD_MAXRANGE 100 )
	MinimumAttackRange		= ELVEN_LORIENARCHER_ARCHER_BOMBARD_MINRANGE

	RangeBonusMinHeight      = 30 ;		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( ELVEN_LORIENARCHER_ARCHER_BOMBARD_MAXRANGE .003 )
	
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a ship.
	FinishAttackOnceStarted = No
	NoVictimNeeded			= Yes
	BombardType				= Yes
	ScatterRadius			= ARCHER_BOMBARD_SCATTER_RADIUS		; Only used for cursor radius
	HordeAttackNugget
	End
End

Weapon MirkwoodArcherMissileHordeRangefinder
	AttackRange			= #SUBTRACT( ELVEN_MIRKWOOD_ARCHER_RANGE 100 )  ; Slightly shorter than the archer's actual weapon
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_RANGE .003 )
	
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a ship.
	FinishAttackOnceStarted = No
	HordeAttackNugget
	End
End

Weapon MirkwoodArcherMissileHordeRangefinderBombard
	AttackRange				= #SUBTRACT( ELVEN_MIRKWOOD_ARCHER_BOMBARD_MAXRANGE 100 ) 
	MinimumAttackRange		= ELVEN_MIRKWOOD_ARCHER_BOMBARD_MINRANGE
	
	RangeBonusMinHeight      = 30 ;		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( ELVEN_MIRKWOOD_ARCHER_BOMBARD_MAXRANGE .003 )
		
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	CanFireWhileMoving		= Yes		; When aboard a ship.
	FinishAttackOnceStarted = No
	NoVictimNeeded			= Yes
	BombardType				= Yes
	ScatterRadius			= ARCHER_BOMBARD_SCATTER_RADIUS		; Only used for cursor radius
	
	HordeAttackNugget
	End
End


Weapon ElvenArcherMissileHordeRangefinder
	AttackRange			= 330 ;250.0 ; Slightly shorter than the archer's actual weapon
	DelayBetweenShots		= 1000
	LeechRangeWeapon		= Yes
	AcceptableAimDelta		= 45
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	FinishAttackOnceStarted = No
	HordeAttackNugget
	End
End




;----------------------------
Weapon ElvenArcherBowWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon ElvenArcherBowBombardWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = No
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

;----------------------------
Weapon ElvenMirkwoodArcherBowWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End

Weapon ElvenMirkwoodArcherBowBombardWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
  HitStoredTarget = No
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELVEN_MIRKWOOD_ARCHER_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End



;------------------------------------------------------------------------------
Weapon ArwenSword ; BALANCE Arwen Sword Weapon
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2        ; dist/sec (huge value == effectively instant)
  DelayBetweenShots     = ARWEN_DELAYBETWEENSHOTS 			; time between shots, msec
  PreAttackDelay        = ARWEN_PREATTACKDELAY 	; 433 is natural time of the stabbing animation.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        = ARWEN_FIRINGDURATION 			; min 600 for anim
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = ARWEN_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;------------------------------------------------------------------------------
Weapon ArwenPersonalFlood
	FireFX					= FX_ArwenFlood
	AttackRange				= 150

	WeaponOCLNugget
		WeaponOCLName		= OCL_ArwenPersonalFlood
	End

	FireLogicNugget
		LogicType		= DECREASE_BURN_RATE
		Radius			= ARWEN_FLOOD_DECREASEBURNRATE_RADIUS
		Damage			= ARWEN_FLOOD_DECREASEBURNRATE_AMOUNT
		DelayTime		= 200  
	End
End

;------------------------------------------------------------------------------
Weapon ElvenFloodgateWeapon
  AttackRange               = ELVEN_FLOODGATEEXPANSION_RANGE    
  HitPercentage             = 100										;//When this weapon is used it will hit exactly 50% of the time.    
  PreAttackDelay            = ELVEN_FLOODGATEEXPANSION_PREATTACKDELAY   ;//prep time for the unit/structure to fire.
  PreAttackType             = PER_SHOT									;//Do the delay each time we attack a new target
  FiringDuration            = ELVEN_FLOODGATEEXPANSION_FIRINGDURATION   ;//Duration of the archer firing shot is 500ms.  
  AcceptableAimDelta		= 120.0										;//We want to be able to shoot all round, as we cant move.
  DelayBetweenShots         = ELVEN_FLOODGATEEXPANSION_DELAYBETWEENSHOTS

	WeaponOCLNugget
		WeaponOCLName = OCL_ElvenFloodgateFlood
	End

	FireLogicNugget
		LogicType		= DECREASE_BURN_RATE
		Radius			= ELVEN_FLOODGATEEXPANSION_DECREASEBURNRATE_RADIUS
		Damage			= ELVEN_FLOODGATEEXPANSION_DECREASEBURNRATE_AMOUNT
	End
End



;//-------------------------------------------------------------------------------------
;//------------	ELVEN ------------------------------------------------------------------
;//-------------------------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon ElvenThranduilBow 
	AttackRange         = THRANDUIL_BOW_RANGE	
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( THRANDUIL_BOW_RANGE .003 )  
	
	
	WeaponSpeed         = 321         ; dist/sec 
	MinWeaponSpeed      = 241
	MaxWeaponSpeed      = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              = FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    = Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       = 100     ;When this weapon is used it will hit exactly 50% of the time.
	HitStoredTarget = Yes	; Always hits initial target.
	;ScatterRadius       = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	DelayBetweenShots   = 0
	PreAttackDelay      = ROHAN_ELVENWARRIOR_BOW_PREATTACKDELAY 
	PreAttackType       = PER_POSITION
	FiringDuration      = 0

	;OverrideVoiceAttackSound		= ElvenWarriorVoiceAttackBow
	  
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:THRANDUIL_RELOADTIME_MIN Max:THRANDUIL_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= THRANDUIL_RELOADTIME_MAX
	  
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget                    ; Default arrow
	    ProjectileTemplateName    = GoodFactionArrow
	    WarheadTemplateName       = ElvenThranduilBowWarhead
	    ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
	End

End

;----------------------------
Weapon ElvenThranduilBowWarhead
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES (4/23/04 removed friendly fire)
  RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = THRANDUIL_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO_RANGED
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
End


;------------------------------------------------------------------------------
Weapon ElvenThranduilBowDeadeye
	AttackRange					= THRANDUIL_BOW_RANGE_DEADEYE
	WeaponSpeed					= 321
	MinWeaponSpeed				= 241
	MaxWeaponSpeed				= 481
	FireFX						= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed			= Yes
	HitPercentage				= 100
	HitStoredTarget				= Yes
	DelayBetweenShots			= 0
	PreAttackDelay				= ROHAN_ELVENWARRIOR_BOW_PREATTACKDELAY
	PreAttackType				= PER_POSITION
	FiringDuration				= 0
	;OverrideVoiceAttackSound	= ElvenWarriorVoiceAttackBow
	ClipSize					= 1
	AutoReloadsClip				= Yes
	AutoReloadWhenIdle			= 1
	ClipReloadTime				= Min:THRANDUIL_RELOADTIME_MIN Max:THRANDUIL_RELOADTIME_MAX
	ContinuousFireOne			= 0
	ContinuousFireCoast			= THRANDUIL_RELOADTIME_MAX
	AntiAirborneVehicle			= Yes
	AntiAirborneMonster			= Yes
	HitPassengerPercentage		= 20%
	CanBeDodged					= Yes

	ProjectileNugget
		ProjectileTemplateName	= GoodFactionArrowDeadeye
		WarheadTemplateName		= ElvenThranduilBowWarheadDeadeye
		ForbiddenUpgradeNames	= Upgrade_RohanFireArrows
	End

End

;----------------------------
Weapon ElvenThranduilBowWarheadDeadeye
	ProjectileCollidesWith		= ENEMIES NEUTRAL STRUCTURES WALLS
	RadiusDamageAffects			= ENEMIES NEUTRALS ALLIES NOT_SIMILAR
	HitStoredTarget				= Yes
	DamageNugget
		Damage					= THRANDUIL_BOW_DAMAGE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO_RANGED
		DamageFXType			= GOOD_ARROW_PIERCE
		DeathType				= NORMAL
	End
	DamageNugget
		Damage					= THRANDUIL_BOW_DAMAGE_DEADEYE_MAGICAL
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= MAGIC
		DamageFXType			= GOOD_ARROW_PIERCE
		DeathType				= NORMAL
	End
	MetaImpactNugget
		SpecialObjectFilter		= NONE +INFANTRY
		ShockWaveAmount			= 50.0
		ShockWaveRadius			= 5.0
		ShockWaveArc			= 90
		ShockWaveTaperOff		= 1.0
		ShockWaveSpeed			= 0.0
		ShockWaveZMult			= 1.0
		OnlyWhenJustDied		= Yes
	End
End

;------------------------------------------------------------------------------

Weapon ThranduilThornofVengeance
	AttackRange				= FARAMIR_WOUNDING_ARROW_RANGE
	LeechRangeWeapon			= Yes
	WeaponSpeed				= 321				 ; dist/sec 
	MinWeaponSpeed			= 241
	MaxWeaponSpeed			= 481			; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX					= FX_ThranduilThornOfVengeance	;FX_FaramirWoundingArrow
	ScaleWeaponSpeed		= Yes ; Used for lob weapons, scales speed proportional to range
	HitStoredTarget			= Yes	; Always hits initial target.
	HitPercentage			= 100		 
	ScatterRadius			= 0.0		 ;When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots		= 15000									; time between shots, msec
	PreAttackDelay			= 1										; we want isntant
	PreAttackType			= PER_POSITION
	FiringDuration			= 1										; Duration of the archer firing shot is 500ms.
	ClipSize				= 1
	AutoReloadsClip			= Yes
	AutoReloadWhenIdle		= 1	
	ClipReloadTime			= Min:THRANDUIL_THORN_RELOADTIME_MIN Max:THRANDUIL_THORN_RELOADTIME_MAX
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	PreferredTargetBone		= B_LLLID ; Likes to shoot things in their left eye.
	
	
	ProjectileNugget										; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= ThranSpecialArrow
		WarheadTemplateName	= ThranduilThornofVengeanceWarhead
	End
End

;------------------------------

Weapon ThranduilThornofVengeanceWarhead
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects	 = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget		 = Yes	; Always hits initial target.
  HitPercentage		     = 100	
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = THRANDUIL_THORN_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = GOOD_ARROW_PIERCE
    DeathType     = NORMAL
  End
 
  DamageNugget                       
	Damage        		= THRANDUIL_THORN_FIRE_DAMAGE				
	DamageType    		= MAGIC
	DamageFXType  		= MAGIC
	DeathType     		= BURNED
	Radius				= 35
	DelayTime			= 200  
  End

  DamageNugget                      
	Damage        		= THRANDUIL_THORN_MAGIC_DAMAGE		
	DamageType    		= MAGIC
	DamageFXType  		= ELECTRIC
	DeathType     		= BURNED
	DelayTime			= 200  
  End
  
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .25
    ShockWaveAmount   = 70.0
    ShockWaveRadius   = 15.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
  
End

;------------------------------------------------------------------------------
Weapon ElvenThranduilSword  ; BALANCE Legolas Sword Weapon
	;LeechRangeWeapon     = Yes
	;AttackRange           = 400
	MeleeWeapon           = Yes
	DelayBetweenShots     = THRANDUIL_KNIFE_DELAYBETWEENSHOTS	       ; time between shots, msec
	PreAttackDelay        = THRANDUIL_KNIFE_PREATTACKDELAY 	;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	PreAttackType         = PER_SHOT 
	;FireFX                = FX_GondorSwordHit
	FiringDuration        = THRANDUIL_KNIFE_FIRINGDURATION 	;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
	RadiusDamageAffects	  = ENEMIES NEUTRALS NOT_SIMILAR
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = THRANDUIL_KNIFE_DAMAGE	
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
	End
End

;------------------------------------------------------------------------------
Weapon GaladrielSword
	RadiusDamageAffects			= ENEMIES NEUTRALS NOT_SIMILAR
	LeechRangeWeapon			= Yes
	CanFireWhileMoving			= No
	AttackRange					= 30.0
	MeleeWeapon					= Yes
	AcceptableAimDelta			= 60				; Just needs to sort of face in the general direction
	FireFX						= FX_GondorSwordHit	; steal from gondor
	DelayBetweenShots			= 500				; time between shots, msec
	PreAttackDelay				= 550				; TEMP 350 is sword swing delay time before contact with target
	PreAttackType				= PER_SHOT			; Do the delay each time we attack
	FiringDuration				= 800				; TEMP Duration of the sword swing
	DamageDealtAtSelfPosition	= Yes				; A melee based AoE.  Arc radiates from me, not them

	; Magic damage
	DamageNugget									; A basic Nugget that just does damage
		Damage			= GALADRIEL_DAMAGE
		Radius			= 75.0
		DamageArc		= 75
		DelayTime		= 0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= NORMAL
		DamageScalar  		= 40% NONE +HERO
	End

	; Push back
	MetaImpactNugget								; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 60
		ShockWaveRadius		= 70
		ShockWaveArc		= 70					; Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

;------------------------------------------------------------------------------
Weapon ElrondBow           ; BALANCE Elven Archer Weapon
  AttackRange               = ELROND_BOW_RANGE
  
  	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( ELROND_BOW_RANGE .003 )
	
	
  WeaponSpeed               = 321         ; dist/sec 
  MinWeaponSpeed            = 241
  MaxWeaponSpeed            = 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX                    = FX_RohanArcherBowWeapon
  ScaleWeaponSpeed          = Yes      ; Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100      ;When this weapon is used it will hit exactly 100% of the time.
  ScatterRadius             = 16.0     ;When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots         = 0     ; time between shots, msec
  PreAttackDelay            = 833     ; 1467 is the prep time for archer.
  PreAttackRandomAmount     = 0      ; amount of additional preattack variance for archer type attacks only  
  PreAttackType             = PER_POSITION ; Do the delay each time we attack a new target
  FiringDuration            = 0     ; Duration of the archer firing shot is 500ms.
  
    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle	= 1	
    ClipReloadTime		= Min:1800 Max:1800
    ContinuousFireOne	= 0
    ContinuousFireCoast	= 1800
  
  IsAimingWeapon            = Yes
  AntiAirborneVehicle       = Yes
  AntiAirborneMonster		= Yes

  ProjectileNugget          ; Default arrow
    ProjectileTemplateName  = GoodFactionArrow
    WarheadTemplateName     = ElvenArcherBowWarhead
    ForbiddenUpgradeNames   = Upgrade_RohanFireArrows
  End

  ProjectileNugget          ; Fire arrow available through fire upgrade
    ProjectileTemplateName  = GoodFactionFireArrow
    WarheadTemplateName     = GondorArcherBowWarhead
    RequiredUpgradeNames    = Upgrade_RohanFireArrows
  End
End

;------------------------------------------------------------------------------
Weapon ElrondSword
  LeechRangeWeapon      = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  DelayBetweenShots     = ELROND_DELAYBETWEENSHOTS 			
             ; time between shots, msec
  PreAttackDelay        = ELROND_PREATTACKDELAY  				; 400 is sword swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  FireFX                = FX_GondorSwordHit
  FiringDuration        = ELROND_FIRINGDURATION				; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = ELROND_DAMAGE						
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
  End
End

;-------------------------------------------------------------------------------
Weapon GlorfindelSword
	LeechRangeWeapon			= Yes
	AttackRange					= 20.0
	MeleeWeapon					= Yes
	DelayBetweenShots			= GLORFINDEL_SWORD_DELAYBETWEENSHOTS
	PreAttackDelay				= GLORFINDEL_SWORD_PREATTACKDELAY
	PreAttackType				= PER_SHOT
	FireFX						= FX_GondorSwordHit
	FiringDuration				= GLORFINDEL_SWORD_FIRINGDURATION
	RadiusDamageAffects			= ENEMIES NEUTRALS NOT_SIMILAR
	DamageNugget
		Damage			= GLORFINDEL_SWORD_DAMAGE
		Radius			= 10.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType		= SWORD_SLASH
		DeathType		= Normal
	End
End

;-------------------------------------------------------------------------------
;Weapon WaterCharge
;	MinimumAttackRange			= 100.0
;	AttackRange					= 240.0
;	DelayBetweenShots			= 500            ; time between shots, msec
;	FiringDuration				= 0 ;min 933 for anim              ; how long to reload a Clip, msec
;	;PreAttackDelay				= 1400
;	PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
;	;PreAttackFX				= FX_TrollTreeSwing
;	CanFireWhileCharging		= yes
;	MeleeWeapon					= Yes
;	
;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage					= 3000
;		Radius					= 24.0
;		DelayTime				= 0
;		DamageType				= CRUSH
;		DamageFXType			= CLUBBING
;		DeathType				= NORMAL
;	End
;	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
;		ShockWaveAmount			= 60.0
;		ShockWaveRadius			= 24.0
;		ShockWaveTaperOff		= 0.7
;	End
;End