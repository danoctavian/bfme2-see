///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Isengard//
///////////


;========================================== Isengard =====================================

	;----------- BEGIN CROWD RESPONSE -------------

AudioEvent UrukGroupSmall_AttackCharge
  Sounds = EUUruk_attcG1a EUUruk_attcG1b EUUruk_attcG1c EUUruk_attcG1d EUUruk_attcG1e EUUruk_attcG1f
  Volume = #ADD( CROWD_RESPONSE_VOLUME 30 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 30 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent OrcukGroupMedium_Murmur ; "Orcuk" = Orcs + Uruks
  Sounds = EUOrcuk_murmG2a EUOrcuk_murmG2b EUOrcuk_murmG2c EUOrcuk_murmG2d EUOrcuk_murmG2e EUOrcuk_murmG2f EUOrcuk_murmG2g EUOrcuk_murmG2h EUOrcuk_murmG2i
  Sounds = EUOrcuk_murmG2j EUOrcuk_murmG2k EUOrcuk_murmG2l EUOrcuk_murmG2m EUOrcuk_murmG2n EUOrcuk_murmG2o EUOrcuk_murmG2p EUOrcuk_murmG2q EUOrcuk_murmG2r
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent UrukMoveYellSingles
  Sounds = EUUruk_movYela EUUruk_movYelb EUUruk_movYelc EUUruk_movYeld EUUruk_movYele EUUruk_movYelf
  Sounds = EUUruk_movYelg EUUruk_movYelh EUUruk_movYeli EUUruk_movYelj EUUruk_movYelk EUUruk_movYell
  Volume = #ADD( CROWD_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 10 )
  PlayPercent = 40
  PitchShift = -1 1
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent UrukMoveYellSingles_Set1ForMediumGroup
  Sounds = EUUruk_movYela EUUruk_movYelb EUUruk_movYelc EUUruk_movYeld EUUruk_movYele EUUruk_movYelf
  Sounds = EUUruk_movYelg EUUruk_movYelh EUUruk_movYeli EUUruk_movYelj EUUruk_movYelk EUUruk_movYell
  Volume = #ADD( CROWD_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 10 )
  PlayPercent = 40
  PitchShift = -1 1
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent UrukMoveYellSingles_Set2ForMediumGroup
  Sounds = EUOrc__movYela EUOrc__movYelb EUOrc__movYelc EUOrc__movYeld EUOrc__movYele EUOrc__movYelf EUOrc__movYelg EUOrc__movYelh EUOrc__movYeli EUOrc__movYelj
  Volume = #ADD( CROWD_RESPONSE_VOLUME 15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 15 )
  PlayPercent = 25
  PitchShift = -5 -10
  Delay = 1000 1750
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent UrukGroupSmall_Select
  Sounds = EUUruk_seleG1a EUUruk_seleG1b EUUruk_seleG1c EUUruk_seleG1d EUUruk_seleG1e EUUruk_seleG1f EUUruk_seleG1g EUUruk_seleG1h EUUruk_seleG1i
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound UrukGroupMedium_AttackChargeMS
  Subsounds = UrukGroupSmall_AttackCharge OrcukGroupMedium_Murmur
End

Multisound UrukGroupMedium_MoveYellsMS
  Subsounds = UrukMoveYellSingles_Set1ForMediumGroup UrukMoveYellSingles_Set2ForMediumGroup OrcukGroupMedium_Murmur
End

Multisound UrukGroupMedium_SelectMS
  Subsounds = UrukGroupSmall_Select OrcukGroupMedium_Murmur
End

	;----------- END CROWD RESPONSE -------------

	;--------------------- IsengardBuilder ----------------

