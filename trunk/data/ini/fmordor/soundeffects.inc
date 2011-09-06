///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Mordor//
/////////

;========================================== Mordor =====================================

	;----------- BEGIN CROWD RESPONSE -------------

AudioEvent OrcGroupSmall_AttackCharge
  Sounds = EUOrc__attcG1a EUOrc__attcG1b EUOrc__attcG1c EUOrc__attcG1d EUOrc__attcG1e EUOrc__attcG1f EUOrc__attcG1g EUOrc__attcG1h
  Volume = #ADD( CROWD_RESPONSE_VOLUME 25 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 25 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent OrcMoveYellSingles
  Sounds = EUOrc__movYela EUOrc__movYelb EUOrc__movYelc EUOrc__movYeld EUOrc__movYele EUOrc__movYelf EUOrc__movYelg EUOrc__movYelh EUOrc__movYeli EUOrc__movYelj
  Volume = #ADD( CROWD_RESPONSE_VOLUME 15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 15 )
  PlayPercent = 100
  PitchShift = 1 3
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent OrcMoveYellSingles_Set1ForMediumGroup
  Sounds = EUOrc__movYela EUOrc__movYelb EUOrc__movYelc EUOrc__movYeld EUOrc__movYele EUOrc__movYelf EUOrc__movYelg EUOrc__movYelh EUOrc__movYeli EUOrc__movYelj
  Volume = #ADD( CROWD_RESPONSE_VOLUME 5 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 5 )
  PlayPercent = 100
  PitchShift = 1 3
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent OrcMoveYellSingles_Set2ForMediumGroup
  Sounds = EUUruk_movYela EUUruk_movYelb EUUruk_movYelc EUUruk_movYeld EUUruk_movYele EUUruk_movYelf
  Sounds = EUUruk_movYelg EUUruk_movYelh EUUruk_movYeli EUUruk_movYelj EUUruk_movYelk EUUruk_movYell
  Volume = #ADD( CROWD_RESPONSE_VOLUME 15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 15 )
  PlayPercent = 100
  PitchShift = 25 50
  Delay = 1000 1750
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent OrcGroupSmall_Select
  Sounds = EUOrc__seleG1a EUOrc__seleG1b EUOrc__seleG1c EUOrc__seleG1d EUOrc__seleG1e EUOrc__seleG1f EUOrc__seleG1g EUOrc__seleG1h EUOrc__seleG1i
  Volume = #ADD( CROWD_RESPONSE_VOLUME 20 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 20 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound OrcGroupMedium_AttackChargeMS
  Subsounds = OrcGroupSmall_AttackCharge OrcukGroupMedium_Murmur
End

Multisound OrcGroupMedium_MoveYellsMS
  Subsounds = OrcMoveYellSingles_Set1ForMediumGroup OrcMoveYellSingles_Set2ForMediumGroup OrcukGroupMedium_Murmur
End

Multisound OrcGroupMedium_SelectMS
  Subsounds = OrcGroupSmall_Select OrcukGroupMedium_Murmur
End

	;----------- END CROWD RESPONSE -------------

	;--------------------- MordorBuilder ----------------

AudioEvent MordorBuilderCartRattlesLoop
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

AudioEvent MordorBuilderFoleySelect
  Sounds = MUPorte_folsela MUPorte_folselb MUPorte_folselc
  Limit = 1
  PitchShift = -10 10
  Volume = 75
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorBuilderMoveLoop
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

AudioEvent MordorBuilderMoveStart
  Sounds = MUPorte_movstaa MUPorte_movstab MUPorte_movstac
  Limit = 3
  PitchShift = -15 15
  Volume = 75
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound MordorBuilderMoveLoopMS
  Subsounds = MordorBuilderMoveLoop MordorBuilderCartRattlesLoop
End

	;----------- MouthOfSauron Mouth of Sauron -------------

AudioEvent MouthOfSauronDoubt
  Sounds		= EUMouth_Doubta		;ESPalant_on
  Volume		= 115
  MinRange		= 500
  MaxRange		= 1000
  Priority = critical
  Limit			= 2
  Type			= world everyone 
  SubmixSlider	= SoundFX
End

AudioEvent MouthOfSauronDissent
  Sounds		= EUMouth_Dissena		;ESWarch_on
  Volume		= 105
  MinRange		= 500
  MaxRange		= 900
  Limit			= 2
  Priority = critical
  Type			= world everyone 
  SubmixSlider	= SoundFX
