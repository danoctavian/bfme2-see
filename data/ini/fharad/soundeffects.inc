///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Harad//
////////




Multisound HaradrimArcherBowBarbedWeaponMS
  Subsounds = ArcherWeaponBarbed ArcherWeaponQuiter 	;ArcherWeaponBarbed2
End

AudioEvent HaradrimSpearWeapon
  Sounds      = EUHarad_weapspa EUHarad_weapspb EUHarad_weapspc EUHarad_weapspd EUHarad_weapspe
  Delay       = 0 300
  Limit       = 3 
  PitchShift  = -5 5
  VolumeShift = -10
  Volume      = 60
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent HaradrimGroupAmbientLoop
  Sounds = EUHarad_amg1L2a EUHarad_amg1L2b EUHarad_amg1L2c EUHarad_amg1L2d EUHarad_amg1L2e EUHarad_amg1L2f
  Attack = EUHarad_amg1L1a EUHarad_amg1L1b
  Decay = EUHarad_amg1L3a EUHarad_amg1L3b 
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 85
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent HaradrimBattleSmallAmbienceLoop
  Sounds = EUHarad_baG1L2a EUHarad_baG1L2b EUHarad_baG1L2c EUHarad_baG1L2D EUHarad_baG1L2E
  Attack = EUHarad_baG1L1a EUHarad_baG1L1b EUHarad_baG1L1C
  Decay = EUHarad_baG1L3a EUHarad_baG1L3b 
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 95
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent HaradrimGroupMediumMoveLoop
  Sounds = EUHarad_mog2L2a EUHarad_mog2L2b EUHarad_mog2L2c EUHarad_mog2L2d EUHarad_mog2L2e
  Attack = EUHarad_mog2L1a EUHarad_mog2L1b
  Decay = EUHarad_mog2L3a EUHarad_mog2L3b 
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 95
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent HaradrimGroupSmallMoveLoop
  Sounds = EUHarad_mog1L2a EUHarad_mog1L2b EUHarad_mog1L2c EUHarad_mog1L2d EUHarad_mog1L2e EUHarad_mog1L2f EUHarad_mog1L2g EUHarad_mog1L2h EUHarad_mog1L2i EUHarad_mog1L2j EUHarad_mog1L2k EUHarad_mog1L2l EUHarad_mog1L2m EUHarad_mog1L2o EUHarad_mog1L2q       ; EUHarad_mog1L2N EUHarad_mog1L2R EUHarad_mog1L2P
  Attack = EUHarad_mog1L1a EUHarad_mog1L1b EUHarad_mog1L1c      ; EUHarad_mog1L1D EUHarad_mog1L1E
  Decay = EUHarad_mog1L3a EUHarad_mog1L3b EUHarad_mog1L3c      ; EUHarad_mog1L3D EUHarad_mog1L3E EUHarad_mog1L3F
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -5
  Volume = 85
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent EmotionMenEvilCompilationVoxCheerSinglesLoop
  Sounds = EUCorsa_voxChea EUCorsa_voxCheb EUCorsa_voxChec
  Sounds = EUEaste_voxChea EUEaste_voxCheb EUEaste_voxChec EUEaste_voxChed EUEaste_voxChee EUEaste_voxChef
  ;Sounds = EUHarad_voxChea EUHarad_voxCheb EUHarad_voxChec EUHarad_voxChed EUHarad_voxChee EUHarad_voxChef EUHarad_voxCheg EUHarad_voxCheh EUHarad_voxChei
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


AudioEvent EmotionHaradrimVoxCheerLoop
  Sounds = EUHarad_voxChea EUHarad_voxCheb EUHarad_voxChec EUHarad_voxChed EUHarad_voxChee EUHarad_voxChef EUHarad_voxCheg EUHarad_voxCheh EUHarad_voxChei
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

AudioEvent EmotionMenEvilCompilationVoxTauntSinglesLoop
  Sounds = EUCorsa_voxTaua EUCorsa_voxTaub EUCorsa_voxTauc EUCorsa_voxTaud EUCorsa_voxTaue EUCorsa_voxTauf EUCorsa_voxTaug
  Sounds = EUEaste_voxTaua EUEaste_voxTaub EUEaste_voxTauc EUEaste_voxTaud EUEaste_voxTaue EUEaste_voxTauf EUEaste_voxTaug EUEaste_voxTauh
  ;Sounds = EUHarad_voxTaua EUHarad_voxTaub EUHarad_voxTauc EUHarad_voxTaud EUHarad_voxTaue EUHarad_voxTauf EUHarad_voxTaug
  ;Sounds = EUHarad_voxTauh EUHarad_voxTaui EUHarad_voxTauj EUHarad_voxTauk EUHarad_voxTaul EUHarad_voxTaum EUHarad_voxTaun
  ;Sounds = EUHarad_voxTauo EUHarad_voxTaup EUHarad_voxTauq EUHarad_voxTaur EUHarad_voxTaus EUHarad_voxTaut EUHarad_voxTauu
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


AudioEvent EmotionHaradrimVoxTauntLoop
  Sounds = EUHarad_voxTaua EUHarad_voxTaub EUHarad_voxTauc EUHarad_voxTaud EUHarad_voxTaue EUHarad_voxTauf EUHarad_voxTaug
  Sounds = EUHarad_voxTauh EUHarad_voxTaui EUHarad_voxTauj EUHarad_voxTauk EUHarad_voxTaul EUHarad_voxTaum EUHarad_voxTaun
  Sounds = EUHarad_voxTauo EUHarad_voxTaup EUHarad_voxTauq EUHarad_voxTaur EUHarad_voxTaus EUHarad_voxTaut EUHarad_voxTauu
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

