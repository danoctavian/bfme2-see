; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Weapon.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

; ------------------------------------------------------------------------------
Weapon BalrogCrush  ; Used when the Balrog crush an enemy.
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0            ; time between shots, msec
  PreAttackDelay        = 0 ;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0 ;
  FireFX				= FX_GenericCrushImpactSound

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_CRUSH_DAMAGE				; A whole lot of damage.
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = CRUSHED
  End
End

; ------------------------------------------------------------------------------
Weapon BalrogDeathCrush  ; Used when the Balrog crush enemies when it dies.
	LeechRangeWeapon      = Yes
	AttackRange           = 9999.0
	MeleeWeapon           = No
	DelayBetweenShots     = 0							; time between shots, msec
	PreAttackDelay        = 0
	PreAttackType         = PER_SHOT 
	FiringDuration        = 0
	FireFX				= FX_GenericCrushImpactSound

	DamageNugget							           ; A basic Nugget that just does damage
		Damage        = BALROG_CRUSH_DAMAGE				; A whole lot of damage.
		Radius        = 75.0
		DamageType    = CRUSH
		DeathType     = CRUSHED
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount		= 70
		ShockWaveRadius		= 100.0
		ShockWaveTaperOff	= 0.9
		ShockWaveZMult		= 1.20
	End
End

; ------------------------------------------------------------------------------
Weapon MordorBalrogSwordSwipe     ; BALANCE Balrog Weapon
  LeechRangeWeapon      = Yes
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  AttackRange           = 30.0 ;40.0
  MeleeWeapon           = No
  DelayBetweenShots     = 1500            ; time between shots, msec
  PreAttackDelay        = 1300             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_BalrogSwordHit
  FiringDuration        = 1500    ; Duration of the mace swing 
  DamageDealtAtSelfPosition = Yes ; A melee based AoE.  Arc radiates from me, not them
  LockWhenUsing				= Yes
	FinishAttackOnceStarted = Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_SWORD_SWIPE_DAMAGE_FLAME
    DamageScalar  = 25% NONE +COMMANDCENTER			
    Radius        = 70.0
    DamageType    = FLAME
    DamageFXType  = BALROG_SWORD
    DeathType     = BURNED
    DamageArc      = 90
  End

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_SWORD_SWIPE_DAMAGE_NORMAL
    DamageScalar  = 20% NONE +COMMANDCENTER		
    Radius        = 70.0
    DamageType    = SIEGE
    DamageFXType  = BALROG_SWORD
    DeathType     = LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc      = 90
  End
  
	FireLogicNugget						; Lights flammables on fire
		LogicType	= INCREASE_BURN_RATE
		Radius		= 70.0
		Damage		= BALROG_SWORD_SWIPE_DAMAGE_FLAME
	End

  MetaImpactNugget                    ; A Nugget that throws things back with force
		HeroResist		= .25
		KillObjectFilter  	= INSTANT_DEATH_ON_METAIMPACT_OBJFILTER
		ShockWaveAmount = 100 //80.0 ;95.0 ;140 ?!?! Sûl
    ShockWaveRadius   = 70.0
    ShockWaveTaperOff = 0.75
    ShockWaveArc      = 90
    ShockWaveZMult    = 0.600
  End
End

; ------------------------------------------------------------------------------
Weapon MordorBalrogSwordChop     ; BALANCE Balrog Weapon
  LeechRangeWeapon		= Yes		
  RadiusDamageAffects 	= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  AttackRange           = 40.0
  MeleeWeapon			= Yes
  DelayBetweenShots		= 2000            ; time between shots, msec
  PreAttackDelay			= 1400
  PreAttackType			= PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_BalrogSwordHit
  FiringDuration        	= 1200    ; Duration of the mace swing 
  LockWhenUsing			= Yes
  FinishAttackOnceStarted	= Yes 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_SWORD_CHOP_DAMAGE_FLAME	
    DamageScalar  = 25% NONE +COMMANDCENTER		
    Radius        = 20.0
    DamageType    = FLAME
    DamageFXType  = BALROG_SWORD
    DeathType     = BURNED
  End

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_SWORD_CHOP_DAMAGE_STRUCTURAL	
    DamageScalar  = 20% NONE +COMMANDCENTER	
    Radius        = 20.0
    DamageType    = SIEGE
    DamageFXType  = BALROG_SWORD
    DeathType     = LASERED ;now always used instead of NORMAL (Sûl)
    DamageScalar  = 25000% NONE +MinisGateDoor
  End
  
  	FireLogicNugget						; Lights flammables on fire
		LogicType	= INCREASE_BURN_RATE
		Radius		= 40.0 //20.0
		Damage		= BALROG_SWORD_CHOP_DAMAGE_FLAME
	End
End

; ------------------------------------------------------------------------------
Weapon MordorBalrogWhip    
	LeechRangeWeapon	= Yes
	RadiusDamageAffects 	= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	AttackRange			= 300.0
	MeleeWeapon			= No
	DelayBetweenShots	= 30000 ;10000            		; time between shots, msec
	PreAttackDelay		= 1400 
	PreAttackType		= PER_SHOT				; Do the delay each time we attack
	;FireFX				= FX_BalrogSpecialPowerRoar	//Was disabled? This plays when Balrog starts his whip, not when right click-trageting
	FiringDuration			= 1600 
	LockWhenUsing		= Yes
	FinishAttackOnceStarted = Yes
	
	IsAimingWeapon		= Yes //SEE
	AcceptableAimDelta	= 15 //SEE
	AntiAirborneVehicle	= Yes //SEE
	AntiAirborneMonster	= Yes //SEE

	; ForceDisplayPercentReady	= Yes 				; As opposed to displaying clip reload time

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = BALROG_WHIP_DAMAGE_FLAME
		DamageScalar  = 25% NONE +COMMANDCENTER
		DamageScalar  =  350% NONE AND_FLYING_UNITS		
		Radius        = 25.0
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = BALROG_WHIP
		DeathType     = BURNED //NORMAL
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = BALROG_WHIP_DAMAGE
		DamageScalar  = 20% NONE +COMMANDCENTER
		DamageScalar  =  300% NONE AND_FLYING_UNITS		
		Radius        = 25.0
		DelayTime     = 0
		DamageType    = HERO ;SIEGE 
		DamageFXType  = BALROG_WHIP
		DeathType     = LASERED ;now always used instead of NORMAL (Sûl)
	End
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .25
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 25.0
		ShockWaveTaperOff	= 1.0
		ShockWaveZMult		= 1.20
		InvertShockWave		= Yes
	End
	
  	FireLogicNugget						; Lights flammables on fire
		LogicType	= INCREASE_BURN_RATE
		Radius		= 25.0
		Damage		= BALROG_WHIP_DAMAGE_FLAME
	End
End

; ------------------------------------------------------------------------------
Weapon MordorBalrogBreath
  IdleAfterFiringDelay = 0
  AttackRange = 60.0
  WeaponSpeed = 401         ; dist/sec 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ALLIES //ALLIES ENEMIES NOT_SIMILAR
  DelayBetweenShots = 5000               ; time between shots, msec
  PreAttackDelay        = 2600
  PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
  PreAttackFX           = FX_GandalfPreAttackBlast
  FireFX                = NONE ;FX_BalrogBreath ---- commented out for E3, now controled by particle spawning
  FiringDuration      = 1400
 DamageDealtAtSelfPosition = Yes 
  LockWhenUsing				= Yes
	FinishAttackOnceStarted = Yes 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= BALROG_BREATH_DAMAGE
		Radius			= BALROG_BREATH_RADIUS
		DamageScalar  = 25% NONE +COMMANDCENTER
		DelayTime		= 1000
		DamageType		= FLAME
		DamageFXType		= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage = BALROG_BREATH_DAMAGE
		Radius = BALROG_BREATH_RADIUS
		DamageScalar = 20% NONE +COMMANDCENTER
		DelayTime = 1000
		DamageType = MAGIC
		DamageFXType = FLAME
		DeathType = BURNED
		DamageArc	 = 90
		DamageMaxHeight = 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed = 400
    DamageScalar = 25000% NONE +MinisGateDoor
	End

	FireLogicNugget						; Increases fuel where it hits
		LogicType		= INCREASE_FUEL
		Radius			= BALROG_FLAME_FUELINCREASE_RADIUS
		Damage			= BALROG_FLAME_FUELINCREASE_AMOUNT
		MinMaxBurnRate	= BALROG_FLAME_FUELINCREASE_MINMAXBURNRATE
		MaxResistance	= BALROG_FLAME_FUELINCREASE_RESISTANCE
	End
  
	FireLogicNugget						; Lights flammables on fire
		LogicType		= INCREASE_BURN_RATE
		Radius			= BALROG_FLAME_INCREASEBURNRATE_RADIUS
		Damage			= BALROG_FLAME_INCREASEBURNRATE_AMOUNT
	End

End

; ------------------------------------------------------------------------------
Weapon MordorBalrogLeap 
  IdleAfterFiringDelay	= 0
  AttackRange           = 840.0
  MinimumAttackRange	= 120.0
  WeaponSpeed           = 160.0        ; dist/sec (huge value == effectively instant)
  ProjectileSelf		= Yes ; We don't make the projectile throw ourself
  ClipSize              = 1               ; how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 2200   ;1467 min for animation           ; how long to reload a Clip, msec
  AutoReloadsClip		= Yes	
  PreAttackDelay        = 600
  FiringDuration		= 1500            
  PreAttackType         = PER_SHOT ; Do the delay each time we attack a new target
  HitPercentage       = 0 ; Never auto hits, always shoots at a ground position
  ScatterRadius       = 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
	NoVictimNeeded			= Yes

  ProjectileNugget                    ; A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = MordorBalrogLeapWarhead
  End
End

;----------------------------------- ^^
Weapon MordorBalrogLeapWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ALLIES
;  FireFX = FX_BalrogLand
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = BALROG_JUMP_DAMAGE
    Radius        = 40.0
    DelayTime     = 1	; Moves damage from when tippy toes hit to a visually better spot
    DamageType            = CRUSH
    DamageFXType          = SMALL_ROCK
    DeathType             = LASERED ;now always used instead of NORMAL (Sûl)
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 50.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
    DelayTime     = 1	; Moves damage from when tippy toes hit to a visually better spot
  End
  FireLogicNugget
	LogicType	= INCREASE_BURN_RATE
	Radius		= 40.0
	Damage		= BALROG_JUMP_DAMAGE
  End
End

; ------------------------------------------------------------------------------
Weapon MordorBalrogHeroEffect     
  LeechRangeWeapon      = No
  AttackRange           = 20.0
  MeleeWeapon           = No
  DelayBetweenShots     = 1300            ; time between shots, msec
  PreAttackDelay        = 533             ; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT ; Do the delay each time we attack
  FiringDuration        = 733    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage = BALROG_IGNITE_AURA_DAMAGE
    Radius = 50.0
    DamageType = FLAME
  	DamageFXType = FLAME
  	DeathType = BURNED
  End
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage = BALROG_IGNITE_AURA_DAMAGE
    Radius = 50.0
    DamageType = MAGIC
  	DamageFXType = FLAME
  	DeathType = BURNED
  End
  
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ; HeroResist			= .75
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 50.0
    ShockWaveTaperOff = 1.0
  End
End

; ----------------------------------------------------------------------------- CAVE TROLL

Weapon CaveTrollHeroSmashWeapon
	IdleAfterFiringDelay 		= 0
	AttackRange 			= 25.0 		; only half of CAVETROLLHERO_SMASH_WEAPON_RADIUS
	MinimumAttackRange 		= 0.8	
	RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	DelayBetweenShots 		= 5000             						; time between shots, msec
	PreAttackDelay			= 1900 //2600							; Frame 57 at 1,9 sec
	PreAttackType			= PER_ATTACK 							; Do the delay each time we attack a new target
	;PreAttackFX				= FX_GloinShatterPre
	FireFX					= FX_TrollClubHammerDebris
	//FireFX					= FX_TrebuchetImpactHit
	FiringDuration      		= 1400
	DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
	LockWhenUsing			= Yes	
	
	DamageNugget      
		Damage				= CAVETROLLHERO_SMASH_WEAPON_DAMAGE
		Radius				= CAVETROLLHERO_SMASH_WEAPON_RADIUS
		DamageType			= SIEGE //FORCE //MAGIC
		DamageFXType		= CLUBBING //MAGIC
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl) //EXPLODED
		DamageSpeed			= 700.0 ; must match the ShockWaveSpeed below
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar  		= 250% NONE +HERO	//Added for SEE!
		DamageArc      		= 180	
	End
	
	DamageNugget      
		Damage				= CAVETROLLHERO_SMASH_WEAPON_OUTER_DAMAGE
		Radius				= CAVETROLLHERO_SMASH_WEAPON_OUTER_RADIUS
		DamageType			= SIEGE //FORCE //MAGIC
		DamageFXType		= CLUBBING //MAGIC
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl) //EXPLODED
		DamageSpeed			= 700.0 ; must match the ShockWaveSpeed below
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar  		= 250% NONE +HERO	//Added for SEE!
		DamageArc      		= 180	
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveArc      	= 180
		ShockWaveAmount  	= 40.0
		ShockWaveRadius   	= CAVETROLLHERO_SMASH_WEAPON_RADIUS
		ShockWaveTaperOff 	= 1.0
		ShockWaveZMult	  	= 1.000
		ShockWaveSpeed	  	= 700.0 
	End
End

; ----------------------------------------------------------------------------- SHELOB HERO WEBBING

Weapon ShelobWebbing_SEE ;taken from Legolas' bow - needs designer love
  AttackRange = #MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 2 ) //250				
  WeaponSpeed = #MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 10.0 ) //180         ; 5.0 
  MinWeaponSpeed = #MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 9.9 )//120
  MaxWeaponSpeed = #MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 10.1 )//240      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
  FireFX = FX_ShelobPoisonStingerStrike
  ScaleWeaponSpeed = Yes ; Used for lob weapons, scales speed proportional to range
  HitPercentage = 100     ;When this weapon is used it will hit exactly 100% of the time.
  ScatterRadius = 5.0     ;When this weapon misses it can randomly miss by as much as this distance.

  AcceptableAimDelta = 20	; prevent twitchy reaiming in horde on horde
  ; DelayBetweenShots = M_LEGOLAS_DELAYBETWEENSHOTS 	; time between shots, msec
 ;  PreAttackDelay = 1000 ; 1467 is the prep time for archer.
  ; PreAttackType = PER_POSITION ; Do the delay each time we attack a new target
  ; FiringDuration = 500 ; Duration of the archer firing shot is 500ms.
  ; ClipSize = 1
  ; AutoReloadsClip = Yes
  ; AutoReloadWhenIdle = 1	
  ; ClipReloadTime = Min:M_LEGOLAS_RELOADTIME_MIN Max:M_LEGOLAS_RELOADTIME_MAX
  ; ContinuousFireOne = 0
  ; ContinuousFireCoast = M_LEGOLAS_RELOADTIME_MAX
  ; AntiAirborneVehicle  Yes
  ; AntiAirborneMonster = Yes
  DelayBetweenShots = WILD_SHELOB_STINGER_DELAYBETWEENSHOTS
  PreAttackDelay = 1 ;M_WILD_SHELOB_STINGER_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration = 500 ;M_WILD_SHELOB_STINGER_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
  RequireFollowThru = Yes
  
  ProjectileNugget                    				; Shelob's Web throw
    ProjectileTemplateName = ShelobWebbingProjectile 	;in EvilFactionSubObjects.INI
    WarheadTemplateName = ShelobWebbingWarhead_SEE
  End
