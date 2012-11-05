; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; FXList.INC for S.E.E....
; ------------------------------------------------------------------------------ 
; NOTE: These codes are ported from Sûlherokkh's coding in Beta 4.7!

; ----------------------------------------------
FXList FX_TestHitLocation
  Sound
    Name = SiegeTowerDie
  End
  ParticleSystem
    Name = SiegeTowerDeathDebrisInitial_N
    OrientToObject = Yes
    Offset = X:0.0 Y:0.0 Z:00.0
  End
  ParticleSystem
    Name = SiegeTowerDeathDustInitial_N
    OrientToObject = Yes
    Offset = X:0.0 Y:0.0 Z:00.0
  End
  ParticleSystem
    Name = SiegeTowerDeathDustInitial_N
    OrientToObject = Yes
    Offset = X:0.0 Y:0.0 Z:00.0
  End
  ViewShake 
    Type = STRONG
  End
  ParticleSystem
    Name = FWDragonExplosion
    OnlyIfOnLand = Yes
  End
  ParticleSystem
    Name = FWDragonExplosionGlow
    OnlyIfOnLand = Yes
  End
  ParticleSystem
    Name = CatapultExplosionSmoke
    OnlyIfOnLand = Yes
  End
  ParticleSystem
    Name = CatapultNewExplosionRing
    Offset = X:0.0 Y:0.0 Z:0.0
  End
  ParticleSystem
   Name = CatapultNewExplosionRingGlow
    Offset = X:0.0 Y:0.0 Z:0.0
  End
  ParticleSystem
    Name = CatapultProjectileChunks
    OnlyIfOnLand = Yes
  End
  ParticleSystem
    Name = CatapultProjNewExpFire
    OnlyIfOnLand = Yes
  End
  TerrainScorch
    Type = RANDOM
    Weather = NORMAL
    RandomRange = X:0 Y:0
    Radius = 15
  End
  TerrainScorch
    Type = RANDOM
    Weather = SNOWY
    RandomRange = X:0 Y:0
    Radius = 15
  End
  DynamicDecal	; A decal that belongs to nobody, but updates internally to fade and tint and such
		DecalName		= EXstomp
		Size			= 37
		Color			= R:255 G:255 B:255
		Offset			= X:0 Y:0
		OpacityStart		= 0
		OpacityFadeTimeOne	= 5
		OpacityPeak			= 255	
		OpacityPeakTime		= 250
		OpacityFadeTimeTwo	= 30000
		OpacityEnd			= 0
		StartingDelay	= 350
		Lifetime		= 34000
	End
End


;--------------------------------------------------
FXList FX_AnnounceGollumStoleRing_SEE
  EvaEvent 
    EvaEventOwner = LocalPlayerLosesRing
  End
  ParticleSystem
    Name = UpgradeBuildingDwarvenFortressPillar
    Offset = X:0.0 Y:0.0 Z:-50.0
  End
  ParticleSystem
    Name = UpgradeBuildingDwarvenFortressRipples
    Offset = X:0.0 Y:0.0 Z:-50.0
  End
  Sound
    Name = DwarfFortressUpgradeGlowEffectMS
  End
End

;--------------------------------------------------
FXList FX_AnnounceFortressAcquiredRing_SEE
  EvaEvent
  	EvaEventOwner = LocalPlayerGainsRing
  	EvaEventAlly = AlliedPlayerGainsRing
  	EvaEventEnemy = EnemyPlayerGainsRing
  End
  ParticleSystem
    Name = FortressOneRingFX_SEE
    Offset = X:0.0 Y:0.0 Z:0.0
  End
  Sound
    Name = FortressOneRingVoice_SEE
  End
End

;--------------------------------------------------
FXList FX_GollumAcquiredRing_SEE
  ParticleSystem
    Name = FrodoRingSpark
    AttachToObject = Yes
    AttachToBone = B_HANDL
  End
  ParticleSystem
    Name = RingWave
    AttachToObject = Yes
    Offset = X:0.0 Y:0.0 Z:5.0
  End
  ; Sound				;too much delay relative to animation
    ; Name = RingOn
  ; End
