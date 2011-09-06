///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Elves//
////////


;========================================== Elf Elven Elves =====================================

	;----------- BEGIN CROWD RESPONSE -------------

AudioEvent ElfGroupSmall_AttackCharge
  Sounds = GUElves_attcG1a GUElves_attcG1b GUElves_attcG1c GUElves_attcG1d GUElves_attcG1e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 20 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 20 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent ElfGroupMedium_AttackCharge
  Sounds = GUElves_attcG2a GUElves_attcG2b GUElves_attcG2c GUElves_attcG2d GUElves_attcG2e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent ElfGroupMedium_Murmur
  Sounds = GUElves_murmG2a GUElves_murmG2b GUElves_murmG2c GUElves_murmG2d GUElves_murmG2e GUElves_murmG2f GUElves_murmG2g GUElves_murmG2h
  Sounds = GUElves_murmG2i GUElves_murmG2j GUElves_murmG2k GUElves_murmG2l GUElves_murmG2m GUElves_murmG2n GUElves_murmG2o
  Volume = #ADD( CROWD_RESPONSE_VOLUME -15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -15 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent ElfMoveYellSingles
  Sounds = GUElves_movYela GUElves_movYelb GUElves_movYelc GUElves_movYeld GUElves_movYele GUElves_movYelf GUElves_movYelg GUElves_movYelh
  Sounds = GUElves_movYeli GUElves_movYelj GUElves_movYelk GUElves_movYell GUElves_movYelm GUElves_movYeln GUElves_movYelo
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  PlayPercent = 50
  Delay = 200 1000
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent ElfGroupSmall_Select
  Sounds = GUElves_seleG1a GUElves_seleG1b GUElves_seleG1c GUElves_seleG1d GUElves_seleG1e GUElves_seleG1f GUElves_seleG1g GUElves_seleG1h GUElves_seleG1i GUElves_seleG1j
  Volume = #ADD( CROWD_RESPONSE_VOLUME -15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -15 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound ElfGroupMedium_AttackChargeMS
  Subsounds = ElfGroupSmall_AttackCharge ElfGroupMedium_AttackCharge
End

Multisound ElfGroupMedium_MoveYellsMS
  Subsounds = ElfMoveYellSingles ElfGroupMedium_Murmur
End

Multisound ElfGroupMedium_SelectMS
  Subsounds = ElfGroupSmall_Select ElfGroupMedium_Murmur
End

	;----------- END CROWD RESPONSE -------------

AudioEvent ElfBarracksSelect
  Sounds = GBElBar_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfEregionForgeSelect
  Sounds = GBElEre_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfFortressSelect
  Sounds = GBElFor_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfGreenPastureSelect
  Sounds = GBElGre_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfMallornTreeSelect
  Sounds = GBElMal_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfMirrorOfGaladrielSelect
  Sounds = GBElMir_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfWatchtowerSelect
  Sounds = GBElWat_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfBuilderCartRattlesLoop
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

AudioEvent ElfBuilderFoleySelect
  Sounds = MUPorte_folsela MUPorte_folselb MUPorte_folselc
  Limit = 1
  PitchShift = -10 10
  Volume = 75
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ElfBuilderMoveLoop
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

AudioEvent ElfBuilderMoveStart
  Sounds = MUPorte_movstaa MUPorte_movstab MUPorte_movstac
  Limit = 3
  PitchShift = -15 15
  Volume = 75
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound ElfBuilderMoveLoopMS
  Subsounds = ElfBuilderMoveLoop ElfBuilderCartRattlesLoop
End

	;------------------------- Elrond ----------------------

AudioEvent Farsight
  Sounds		= ESPalant_on
  Limit			= 2
  Volume		= 125
  MinRange		= 500
  MaxRange		= 1000
  Type			= world everyone 
  SubmixSlider	= SoundFX
End

AudioEvent ElrondRestoration
  Sounds = GUElron_restora
  Volume = 105
  VolumeShift = -10
  PitchShift = 0 10
  Limit	= 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-------------- TORNADO -----------------