End
;----------------------------------- ^^
Weapon ShelobWebbingWarhead_SEE
  ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL ;STRUCTURES WALLS 
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget ; A basic Nugget that just does damage
    Damage = 1
    Radius = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime = 0
    DamageType = PIERCE
    DamageFXType = EVIL_ARROW_PIERCE
    DeathType = LASERED ;now always used instead of NORMAL (Sûl)
  End
  ; MetaImpactNugget ; A Nugget that throws things back with force
    ; ShockWaveAmount = 99.0
    ; ShockWaveRadius = 0.1
    ; ShockWaveTaperOff = 1.0
    ; ShockWaveZMult = 0.005
  ; End
   WeaponOCLNugget  ;places object at location of attacker
     WeaponOCLName = OCL_ShelobWebActivator
   End
  AttributeModifierNugget
    AttributeModifier = ShelobWebbingModifier //Was "ShelobWebbing_SEE"? That's the Weapon??? /Naz
    DamageFXType = EVIL_ARROW_PIERCE 
    SpecialObjectFilter = CRIPPLE_STRIKE_PIN_OBJECT_FILTER ;ANY +HERO M_NOT_FLYING_UNITS -MordorBalrog -RohanTreeBerd -RohanEntFir -RohanEntFir_Summoned -RohanEntBirch -RohanEntBirch_Summoned -RohanEntAsh -RohanEntAsh_Summoned -RohanEntOak -RohanEntOak_Summoned -TomBombadil -TomBombadil_Summoned -MONSTER 
  End
  ; ParalyzeNugget
    ; Radius= 0.0
    ; Duration = M_POISONED_STINGER_DURATION
    ; SpecialObjectFilter	= M_CRIPPLE_STRIKE_PIN_OBJECT_FILTER
    ; ParalyzeFX = FX_PoisonedStunEffect
  ; End
End

Weapon ShelobWebbing_Immobilize_SEE
  DamageNugget ; A basic Nugget that just does damage
    Damage = 1
    Radius = 1
    DelayTime = 0
    DamageType = PIERCE
    DeathType = LASERED ;now always used instead of NORMAL (Sûl)
  End
  AttributeModifierNugget
    AttributeModifier = ShelobWebbingModifier //Was "ShelobWebbing_SEE"? That's the Weapon??? /Naz
    DamageFXType = EVIL_ARROW_PIERCE 
    SpecialObjectFilter = ANY +HERO NOT_FLYING_UNITS -MordorBalrog -RohanTreeBerd // -RohanEntFir -RohanEntFir_Summoned -RohanEntBirch -RohanEntBirch_Summoned -RohanEntAsh -RohanEntAsh_Summoned -RohanEntOak -RohanEntOak_Summoned -TomBombadil -TomBombadil_Summoned -MONSTER 
  End
End

;//------------------------------------------------------------------------------
Weapon ShelobCrush ;// Used when the BattleWagon crushes an enemy.
  LeechRangeWeapon      = Yes
  AttackRange           = 9999999.0
  MeleeWeapon           = No
  DelayBetweenShots     = 0         ;//time between shots, msec
  PreAttackDelay        = 0			;//PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         = PER_SHOT 
  FiringDuration        = 0 
  FireFX				= FX_GenericCrushImpactSound

  DamageNugget                        ;// A basic Nugget that just does damage
    Damage        = SHELOB_CRUSH_DAMAGE				;// A whole lot of damage.
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CRUSH
    DeathType     = CRUSHED
    FlankingBonus = 300%
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon ShelobMandibles     ; BALANCE Shelob Weapon 
  LeechRangeWeapon      	= Yes
  AttackRange				= STANDARD_MELEE_ATTACK_RANGE //#MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 2 ) //25
  MeleeWeapon           	= Yes
  DelayBetweenShots     		= 1666           ; time between shots, msec
  PreAttackDelay        		= 900            ; 300 is mace swing delay time before contact with target.
  PreAttackType         		= PER_SHOT ; Do the delay each time we attack
  FireFX                	= FX_GondorSwordHit	; OK!
  FiringDuration        		= 766    ; Duration of the mace swing 
  RequireFollowThru			= Yes
  
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= WILD_SHELOB_STINGER_DAMAGE
    Radius        			= 15
    DelayTime     			= 0
    DamageType    			= HERO
    DamageFXType  			= SWORD_SLASH
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc	  			= ISENGARD_BERSERKER_ARC	; OK!
  End
;	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
;		ShockWaveAmount   = 30.0
;		ShockWaveRadius   = 30.0
;		ShockWaveTaperOff = 0.75
;	End  
End

;------------------------------------------------------------------------------ SEE!
Weapon WildShelobPoisonedStinger
  LeechRangeWeapon 			= Yes
  AttackRange				= #MULTIPLY( STANDARD_MELEE_ATTACK_RANGE 2 )
  ; AttackRange				= 30.0
  MeleeWeapon				= Yes
  FireFX					= FX_ShelobPoisonStingerStrike		;FX_GondorSwordHit
  DelayBetweenShots			= WILD_SHELOB_STINGER_DELAYBETWEENSHOTS
  PreAttackDelay            	= WILD_SHELOB_STINGER_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType             	= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration            	= WILD_SHELOB_STINGER_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.
  RequireFollowThru			= Yes

;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage        = M_WILD_SHELOB_STINGER_DAMAGE
;		Radius        = 0.0
;		DelayTime     = 0
;		DamageType    = SLASH
;		DamageFXType  = SWORD_SLASH
;		DeathType     = LASERED ;now always used instead of NORMAL (Sûl)
;	End

	DOTNugget                        ; A basic Nugget that just does damage
		Damage        		= SHELOB_POISON_DAMAGE
		AcceptDamageAdd 	= No
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= POISON
		DamageFXType  		= POISON
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval 		= 1000
		DamageDuration 		= 30000
		SpecialObjectFilter 	= AFFECTED_BY_POISON_OBJECTFILTER
	End
End


;------------------------------------------------------------------------------
Weapon MinorSpiderMandibles				; BALANCE Minor Spider Weapon 
  LeechRangeWeapon      = Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = 1666			; time between shots, msec
  PreAttackDelay        = 900				; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT 			; Do the delay each time we attack
  FireFX                = FX_SpiderStabHit
  FiringDuration        = 766				; Duration of the mace swing 
  RequireFollowThru	= Yes
  
  DamageNugget						; A basic Nugget that just does damage
    Damage        = 10
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
;	MetaImpactNugget                    ; A Nugget that throws things back with force
;		HeroResist			= .75
;		ShockWaveAmount   = 30.0
;		ShockWaveRadius   = 30.0
;		ShockWaveTaperOff = 0.75
;	End  
End

;------------------------------------------------------------------------------
Weapon SummonedSpiderlingMandibles				; BALANCE Wild Spiderling Weapon 
  LeechRangeWeapon      = Yes
  AttackRange           = 25.0
  MeleeWeapon           = Yes
  DelayBetweenShots     = 1666				; time between shots, msec
  PreAttackDelay        = 900				; 300 is mace swing delay time before contact with target.
  PreAttackType         = PER_SHOT 			; Do the delay each time we attack
  FireFX                = FX_SpiderStabHit
  FiringDuration        = 766				; Duration of the mace swing 
  RequireFollowThru		= Yes
  
  DamageNugget						; A basic Nugget that just does damage
    Damage        = WILD_SUMMONED_SPIDERLING_DAMAGE
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = CAVALRY
   ; DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    FlankingBonus = 50%
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildSpiderlingMandibles				; BALANCE Wild Spiderling Weapon 
  LeechRangeWeapon      	= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes
  DelayBetweenShots     		= 1666				; time between shots, msec
  PreAttackDelay        		= 900				; 300 is mace swing delay time before contact with target.
  PreAttackType         		= PER_SHOT 			; Do the delay each time we attack
  FireFX                	= FX_SpiderStabHit
  FiringDuration        		= 766				; Duration of the mace swing 
  RequireFollowThru			= Yes
  
  DamageNugget						; A basic Nugget that just does damage
    Damage        			= WILD_SPIDERLING_DAMAGE
    Radius        			= 0.0
    DelayTime     			= 0
    DamageType    			= CAVALRY
   ; DamageFXType  = SWORD_SLASH
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    FlankingBonus 			= 50%
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildSpiderlingVenomMandibles				; BALANCE Wild Spiderling Weapon 
  LeechRangeWeapon      	= Yes
  AttackRange				= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes
  DelayBetweenShots     		= 1666				; time between shots, msec
  PreAttackDelay        		= 900				; 300 is mace swing delay time before contact with target.
  PreAttackType         		= PER_SHOT 			; Do the delay each time we attack
  FireFX                	= FX_SpiderStabHit
  FiringDuration        		= 766				; Duration of the mace swing 
  RequireFollowThru			= Yes
  
  DOTNugget                        ; A basic Nugget that just does damage
	Damage        			= SPIDERLING_POISON_DAMAGE
	AcceptDamageAdd 		= No
	Radius        			= 0.0
	DelayTime     			= 0
	DamageType    			= POISON
	DamageFXType  			= POISON
	DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
	DamageInterval 			= 1000
	DamageDuration 			= 60000
	SpecialObjectFilter 		= AFFECTED_BY_POISON_OBJECTFILTER 
  End

  DamageNugget						; A basic Nugget that just does damage
    Damage        			= WILD_SPIDERLING_DAMAGE
    Radius        			= 0.0
    DelayTime     			= 0
    DamageType    			= CAVALRY
    DamageFXType  			= SWORD_SLASH
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildSpiderHolesSpiderlingMandibles				; BALANCE Wild Spiderling Weapon 
  LeechRangeWeapon      	= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes
  DelayBetweenShots   		= 1666				; time between shots, msec
  PreAttackDelay       		= 900				; 300 is mace swing delay time before contact with target.
  PreAttackType        		= PER_SHOT 			; Do the delay each time we attack
  FireFX              	  	= FX_SpiderStabHit
  FiringDuration       		= 766				; Duration of the mace swing 
  RequireFollowThru			= Yes
  
  DamageNugget						; A basic Nugget that just does damage
    Damage       			= WILD_SPIDERLING_SLAVED_DAMAGE
    Radius     			   	= 0.0
    DelayTime    			= 0
    DamageType  			= CAVALRY
   ; DamageFXType  = SWORD_SLASH
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    FlankingBonus 			= 50%
  End
End

;------------------------------------------------------------------------------
Weapon WildGoblinKingPoisonedStinger
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  FireFX                = FX_GoblinKingPoisonedStingerHit
  DelayBetweenShots         = WILD_GOBLIN_KING_STINGER_DELAYBETWEENSHOTS
  PreAttackDelay            = WILD_GOBLIN_KING_STINGER_PREATTACKDELAY   ; 1467 is the prep time for archer.
  PreAttackType             = PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration            = WILD_GOBLIN_KING_STINGER_FIRINGDURATION    ; Duration of the archer firing shot is 500ms.

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = WILD_GOBLIN_KING_STINGER_DAMAGE
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
	End

	DOTNugget                        ; A basic Nugget that just does damage
		Damage        = GORKIL_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 1000
		DamageDuration = 30000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
	End

	ParalyzeNugget
		Radius				= 0.0
		Duration			= POISONED_STINGER_DURATION
		SpecialObjectFilter	= CRIPPLE_STRIKE_OBJECT_FILTER_MELEE
		ParalyzeFX			= FX_PoisonedStunEffect
	End
End

;------------------------------------------------------------------------------
Weapon WildFortressBatCloudWeapon
	AttackRange			= 80
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
		WeaponOCLName = OCL_WildFortressBatCloud
	End
End

;------------------------------------------------------------------------------
Weapon WildFortressBatCloudBasicWeapon
	AttackRange		= 100
	RadiusDamageAffects 	= ENEMIES NOT_SIMILAR
	DelayBetweenShots	= 1000          ; time between shots, msec	
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
Weapon GolfimbulFireBomb
	AttackRange			= MORDOR_CORSAIR_FIRE_BOMB_RANGE			; Horde member so it needs to be bigger than the horde weapon attack range.
	WeaponSpeed		= 100										; dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 100										; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_FirebombThrow
	HitPercentage			= MORDOR_CORSAIR_FIRE_BOMB_HIT_PERCENTAGE	; When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius			= MORDOR_CORSAIR_FIRE_BOMB_SCATTER_RADIUS	; When this weapon misses it can randomly miss by as much as this distance.
	;NoVictimNeeded		= Yes

	OverrideVoiceAttackSound = CorsairVoiceAttackFirebomb
	OverrideVoiceEnterStateAttackSound = CorsairVoiceEnterStateAttackFirebomb

	AcceptableAimDelta	= 20									; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= 0
	PreAttackDelay		= 400									// MORDOR_CORSAIR_FIRE_BOMB_PREATTACKDELAY (1333)
	PreAttackType		= PER_SHOT
	FiringDuration			= MORDOR_CORSAIR_FIRE_BOMB_FIRING_DURATION
	PreAttackRandomAmount	= MORDOR_CORSAIR_FIRE_BOMB_RANDOM_PREATTACK

	ClipSize				= INFINITE_CLIP_SIZE
	AutoReloadsClip		= Yes
	
	ProjectileNugget
		ProjectileTemplateName	= CorsairFireBombProjectile
		WarheadTemplateName		= CorsairFireBombWarhead
	End
End



























//------------------------------------------------------------------------------
//Fake weapon so that the expansion will pick targets that the slaved giant can attack
Weapon GiantSentryExpansionWeapon		
  AttackRange				= #SUBTRACT( WILD_GIANTSENTRYEXPANSION_RANGE 32 )		; take off geometry radius so it matches the giant.
  LeechRangeWeapon			= Yes
  DelayBetweenShots			= WILD_GIANTSENTRYEXPANSION_DELAYBETWEENSHOTS  
  PreAttackDelay			= WILD_GIANTSENTRYEXPANSION_PREATTACKDELAY
  FiringDuration      		= WILD_GIANTSENTRYEXPANSION_FIRINGDURATION
  AcceptableAimDelta		= 90  
  FinishAttackOnceStarted	= Yes    

  //This nugget tells the objects slave to perform the attack
  SlaveAttackNugget
  End
End