End

;-------------------------------------
FXList FX_GollumConvertedToPlayer_SEE
  Sound
    Name = GenericRespawn1
  End
  Sound
    Name = GollumVoiceConverted_SEE
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ; ParticleSystem
    ; Name = ResurrectionVortex
    ; Offset = X:0.0 Y:0.0 Z:5.0
    ; OrientToObject = Yes
  ; End
  ; ParticleSystem
    ; Name = ResurrectionWave
    ; Offset = X:0.0 Y:0.0 Z:5.0
    ; OrientToObject = Yes
  ; End
End

;--------------------------------------------------
;-------------- Used for Giant Bird Droppings -
FXList FX_HumanBodyGroundHit_SEE
	Sound
		Name = BodyFallOrc
	End
	ParticleSystem
		Name =  TrollBashDust ;TrollClubHitDust ;HumanBodyImpactDustFX_SEE ;TrollRockBounce ;TrollSplatDust
		Offset = X:0.0 Y:0.0 Z:1.0
    ; OrientToObject = Yes
    OnlyIfOnLand = Yes
	End
  ParticleSystem
		Name = ProjectileSplash01
		Offset = X:0.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
	; ParticleSystem
		; Name = ProjectileSplash02
		; Offset = X:0.0 Y:0.0 Z:1.0
		; OnlyIfOnWater = Yes
	; End
	; ParticleSystem
		; Name = ProjectileSplash03
		; Offset = X:0.0 Y:0.0 Z:1.0
		; OnlyIfOnWater = Yes
	; End
  ViewShake 
    Type = SUBTLE ;NONE
  End
End
FXList FX_HorseBodyGroundHit_SEE
	; Sound
		; Name = ImpactEntRock ;TrollBodyfall ;BodyFallOrc
	; End
	ParticleSystem
		Name =  TrebuchetImpactDust ;HorseBodyImpactDustFX_SEE ;TrollClubHitDust
    Offset = X:0.0 Y:0.0 Z:5.0
    ; OrientToObject = Yes
    OnlyIfOnLand = Yes
	End
  ParticleSystem
		Name = ProjectileSplash01
		Offset = X:0.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
	ParticleSystem
		Name = ProjectileSplash02
		Offset = X:0.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
	ParticleSystem
		Name = ProjectileSplash03
		Offset = X:0.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
  ViewShake 
    Type = NORMAL ;SUBTLE
  End
End

;---------------------- Berserker Enraged (damaged)
FXList FX_BerserkerInitiateRage_SEE
  Sound
    Name = BerserkerSuicideYell
  End
End

;-------------------------;-------------------------
;------------------Wizard Tower Clouds-------
FXList FX_WizardTowerCloudsIG_SEE

  
  ParticleSystem
    Name = WizardTowerStormClouds
    Offset = X:0 Y:0 Z:250
  End
  
   ParticleSystem
    Name = WizardTowerStormFlashes
    Offset = X:0 Y:0 Z:260
  End

	;Sound
	;	Name = WizardTowerLightningStrikeRumble
	;End
End


;---------------------- Eowyn Disguise and Mount
FXList FX_EowynInitiateShieldMaiden_SEE
  Sound
    Name = GenericSpell
  End
  Sound
    Name = EowynVoiceDisguiseOff_SEE
  End
End

FXList FX_EowynDisguiseToggle_SEE
  Sound
    ExcludedSourceModelConditions = DISGUISED
    Name = EowynVoiceDisguiseOn
  End
  Sound
    RequiredSourceModelConditions = DISGUISED
    Name = EowynVoiceDisguiseOff_SEE
  End
End

FXList FX_EowynMountToggle_SEE
  Sound
    ; ExcludedSourceModelConditions = MOUNTED
    Name = HorseWhinnyForMountButton
  End
End