AudioEvent TornadoSweepAwayImpact
  Sounds = GSTorna_impacta GSTorna_impactb GSTorna_impactc GSTorna_impactd GSTorna_impacte GSTorna_impactf GSTorna_impactg
  Sounds = GSTorna_impacth GSTorna_impacti GSTorna_impactj GSTorna_impactk GSTorna_impactl GSTorna_impactm GSTorna_impactn
  Sounds = GSTorna_impacto GSTorna_impactp GSTorna_impactq GSTorna_impactr GSTorna_impacts GSTorna_impactt GSTorna_impactu
  Sounds = GSTorna_impactv GSTorna_impactw GSTorna_impactx GSTorna_impacty GSTorna_impactz
  Volume = 90
  VolumeShift = -10
  PitchShift = -10 10
  Limit	= 3
  Control = interrupt
  Type = world shrouded everyone
  SubmixSlider	= SoundFX
End

AudioEvent TornadoMoveStart
  Sounds = GSTorna_sweeL1q GSTorna_sweeL1m GSTorna_sweeL1h GSTorna_sweeL1e GSTorna_sweeL1b		;debris
  Sounds = GSTorna_sweeL2o GSTorna_sweeL2h GSTorna_sweeL2d GSTorna_sweeL2b GSTorna_sweeL2p		;debris
  Sounds = GSTorna_sweeL1n GSTorna_sweeL1g		;low growls
  Volume = 100
  PitchShift = -10 10
  Limit	= 3
  MinRange = 400
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider	= SoundFX
End

AudioEvent TornadoSelect		;ElrondTornadoSelect
  Sounds = GSTorna_sweeL1q GSTorna_sweeL1m GSTorna_sweeL1h GSTorna_sweeL1e GSTorna_sweeL1b		;debris
  Sounds = GSTorna_sweeL2o GSTorna_sweeL2h GSTorna_sweeL2d GSTorna_sweeL2b GSTorna_sweeL2p		;debris
  Sounds = GSTorna_sweeL1n GSTorna_sweeL1g		;low growls
  Volume = 100
  MinVolume = 90
  PitchShift = -10 10
  Limit	= 1
  Priority = high
  Type = world player voice
  SubmixSlider = SoundFX
End

AudioEvent TornadoGrowl		;for Spawn
  Sounds = GSTorna_sweeL1n GSTorna_sweeL1g		;low growls
  Volume = 105
  PitchShift = -10 10
  Limit	= 3
  MinRange = 400
  MaxRange = 800
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent TornadoRubblyDebris		;for Spawn
  Sounds = GSTorna_sweeL1b GSTorna_sweeL2o  	;best rubbly debris
  Volume = 100
  PitchShift = -10 10
  Limit	= 3
  MinRange = 400
  MaxRange = 800
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

Multisound TornadoSpawnMS
  Subsounds = TornadoGrowl TornadoRubblyDebris
End