;------------------------------------------------------------------------------
;// This is the attack with rock in hand
;// Mountain Giant
Weapon WildMountainGiantSentryRockThrow  ; BALANCE Mountaint Giant Weapon Rock
	AttackRange         	= WILD_GIANTSENTRYEXPANSION_RANGE
    LeechRangeWeapon    	= Yes
	WeaponSpeed         	= WILD_GIANTSENTRYEXPANSION_WEAPONSPEED				;// dist/sec 	
	FireFX              	= FX_EntThrowSmallRock	
	HitPercentage       	= 0						;//When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       	= 4.0					;//When this weapon misses it can randomly miss by as much as this distance.	  
	
	DelayBetweenShots   	= WILD_GIANTSENTRYEXPANSION_DELAYBETWEENSHOTS
	PreAttackDelay      	= WILD_GIANTSENTRYEXPANSION_PREATTACKDELAY  	
	PreAttackType       	= PER_SHOT
	FiringDuration      	= WILD_GIANTSENTRYEXPANSION_FIRINGDURATION
	NoVictimNeeded			= Yes	;// Need no target
	IsAimingWeapon			= Yes	;// Shooter will use his AimWeaponBehavior to get extra model condition flags	
	  
	ClipSize				= 0	

	ProjectileNugget	
		ProjectileTemplateName  = RockGiantSentry
		WarheadTemplateName     = WildMountainGiantRockThrowWarhead_Structural		
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset	= Yes									; so we don't assert.
		ProjectileTemplateName  = ShroudRevealer_Bombard
		WarheadTemplateName     = ShipRevealBombardWarhead_Dummy
	End
End

;------------------------------------------------------------------------------ SEE!
Weapon WildMarauderPike     ; BALANCE Wild Marauder Weapon
  LeechRangeWeapon      	= Yes
  AttackRange           	= 35
  MeleeWeapon           	= Yes	; Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots     		= WILD_MARAUDER_STAB_DELAYBETWEENSHOTS				; time between shots, msec
  PreAttackDelay        		= WILD_MARAUDER_STAB_PREATTACKDELAY				
  PreAttackType         		= PER_SHOT			; Do the delay each time we attack
  FireFX                	= FX_GondorSwordHit
  FireFlankFX					= FX_Flanking
  FiringDuration        		= WILD_MARAUDER_STAB_FIRINGDURATION				
  
	DamageNugget								; A basic Nugget that just does damage
		Damage				= WILD_MARAUDER_STAB_DAMAGE
		DamageType			= SPECIALIST
		DamageFXType		= SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		DamageScalar  		= 300% NONE +HERO			//Added for SEE!	
		ForbiddenUpgradeNames		= Upgrade_WildForgedBlades
		FlankingBonus 		= 50%
	End

	DamageNugget								; A basic Nugget that just does damage
		Damage				= WILD_MARAUDER_DAMAGE_UPGRADE
		DamageType			= SPECIALIST
		DamageFXType		= SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		RequiredUpgradeNames		= Upgrade_WildForgedBlades
		FlankingBonus 		= 50%
	End
End

;------------------------------------------------------------------------------ SEE!
Weapon WildMarauderPikePoisoned     ; BALANCE Wild Marauder Weapon
  LeechRangeWeapon      	= Yes
  AttackRange           	= 35
  MeleeWeapon           	= Yes	; Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots     		= WILD_MARAUDER_STAB_DELAYBETWEENSHOTS				; time between shots, msec
  PreAttackDelay        		= WILD_MARAUDER_STAB_PREATTACKDELAY				
  PreAttackType         		= PER_SHOT			; Do the delay each time we attack
  FireFX                	= FX_GondorSwordHit
  FireFlankFX					= FX_Flanking
  FiringDuration        		= WILD_MARAUDER_STAB_FIRINGDURATION				
  
	DamageNugget								; A basic Nugget that just does damage
		Damage				= WILD_MARAUDER_STAB_DAMAGE
		DamageType			= SPECIALIST
		DamageFXType		= SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		DamageScalar  		= 300% NONE +HERO			//Added for SEE!
		ForbiddenUpgradeNames		= Upgrade_WildForgedBlades
		FlankingBonus 		= 50%
	End

	DamageNugget								; A basic Nugget that just does damage
		Damage				= WILD_MARAUDER_DAMAGE_UPGRADE
		DamageType			= SPECIALIST
		DamageFXType		= SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		DamageScalar  		= 300% NONE +HERO			//Added for SEE!
		RequiredUpgradeNames		= Upgrade_WildForgedBlades
		FlankingBonus 		= 50%
	End
  
	DOTNugget
		Damage				= GOBLIN_FIGHTER_POISON_DAMAGE
		AcceptDamageAdd		= No
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType		= POISON
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval		= 500
		DamageDuration		= 30000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
	End
End


;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBow       ; BALANCE Archer Weapon ;orc archer
	AttackRange				= GOBLIN_ARCHER_RANGE   ;Horde member so it needs to be bigger than the horde weapon attack range.
   
   	RangeBonusMinHeight      = 30 ;Was 10 in Beta 4.7
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( GOBLIN_ARCHER_RANGE .01 ) //#MULTIPLY( GOBLIN_ARCHER_RANGE .003 )
   
   
    LeechRangeWeapon    	= Yes
	WeaponSpeed			= 300         ; dist/sec 
	MinWeaponSpeed			= 121
	MaxWeaponSpeed			= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX					= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed		= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage				= ARCHER_WEAK_HITPERCENTAGE //100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius				= ARCHER_WEAK_SCATTERRADIUS //20.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay      		= GOBLIN_ARCHER_PREATTACKDELAY
	PreAttackType       		= PER_POSITION
	PreAttackRandomAmount	= 200 
	FiringDuration      		= 0
	
	ClipSize					= 1
	AutoReloadsClip			= Yes
	AutoReloadWhenIdle		= 1	
	ClipReloadTime			= Min:GOBLIN_ARCHER_BOW_RELOADTIME_MIN Max:GOBLIN_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne			= 0
	ContinuousFireCoast		= GOBLIN_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  		= EvilFactionArrow
		WarheadTemplateName     	= GoblinArcherBowWarhead
		ForbiddenUpgradeNames   		= Upgrade_WildSpiderVenomSacks //Upgrade_WildFireArrows ;was Upgrade_WildSpiderVenomSacks in b4.7?
	End
	
//	ProjectileNugget    ; Fire Arrow					;was commented (out) in b4.7?
//		ProjectileTemplateName  		= EvilFactionFireArrow
//		WarheadTemplateName      	= GoblinArcherBowFireWarhead
//		RequiredUpgradeNames     	= Upgrade_WildFireArrows
//	End
	
	ProjectileNugget    ; Poison Arrow				//Added for SEE!
		ProjectileTemplateName		= PoisonArrowProjectile
		WarheadTemplateName			= GoblinArcherPoisonArrowsBowWarhead
		RequiredUpgradeNames     	= Upgrade_WildSpiderVenomSacks
	End	
End
;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowBombard       ; BALANCE Archer Weapon ;orc archer
	AttackRange				= GOBLIN_ARCHER_BOMBARD_MAXRANGE 
	MinimumAttackRange		= #SUBTRACT( GOBLIN_ARCHER_BOMBARD_MINRANGE 75 )
    LeechRangeWeapon    	= Yes
	WeaponSpeed			= 300         ; dist/sec 
	MinWeaponSpeed			= 121
	MaxWeaponSpeed			= 400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX					= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed		= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage       		= 0     ;Always scatter
	ScatterRadius       		= ARCHER_BOMBARD_SCATTER_RADIUS     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta		= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay      		= GOBLIN_ARCHER_PREATTACKDELAY
	PreAttackType       		= PER_POSITION
	PreAttackRandomAmount	= 200 
	FiringDuration      		= 0
	
	ClipSize					= 1
	AutoReloadsClip			= Yes
	AutoReloadWhenIdle		= 1	
	ClipReloadTime			= Min:GOBLIN_ARCHER_BOW_RELOADTIME_MIN Max:GOBLIN_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne			= 0
	ContinuousFireCoast		= GOBLIN_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
	NoVictimNeeded			= Yes
	BombardType				= Yes

	ProjectileNugget	; Default arrow
		ProjectileTemplateName  		= EvilFactionArrowBombard
		WarheadTemplateName     	= GoblinArcherBowBombardWarhead
		ForbiddenUpgradeNames   		= Upgrade_WildSpiderVenomSacks ;Upgrade_WildFireArrows
	End
	
//	ProjectileNugget    ; Fire Arrow
//		ProjectileTemplateName  		= EvilFactionFireArrowBombard
//		WarheadTemplateName      	= GoblinArcherBowBombardFireWarhead
//		RequiredUpgradeNames     	= Upgrade_WildFireArrows
//	End
	
	ProjectileNugget    ; Poison Arrow
		ProjectileTemplateName		= PoisonArrowProjectileBombard_SEE //PoisonArrowProjectile ?
		WarheadTemplateName			= GoblinArcherBowBombardPoisonWarhead //GoblinArcherPoisonArrowsBowWarhead
		RequiredUpgradeNames     	= Upgrade_WildSpiderVenomSacks
	End	
End

;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherPoisonArrowsBowWarhead
	ProjectileCollidesWith		= ENEMIES
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	;HitStoredTarget			= Yes
	DamageNugget
		Damage				= GOBLIN_ARCHER_DAMAGE
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= PIERCE
		DamageFXType		= EVIL_ARROW_PIERCE
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
	End
	
	DOTNugget
  		SpecialObjectFilter 	= ALL -STRUCTURE
		AcceptDamageAdd		= No
		Damage				= GOBLIN_ARCHER_DAMAGE_POISON //2
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType		= POISON
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval		= 1000	; every second ...
		DamageDuration		= 15000	; ... for 15 seconds
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
	End
End
;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowBombardPoisonWarhead
	ProjectileCollidesWith		= ENEMIES
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES

  DamageNugget                       
    Damage        			= GOBLIN_ARCHER_DAMAGE_POISON
    Radius        			= 0.0	
    DelayTime     			= 0
    DamageType    			= POISON
    DamageFXType  			= POISON
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    AcceptDamageAdd 		= No
    DamageScalar  			= 25% ALL -STRUCTURE
  End
  
   DamageNugget                        ; A basic Nugget that just does damage
		Damage        		= 1
		Radius        		= 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    		= POISON
		DamageFXType  		= POISON
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
		AcceptDamageAdd 	= No
		DamageScalar  		= 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	
 DamageNugget            ; A basic Nugget that just does damage
    Damage		 			= GOBLIN_ARCHER_DAMAGE_POISON_PIERCE
    Radius		 			= 0.0	; HitStoredTarget means we hurt the person we launched at.
    DelayTime	 			= 0
    DamageType	 			= PIERCE
    DamageFXType 			= EVIL_ARROW_PIERCE
    DeathType	 			= LASERED ;now always used instead of NORMAL (Sûl)
  End
	;FireLogicNugget
	;	LogicType			= INCREASE_BURN_RATE
	;	Radius				= ARCHER_BOMBARD_FIREARROW_BURNRADIUS //1.0
	;	Damage				= ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE
	;End
End


;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowWarhead
  ProjectileCollidesWith 		= ENEMIES
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES 
  ;HitStoredTarget = Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= GOBLIN_ARCHER_DAMAGE
    Radius        			= 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     			= 0
    DamageType    			= PIERCE
    DamageFXType  			= EVIL_ARROW_PIERCE
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
  End
End
Weapon GoblinArcherBowBombardWarhead
  ProjectileCollidesWith 		= ENEMIES
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= GOBLIN_ARCHER_DAMAGE
    Radius        			= 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     			= 0
    DamageType    			= PIERCE
    DamageFXType  			= EVIL_ARROW_PIERCE
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
  End
End


;------------------------------------------------------------------------------
Weapon GoblinArcherBowFire_SEE //Not used - using SA (Special Ability) instead! (Naz)
	AttackRange			= GOBLIN_ARCHER_RANGE   ;Horde member so it needs to be bigger than the horde weapon attack range.
   
  RangeBonusMinHeight	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( GOBLIN_ARCHER_RANGE .01 )
   
  LeechRangeWeapon    = Yes
	WeaponSpeed			= 250 ;300         ; dist/sec 
	MinWeaponSpeed		= 100 ;121
	MaxWeaponSpeed		= 350 ;400      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX				= FX_RohanArcherBowWeapon  
	ScaleWeaponSpeed	= Yes ; Used for lob weapons, scales speed proportional to range
	HitPercentage		= ARCHER_WEAK_HITPERCENTAGE ;100     ;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= ARCHER_WEAK_SCATTERRADIUS ;20.0     ;When this weapon misses it can randomly miss by as much as this distance.
	
	AcceptableAimDelta	= 20	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots	= 0
	PreAttackDelay      = GOBLIN_ARCHER_PREATTACKDELAY
	PreAttackType       = PER_POSITION
	PreAttackRandomAmount     = 200 
	FiringDuration      = 0
	
	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= Min:GOBLIN_ARCHER_BOW_RELOADTIME_MIN Max:GOBLIN_ARCHER_BOW_RELOADTIME_MAX
	ContinuousFireOne	= 0
	ContinuousFireCoast	= GOBLIN_ARCHER_BOW_RELOADTIME_MAX 
	
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget    ; Fire Arrow
		ProjectileTemplateName  = EvilFactionFireArrow
		WarheadTemplateName      = GoblinArcherBowFireWarhead
	End
End

;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowFireWarhead
	ProjectileCollidesWith		= ENEMIES
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	;HitStoredTarget			= Yes	; Always hits initial target.

  DamageNugget                       
    Damage        			= GOBLIN_ARCHER_DAMAGE_FIRE_FLAME
    Radius        			= 0.0	
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
    Damage		 			= GOBLIN_ARCHER_DAMAGE_FIRE_PIERCE
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
;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowBombardFireWarhead
	ProjectileCollidesWith		= ENEMIES
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES

  DamageNugget                       
    Damage        			= GOBLIN_ARCHER_DAMAGE_FIRE_FLAME
    Radius        			= 0.0	
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
    Damage		 			= GOBLIN_ARCHER_DAMAGE_FIRE_PIERCE
    Radius		 			= 0.0	; HitStoredTarget means we hurt the person we launched at.
    DelayTime	 			= 0
    DamageType	 			= PIERCE
    DamageFXType 			= EVIL_ARROW_PIERCE
    DeathType	 			= LASERED ;now always used instead of NORMAL (Sûl)
  End
	FireLogicNugget
		LogicType			= INCREASE_BURN_RATE
		Radius				= ARCHER_BOMBARD_FIREARROW_BURNRADIUS //1.0
		Damage				= ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE
	End
End

;------------------------------------------------------------------------------ SEE!
Weapon GoblinArcherBowMelee
  LeechRangeWeapon		= Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon			= Yes
  FireFX                = FX_RohanArcherBowWeaponFlaming;
  DelayBetweenShots		= 1700            ; time between shots, msec
  PreAttackDelay        	= 666             ; 400 is sword swing delay time before contact with target.
  PreAttackType         	= PER_SHOT ; Do the delay each time we attack a new target
  FiringDuration        	= 1000    ; Duration of the sword swing

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        		= GOBLIN_ARCHER_DAMAGE_MELEE
    Radius        		= 0.0
    DelayTime     		= 0
    DamageType    		= SLASH
    DamageFXType  		= SWORD_SLASH
    DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
  End