;---------------------- Boromir Last Stand
FXList FX_BoromirLastStand_SEE
  Sound
    Name = BoromirVoiceAttackRampage_SEE
  End
  ParticleSystem
    Name = BoromirLastStand_SEE
    Offset = X:0.0 Y:0.0 Z:15.0
    AttachToObject = Yes
  End
  ParticleSystem
    Name = BoromirLastStandWave_SEE
    Offset = X:0.0 Y:0.0 Z:15.0
    AttachToObject = Yes
  End
End
FXList FX_BoromirSwordHitRampage_SEE
  Sound
    Name = ImpactSword02
  End
  Sound
    Name = BoromirVoiceAttackRampage_SEE
  End
  ParticleSystem
    Name = GondorSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
End
FXList FX_BoromirInitialSpawn_SEE
  Sound
	Name = GenericRespawn1
  End
  Sound
	Name = BoromirVoiceSalute_SEE
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End


;------------------------------ Faramir War Speech
FXList FX_FaramirWarSpeechFX_SEE
	Sound
		Name = TheodenGloriousChargeEffect
	End

  TintDrawable
	Color				= R:255 G:249 B:183	;R:255 G:255 B:255
	PreColorTime		= 100				; these numbers must add up to the (30 * number of seconds) of gloriious charge
	PostColorTime		= 100
	SustainedColorTime	= 400
	Frequency			= 0
	Amplitude			= 0
  End
 
  ParticleSystem
   Name = WSglowHorseBright
   AttachToObject = Yes
   AttachToBone = BAT_HHEAD
  End
  
  ParticleSystem
	Name = WSglowHorseRearBright
	AttachToObject = Yes
	AttachToBone = B_HHIPL
  End
  
  ParticleSystem
	Name = WSglowBright
	AttachToObject = Yes
	AttachToBone = BAT_SPINE2
  End
End


;------------------------------ Golden Hall Draft
FXList FX_Draft_SEE
	ParticleSystem
		Name = Draft
		Offset = X:0.0 Y:0.0 Z:10.0
		OrientToObject = Yes		 
	End
	Sound
		Name = PeasantVoiceDraftUpgrade
	End
	Sound
		Name = SpellDraft
	End
	; Sound
		; Name = GenericSpell
	; End
End

;------------------------------ Draw Bows once built Sound
FXList FX_DrawBowRohirrim_SEE
	Sound
		Name = RohirrimVoiceModeBow
	End
End
FXList FX_SwitchFirebombs_SEE
	Sound
		Name = CorsairVoiceWeaponSwitchFirebombs
	End
End



;------------------------------ Gandalf Shield Bubble Tests

FXList FX_GandalfWizardDefence_SEE
  ParticleSystem
    Name = TelekineticAttack
    OrientToObject = Yes
  End
  ParticleSystem
    Name = TelekineticSparks
    OrientToObject = Yes
  End
  ParticleSystem
    Name = TelekineticGlow
    OrientToObject = Yes
  End
  ParticleSystem
    Name = TelekineticAttack1
    OrientToObject = Yes
  End
  ParticleSystem
    Name = TelekineticShock
    OrientToObject = Yes
  End
  CameraShakerVolume
    Radius = 500
    Duration_Seconds = 1.5
    Amplitude_Degrees = 0.5
  End
  Sound
    Name = GandalfBlastWeapon
  End
End



;--------------------------- Men Library Upgrade -----------------------------
FXList FXMenLibraryUpgrade_SEE //Not used in SEE!
	ParticleSystem
		Name = LevelUpRing
	End
	ParticleSystem
		Name = LevelUpShaftsMotes
	End
	Sound
		Name = GondorLevelUp1
	End
	EvaEvent
		EvaEventOwner = LibraryUpgraded_SEE
	End
End


;--------------------------- Galadriel's Death EVA -----------------------------
FXList FX_GaladrielInitialSpawn_SEE
  Sound
  	Name = GenericRespawn1
  End
  Sound
  	Name = GaladrielVoiceSalute_SEE
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

FXList FX_GaladrielDieToRespawn_SEE
  ParticleSystem
    Name = GandalfSwordHitSpark
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = GandalfSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  EvaEvent
  	EvaEventOwner = GaladrielDie
  	EvaEventAlly = None
  End
