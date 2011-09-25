
; ####################################################
Object GoblinArcherHorde
; ####################################################

	ButtonImage		= WOR_GoblinArcher
	SelectPortrait	= UPWild_GoblinArcher

	Draw = W3DScriptedModelDraw ModuleTag_W3DModelDraw
	    DependencySharedModelFlags = SPECIAL_WEAPON_THREE USER_8 EMOTION_ALERT EMOTION_MORALE_HIGH EMOTION_MORALE_LOW EMOTION_AFRAID EMOTION_COWER SELECTED EMOTION_TERROR EMOTION_LOOK_TO_SKY
		DefaultModelConditionState
			Model = None ;InvisHrdeTmp
		End
		ModelConditionState = HORDE_EMPTY
			Model = None
		End		
		ModelConditionState = WORLD_BUILDER
			Model = HordeMarkAUGAr
		End
	End
	
	Side				= Wild
	EditorSorting		= UNIT
	EmotionRange		= 240
	TransportSlotCount	= TRANSPORTSLOTCOUNT_LARGE_HORDE
	DisplayName		= OBJECT:HordeGoblinArchers
	DisplayNameStrategic = CONTROLBAR:LW_Unit_GoblinArcherHorde
	DescriptionStrategic = CONTROLBAR:LW_ToolTip_GoblinArcherHorde
	
	WeaponSet
		Conditions	= None 
		Weapon		= PRIMARY     GoblinArcherMissileHordeRangefinder
		Weapon		= TERTIARY    GoblinArcherMissileHordeRangefinderBombard
		AutoChooseSources = TERTIARY FROM_PLAYER FROM_SCRIPT				; Not AI.
	End

	; *** AUDIO Parameters ***;
	; Note: Don't put voice parameters here -- they will be ignored. Voice play requests
	; are always passed through to members
	#include "..\..\..\includes\StandardHordeEvaEvents.inc"

	BuildCost		= GOBLIN_ARCHER_BUILDCOST
	BuildTime		= GOBLIN_ARCHER_BUILDTIME    
	   
	VisionRange = GOBLIN_ARCHER_HORDE_VISION_RANGE
	ShroudClearingRange = GOBLIN_ARCHER_SHROUD_RANGE 
	
	VisionSide = 50%
	VisionRear = 25%
	
	MaxVisionBonusPercent = 300%
	VisionBonusTestRadius = 200
	VisionBonusPercentPerFoot = 1.0%
	
	
	CrushableLevel	= 0		; What am I?:        0 = for infantry, 1 = for trees, 2 = general vehicles
	CrusherLevel	= 0		; What can I crush?: 0 = small animals, 1 = infantry, 2 = trees, 3 = vehicles 
	UseCrushAttack  = No		; Archer hordes cannot crush or Bombard will not work
	CommandPoints	= 20 		; BALANCE, set up to just produce 2 hordes if 700 cp left	originally 60
	CommandSet	= GoblinArcherCommandSet //GoblinArcherHordeCommandSet
		
	FormationWidth 	= 2 		; Width it occupies in formations. Current choices are 1 or 2.
	FormationDepth 	= 2 		; Depth it occupies in formations. Current choices are 1 or 2.
	
	TransportSlotCount = TRANSPORTSLOTCOUNT_LARGE_HORDE
	KindOf = SELECTABLE CAN_ATTACK ATTACK_NEEDS_LINE_OF_SIGHT INFANTRY HORDE ARCHER ARMY_SUMMARY LARGE_RECTANGLE_PATHFIND CAN_CLIMB_WALLS ORC
			 
	ThreatLevel 	= GOBLIN_ARCHER_HORDE_THREAT
	ThreatBreakdown GoblinArcherHorde_DetailedThreat
		AIKindOf = ARCHER
	End
	
	Body = ImmortalBody ModuleTag_ImmortalBody
		MaxHealth = 1
	End