End

;------------------------------------------------------------------------------ SEE!
Weapon GoblinFighterSword
  LeechRangeWeapon		= Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon			= Yes
  DelayBetweenShots     	= GOBLIN_FIGHTER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        	= GOBLIN_FIGHTER_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         	= PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX				= FX_Flanking
  FiringDuration        	= GOBLIN_FIGHTER_FIRINGDURATION    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        		= GOBLIN_FIGHTER_DAMAGE
    Radius        		= 0.0
    DelayTime     		= 0
    DamageType    		= SLASH
    DamageFXType  		= SWORD_SLASH
    DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
    FlankingBonus 		= 50%
  End
End
;------------------------------------------------------------------------------ SEE!
Weapon GoblinFighterSwordUpgraded
  LeechRangeWeapon		= Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon			= Yes
  DelayBetweenShots     	= GOBLIN_FIGHTER_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        	= GOBLIN_FIGHTER_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         	= PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FireFlankFX				= FX_Flanking
  FiringDuration        	= GOBLIN_FIGHTER_FIRINGDURATION    ; Duration of the mace swing 

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        		= GOBLIN_FIGHTER_FORGEDBLADES_UPGRADE	
    Radius        		= 0.0
    DelayTime     		= 0
    DamageType    		= SLASH
    DamageFXType  		= SWORD_SLASH
    DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
    FlankingBonus 		= 50%
  End
End

;------------------------------------------------------------------------------ SEE!
Weapon GoblinFighterSwordPoisoned
	LeechRangeWeapon		= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE //30.0
	MeleeWeapon				= Yes
	DelayBetweenShots		= GOBLIN_FIGHTER_DELAYBETWEENSHOTS
	PreAttackDelay			= GOBLIN_FIGHTER_PREATTACKDELAY
	PreAttackType			= PER_SHOT
	FireFX					= FX_GondorSwordHit
	FireFlankFX				= FX_Flanking
	FiringDuration				= GOBLIN_FIGHTER_FIRINGDURATION

	DamageNugget
		Damage				= GOBLIN_FIGHTER_DAMAGE
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= SLASH
		DamageFXType		= SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		FlankingBonus			= 50%
	End

	DOTNugget
		Damage				= GOBLIN_FIGHTER_POISON_DAMAGE
		AcceptDamageAdd		= No
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType		= POISON
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval		= 500 //1000
		DamageDuration		= 15000					; originally 30000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
	End
End
;------------------------------------------------------------------------------
Weapon GoblinFighterSwordPoisonedUpgraded						//This is not used, I think? (Naz)
	LeechRangeWeapon			= Yes
	AttackRange					= 30.0
	MeleeWeapon					= Yes
	DelayBetweenShots			= GOBLIN_FIGHTER_DELAYBETWEENSHOTS
	PreAttackDelay				= GOBLIN_FIGHTER_PREATTACKDELAY
	PreAttackType				= PER_SHOT ; Do the delay each time we attack
	FireFX						= FX_GondorSwordHit
	FireFlankFX					= FX_Flanking
	FiringDuration				= GOBLIN_FIGHTER_FIRINGDURATION

	DamageNugget
		Damage					= GOBLIN_FIGHTER_FORGEDBLADES_UPGRADE	
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= SLASH
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		FlankingBonus			= 50%
	End

	DOTNugget
		Damage					= GOBLIN_FIGHTER_POISON_DAMAGE
		AcceptDamageAdd			= No
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= POISON
		DamageFXType			= POISON
		DeathType				= NORMAL
		DamageInterval			= 1000
		DamageDuration			= 30000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
	End
End






















;------------------------------------------------------------------------------
Weapon CrebainBasicWeapon
	AttackRange			= 100
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots	= 1000               ; time between shots, msec
	;FireFX              = FX_GandalfBlast
	FiringDuration      = 1000
	CanFireWhileMoving	= Yes
	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= 1
		Radius			= 10.0
		DamageType		= SLASH
		DamageFXType		= MAGIC
		DeathType		= NORMAL
		;DamageSpeed		= 1400.0
	End
End

;------------------------------------------------------------------------------
Weapon RazorSpinesBasicWeapon
	AttackRange			= WILD_FORTRESS_RAZORSPINES_RANGE	
	DelayBetweenShots	= 0          ; time between shots, msec	
	FiringDuration      = 0
	CanFireWhileMoving	= Yes
	HitPercentage		= 100
	HitStoredTarget		= Yes			; Always hits initial target.
	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= WILD_FORTRESS_RAZORSPINES_DAMAGE		
		DamageType		= SPECIALIST
		DamageFXType	= SWORD_SLASH
		DeathType		= LASERED ;now always used instead of NORMAL (Sûl)
		DamageSpeed		= 1400.0
	End
End

;------------------------------------------------------------------------------
Weapon FireDrakeFlame
	AttackRange			= FIREDRAKE_FLAME_RANGE
	WeaponSpeed			= FIREDRAKE_FLAME_SPEED
	MinWeaponSpeed		= FIREDRAKE_FLAME_MINSPEED
	MaxWeaponSpeed		= FIREDRAKE_FLAME_MAXSPEED
	;FireFX				= FX_DrakeFireNormalAttack
	ScaleWeaponSpeed	= No
	HitPercentage		= 100
	ScatterRadius		= 0

	AcceptableAimDelta	= 0	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 3000      ;FIREDRAKE_FLAME_DELAYBETWEENSHOTS
	PreAttackDelay      = FIREDRAKE_FLAME_PREATTACKDELAY
	PreAttackRandomAmount     = 0
	PreAttackType       = PER_POSITION
	FiringDuration      = 1400     ;FIREDRAKE_FLAME_FIRINGDURATION
    MeleeWeapon			= Yes

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= 2000
	ContinuousFireOne	= 0
	ContinuousFireCoast	= FIREDRAKE_FLAME_RELOADTIME_MAX 

	AntiAirborneVehicle	= No
	AntiAirborneMonster	= No
	HitPassengerPercentage	= 20%
	CanBeDodged				= No ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
		
	ProjectileStreamName	= FlamethrowerProjectileStream
	
	ProjectileNugget
		ProjectileTemplateName	= FireDrakeProjectile
		WarheadTemplateName		= FireDrakeWarhead
	End
End

;----------------------------
Weapon FireDrakeWarhead
  	RadiusDamageAffects	= ENEMIES 
	HitStoredTarget		= Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= FIREDRAKE_FLAME_DAMAGE
		Radius			= FIREDRAKE_FLAME_RADIUS	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime		= FIREDRAKE_FLAME_DELAY
		DamageType		= FLAME
		DamageFXType		= FLAME
		DeathType		= BURNED
	End
	;FireLogicNugget
	;	LogicType		= INCREASE_FUEL
	;	Radius			= FIREDRAKE_FLAME_FUELINCREASE_RADIUS
	;	Damage			= FIREDRAKE_FLAME_FUELINCREASE_AMOUNT
	;	MinMaxBurnRate	= FIREDRAKE_FLAME_FUELINCREASE_MINMAXBURNRATE
	;	MaxResistance	= FIREDRAKE_FLAME_FUELINCREASE_RESISTANCE
	;End
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= FIREDRAKE_FLAME_INCREASEBURNRATE_RADIUS
		Damage			= FIREDRAKE_FLAME_INCREASEBURNRATE_AMOUNT
	End
	
	DamageContainedNugget
		KillCount = 5
		KillKindof = INFANTRY
		KillKindofNot = NONE
		DeathType = BURNED
	End
End

;----------------------------
Weapon FireDrakeInferno		; BALANCE
	IdleAfterFiringDelay = 0
	AttackRange = 60.0
	WeaponSpeed = 401         ; dist/sec 
	RadiusDamageAffects = ALLIES ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               ; time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
	PreAttackFX           = FX_GandalfPreAttackBlast
	;FireFX                = FX_FireDrakeInferno ;FX_BalrogBreath ---- commented out for E3, now controled by particle spawning
	FiringDuration      = 1400
	DamageDealtAtSelfPosition = Yes 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= FIREDRAKE_INFERNO_DAMAGE
		Radius			= FIREDRAKE_INFERNO_RADIUS
		DelayTime		= 1000
		DamageType		= FLAME
		DamageFXType		= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End
	;FireLogicNugget
	;	LogicType		= INCREASE_FUEL
	;	Radius			= FIREDRAKE_INFERNO_FUELINCREASE_RADIUS
	;	Damage			= FIREDRAKE_INFERNO_FUELINCREASE_AMOUNT
	;	MinMaxBurnRate	= FIREDRAKE_INFERNO_FUELINCREASE_MINMAXBURNRATE
	;	MaxResistance	= FIREDRAKE_INFERNO_FUELINCREASE_RESISTANCE
	;End
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= FIREDRAKE_INFERNO_INCREASEBURNRATE_RADIUS
		Damage			= FIREDRAKE_INFERNO_INCREASEBURNRATE_AMOUNT
		DamageArc		= 90
	End
End
;------------------------------------------------------------------------------
Weapon BabyDrakeFlame
	AttackRange			= BABYDRAKE_FLAME_RANGE
	WeaponSpeed			= BABYDRAKE_FLAME_SPEED
	MinWeaponSpeed		= BABYDRAKE_FLAME_MINSPEED
	MaxWeaponSpeed		= BABYDRAKE_FLAME_MAXSPEED
	;FireFX				= FX_DrakeFireNormalAttack
	ScaleWeaponSpeed	= No
	HitPercentage		= 100
	ScatterRadius		= 0

	AcceptableAimDelta	= 0	; prevent twitchy reaiming in horde on horde
	DelayBetweenShots   = 3000      ;BABYDRAKE_FLAME_DELAYBETWEENSHOTS
	PreAttackDelay      = BABYDRAKE_FLAME_PREATTACKDELAY
	PreAttackRandomAmount     = 0
	PreAttackType       = PER_POSITION
	FiringDuration      = 1400     ;BABYDRAKE_FLAME_FIRINGDURATION
    MeleeWeapon			= Yes

	ClipSize			= 1
	AutoReloadsClip		= Yes
	AutoReloadWhenIdle	= 1	
	ClipReloadTime		= 2000
	ContinuousFireOne	= 0
	ContinuousFireCoast	= BABYDRAKE_FLAME_RELOADTIME_MAX 

	AntiAirborneVehicle	= No
	AntiAirborneMonster	= No
	HitPassengerPercentage	= 20%
	CanBeDodged				= No ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent
		
	ProjectileStreamName	= FlamethrowerProjectileStream
	
	ProjectileNugget
		ProjectileTemplateName	= FireDrakeProjectile
		WarheadTemplateName		= BabyDrakeWarhead
	End
End

;----------------------------
Weapon BabyDrakeWarhead
  	RadiusDamageAffects	= ENEMIES 
	HitStoredTarget		= Yes	; Always hits initial target.
  	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= BABYDRAKE_FLAME_DAMAGE
		Radius			= BABYDRAKE_FLAME_RADIUS	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime		= BABYDRAKE_FLAME_DELAY
		DamageType		= FLAME
		DamageFXType		= FLAME
		DeathType		= BURNED
	End

	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= BABYDRAKE_FLAME_INCREASEBURNRATE_RADIUS
		Damage			= BABYDRAKE_FLAME_INCREASEBURNRATE_AMOUNT
	End
	
;	DamageContainedNugget
;		KillCount = 5
;		KillKindof = INFANTRY
;		KillKindofNot = NONE
;		DeathType = BURNED
;	End
End

;----------------------------
Weapon BabyDrakeInferno		; BALANCE
	IdleAfterFiringDelay = 0
	AttackRange = 60.0
	WeaponSpeed = 401         ; dist/sec 
	RadiusDamageAffects = ALLIES ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               ; time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK ; Do the delay each time we attack a new target
	PreAttackFX           = FX_GandalfPreAttackBlast
	;FireFX                = FX_FireDrakeInferno ;FX_BalrogBreath ---- commented out for E3, now controled by particle spawning
	FiringDuration      = 1400
	DamageDealtAtSelfPosition = Yes 

	DamageNugget                        ; A basic Nugget that just does damage
		Damage			= BABYDRAKE_INFERNO_DAMAGE
		Radius			= BABYDRAKE_INFERNO_RADIUS
		DelayTime		= 1000
		DamageType		= FLAME
		DamageFXType		= FLAME
		DeathType		= BURNED
		DamageArc		= 90
		DamageMaxHeight = 50 ;We won't hurt something far above us.  Birds fly at around 100
		DamageSpeed		= 400
	End

	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= BABYDRAKE_INFERNO_INCREASEBURNRATE_RADIUS
		Damage			= BABYDRAKE_INFERNO_INCREASEBURNRATE_AMOUNT
		DamageArc		= 90
	End
End


; ------------------------------------------------------------------------------ SEE!
Weapon GoblinKingBlade 
  LeechRangeWeapon     	= Yes
  AttackRange			= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon          	= Yes
  DelayBetweenShots     	= WILD_GOBLIN_KING_DELAYBETWEENSHOTS            ; time between shots, msec
  PreAttackDelay        	= WILD_GOBLIN_KING_PREATTACKDELAY             ; 300 is mace swing delay time before contact with target.
  PreAttackType         	= PER_SHOT ; Do the delay each time we attack
  FireFX                = FX_GondorSwordHit
  FiringDuration        	= WILD_GOBLIN_KING_FIRINGDURATION    ; Duration of the mace swing 
  IsAimingWeapon        	= Yes
  AcceptableAimDelta    	= 45 
  AimDirection			= 360		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        		= WILD_GOBLIN_KING_DAMAGE
    Radius        		= 0.0
    DelayTime     		= 0
    DamageType    		= HERO
    DamageFXType  		= SWORD_SLASH
    DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
  End
End