End


;--------------------------- Nazgûl EVA's -----------------------------
FXList FX_NazgulFellbeastMountedTemplateSpawn_SEE
  Sound
  	Name = FellBeastVoxCreated
  End
End

FXList FX_NazgulOnFootTemplateSpawn_SEE
  Sound
  	Name = GenericRespawn1
  End
  EvaEvent
  	EvaEventOwner = NazgulCreated 
  End
  Sound
  	Name = NazgulVoxCreated
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

FXList FX_NazgulMountedInitialSpawn_SEE
  Sound
  	Name = GenericRespawn1
  End
  EvaEvent
  	EvaEventOwner = NazgulCreated 
  End
  ; EvaEvent
  	; EvaEventOwner = NazgulFlyingCreated
  ; End
  Sound
  	Name = NazgulVoxCreated
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

FXList FX_NazgulRespawn_SEE
  Sound
	Name = GenericRespawn1
  End
  EvaEvent
	EvaEventOwner = NazgulCreated
  End
  Sound
	Name = NazgulVoxCreated
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

;--------------------------- Uruk EVA's -----------------------------
FXList FX_UrukHeroInitialSpawn_SEE
  Sound
    Name = GenericRespawn1
  End
  EvaEvent
    EvaEventOwner = UrukHeroCreated_SEE
  End
  ParticleSystem
    Name = HordeResEvilCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

FXList FX_UrukHeroDieToRespawn_SEE
  ParticleSystem
    Name = GandalfSwordHitSpark
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = GandalfSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  EvaEvent
    EvaEventOwner = UrukHeroDie_SEE
  End
End

FXList FX_UrukHeroRespawn_SEE
  Sound
    Name = GenericRespawn1
  End
  EvaEvent
    EvaEventOwner = UrukHeroCreated_SEE
  End
  ParticleSystem
    Name = HordeResEvilCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = HordeResEvilWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

; ----------------------------------------------
FXList FX_InfiniteGenericLeadership_SEE
  ; PlayEvenIfShrouded = Yes
  ; BuffNugget
  	; BuffType = Buff
  	; BuffInfantryTemplate = LargGroupBonusBuff_SEE
  	; BuffCavalryTemplate = LargGroupBonusBuff_SEE
  	; BuffTrollTemplate = LargGroupBonusBuff_SEE
    ; BuffOrcTemplate = LargGroupBonusBuff_SEE
  	; IsComplexBuff = No
  	; BuffLifeTime = 90000000
    ; Extrusion = 0.66
    ; Color = R:75 G:50 B:0
  ; End
  ParticleSystem
    Name = EvilLeadership_SEE ;SpellWarChantReceive ;
    Offset = X:0.0 Y:0.0 Z:3.0
  End
End
; ----------------------------------------------
FXList FX_GenericBuffStop_SEE
  BuffNugget
  	BuffType = Buff
  	BuffLifeTime = 0
  End
End

;---------------------------- BfME2 patch 1.05 FXLists --------------------------------------

FXList FX_WargHowlBuff_SEE
  BuffNugget
	BuffType = Buff
  	BuffInfantryTemplate = LeadershipBuffInfantryLvl1 ; ;PositiveAtkBuff
  	BuffCavalryTemplate = LeadershipBuffCavalryLvl1 ; ;PositiveAtkBuff
  	BuffTrollTemplate = LeadershipBuffTrollLvl1 ; ;PositiveAtkBuff
    BuffOrcTemplate = LeadershipBuffOrcLvl1 ; ;PositiveAtkBuff
  	IsComplexBuff = No
  	BuffLifeTime = 45000
  End
End

; ; ----------------------------------------------
FXList FX_GenericArmorLeadership
  BuffNugget
  	BuffType = Healing ; ;BuffType = Buff
  	BuffInfantryTemplate = PositiveAtkBuff
  	BuffCavalryTemplate = PositiveAtkBuff
  	BuffTrollTemplate = PositiveAtkBuff
    BuffOrcTemplate = PositiveAtkBuff
  	IsComplexBuff = No
  	BuffLifeTime = 4000 ;3000
  End