AudioEvent TornadoLoop1			;ElrondTornadoLoop1
  Sounds = GSTorna_ambiL1a GSTorna_ambiL1b GSTorna_ambiL1c GSTorna_ambiL1d GSTorna_ambiL1e GSTorna_ambiL1f
  Sounds = GSTorna_ambiL1g GSTorna_ambiL1h GSTorna_ambiL1i GSTorna_ambiL1j GSTorna_ambiL1k GSTorna_ambiL1l
  Sounds = GSTorna_ambiL1m GSTorna_ambiL1n GSTorna_ambiL1o
  Volume = 80
  MinRange = 250
  MaxRange = 700
  Control = loop
  PitchShift = -10 10
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent TornadoLoop2			;ElrondTornadoLoop2
  Sounds = GSTorna_ambiL2a GSTorna_ambiL2b GSTorna_ambiL2c GSTorna_ambiL2d GSTorna_ambiL2e GSTorna_ambiL2f
  Sounds = GSTorna_ambiL2g GSTorna_ambiL2h GSTorna_ambiL2i GSTorna_ambiL2j GSTorna_ambiL2k GSTorna_ambiL2l
  Sounds = GSTorna_ambiL2m GSTorna_ambiL2n GSTorna_ambiL2o
  Volume = 80
  MinRange = 250
  MaxRange = 700
  Control = loop
  PitchShift = -10 10
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent TornadoSweetenerLoop1
  Sounds = GSTorna_sweeL1a GSTorna_sweeL1c GSTorna_sweeL1d GSTorna_sweeL1f GSTorna_sweeL1i GSTorna_sweeL1j
  Sounds = GSTorna_sweeL1k GSTorna_sweeL1l GSTorna_sweeL1o GSTorna_sweeL1p GSTorna_sweeL1r GSTorna_sweeL1s
  Volume = 80
  MinRange = 300
  MaxRange = 700
  PerFilePitchShift = -10 10
  Control = loop
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent TornadoSweetenerLoop2
  Sounds = GSTorna_sweeL2a GSTorna_sweeL2c GSTorna_sweeL2e GSTorna_sweeL2f GSTorna_sweeL2g GSTorna_sweeL2i
  Sounds = GSTorna_sweeL2j GSTorna_sweeL2k GSTorna_sweeL2l GSTorna_sweeL2m GSTorna_sweeL2n GSTorna_sweeL2q GSTorna_sweeL2r
  Volume = 105
  PerFileVolumeShift = -10
  MinRange = 200
  MaxRange = 700
  PerFilePitchShift = -10 10
  Control = loop
  Delay = 1000 10000
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent TornadoSweetenerLowGrowlLoop
  Sounds = GSTorna_sweeL1n GSTorna_sweeL1g		;low growls
  Volume = 105
  PerFileVolumeShift = -20
  MinRange = 300
  MaxRange = 900
  PerFilePitchShift = 11 21
  Control = loop
  Delay = 10000 25000
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;this is so that the low growls UR will play in differnet pitches on the rare chance they play simultaneously with the sweetener loops
Multisound TornadoSweetenerLoopMS
  Subsounds = TornadoSweetenerLoop1 TornadoSweetenerLoop2 TornadoSweetenerLowGrowlLoop
End

Multisound TornadoLoopMS		;ElrondTornadoLoopMS
  Subsounds = TornadoLoop1 TornadoLoop2 TornadoSweetenerLoopMS
End

	;-------------------- Glorfindel -----------------------

AudioEvent GlorfindelBladeOfPurity
  Sounds		= GUArago_Bladema
  PitchShift	= 50 60
  Limit			= 1
  Volume		= 120
  MinRange		= 250
  MaxRange		= 800
  Type			= world shrouded everyone
  SubmixSlider	= SoundFX
End

AudioEvent GlorfindelDismountFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 3000 3500
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GlorfindelMountFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 1500 2500
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GlorfindelStarlight
  Sounds      = GUGlor_Starlia
  Limit	      = 3
  Delay       = 500 500
  Volume      = 130
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End



AudioEvent GlorfindelWindRider
  Sounds = GUGlorf_WindRia			;GUArago_elend1a
  Volume = 110
  PitchShift = 5 10
  MinRange = 400
  MaxRange = 800
  Limit = 2
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End




;-------------------- BFME2 Emotion Cheer -------------------

	;----------- compilations ------------