; ------------------------------------------------------------------------------ SEE!
Weapon WargRiderWeapon_Goblin
	LeechRangeWeapon			= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           	= Yes
	PreAttackType         		= PER_SHOT ; Do the delay each time we attack a new target
	PreAttackDelay				= GOBLIN_WARGRIDER_PREATTACKDELAY
	DelayBetweenShots     		= GOBLIN_WARGRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
	FiringDuration				= GOBLIN_WARGRIDER_FIRINGDURATION
	FireFX                	= FX_GondorSwordHit
	;AimDirection			= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        			= GOBLIN_WARGRIDER_DAMAGE
		Radius        			= 0.0
		DelayTime     			= 0
		DamageType    			= CAVALRY
		DamageFXType  			= SWORD_SLASH
		DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
		ForbiddenUpgradeNames	= Upgrade_WildSpiderVenomSacks
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        			= GOBLIN_WARGRIDER_DAMAGE_UPGRADE
		Radius        			= 0.0
		DelayTime     			= 0
		DamageType    			= CAVALRY
		DamageFXType  			= SWORD_SLASH
		DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
		RequiredUpgradeNames		= Upgrade_WildSpiderVenomSacks
	End

	DOTNugget
		Damage				= GOBLIN_FIGHTER_POISON_DAMAGE
		AcceptDamageAdd		= No
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType		= POISON
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval		= 500
		DamageDuration		= 30000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames		= Upgrade_WildSpiderVenomSacks
	End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WolfRiderWeapon_Goblin
	LeechRangeWeapon			= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           	= Yes
	PreAttackType         		= PER_SHOT ; Do the delay each time we attack a new target
	PreAttackDelay				= GOBLIN_WOLFRIDER_PREATTACKDELAY
	DelayBetweenShots     		= GOBLIN_WOLFRIDER_DELAYBETWEENSHOTS            ; time between shots, msec
	FiringDuration				= GOBLIN_WOLFRIDER_FIRINGDURATION
	FireFX                	= FX_GondorSwordHit
	;AimDirection			= 270		; In order to aim at something, we aim this far off (to the right would be aiming at -90 degrees)

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        			= GOBLIN_WOLFRIDER_DAMAGE
		Radius        			= 0.0
		DelayTime     			= 0
		DamageType    			= CAVALRY
		DamageFXType  			= SWORD_SLASH
		DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
		ForbiddenUpgradeNames	= Upgrade_WildSpiderVenomSacks
	End

	DamageNugget                        ; A basic Nugget that just does damage
		Damage        			= GOBLIN_WOLFRIDER_DAMAGE_UPGRADE
		Radius        			= 0.0
		DelayTime     			= 0
		DamageType    			= CAVALRY
		DamageFXType  			= SWORD_SLASH
		DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
		RequiredUpgradeNames		= Upgrade_WildSpiderVenomSacks
	End

	DOTNugget
		Damage				= GOBLIN_FIGHTER_POISON_DAMAGE
		AcceptDamageAdd		= No
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType		= POISON
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval		= 500
		DamageDuration		= 30000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames		= Upgrade_WildSpiderVenomSacks
	End
End

; ------------------------------------------------------------------------------ SEE!
Weapon GreatGoblinClub
	LeechRangeWeapon		= Yes
	AttackRange				= STANDARD_MELEE_ATTACK_RANGE
	RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR
	MeleeWeapon				= Yes
	DelayBetweenShots		= LURTZ_DELAYBETWEENSHOTS  					; time between shots, msec
	PreAttackDelay			= 500 ;WITCHKING_SWORD_PREATTACKDELAY  		; 300 is mace swing delay time before contact with target.
	PreAttackType			= PER_SHOT 										; Do the delay each time we attack
	FireFX					= FX_GondorSwordHit
	FiringDuration				= 1000 ;WITCHKING_FIRINGDURATION  				; Duration of the mace swing 
	;ClipSize					= 1  											; Commented out, don't see why we need clips for the mace. - 7/9/04
	;AutoReloadsClip			= Yes
	;ClipReloadTime			= 5000

	DamageNugget                        									; A basic Nugget that just does damage
		Damage        		= GREAT_GOBLIN_CLUB_DAMAGE			
		Radius				= 20.0
		;DamageArc			= 45 //40 ;Don't use this! Disables damage on enemies? (Naz)
		DelayTime			= 0
		DamageType			= HERO
		DamageFXType		= CLUBBING
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
	End
	
	MetaImpactNugget                   										; A Nugget that throws things back with force
;		HeroResist			= .75
		ShockWaveAmount	= 20 //25 //35
		ShockWaveRadius		= 20
		ShockWaveArc		= 45 //80 ; ;40				; Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

; ------------------------------------------------------------------------------ SEE!
Weapon PoisonMistWeapon
	RadiusDamageAffects 	= ENEMIES NEUTRALS
	FireFX				= FX_ShelobPoisonStingerStrike		;FX_GondorSwordHit
  
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        	= GREAT_GOBLIN_POISON_DAMAGE //25 //35 ;;50
		Radius        	= 150.0
		DelayTime     	= 0
		DamageType    	= POISON //SLASH
		DamageFXType  	= POISON //SWORD_SLASH
		DeathType     	= LASERED ;now always used instead of NORMAL (Sûl)
	End
	
	DOTNugget                        ; A basic Nugget that just does damage
		Damage        	= GREAT_GOBLIN_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        	= 150.0 //250.0
		DelayTime     	= 0
		DamageType    	= POISON
		DamageFXType  	= POISON
		DeathType     	= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval 	= 500
		DamageDuration 	= 30000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
	End

	ParalyzeNugget
		Radius			= 200.0 //150.0
		Duration			= POISONED_STINGER_DURATION
		SpecialObjectFilter	= CRIPPLE_STRIKE_OBJECT_FILTER
		ParalyzeFX		= FX_PoisonedStunEffect
	End
End

;------------------------------------------------------------------------------
Weapon WildHillTrollHammer     ; BALANCE Wild Marauder Weapon
  LeechRangeWeapon      	= Yes
  AttackRange           	= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes	; Sorry, stand off doesn't work.  This is just a melee weapon.
  DelayBetweenShots    		= ANGMAR_HILLTROLL_DELAYBETWEENSHOTS				; time between shots, msec
  PreAttackDelay        		= ANGMAR_HILLTROLL_PREATTACKDELAY				
  PreAttackType         		= PER_SHOT			; Do the delay each time we attack
  FireFX                	= FX_TrollPunchGeneric //FX_GondorSwordHit
  FireFlankFX					= FX_Flanking
  FiringDuration        		= ANGMAR_HILLTROLL_FIRINGDURATION				
  
	DamageNugget								; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage				= ANGMAR_HILLTROLL_HAMMER_DAMAGE
		DamageType			= SIEGE //SPECIALIST
		DamageFXType		= CLUBBING //SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar				= 150% NONE +STRUCTURE //Added for SEE!
  	DamageScalar				= 200% NONE +HERO	//Added for SEE!		
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		;ForbiddenUpgradeNames		= Upgrade_StructureLevel1
		FlankingBonus = 50%
	End

	DamageNugget								; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage				= ANGMAR_HILLTROLL_HAMMER_DAMAGE_UPGRADE
		DamageType			= SIEGE //SPECIALIST
		DamageFXType		= CLUBBING //SWORD_SLASH
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar				= 150% NONE +STRUCTURE //Added for SEE!
  	DamageScalar				= 200% NONE +HERO	//Added for SEE!		
		;LostLeadershipUselessAgainst	= CAVALRY ; Useless when under the CloudBreak spell against Cavalry type units
		;RequiredUpgradeNames		= Upgrade_StructureLevel1
		FlankingBonus = 50%
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
		ShockWaveAmount   		= 20.0
		ShockWaveRadius   		= 20.0
		ShockWaveTaperOff 		= 1.0
		ShockWaveArc      		= 20 //45
		ShockWaveZMult    		= 1.20
		HeroResist				= .75
	End	
End

; ------------------------------------------------------------------------------
; This is the normal punch, not the AOE, rock, siege or tree
Weapon MoriaCaveTrollPunch  									;Used by both MOUNTAIN TROLL and CAVE TROLL /Naz
  LeechRangeWeapon			= Yes
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  AttackRange           	= STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           	= Yes
  DelayBetweenShots     		= MORDOR_TROLL_PUNCH_DELAYBETWEENSHOTS
  FiringDuration        		= MORDOR_TROLL_PUNCH_FIRINGDURATION
  PreAttackDelay        		= MORDOR_TROLL_PUNCH_PREATTACKDELAY
  PreAttackType         		= PER_SHOT ; Do the delay each time we attack a new target
  PreAttackFX          		= FX_TrollTreeSwing
  FireFX               		= FX_TrollPunchGeneric
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  AcceptableAimDelta			= 15.0 

  DamageNugget                        ; A basic Nugget that just does damage
	DamageMaxHeightAboveTerrain = 10
    Damage        			= CAVE_TROLL_PUNCH_DAMAGE
    Radius        			= 50.0
    DamageArc      			= 45
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar				= 150% NONE +STRUCTURE //Added for SEE!
  	DamageScalar				= 200% NONE +HERO	//Added for SEE!
  	//DamageScalar  			= 200% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
	ForbiddenUpgradeNames	= Upgrade_StructureLevel1
  End
  
  DamageNugget                        ; A basic Nugget that just does damage
	DamageMaxHeightAboveTerrain = 10
    Damage        			= MORDOR_TROLL_PUNCH_DAMAGE
    Radius        			= 50.0
    DamageArc      			= 45
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar				= 150% NONE +STRUCTURE //Added for SEE!
  	DamageScalar				= 200% NONE +HERO	//Added for SEE!
  	//DamageScalar  			= 200% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
	RequiredUpgradeNames		= Upgrade_StructureLevel1
  End
  
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   		= 40.0 ;20.0
    ShockWaveRadius   		= 40.0
    ShockWaveTaperOff 		= 1.0
    ShockWaveArc      		= 45
    ShockWaveZMult    		= 1.20
	HeroResist				= .75
  End
End

; ------------------------------------------------------------------------------
; This is the building attack bash, not the AOE, rock, siege or tree
Weapon MoriaCaveTrollBash  									;Used by both MOUNTAIN TROLL and CAVE TROLL /Naz
	LeechRangeWeapon	  	= Yes
	AttackRange           	= STANDARD_MELEE_ATTACK_RANGE
	RadiusDamageAffects	  	= ENEMIES 
	MeleeWeapon           	= Yes
	FireFX                	= FX_TrollBash
	DelayBetweenShots     	= MORDOR_TROLL_SHOULDER_DELAYBETWEENSHOTS            ; time between shots, msec
	FiringDuration        		= MORDOR_TROLL_SHOULDER_FIRINGDURATION
	PreAttackDelay        	= MORDOR_TROLL_SHOULDER_PREATTACKDELAY
	PreAttackType         	= PER_SHOT
	PreAttackFX           	= FX_TrollTreeSwing
	AcceptableAimDelta	  	= 35.0 

	DamageNugget                        ; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage        		= CAVE_TROLL_SHOULDER_DAMAGE
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= SIEGE
		DamageFXType  		= CLUBBING
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar			= 150% NONE +STRUCTURE //Added for SEE!
		DamageScalar			= 200% NONE +HERO	//Added for SEE!
		//DamageScalar  		= 200% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		ForbiddenUpgradeNames	= Upgrade_StructureLevel1
	End
  
	DamageNugget                        ; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage        		= MORDOR_TROLL_SHOULDER_DAMAGE
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= SIEGE
		DamageFXType  		= CLUBBING
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar			= 150% NONE +STRUCTURE //Added for SEE!
		DamageScalar			= 200% NONE +HERO	//Added for SEE!
		//DamageScalar  		= 200% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		RequiredUpgradeNames	= Upgrade_StructureLevel1
	End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollRampage // AN ABSOLUTE PAIN TO TIME CORRECTLY!!! This will have to do though... 1st, 2nd and 3rd blow is good, 4th is... ok /Naz
  AttackRange 				= 160.0
  FireFX           			= FX_RampageDust
  RadiusDamageAffects 		= ALLIES ENEMIES NEUTRALS SAME_HEIGHT_ONLY
  PreAttackDelay				= 1000 ///500					; The first hit is in frame 30 @30fps (Naz)
  PreAttackType         		= PER_SHOT
  DelayBetweenShots 			= 1000 ///700 //800 //1000		; Hit 2, 3 & 4 is at frame 60, 90 & 120 @30fps (Naz)
  ClipSize 					= 4 //5 //6                      			; There are 4 hits in total in animation _RPGC (Naz)
  ClipReloadTime 				= 999                 			; Should be maximum 1 sec I guess since there are 30 frames between each hit? ^^ (Naz)

  ; Sequential order of the target positions to follow this list. THIS is where you TIME the 4 attacks of the ramapage! /Naz
  IgnoreLinearFirstTarget 		= No ;Yes
  LinearTarget 				= X: 0.0   Y: 0.0	T:5
  LinearTarget 				= X: 25.0  Y: 15.0	T:4 //X: 20.0  Y: 10.0	T:4
  LinearTarget 				= X: 0.0   Y: 30.0	T:2 ;4 //X: 0.0   Y: 20.0	T:5
  LinearTarget 				= X:-25.0  Y: -15.0	T:4 ///0 ;1 ;3 //X:-20.0  Y: 0.0	T:5
  ;LinearTarget = X: 0.0   Y:-30.0	T:0 //X: 0.0   Y:-20.0	T:0
  ;LinearTarget = X: 0.0   Y: 0.0	T:5

  DamageNugget                        ; A basic Nugget that just does damage
	;DamageMaxHeightAboveTerrain = 10
    Damage        			= CAVE_TROLL_RAMPAGE_DAMAGE //100
    Radius        			= 30.0 //20.0
    DamageType            	= CRUSH
    DeathType             	= LASERED ;now always used instead of NORMAL (Sûl)
  	DamageScalar				= 300% NONE +STRUCTURE +HERO	//Added for SEE! ;We want to HURT heroes! (Naz)	
  	//DamageScalar  			= 400% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!		
	;DelayTime				= 500
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
  	HeroResist				= .90 //.75 
    ShockWaveAmount   		= 50.0
    ShockWaveRadius   		= 20.0 //30.0
    ShockWaveTaperOff 		= 1.0
	;DelayTime				= 500
  End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollTreeRampage
  AttackRange 				= 160.0
  FireFX           			= FX_RampageDust
  RadiusDamageAffects 		= ALLIES ENEMIES NEUTRALS SAME_HEIGHT_ONLY
  PreAttackDelay				= 1000 ///500
  PreAttackType         		= PER_SHOT  
  DelayBetweenShots 			= 1000 //800 //1000                 ; time between shots, msec
  ClipSize 					= 4 //6                            ; how many shots in a Clip (0 == infinite)
  ClipReloadTime 				= 1000                      ; how long to reload a Clip, msec

  ; Sequential order of the target positions to follow this list
  IgnoreLinearFirstTarget 		= No ;Yes
  LinearTarget 				= X: 0.0   Y: 0.0	T:5 			;
  LinearTarget 				= X: 25.0  Y: 15.0	T:4 			; 20 10 4 ;punch
  LinearTarget 				= X: 0.0   Y: 45.0	T:2 //5 			;0 30 5 ;tree
  LinearTarget 				= X:-25.0  Y: -15.0	T:0 //5 			;-20 0 5 ;punch
  ;LinearTarget = X: 0.0   Y:-45.0	T:0 			;0 -30 0;tree
  ;LinearTarget = X: 0.0   Y: 0.0	T:5 			;clearout
  
  DamageNugget                        ; A basic Nugget that just does damage
	DamageMaxHeightAboveTerrain = 10
    Damage        			= CAVE_TROLL_TREE_RAMPAGE_DAMAGE //M_TROLL_RAMPAGE_DAMAGE //100
    Radius        			= 40.0
    DamageType				= CRUSH
    DeathType       		= LASERED ;now always used instead of NORMAL (Sûl)
  	DamageScalar				= 300% NONE +STRUCTURE +HERO	//Added for SEE!	
  	//DamageScalar  			= 400% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!		
	; DelayTime				= 1000
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
	;HeroResist				= .90 //.75 ;We want heroes to go flying as as well! /Naz
    ShockWaveAmount   		= 60.0 //50.0
    ShockWaveRadius   		= 40.0
    ShockWaveTaperOff 		= 1.0
	; DelayTime				= 1000
  End