End

; ; ----------------------------------------------
FXList FX_GenericDamageLeadership
  BuffNugget
  	BuffType = LeaderShip
  	BuffInfantryTemplate = LeadershipBuffInfantryLvl1
  	BuffCavalryTemplate = LeadershipBuffCavalryLvl1
  	BuffTrollTemplate = LeadershipBuffTrollLvl1
    BuffOrcTemplate = LeadershipBuffOrcLvl1
  	IsComplexBuff = No
  	BuffLifeTime = 3000
  End
End

; ; ----------------------------------------------
FXList FX_GenericDamageLeadership60
  PlayEvenIfShrouded = Yes
  BuffNugget
  	BuffType = LeaderShip
  	BuffInfantryTemplate = LeadershipBuffInfantryLvl1
  	BuffCavalryTemplate = LeadershipBuffCavalryLvl1
  	BuffTrollTemplate = LeadershipBuffTrollLvl1
    BuffOrcTemplate = LeadershipBuffOrcLvl1
    IsComplexBuff = No
    BuffLifeTime = 61000
  End
End

; ; -------------------------------
FXList FX_TreeBeardAuraFX
  ParticleSystem
    Name = TreeBeardAuraShafts
    AttachToObject = Yes
  End
End

; ; -------------------------------
FXList FX_MollockAuraFX
  ParticleSystem
    Name = MollockAuraShafts
    AttachToObject = Yes
  End
End


; ; ----------------------------------------------
FXList FX_BloodRage10_SEE
  PlayEvenIfShrouded = Yes
  BuffNugget
  	BuffType = LeaderShip
  	BuffInfantryTemplate = EvilHeroModeBuff_SEE
  	BuffCavalryTemplate = EvilHeroModeBuff_SEE
  	BuffTrollTemplate = EvilHeroModeBuff_SEE
    BuffOrcTemplate = EvilHeroModeBuff_SEE
  	IsComplexBuff = No
  	BuffLifeTime = 10000
  End
  Sound
    Name = LurtzCrippleEffect
  End
End

; ; ----------------------------------------------
FXList FX_BloodRage15_SEE
  PlayEvenIfShrouded = Yes
  BuffNugget
  	BuffType = LeaderShip
  	BuffInfantryTemplate = EvilHeroModeBuff_SEE
  	BuffCavalryTemplate = EvilHeroModeBuff_SEE
  	BuffTrollTemplate = EvilHeroModeBuff_SEE
    BuffOrcTemplate = EvilHeroModeBuff_SEE
  	IsComplexBuff = No
  	BuffLifeTime = 15000
  End
  Sound
    Name = LurtzCrippleEffect
  End
End

; ; ----------------------------------------------
FXList FX_DevastationStunEffect
  BuffNugget
  	BuffType = Cursed
  	BuffThingTemplate = CripplingStrikeBuff
  	BuffInfantryTemplate = CripplingStrikeBuff
  	BuffCavalryTemplate = CripplingStrikeBuff
  	BuffTrollTemplate = CripplingStrikeBuff
    BuffOrcTemplate = CripplingStrikeBuff
  	IsComplexBuff = No
  	BuffLifeTime = 5500
  End
End

; ; ----------------------------------------------
FXList FX_AggressiveInf_SEE
  PlayEvenIfShrouded = Yes
  BuffNugget
  	BuffType = GloriousCharge
  	BuffInfantryTemplate = EvilHeroModeBuff_SEE
  	BuffCavalryTemplate = EvilHeroModeBuff_SEE
  	BuffTrollTemplate = EvilHeroModeBuff_SEE
    BuffOrcTemplate = EvilHeroModeBuff_SEE
  	IsComplexBuff = No
  	BuffLifeTime = 90000000
    Extrusion = 0.66
    Color = R:75 G:50 B:0
  End
  ; Sound
    ; Name = LurtzCrippleEffect
  ; End