; ############################################################ NEED HELP HERE!
;	Behavior = CommandSetUpgrade ModuleTag_CommandSetFlamingArrows
;		TriggeredBy	= Upgrade_WildFireArrows
;		CommandSet	= GoblinArcherCommandSetFlamingArrows
;	End
; ############################################################# TOO MUCH FIDDLING...

	Behavior = SpecialPowerModule ModuleTag_GenericFlamingArrowsStarter // ModuleTag_SAFireArrowsStarter
		SpecialPowerTemplate		= SpecialAbilityGenericFlamingArrows //SpecialAbilitySAFireArrows
		UpdateModuleStartsAttack		= Yes
		;StartsPaused					= Yes //Added for SEE!	
	End
	Behavior = WeaponFireSpecialAbilityUpdate ModuleTag_GenericFlamingArrowsWeaponFireUpdate //ModuleTag_SAFireArrowsWeaponFireUpdate   
		SpecialPowerTemplate		= SpecialAbilityGenericFlamingArrows //SpecialAbilitySAFireArrows
		; this has to be longer than the weapon firing time on the members or
		; else the horde will fire its regular weapon and blow away the members' ai.
		;PreparationTime			= 1													; *needs* to be something non-zero					//Added for SEE!
		PackTime					= GOBLIN_ARCHER_BOW_RELOADTIME_MIN //2000
		;PersistentPrepTime		= GOBLIN_ARCHER_BOW_RELOADTIME_MAX	 ; time between shots, can't get much of a lower value than this.		//Added for SEE!
		;PersistentCount			= 10	; Total timing: this * PersistentPrepTime			; Change the anim speed to get a better match.		//Added for SEE!
		StartAbilityRange			= #SUBTRACT( GOBLIN_ARCHER_RANGE 100 )
		SpecialWeapon				= GenericArcherFlamingArrowsRangeFinder //GoblinArcherSAFireArrowsRangeFinder
		;WhichSpecialWeapon		= 3						; sets SPECIAL_WEAPON_THREE													//Added for SEE!
		ApproachUntilMembersInRange	= Yes
	End
	
	Behavior = AutoAbilityBehavior ModuleTag_AutoAbilityFireArrows
		SpecialAbility = SpecialAbilityGenericFlamingArrows
		MaxScanRange		= #SUBTRACT( GOBLIN_ARCHER_RANGE 0 )
		Query				= 1 ALL ENEMIES ;-STRUCTURE
	End	
	
	Behavior = StancesBehavior ModuleTag_StancesBehavior
        StanceTemplate = ArcherHorde
    End
	
	Behavior = HordeAIUpdate ModuleTag_HordeAIUpdate
		AutoAcquireEnemiesWhenIdle	= Yes ATTACK_BUILDINGS
		MoodAttackCheckRate			= 500
		MaxCowerTime				= 5000
		MinCowerTime				= 3000
		CanAttackWhileContained		= Yes  ; Can fire out of garrisoned building		
        AILuaEventsList				= WildInfantryFunctions
        AttackPriority				= AttackPriority_Archer
	End

	Behavior = HordeContain ModuleTag_HordeContain
		FrontAngle = 270
		FlankedDelay = 2000
		ObjectStatusOfContained = 
		InitialPayload	= GoblinArcher 20
		Slots			= 20
		PassengerFilter = NONE +INFANTRY
		ShowPips		= No

		; Banner Carrier info		
		BannerCarriersAllowed	= WildBannerGoblin		; types of units that are allowed as banner carriers
		BannerCarrierPosition	= UnitType:GoblinArcher		Pos:X:75.0 Y:0.0	; (DEFAULT) position of banner carrier for fighter horde
		
		RandomOffset = X:5 Y:5
		
		RankInfo = RankNumber:1 UnitType:GoblinArcher Position:X:50 Y:0			Position:X:50 Y:20		Position:X:50 Y:-20		Position:X:50 Y:40		Position:X:50 Y:-40 
		RankInfo = RankNumber:2 UnitType:GoblinArcher Position:X:30 Y:0 Leader 1 0	Position:X:30 Y:20 Leader 1 1	Position:X:30 Y:-20 Leader 1 2	Position:X:30 Y:40 Leader 1 3	Position:X:30 Y:-40 Leader 1 4
		RankInfo = RankNumber:3 UnitType:GoblinArcher Position:X:10 Y:0 Leader 2 0	Position:X:10 Y:20 Leader 2 1	Position:X:10 Y:-20 Leader 2 2	Position:X:10 Y:40 Leader 2 3	Position:X:10 Y:-40 Leader 2 4
		RankInfo = RankNumber:4 UnitType:GoblinArcher Position:X:-10 Y:0 Leader 3 0	Position:X:-10 Y:20 Leader 3 1	Position:X:-10 Y:-20 Leader 3 2	Position:X:-10 Y:40 Leader 3 3	Position:X:-10 Y:-40 Leader 3 4
		
		RanksToReleaseWhenAttacking = 1 2 3 4
    MeleeAttackLeashDistance = 1; How far the hordes can move from the center of the horde when melee attacking.				
    BackUpMinDelayTime		 = 1	//The minimum amount of	time to	delay before backing up
    BackUpMaxDelayTime		 = 3000	//The maximum amount of	time to	delay before backing up
    BackUpMinDistance		 = 1	//The minimum number of	cells to backup
    BackUpMaxDistance		 = 3	//The maximum number of	cells to backup
    BackupPercentage		 = 80%	//The amount of	chance that	a unit will	back up.	
		
	End
	
	Behavior = PhysicsBehavior ModuleTag_PhysicsBehavior
		GravityMult = 1.0
	End
	
	Behavior = LargeGroupBonusUpdate ModuleTag_LargeGroupBonus
		UpdateRate			= 1000
		HordeMemberFilter	= NONE +GoblinFighter +GoblinArcher +GoblinSpearman +GoblinWargRider
		Count				= 100
		Radius				= 160.0
		RubOffRadius		= 160.0
		AlliesOnly			= Yes
		AttributeModifier	= MordorLargeGroupBonus_SEE
	End
	
 	Behavior = EmotionTrackerUpdate	Module_EmotionTracker
		TauntAndPointDistance		=	INFANTRY_TAUNT_POINT_RADIUS		; max distance to taunted/pointed objet
		TauntAndPointUpdateDelay	=	1000	; how often scan (milliseconds)
		TauntAndPointExcluded		=	NONE
		AfraidOf					=	EMOTION_AFRAIDOF_OBJECTFILTER
		AlwaysAfraidOf				=	EMOTION_ALWAYS_AFRAIDOF_OBJECTFILTER +CloudBreakSunbeam +SunflareSunbeam
		PointAt						=	EMOTION_POINTAT_OBJECTFILTER
		HeroScanDistance			=	150
		FearScanDistance			=	ARCHER_FEAR_SCAN_RADIUS ;250

		AddEmotion	=	Terror_Base
		AddEmotion	=	Doom_Base
		AddEmotion	=   BraceForBeingCrushed_Base
		AddEmotion	=	UncontrollableFear_Base_Evil
		AddEmotion	=	FearIdle_Base
		AddEmotion	=	FearBusy_Base
		AddEmotion	=	Point_Base
		AddEmotion	=	Taunt_Base	
		AddEmotion	=	CheerIdle_Base
		AddEmotion	=	CheerBusy_Base
		AddEmotion	=	HeroCheerIdle_Base
		AddEmotion	=	HeroCheerBusy_Base
		AddEmotion	=	Alert_Base
	End	
	