End

AudioEvent MouthOfSauronEvilEye
  Sounds = EUMouth_EvilEya				;GUGanda_weapo1a
  Volume = 110
  PitchShift = 40 50
  Priority = critical
  MinRange = 400
  MaxRange = 1000
  Type = world everyone 
  SubmixSlider = SoundFX
End

	;----------- BlackRider Black Rider Nazgul -------------

AudioEvent BlackRiderMorgulBlade
	Sounds			= EUNazgu_Morgula		;GUEowyn_spear1a
	PitchShift		= -5 5
	Limit			= 2
	Volume			= 110
	MinRange		= 300
	MaxRange		= 700
	Type			= world shrouded everyone 
	SubmixSlider	= SoundFX
End


;----- MORDOR BUILDING SELECTS ------

AudioEvent MordorBarricadeSelect
  Sounds = EBMoBar_selecta	;EBIsKee_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorBarricadeSelect2
  Sounds = EULadde_voise2a
  Volume = 55
  MinVolume = 45
  MinRange = 400
  PitchShift = -20 -10
  Limit = 1
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorBarricadeExpansionSelect
  Sounds = EBIsKee_selecta
  Volume = 85
  MinVolume = 75
  PitchShift = 15 15
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorBarricadeExpansionSelect2
  Sounds = EULadde_voise2a
  Volume = 45
  MinVolume = 35
  MinRange = 400
  PitchShift = -10 0
  Limit = 1
  Type = world player
  SubmixSlider = SoundFX
End

Multisound MordorBarricadeSelectMS
  Subsounds = MordorBarricadeSelect MordorBarricadeSelect2
End

Multisound MordorBarricadeExpansionSelectMS
  Subsounds = MordorBarricadeExpansionSelect MordorBarricadeExpansionSelect2
End

AudioEvent MordorGateWatcherExpansionSelect
  Sounds = NBCreep_selecta
  Volume = 100
  MinVolume = 90
  MinRange = 400
  PitchShift = 40 50
  Priority = high
  Limit = 1
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorFortressSelect
  Sounds = EBMoFor_selecta
  Volume = 105
  MinVolume = 95
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorOrcPitSelect
  Sounds = EBOrcpi_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterHouseSelect
  Sounds = EBSlaug_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorMumakilPenSelect
  Sounds = EBMumak_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorHaradrimPalaceSelect
  Sounds = EBHarad_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksSelect
  Sounds = EBSiege_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageSelect
  Sounds = EBTroll_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorLumberMillSelect
  Sounds = EBMoLum_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorFurnaceSelect
  Sounds = EBMoFur_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorCitadelSelect
  Sounds = EBMoCit_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MordorTavernSelect
  Sounds = EBMoTav_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End



;------------------------

