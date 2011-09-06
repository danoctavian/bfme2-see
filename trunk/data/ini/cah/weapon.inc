/////////////////
// WEAPON.INC //
////////////////////
//CREATE-A-DOUCHE//
//////////////////




//==========================================================================================
//////////////////////////// CREATE A HERO SPECIAL WEAPONS //////////////////////////////////
//==========================================================================================

Weapon CreateAHeroBasicMeleeWeapon
	LeechRangeWeapon      = Yes
	AttackRange           = STANDARD_MELEE_ATTACK_RANGE
	MeleeWeapon           = Yes
	FireFX                = FX_GondorSwordHit
	DelayBetweenShots     = FARAMIR_DELAYBETWEENSHOTS 			// time between shots, msec
	PreAttackDelay        = FARAMIR_PREATTACKDELAY 	// 400 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration        = FARAMIR_FIRINGDURATION 	// Duration of the sword swing
	UseInnateAttributes	  = Yes

	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_DAMAGE
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
	End



	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 10000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2 Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 15000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 20000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 30000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End
End

Weapon CreateAHeroOlogHaiMeleeWeapon
	LeechRangeWeapon			= Yes
	RadiusDamageAffects			= ENEMIES								; Turning off friendly fire for all allies, but ya know, this could say NotSimilar and then he could hit friendlies except for trolls
	MeleeWeapon					= Yes
	AttackRange					= 20									; this was tuned with the Damage and shock wave nugget so it looks good with club
	FireFX						= FX_GondorSwordHit
	DelayBetweenShots			= CREATE_A_HERO_DELAYBETWEENSHOTS	; time between shots, msec
	FiringDuration				= CREATE_A_HERO_FIRINGDURATION
	PreAttackDelay				= CREATE_A_HERO_PREATTACKDELAY
	PreAttackType				= PER_SHOT								; Do the delay each time we attack a new target
	PreAttackFX					= FX_TrollTreeSwing
	DamageDealtAtSelfPosition	= Yes									; A melee based AoE.  Arc radiates from me, not them
	AcceptableAimDelta			= 35.0 

	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_OLOG_DAMAGE
		Radius			= 60.0						; matches impact nugget so it throws them back and hurts them
		DamageArc		= 90
		DamageType    = HERO
		DamageFXType  = MAGIC
		DeathType     = NORMAL
	End

	MetaImpactNugget								; A Nugget that throws things back with force
		ShockWaveAmount   = 40.0
		ShockWaveRadius   = 50.0
		ShockWaveTaperOff = 0.75
		ShockWaveArc      = 90
		ShockWaveZMult    = 1.20
;		HeroResist		  = 0.90					; 90% resistance to heroes
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 10000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2 Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 15000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 20000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 500
		DamageDuration = 30000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroBasicRangedWeapon
    AttackRange			= 350				
    LeechRangeWeapon    = Yes
    WeaponSpeed			= 321         // dist/sec 
    MinWeaponSpeed		= 241
    MaxWeaponSpeed		= 481      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
    FireFX				= FX_RohanArcherBowWeapon
    ScaleWeaponSpeed	= Yes // Used for lob weapons, scales speed proportional to range
    HitPercentage		= 100     //When this weapon is used it will hit exactly 75% of the time.
    ScatterRadius		= 0.0     //When this weapon misses it can randomly miss by as much as this distance.
    UseInnateAttributes	= Yes
   
    DelayBetweenShots	= FARAMIR_BOW_DELAYBETWEENSHOTS        // time between shots, msec
    PreAttackDelay		= FARAMIR_BOW_PREATTACKDELAY             // 1467 is the prep time for archer.
    PreAttackType		= PER_POSITION
    FiringDuration		= FARAMIR_BOW_FIRINGDURATION   // Duration of the archer firing shot is 500ms.
 
    ClipSize			= 1
    AutoReloadsClip		= Yes
    AutoReloadWhenIdle	= 1	
    ClipReloadTime		= Min:1000 Max:1500
    ContinuousFireOne	= 0
    ContinuousFireCoast	= FARAMIR_BOW_RELOADTIME_MAX
   	
    AntiAirborneVehicle	= Yes
    AntiAirborneMonster	= Yes  
    
    CanFireWhileMoving		= Yes
   
    ProjectileNugget                    // Default arrow
       ProjectileTemplateName	= GoodFactionArrow
       WarheadTemplateName		= CreateAHeroBasicRangedWarhead
	   ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level4
    End
   
    ProjectileNugget                    // Default arrow
       ProjectileTemplateName	= MirkwoodArcherSilverthornProjectile
       WarheadTemplateName		= CreateAHeroBasicRangedWarhead
	   RequiredUpgradeNames		= Upgrade_CreateAHeroArrowBonus_Level4
    End
End


//----------------------------
Weapon CreateAHeroBasicRangedWarhead
	ProjectileCollidesWith = ALLIES ENEMIES NEUTRAL STRUCTURES WALLS // Remember, the projectile is a rock, who has no allies
	RadiusDamageAffects = ENEMIES NEUTRALS ALLIES NOT_SIMILAR
	HitStoredTarget = Yes	// Always hits initial target.
	UseInnateAttributes	= Yes

	//	No bonus
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = 80
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroToggleWeapon_Level2 Upgrade_CreateAHeroArrowBonus_Level1 Upgrade_CreateAHeroArrowBonus_Level2 Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End

	//	Corrupted Man Level 2 Toggle Weapon Bonus
	DamageNugget
		Damage					= 120
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO_RANGED
		DamageFXType			= GOOD_ARROW_PIERCE
		DeathType				= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroToggleWeapon_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level1 Upgrade_CreateAHeroArrowBonus_Level2 Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End

	//	Level 1 Archer bonus
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = 80
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level2 Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L1
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L1	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level2 Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End

	//	Level 2 Archer bonus
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = 80
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = FLAME
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L1
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L1	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = FLAME
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L2
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L2	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = FLAME
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3 Upgrade_CreateAHeroArrowBonus_Level4
	End

	//	Level 3 Archer bonus
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = 80
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = MAGIC
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L1
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L1	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = SLASH
		DamageFXType  = MAGIC
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L2
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L2	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = FLAME
		DamageFXType  = MAGIC
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3
	End
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L3
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L3	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = MAGIC
		DamageFXType  = MAGIC
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level3
	End

	//	Level 4 Archer Bonus
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_ARROW_BONUS_DAMAGE_L4
		Radius        = CREATE_A_HERO_ARROW_BONUS_RADIUS_L4	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DamageScalar  = 10% NONE +STRUCTURE 
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = MAGIC
		DeathType     = NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroArrowBonus_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0MirkwoodArcherSilverthornProjectile
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 1000
		DamageDuration = 10000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2 Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 1000
		DamageDuration = 20000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3 Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 1000
		DamageDuration = 250000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level3
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End

	DOTNugget                        // A basic Nugget that just does damage
		Damage        = DEFAULT_POISON_DAMAGE
		AcceptDamageAdd = No
		Radius        = 0.0
		DelayTime     = 0
		DamageType    = POISON
		DamageFXType  = POISON
		DeathType     = NORMAL
		DamageInterval = 1000
		DamageDuration = 30000
		SpecialObjectFilter = AFFECTED_BY_POISON_OBJECTFILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroPoisonAttack_Level4
	End
End


//------------------------------------------------------------------------------
Weapon CreateAHerBallLightningWeapon_L1
	AttackRange			   = CREATE_A_HERO_BALL_LIGHTNING_RANGE
	WeaponSpeed			   = 801		//	dist/sec 
	HitPercentage		   = 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	   = 4500		// time between shots, msec
	PreAttackDelay		   = 200		// 1467 is	the	prep time for archer.  
	PreAttackType		   = PER_SHOT	//	Do the delay each time we attack a new target
	FiringDuration		   = 1			// Duration	of the archer firing shot is 500ms.
	
	FireFX				   = FX_CAHBallLightningFireFX // CASEY TODO New FX for this power
	FiringDuration		   = 50
	AntiAirborneVehicle	   = Yes
	AntiAirborneMonster	   = Yes


	RadiusDamageAffects	   = ENEMIES NOT_SIMILAR
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES	WALLS

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L1
		DamageType	 = FLAME
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L1
		DamageType	 = MAGIC
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End

	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	0.75
		ShockWaveAmount	  =	90.0
		ShockWaveRadius	  =	17.6
		ShockWaveTaperOff =	0.2
		DelayTime		  =	200		  //The target is dying before the laser	appears	in the new laser tweak,	so try to kill when	the	laser turns	on
	End
End


//------------------------------------------------------------------------------
Weapon CreateAHerBallLightningWeapon_L2
	AttackRange			   = CREATE_A_HERO_BALL_LIGHTNING_RANGE
	WeaponSpeed			   = 801		//	dist/sec 
	HitPercentage		   = 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	   = 4500		// time between shots, msec
	PreAttackDelay		   = 200		// 1467 is	the	prep time for archer.  
	PreAttackType		   = PER_SHOT	//	Do the delay each time we attack a new target
	FiringDuration		   = 1			// Duration	of the archer firing shot is 500ms.
	
	FireFX				   = FX_CAHBallLightningFireFX // CASEY TODO New FX for this power
	FiringDuration		   = 50
	AntiAirborneVehicle	   = Yes
	AntiAirborneMonster	   = Yes

	RadiusDamageAffects	   = ENEMIES NOT_SIMILAR
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES	WALLS

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L2
		DamageType	 = FLAME
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End
	
	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L2
		DamageType	 = MAGIC
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End

	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	0.75
		ShockWaveAmount	  =	90.0
		ShockWaveRadius	  =	17.6
		ShockWaveTaperOff =	0.2
		DelayTime		  =	200		  //The target is dying before the laser	appears	in the new laser tweak,	so try to kill when	the	laser turns	on
	End
	
End