End

; ------------------------------------------------------------------------------
; This is the attack with a tree in hand

Weapon MoriaCaveTrollClubSwing
	LeechRangeWeapon		= Yes
	RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	MeleeWeapon				= Yes
	AttackRange				= 20									; this was tuned with the Damage and shock wave nugget so it looks good with club
	FireFX					= FX_TrollClubHit
	DelayBetweenShots		= MORDOR_TROLL_TREE_DELAYBETWEENSHOTS	; time between shots, msec
	FiringDuration				= MORDOR_TROLL_TREE_FIRINGDURATION
	PreAttackDelay			= MORDOR_TROLL_TREE_PREATTACKDELAY
	PreAttackType			= PER_SHOT								; Do the delay each time we attack a new target
	PreAttackFX				= FX_TrollTreeSwing 						;Just sound FX!
	DamageDealtAtSelfPosition	= Yes									; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta		= 35.0 

	DamageNugget									; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage				= CAVE_TROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		Radius				= 60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc			= 90
		DamageType			= SIEGE
		DamageFXType		= CLUBBING
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar			= 150% NONE +STRUCTURE //Added for SEE!
		DamageScalar			= 200% NONE +HERO	//Added for SEE!
		//DamageScalar  		= 250% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		ForbiddenUpgradeNames	= Upgrade_StructureLevel1
  End

	DamageNugget									; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 10
		Damage				= MORDOR_TROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		Radius				= 60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc			= 90
		DamageType			= SIEGE
		DamageFXType		= CLUBBING
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar 		= 25% ALL ALLIES
		DamageScalar			= 150% NONE +STRUCTURE //Added for SEE!
		DamageScalar			= 200% NONE +HERO	//Added for SEE!
		//DamageScalar  		= 250% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		RequiredUpgradeNames	= Upgrade_StructureLevel1
  End

	MetaImpactNugget								; A Nugget that throws things back with force
		ShockWaveAmount   	= 60.0 ;40.0
		ShockWaveRadius   	= 60.0
		ShockWaveTaperOff 	= 0.75
		ShockWaveArc      	= 90
		ShockWaveZMult    	= 1.20
		HeroResist			= .75
	End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollClubChop
	LeechRangeWeapon		= Yes
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	MeleeWeapon				= Yes
	AttackRange				= 50									; this was tuned with the Damage and shock wave nugget so it looks good with club
	FireFX					= FX_TrollClubHit
	DelayBetweenShots		= MORDOR_ATTACKTROLL_TREECHOP_DELAYBETWEENSHOTS	; time between shots, msec
	FiringDuration				= MORDOR_ATTACKTROLL_TREECHOP_FIRINGDURATION
	PreAttackDelay			= MORDOR_ATTACKTROLL_TREECHOP_PREATTACKDELAY
	PreAttackType			= PER_SHOT								; Do the delay each time we attack a new target
	PreAttackFX				= FX_TrollTreeSwing
	; DamageDealtAtSelfPosition	= Yes									; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta		= 35.0 

	DamageNugget									; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 20
		Damage				= CAVE_TROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		Radius				= 0.0 ;60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc			= 0.0 ;30
		DamageType			= SIEGE
		DamageFXType		= CLUBBING
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar			= 200% NONE +STRUCTURE //Added for SEE!
		//DamageScalar  		= 250% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		ForbiddenUpgradeNames	= Upgrade_StructureLevel1
  End

	DamageNugget									; A basic Nugget that just does damage
		DamageMaxHeightAboveTerrain = 20
		Damage				= MORDOR_TROLL_TREE_DAMAGE  ; kill gondor troops in 1 hit
		Radius				= 0.0 ;60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc			= 0.0 ;30
		DamageType			= SIEGE
		DamageFXType		= CLUBBING
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar			= 200% NONE +STRUCTURE //Added for SEE!
		//DamageScalar  		= 250% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		RequiredUpgradeNames	= Upgrade_StructureLevel1
  End

	MetaImpactNugget								; A Nugget that throws things back with force
		ShockWaveAmount   	= 60.0 ;40.0
		ShockWaveRadius   	= 0.0
		ShockWaveTaperOff 	= 0.75
		ShockWaveArc      	= 0
		ShockWaveZMult    	= 1.20
		HeroResist			= .75
	End
End

; ------------------------------------------------------------------------------
; This is the weapon for a troll picking up a nearby goblin and throwing him. 
Weapon MoriaCaveTrollGoblinThrow
	;IdleAfterFiringDelay		= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload			= Yes
	AttackRange				= MORDOR_TROLL_ROCK_MINRANGE
	WeaponSpeed			= 200.0							; dist/sec (huge value == effectively instant)
	FireFX					= FX_EntThrowSmallRock
	PreAttackDelay			= 1400
	FiringDuration				= 2000
	PreAttackType			= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots		= 6100
	HitPercentage				= 0								; never auto hits, always hits ground
	ScatterRadius				= 4.0							; When this weapon misses it can randomly miss by as much as this distance.
	IsAimingWeapon			= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded			= Yes							; Need no target
	LeechRangeWeapon		= Yes

	AutoReloadWhenIdle		= 1500							; should be a bit less than IdleAfterFiringDelay
	ClipSize 					= 1
	AutoReloadsClip 			= No
	ClipReloadTime 			= 2100
	
	ProjectileFilterInContainer 	= NONE +INFANTRY				; Throw out contained infantry

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		WarheadTemplateName		= MoriaCaveTrollGoblinThrowWarhead
	End
End

;----------------------------------- ^^
Weapon MoriaCaveTrollGoblinThrowWarhead
	ProjectileCollidesWith 		= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
	FireFX 					= FX_RockDetonation ;Just sound!
	DamageNugget															; A basic Nugget that just does damage
		Damage				= CAVE_TROLL_GOBLIN_DAMAGE
		Radius				= 15.0
		DamageType			= SLASH ;SIEGE
		DamageFXType		= SMALL_ROCK
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
	End
	MetaImpactNugget															; A Nugget that throws things back with force
		HeroResist			= .50
		ShockWaveAmount	= 30.0 ;50.0
		ShockWaveRadius		= 18.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 0.60
	End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollRockThrow_SEE
	;IdleAfterFiringDelay		= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload			= Yes
	AttackRange				= MORDOR_TROLL_ROCK_MINRANGE

	RangeBonusMinHeight		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( MORDOR_TROLL_ROCK_MINRANGE .025 )
	
	WeaponSpeed			= 200.0							; dist/sec (huge value == effectively instant)
	FireFX					= FX_EntThrowSmallRock			; just sound FX!
	PreAttackDelay			= 1400
	FiringDuration				= 2000
	PreAttackType			= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots		= 6100
	HitPercentage				= 0								; never auto hits, always hits ground
	ScatterRadius				= 4.0							; When this weapon misses it can randomly miss by as much as this distance.

	IsAimingWeapon			= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded			= Yes							; Need no target
	LeechRangeWeapon		= Yes

	HoldAfterFiringDelay		= 2100
	AutoReloadWhenIdle		= 1500							; should be a bit less than IdleAfterFiringDelay
	; ClipSize 				= 1
	AutoReloadsClip 			= NO ;Yes
	ClipReloadTime 			= 2100

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigTroll
		WarheadTemplateName		= MoriaCaveTrollRockThrowWarhead
		ForbiddenUpgradeNames	= Upgrade_StructureLevel1
	End
  
	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigTroll
		WarheadTemplateName		= MoriaMountainTrollRockThrowWarhead
		RequiredUpgradeNames		= Upgrade_StructureLevel1
	End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollRockThrowLongRange_SEE
	;IdleAfterFiringDelay		= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload			= Yes
	AttackRange				= MORDOR_TROLL_ROCK_RANGE
	MinimumAttackRange		= MORDOR_TROLL_ROCK_MINRANGE
	
	RangeBonusMinHeight		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( MORDOR_TROLL_ROCK_RANGE .020 )
	
	WeaponSpeed			= 200.0							; dist/sec (huge value == effectively instant)
	FireFX					= FX_EntThrowSmallRock
	PreAttackDelay			= 1400
	FiringDuration				= 2000
	PreAttackType			= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots		= 6100
	HitPercentage				= 0								; never auto hits, always hits ground
	; ScatterRadius				= 15.0							; When this weapon misses it can randomly miss by as much as this distance.
	ClipSize 					= 6 ; ;
	AutoReloadsClip 			= Yes
	ClipReloadTime          	= 6100; how long to reload a Clip, msec
	ScatterRadius				= 0.0							; When this weapon misses it can randomly miss by as much as this distance.
  	; // Instead of a purely random scatter distance, this will divide a clip evenly and randomly at these spots
  	ScatterTargetScalar 		= 1.0 ; replaces the ScatterRadius, above, for scaling this table, below
  	ScatterTarget           	= X: 22 Y: 7
  	ScatterTarget           	= X: 10 Y:-16
  	ScatterTarget           	= X:-13 Y: 18
  	ScatterTarget           	= X: 0.000 Y: 0.000 
  	ScatterTarget           	= X:-8 Y: 10
  	ScatterTarget           	= X: 10 Y: 8
	ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
	IsAimingWeapon			= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded			= Yes							; Need no target
	LeechRangeWeapon		= Yes

	HoldAfterFiringDelay		= 2100
	AutoReloadWhenIdle		= 1500							; should be a bit less than IdleAfterFiringDelay
	; ClipSize 					= 1
	AutoReloadsClip 			= NO ;Yes
	ClipReloadTime 			= 2100

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigTrollBombard_SEE ; (Scaled 5% like trolls)
		WarheadTemplateName		= MoriaCaveTrollRockThrowWarhead
		ForbiddenUpgradeNames	= Upgrade_StructureLevel1
	End
  
	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigTrollBombard_SEE ; (Scaled 5% like trolls)
		WarheadTemplateName		= MoriaMountainTrollRockThrowWarhead
		RequiredUpgradeNames		= Upgrade_StructureLevel1
	End
  
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset		= Yes									; so we don't assert.
		ProjectileTemplateName  	= ShroudRevealer_Bombard
		WarheadTemplateName		= ShipRevealBombardWarhead_Dummy
	End
End

;----------------------------------- ^^
Weapon MoriaCaveTrollRockThrowWarhead
	ProjectileCollidesWith 			= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
  
  DamageNugget															; A basic Nugget that just does damage
		Damage					= CAVE_TROLL_ROCK_DAMAGE
		Radius					= 12.0
		DamageType				= SIEGE
		DamageFXType			= SMALL_ROCK
		DeathType				= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar  			= 25% ALL ALLIES
		DamageScalar				= 200% NONE +STRUCTURE +HERO	//Added for SEE!	
		//DamageScalar  			= 225% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		DamageScalar  			= 500% NONE +SHIP //Added for SEE!	
  End
  
	MetaImpactNugget															; A Nugget that throws things back with force
		HeroResist				= .50
		ShockWaveAmount		= 60.0 ;50.0
		ShockWaveRadius			= 15.0
		ShockWaveTaperOff		= 0.5
		ShockWaveZMult			= 1.20
	End
  
End

;----------------------------------- ^^
Weapon MoriaMountainTrollRockThrowWarhead
	ProjectileCollidesWith 		= ALLIES ENEMIES NEUTRAL STRUCTURES WALLS			; Remember, the projectile is a rock, who has no allies
  
  DamageNugget															; A basic Nugget that just does damage
		Damage				= MORDOR_TROLL_ROCK_DAMAGE
		Radius				= 12.0
		DamageType			= SIEGE
		DamageFXType		= SMALL_ROCK
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar			= 200% NONE +STRUCTURE +HERO	//Added for SEE!	
		//DamageScalar  		= 225% NONE +RohanTreeBerd +RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!	
		DamageScalar  		= 500% NONE +SHIP //Added for SEE!	
  End
  
	MetaImpactNugget															; A Nugget that throws things back with force
		HeroResist			= .50
		ShockWaveAmount	= 60.0 ;50.0
		ShockWaveRadius		= 15.0
		ShockWaveTaperOff	= 0.5
		ShockWaveZMult		= 1.20
	End
End

; ------------------------------------------------------------------------------
Weapon MoriaCaveTrollCrush  					; Used when the rohirrim crush an enemy.
  LeechRangeWeapon      	= Yes
  AttackRange           	= 9999999.0
  MeleeWeapon           	= No
  DelayBetweenShots     		= 0            			; time between shots, msec
  PreAttackDelay        		= 0 				;PreAttackDelay+FiringDuration = UseWeaponTiming = Yes duration
  PreAttackType         		= PER_SHOT 
  FiringDuration        		= 0
  FireFX					= FX_GenericCrushImpactSound

  DamageNugget                  			; A basic Nugget that just does damage
    Damage        			= TROLL_CRUSH_DAMAGE			; A whole lot of damage.
    Radius        			= 0.0
    DelayTime     			= 0
    DamageType    			= CRUSH
    DeathType     			= CRUSHED
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildMountainGiantStomp 			; Special ability
	IdleAfterFiringDelay 		= 0
	AttackRange 			= 25.0 		; only half of M_WILD_MOUNTAIN_GIANT_STOMP_RADIUS
	MinimumAttackRange 		= 0.8
	WeaponSpeed 			= 401       ; dist/sec 
	MinWeaponSpeed 			= 241
	MaxWeaponSpeed 		= 601      	; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	ScaleWeaponSpeed 		= Yes 		; Used for lob weapons, scales speed proportional to range
	RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
	DelayBetweenShots 		= 5000               ; time between shots, msec
	PreAttackDelay        	= 2600
	PreAttackType         	= PER_ATTACK ; Do the delay each time we attack a new target
	PreAttackFX           	= FX_GandalfPreAttackBlast
	FireFX                	= FX_GiantStomp
	FiringDuration      		= 1400
	DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
	LockWhenUsing			= Yes
  
	DamageNugget                        ; A basic Nugget that just does damage
		Damage				= WILD_MOUNTAIN_GIANT_STOMP_DAMAGE
		Radius				= WILD_MOUNTAIN_GIANT_STOMP_RADIUS
		DamageType			= FORCE
		DeathType			= LASERED ;now always used instead of NORMAL (Sûl)
		DamageSpeed			= 700.0 ; must match the ShockWaveSpeed below
		DamageScalar  		= 25% ALL ALLIES
		DamageScalar  		= 250% NONE +HERO	//Added for SEE!
		DamageArc      		= 180
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
		;HeroResist			= .75
		ShockWaveArc      	= 180
		ShockWaveAmount   	= 35.0
		ShockWaveRadius   	= WILD_MOUNTAIN_GIANT_STOMP_RADIUS
		ShockWaveTaperOff 	= 1.0
		ShockWaveSpeed	  	= 700.0 
	End