AudioEvent MordorSiegeworksGateOpenStart
  Sounds = EBSiege_gate1_c
  Volume = 120
  PitchShift = -10 10
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksGateOpenEnd
  Sounds = EBSiege_gate1_b
  Volume = 120
  PitchShift = -10 10
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksGateCloseStart
  Sounds = EBSiege_gate1_a
  Volume = 120
  PitchShift = -10 10
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksGateCloseEnd
  Sounds = EBSiege_gate1_d
  Volume = 120
  PitchShift = -10 10
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksCrank1
  Sounds = EBSiege_crank1a EBSiege_crank1b EBSiege_crank1c
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksCrank2
  Sounds = EBSiege_crank2a EBSiege_crank2b EBSiege_crank2c
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksHorn
  Sounds = EBSiege_horna
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksOrcHit
  Sounds = EBSiege_orchita EBSiege_orchitb EBSiege_orchitc EBSiege_orchitd
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSiegeworksOrcVox
  Sounds = EBSiege_orcvoxa EBSiege_orcvoxb EBSiege_orcvoxc EBSiege_orcvoxd
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseHookMeat
  Sounds = UIRally_slaugha
  Volume = 55
  MinRange = 100
  MaxRange = 300
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseHooves
  Sounds = EBSlaug_hoof1a EBSlaug_hoof1b EBSlaug_hoof1c EBSlaug_hoof1d EBSlaug_hoof1e EBSlaug_hoof1f EBSlaug_hoof1g EBSlaug_hoof1h EBSlaug_hoof1i EBSlaug_hoof1j EBSlaug_hoof1k EBSlaug_hoof1l EBSlaug_hoof1m EBSlaug_hoof1n
  Volume = 50
  Limit = 3
  MinRange = 100
  MaxRange = 500
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseSnicker
  Sounds = EBSlaug_snickea EBSlaug_snickeb EBSlaug_snickec EBSlaug_snicked 
  Volume = 65
  MinRange = 100
  MaxRange = 500
  Limit = 3
  Priority = lowest
  PlayPercent = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseWhistle
  Sounds = EBSlaug_orcwhia
  Volume = 40
  Limit = 3
  MinRange = 100
  MaxRange = 300
  Priority = high
  PlayPercent = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseDieFall
  Sounds = EBSlaug_diefala
  Delay = 500 500
  Volume = 80
  Limit = 3
  MinRange = 100
  MaxRange = 300
  Priority = high
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseOrcYell
  Sounds = EBSlaug_yella EBSlaug_yellb
  Volume = 65
  Limit = 3
  Priority = lowest
  PlayPercent = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseCowDie
  Sounds = EBSlaug_diea EBSlaug_dieb
  Volume = 65
  Limit = 3
  MinRange = 100
  MaxRange = 300
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseBuildUp1
  Sounds = EBSlaug_builda
  Volume = 110
  Limit = 2
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseBuildUp2
  Sounds = EBSlaug_buildb
  Volume = 110
  Limit = 2
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorSlaughterhouseEnterSound
  Sounds = ;EBSlaug_kill1_a EBSlaug_kill1_b EBSlaug_kill1_c EBSlaug_kill1_d
  Volume = 85
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageOrcVox
  Sounds = EBTroll_orcvoxa EBTroll_orcvoxb EBTroll_orcvoxc EBTroll_orcvoxd EBTroll_orcvoxe
  Volume = 80
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageChains
  Sounds = EBTroll_chaina EBTroll_chainb EBTroll_chainc EBTroll_chaind 
  Volume = 70
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageTrollVox
  Sounds = EBTroll_trovoxa EBTroll_trovoxb EBTroll_trovoxc ;EBTroll_trovoxd EBTroll_trovoxe
  Volume = 90
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageTrollBreath
  Sounds = EBTroll_trovoxf
  Volume = 95
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageGateOpen
  Sounds = EBTroll_cageopa
  Volume = 95
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageGateClose
  Sounds = EBTroll_cagecla
  Volume = 95
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpBed
  Sounds = EBTroll_builda
  Volume = 110
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpWoodscrape
  Sounds = EBTroll_buildb
  Volume = 100
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpMetalBand
  Sounds = EBTroll_buildc
  Volume = 80
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpCageUp
  Sounds = EBTroll_buildd
  Volume = 100
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpGateSqueak
  Sounds = EBTroll_builde
  Volume = 65
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollCageBuildUpGateClose
  Sounds = EBTroll_buildf
  Volume = 110
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorOrcPitAmbience
  Sounds = EBOrcpi_ambiena EBOrcpi_ambienb EBOrcpi_ambienc EBOrcpi_ambiend EBOrcpi_ambiene
  Control = loop
  Delay = 10000 20000
  Volume = 75
  VolumeShift = -10
  PitchShift = -5 5
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-------------------------------- Mordor Lumbermill -------------------------------

AudioEvent MordorLumbermillSawForward
  Sounds = EBLumbe_saw02a EBLumbe_saw02b EBLumbe_saw02c EBLumbe_saw02d EBLumbe_saw02e EBLumbe_saw02f EBLumbe_saw02g EBLumbe_saw02h
  Volume = 30
  VolumeShift = -10
  MinRange = 200
  MaxRange = 350
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorLumbermillSawBack
  Sounds = EBLumbe_saw01a EBLumbe_saw01b EBLumbe_saw01c EBLumbe_saw01d EBLumbe_saw01e EBLumbe_saw01f EBLumbe_saw01g EBLumbe_saw01h
  Volume = 30
  VolumeShift = -10
  MinRange = 200
  MaxRange = 350
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorLumbermillLog
  Sounds = EBLumbe_Log01a EBLumbe_Log01b EBLumbe_Log01c
  Volume = 50
  VolumeShift = -10
  MinRange = 200
  MaxRange = 350
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorLumbermillFireBurst
  Sounds = EBLumbe_fire1_a EBLumbe_fire1_b
  Volume = 70
  VolumeShift = -5
  MinRange = 200
  MaxRange = 350
  Limit = 3
  PitchShift = -5 5
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End



