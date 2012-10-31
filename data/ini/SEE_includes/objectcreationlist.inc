; ---------------------------------------------------------------------------------------
; Spawn AIArmyAttackBeacon_SEE Mine
ObjectCreationList OCL_AIArmyAttackBeacon_SEE
  CreateObject
    ObjectNames = AIArmyAttackBeacon_SEE
    Count = 1
    Offset = X:300 Y:0 Z:20
    Disposition = LIKE_EXISTING
    IgnoreAllObjects	= Yes
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
  End
  CreateObject
    ObjectNames = AIArmyAttackBeacon_SEE
    Count = 1
    Offset = X:-300 Y:0 Z:20
    Disposition = LIKE_EXISTING
    IgnoreAllObjects	= Yes
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes
  End
End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_TheHeroHomingBeaconDud_SEE
  CreateObject
    ObjectNames = HeroHomingBeaconDud_SEE
    Count = 1
    SpreadFormation = No
    IgnoreAllObjects = Yes
  End
End


; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_TheRingCarrierEgg_SEE
  CreateObject
    ObjectNames				= CreateGollumTheRingCarrierEgg_SEE
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 5000
    DestinationPlayer		= PlyrCreeps
    WaypointSpawnPoints		= SpawnPoint_SkirmishGollum_				; Spawn on existing waypoints
  End
End
; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_TheRingStealerEgg_SEE
  CreateObject
    ObjectNames				= CreateGollumTheRingStealerEgg_SEE
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 5000
    DestinationPlayer		= PlyrCreeps
    WaypointSpawnPoints		= SpawnPoint_SkirmishGollum_				; Spawn on existing waypoints
  End
End

; ---------------------------------------------------------------------------------------
; Spawn Deployed Mine
ObjectCreationList OCL_DeployedExplosiveMine_SEE
  CreateObject
    ObjectNames = IsengardDeployedExplosiveMine
    Count = 1
    Offset = X:8 Y:0 Z:0
    FadeIn					= Yes
    FadeTime = 1000
  End
End
; ObjectCreationList OCL_DeployedExplosiveMineFadeTeamWeaponEgg_SEE
  ; CreateObject
    ; ObjectNames = DeployedExplosiveMineFadeTeamWeaponEgg_SEE
    ; Count = 1
    ; Offset = X:0 Y:0 Z:0
    ; FadeIn					= Yes
    ; FadeTime = 1000
  ; End
; End


; ---------------------------------------------------------------------------------------
; Spawn StartingTeams
ObjectCreationList OCL_StartingTeamEgg1_SEE ;MenOfTheWest
  CreateObject
    ObjectNames = MenPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
End

ObjectCreationList OCL_StartingTeamEgg2_SEE ;Elves
  CreateObject
    ObjectNames = ElvenPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
  CreateObject
    ObjectNames = ElvenHaldir ;NoldorWarriorHordeBattleLine
    Count = 1
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
  ; CreateObject
    ; ObjectNames				= IsengardUrukScoutHorde
    ; Count					= 2
    ; FadeIn					= Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation				= Yes
    ; MinDistanceAFormation			= 80.0
    ; MinDistanceBFormation			= 90.0
    ; MaxDistanceFormation			= 100.0
  ; End
  ; CreateObject
    ; ObjectNames				= UrukRaiderHorde
    ; Count					= 2
    ; FadeIn					= Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation				= Yes
    ; MinDistanceAFormation			= 80.0
    ; MinDistanceBFormation			= 90.0
    ; MaxDistanceFormation			= 100.0
  ; End
End
  
ObjectCreationList OCL_StartingTeamEgg3_SEE ;Dwarves
  CreateObject
    ObjectNames = DwarvenPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
  ; CreateObject
    ; ObjectNames = DwarvenWallGateSmall
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorMountainTroll
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorAttackTroll
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorArcherHorde
    ; Count = 5
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 250.0
    ; MinDistanceBFormation = 260.0
    ; MaxDistanceFormation = 270.0
  ; End
End
  
ObjectCreationList OCL_StartingTeamEgg4_SEE ;Isengard
  CreateObject
    ObjectNames = IsengardPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
  ; CreateObject
    ; ObjectNames = IsengardCastleWallGate
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorAttackTroll
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = GoblinCaveTroll
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = IsengardUrukCrossbowHorde
    ; Count = 4
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = IsengardArmory
    ; Count = 1
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
End
  
ObjectCreationList OCL_StartingTeamEgg5_SEE ;Mordor
  CreateObject
    ObjectNames = MordorPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
  ; CreateObject
    ; ObjectNames = MordorCastleWallGate
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorSauron
    ; Count = 1
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = MordorTavern
    ; Count = 1
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = IsengardArmory
    ; Count = 1
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
  ; CreateObject
    ; ObjectNames = IsengardUrukScoutHorde
    ; Count = 2
    ; FadeIn = Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation = Yes
    ; MinDistanceAFormation = 80.0
    ; MinDistanceBFormation = 90.0
    ; MaxDistanceFormation = 100.0
  ; End
End
  
