///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Rohan//
////////


;----- ROHAN BUILDING SELECTS ------

AudioEvent RohanCitadelSelect
  Sounds = GBRoCit_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanArcheryRangeSelect
  Sounds = GBRoArc_selecta
  Volume = 75
  MinVolume = 65
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanArmorySelect
  Sounds = GBRoArm_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanBattleTowerSelect
  Sounds = GBRoBat_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanEntMootSelect
  Sounds = GBRoEnt_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanStablesSelect
  Sounds = GBRoSta_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent RohanElvenBarracksSelect
  Sounds = GBElBar_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End


;----------------------------- RohanArcheryRange RohanArcherRange --------------------------

AudioEvent RohanArcheryRangeArrowQuiver
  Sounds = WAarrow_quivera WAarrow_quiverb WAarrow_quiverc WAarrow_quiverd WAarrow_quivere WAarrow_quiverf WAarrow_quiverg WAarrow_quiverh WAarrow_quiveri WAarrow_quiverj
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -10 
  Volume = 30
  MinRange = 200 
  MaxRange = 600
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohanArcheryRangeDrawBow
  Sounds = WIBow_draw1a WIBow_draw1b WIBow_draw1c WIBow_draw1d WIBow_draw1e WIBow_draw1f WIBow_draw1g WIBow_draw1h WIBow_draw1i WIBow_draw1j
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 30
  MinRange = 100 
  MaxRange = 600
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohanArcheryRangeBows
  Sounds = GBArche_bowsa GBArche_bowsb GBArche_bowsc GBArche_bowsd GBArche_bowse GBArche_bowsf
  Volume = 30
  MinRange = 100 
  MaxRange = 500
  PitchShift = -5 5
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohanArcheryRangeHits1
  Sounds = GBArche_hits1a GBArche_hits1b GBArche_hits1c GBArche_hits1d 
  Volume = 25
  MinRange = 200 
  MaxRange = 600
  Limit = 3
  PitchShift = -5 5
  PlayPercent = 35
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohanArcheryRangeHits2
  Sounds = GBArche_hits2a GBArche_hits2b GBArche_hits2c GBArche_hits2d 
  Volume = 25
  MinRange = 200 
  MaxRange = 600
  Limit = 3
  PitchShift = -5 5
  PlayPercent = 35
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;------------------------------- RohanStable ------------------------------

AudioEvent BuildingRohanStableAmbience
  Sounds = WAVilla_stablea WAVilla_stableb WAVilla_stablec WAVilla_stabled WAVilla_stablee WAVilla_stablef WAVilla_stableg WAVilla_stableh WAVilla_stablei WAVilla_stablej WAVilla_stablek WAVilla_stablel
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5  5
  Delay = 1000 20000
  MinRange = 160
  MaxRange = 700
  Volume = 60
  VolumeShift = -20
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BuildingRohanStableHammerHorseShoe
  Sounds = GBStabl_tap_a GBStabl_tap_b GBStabl_tap_c GBStabl_tap_d GBStabl_tap_e GBStabl_tap_f GBStabl_tap_g GBStabl_tap_h
  Priority = lowest
  Limit = 3
  PitchShift = -5  5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BuildingRohanStableHammerTap
  Sounds = GBStabl_tap_a GBStabl_tap_b GBStabl_tap_c GBStabl_tap_d GBStabl_tap_e GBStabl_tap_f GBStabl_tap_g GBStabl_tap_h
  Priority = lowest
  Limit = 3
  PitchShift = 30 30
  Volume = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BuildingRohanStableMaleYawn
  Sounds = GBStabl_yawnMaa GBStabl_yawnMab GBStabl_yawnMac GBStabl_yawnMad
  Priority = lowest
  Limit = 3
  PlayPercent = 10
  PitchShift = -2 2
  Volume = 40
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-----------

AudioEvent RohanLightPointsUp
  ;Sounds       =  ; MICAL: put something here
  Priority     = high
  Type         = ui player
  SubmixSlider = SoundFX
End

AudioEvent Gui_RohanHorn
  ReverbEffectLevel = 0
  Sounds = URohan_horn01
  Volume = 50
  Type = ui player
  SubmixSlider = SoundFX
