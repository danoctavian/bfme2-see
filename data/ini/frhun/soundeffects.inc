///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Rhun//
///////


AudioEvent EmotionEasterlingVoxCheerLoop
  Sounds = EUEaste_voxChea EUEaste_voxCheb EUEaste_voxChec EUEaste_voxChed EUEaste_voxChee EUEaste_voxChef
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

AudioEvent EmotionEasterlingVoxTauntLoop
  Sounds = EUEaste_voxTaua EUEaste_voxTaub EUEaste_voxTauc EUEaste_voxTaud EUEaste_voxTaue EUEaste_voxTauf EUEaste_voxTaug EUEaste_voxTauh
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


; -------------------------------------------------------------------------------

AudioEvent SoldierOfRhunScreamLoop
	Sounds = EUSoldR_screama EUSoldR_screamb EUSoldR_screamc EUSoldR_screamd EUSoldR_screame
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 3000 8000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxAmbushedCalloutsLoop		;could be used for pointing emotion
	Sounds = EUSoldR_voxamba EUSoldR_voxambb EUSoldR_voxambc EUSoldR_voxambd EUSoldR_voxambe EUSoldR_voxambf
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 2000 6000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxBattleCalloutsLoop
	Sounds = EUSoldR_voxbata EUSoldR_voxbatb EUSoldR_voxbatc EUSoldR_voxbatd EUSoldR_voxbate EUSoldR_voxbatf EUSoldR_voxbatg EUSoldR_voxbath EUSoldR_voxbati EUSoldR_voxbatj EUSoldR_voxbatk
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 2000 6000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxFearCalloutsLoop1
	Sounds = EUSoldR_voxfeaa EUSoldR_voxfeab EUSoldR_voxfeac EUSoldR_voxfead EUSoldR_voxfeae EUSoldR_voxfeaf EUSoldR_voxfeag EUSoldR_voxfeah EUSoldR_voxfeai EUSoldR_voxfeaj EUSoldR_voxfeak
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -10
	Volume = 83
	Delay = 2000 6000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxFearCalloutsLoop2
	Sounds = EUSoldR_voxfeal EUSoldR_voxfeam EUSoldR_voxfean EUSoldR_voxfeao EUSoldR_voxfeap EUSoldR_voxfeaq EUSoldR_voxfear EUSoldR_voxfeas EUSoldR_voxfeat EUSoldR_voxfeau
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 3000 8000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxIdleSinglesLoop
	Sounds = EUSoldR_voxidla EUSoldR_voxidlb EUSoldR_voxidlc EUSoldR_voxidld EUSoldR_voxidle EUSoldR_voxidlf EUSoldR_voxidlg EUSoldR_voxidlh EUSoldR_voxidli
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 3000 9000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierOfRhunVoxTauntCalloutsLoop
	Sounds = EUSoldR_voxtaua EUSoldR_voxtaub EUSoldR_voxtauc EUSoldR_voxtaud EUSoldR_voxtaue EUSoldR_voxtauf EUSoldR_voxtaug EUSoldR_voxtauh EUSoldR_voxtaui EUSoldR_voxtauj EUSoldR_voxtauk EUSoldR_voxtaul EUSoldR_voxtaum EUSoldR_voxtaun EUSoldR_voxtauo EUSoldR_voxtaup EUSoldR_voxtauq EUSoldR_voxtaur EUSoldR_voxtaus EUSoldR_voxtaut
	Limit = 3
	PitchShift = -4 4
	VolumeShift = -5
	Volume = 80
	Delay = 2000 5000
	Control = loop
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

; Both sounds in one LGAS map!
Multisound SoldierOfRhunDoomLoop
	Subsounds = SoldierOfRhunScreamLoop SoldierOfRhunVoxFearCalloutsLoop1
End


AudioEvent SoldierOfRhunGroupMoveLoop
  Sounds = GURohAr_moG1L2a GURohAr_moG1L2b GURohAr_moG1L2c GURohAr_moG1L2d GURohAr_moG1L2e GURohAr_moG1L2f GURohAr_moG1L2g GURohAr_moG1L2h GURohAr_moG1L2i GURohAr_moG1L2j GURohAr_moG1L2k GURohAr_moG1L2l GURohAr_moG1L2m GURohAr_moG1L2n GURohAr_moG1L2o GURohAr_moG1L2p GURohAr_moG1L2q GURohAr_moG1L2r GURohAr_moG1L2s GURohAr_moG1L2t GURohAr_moG1L2u GURohAr_moG1L2v GURohAr_moG1L2w GURohAr_moG1L2x GURohAr_moG1L2y GURohAr_moG1L2z
  Attack = GURohAr_moG1L1a GURohAr_moG1L1b GURohAr_moG1L1c GURohAr_moG1L1d GURohAr_moG1L1e GURohAr_moG1L1f
  Decay = GURohAr_moG1L3a GURohAr_moG1L3b GURohAr_moG1L3c GURohAr_moG1L3d GURohAr_moG1L3e
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 70
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End