//------------------------------------------------------------------------------
Weapon CreateAHerBallLightningWeapon_L3
	AttackRange			   = CREATE_A_HERO_BALL_LIGHTNING_RANGE
	WeaponSpeed			   = 801		//	dist/sec 
	HitPercentage		   = 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	   = 4500		// time between shots, msec
	PreAttackDelay		   = 200		// 1467 is	the	prep time for archer.  
	PreAttackType		   = PER_SHOT	//	Do the delay each time we attack a new target
	FiringDuration		   = 1			// Duration	of the archer firing shot is 500ms.
	
	FireFX				   = FX_CAHBallLightningFireFX // CASEY TODO New FX for this power
	FiringDuration		   = 50
	AntiAirborneVehicle	   = Yes
	AntiAirborneMonster	   = Yes

	RadiusDamageAffects	   = ENEMIES NOT_SIMILAR
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES	WALLS

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L3
		DamageType	 = FLAME
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End
	
	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_BALL_LIGHTNING_DAMAGE_L3
		DamageType	 = MAGIC
		DamageFXType = ELECTRIC
		DeathType	 = BURNED
		Radius		 = 15
		DelayTime	 = 200	
	End

	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	0.75
		ShockWaveAmount	  =	90.0
		ShockWaveRadius	  =	17.6
		ShockWaveTaperOff =	0.2
		DelayTime		  =	200		  //The target is dying before the laser	appears	in the new laser tweak,	so try to kill when	the	laser turns	on
	End
	
End

//------------------------------------------------------------------------------
Weapon CreateAHeroLightBlastWeapon_L1  // 
	AttackRange			= CREATE_A_HERO_PHASER_RANGE				//600
	LeechRangeWeapon	= Yes
	WeaponSpeed			= 801      // dist/sec 
	HitPercentage		= 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 4500		// time between shots, msec
	FireFX              = FX_CaHBeamWeapon // CASEY TODO New FX for this power
	FiringDuration      = 1
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	AcceptableAimDelta	= 15

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_LIGHTBLAST_L1_DAMAGE	
		DamageScalar  = 200% NONE +MordorWitchKingOnFellBeast +GondorGwaihir	
		DamageScalar  = 180% NONE +MordorFellBeast
		Radius        = 17.6
		DelayTime     = 200           //The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
		DamageType    = MAGIC
		DamageFXType  = FLAME
		DeathType     = NORMAL
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist          =   0.75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 17.6
		ShockWaveTaperOff	= 0.5
		DelayTime			= 200		//The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
	End
End

Weapon CreateAHeroLightBlastWeapon_L2
	AttackRange			= CREATE_A_HERO_PHASER_RANGE				//600
	LeechRangeWeapon	= Yes
	WeaponSpeed			= 801      // dist/sec 
	HitPercentage		= 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 4500		// time between shots, msec
	FireFX              = FX_CaHBeamWeapon // CASEY TODO New FX for this power
	FiringDuration      = 1
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	AcceptableAimDelta	= 15

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_LIGHTBLAST_L2_DAMAGE	
		DamageScalar  = 200% NONE +MordorWitchKingOnFellBeast +GondorGwaihir	
		DamageScalar  = 180% NONE +MordorFellBeast
		Radius        = 17.6
		DelayTime     = 200           //The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
		DamageType    = MAGIC
		DamageFXType  = FLAME
		DeathType     = NORMAL
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist          =   0.75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 17.6
		ShockWaveTaperOff	= 0.5
		DelayTime			= 200		//The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
	End
End

Weapon CreateAHeroLightBlastWeapon_L3
	AttackRange			= CREATE_A_HERO_PHASER_RANGE				//600
	LeechRangeWeapon	= Yes
	WeaponSpeed			= 801      // dist/sec 
	HitPercentage		= 100		// When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 4500		// time between shots, msec
	FireFX              = FX_CaHBeamWeapon // CASEY TODO New FX for this power
	FiringDuration      = 1
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes
	AcceptableAimDelta	= 15

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_LIGHTBLAST_L3_DAMAGE	
		DamageScalar  = 200% NONE +MordorWitchKingOnFellBeast +GondorGwaihir	
		DamageScalar  = 180% NONE +MordorFellBeast
		Radius        = 17.6
		DelayTime     = 200           //The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
		DamageType    = MAGIC
		DamageFXType  = FLAME
		DeathType     = NORMAL
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist          =   0.75
		ShockWaveAmount		= 50.0
		ShockWaveRadius		= 17.6
		ShockWaveTaperOff	= 0.5
		DelayTime			= 200		//The target is dying before the laser appears in the new laser tweak, so try to kill when the laser turns on
	End
End

//------------------------------------------------------------------------------
Weapon ForcePush_Level1 // small microwave push
	IdleAfterFiringDelay	  =	0
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	CREATE_A_HERO_FORCE_PUSH_RANGE_L1
	WeaponSpeed				  =	401			// dist/sec 
	RadiusDamageAffects		  =	ENEMIES	NEUTRALS NOT_SIMILAR
	DelayBetweenShots		  =	5000			   // time between shots, msec
	PreAttackDelay			  =	100
	PreAttackType			  =	PER_ATTACK // Do	the	delay each time	we attack a	new	target
	FireFX					  =	FX_WizardTelekinesis	// CASEY TODO New FX for this power
	FiringDuration			  =	100
	DamageDealtAtSelfPosition =	Yes	
	IsAimingWeapon			  =	Yes
	AcceptableAimDelta		  =	15
	AntiAirborneVehicle		  =	No
	AntiAirborneMonster		  =	No

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_FORCE_PUSH_DAMAGE_L1
		DamageArc	 = 75
		Radius		 = 110.0
		DamageType	 = MAGIC
		DamageFXType = MAGIC
		DeathType	 = EXPLODED
		DamageSpeed	 = 700.0 // must	match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	.75
		ShockWaveAmount	  =	75.0
		ShockWaveArc	  =	75
		ShockWaveRadius	  =	110.0
		ShockWaveTaperOff =	0.75
		ShockWaveZMult	  =	1.000
		ShockWaveSpeed	  =	700.0 
	End
End

//------------------------------------------------------------------------------
Weapon ForcePush_Level2 // small microwave push
	IdleAfterFiringDelay	  =	0
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	CREATE_A_HERO_FORCE_PUSH_RANGE_L2
	WeaponSpeed				  =	401			// dist/sec 
	RadiusDamageAffects		  =	ENEMIES	NEUTRALS NOT_SIMILAR
	DelayBetweenShots		  =	5000			   // time between shots, msec
	PreAttackDelay			  =	100
	PreAttackType			  =	PER_ATTACK // Do	the	delay each time	we attack a	new	target
	FireFX					  =	FX_WizardTelekinesis	// CASEY TODO New FX for this power
	FiringDuration			  =	100
	DamageDealtAtSelfPosition =	Yes	
	IsAimingWeapon			  =	Yes
	AcceptableAimDelta		  =	15
	AntiAirborneVehicle		  =	No
	AntiAirborneMonster		  =	No

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_FORCE_PUSH_DAMAGE_L2
		DamageArc	 = 75
		Radius		 = 110.0
		DamageType	 = MAGIC
		DamageFXType = MAGIC
		DeathType	 = EXPLODED
		DamageSpeed	 = 700.0 // must	match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	.75
		ShockWaveAmount	  =	75.0
		ShockWaveArc	  =	75
		ShockWaveRadius	  =	110.0
		ShockWaveTaperOff =	0.75
		ShockWaveZMult	  =	1.000
		ShockWaveSpeed	  =	700.0 
	End
End

//------------------------------------------------------------------------------
Weapon ForcePush_Level3 // small microwave push
	IdleAfterFiringDelay	  =	0
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	CREATE_A_HERO_FORCE_PUSH_RANGE_L3
	WeaponSpeed				  =	401			// dist/sec 
	RadiusDamageAffects		  =	ENEMIES	NEUTRALS NOT_SIMILAR
	DelayBetweenShots		  =	5000			   // time between shots, msec
	PreAttackDelay			  =	100
	PreAttackType			  =	PER_ATTACK // Do	the	delay each time	we attack a	new	target
	FireFX					  =	FX_WizardTelekinesis	// CASEY TODO New FX for this power
	FiringDuration			  =	100
	DamageDealtAtSelfPosition =	Yes	
	IsAimingWeapon			  =	Yes
	AcceptableAimDelta		  =	15
	AntiAirborneVehicle		  =	No
	AntiAirborneMonster		  =	No

	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_FORCE_PUSH_DAMAGE_L3
		DamageArc	 = 75
		Radius		 = 110.0
		DamageType	 = MAGIC
		DamageFXType = MAGIC
		DeathType	 = EXPLODED
		DamageSpeed	 = 700.0 // must	match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist		  =	.75
		ShockWaveAmount	  =	75.0
		ShockWaveArc	  =	75
		ShockWaveRadius	  =	110.0
		ShockWaveTaperOff =	0.75
		ShockWaveZMult	  =	1.000
		ShockWaveSpeed	  =	700.0 
	End
End


//------------------------------------------------------------------------------
Weapon WordOfDoom 
	LeechRangeWeapon	  =	Yes
	AttackRange			  =	SARUMAN_FIREBALL_RANGE		// set this in his special power
	WeaponSpeed			  =	150			// dist/sec 
	MinWeaponSpeed		  =	100
	MaxWeaponSpeed		  =	200			// dist/sec	Upper limit	on scaling,	when attacking past	nominal	"max" range
	ScaleWeaponSpeed	  =	Yes			// Used	for	lob	weapons, scales	speed proportional to range
	HitPercentage		  =	100			//When this	weapon is used it will hit exactly 100%	of the time.
	ScatterRadius		  =	0.0			//When this weapon misses it	can	randomly miss by as	much as	this distance.
	DelayBetweenShots	  =	5000		// time	between	shots, msec
	PreAttackDelay		  =	1			//	1467 is	the	prep time for archer.
	PreAttackRandomAmount =	0			// amount	of additional preattack	variance for archer	type attacks only  
	PreAttackType		  =	PER_SHOT	// Do the delay	each time we attack	a new target
	FiringDuration		  =	1			//	Duration of	the	archer firing shot is 500ms.
	IsAimingWeapon		  =	Yes
	AcceptableAimDelta	  =	15
	AntiAirborneVehicle	  =	Yes
	AntiAirborneMonster	  =	Yes
	FireFX				  =	FX_SarumanFireball
	DamageType			  =	HERO_RANGED
  
	//ProjectileNugget					// Default arrow
	//	ProjectileTemplateName  = SarumanFireballProjectile
	//	WarheadTemplateName     = SarumanFireballWarhead
	//End
	DamageNugget                        // A basic Nugget that just does damage
		Damage		 = CREATE_A_HERO_FORCE_PUSH_DAMAGE_L3
		DamageArc	 = 75
		Radius		 = 110.0
		DamageType	 = MAGIC
		DamageFXType = UNDEFINED	//	MAGIC
		DeathType	 = NORMAL		//	EXPLODED
		DamageSpeed	 = 700.0 // must match the ShockWaveSpeed below
	End