AudioEvent IsengardBuilderCartRattlesLoop
  Sounds = MUPorte_rattlea MUPorte_rattleb MUPorte_rattlee MUPorte_rattleh MUPorte_rattlei MUPorte_rattlej MUPorte_rattlek MUPorte_rattlel 
  Limit = 3
  Control = loop
  Delay = 2000 5000
  PerFilePitchShift = -5 5
  PerFileVolumeShift = -10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardBuilderFoleySelect
  Sounds = MUPorte_folsela MUPorte_folselb MUPorte_folselc
  Limit = 1
  PitchShift = -10 10
  Volume = 75
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardBuilderMoveLoop
  Sounds = MUPorte_moveL2a MUPorte_moveL2b MUPorte_moveL2e MUPorte_moveL2h MUPorte_moveL2i
  Sounds = MUPorte_moveL2j MUPorte_moveL2k MUPorte_moveL2l MUPorte_moveL2m MUPorte_moveL2n MUPorte_moveL2o
  ;Sounds = MUPorte_moveL2c MUPorte_moveL2d MUPorte_moveL2f MUPorte_moveL2g (these weren't added because they sound too similar)
  Limit = 3
  Control = loop fade_on_start fade_on_kill
  PitchShift = 0 10
  Volume = 48
  VolumeShift = -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardBuilderMoveStart
  Sounds = MUPorte_movstaa MUPorte_movstab MUPorte_movstac
  Limit = 3
  PitchShift = -15 15
  Volume = 75
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound IsengardBuilderMoveLoopMS
  Subsounds = IsengardBuilderMoveLoop IsengardBuilderCartRattlesLoop
End


;----- ISENGARD BUILDING SELECTS ------

AudioEvent IsengardFortressSelect
  Sounds = EBIsFor_selecta
  Volume = 115
  MinVolume = 105
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardCitadelSelect
  Sounds = EBIsCit_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardArmorySelect
  Sounds = EBIsArm_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardKeepSelect
  Sounds = EBIsKee_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardMineLauncherExpansionSelect
  Sounds = EUExplo_voise2a
  Volume = 80
  MinVolume = 70
  PitchShift = -25 -25
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardSiegeWorksSelect
  Sounds = EBIsSie_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardUrukPitSelect
  Sounds = EBIsUru_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardWargPitSelect
  Sounds = EBIsWar_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent IsengardWargSentrySelect
  Sounds = EBIsWaS_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End


;---------------------------------- Isengard Uruk Pit -------------------------------

AudioEvent IsengardUrukPitLift   ; animation IBURKPIT_SPNA-fr134
  Sounds = EBIsUru_anlifta EBIsUru_anliftb  
  Volume = 45
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  PlayPercent = 30
  MinRange = 250
  MaxRange = 550
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardUrukPitThrow		; animation IBURKPIT_SPNA-fr196
  Sounds = EBIsUru_anthroa EBIsUru_anthrob 
  Volume = 45
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  PlayPercent = 30
  MinRange = 250
  MaxRange = 550 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardUrukPitBodyfall  ; animation IBURKPIT_SPNA-fr211
  Sounds = EBIsUru_anfalla EBIsUru_anfallb EBIsUru_anfallc EBIsUru_anfalld EBIsUru_anfalle 
  Volume = 50
  VolumeShift = -20
  Limit = 3
  Delay = 150 150
  Priority = lowest
  MinRange = 250
  MaxRange = 550 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent IsengardUrukPitSlide   ; animation IBURKPIT_SPNA-fr245
  Sounds = EBIsUru_anslida EBIsUru_anslidb EBIsUru_anslidc  
  Volume = 50
  VolumeShift = -20
  Limit = 3
  Delay = 150 150
  Priority = lowest
  MinRange = 250
  MaxRange = 550 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;---------------------------------------- Isengard Armory -------------------------------

AudioEvent IsengardArmoryGrind   ; animation IBARMORY_IDLA-fr022, 086, 157, 226
  Sounds = EBIsArm_grinda EBIsArm_grindb EBIsArm_grindc EBIsArm_grindd EBIsArm_grinde EBIsArm_grindf EBIsArm_grindg EBIsArm_grindh EBIsArm_grindi EBIsArm_grindj EBIsArm_grindk 
  Volume = 50
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  PlayPercent = 50
  MinRange = 250
  MaxRange = 550 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardArmoryAmbientLoop
  Sounds = EBIsArm_wheel2a EBIsArm_wheel2b EBIsArm_wheel2c EBIsArm_wheel2d 
  Attack = EBIsArm_wheel1a
  Decay = EBIsArm_wheel3a
  Control = loop sequential
  Volume = 60
  Limit = 3
  Priority = lowest
  MinRange = 300
  MaxRange = 700 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-------------------------------- Mordor Furnace -------------------------------

AudioEvent MordorFurnaceLava
  Sounds = EBFurna_lavaa EBFurna_lavab EBFurna_lavac
  Volume = 45
  VolumeShift = -10
  MinRange = 175
  MaxRange = 500
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorFurnaceBricksDrop
  Sounds = EBFurna_brick1a EBFurna_brick1b EBFurna_brick1c
  Volume = 45
  VolumeShift = -10
  MinRange = 175
  MaxRange = 500
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent IsengardLightPointsUp
  ;Sounds       =  ; MICAL: put something here
  Priority     = high
  Type         = ui player
  SubmixSlider = SoundFX
End


;---------------------- BALLISTA ------------------

AudioEvent BallistaCrank
  Sounds = EUBalli_crank1a EUBalli_crank1b EUBalli_crank1c
  Volume = 95
  PitchShift = 0 10
  VolumeShift = -10
  Limit = 3
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BallistaCrewVoxWave
  Sounds = EUBalli_voxwava EUBalli_voxwavb EUBalli_voxwavc EUBalli_voxwavd
  Volume = 85
  PitchShift = -4 4
  VolumeShift = -10
  Limit = 3
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BallistaLock
  Sounds = EUBalli_lock1_a
  Volume = 90
  PitchShift = -10 10
  VolumeShift = -10
  Limit = 3
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent IsengardWallBallistaMoveStartForBombard
  Sounds = EUCatap_movesta EUCatap_movestb EUCatap_movestc EUCatap_movestd
  Priority = low
  Limit = 3
  PitchShift = -20 -10
  Delay = 500 500
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BallistaMoveStart
  Sounds = EUCatap_movesta EUCatap_movestb EUCatap_movestc EUCatap_movestd
  Priority = low
  Limit = 3
  PitchShift = -20 -10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BallistaProjectileFlying
  Sounds = EUBalli_whoos1a EUBalli_whoos1b EUBalli_whoos1c
  Volume = 110
  Delay = 100 300
  PitchShift = -10 10
  VolumeShift = -10
  Limit = 2
  MinRange = 200
  MaxRange = 1000
  Priority = normal
  Type = world everyone player
  SubmixSlider = SoundFX
End

AudioEvent BallistaFireWeapon
  Sounds = EUBalli_fire1_c ;EUBalli_fire1_a EUBalli_fire1_b audio files have been removed from the game
  Volume = 85
  VolumeShift = -5
  PitchShift = -10 10
  LowPassCutoff = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;------------------------- IsengardExplosiveMine -----------------------------------------

AudioEvent ExplosiveMineDrop
  Sounds = EUMine_drop1_a EUMine_drop1_b
  Priority = high
  Volume = 120
  MinVolume = 90
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

AudioEvent ExplosiveMineEffort1
  Sounds = EUMine_effor1a
  Priority = normal
  Volume = 90
  MinVolume = 80
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

AudioEvent ExplosiveMineEffort2
  Sounds = EUMine_effor1b
  Priority = normal
  Volume = 90
  MinVolume = 80
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

;------------------------ IsengardBerserker IsengardBeserker -----------------------------

AudioEvent BerserkerSuicideYell
  Sounds = EUBerse_yell1_a
  Priority = high
  Volume = 110
  MinRange = 400
  MinVolume = 90
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

AudioEvent BerserkerSnarl
  Sounds = EUBerse_snarl1a EUBerse_snarl1b EUBerse_snarl1c
  Priority = normal
  Volume = 90
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SwordIntoGround
  Sounds = EUBerse_sword1a
  Priority = low
  Volume = 85
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent TorchIgnite
  Sounds = EUBerse_Torch1a
  Priority = high
  Volume = 90
  MinVolume = 80
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

AudioEvent TorchIgniteFalseStart
  Sounds = EUBerse_Torch1b
  Priority = high
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world everyone
  SubmixSlider = SoundFX
End

AudioEvent TorchSizzleLoop
  Sounds = EUBerse_Torch2a EUBerse_Torch2b EUBerse_Torch2c
  Control = loop fade_on_start fade_on_kill
  Priority = lowest
  Volume = 35
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


; UPGRADES ISENGARD FORTRES

AudioEvent UpgradeIsengardFortressBurningForges
  Sounds = EBIsFor_Burnina
  Volume = 125
  MinVolume = 100
  PitchShift = 10 10
  Delay = 4500 4500
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeIsengardFortressBurningForgesStart
  Sounds = EBIsFor_Burnina
  Volume = 125
  MinVolume = 100
  PitchShift = -75 -75
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

Multisound UpgradeIsengardFortressBurningForgesMS
  Subsounds = UpgradeIsengardFortressBurningForges UpgradeIsengardFortressBurningForgesStart
End

AudioEvent UpgradeIsengardFortressIronPlate
  Sounds = EBIsFor_ironpla
  Volume = 100
  MinVolume = 80
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeIsengardFortressMurderOfCrows
  Sounds = ESMurde_ofCrowa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeIsengardFortressOrcFireMunitions
  Sounds = EBGoFor_fireara
  Volume = 105
  MinVolume = 95
  PitchShift = -5 5
  Delay = 2500 2500
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeIsengardFortressWizardTowerStart
  Sounds = EBIsFor_Wizarda
  Volume = 110
  MinVolume = 90
  PitchShift = -50 -50
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeIsengardFortressWizardTower
  Sounds = EBIsFor_Wizarda
  Volume = 115
  MinVolume = 95
  PitchShift = 10 10
  Limit = 3
  Priority = high
  Type = world shrouded player
  SubmixSlider = SoundFX
End




AudioEvent WorldIsengardFortress
  Sounds = EBIsCit_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldIsengardArmory
  Sounds = EBIsArm_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldIsengardFurnace
  Sounds = EBMoFur_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End