End

; ------------------------------------------------------------------------------ SEE!
; This is the normal punch, not the AOE, rock, siege or tree
Weapon WildMountainGiantPunch1				; ATKA - Left arm swat
  LeechRangeWeapon 			= Yes
  AttackRange				= 20.0 ;30.0
  MeleeWeapon				= Yes
  ;HoldAfterFiringDelay			= 1400			; don't let the unit AI do anything else until animation finishes
  DelayBetweenShots			= 1400			; slightly less than FiringDuration
  FiringDuration				= 1600			; remaining 48 frames of 90
  PreAttackDelay				= 1400			; anim frame 42/90
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FireFX					= FX_TreeBeardPunch
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  LockWhenUsing				= Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= WILD_MOUNTAIN_GIANT_PUNCH_DAMAGE
    Radius        			= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    DelayTime     			= 0
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc	  			= 40
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar  			= 200% NONE +HERO	//Added for SEE!	
    DamageScalar				= 250% NONE +RohanTreeBerd //+RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   		= 60.0
    ShockWaveRadius   		= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    ShockWaveTaperOff 		= 1.0
    ShockWaveArc      		= 40
;    ShockWaveZMult   = 0.75
;    HeroResist		  = 0.90		; 90% resistance to heroes
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildMountainGiantPunch2				; ATKB - Right backhand
  LeechRangeWeapon 			= Yes
  AttackRange				= 20.0 ;30.0
  MeleeWeapon				= Yes
  ;HoldAfterFiringDelay			= 1400			; don't let the unit AI do anything else until animation finishes
  DelayBetweenShots			= 1400			; slightly less than FiringDuration
  FiringDuration				= 1600			; remaining 47 frames of 81 (rounded to nearest logic frame)
  PreAttackDelay				= 1200			; anim frame 34/81 (rounded to nearest logic frame)
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FireFX					= FX_TreeBeardPunch
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  LockWhenUsing				= Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= WILD_MOUNTAIN_GIANT_PUNCH_DAMAGE
    Radius        			= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    DelayTime     			= 0
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc	  			= 40
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar  			= 200% NONE +HERO	//Added for SEE!	
  	DamageScalar				= 250% NONE +RohanTreeBerd //+RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   		= 60.0
    ShockWaveRadius   		= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    ShockWaveTaperOff 		= 1.0
    ShockWaveArc      		= 40
;    ShockWaveZMult   			= 0.75
;    HeroResist		  		= 0.90		; 90% resistance to heroes
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildMountainGiantPunch3				; ATKD - Right football kick
  LeechRangeWeapon 			= Yes
  AttackRange				= 20.0 ;30.0
  MeleeWeapon				= Yes
  ;HoldAfterFiringDelay			= 1200			; don't let the unit AI do anything else until animation finishes
  DelayBetweenShots			= 1400
  FiringDuration				= 1400			; remaining 43 frames of 71 (rounded to nearest logic frame)
  PreAttackDelay				= 1000			; anim frame 28/71 (rounded to nearest logic frame)
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FireFX					= FX_TreeBeardPunch
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  LockWhenUsing				= Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= WILD_MOUNTAIN_GIANT_PUNCH_DAMAGE
    Radius        			= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    DelayTime     			= 0
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc	  			= 40
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar  			= 250% NONE +HERO	//Added for SEE!	
  	DamageScalar				= 300% NONE +RohanTreeBerd //+RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   		= 60.0
    ShockWaveRadius   		= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    ShockWaveTaperOff 		= 1.0
    ShockWaveArc      		= 40
;    ShockWaveZMult   			= 0.75
;    HeroResist		  		= 0.90		; 90% resistance to heroes
  End
End

; ------------------------------------------------------------------------------ SEE!
Weapon WildMountainGiantMovingPunch				; ATRA - Right backhand while moving
  LeechRangeWeapon 			= Yes
  AttackRange				= 20.0 ;30.0
  MeleeWeapon				= Yes
  ;HoldAfterFiringDelay			= 1200			; don't let the unit AI do anything else until animation finishes
  DelayBetweenShots			= 1400
  FiringDuration				= 600			; remaining 20 frames of 44 (rounded to nearest logic frame)
  PreAttackDelay				= 800			; anim frame 22/44 (rounded to nearest logic frame)
  PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
  FireFX					= FX_TreeBeardPunch
  RadiusDamageAffects 		= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  DamageDealtAtSelfPosition 	= Yes ; A melee based AoE.  Arc radiates from me, not them
  LockWhenUsing				= Yes

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        			= WILD_MOUNTAIN_GIANT_PUNCH_DAMAGE
    Radius        			= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    DelayTime     			= 0
    DamageType    			= SIEGE
    DamageFXType  			= CLUBBING
    DeathType     			= LASERED ;now always used instead of NORMAL (Sûl)
    DamageArc	  			= 40
	DamageScalar  			= 25% ALL ALLIES
  	DamageScalar  			= 150% NONE +HERO	//Added for SEE!	
  	DamageScalar				= 200% NONE +RohanTreeBerd //+RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   		= 60.0
    ShockWaveRadius   		= WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    ShockWaveTaperOff 		= 1.0
    ShockWaveArc      		= 40
;    ShockWaveZMult   			= 0.75
;    HeroResist		  		= 0.90		; 90% resistance to heroes
  End
End

; ------------------------------------------------------------------------------ SEE!
; This is the building attack and is also used against monsters
Weapon GiantBuildingTeardown
	RadiusDamageAffects		= ENEMIES NEUTRALS
	CanFireWhileMoving		= No
	LeechRangeWeapon		= Yes				;Just like the troll, this needs to go with Melee to let me hurt round buildings.
	AttackRange				= 20.0
	AntiStructure				= Yes				; Ram ONLY affects structures -- buildings, walls, gates
	AntiGround				= Yes				; Can attack monsters too
	MeleeWeapon				= Yes
	AcceptableAimDelta		= 20				; Can't ram sideways (but give a little slack)
	FireFX					= FX_TreeBeardBash
	DelayBetweenShots		= 3900				; time between shots, msec
	FiringDuration				= 1900				; min 1900 for anim
	PreAttackDelay			= 1100
	PreAttackType			= PER_SHOT			; Do the delay each time we attack a new target

	DamageNugget                        ; A basic Nugget that just does damage
		SpecialObjectFilter		= ANY +STRUCTURE +BLOCKING_GATE
		Damage        		= WILD_MOUNTAIN_GIANT_BUILDINGATTACK_DAMAGE
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= SIEGE
		DamageFXType  		= CLUBBING
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
	End

	DamageNugget                        ; A basic Nugget that just does damage
		SpecialObjectFilter 	= ANY +MONSTER
		Damage        		= WILD_MOUNTAIN_GIANT_ANTIMONSTER_DAMAGE
		Radius        		= 0.0
		DelayTime     		= 0
		DamageType    		= SIEGE
		DamageFXType  		= CLUBBING
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
	End
	
	MetaImpactNugget                    ; A Nugget that throws things back with force
		;HeroResist			= .75
		ShockWaveArc      	= 60 //180
		ShockWaveAmount   	= 35.0
		ShockWaveRadius   	= WILD_MOUNTAIN_GIANT_STOMP_RADIUS
		ShockWaveTaperOff 	= 1.0
		ShockWaveSpeed	  	= 700.0 
	End	
End

; ------------------------------------------------------------------------------ SEE!
; This is the toggle weapon for giants. They will reload, throw, reload straight away, and constantly hold a rock.
Weapon GiantRockThrow		// Used by ALL MountainGiants as RockThrow! /Naz
	HoldDuringReload			= Yes							
	AttackRange				= WILD_MOUNTAIN_GIANT_ROCK_RANGE
	MinimumAttackRange		= WILD_MOUNTAIN_GIANT_ROCK_MINRANGE
	RangeBonusMinHeight		= 10
	RangeBonus				= 1
	RangeBonusPerFoot		= #MULTIPLY( WILD_MOUNTAIN_GIANT_ROCK_RANGE .025 )
	
	WeaponSpeed			= 200.0							; dist/sec (huge value == effectively instant)
	FireFX					= FX_EntThrowSmallRock
	PreAttackDelay			= 1200
	FiringDuration				= 2000
	PreAttackType			= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots		= 6000
	ClipSize 					= 6 ; ;
	AutoReloadsClip 			= Yes
	ClipReloadTime          	= 6000; how long to reload a Clip, msec
	; HitPercentage			= 0								; never auto hits, always hits ground
	; ScatterRadius			= 4.0							; When this weapon misses it can randomly miss by as much as this distance.
	HitPercentage				= 0     ;Make sure that scatter radius is called so that multiple projectiles will land separately.
	ScatterRadius				= 0.0     ;When this weapon misses it can randomly miss by as much as this distance.
  	; ; Instead of a purely random scatter distance, this will divide a clip evenly and randomly at these spots
  	ScatterTargetScalar 		= 1.0 ; replaces the ScatterRadius, above, for scaling this table, below
  	ScatterTarget           	= X: 43 Y: 14
  	ScatterTarget           	= X: 20 Y:-32
  	ScatterTarget           	= X:-25 Y: 36
  	ScatterTarget           	= X: 0.000 Y: 0.000 
  	ScatterTarget           	= X:-16 Y: 19
  	ScatterTarget           	= X: 19 Y: 16
	ScatterIndependently		= Yes		;Each projectile fired at once from this weapon should scatter independently of each other.
	IsAimingWeapon			= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded			= Yes							; Need no target
	LeechRangeWeapon		= Yes

	HoldAfterFiringDelay		= 4200
	AutoReloadWhenIdle		= 1800							; should be a bit less than IdleAfterFiringDelay or HoldAfterFiringDelay
	//ClipSize 				= 1
	AutoReloadsClip 			= NO
	ClipReloadTime 			= 2000

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigGiant
		WarheadTemplateName		= WildMountainGiantRockThrowWarhead
	End
	
	ProjectileNugget													; This nugget is to create a revealing object, so fire
		AlwaysAttackHereOffset	= X:0 Y:0 Z:0							; it directly on top of us, and just use an empty warhead
		UseAlwaysAttackOffset		= Yes									; so we don't assert.
		ProjectileTemplateName  	= ShroudRevealer_Bombard
		WarheadTemplateName		= ShipRevealBombardWarhead_Dummy
	End
End

; ------------------------------------------------------------------------------ SEE!
Weapon GiantRockThrowCloseRange
	;IdleAfterFiringDelay			= 2000							; Do NOT idle after throwing or Bombard will break
	HoldDuringReload				= Yes							
	AttackRange					= WILD_MOUNTAIN_GIANT_ROCK_MINRANGE
	RangeBonusMinHeight			= 10
	RangeBonus					= 1
	RangeBonusPerFoot			= #MULTIPLY( WILD_MOUNTAIN_GIANT_ROCK_MINRANGE .025 )
	
	WeaponSpeed				= 200.0							; dist/sec (huge value == effectively instant)
	FireFX						= FX_EntThrowSmallRock
	PreAttackDelay				= 1200
	FiringDuration					= 2000
	PreAttackType				= PER_SHOT						; Do the delay each time we attack a new target
	DelayBetweenShots			= 6000
	HitPercentage					= 0								; never auto hits, always hits ground
	ScatterRadius					= 4.0							; When this weapon misses it can randomly miss by as much as this distance.

	IsAimingWeapon				= Yes							; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded				= Yes							; Need no target
	LeechRangeWeapon			= Yes
	HoldAfterFiringDelay			= 4200
	AutoReloadWhenIdle			= 1800							; should be a bit less than IdleAfterFiringDelay or HoldAfterFiringDelay
	//ClipSize 					= 1
	AutoReloadsClip 				= NO
	ClipReloadTime 				= 2000

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RockBigGiant
		WarheadTemplateName		= WildMountainGiantRockThrowWarhead
	End
End

;---------------------------- ^^
Weapon WildMountainGiantRockThrowWarhead
  ;FireFX= FX_ImpactEntRock
  ProjectileCollidesWith 			= ENEMIES NEUTRAL STRUCTURES WALLS ALLIES ;Remember, the projectile is a rock, who has no allies
  RadiusDamageAffects 			= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
    
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        				= WILD_MOUNTAIN_GIANT_ROCK_DAMAGE
    Radius         				= 30.0
    DelayTime     				= 0
    DamageType    				= SIEGE
    DamageFXType  				= SMALL_ROCK
    DeathType     				= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  	= 25% ALL ALLIES
  	DamageScalar		= 200% NONE +RohanTreeBerd //+RohanEntBirch +RohanEntBirch_Summoned +RohanEntFir +RohanEntFir_Summoned +RohanEntAsh +RohanEntAsh_Summoned +RohanEntOak +RohanEntOak_Summoned +RohanGenericEnt //Added for SEE!
  	DamageScalar		= 200% NONE +STRUCTURE	//Added for SEE!
  	DamageScalar  	= 300% NONE +HERO	//Added for SEE!	
  	DamageScalar  	= 500% NONE +SHIP	//Added for SEE!
  End

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        				= WILD_MOUNTAIN_GIANT_ROCK_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
    DamageTaperOff 				= 50
    Radius        				= 100.0
    DelayTime     				= 0
    DamageType    				= SIEGE
    DamageFXType  				= BIG_ROCK
    DeathType     				= EXPLODED
	DamageScalar  	= 0% ALL ENEMIES -WALL_UPGRADE -WALL_HUB -WALL_SEGMENT -DEFENSIVE_WALL	-FS_BASE_DEFENSE		; No damage to allied structures.
	DamageScalar 	= 0% ALL ALLIES
	DamageScalar  	= 120% ANY ENEMIES +FS_BASE_DEFENSE ; ;
    ; DamageScalar  	= 500% NONE +SHIP			//Added for SEE!
  End

  MetaImpactNugget   			; A Nugget that throws things back with force
    ; HeroResist					= .75
    ShockWaveAmount			= 25.0
    ShockWaveRadius				= 30.0
    ShockWaveTaperOff			= 0.75
    ; ShockWaveZMult				= 1.20
  End
End

;------------------------------------------------------------------------------ SEE!
Weapon MountainGiantDeath
  RadiusDamageAffects 	= ENEMIES NEUTRALS NOT_SIMILAR ALLIES
  
  DamageNugget          ; A basic Nugget that just does damage
    Damage        		= WILD_MOUNTAIN_GIANT_DEATH_DAMAGE
    Radius        		= WILD_MOUNTAIN_GIANT_DEATH_RADIUS
    DelayTime     		= 0
    DamageType    		= CRUSH // Ents have FORCE?
    DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
	DamageScalar  		= 300% NONE +HERO	//Added for SEE!
  End
  
  MetaImpactNugget      ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount	= 40.0
    ShockWaveRadius		= 40.0
    ShockWaveTaperOff	= 1.0
  End
End


