AudioEvent HaradrimCheerVoxSinglesLoop
  Sounds		= ;WUMan2_voitaub WUMan2_voitauc WUMan2_voitaud WUMan2_voitaue (these didn't sound so good in the game)
  Control		= loop
  Limit		= 3
  Delay		= 500 1500
  Priority		= low
  PitchShift	= -2 2
  VolumeShift	= -10
  Volume		= 70
  Type		= world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent HaradrimCheerVoxSingles
  Sounds		= CUMan_cheerr CUMan_cheers CUMan_cheert
  Sounds = EUHarad_voxChea EUHarad_voxCheb EUHarad_voxChec EUHarad_voxChed EUHarad_voxChee EUHarad_voxChef EUHarad_voxCheg EUHarad_voxCheh EUHarad_voxChei
  Limit		= 1
  Volume		= 75
  VolumeShift	= -15
  PitchShift	= -2 2
  Priority		= low
  Type		= world shrouded everyone
  Delay		= 0 1000
  SubmixSlider	= SoundFX
End

; -----------------------------------------------------------------------------------------------------

AudioEvent HaradrimGroupBattleVOXcallouts
  Sounds = EUHarad_VOXa01 EUHarad_VOXa02 EUHarad_VOXa03 EUHarad_VOXa04 EUHarad_VOXa05 EUHarad_VOXa06 EUHarad_VOXa07 EUHarad_VOXa08 EUHarad_VOXa09 EUHarad_VOXa10 EUHarad_VOXa11 EUHarad_VOXa12 EUHarad_VOXa13 EUHarad_VOXa14 EUHarad_VOXa15 EUHarad_VOXa16 EUHarad_VOXa17 EUHarad_VOXa18 EUHarad_VOXa19 

  Sounds = EUHarad_VOXa20 EUHarad_VOXa21 EUHarad_VOXa22 EUHarad_VOXa23 EUHarad_VOXa24 EUHarad_VOXa25 EUHarad_VOXa26 EUHarad_VOXa27 EUHarad_VOXa28 EUHarad_VOXa29 

  Sounds = EUHarad_VOXa30 EUHarad_VOXa31 EUHarad_VOXa32 EUHarad_VOXa33 EUHarad_VOXa34 EUHarad_VOXa35 EUHarad_VOXa36 EUHarad_VOXa37 EUHarad_VOXa38 EUHarad_VOXa39 EUHarad_VOXa40 EUHarad_VOXa41 EUHarad_VOXa42 EUHarad_VOXa43 EUHarad_VOXa44 EUHarad_VOXa45 EUHarad_VOXa46 EUHarad_VOXa47 EUHarad_VOXa48 

  Sounds = EUHarad_VOXa49 EUHarad_VOXa50 EUHarad_VOXa51 EUHarad_VOXa52 EUHarad_VOXa53 EUHarad_VOXa54 EUHarad_VOXa55 EUHarad_VOXa56 EUHarad_VOXa57 EUHarad_VOXa58 EUHarad_VOXa59 EUHarad_VOXa60

  Control = loop 
  Priority = lowest
  Delay  = 300 2000
  Limit = 2
  PitchShift = -5  5
  Volume = 90
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent HaradrimGroupMoveVOXcallouts
    Sounds = EUHarad_VOXa01 EUHarad_VOXa02 EUHarad_VOXa03 EUHarad_VOXa04 EUHarad_VOXa05 EUHarad_VOXa06 EUHarad_VOXa07 EUHarad_VOXa08 EUHarad_VOXa09 EUHarad_VOXa10 EUHarad_VOXa11 EUHarad_VOXa12 EUHarad_VOXa13 EUHarad_VOXa14 EUHarad_VOXa15 EUHarad_VOXa16 EUHarad_VOXa17 EUHarad_VOXa18 EUHarad_VOXa19 

  Sounds = EUHarad_VOXa20 EUHarad_VOXa21 EUHarad_VOXa22 EUHarad_VOXa23 EUHarad_VOXa24 EUHarad_VOXa25 EUHarad_VOXa26 EUHarad_VOXa27 EUHarad_VOXa28 EUHarad_VOXa29 

  Sounds = EUHarad_VOXa30 EUHarad_VOXa31 EUHarad_VOXa32 EUHarad_VOXa33 EUHarad_VOXa34 EUHarad_VOXa35 EUHarad_VOXa36 EUHarad_VOXa37 EUHarad_VOXa38 EUHarad_VOXa39 EUHarad_VOXa40 EUHarad_VOXa41 EUHarad_VOXa42 EUHarad_VOXa43 EUHarad_VOXa44 EUHarad_VOXa45 EUHarad_VOXa46 EUHarad_VOXa47 EUHarad_VOXa48 

  Sounds = EUHarad_VOXa49 EUHarad_VOXa50 EUHarad_VOXa51 EUHarad_VOXa52 EUHarad_VOXa53 EUHarad_VOXa54 EUHarad_VOXa55 EUHarad_VOXa56 EUHarad_VOXa57 EUHarad_VOXa58 EUHarad_VOXa59 EUHarad_VOXa60
  Control = loop 
  Priority = lowest
  Delay  = 2000 5000
  Limit = 2
  PitchShift = -5 5
  Volume = 90
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End


AudioEvent HaradrimDieFalling
  Sounds = EUHarad_voxfala EUHarad_voxfalb EUHarad_voxfalc EUHarad_voxfald EUHarad_voxfale
  Priority = low
  Volume = 80
  PitchShift = -10 10
  VolumeShift = -20
  Type = world everyone player
  SubmixSlider = SoundFX
End