//  Behavior = CommandButtonHuntUpdate ModuleTag_CommandButtonHuntUpdate
//  End
  
	#include "..\..\..\includes\CaptureBuilding.inc"
	
	;LocomotorSet
		;Locomotor     = NormalRangedHordeLocomotor
		;Condition     = SET_NORMAL
		;Speed         = NORMAL_WILD_FAST_HORDE_SPEED
	;End
	
	LocomotorSet
		Locomotor     = TestWallScalingHordeLocomotor
		Condition     = SET_NORMAL
		Speed         = NORMAL_WILD_FAST_HORDE_SPEED		; RotWK originally NORMAL_FOOT_VERYFAST_HORDE_SPEED
	End

	Behavior = ProductionUpdate ProductionUpdateModuleTag
		GiveNoXP = Yes
	End

;#####################################################################	
;	Behavior = HordeDispatchSpecialPower ModuleTag_PoisonedBladeDispatch
;		SpecialPowerTemplate		= SpecialAbilityGoblinFighterPoisonedBlades
;		StartsPaused		  		= No
;	End	
;#####################################################################

	Behavior = LevelUpUpgrade ModuleTag_BasicTraining2
		TriggeredBy	= Upgrade_WildBasicTraining 
		LevelsToGain	= 1
		LevelCap		= 2
	End
	
	Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality
		TriggeredBy = Upgrade_WildFireArrows
	End
	
	Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality2
		TriggeredBy = Upgrade_WildHeavyArmor
	End
	
	Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality3
		TriggeredBy = Upgrade_WildSpiderVenomSacks
	End
	
	Behavior = PickupStuffUpdate ModuleTag_PickupStuffUpdate
		SkirmishAIOnly = Yes
		StuffToPickUp = NONE +CRATE
		ScanRange = 200
		ScanIntervalSeconds = 0.5
	End
	
	;///////////////////
	; AISpecialPowers
	;///////////////////
	
	Behavior = AISpecialPowerUpdate GoblinArcherHordeCaptureBuildingAI
		CommandButtonName = Command_CaptureBuilding
		SpecialPowerAIType = AI_SPECIAL_POWER_CAPTURE_BUILDING
	End
	
	Behavior = AISpecialPowerUpdate GondorFighterHordeStanceBattle
		CommandButtonName = Command_SetStanceBattle
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEBATTLE
	End

	Behavior = AISpecialPowerUpdate GondorFighterHordeStanceAggressive
		CommandButtonName = Command_SetStanceAggressive
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEAGGRESSIVE
	End

	Behavior = AISpecialPowerUpdate GondorFighterHordeHoldGround
		CommandButtonName = Command_SetStanceHoldGround
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEHOLDGROUND
	End

	Behavior = AISpecialPowerUpdate PoisonArrowAI
		CommandButtonName = Command_GoblinArcherPoisonArrows
		SpecialPowerAIType = AI_SPECIAL_POWER_MORGUL_BLADE ; it's pretty close
	End

	
	Geometry = BOX
	GeometryMajorRadius = 40.0
	GeometryMinorRadius = 50.0
	GeometryHeight = 20.0
	GeometryIsSmall = No
	
	
	; *** AUTO RESOLVE DATA *** 
	AutoResolveUnitType = AutoResolveUnit_Archer
	AutoResolveCombatChain = AutoResolve_ArcherCombatChain

	AutoResolveBody = AutoResolve_WildArcherHordeBody
	
	AutoResolveArmor
		RequiredUpgrades = Upgrade_WildHeavyArmor
		Armor = AutoResolve_GoblinArcherHeavyArmor
	End

	AutoResolveArmor
		ExcludedUpgrades = Upgrade_WildHeavyArmor
		Armor = AutoResolve_GoblinArcherArmor
	End

	AutoResolveWeapon
		RequiredUpgrades = Upgrade_WildFireArrows
		Weapon = AutoResolve_GoblinArcherUpgradedWeapon
	End

	AutoResolveWeapon
		ExcludedUpgrades = Upgrade_WildFireArrows
		Weapon = AutoResolve_GoblinArcherWeapon
	End
	
	WorldMapArmoryUpgradesAllowed = Upgrade_WildBasicTraining Upgrade_WildFireArrows Upgrade_WildHeavyArmor