AudioEvent EmotionElfCompilationVoxCheerSinglesLoop
  Sounds = GUElLan_voxChea GUElLan_voxCheb GUElLan_voxChec GUElLan_voxChed GUElLan_voxChee GUElLan_voxChef GUElLan_voxCheg
  Sounds = GUElMir_voxChea GUElMir_voxCheb GUElMir_voxChec GUElMir_voxChed GUElMir_voxChee
  Sounds = GUElMir_voxChef GUElMir_voxCheg GUElMir_voxCheh GUElMir_voxChei GUElMir_voxChej
  Sounds = GUElSen_voxChea GUElSen_voxCheb GUElSen_voxChec GUElSen_voxChed GUElSen_voxChee GUElSen_voxChef
  Sounds = GUElSen_voxCheg GUElSen_voxCheh GUElSen_voxChei GUElSen_voxChej GUElSen_voxChek GUElSen_voxChel
  Sounds = GUElWar_voxChea GUElWar_voxCheb GUElWar_voxChec GUElWar_voxChed GUElWar_voxChee GUElWar_voxChef GUElWar_voxCheg
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN EMOTION_CHEER_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent EmotionElfLancerVoxCheerLoop
  Sounds = GUElLan_voxChea GUElLan_voxCheb GUElLan_voxChec GUElLan_voxChed GUElLan_voxChee GUElLan_voxChef GUElLan_voxCheg
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN EMOTION_CHEER_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionMirkwoodArcherVoxCheerLoop
  Sounds = GUElMir_voxChea GUElMir_voxCheb GUElMir_voxChec GUElMir_voxChed GUElMir_voxChee
  Sounds = GUElMir_voxChef GUElMir_voxCheg GUElMir_voxCheh GUElMir_voxChei GUElMir_voxChej
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN EMOTION_CHEER_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionElfSentryVoxCheerLoop
  Sounds = GUElSen_voxChea GUElSen_voxCheb GUElSen_voxChec GUElSen_voxChed GUElSen_voxChee GUElSen_voxChef
  Sounds = GUElSen_voxCheg GUElSen_voxCheh GUElSen_voxChei GUElSen_voxChej GUElSen_voxChek GUElSen_voxChel
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN EMOTION_CHEER_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionElfWarriorVoxCheerLoop
  Sounds = GUElWar_voxChea GUElWar_voxCheb GUElWar_voxChec GUElWar_voxChed GUElWar_voxChee GUElWar_voxChef GUElWar_voxCheg
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN EMOTION_CHEER_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent EmotionElfCompilationVoxTauntSinglesLoop
  Sounds = GUElLan_voxTaua GUElLan_voxTaub GUElLan_voxTauc GUElLan_voxTaud GUElLan_voxTaue GUElLan_voxTauf GUElLan_voxTaug
  Sounds = GUElLan_voxTauh GUElLan_voxTaui GUElLan_voxTauj GUElLan_voxTauk GUElLan_voxTaul GUElLan_voxTaum
  Sounds = GUElMir_voxTaua GUElMir_voxTaub GUElMir_voxTauc GUElMir_voxTaud GUElMir_voxTaue GUElMir_voxTauf GUElMir_voxTaug GUElMir_voxTauh GUElMir_voxTaui
  Sounds = GUElMir_voxTauj GUElMir_voxTauk GUElMir_voxTaul GUElMir_voxTaum GUElMir_voxTaun GUElMir_voxTauo GUElMir_voxTaup GUElMir_voxTauq GUElMir_voxTaur
  Sounds = GUElSen_voxTaua GUElSen_voxTaub GUElSen_voxTauc GUElSen_voxTaud GUElSen_voxTaue GUElSen_voxTauf GUElSen_voxTaug GUElSen_voxTauh
  Sounds = GUElWar_voxTaua GUElWar_voxTaub GUElWar_voxTauc GUElWar_voxTaud GUElWar_voxTaue GUElWar_voxTauf GUElWar_voxTaug GUElWar_voxTauh
  Volume = #ADD( EMOTION_TAUNT_VOLUME 0 )
  MinRange = #ADD( EMOTION_TAUNT_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_TAUNT_MAXRANGE 0 )
  Delay = EMOTION_TAUNT_DELAY_MIN EMOTION_TAUNT_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_TAUNT_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent EmotionElfLancerVoxTauntLoop
  Sounds = GUElLan_voxTaua GUElLan_voxTaub GUElLan_voxTauc GUElLan_voxTaud GUElLan_voxTaue GUElLan_voxTauf GUElLan_voxTaug
  Sounds = GUElLan_voxTauh GUElLan_voxTaui GUElLan_voxTauj GUElLan_voxTauk GUElLan_voxTaul GUElLan_voxTaum
  Volume = #ADD( EMOTION_TAUNT_VOLUME 0 )
  MinRange = #ADD( EMOTION_TAUNT_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_TAUNT_MAXRANGE 0 )
  Delay = EMOTION_TAUNT_DELAY_MIN EMOTION_TAUNT_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_TAUNT_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionMirkwoodArcherVoxTauntLoop
  Sounds = GUElMir_voxTaua GUElMir_voxTaub GUElMir_voxTauc GUElMir_voxTaud GUElMir_voxTaue GUElMir_voxTauf GUElMir_voxTaug GUElMir_voxTauh GUElMir_voxTaui
  Sounds = GUElMir_voxTauj GUElMir_voxTauk GUElMir_voxTaul GUElMir_voxTaum GUElMir_voxTaun GUElMir_voxTauo GUElMir_voxTaup GUElMir_voxTauq GUElMir_voxTaur
  Volume = #ADD( EMOTION_TAUNT_VOLUME 0 )
  MinRange = #ADD( EMOTION_TAUNT_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_TAUNT_MAXRANGE 0 )
  Delay = EMOTION_TAUNT_DELAY_MIN EMOTION_TAUNT_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_TAUNT_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionElfSentryVoxTauntLoop
  Sounds = GUElSen_voxTaua GUElSen_voxTaub GUElSen_voxTauc GUElSen_voxTaud GUElSen_voxTaue GUElSen_voxTauf GUElSen_voxTaug GUElSen_voxTauh
  Volume = #ADD( EMOTION_TAUNT_VOLUME 0 )
  MinRange = #ADD( EMOTION_TAUNT_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_TAUNT_MAXRANGE 0 )
  Delay = EMOTION_TAUNT_DELAY_MIN EMOTION_TAUNT_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_TAUNT_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionElfWarriorVoxTauntLoop
  Sounds = GUElWar_voxTaua GUElWar_voxTaub GUElWar_voxTauc GUElWar_voxTaud GUElWar_voxTaue GUElWar_voxTauf GUElWar_voxTaug GUElWar_voxTauh
  Volume = #ADD( EMOTION_TAUNT_VOLUME 0 )
  MinRange = #ADD( EMOTION_TAUNT_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_TAUNT_MAXRANGE 0 )
  Delay = EMOTION_TAUNT_DELAY_MIN EMOTION_TAUNT_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_TAUNT_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End