End

//	TODO: fix this for archer create a heroes to work like lurtz cripple strike
//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRanged_Level1					 //	BALANCE	Archer Weapon // orc archer
	AttackRange				= CREATE_A_HERO_CRIPPLE_RANGED_RANGE //	LURTZ_BOW_STUN_RANGE //	350	// Horde member	so it needs	to be bigger than the horde	weapon attack range.
	WeaponSpeed				= 300								 //	dist/sec 
	MinWeaponSpeed			= 121
	MaxWeaponSpeed			= 400								 //	dist/sec Upper limit on	scaling, when attacking	past nominal "max" range
	FireFX					= FX_LurtzCripplingStrike 
	ScaleWeaponSpeed		= Yes								 //	Used for lob weapons, scales speed proportional	to range
	HitPercentage			= 100								 //	When this weapon is	used it	will hit exactly 50% of	the	time.
	ScatterRadius			= 0.0								 //	When this weapon misses	it can randomly	miss by	as much	as this	distance.
	DelayBetweenShots		= 1100
	PreAttackDelay			= 1
	PreAttackType			= PER_SHOT							 //	Do the delay each time we attack a new target
	FiringDuration			= 1000								 //	Duration of	the	archer firing shot is 500ms.
	IdleAfterFiringDelay	= 1000
	// HoldAfterFiringDelay	= 1000 // 

	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes

	ProjectileNugget			// Fire arrow available through fire upgrade
		ProjectileTemplateName  = LurtzArrowProjectile
		WarheadTemplateName     = CreateAHeroCrippleStrikeRangedWarhead_Level1
		SpecialObjectFilter		= ALL -MACHINE
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRangedWarhead_Level1
	ProjectileCollidesWith = ENEMIES NEUTRAL
	RadiusDamageAffects	   = ENEMIES NEUTRALS 
	HitStoredTarget		   = Yes   // Always	hits initial target.
	
	DamageNugget
		Damage				= CREATE_A_HERO_CRIPPLE_RANGED_DAMAGE_L1											   
		Radius				= 0.0  // HitStoredTarget means	we hurt	the	person we launched at.	And	nobody else.  So a miss	hurts nobody.
		DamageType			= HERO_RANGED
		DamageFXType		= EVIL_ARROW_PIERCE
		DeathType			= NORMAL
   		DamageScalar		= 200% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth +GondorGwaihir_Summoned +ElvenFortressEagle +SpellBookDragonStrikeDragon
	End

	AttributeModifierNugget
		AttributeModifier	= AttributeModCrippleStrike_Level1
		DamageFXType		= EVIL_ARROW_PIERCE	
		SpecialObjectFilter	= CRIPPLE_STRIKE_OBJECT_FILTER
	End
End

//	TODO: fix this for archer create a heroes to work like lurtz cripple strike
//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRanged_Level2					 //	BALANCE	Archer Weapon // orc archer
	AttackRange				= CREATE_A_HERO_CRIPPLE_RANGED_RANGE //	LURTZ_BOW_STUN_RANGE //	350	// Horde member	so it needs	to be bigger than the horde	weapon attack range.
	WeaponSpeed				= 300								 //	dist/sec 
	MinWeaponSpeed			= 121
	MaxWeaponSpeed			= 400								 //	dist/sec Upper limit on	scaling, when attacking	past nominal "max" range
	FireFX					= FX_LurtzCripplingStrike 
	ScaleWeaponSpeed		= Yes								 //	Used for lob weapons, scales speed proportional	to range
	HitPercentage			= 100								 //	When this weapon is	used it	will hit exactly 50% of	the	time.
	ScatterRadius			= 0.0								 //	When this weapon misses	it can randomly	miss by	as much	as this	distance.
	DelayBetweenShots		= 1100
	PreAttackDelay			= 1
	PreAttackType			= PER_SHOT							 //	Do the delay each time we attack a new target
	FiringDuration			= 1000								 //	Duration of	the	archer firing shot is 500ms.
	IdleAfterFiringDelay	= 1000
	// HoldAfterFiringDelay	= 1000 // 

	AntiAirborneVehicle		= Yes
	AntiAirborneMonster		= Yes

	ProjectileNugget			// Fire arrow available through fire upgrade
		ProjectileTemplateName  = LurtzArrowProjectile
		WarheadTemplateName     = CreateAHeroCrippleStrikeRangedWarhead_Level2
		SpecialObjectFilter		= ALL -MACHINE
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRangedWarhead_Level2
	ProjectileCollidesWith = ENEMIES NEUTRAL
	RadiusDamageAffects	   = ENEMIES NEUTRALS 
	HitStoredTarget		   = Yes   // Always hits initial target.

	DamageNugget
		Damage				= CREATE_A_HERO_CRIPPLE_RANGED_DAMAGE_L2
		Radius				= 0.0  // HitStoredTarget means	we hurt	the	person we launched at.	And	nobody else.  So a miss	hurts nobody.
		DamageType			= HERO_RANGED
		DamageFXType		= EVIL_ARROW_PIERCE
		DeathType			= NORMAL
   		DamageScalar		= 200% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth +GondorGwaihir_Summoned +ElvenFortressEagle +SpellBookDragonStrikeDragon
	End

	AttributeModifierNugget
		AttributeModifier	= AttributeModCrippleStrike_Level2
		DamageFXType		= EVIL_ARROW_PIERCE	
		SpecialObjectFilter	= CRIPPLE_STRIKE_OBJECT_FILTER
	End            
End


//	TODO: fix this for archer create a heroes to work like lurtz cripple strike
//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRanged_Level3       // BALANCE Archer Weapon //orc archer
	AttackRange			= CREATE_A_HERO_CRIPPLE_RANGED_RANGE //	LURTZ_BOW_STUN_RANGE //	350	// Horde member	so it needs	to be bigger than the horde	weapon attack range.
	WeaponSpeed			= 300								 //	dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400								 //	dist/sec Upper limit on	scaling, when attacking	past nominal "max" range
	FireFX				= FX_LurtzCripplingStrike 
	ScaleWeaponSpeed	= Yes								 //	Used for lob weapons, scales speed proportional	to range
	HitPercentage		= 100								 //	When this weapon is	used it	will hit exactly 50% of	the	time.
	ScatterRadius		= 0.0								 //	When this weapon misses	it can randomly	miss by	as much	as this	distance.
	DelayBetweenShots	= 1100
	PreAttackDelay		= 1
	PreAttackType		= PER_SHOT							 //	Do the delay each time we attack a new target
	FiringDuration		= 1000								 //	Duration of	the	archer firing shot is 500ms.
	IdleAfterFiringDelay = 1000
															 //	HoldAfterFiringDelay = 1000	// 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	ProjectileNugget			// Fire arrow available through fire upgrade
		ProjectileTemplateName  = LurtzArrowProjectile
		WarheadTemplateName     = CreateAHeroCrippleStrikeRangedWarhead_Level3
		SpecialObjectFilter		= ALL -MACHINE
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRangedWarhead_Level3
	ProjectileCollidesWith = ENEMIES NEUTRAL
	RadiusDamageAffects = ENEMIES NEUTRALS 
	HitStoredTarget = Yes	// Always hits initial target.

	DamageNugget
		Damage				= CREATE_A_HERO_CRIPPLE_RANGED_DAMAGE_L3
		Radius				= 0.0  // HitStoredTarget means	we hurt	the	person we launched at.	And	nobody else.  So a miss	hurts nobody.
		DamageType			= HERO_RANGED
		DamageFXType		= EVIL_ARROW_PIERCE
		DeathType			= NORMAL
   		DamageScalar		= 200% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth +GondorGwaihir_Summoned +ElvenFortressEagle +SpellBookDragonStrikeDragon
	End

	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level3
		DamageFXType             = EVIL_ARROW_PIERCE 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER
	End
End


//	TODO: fix this for archer create a heroes to work like lurtz cripple strike
//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRanged_Level4       // BALANCE Archer Weapon //orc archer
	AttackRange			= CREATE_A_HERO_CRIPPLE_RANGED_RANGE //	LURTZ_BOW_STUN_RANGE //	350	// Horde member	so it needs	to be bigger than the horde	weapon attack range.
	WeaponSpeed			= 300								 //	dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 400								 //	dist/sec Upper limit on	scaling, when attacking	past nominal "max" range
	FireFX				= FX_LurtzCripplingStrike 
	ScaleWeaponSpeed	= Yes								 //	Used for lob weapons, scales speed proportional	to range
	HitPercentage		= 100								 //	When this weapon is	used it	will hit exactly 50% of	the	time.
	ScatterRadius		= 0.0								 //	When this weapon misses	it can randomly	miss by	as much	as this	distance.
	DelayBetweenShots	= 1100
	PreAttackDelay		= 1
	PreAttackType		= PER_SHOT							 //	Do the delay each time we attack a new target
	FiringDuration		= 1000								 //	Duration of	the	archer firing shot is 500ms.
	IdleAfterFiringDelay = 1000
															 //	HoldAfterFiringDelay = 1000	// 

	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	ProjectileNugget			// Fire arrow available through fire upgrade
		ProjectileTemplateName  = LurtzArrowProjectile
		WarheadTemplateName     = CreateAHeroCrippleStrikeRangedWarhead_Level4
		SpecialObjectFilter		= ALL -MACHINE
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeRangedWarhead_Level4
	ProjectileCollidesWith = ENEMIES NEUTRAL
	RadiusDamageAffects = ENEMIES NEUTRALS 
	HitStoredTarget = Yes	// Always hits initial target.
	
	DamageNugget
		Damage				= CREATE_A_HERO_CRIPPLE_RANGED_DAMAGE_L4
		Radius				= 0.0  // HitStoredTarget means	we hurt	the	person we launched at.	And	nobody else.  So a miss	hurts nobody.
		DamageType			= HERO_RANGED
		DamageFXType		= EVIL_ARROW_PIERCE
		DeathType			= NORMAL
   		DamageScalar		= 200% NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +Drogoth +GondorGwaihir_Summoned +ElvenFortressEagle +SpellBookDragonStrikeDragon
	End

	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level4
		DamageFXType             = EVIL_ARROW_PIERCE 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeMelee_Level1       // BALANCE Archer Weapon //orc archer
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	30.0
	MeleeWeapon				  =	Yes
	//FireFX					  =	FX_LurtzCripplingStrike	//FX_GondorSwordHit
	DelayBetweenShots		  =	GLOIN_DELAYBETWEENSHOTS	// time between shots, msec
	PreAttackDelay			  =	GLOIN_PREATTACKDELAY	// 433 is natural time of the stabbing animation.
	PreAttackType			  =	PER_SHOT				// Do the delay	each time we attack	a new target
	FiringDuration			  =	GLOIN_FIRINGDURATION	// min 600 for anim

	// Hero damage.
	DamageNugget										// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_CRIPPLE_MELEE_DAMAGE_L1
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End
	// Cripple.
	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level1
		DamageFXType             = SWORD_SLASH 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER_MELEE
	End            