End

;------------------------------------------------------------------------------------------------------------------
;
;	GoblinArcherHordeInn
;	A horde that gets built from a captured Inn.
;
;------------------------------------------------------------------------------------------------------------------
ChildObject GoblinArcherHordeInn GoblinArcherHorde
	BuildCost = INN_UNIT_BUILDCOST_WILD
End

;------------------------------------------------------------------------------------------------------------------
;
;	GoblinArcherHorde_FromDefectedLair
;	A horde that gets built from a defected neutral lair.
;
;------------------------------------------------------------------------------------------------------------------
ChildObject GoblinArcherHorde_FromDefectedLair GoblinArcherHorde

	; They're free!
	BuildCost = 25
	BuildTime = 15

End

;-----------------------------------------------------------------------------------------------------------------
;
;         Goblin Archer 6-pack Hord for Gundabad
;
;-----------------------------------------------------------------------------------------------------------------

ChildObject GoblinArcherMiniHorde GoblinArcherHorde



	Behavior = HordeContain ModuleTag_HordeContain
		FrontAngle = 270
		FlankedDelay = 2000
		ObjectStatusOfContained = 
		InitialPayload	= GoblinArcher 6
		Slots			= 6
		PassengerFilter = ANY +INFANTRY
		ShowPips		= No
		
		; Banner Carrier info		
		BannerCarriersAllowed	= WildBannerGoblin								; types of units that are allowed as banner carriers
		BannerCarrierPosition	= UnitType:GoblinArcher	Pos:X:60.0 Y:0.0	; (DEFAULT) position of banner carrier for fighter horde
		
		RandomOffset = X:5 Y:5	
		
		MeleeBehavior = Amoeba
		End
		
		RankInfo = RankNumber:1 UnitType:GoblinArcher Position:X:50 Y:0		Position:X:50 Y:20		Position:X:50 Y:-20		
		RankInfo = RankNumber:2 UnitType:GoblinArcher Position:X:30 Y:0 Leader 1 0	Position:X:30 Y:20 Leader 1 1	Position:X:30 Y:-20 Leader 1 2	

		RanksToReleaseWhenAttacking = 2
	End

End