ObjectCreationList OCL_StartingTeamEgg6_SEE ;Moria
  CreateObject
    ObjectNames			= WildPorter
    Count					= 3
    FadeIn					= Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation				= Yes
    MinDistanceAFormation			= 80.0
    MinDistanceBFormation			= 90.0
    MaxDistanceFormation			= 100.0
  End
  ; CreateObject
    ; ObjectNames			= GoblinCaveTroll
    ; Count					= 3
    ; FadeIn					= Yes
    ; FadeTime = 1000
    ; IgnoreCommandPointLimit = Yes		
    ; SpreadFormation				= Yes
    ; MinDistanceAFormation			= 80.0
    ; MinDistanceBFormation			= 90.0
    ; MaxDistanceFormation			= 100.0
  ; End
End

ObjectCreationList OCL_StartingTeamEgg7_SEE ;EvilMen
  CreateObject
    ObjectNames = EvilMenPorter
    Count = 3
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes		
    SpreadFormation = Yes
    MinDistanceAFormation = 80.0
    MinDistanceBFormation = 90.0
    MaxDistanceFormation = 100.0
  End
End
  
; ---------------------------------------------------------------------------------------
; Spawn DraftEgg for Draft Activation
ObjectCreationList OCL_SpawnDraftEgg_SEE
  CreateObject
    ObjectNames = DraftEgg_SEE
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 100
    Disposition = LIKE_EXISTING
  End
End

; ---------------------------------------------------------------------------------------
; Spawn Oathbreakers
ObjectCreationList OCL_GondorArmyofTheDeadEggSmall_SEE
  ; The egg is going to die (hatch) immediately, and play the FXLists, then wait, then do the Finish below
  CreateObject
    ObjectNames = GondorArmyofTheDeadSmallEgg_SEE
    UseJustBuiltFlag = Yes
    Count = 1
    Disposition = LIKE_EXISTING
    IgnoreCommandPointLimit = Yes
  End
End

ObjectCreationList SUPERWEAPON_SpawnOathbreakers_SEE
  CreateObject
    ObjectNames = RohanOathbreakerHordeSmall_SEE
    Count = 1
    FadeIn = Yes
    FadeTime = 1000
    IgnoreCommandPointLimit = Yes
  End
End


; ---------------------------------------------------------------------------------------
; Play the Theoden Cavalry animation which leads to a riderless horse 
; Also create a rider to sink into the ground (using animation DIED)
; Also make Gandalf White

ObjectCreationList OCL_TheodenCavalryDeathRunAwayD_GandalfWhite_SEE
  CreateObject
    ObjectNames = TheodenCavalryRiderless
    Offset = X:0.0 Y:0.0 Z:0.0
    Count = 1
    Disposition = INHERIT_VELOCITY LIKE_EXISTING
    InheritAttributesFromSource = Yes ; this riderless horse needs attributes (randomTextureID) from the producer
  End
  CreateObject
    ObjectNames = TheodenCavalryDeadRiderD
    Offset = X:0.0 Y:0.0 Z:0.0
    Count = 1
    Disposition = LIKE_EXISTING
  End
  CreateObject
    ObjectNames = GandalfTheWhiteEgg_SEE
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 5000
    Disposition = LIKE_EXISTING
  End
End

ObjectCreationList OCL_GandalfTheWhite_SEE
  CreateObject
    ObjectNames = GandalfTheWhiteEgg_SEE
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 5000
    Disposition = LIKE_EXISTING
  End
End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_ElvenFortressEagleSummonEgg_SEE
  CreateObject
    ObjectNames = ElvenFortressEagleSmallEgg_SEE
    UseJustBuiltFlag = Yes
    Count = 1
    IgnoreCommandPointLimit = Yes
    Disposition = LIKE_EXISTING
  End
End

ObjectCreationList OCL_SUPERWEAPONElvenFortressSpawnEagle_SEE
  CreateObject
    ObjectNames = ElvenFortressEagle
    Count = 1
    FadeIn = Yes
    FadeTime = 600
    IgnoreCommandPointLimit = Yes
  End
End

; ---------------------------------------------------------------------------------------
; Spawn New Treasure
ObjectCreationList OCL_SpawnLairTreasure_Huge_SEE
  CreateObject
    ObjectNames				= TreasureChest5000      ;5000 resources each
    Count					= 1
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
  CreateObject
    ObjectNames				= TreasureChest1      ;50-100 resources each
    Count					= 4
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
End
ObjectCreationList OCL_SpawnLairTreasure_Large_SEE
  CreateObject
    ObjectNames				= TreasureChest1000
    Count					= 1
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
  CreateObject
    ObjectNames				= TreasureChest1
    Count					= 4
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
End
ObjectCreationList OCL_SpawnLairTreasure_Medium_SEE
  CreateObject
    ObjectNames				= TreasureChest1
    Count					= 5
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
End
ObjectCreationList OCL_SpawnLairTreasure_Small_SEE
  CreateObject
    ObjectNames				= TreasureChest1
    Count					= 3
    SpreadFormation				= Yes
    MinDistanceAFormation			= 50.0
    MinDistanceBFormation			= 60.0
    MaxDistanceFormation			= 80.0
    FadeIn					= No
    IgnoreAllObjects			= Yes
    InvulnerableTime			= 3000	; This is the amount of time before we can pick this crate up.
  End