AudioEvent MordorLightPointsUp
  ;Sounds       =  ; MICAL: put something here
  Priority     = high
  Type         = ui player
  SubmixSlider = SoundFX
End


AudioEvent Cin_MordorDrumsLoop
  Control = loop
  Sounds =  SADrums_isenl1a SADrums_isenl1b SADrums_isenl1c SADrums_isenl1d SADrums_isenl1e SADrums_isenl1f
  Priority = normal
  MinRange    = 300
  MaxRange    = 1000
  Limit = 2
  PitchShift = -5  5
  Volume = 120
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End



;---------------------------- Grond ---------------------------------------------

AudioEvent GrondCreatePart1
  Sounds = EUGrond_createa
  PitchShift = -10 10
  Limit = 1
  Volume = 140
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondCreatePart2
  Sounds = EUGrond_createb
  PitchShift = -10 10
  Limit = 1
  Volume = 130
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondCreatePart3
  Sounds = EUGrond_createc
  PitchShift = -10 10
  Limit = 1
  Volume = 125
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondCreatePart4
  Sounds = EUGrond_created
  PitchShift = -10 10
  Limit = 1
  Volume = 125
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondCreatePart5
  Sounds = EUGrond_createe
  PitchShift = -10 10
  Limit = 1
  Volume = 125
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondCreatePart6
  Sounds = EUGrond_createf
  PitchShift = -10 10
  Limit = 1
  Volume = 130
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorGrondTrollVoxSinglesLoop
  Sounds = EUSiege_vox_1a EUSiege_vox_1b EUSiege_vox_1c EUSiege_vox_1d EUSiege_vox_1e EUSiege_vox_2a EUSiege_vox_2b EUSiege_vox_2c EUSiege_vox_2d EUGrond_vox_1a EUGrond_vox_1b EUGrond_vox_1c EUGrond_vox_1d EUGrond_vox_1e EUGrond_vox_2a EUGrond_vox_2b EUGrond_vox_2c EUGrond_vox_2d
  Limit = 1
  PitchShift = -20 -10
  Volume = 65
  Control = loop
  Delay = 4000 10000
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorGrondTrollAttack
  Sounds = EUTroll_grondata EUTroll_grondatb EUTroll_grondatc EUTroll_grondatd ;EUTroll_grondate
  Limit = 2
  Volume = 100
  ;MinRange = 250
  Priority  = normal
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorGrondTrollPush
  Sounds = EUTroll_grondpua EUTroll_grondpub EUTroll_grondpuc EUTroll_grondpud EUTroll_grondpue EUTroll_grondpuf
  PlayPercent = 15
  Control = 
  Limit = 2
  Volume = 80
  MinRange = 250
  Priority  = normal
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondVoiceAttack
  Sounds = EUGrond_vox_1a EUGrond_vox_1b EUGrond_vox_1c EUGrond_vox_1d EUGrond_vox_1e
  Limit = 3
  PlayPercent = 50
  PitchShift = -5 5
  Volume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound GrondVoiceAttackMS
	Subsounds = GrondVoiceAttack MordorGrondTrollAttack
End

AudioEvent GrondVoiceAttack2
  Sounds = EUGrond_vox_2a EUGrond_vox_2b EUGrond_vox_2c EUGrond_vox_2d EUSiege_vox_2a EUSiege_vox_2b EUSiege_vox_2c EUSiege_vox_2d
  Limit = 3
  PlayPercent = 50
  PitchShift = -5 5
  Volume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondVoiceMove
  Sounds = EUGrond_vox_1a EUGrond_vox_1b EUGrond_vox_1c EUGrond_vox_1d EUGrond_vox_1e
  Limit = 3
  PlayPercent = 50
  PitchShift = -5 5
  Volume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondVoiceMove2
  Sounds = EUGrond_vox_2a EUGrond_vox_2b EUGrond_vox_2c EUGrond_vox_2d EUSiege_vox_2a EUSiege_vox_2b EUSiege_vox_2c EUSiege_vox_2d
  Limit = 3
  PlayPercent = 50
  PitchShift = -5 5
  Volume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound GrondVoiceMoveMS
	Subsounds = GrondVoiceMove GrondVoiceMove2
End