AudioEvent ElfWarriorTauntCalloutsLoop2	;same as ManTauntCalloutsLoop2 except longer delay
  Sounds		= WUMan2_voitaua WUMan2_voitauf WUMan2_voitaug WUMan2_voitauh WUMan2_voitaui WUMan2_voitauj WUMan2_voitauk WUMan2_voitaul WUMan2_voitaum WUMan2_voitaun WUMan2_voitauo WUMan2_voitaup 
  Control		= loop
  Limit		= 3
  Delay		= 2000 12000
  Priority		= low
  PitchShift	= -2 2
  VolumeShift	= -10
  Volume		= 55
  Type		= world shrouded everyone
  SubmixSlider	= SoundFX
End

AudioEvent ElfWarriorTauntCalloutsLoop4		;same as ManTauntCalloutsLoop4 except longer delay
  Sounds		= GUPeasM_yells21 GUPeasM_yells22 GUPeasM_yells23 GUPeasM_yells25 GUPeasM_yells26 GUPeasM_yells27 GUPeasM_yells29 GUPeasM_yells30 GUPeasM_yells32 GUPeasM_yells33 GUPeasM_yells34 GUPeasM_yells35 GUPeasM_yells36 GUPeasM_yells37   
  Control		= loop
  Delay		= 2000 12000
  Priority		= lowest
  Limit		= 3
  PitchShift	= -2 2
  VolumeShift	= -10
  Volume		= 55
  Type		= world shrouded everyone
  SubmixSlider	= SoundFX
End