End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeMelee_Level2       // BALANCE Archer Weapon //orc archer
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	30.0
	MeleeWeapon				  =	Yes
	//FireFX					  =	FX_LurtzCripplingStrike	//FX_GondorSwordHit
	DelayBetweenShots		  =	GLOIN_DELAYBETWEENSHOTS	// time between shots, msec
	PreAttackDelay			  =	GLOIN_PREATTACKDELAY	// 433 is natural time of the stabbing animation.
	PreAttackType			  =	PER_SHOT				// Do the delay	each time we attack	a new target
	FiringDuration			  =	GLOIN_FIRINGDURATION	// min 600 for anim

	// Hero damage.
	DamageNugget										// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_CRIPPLE_MELEE_DAMAGE_L2
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End
	// Cripple.
	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level2
		DamageFXType             = SWORD_SLASH 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER_MELEE
	End            

End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeMelee_Level3      // BALANCE Archer Weapon //orc archer
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	30.0
	MeleeWeapon				  =	Yes
	//FireFX					  =	FX_LurtzCripplingStrike	//FX_GondorSwordHit
	DelayBetweenShots		  =	GLOIN_DELAYBETWEENSHOTS	// time between shots, msec
	PreAttackDelay			  =	GLOIN_PREATTACKDELAY	// 433 is natural time of the stabbing animation.
	PreAttackType			  =	PER_SHOT				// Do the delay	each time we attack	a new target
	FiringDuration			  =	GLOIN_FIRINGDURATION	// min 600 for anim

	// Hero damage.
	DamageNugget										// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_CRIPPLE_MELEE_DAMAGE_L3
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End
	// Cripple.
	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level3
		DamageFXType             = SWORD_SLASH 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER_MELEE
	End            

End

//------------------------------------------------------------------------------
Weapon CreateAHeroCrippleStrikeMelee_Level4       // BALANCE Archer Weapon //orc archer
	LeechRangeWeapon		  =	Yes
	AttackRange				  =	30.0
	MeleeWeapon				  =	Yes
	//FireFX					  =	FX_LurtzCripplingStrike	//FX_GondorSwordHit
	DelayBetweenShots		  =	GLOIN_DELAYBETWEENSHOTS	// time between shots, msec
	PreAttackDelay			  =	GLOIN_PREATTACKDELAY	// 433 is natural time of the stabbing animation.
	PreAttackType			  =	PER_SHOT				// Do the delay	each time we attack	a new target
	FiringDuration			  =	GLOIN_FIRINGDURATION	// min 600 for anim

	// Hero damage.
	DamageNugget										// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_CRIPPLE_MELEE_DAMAGE_L4
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= HERO
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End
	// Cripple.
	AttributeModifierNugget
		AttributeModifier        = AttributeModCrippleStrike_Level4
		DamageFXType             = SWORD_SLASH 
		SpecialObjectFilter      = CRIPPLE_STRIKE_OBJECT_FILTER_MELEE
	End            

End

//------------------------------------------------------------------------------
Weapon CreateAHero_AttachSpy_Level1

	LeechRangeWeapon			= Yes
	AttackRange					= CREATE_A_HERO_SPY_RANGE_L1		// set this in his special power
	WeaponSpeed					= 300       // dist/sec 
	MinWeaponSpeed				= 300
	MaxWeaponSpeed				= 300		// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	ScaleWeaponSpeed			= Yes		// Used for lob weapons, scales speed proportional to range
	HitPercentage				= 100		// When this weapon is used it will hit exactly 100% of the time.
	ScatterRadius				= 0.0		// When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots			= 5000		// time between shots, msec
	PreAttackDelay				= 1
	PreAttackRandomAmount		= 0			// amount of additional preattack variance for archer type attacks only  
	PreAttackType				= PER_SHOT	// Do the delay each time we attack a new target
	FiringDuration				= 1			// Duration of the archer firing shot is 500ms.
	AcceptableAimDelta			= 15
	AntiAirborneVehicle			= Yes
	AntiAirborneMonster			= Yes
	DamageType					= MAGIC		// No damage so doesn't really matter.

	ProjectileNugget
		ProjectileTemplateName  = CreateAHero_AttachSpy_Projectile
		WarheadTemplateName     = CreateAHero_AttachSpyWarhead_Level1
	End
End

//----------------------------
Weapon CreateAHero_AttachSpyWarhead_Level1

	ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS
	HitStoredTarget			= No										// otherwise we cast it on ourselves...

	WeaponOCLNugget
		WeaponOCLName = OCL_CreateAHeroSpawnSpy_Level1
	End

End

//------------------------------------------------------------------------------
Weapon CreateAHero_AttachSpy_Level2

	LeechRangeWeapon			= Yes
	AttackRange					= CREATE_A_HERO_SPY_RANGE_L2		// set this in his special power
	WeaponSpeed					= 300       // dist/sec 
	MinWeaponSpeed				= 300
	MaxWeaponSpeed				= 300		// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	ScaleWeaponSpeed			= Yes		// Used for lob weapons, scales speed proportional to range
	HitPercentage				= 100		// When this weapon is used it will hit exactly 100% of the time.
	ScatterRadius				= 0.0		// When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots			= 5000		// time between shots, msec
	PreAttackDelay				= 1
	PreAttackRandomAmount		= 0			// amount of additional preattack variance for archer type attacks only  
	PreAttackType				= PER_SHOT	// Do the delay each time we attack a new target
	FiringDuration				= 1			// Duration of the archer firing shot is 500ms.
	AcceptableAimDelta			= 15
	AntiAirborneVehicle			= Yes
	AntiAirborneMonster			= Yes
	DamageType					= MAGIC		// No damage so doesn't really matter.

	ProjectileNugget
		ProjectileTemplateName  = CreateAHero_AttachSpy_Projectile
		WarheadTemplateName     = CreateAHero_AttachSpyWarhead_Level2
	End
End

//----------------------------
Weapon CreateAHero_AttachSpyWarhead_Level2

	ProjectileCollidesWith	= ENEMIES NEUTRAL STRUCTURES WALLS
	HitStoredTarget			= No										// otherwise we cast it on ourselves...

	WeaponOCLNugget
		WeaponOCLName = OCL_CreateAHeroSpawnSpy_Level2
	End

End