;------------------------------------------------------------------------------
Weapon WildSpiderRiderBow     ; BALANCE Wild Spider Rider bow Weapon
	AttackRange         	= WILD_SPIDERRIDER_RANGE
	
	RangeBonusMinHeight      = 30 ;	= 10
	RangeBonus		= 1
	RangeBonusPerFoot	= #MULTIPLY( WILD_SPIDERRIDER_RANGE .003 )  
	
	WeaponSpeed         	= 321         ; dist/sec 
	MinWeaponSpeed      	= 241
	MaxWeaponSpeed      	= 481      ; dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX              	= FX_RohanArcherBowWeapon
	ScaleWeaponSpeed    	= Yes		;Used for lob weapons, scales speed proportional to range
	HitPercentage       	= 100		;When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius       	= 16.0		;When this weapon misses it can randomly miss by as much as this distance.
	  
	AcceptableAimDelta		= 20		; prevent twitchy reaiming in horde on horde
	
	DelayBetweenShots   	= 0
	
	PreAttackDelay      	= WILD_SPIDERRIDER_BOW_PREATTACKDELAY 
	PreAttackType			= PER_SHOT
	;PreAttackRandomAmount	= 200   
	FiringDuration			= 0
	RequireFollowThru		= Yes
	  
	;AutoReloadWhenIdle		= 1	
	
	ClipSize				= 1
	AutoReloadsClip			= Yes
	ClipReloadTime			= Min:WILD_SPIDERRIDER_BOW_RELOADTIME_MIN Max:WILD_SPIDERRIDER_BOW_RELOADTIME_MAX
	
	;ContinuousFireOne		= 0
	;ContinuousFireCoast		= WILD_SPIDERRIDER_BOW_RELOADTIME_MAX
	  
	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes
	HitPassengerPercentage	= 20%
	CanBeDodged				= Yes ; Will check for a DodgePercent on the target to have a second chance at failing HitPercent

	ProjectileNugget                    ; Default arrow
	    ProjectileTemplateName    = EvilFactionArrow
	    WarheadTemplateName       = WildSpiderRiderBowWarhead
	    ForbiddenUpgradeNames     = Upgrade_WildFireArrows
	End	
  		
	ProjectileNugget    ; Fire Arrow
		ProjectileTemplateName  = EvilFactionFireArrow
		WarheadTemplateName      = WildSpiderRiderBowFireWarhead
		RequiredUpgradeNames     = Upgrade_WildFireArrows
	End
End

;----------------------------
Weapon WildSpiderRiderBowWarhead
  ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS ;ALLIES (4/23/04 removed friendly fire)
  RadiusDamageAffects		= ENEMIES NEUTRALS ALLIES NOT_SIMILAR
  HitStoredTarget			= Yes	; Always hits initial target.
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = WILD_SPIDERRIDER_BOW_DAMAGE
    Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
    DelayTime     = 0
    DamageType    = PIERCE
    DamageFXType  = EVIL_ARROW_PIERCE
    DeathType     = NORMAL
    DamageScalar  = 50% NONE +GondorTowerShieldGuard +RohanSpearmen +ElvenMithlondSentry +DwarvenPhalanx +ArnorTowerShieldGuard
    DamageScalar  = 50% NONE +AngmarRhudaurSpearman +WildMarauder +IsengardPikeman +AngmarHillTroll +MordorEasterling
  End
End


;----------------------------
Weapon WildSpiderRiderBowFireWarhead
	ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects		= ENEMIES NEUTRALS NOT_SIMILAR ;ALLIES
	HitStoredTarget			= Yes	; Always hits initial target.

	DamageNugget                        
		Damage        = WILD_SPIDERRIDER_FIRE_UPGRADE_DAMAGE_FLAME
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = BURNED
		AcceptDamageAdd = No
		DamageScalar  = 25% ALL -STRUCTURE
	End

	DamageNugget        ; A basic Nugget that just does damage
		Damage        	= 1
		Radius        	= 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageType    	= FLAME
		DamageFXType  	= FLAME
		DeathType     	= BURNED
		AcceptDamageAdd = No
		DamageScalar	= 50000% NONE +MINE ; Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	DamageNugget                        ; A basic Nugget that just does damage
		Damage        = WILD_SPIDERRIDER_FIRE_UPGRADE_DAMAGE
		Radius        = 0.0	; HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = PIERCE
		DamageFXType  = EVIL_ARROW_PIERCE
		DeathType     = NORMAL
	    	DamageScalar  = 50% NONE +GondorTowerShieldGuard +RohanSpearmen +ElvenMithlondSentry +DwarvenPhalanx +ArnorTowerShieldGuard
	    	DamageScalar  = 50% NONE +AngmarRhudaurSpearman +WildMarauder +IsengardPikeman +AngmarHillTroll +MordorEasterling
	End
End

;------------------------------------------------------------------------------
Weapon WildSpiderRiderSword
	LeechRangeWeapon		= Yes
	AttackRange				= 30.0
	MeleeWeapon				= Yes
	DelayBetweenShots		= WILD_SPIDERRIDER_SWORD_DELAYBETWEENSHOTS ; time between shots, msec
	PreAttackDelay			= WILD_SPIDERRIDER_SWORD_PREATTACKDELAY ; 300 is mace swing delay time before contact with target.
	PreAttackType			= PER_SHOT ; Do the delay each time we attack
	FireFX					= FX_GondorSwordHit
	FireFlankFX				= FX_Flanking
	FiringDuration			= WILD_SPIDERRIDER_SWORD_FIRINGDURATION ; Duration of the mace swing 

	DamageNugget
		Damage					= WILD_SPIDERRIDER_MELEE_DAMAGE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= CAVALRY
		DeathType				= NORMAL
		FlankingBonus				= 50%
		ForbiddenUpgradeNames			= Upgrade_WildForgedBlades
	End

	DamageNugget                       
		Damage					= WILD_SPIDERRIDER_MELEE_DAMAGE_UPGRADE
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= CAVALRY
		DamageFXType				= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames			= Upgrade_WildForgedBlades
		FlankingBonus 				= 50%
	End

	DOTNugget
		Damage				= 4
		AcceptDamageAdd			= No
		Radius				= 0.0
		DelayTime			= 0
		DamageType			= POISON
		DamageFXType			= POISON
		DeathType			= NORMAL
		DamageInterval			= 1000
		DamageDuration			= 10000
		SpecialObjectFilter		= AFFECTED_BY_POISON_OBJECTFILTER 
	End
End


;------------------------------------------------------------------------------
; This is the attack with rock in hand
; Mountain Giant
;Weapon WildMountainGiantRockThrow  ; BALANCE Mountaint Giant Weapon Rock
;	IdleAfterFiringDelay		= 2000 ;Yes if I want to throw rock, then wait until the followthrough is complete, then go idle.
;	AttackRange					= WILD_MOUNTAIN_GIANT_ROCK_RANGE
;	
;	RangeBonusMinHeight      = 30 ;	= 10
;	RangeBonus		= 1
;	RangeBonusPerFoot	= #MULTIPLY( WILD_MOUNTAIN_GIANT_ROCK_RANGE .003 )
;	
;	WeaponSpeed					= 200.0        ; dist/sec (huge value == effectively instant)
;	ProjectileFilterInContainer	= ANY +ROCK +INFANTRY; We don't make the projectile, it is in our Contain module.
;	FireFX						= FX_EntThrowSmallRock
;	PreAttackDelay				= 1400
;	PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
;	HitPercentage				= 0 ; never auto hits, always hits ground
;	ScatterRadius				= 4.0     ;When this weapon misses it can randomly miss by as much as this distance.
;	FiringDuration				= 2000
;	DelayBetweenShots			= 1000
;	IsAimingWeapon				= Yes	; Shooter will use his AimWeaponBehavior to get extra model condition flags
;	NoVictimNeeded				= Yes ; Need no target
;	LeechRangeWeapon			= Yes
;
;	ProjectileNugget                    	; A Nugget that creates an Object and sends it to the target with a Warhead
;		WarheadTemplateName 		= WildMountainGiantRockThrowWarhead
;	End
;End


;----------------------------
Weapon WildMountainGiantRockMeleeAttack							// Smash straight down with the rock when too close to throw it
  LeechRangeWeapon = Yes
  AttackRange				= 30.0
  MeleeWeapon				= Yes
  DelayBetweenShots			= 3600            ; time between shots, msec
  FiringDuration			= 2000            
  PreAttackDelay			= 1400			  
  PreAttackType				= PER_SHOT
  FireFX					= FX_TreeBeardPunch
  RadiusDamageAffects		= ENEMIES NEUTRALS
  ;DamageDealtAtSelfPosition = Yes ; A melee based AoE.  Arc radiates from me, not them

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = WILD_MOUNTAIN_GIANT_ROCK_MELEE_DAMAGE
    Radius        = WILD_MOUNTAIN_GIANT_ROCK_MELEE_RADIUS
    DelayTime     = 0
    DamageType    = SIEGE
    DamageFXType  = CLUBBING
    DeathType     = NORMAL
    DamageArc	  = 180
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
    ShockWaveAmount   = 60.0
    ShockWaveRadius   = WILD_MOUNTAIN_GIANT_PUNCH_RADIUS
    ShockWaveTaperOff = 1.0
    ShockWaveArc      = 40
;    ShockWaveZMult   = 0.75
;    HeroResist		  = 0.90		; 90% resistance to heroes
  End
End



;----------------------------
Weapon WildMountainGiantRockThrowWarhead_Structural
  ;FireFX= FX_ImpactEntRock
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS ; Remember, the projectile is a rock, who has no allies
  RadiusDamageAffects	= ENEMIES ALLIES NEUTRALS 
  
  
  	 DamageNugget                        ; A basic Nugget that just does damage
		Damage        = WILD_MOUNTAIN_GIANT_ROCK_DAMAGE  ; Hella damage.  structures are on a different order of magnitude for hitpoints, and we want to be sure to outscore the fire damage so we can knock bits off.
		DamageTaperOff = 50
		Radius        = 100.0
		DelayTime     = 0
		DamageType    = SIEGE
		DamageFXType  = BIG_ROCK
		DeathType     = EXPLODED
	    	DamageScalar  = 0% ALL ALLIES			; No damage to allies
	    	DamageScalar  = 25% ANY ENEMIES +INFANTRY
	    	DamageScalar  = 25% ANY ENEMIES +CAVALRY 
	    	DamageScalar  = 125% ANY ENEMIES +STRUCTURE
	End
  
  
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount		= 25.0
    ShockWaveRadius		= 20.0
    ShockWaveTaperOff	= 0.75
;   ShockWaveZMult		= 1.20
  End
End


;---------------------------- NOT USED IN SEE!?
Weapon WildMountainGiantRockFromThinAir  ; BALANCE TreeBeard Weapon Rock
	AttackRange					= WILD_MOUNTAIN_GIANT_ROCK_DAMAGE
	WeaponSpeed					= 200.0        ; dist/sec (huge value == effectively instant)
	FireFX						= FX_TrollTreeSwing
	PreAttackDelay				= 6200
	FiringDuration				= 1800
	DelayBetweenShots			= 4000
	PreAttackType				= PER_SHOT ; Do the delay each time we attack a new target
	HitPercentage				= 0 ; never auto hits, always hits ground
	ScatterRadius				= 4.0     ;When this weapon misses it can randomly miss by as much as this distance.
	IsAimingWeapon				= Yes	; Shooter will use his AimWeaponBehavior to get extra model condition flags
	NoVictimNeeded				= Yes ; Need no target
	LeechRangeWeapon			= Yes

	ProjectileNugget                    			; A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName		= RockBigTreeberd
		WarheadTemplateName			= WildMountainGiantRockFromThinAirWarhead
	End
End

;----------------------------
Weapon WildMountainGiantRockFromThinAirWarhead
  ;FireFX= FX_ImpactEntRock
  ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS 
  RadiusDamageAffects		= ENEMIES NEUTRALS
  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = WILD_MOUNTAIN_GIANT_ROCK_DAMAGE
    Radius        = 10.0
    DelayTime     = 0
    DamageType    = SIEGE
    DamageFXType  = SMALL_ROCK
    DeathType     = NORMAL
  End
  MetaImpactNugget                    ; A Nugget that throws things back with force
;	HeroResist			= .75
    ShockWaveAmount		= 50.0
    ShockWaveRadius		= 30.0
    ShockWaveTaperOff	= 0.75
;   ShockWaveZMult		= 1.20
  End
End


;------------------------------------------------------------------------------
Weapon GoblinWolfWeapon
  LeechRangeWeapon = Yes
  AttackRange           = STANDARD_MELEE_ATTACK_RANGE
  MeleeWeapon           = Yes
  PreAttackDelay		= WILD_GOLBINWOLF_SWORD_PREATTACKDELAY
  DelayBetweenShots     = WILD_GOLBINWOLF_SWORD_DELAYBETWEENSHOTS            ; time between shots, msec
  FiringDuration		= WILD_GOLBINWOLF_SWORD_FIRINGDURATION
  FireFX                = FX_WargRiderlessAttack

  DamageNugget                        ; A basic Nugget that just does damage
    Damage        = WILD_GOLBINWOLF_SWORD
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = SLASH
	//thefuck?
//    DamageScalar  = 300% NONE +GondorTowerShieldGuard +GondorTowerShieldGuardHorde +RohanSpearmen +RohanSpearmenHorde +ElvenMithlondSentry +ElvenMithlondSentryHorde +DwarvenPhalanx +DwarvenPhalanxHorde  
 //   DamageScalar  = 300% NONE +MordorEasterling +MordorEasterlingHorde +IsengardPikeman +IsengardPikemanHorde +AngmarHillTrollHorde +AngmarHillTroll +AngmarRhudaurSpearmen +AngmarRhudaurSpearman 
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = 10% ANY +STRUCTURE
  End
End

;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------

;------------------------------------------------------------------------------
Weapon SpellBookMoriaDeteriorateWeapon
	AttackRange			= 0 //MORIA_DETERIORATE_RANGE	
	DelayBetweenShots	= 0          ; time between shots, msec	
	FiringDuration      = 0
	CanFireWhileMoving	= Yes
	HitPercentage		= 100
	HitStoredTarget		= Yes			; Always hits initial target.
;	DamageNugget                        ; A basic Nugget that just does damage
;		Damage			= 10		
;		DamageType		= SIEGE
;		DamageFXType	= MAGIC //SWORD_SLASH
;		Radius			= MORIA_DETERIORATE_RANGE
;		DeathType		= LASERED ;now always used instead of NORMAL (Sûl)
;		DamageSpeed		= 1400.0
;	End

	DOTNugget	; A basic Nugget that just does damage
		Damage        		= 10
		AcceptDamageAdd 	= No
		Radius        		= MORIA_DETERIORATE_RANGE
		DelayTime     		= 0
		DamageType    		= SIEGE //POISON
		DamageFXType  		= POISON
		DeathType     		= LASERED ;now always used instead of NORMAL (Sûl)
		DamageInterval 		= 1
		DamageDuration 		= -1 ;30000
		SpecialObjectFilter 	= NONE +STRUCTURE
	End
End