AudioEvent ElfWarriorGroupMoveLoop
  Sounds = GURohAr_moG1L2a GURohAr_moG1L2b GURohAr_moG1L2c GURohAr_moG1L2d GURohAr_moG1L2e GURohAr_moG1L2f GURohAr_moG1L2g GURohAr_moG1L2h GURohAr_moG1L2i GURohAr_moG1L2j GURohAr_moG1L2k GURohAr_moG1L2l GURohAr_moG1L2m GURohAr_moG1L2n GURohAr_moG1L2o GURohAr_moG1L2p GURohAr_moG1L2q GURohAr_moG1L2r GURohAr_moG1L2s GURohAr_moG1L2t GURohAr_moG1L2u GURohAr_moG1L2v GURohAr_moG1L2w GURohAr_moG1L2x GURohAr_moG1L2y GURohAr_moG1L2z
  Attack = GURohAr_moG1L1a GURohAr_moG1L1b GURohAr_moG1L1c GURohAr_moG1L1d GURohAr_moG1L1e GURohAr_moG1L1f
  Decay = GURohAr_moG1L3a GURohAr_moG1L3b GURohAr_moG1L3c GURohAr_moG1L3d GURohAr_moG1L3e
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 65
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ElfWarriorGroupAmbientLoop
  Sounds = GUElfWa_amG1L2a GUElfWa_amG1L2b GUElfWa_amG1L2c GUElfWa_amG1L2d GUElfWa_amG1L2e GUElfWa_amG1L2f GUElfWa_amG1L2g GUElfWa_amG1L2h GUElfWa_amG1L2i GUElfWa_amG1L2j GUElfWa_amG1L2k GUElfWa_amG1L2l GUElfWa_amG1L2m GUElfWa_amG1L2n GUElfWa_amG1L2o GUElfWa_amG1L2p GUElfWa_amG1L2q GUElfWa_amG1L2r GUElfWa_amG1L2s GUElfWa_amG1L2t GUElfWa_amG1L2u GUElfWa_amG1L2v GUElfWa_amG1L2w
  Attack = GUElfWa_amG1L1a GUElfWa_amG1L1b GUElfWa_amG1L1c GUElfWa_amG1L1d
  Decay = GUElfWa_amG1L3a GUElfWa_amG1L3b GUElfWa_amG1L3c GUElfWa_amG1L3d
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 45
  MaxRange = 500
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End




;---------------------------------------

; UPGRADES ELF FORTRESS

AudioEvent UpgradeElfFortressBlessedMist
  Sounds = EBElFor_blessea
  Volume = 90
  MinVolume = 80
  Delay = 200 200
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeElfFortressCrystalMoat
  Sounds = EBElFor_crystaa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeElfFortressEaglesNest
  Sounds = ;EBElFor_eaglesa
  Volume = 100
  MinVolume = 80
  ;Delay = 10000 10000
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent ElvenFortressEagleCreated
  Sounds = EBElFor_eaglesa
  Delay = 1000 1000
  Limit = 2
  Volume = 115
  MinVolume = 85
  Type = world player
  SubmixSlider = SoundFX
End


AudioEvent UpgradeElfFortressEncasingVines
  Sounds = EBElFor_vinesa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeElfFortressEnchantedAnvil
  Sounds = EBElFor_anvila
  Volume = 100
  MinVolume = 80
  Delay = 5000 5000
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeElfFortressMysticFountains
  Sounds = EBElFor_mystica
  Volume = 100
  MinVolume = 80
  Delay = 750 750
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End



Multisound ElfGroupLarge_AttackChargeMS
  Subsounds = ElfGroupMedium_AttackChargeMS DwarfGroupMedium_AttackChargeMS
End

Multisound ElfGroupLarge_SelectMS
  Subsounds = ElfGroupMedium_SelectMS GoodMenGroupMedium_Select
End

Multisound ElfGroupExtraLarge_AttackChargeMS
  Subsounds = ElfGroupLarge_AttackChargeMS MenGroupExtraLargeAttackChargeStereo
End

Multisound ElfGroupExtraLarge_SelectMS
  Subsounds = ElfGroupLarge_SelectMS MenGroupExtraLargeSelectStereo
End