AudioEvent GrondVoiceSelect
  Sounds = EUGrond_vox_1a EUGrond_vox_1b EUGrond_vox_1c EUGrond_vox_1d EUGrond_vox_1e EUGrond_vox_2a EUGrond_vox_2b EUGrond_vox_2c EUGrond_vox_2d EUSiege_vox_2a EUSiege_vox_2b EUSiege_vox_2c EUSiege_vox_2d
  Limit = 3
  PitchShift = 10 25
  Volume = 110
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondMoveLoop  
  Sounds = EUGrond_movel2a EUGrond_movel2b EUGrond_movel2c EUGrond_movel2d 
  Attack = EUGrond_movel1a 
  Decay = EUGrond_movel3a EUGrond_movel3b
  Control = loop fade_on_kill
  Priority = normal
  MinRange    = 500
  MaxRange    = 1000
  Limit = 2
  PitchShift = -5 5
  Volume = 60
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondFireAmbientLoop
  Sounds = WAFire1_campL2a WAFire1_campL2b WAFire1_campL2c WAFire1_campL2d WAFire1_campL2e WAFire1_campL2f WAFire1_campL2g WAFire1_campL2h WAFire1_campL2i WAFire1_campL2j WAFire1_campL2k WAFire1_campL2l WAFire1_campL2m WAFire1_campL2n 
  Control = loop
  Limit = 3
  PitchShift = -40 -10
  Volume = 55
  Priority  = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GrondChantLoop  
  Sounds = EUGrond_chanL2a EUGrond_chanL2b EUGrond_chanL2c EUGrond_chanL2d EUGrond_chanL2e EUGrond_chanL2f EUGrond_chanL2g
  Attack = EUGrond_chanL1a 
  Decay = EUGrond_chanL3a
  Control = loop
  Priority = normal
  MinRange    = 400
  MaxRange    = 1000
  Limit = 1
  PitchShift = -5 5
  Volume = 110
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent MordorFellbeastDie
  Sounds = EUFellb_diea
  Limit = 2
  Volume = 100
  MinRange = 250
  Priority  = high
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;-------------------- MountainTroll ----------------------

AudioEvent MordorTrollCreated
  Sounds = EUTroll_createa
  Limit = 3
  Volume = 115 
  VolumeShift = -10
  PitchShift = -5 5
  Priority  = low
  Type = world shrouded everyone ;voice ;voice parameter conflicts with its CampOrcCreated announcement
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleA
  Sounds = EUTroll_idleaa
  Limit = 3
  Volume = 55 
  VolumeShift = -50
  PitchShift = -50 15
  PlayPercent = 50
  Priority  = lowest
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleB
  Sounds = EUTroll_idleba
  Priority = lowest
  Limit = 3
  Volume = 55 
  VolumeShift = -50
  PitchShift = -50 15
  PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleE
  Sounds = EUTroll_idleea
  Priority = lowest
  Limit = 3
  Volume = 95 
  VolumeShift = -25
  PitchShift = -40 15
 ; PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleF
  Sounds = EUTroll_idlefa
  Priority = lowest
  Limit = 3
  Volume = 90
  VolumeShift = -40
  PitchShift = -40 15
  ;PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleG
  Sounds = EUTroll_idlega
  Priority = lowest
  Limit = 3
  Volume = 65 
  VolumeShift = -40
  PitchShift = -40 15
  ;PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleH
  Sounds = EUTroll_idleha
  Priority = lowest
  Limit = 3
  Volume = 65
  VolumeShift = -40
  PitchShift = -40 15
  ;PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MordorTrollIdleI
  Sounds = EUTroll_idleia
  Priority = lowest
  Limit = 3
  Volume = 75 
  VolumeShift = -50
  PitchShift = -40 15
  PlayPercent = 50
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

;AudioEvent MordorTrollIdleVox
;  Sounds = EUTroll_idleha EUTroll_idlega EUTroll_idlefa EUTroll_idleea
;  Priority = lowest
;  Limit = 3
;  Volume = 70 
;  VolumeShift = -10
;  PitchShift = -40 15
;  PlayPercent = 50
;  Type = world shrouded everyone voice
;  SubmixSlider = SoundFX
;End

;----------------------------------------------------------

AudioEvent MordorOrcLaborerBuilding
  Sounds = EULabor_builda EULabor_buildb EULabor_buildc EULabor_buildd EULabor_builde
  Limit = 2
  Volume = 75
  VolumeShift = -15
  Priority  = lowest
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorOrcLaborerChopping
  Sounds = EULabor_chopa EULabor_chopb EULabor_chopc EULabor_chopd EULabor_chope EULabor_chopf EULabor_chopg
  Limit = 2
  Volume = 70
  VolumeShift = -15
  Priority  = lowest
  PitchShift = -20 0
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;----------------------