End

; ---------------------------------------------------------------------------------------
; king Brand Familiar
; ObjectCreationList KingBrandSummonFamiliar_SEE
  ; CreateObject
    ; ObjectNames				= KingBrandFamiliar_SEE
    ; Count					= 1
    ; FadeIn					= Yes
    ; FadeTime				= 2000
    ; IgnoreCommandPointLimit	= Yes
  ; End
; End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_HatchWallSorcery_SEE
  CreateObject
    ObjectNames			= MorgulSorceryWall_SEE
    UseJustBuiltFlag	= Yes
    JustBuiltDuration	= 2000						; ms, make sure this is on during the appear.
    Count					= 1
    FadeIn					= Yes
    FadeTime = 5000
    IgnoreCommandPointLimit = Yes		
    Offset					= X:0 Y:-10 Z:0
    Disposition			= RELATIVE_ANGLE
    DispositionAngle	= -90
    StartingBusyTime	= 2000
  End

End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_HatchWallGateSorcery_SEE
  CreateObject
    ObjectNames			= MorgulSorceryWall_SEE
    UseJustBuiltFlag	= Yes
    JustBuiltDuration	= 2000						; ms, make sure this is on during the appear.
    Count					= 1
    FadeIn					= Yes
    FadeTime = 5000
    IgnoreCommandPointLimit = Yes		
    Offset					= X:0 Y:-10 Z:0
    Disposition			= RELATIVE_ANGLE
    DispositionAngle	= -90
    StartingBusyTime	= 2000
  End

  CreateObject
    ObjectNames			= MorgulSorceryWall_SEE
    UseJustBuiltFlag	= Yes
    JustBuiltDuration	= 2000						; ms, make sure this is on during the appear.
    Count					= 1
    FadeIn					= Yes
    FadeTime = 5000
    IgnoreCommandPointLimit = Yes		
    Offset					= X:0 Y:-50 Z:0
    Disposition			= RELATIVE_ANGLE
    DispositionAngle	= -90
    StartingBusyTime	= 2000
  End

  CreateObject
    ObjectNames			= MorgulSorceryWall_SEE
    UseJustBuiltFlag	= Yes
    JustBuiltDuration	= 2000						; ms, make sure this is on during the appear.
    Count					= 1
    FadeIn					= Yes
    FadeTime = 5000
    IgnoreCommandPointLimit = Yes		
    Offset					= X:0 Y:30 Z:0
    Disposition			= RELATIVE_ANGLE
    DispositionAngle	= -90
    StartingBusyTime	= 2000
  End

End



;--------------------------------------------------------------------------------------- 
ObjectCreationList OCL_SpawnHillman1Egg
  CreateObject
    ObjectNames = Hillman1SummonEgg
    IgnoreCommandPointLimit = Yes
    Disposition = LIKE_EXISTING
  End
End

ObjectCreationList OCL_Hwaldar_SpawnHillmen_Level1
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSpearmenHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
    Offset					= X:-20 Y:20 Z:0
  End
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSpearmenHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
    Offset					= X:20 Y:-20 Z:0
  End
End


ObjectCreationList OCL_SpawnHillman2Egg
  CreateObject
    ObjectNames = Hillman2SummonEgg
    IgnoreCommandPointLimit = Yes
    Disposition = LIKE_EXISTING
  End
End

ObjectCreationList OCL_Hwaldar_SpawnHillmen_Level2
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSpearmenHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
    Offset					= X:-40 Y:-10 Z:0
  End
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSpearmenHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
    Offset					= X:-40 Y:40 Z:0
  End
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSpearmenHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
    Offset					= X:10 Y:-40 Z:0
  End
  CreateObject
    ObjectNames				= IsengardWildmanHorde_Summoned //RhudaurSlingerHorde_Summoned
    Count					= 1
    FadeIn					= Yes
    FadeTime				= 8000
    IgnoreCommandPointLimit	= Yes
    Disposition				= ABSOLUTE_ANGLE
    DispositionAngle		= 315
    UseJustBuiltFlag		= Yes
    StartingBusyTime		= 5000
  End
End

; ---------------------------------------------------------------------------------------
; Spawn CheatProvider for Cheat Activation
ObjectCreationList OCL_SpawnCheatProvider_SEE
  CreateObject
    ObjectNames = CheatProvider_SEE
    Count = 1
    Disposition = LIKE_EXISTING
  End
End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_AntiSarumanRingHero
	CreateObject
		ObjectNames			= IsengardSaruman_AntiRingHero
		Count				= 1
		SpreadFormation		= No
		IgnoreAllObjects	= Yes
	End
End
; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_ShelobWebActivator
  CreateObject
    ObjectNames = ShelobSpiderWebs1 ;ShelobWebActivator2
    Offset = X:0.0 Y:0.0 Z:1.0
    Count = 1
    FadeIn = Yes
    FadeTime = 100
    Disposition = LIKE_EXISTING
    ; DispositionIntensity  = 7
  End
End