//------------------------------------------------------------------------------
Weapon CreateAHeroSpear
	AttackRange 			= 300.0
	LeechRangeWeapon		= Yes
	WeaponSpeed				= 261				// dist/sec 
	MinWeaponSpeed			= 161
	MaxWeaponSpeed 			= 301				// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX 					= FX_EomerSpearThrow
	ScaleWeaponSpeed 		= Yes				// Used for lob weapons, scales speed proportional to range
	HitPercentage			= 100
	ScatterRadius     		= 0.0				//When this weapon misses it can randomly miss by as much as this distance.
	AntiAirborneVehicle     = Yes
	AntiAirborneMonster		= Yes

	PreAttackDelay			= 1
	PreAttackType			= PER_SHOT			// Do the delay each time we attack a new target
	FiringDuration			= 2000			// Duration of the archer firing shot is 500ms.
	HoldAfterFiringDelay	= 2000

	ProjectileNugget						// A Nugget that creates an Object and sends it to the target with a Warhead
		ProjectileTemplateName	= RohanEomerSpearProjectile
		WarheadTemplateName		= RohanEomerSpearWarhead
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroWordOfPower // Big Blue Ring Blast
	IdleAfterFiringDelay = 0
	AttackRange = GANDALF_WORD_OF_POWER_RANGE
	MinimumAttackRange = 0.8
	WeaponSpeed = 401         // dist/sec 
	MinWeaponSpeed = 241
	MaxWeaponSpeed = 601      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
	ScaleWeaponSpeed = Yes // Used for lob weapons, scales speed proportional to range
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               // time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK // Do the delay each time we attack a new target
	PreAttackFX           = FX_CreateAHeroPreAttackBlast
	FireFX                = FX_GandalfBlast
	FiringDuration      = 1400
	DamageNugget                        // A basic Nugget that just does damage
		Damage			= GANDALF_WORD_OF_POWER_DAMAGE
		Radius			= 250.0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 // must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount   = 70.0
		ShockWaveRadius   = 500.0
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroSpillOil_Level1
	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= CREATE_A_HERO_SPILL_OIL_RADIUS_L1
		Damage			= CREATE_A_HERO_SPILL_OIL_AMOUNT_L1
		MinMaxBurnRate	= CREATE_A_HERO_SPILL_OIL_MINMAXBURNRATE_L1
		MaxResistance	= CREATE_A_HERO_SPILL_OIL_MAX_RESISTANCE_L1
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroSpillOil_Level2
	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= CREATE_A_HERO_SPILL_OIL_RADIUS_L2
		Damage			= CREATE_A_HERO_SPILL_OIL_AMOUNT_L2
		MinMaxBurnRate	= CREATE_A_HERO_SPILL_OIL_MINMAXBURNRATE_L2
		MaxResistance	= CREATE_A_HERO_SPILL_OIL_MAX_RESISTANCE_L2
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroSpillOil_Level3
	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= CREATE_A_HERO_SPILL_OIL_RADIUS_L3
		Damage			= CREATE_A_HERO_SPILL_OIL_AMOUNT_L3
		MinMaxBurnRate	= CREATE_A_HERO_SPILL_OIL_MINMAXBURNRATE_L3
		MaxResistance	= CREATE_A_HERO_SPILL_OIL_MAX_RESISTANCE_L3
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroIgniteOil_Level1
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= CREATE_A_HERO_IGNITE_OIL_RADIUS_L1
		Damage			= CREATE_A_HERO_IGNITE_OIL_AMOUNT_L1
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroIgniteOil_Level2
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= CREATE_A_HERO_IGNITE_OIL_RADIUS_L2
		Damage			= CREATE_A_HERO_IGNITE_OIL_AMOUNT_L2
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroIgniteOil_Level3
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= CREATE_A_HERO_IGNITE_OIL_RADIUS_L3
		Damage			= CREATE_A_HERO_IGNITE_OIL_AMOUNT_L3
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroTriggerIgniteOil
  	DamageNugget
  		SpecialObjectFilter = NONE +CreateAHeroBreadCrumb_Level1 +CreateAHeroBreadCrumb_Level2 +CreateAHeroBreadCrumb_Level3
	    Damage        = 1000000
		Radius        = 1000000.0
	    DelayTime     = 0
	    DamageType    = FLAME
	    DamageFXType  = FIRE1
	    DeathType     = BURNED
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBomb_Level1
	AttackRange			= CREATE_A_HERO_FIRE_BOMB_ATTACK_RANGE_L1
	WeaponSpeed			= 100										// dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 100										// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	HitPercentage		= CREATE_A_HERO_FIRE_BOMB_HIT_PERCENTAGE	// When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= CREATE_A_HERO_FIRE_BOMB_SCATTER_RADIUS	// When this weapon misses it can randomly miss by as much as this distance.
	//NoVictimNeeded		= Yes

	AcceptableAimDelta		= 20									// prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay			= CREATE_A_HERO_FIRE_BOMB_PREATTACKDELAY
	PreAttackType			= PER_SHOT
	PreAttackRandomAmount	= CREATE_A_HERO_FIRE_BOMB_RANDOM_PREATTACK
	FiringDuration			= 0

	ClipSize			= INFINITE_CLIP_SIZE
	AutoReloadsClip		= Yes
	
	ProjectileNugget
		ProjectileTemplateName  = CorsairFireBombProjectile
		WarheadTemplateName     = CreateAHeroFireBombWarhead_Level1
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBombWarhead_Level1
	ProjectileCollidesWith	= ENEMIES
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR 

	DamageNugget
		Damage			= CREATE_A_HERO_FIRE_BOMB_DAMAGE_L1
		Radius			= CREATE_A_HERO_FIRE_BOMB_RADIUS_L1
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		AcceptDamageAdd = No
		DamageScalar	= 200% NONE +STRUCTURE		// more damage to buildings.
		DamageScalar	= 50000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= 5
		Damage			= 20
	End	

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 25
		Damage			= 1200
		MinMaxBurnRate	= 20
		MinDecay		= 1
		MaxResistance	= 0
	End	
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBomb_Level2
	AttackRange			= CREATE_A_HERO_FIRE_BOMB_ATTACK_RANGE_L2
	WeaponSpeed			= 100										// dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 100										// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	HitPercentage		= CREATE_A_HERO_FIRE_BOMB_HIT_PERCENTAGE	// When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= CREATE_A_HERO_FIRE_BOMB_SCATTER_RADIUS	// When this weapon misses it can randomly miss by as much as this distance.
	//NoVictimNeeded		= Yes

	AcceptableAimDelta		= 20									// prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay			= CREATE_A_HERO_FIRE_BOMB_PREATTACKDELAY
	PreAttackType			= PER_SHOT
	PreAttackRandomAmount	= CREATE_A_HERO_FIRE_BOMB_RANDOM_PREATTACK
	FiringDuration			= 0

	ClipSize			= INFINITE_CLIP_SIZE
	AutoReloadsClip		= Yes
	
	ProjectileNugget
		ProjectileTemplateName  = CorsairFireBombProjectile
		WarheadTemplateName     = CreateAHeroFireBombWarhead_Level2
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBombWarhead_Level2
	ProjectileCollidesWith	= ENEMIES
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR 

	DamageNugget
		Damage			= CREATE_A_HERO_FIRE_BOMB_DAMAGE_L2
		Radius			= CREATE_A_HERO_FIRE_BOMB_RADIUS_L2
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		AcceptDamageAdd = No
		DamageScalar	= 200% NONE +STRUCTURE		// more damage to buildings.
		DamageScalar	= 50000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= 5
		Damage			= 20
	End	

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 25
		Damage			= 1200
		MinMaxBurnRate	= 20
		MinDecay		= 1
		MaxResistance	= 0
	End	
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBomb_Level3
	AttackRange			= CREATE_A_HERO_FIRE_BOMB_ATTACK_RANGE_L3
	WeaponSpeed			= 100										// dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 100										// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	HitPercentage		= CREATE_A_HERO_FIRE_BOMB_HIT_PERCENTAGE	// When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= CREATE_A_HERO_FIRE_BOMB_SCATTER_RADIUS	// When this weapon misses it can randomly miss by as much as this distance.
	//NoVictimNeeded		= Yes

	AcceptableAimDelta		= 20									// prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay			= CREATE_A_HERO_FIRE_BOMB_PREATTACKDELAY
	PreAttackType			= PER_SHOT
	PreAttackRandomAmount	= CREATE_A_HERO_FIRE_BOMB_RANDOM_PREATTACK
	FiringDuration			= 0

	ClipSize			= INFINITE_CLIP_SIZE
	AutoReloadsClip		= Yes
	
	ProjectileNugget
		ProjectileTemplateName  = CorsairFireBombProjectile
		WarheadTemplateName     = CreateAHeroFireBombWarhead_Level3
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBombWarhead_Level3
	ProjectileCollidesWith	= ENEMIES
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR 

	DamageNugget
		Damage			= CREATE_A_HERO_FIRE_BOMB_DAMAGE_L3
		Radius			= CREATE_A_HERO_FIRE_BOMB_RADIUS_L3
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		AcceptDamageAdd = No
		DamageScalar	= 200% NONE +STRUCTURE		// more damage to buildings.
		DamageScalar	= 50000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= 5
		Damage			= 20
	End	

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 25
		Damage			= 1200
		MinMaxBurnRate	= 20
		MinDecay		= 1
		MaxResistance	= 0
	End	
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBomb_Level4
	AttackRange			= CREATE_A_HERO_FIRE_BOMB_ATTACK_RANGE_L4
	WeaponSpeed			= 100										// dist/sec 
	MinWeaponSpeed		= 121
	MaxWeaponSpeed		= 100										// dist/sec Upper limit on scaling, when attacking past nominal "max" range
	HitPercentage		= CREATE_A_HERO_FIRE_BOMB_HIT_PERCENTAGE	// When this weapon is used it will hit exactly 50% of the time.
	ScatterRadius		= CREATE_A_HERO_FIRE_BOMB_SCATTER_RADIUS	// When this weapon misses it can randomly miss by as much as this distance.
	//NoVictimNeeded		= Yes

	AcceptableAimDelta		= 20									// prevent twitchy reaiming in horde on horde
	DelayBetweenShots		= 0
	PreAttackDelay			= CREATE_A_HERO_FIRE_BOMB_PREATTACKDELAY
	PreAttackType			= PER_SHOT
	PreAttackRandomAmount	= CREATE_A_HERO_FIRE_BOMB_RANDOM_PREATTACK
	FiringDuration			= 0

	ClipSize			= INFINITE_CLIP_SIZE
	AutoReloadsClip		= Yes
	
	ProjectileNugget
		ProjectileTemplateName  = CorsairFireBombProjectile
		WarheadTemplateName     = CreateAHeroFireBombWarhead_Level4
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroFireBombWarhead_Level4
	ProjectileCollidesWith	= ENEMIES
	RadiusDamageAffects		= ENEMIES NOT_SIMILAR 

	DamageNugget
		Damage			= CREATE_A_HERO_FIRE_BOMB_DAMAGE_L4
		Radius			= CREATE_A_HERO_FIRE_BOMB_RADIUS_L4
		DamageType		= FLAME
		DamageFXType	= FLAME
		DeathType		= BURNED
		AcceptDamageAdd = No
		DamageScalar	= 200% NONE +STRUCTURE		// more damage to buildings.
		DamageScalar	= 50000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End
	
	FireLogicNugget
		LogicType		= INCREASE_BURN_RATE
		Radius			= 5
		Damage			= 20
	End	

	FireLogicNugget
		LogicType		= INCREASE_FUEL
		Radius			= 25
		Damage			= 1200
		MinMaxBurnRate	= 20
		MinDecay		= 1
		MaxResistance	= 0
	End	
End