End

AudioEvent RohanHorn
  Sounds = URohan_horn01
  Volume = 70
  Type = world everyone
  SubmixSlider = SoundFX
End



; -------------------------------------------------------------------------------

AudioEvent RohanArcherGroupAmbientLoop
  Sounds = GURohAr_amG1L2a GURohAr_amG1L2b GURohAr_amG1L2c GURohAr_amG1L2d GURohAr_amG1L2e GURohAr_amG1L2f GURohAr_amG1L2g GURohAr_amG1L2h GURohAr_amG1L2i GURohAr_amG1L2j GURohAr_amG1L2k GURohAr_amG1L2l GURohAr_amG1L2m GURohAr_amG1L2n GURohAr_amG1L2o GURohAr_amG1L2p GURohAr_amG1L2q GURohAr_amG1L2r GURohAr_amG1L2s GURohAr_amG1L2t GURohAr_amG1L2u GURohAr_amG1L2v GURohAr_amG1L2w GURohAr_amG1L2x
  Attack = GURohAr_amG1L1a GURohAr_amG1L1b GURohAr_amG1L1c GURohAr_amG1L1d
  Decay = GURohAr_amG1L3a GURohAr_amG1L3b GURohAr_amG1L3c GURohAr_amG1L3d
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

AudioEvent RohanArcherGroupMoveLoop
  Sounds = GURohAr_moG1L2a GURohAr_moG1L2b GURohAr_moG1L2c GURohAr_moG1L2d GURohAr_moG1L2e GURohAr_moG1L2f GURohAr_moG1L2g GURohAr_moG1L2h GURohAr_moG1L2i GURohAr_moG1L2j GURohAr_moG1L2k GURohAr_moG1L2l GURohAr_moG1L2m GURohAr_moG1L2n GURohAr_moG1L2o GURohAr_moG1L2p GURohAr_moG1L2q GURohAr_moG1L2r GURohAr_moG1L2s GURohAr_moG1L2t GURohAr_moG1L2u GURohAr_moG1L2v GURohAr_moG1L2w GURohAr_moG1L2x GURohAr_moG1L2y GURohAr_moG1L2z
  Attack = GURohAr_moG1L1a GURohAr_moG1L1b GURohAr_moG1L1c GURohAr_moG1L1d GURohAr_moG1L1e GURohAr_moG1L1f
  Decay = GURohAr_moG1L3a GURohAr_moG1L3b GURohAr_moG1L3c GURohAr_moG1L3d GURohAr_moG1L3e
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 75
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent RohanBannerVoiceSelect2
  Sounds = GURoBan_voise2a
  Limit = 1
  PitchShift = -10 0
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End


;----------------------------------------------------------------------

AudioEvent RohirrimCrushing
  Sounds      = WIImpac_horsea WIImpac_horseb WIImpac_horsec WIImpac_horsed WIImpac_horsee WIImpac_horsef WIImpac_horseg WIImpac_horseh WIImpac_horsei WIImpac_horsej WIImpac_horsek WIImpac_horsel
  Control     = interrupt
  Limit       = 3
  PitchShift  = -10  10
  VolumeShift = -20
  Volume      = 100
  LowPassCutoff = 30
  Priority    = low
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent RohirrimSpeechCheer
  Sounds = GURohir_speecha
  Limit = 1
  Volume = 130
  MinRange = 800
  MaxRange = 3000
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohirrimSpeechCheerDeath1
  Sounds = SURohir_deatha
  Limit = 1
  Volume = 100
  MinRange = 800
  MaxRange = 3000
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohirrimSpeechCheerDeath2
  Sounds = SURohir_deathb
  Limit = 1
  Volume = 100
  MinRange = 800
  MaxRange = 3000
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent RohirrimSpeechCheerDeath3
  Sounds = SURohir_deathc
  Limit = 1
  Volume = 100
  MinRange = 800
  MaxRange = 5000
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent RohirrimAttention
  Sounds = GURohir_selecta GURohir_selectb
  Limit = 1
  Volume = 60
  MinRange = 250
  Priority    = normal
  Type        = world shrouded player
  SubmixSlider = SoundFX
End