AudioEvent MordorCloudEntersStereo
  Sounds = WSEarth_Rumblea
  Volume = 40
  Type = ui player
  SubmixSlider = SoundFX
End

AudioEvent BodyFallOrc
  Sounds      = WIImpac_fallorca WIImpac_fallorcb WIImpac_fallorcc WIImpac_fallorcd WIImpac_fallorce WIImpac_fallorcf WIImpac_fallorcg WIImpac_fallorch WIImpac_fallorci WIImpac_fallorcj
  Control     = interrupt
  Priority    = lowest
  Limit       = 3
  PitchShift  = -10  10
  VolumeShift = -20
  Volume      = 55
  LowPassCutoff = 30
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End


; UPGRADES MORDOR FORTRESS

AudioEvent UpgradeMordorFortressLavaMoat
  Sounds = EBMoFor_lavamoa
  Volume = 80
  MinVolume = 60
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMordorFortressDoomPyres
  Sounds = EBMoFor_Doompya
  Volume = 80
  MinVolume = 60
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMordorFortressFlamingMunitions
  Sounds = EBMoFor_Flamina
  Volume = 100
  MinVolume = 80
  Delay = 4000 4000
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMordorFortressMagmaCauldron
  Sounds = EBMoFor_Magmaa
  Volume = 100
  MinVolume = 80
  Delay = 6800 6800
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMordorFortressMorgulSorcery
  Sounds = EBMoFor_morgula
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeMordorFortressGorgonothSpire
  Sounds = EBMoFor_Gorgona
  Volume = 115
  MinVolume = 95
  PitchShift = 30 35
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

;------------------- MAGMA CAULDRON MAGMACAULDRON ------------------

AudioEvent MordorFortressMagmaCauldronCreakStart
  Sounds = WACreak_metal1a WACreak_metal1b WACreak_metal1c WACreak_metal1d WACreak_metal1e WACreak_metal1f WACreak_metal1g
  Volume = 65
  VolumeShift = -5
  PitchShift = 10 20
  Delay = 1800 1800
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorFortressMagmaCauldronRelease
  Sounds = EBMoFor_LavaRea
  Volume = 110
  VolumeShift = -10
  PitchShift = -5 5
  Delay = 1800 1800
  Priority = critical
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorFortressMagmaCauldronPour
  Sounds = EUSiege_seleca
  Volume = 90
  PitchShift = 35 45
  Delay = 1500 1500
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorFortressMagmaCauldronCreak
  Sounds = WACreak_metal1a WACreak_metal1b WACreak_metal1c WACreak_metal1d WACreak_metal1e WACreak_metal1f WACreak_metal1g
  Volume = 65
  VolumeShift = -5
  PitchShift = -10 10
  Delay = 4000 4000
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MordorFortressMagmaCauldronUnpour
  Sounds = EUSiege_openb	;EUSiege_opena
  Volume = 60
  PitchShift = 15 25
  Delay = 5000 5000
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound MordorFortressMagmaCauldronReleaseMS
  Subsounds = MordorFortressMagmaCauldronCreakStart MordorFortressMagmaCauldronPour MordorFortressMagmaCauldronRelease MordorFortressMagmaCauldronCreak MordorFortressMagmaCauldronUnpour
End


AudioEvent OrcPorterVoiceSelect2
  Sounds = GUGimli_voise2a
  Limit = 1
  PitchShift = -10 0
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End

Multisound MordorTributeCartVoiceSelectMS
	Subsounds = TrollVoiceSelect OrcPorterVoiceSelect2
End

AudioEvent AttackTrollFoleySelect
  Sounds = GUGoTow_voise2a ;GUGoSwo_voise2a
  Limit = 1
  PitchShift = -25 -15
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End

Multisound AttackTrollVoiceSelectMS
  Subsounds = TrollVoiceSelect AttackTrollFoleySelect
End

;;-------------------------------------

AudioEvent WorldMordorFortress
  Sounds = EBMoCit_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldMordorTavern
  Sounds = EBMoTav_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldMordorSlaughterHouse
  Sounds = EBSlaug_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldMordorOrcPit
  Sounds = EBOrcpi_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End