//------------------------------------------------------------------------------
Weapon CreateAHeroStealMoney
	LeechRangeWeapon			= Yes
	AttackRange					= CREATE_A_HERO_STEAL_MONEY_RANGE
	MeleeWeapon					= Yes
	FireFX						= FX_CaHStealMoney		//Per Amir,  we are using the treasure pickup FX
	DelayBetweenShots			= CREATE_A_HERO_STEAL_MONEY_DELAYBETWEENSHOTS
	PreAttackDelay				= CREATE_A_HERO_STEAL_MONEY_PREATTACKDELAY   // 1467 is the prep time for archer.
	PreAttackType				= PER_SHOT // Do the delay each time we attack a new target
	FiringDuration				= CREATE_A_HERO_STEAL_MONEY_FIRINGDURATION    // Duration of the archer firing shot is 500ms.

	StealMoneyNugget
		//Level 1
		AmountStolenPerAttack	= CREATE_A_HERO_STEAL_MONEY_AMOUNT_L1
		SpecialObjectFilter		= CREATE_A_HERO_STEAL_MONEY_OBJECT_FILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroStealMoney_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroStealMoney_Level2 Upgrade_CreateAHeroStealMoney_Level3
	End
	StealMoneyNugget
		//Level 2
		AmountStolenPerAttack	= CREATE_A_HERO_STEAL_MONEY_AMOUNT_L2
		SpecialObjectFilter		= CREATE_A_HERO_STEAL_MONEY_OBJECT_FILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroStealMoney_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroStealMoney_Level3
	End
	StealMoneyNugget
		//Level 3
		AmountStolenPerAttack	= CREATE_A_HERO_STEAL_MONEY_AMOUNT_L3
		SpecialObjectFilter		= CREATE_A_HERO_STEAL_MONEY_OBJECT_FILTER
		RequiredUpgradeNames	= Upgrade_CreateAHeroStealMoney_Level3
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroAssassinWeapon
	LeechRangeWeapon      = Yes
	AttackRange           = CREATE_A_HERO_ASSASSIN_RANGE
	MeleeWeapon           = Yes
	FireFX                = FX_CAHAssassin
	DelayBetweenShots     = CREATE_A_HERO_ASSASSIN_DELAYBETWEENSHOTS 			// time between shots, msec
	PreAttackDelay        = CREATE_A_HERO_ASSASSIN_PREATTACKDELAY 	// 400 is sword swing delay time before contact with target.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration        = CREATE_A_HERO_ASSASSIN_FIRINGDURATION 	// Duration of the sword swing

	DamageNugget                // A basic Nugget that just does damage
		Damage					= CREATE_A_HERO_ASSASSIN_DAMAGE_L1
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroAssassin_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroAssassin_Level2 Upgrade_CreateAHeroAssassin_Level3 Upgrade_CreateAHeroAssassin_Level4
		SpecialObjectFilter      = CREATE_A_HERO_ASSASSIN_OBJECT_FILTER
	End

	DamageNugget                // A basic Nugget that just does damage
		Damage					= CREATE_A_HERO_ASSASSIN_DAMAGE_L2
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroAssassin_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroAssassin_Level3 Upgrade_CreateAHeroAssassin_Level4
		SpecialObjectFilter      = CREATE_A_HERO_ASSASSIN_OBJECT_FILTER
	End

	DamageNugget                // A basic Nugget that just does damage
		Damage					= CREATE_A_HERO_ASSASSIN_DAMAGE_L3
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroAssassin_Level3
		ForbiddenUpgradeNames   = Upgrade_CreateAHeroAssassin_Level4
		SpecialObjectFilter      = CREATE_A_HERO_ASSASSIN_OBJECT_FILTER
	End

	DamageNugget                // A basic Nugget that just does damage
		Damage					= CREATE_A_HERO_ASSASSIN_DAMAGE_L4
		Radius					= 0.0
		DelayTime				= 0
		DamageType				= HERO
		DamageFXType			= SWORD_SLASH
		DeathType				= NORMAL
		RequiredUpgradeNames	= Upgrade_CreateAHeroAssassin_Level4
		SpecialObjectFilter      = CREATE_A_HERO_ASSASSIN_OBJECT_FILTER
	End
End

//------------------------------------------------------------------------------------------------------------------------------
Weapon CreateAHeroRainOfArrows_Level1
	AttackRange = CREATE_A_HERO_RAIN_OF_ARROWS_RANGE	//LEGOLAS_ARROWSTORM_RANGE
	WeaponSpeed = 561         // dist/sec 
	MinWeaponSpeed = 481
	MaxWeaponSpeed = 641      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_RohanArcherBowWeapon
	HitPercentage     = 100     //When this weapon is used it will hit exactly all of the time.

	ProjectileNugget                    // Default arrow
		ProjectileTemplateName = LegolasBowArrowStormProjectile
		WarheadTemplateName = CreateAHeroRainOfArrowsWarhead_Level1
	End
End

//------------------------------
Weapon CreateAHeroRainOfArrowsWarhead_Level1
	ProjectileCollidesWith =   STRUCTURES WALLS  
	RadiusDamageAffects =   ENEMIES NEUTRALS NOT_SIMILAR
	HitStoredTarget = Yes	// Always hits initial target.
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_RAIN_OF_ARROWS_DAMAGE_L1		//LEGOLAS_ARROWSTORM_DAMAGE
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		AcceptDamageAdd = No
	End
End

//------------------------------------------------------------------------------------------------------------------------------
Weapon CreateAHeroRainOfArrows_Level2
	AttackRange = CREATE_A_HERO_RAIN_OF_ARROWS_RANGE	//LEGOLAS_ARROWSTORM_RANGE
	WeaponSpeed = 561         // dist/sec 
	MinWeaponSpeed = 481
	MaxWeaponSpeed = 641      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_RohanArcherBowWeapon
	HitPercentage     = 100     //When this weapon is used it will hit exactly all of the time.

	ProjectileNugget                    // Default arrow
		ProjectileTemplateName = LegolasBowArrowStormProjectile
		WarheadTemplateName = CreateAHeroRainOfArrowsWarhead_Level2
	End
End

//------------------------------
Weapon CreateAHeroRainOfArrowsWarhead_Level2
	ProjectileCollidesWith =   STRUCTURES WALLS  
	RadiusDamageAffects =   ENEMIES NEUTRALS NOT_SIMILAR
	HitStoredTarget = Yes	// Always hits initial target.
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_RAIN_OF_ARROWS_DAMAGE_L2		//LEGOLAS_ARROWSTORM_DAMAGE
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		AcceptDamageAdd = No
	End
End

//------------------------------------------------------------------------------------------------------------------------------
Weapon CreateAHeroRainOfArrows_Level3
	AttackRange = CREATE_A_HERO_RAIN_OF_ARROWS_RANGE	//LEGOLAS_ARROWSTORM_RANGE
	WeaponSpeed = 561         // dist/sec 
	MinWeaponSpeed = 481
	MaxWeaponSpeed = 641      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_RohanArcherBowWeapon
	HitPercentage     = 100     //When this weapon is used it will hit exactly all of the time.

	ProjectileNugget                    // Default arrow
		ProjectileTemplateName = LegolasBowArrowStormProjectile
		WarheadTemplateName = CreateAHeroRainOfArrowsWarhead_Level3
	End
End

//------------------------------
Weapon CreateAHeroRainOfArrowsWarhead_Level3
	ProjectileCollidesWith =   STRUCTURES WALLS  
	RadiusDamageAffects =   ENEMIES NEUTRALS NOT_SIMILAR
	HitStoredTarget = Yes	// Always hits initial target.
	DamageNugget                        // A basic Nugget that just does damage
		Damage        = CREATE_A_HERO_RAIN_OF_ARROWS_DAMAGE_L3		//LEGOLAS_ARROWSTORM_DAMAGE
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO_RANGED
		DamageFXType  = GOOD_ARROW_PIERCE
		DeathType     = NORMAL
		AcceptDamageAdd = No
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroAxeThrow
	AttackRange         = CREATE_A_HERO_AXE_THROW_RANGE
	WeaponSpeed = 161         // dist/sec 
	MinWeaponSpeed = 201
	MaxWeaponSpeed = 241      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
	FireFX = FX_GimliAxeThrow
	ScaleWeaponSpeed = Yes // Used for lob weapons, scales speed proportional to range
	HitPercentage = 100
	ScatterRadius     = 0.0      //When this weapon misses it can randomly miss by as much as this distance.
	DelayBetweenShots = 0        // time between shots, msec
  	
    AntiAirborneVehicle	= Yes // added so he can attack fellbeast and birds
    AntiAirborneMonster	= Yes // added so he can attack fellbeast and birds
  	
  	ClipSize			= 1			// how many shots in a Clip (0 == infinite)
	ClipReloadTime		= 10000     // how long to reload a Clip, msec
	AutoReloadsClip		= Yes
	//IdleAfterFiringDelay = 2500//
	//HoldAfterFiringDelay = 2500 // So I don't move while the weapon needs to complete
    InstantLoadClipOnActivate = Yes

	PreAttackDelay        = 1500// 1467             // 1467 is the prep time for archer.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration      = 1600// 1567    // Duration of the archer firing shot is 500ms.

	ProjectileNugget
		ProjectileTemplateName = GimliAxeProjectile
		WarheadTemplateName = CreateAHeroAxeThrowWarhead
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroAxeThrowWarhead
	ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS 
	RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR
	FireFX                = FX_GondorSwordHit
	HitStoredTarget = Yes	// Always hits initial target.

	DamageNugget
		Damage        = CREATE_A_HERO_AXE_THROW_DAMAGE_L1
		DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		RequiredUpgradeNames = Upgrade_CreateAHeroAxeThrow_Level1
		ForbiddenUpgradeNames = Upgrade_CreateAHeroAxeThrow_Level2 Upgrade_CreateAHeroAxeThrow_Level3
	End

	DamageNugget
		Damage        = CREATE_A_HERO_AXE_THROW_DAMAGE_L2
		DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		RequiredUpgradeNames = Upgrade_CreateAHeroAxeThrow_Level2
		ForbiddenUpgradeNames = Upgrade_CreateAHeroAxeThrow_Level3
	End

	DamageNugget
		Damage        = CREATE_A_HERO_AXE_THROW_DAMAGE_L3
		DamageScalar  = 10% NONE +STRUCTURE +MordorCatapult +IsengardBallista +GondorTrebuchet +GondorTrebuchetWall 
		Radius        = 0.0	// HitStoredTarget means we hurt the person we launched at.  And nobody else.  So a miss hurts nobody.
		DelayTime     = 0
		DamageType    = HERO
		DamageFXType  = SWORD_SLASH
		DeathType     = NORMAL
		RequiredUpgradeNames = Upgrade_CreateAHeroAxeThrow_Level3
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroEarthShaker_Level1 // Big Blue Ring Blast
	IdleAfterFiringDelay = 0
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               // time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK // Do the delay each time we attack a new target
	PreAttackFX           = FX_GloinShatterPre
	FireFX                = FX_GloinShatterhammer
	FiringDuration      = 1400
	DamageNugget                        // A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_EARTH_SHAKER_DAMAGE_L1
		Radius			= CREATE_A_HERO_EARTH_SHAKER_RADIUS_L1	//250.0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 // must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount   = CREATE_A_HERO_EARTH_SHAKER_META_AMOUNT_L1	//70.0
		ShockWaveRadius   = CREATE_A_HERO_EARTH_SHAKER_META_RADIUS_L1	//500.0
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroEarthShaker_Level2 // Big Blue Ring Blast
	IdleAfterFiringDelay = 0
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               // time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK // Do the delay each time we attack a new target
	PreAttackFX           = FX_GloinShatterPre
	FireFX                = FX_GloinShatterhammer
	FiringDuration      = 1400
	DamageNugget                        // A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_EARTH_SHAKER_DAMAGE_L2
		Radius			= CREATE_A_HERO_EARTH_SHAKER_RADIUS_L2	//250.0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 // must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount   = CREATE_A_HERO_EARTH_SHAKER_META_AMOUNT_L2	//70.0
		ShockWaveRadius   = CREATE_A_HERO_EARTH_SHAKER_META_RADIUS_L2	//500.0
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroEarthShaker_Level3 // Big Blue Ring Blast
	IdleAfterFiringDelay = 0
	RadiusDamageAffects = ENEMIES NOT_SIMILAR
	DelayBetweenShots = 5000               // time between shots, msec
	PreAttackDelay        = 2600
	PreAttackType         = PER_ATTACK // Do the delay each time we attack a new target
	PreAttackFX           = FX_GloinShatterPre
	FireFX                = FX_GloinShatterhammer
	FiringDuration      = 1400
	DamageNugget                        // A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_EARTH_SHAKER_DAMAGE_L3
		Radius			= CREATE_A_HERO_EARTH_SHAKER_RADIUS_L3	//250.0
		DamageType		= MAGIC
		DamageFXType	= MAGIC
		DeathType		= EXPLODED
		DamageSpeed		= 700.0 // must match the ShockWaveSpeed below
	End
	MetaImpactNugget                    // A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount   = CREATE_A_HERO_EARTH_SHAKER_META_AMOUNT_L3	//70.0
		ShockWaveRadius   = CREATE_A_HERO_EARTH_SHAKER_META_RADIUS_L3	//500.0
		ShockWaveTaperOff = 1.0
		ShockWaveZMult    = 1.000
		ShockWaveSpeed	  = 700.0 
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroLeap  // BALANCE RohanGimliLeap
  IdleAfterFiringDelay = 0
  AttackRange           = 100.0
  MinimumAttackRange    = 8.0
  WeaponSpeed           = 100.0        // dist/sec (huge value == effectively instant)
  ProjectileSelf		= Yes // We don't make the projectile throw ourself
  ClipSize              = 1               // how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 2200   //1467 min for animation           // how long to reload a Clip, msec
  AutoReloadsClip		= Yes	
  PreAttackDelay        = 600
  FiringDuration		= 1500            
  PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
  HitPercentage       = 0 // Never auto hits, always shoots at a ground position
  ScatterRadius       = 0.0     //When this weapon misses it can randomly miss by as much as this distance.
  FireFX				= FX_GimliLeap
  ProjectileNugget                    // A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = CreateAHeroLeapWarhead
  End