End
; ----------------------------------------------
FXList FX_GloriousChargeFXStop_SEE
  BuffNugget
	BuffType = GloriousCharge
	BuffLifeTime = 0
  End
End

FXList FX_MahudHorn_SEE
  ParticleSystem
    Name = BoromirHorn
    Offset = X:40.0 Y:0.0 Z:10.0
  End

;  Sound
;       Name = FireStartEnt
;  End
End

; ----------------------------------------------

FXList FX_BarbedArrowCrippleStrike_SEE
  BuffNugget
  	BuffType = Dominate		; Can't be heal, because buffs replace any other buffs of the same time, and a hero is likely healed while crippled.
  	BuffInfantryTemplate = CripplingStrikeBuff
  	BuffCavalryTemplate = CripplingStrikeBuff
  	BuffTrollTemplate = CripplingStrikeBuff
    BuffOrcTemplate = CripplingStrikeBuff
  	IsComplexBuff = No
  	BuffLifeTime = 10000
  End
  ; Sound
    ; Name = LurtzCrippleEffect
  ; End
  Sound
    Name = LurtzCrippleArrowImpact
  End  
End

;-------------------------------------
FXList FX_KingBrandInitialSpawn_SEE
  Sound
	Name = GenericRespawn1
  End
  Sound
  	Name = CptDaleVoiceSalute
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End
;-------------------------------------

FXList FX_KingBrandRespawn_SEE
  Sound
	Name = GenericRespawn1
  End
  Sound
  	Name = CptDaleVoiceRespawn
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

;-------------------------------------
FXList FX_KingBrandDieToRespawn_SEE
  ParticleSystem
    Name = GandalfSwordHitSpark
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = GandalfSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  Sound
  	Name = CptDaleVoiceDie
  End
End

; ----------------------------------------------

FXList FX_BilboDieToRespawn_SEE
  ParticleSystem
    Name = GandalfSwordHitSpark
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = GandalfSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ; Sound
    ; Name = BilboVoiceDie
  ; End
End

;-------------------------------------

FXList FX_BilboInitialSpawn_SEE
  Sound
    Name = GenericRespawn1
  End
  Sound
    Name = BilboVoiceSalute
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

;-------------------------------------

FXList FX_BilboRespawn_SEE
  Sound
    Name = GenericRespawn1
  End
  Sound
    Name = BilboVoiceRespawn
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

;############## E - Stuff #############
;---------------------------------------------------
FXList EvilLevelUpFX_SEE
  ParticleSystem
   Name = EvilLevelUpRing_SEE
  End
  ParticleSystem
   Name = EvilLevelUpShaftsMotes_SEE
  End
  Sound
     Name = HeroGenericLevelUp
  End
End

;---------------------------------------------------
FXList FX_EvilFortressUpgrade_SEE
  ParticleSystem
    Name = UpgradeBuildingEvilFortressPillar_SEE
    Offset = X:0.0 Y:0.0 Z:5.0
  End
  ParticleSystem
    Name = UpgradeBuildingEvilFortressRipples_SEE
    Offset = X:0.0 Y:0.0 Z:5.0
  End
  Sound
    Name = DwarfFortressUpgradeGlowEffectMS
  End
End

; ----------------------------------------------
FXList FX_AngmarHwaldarInitialSpawn
  Sound
	Name = GenericRespawn1
  End
  Sound
	Name = HwaldarVoiceSalute
  End
  ParticleSystem
    Name = ResurrectionCenter
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionLightShaft
    Offset = X:0.0 Y:0.0 Z:0.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionVortex
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = ResurrectionWave
    Offset = X:0.0 Y:0.0 Z:5.0
    OrientToObject = Yes
  End
End

FXList FX_AngmarHwaldarDieToRespawn
  ParticleSystem
    Name = GandalfSwordHitSpark
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  ParticleSystem
    Name = GandalfSwordHitFlash
    Offset = X:12.0 Y:0.0 Z:8.0
    OrientToObject = Yes
  End
  EvaEvent
	EvaEventOwner = AngmarHwaldirDie
	EvaEventAlly = None
  End
End