End

//-----------------------------------
Weapon CreateAHeroLeapWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES
  
  ;FireFX				= FX_GimliLeap
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L1
    Radius        = 30.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroLeap_Level1
	ForbiddenUpgradeNames	= Upgrade_CreateAHeroLeap_Level2 Upgrade_CreateAHeroTrollLeap_Level1 Upgrade_CreateAHeroTrollLeap_Level2
  End 
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L2
    Radius        = 50.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroLeap_Level2
	ForbiddenUpgradeNames	= Upgrade_CreateAHeroLeap_Level1 Upgrade_CreateAHeroTrollLeap_Level1 Upgrade_CreateAHeroTrollLeap_Level2
  End
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L1
    Radius        = 30.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroTrollLeap_Level1
	ForbiddenUpgradeNames	= Upgrade_CreateAHeroLeap_Level1 Upgrade_CreateAHeroLeap_Level2 Upgrade_CreateAHeroTrollLeap_Level2
  End
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L2
    Radius        = 50.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroTrollLeap_Level2
	ForbiddenUpgradeNames	= Upgrade_CreateAHeroLeap_Level1 Upgrade_CreateAHeroTrollLeap_Level1 Upgrade_CreateAHeroLeap_Level2
  End
  MetaImpactNugget                    // A Nugget that throws things back with force
//	HeroResist			= .75
    ShockWaveAmount   = 70.0
    ShockWaveRadius   = 40.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroTrollLeap  // BALANCE RohanGimliLeap
  IdleAfterFiringDelay = 0
  AttackRange           = 100.0
  MinimumAttackRange    = 8.0
  WeaponSpeed           = 100.0        // dist/sec (huge value == effectively instant)
  ProjectileSelf		= Yes // We don't make the projectile throw ourself
  ClipSize              = 1               // how many shots in a Clip (0 == infinite)
  ClipReloadTime        = 2200   //1467 min for animation           // how long to reload a Clip, msec
  AutoReloadsClip		= Yes	
  PreAttackDelay        = 600
  FiringDuration		= 1500            
  PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
  HitPercentage       = 0 // Never auto hits, always shoots at a ground position
  ScatterRadius       = 0.0     //When this weapon misses it can randomly miss by as much as this distance.
  FireFX				= FX_RogashLeap
  ProjectileNugget                    // A Nugget that creates an Object and sends it to the target with a Warhead
    WarheadTemplateName = CreateAHeroTrollLeapWarhead
  End
End

//-----------------------------------
Weapon CreateAHeroTrollLeapWarhead
  ProjectileCollidesWith = ENEMIES
  RadiusDamageAffects = ENEMIES
  
  FireFX				= FX_RogashLeap
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L1
    Radius        = 30.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroTrollLeap_Level1
	ForbiddenUpgradeNames	= Upgrade_CreateAHeroTrollLeap_Level2
  End
  DamageNugget                        // A basic Nugget that just does damage
    Damage        = CREATE_A_HERO_LEAP_DAMAGE_L2
    Radius        = 50.0
    DelayTime     = 0
    DamageType            = HERO
    DamageFXType          = GIMLI_LEAP
    DeathType             = NORMAL
	RequiredUpgradeNames	= Upgrade_CreateAHeroTrollLeap_Level2
  End
  MetaImpactNugget                    // A Nugget that throws things back with force
//	HeroResist			= .75
    ShockWaveAmount   = 70.0
    ShockWaveRadius   = 40.0
    ShockWaveTaperOff = 0.5
    ShockWaveZMult    = 1.20
  End
End

//-----------------------------------
Weapon CreateAHeroSapper_Level1
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= CREATE_A_HERO_SAPPER_RANGE	//30.0
	MeleeWeapon			= Yes
	WeaponSpeed           = 799999.2        // dist/sec (huge value == effectively instant)
	FireFX				= FX_DwarvenSapper
	DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	// time between shots, msec
	PreAttackDelay        = GLOIN_PREATTACKDELAY 	// 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration        = GLOIN_FIRINGDURATION 		// min 600 for anim

	// Crush damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_L1
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L1
		DelayTime		= 0
		DamageType		= CRUSH
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Structural damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_STRUCTURAL_L1
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L1
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Push back
	MetaImpactNugget							// A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount		= 60
		ShockWaveRadius		= 80
		ShockWaveArc		= 75				// Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

//-----------------------------------
Weapon CreateAHeroSapper_Level2
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= CREATE_A_HERO_SAPPER_RANGE	//30.0
	MeleeWeapon			= Yes
	WeaponSpeed           = 799999.2        // dist/sec (huge value == effectively instant)
	FireFX				= FX_DwarvenSapper
	DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	// time between shots, msec
	PreAttackDelay        = GLOIN_PREATTACKDELAY 	// 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration        = GLOIN_FIRINGDURATION 		// min 600 for anim

	// Crush damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_L2
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L2
		DelayTime		= 0
		DamageType		= CRUSH
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Structural damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_STRUCTURAL_L2
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L2
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Push back
	MetaImpactNugget							// A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount		= 60
		ShockWaveRadius		= 80
		ShockWaveArc		= 75				// Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

//-----------------------------------
Weapon CreateAHeroSapper_Level3
	LeechRangeWeapon		= Yes
	CanFireWhileMoving		= No
	AttackRange			= CREATE_A_HERO_SAPPER_RANGE	//30.0
	MeleeWeapon			= Yes
	WeaponSpeed           = 799999.2        // dist/sec (huge value == effectively instant)
	FireFX				= FX_DwarvenSapper
	DelayBetweenShots     = GLOIN_DELAYBETWEENSHOTS 	// time between shots, msec
	PreAttackDelay        = GLOIN_PREATTACKDELAY 	// 433 is natural time of the stabbing animation.
	PreAttackType         = PER_SHOT // Do the delay each time we attack a new target
	FiringDuration        = GLOIN_FIRINGDURATION 		// min 600 for anim

	// Crush damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_L3
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L3
		DelayTime		= 0
		DamageType		= CRUSH
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Structural damage.
	DamageNugget								// A basic Nugget that just does damage
		Damage			= CREATE_A_HERO_SAPPER_DAMAGE_STRUCTURAL_L3
		Radius			= CREATE_A_HERO_SAPPER_RADIUS_L3
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType	= MAGIC
		DeathType		= NORMAL
	End

	// Push back
	MetaImpactNugget							// A Nugget that throws things back with force
//		HeroResist			= .75
		ShockWaveAmount		= 60
		ShockWaveRadius		= 80
		ShockWaveArc		= 75				// Should generally be equal to damage arc
		ShockWaveTaperOff	= 1.0
		ShockWaveSpeed		= 0.0
		ShockWaveZMult		= 1.6
	End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroClearGarrisonWeapon
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
		Damage			= CREATE_A_HERO_CLEAR_GARRISON_DAMAGE	//GLOIN_SHAKEFOUNDATION_DAMAGE
		Radius			= 0.0
		DelayTime		= 0
		DamageType		= SIEGE
		DamageFXType	= MAGIC
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

//------------------------------------------------------------------------------
Weapon CreateaHeroBlinkDestination
  RadiusDamageAffects   = ENEMIES
  FireFX = FX_Blink 
  
  MetaImpactNugget                    // A Nugget that throws things back with force
    ShockWaveAmount   = 50.0
    ShockWaveRadius   = 55.0
    ShockWaveTaperOff = 0.75
    ShockWaveZMult    = 1.20
//    HeroResist		  = 0
  End
End

//------------------------------------------------------------------------------
Weapon CreateAHeroBombardWeapon
	AttackRange			= 300
	WeaponSpeed			= 801		; dist/sec 
	HitPercentage		= 100		; When this weapon is used it will hit exactly 100% of the time.
	DelayBetweenShots	= 2000		; time between shots, msec
	PreAttackDelay      = 400
	PreAttackType       = PER_SHOT	*; Do the delay each time we attack a new target
	
	FiringDuration      = 1100
	AntiAirborneVehicle	= Yes
	AntiAirborneMonster	= Yes

	RadiusDamageAffects = ENEMIES NOT_SIMILAR

	WeaponOCLNugget
		WeaponOCLName = OCL_CreateAHeroBombardSeed_Level1
		RequiredUpgradeNames	= Upgrade_CreateAHeroBombard_Level1
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroBombard_Level2 Upgrade_CreateAHeroBombard_Level3
	End

	WeaponOCLNugget
		WeaponOCLName = OCL_CreateAHeroBombardSeed_Level2
		RequiredUpgradeNames	= Upgrade_CreateAHeroBombard_Level2
		ForbiddenUpgradeNames	= Upgrade_CreateAHeroBombard_Level3
	End

	WeaponOCLNugget
		WeaponOCLName = OCL_CreateAHeroBombardSeed_Level3
		RequiredUpgradeNames	= Upgrade_CreateAHeroBombard_Level3
	End
End


//------------------------------------------------------------------------------
Weapon WizardFireballL1 //BALANCE Wizard
  LeechRangeWeapon			= Yes
  AttackRange               = SARUMAN_FIREBALL_RANGE		// set this in his special power
  WeaponSpeed               = 150         // dist/sec 
  MinWeaponSpeed            = 100
  MaxWeaponSpeed            = 200      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
  ScaleWeaponSpeed          = Yes      // Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100      //When this weapon is used it will hit exactly 100% of the time.
  ScatterRadius             = 0.0     //When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots         = 5000     // time between shots, msec
  PreAttackDelay            = 1     // 1467 is the prep time for archer.
  PreAttackRandomAmount     = 0      // amount of additional preattack variance for archer type attacks only  
  PreAttackType             = PER_SHOT // Do the delay each time we attack a new target
  FiringDuration            = 1     // Duration of the archer firing shot is 500ms.
  IsAimingWeapon            = Yes
  AcceptableAimDelta		= 15
  AntiAirborneVehicle       = Yes
  AntiAirborneMonster		= Yes
  FireFX					= FX_SarumanFireball
  DamageType				= FLAME
  
  ProjectileNugget          // Default arrow
    ProjectileTemplateName  = WizardFireballProjectileL1
    WarheadTemplateName     = WizardFireballWarheadL1
  End
End

//----------------------------
Weapon WizardFireballWarheadL1
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR MINES // ALLIES
	
	FireLogicNugget //@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	40
		Damage		=	10
	End	

	DamageNugget                        // A basic Nugget that just does damage
         Damage        = CREATE_A_HERO_FIREBALL_DMG_LVL_1
         Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_1
         DelayTime     = 0
         DamageType    = FLAME
         DamageFXType  = BIG_ROCK
         DeathType     = BURNED
         DamageScalar  = 5000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	DamageNugget  ; to make the fireball a bit more mighty against enemy heroes and fireproof monsters
	    Damage        = 50	
	    Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_1
	    DelayTime     = 0
	    DamageType    = MAGIC
	    DamageFXType  = BIG_ROCK
	    DeathType     = BURNED
	End

	MetaImpactNugget                         // A Nugget that throws things back with force
//		HeroResist        =  0.75
		ShockWaveAmount   = 80.00
		ShockWaveRadius   = SARUMAN_FIREBALL_RADIUS
		ShockWaveTaperOff =  0.75
		ShockWaveZMult    =  1.20
	End
End

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
Weapon WizardFireballL2 //BALANCE Wizard
  LeechRangeWeapon			= Yes
  AttackRange               = SARUMAN_FIREBALL_RANGE		// set this in his special power
  WeaponSpeed               = 150         // dist/sec 
  MinWeaponSpeed            = 100
  MaxWeaponSpeed            = 200      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
  ScaleWeaponSpeed          = Yes      // Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100      //When this weapon is used it will hit exactly 100% of the time.
  ScatterRadius             = 0.0     //When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots         = 5000     // time between shots, msec
  PreAttackDelay            = 1     // 1467 is the prep time for archer.
  PreAttackRandomAmount     = 0      // amount of additional preattack variance for archer type attacks only  
  PreAttackType             = PER_SHOT // Do the delay each time we attack a new target
  FiringDuration            = 1     // Duration of the archer firing shot is 500ms.
  IsAimingWeapon            = Yes
  AcceptableAimDelta		= 15
  AntiAirborneVehicle       = Yes
  AntiAirborneMonster		= Yes
  FireFX					= FX_SarumanFireball
  DamageType				= FLAME
  
  ProjectileNugget          // Default arrow
    ProjectileTemplateName  = WizardFireballProjectileL2
    WarheadTemplateName     = WizardFireballWarheadL2
  End
End

//----------------------------
Weapon WizardFireballWarheadL2
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR MINES // ALLIES
	
	FireLogicNugget //@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	40
		Damage		=	10
	End	

	DamageNugget                        // A basic Nugget that just does damage
         Damage        = CREATE_A_HERO_FIREBALL_DMG_LVL_2
         Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_2
         DelayTime     = 0
         DamageType    = FLAME
         DamageFXType  = BIG_ROCK
         DeathType     = BURNED
         DamageScalar  = 5000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	DamageNugget  ; to make the fireball a bit more mighty against enemy heroes and fireproof monsters
	    Damage        = 50	
	    Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_2
	    DelayTime     = 0
	    DamageType    = MAGIC
	    DamageFXType  = BIG_ROCK
	    DeathType     = BURNED
	End

	MetaImpactNugget                         // A Nugget that throws things back with force
//		HeroResist        =  0.75
		ShockWaveAmount   = 80.00
		ShockWaveRadius   = SARUMAN_FIREBALL_RADIUS
		ShockWaveTaperOff =  0.75
		ShockWaveZMult    =  1.20
	End
End

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
Weapon WizardFireballL3 //BALANCE Wizard
  LeechRangeWeapon			= Yes
  AttackRange               = SARUMAN_FIREBALL_RANGE		// set this in his special power
  WeaponSpeed               = 150         // dist/sec 
  MinWeaponSpeed            = 100
  MaxWeaponSpeed            = 200      // dist/sec Upper limit on scaling, when attacking past nominal "max" range
  ScaleWeaponSpeed          = Yes      // Used for lob weapons, scales speed proportional to range
  HitPercentage             = 100      //When this weapon is used it will hit exactly 100% of the time.
  ScatterRadius             = 0.0     //When this weapon misses it can randomly miss by as much as this distance.
  DelayBetweenShots         = 5000     // time between shots, msec
  PreAttackDelay            = 1     // 1467 is the prep time for archer.
  PreAttackRandomAmount     = 0      // amount of additional preattack variance for archer type attacks only  
  PreAttackType             = PER_SHOT // Do the delay each time we attack a new target
  FiringDuration            = 1     // Duration of the archer firing shot is 500ms.
  IsAimingWeapon            = Yes
  AcceptableAimDelta		= 15
  AntiAirborneVehicle       = Yes
  AntiAirborneMonster		= Yes
  FireFX					= FX_SarumanFireball
  DamageType				= FLAME
  
  ProjectileNugget          // Default arrow
    ProjectileTemplateName  = WizardFireballProjectileL3
    WarheadTemplateName     = WizardFireballWarheadL3
  End
End

//----------------------------
Weapon WizardFireballWarheadL3
  ProjectileCollidesWith = ENEMIES NEUTRAL STRUCTURES WALLS
  RadiusDamageAffects = ENEMIES NEUTRALS NOT_SIMILAR MINES // ALLIES
	
	FireLogicNugget //@@@ fire logic testing
		LogicType	=	INCREASE_BURN_RATE
		Radius		=	40
		Damage		=	10
	End	

	DamageNugget                        // A basic Nugget that just does damage
         Damage        = CREATE_A_HERO_FIREBALL_DMG_LVL_3
         Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_3
         DelayTime     = 0
         DamageType    = FLAME
         DamageFXType  = BIG_ROCK
         DeathType     = BURNED
         DamageScalar  = 5000% NONE +MINE // Make sure we one shot kill mines, without risking wasting some poor hero with a torch
	End

	DamageNugget  ; to make the fireball a bit more mighty against enemy heroes and fireproof monsters
	    Damage        = 50	
	    Radius        = CREATE_A_HERO_FIREBALL_RADIUS_LVL_3
	    DelayTime     = 0
	    DamageType    = MAGIC
	    DamageFXType  = BIG_ROCK
	    DeathType     = BURNED
	End

	MetaImpactNugget                         // A Nugget that throws things back with force
//		HeroResist        =  0.75
		ShockWaveAmount   = 80.00
		ShockWaveRadius   = SARUMAN_FIREBALL_RADIUS
		ShockWaveTaperOff =  0.75
		ShockWaveZMult    =  1.20
	End
End

//------------------------------------------------------------------------------

//===========================================================================================
//////////////////////////// END OF CREATE A HERO SPECIAL WEAPONS ////////////////////////////
//==========================================================================================
