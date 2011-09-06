///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Gondor//
/////////


;----- GONDOR BUILDING SELECTS ------

AudioEvent BaradDurSelect
  Sounds = Ublank ;EBBarad_selecta  (stereo sound!)
  Volume = 100
  MinVolume = 90
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorCastleKeepSelect
  Sounds = GBKeep_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerSelect
  Sounds = GBStone_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorWorkshopSelect
  Sounds = GBWorks_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorBarracksSelect
  Sounds = GBBarra_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorFarmSelect
  Sounds = GBGoFar_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorMarketSelect
  Sounds = GBMarke_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorArcherySelect
  Sounds = GBGoArc_selecta
  Volume = 65
  MinVolume = 55
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorStableSelect
  Sounds = GBStabl_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorForgeSelect
  Sounds = GBGoSmi_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorPosternGateSelect
  Sounds = GBGoPo_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorArmorySelect
  Sounds = GBGoArm_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorBattleTowerSelect
  Sounds = GBGoBat_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorCitadelSelect
  Sounds = GBGoCit_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorForbiddenPoolSelect
  Sounds = GBGoFor_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorGateLatchSelect
  Sounds = EUCatap_vo2sela EUCatap_vo2selb EUCatap_vo2selc EUCatap_vo2seld EUCatap_vo2sele
  Volume = 115
  Limit = 1
  MinVolume = 85
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorStatueSelect
  Sounds = GBStatue_selecta
  Volume = 85
  MinVolume = 75
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorWellSelect
  Sounds = GBWell_selecta
  Volume = 70
  MinVolume = 60
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

;----- MEN BUILDING SELECTS ------

AudioEvent MenFortressSelect
  Sounds = GBMeFor_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MenArrowTowerExpansionSelect
  Sounds = NBArrow_selecta
  Volume = 80
  MinVolume = 70
  MinRange = 400
  PitchShift = -5 5
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MenWallTowerSelect
  Sounds = NBArrow_selecta
  Volume = 80
  MinVolume = 70
  MinRange = 400
  PitchShift = -5 5
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MenLoneTowerSelect
  Sounds = NBArrow_selecta
  Volume = 80
  MinVolume = 70
  MinRange = 400
  PitchShift = -5 5
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End




AudioEvent GondorBarracksIdleA
  Sounds = GBBarra_idle1a GBBarra_idle1b GBBarra_idle1c
  Volume = 50
  VolumeShift = -10
  PitchShift = -5 5
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorBarracksIdleB
  Sounds = GBBarra_idle2a GBBarra_idle2b GBBarra_idle2c
  Volume = 50
  VolumeShift = -10
  PitchShift = -5 5
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorMarketVenderAmbience
  Sounds = GBMarke_vendera GBMarke_venderb GBMarke_venderc GBMarke_venderd
  Control = loop
  Delay = 10000 25000
  Volume = 55
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End





;---------------------------------------- GondorStoneMaker -------------------------------

AudioEvent GondorStoneMakerClaw
  Sounds = GBStone_clawa 
  Volume = 60
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerCrank1
  Sounds = GBStone_crank1a GBStone_crank1b GBStone_crank1c 
  Volume = 60
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerCrank2
  Sounds = GBStone_crank2a GBStone_crank2b GBStone_crank2c 
  Volume = 60
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerRopeCreak
  Sounds = GBStone_creaka GBStone_creakb
  Volume = 35
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerLever1
  Sounds = GBStone_lever1a
  Volume = 60
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerLever2
  Sounds = GBStone_lever2a GBStone_lever2b
  Volume = 60
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerDropStone
  Sounds = GBStone_dropsta GBStone_dropstb GBStone_dropstc
  Volume = 65
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorStoneMakerRelease
  Sounds = GBStone_releasc
  Volume = 45
  VolumeShift = -20
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;---------------------------------------- GondorArcheryRange GondorArcherRange -------------------------------

AudioEvent GondorArcheryRangeArrowQuiver
  Sounds = WAarrow_quivera WAarrow_quiverb WAarrow_quiverc WAarrow_quiverd WAarrow_quivere WAarrow_quiverf WAarrow_quiverg WAarrow_quiverh WAarrow_quiveri WAarrow_quiverj
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  VolumeShift = -10
  Volume = 27
  MinRange = 100
  MaxRange = 300
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorArcheryRangeDrawBow
  Sounds = WIBow_draw1a WIBow_draw1b WIBow_draw1c WIBow_draw1d WIBow_draw1e WIBow_draw1f WIBow_draw1g WIBow_draw1h WIBow_draw1i WIBow_draw1j
  Priority = lowest
  Limit = 3
  VolumeShift = -10  
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 36
  MinRange = 100
  MaxRange = 300
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorArcheryRangeBows
  Sounds = GBArche_bowsa GBArche_bowsb GBArche_bowsc GBArche_bowsd GBArche_bowse GBArche_bowsf
  Volume = 27
  VolumeShift = -10
  MinRange = 100
  MaxRange = 300
  PitchShift = -5 5
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorArcheryRangeHits1
  Sounds = GBArche_hits1a GBArche_hits1b GBArche_hits1c GBArche_hits1d 
  Volume = 23
  MinRange = 100
  MaxRange = 300
  Limit = 3
  PitchShift = -5 5
  PlayPercent = 35
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorArcheryRangeHits2
  Sounds = GBArche_hits2a GBArche_hits2b GBArche_hits2c GBArche_hits2d 
  Volume = 23
  MinRange = 100
  MaxRange = 300
  Limit = 3
  PitchShift = -5 5
  PlayPercent = 35
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;--------------------------------------------------------------------------------------------------

AudioEvent BuildingGondorStableAmbience
  Sounds =  WAVilla_stablea WAVilla_stableb WAVilla_stablec WAVilla_stabled WAVilla_stablee WAVilla_stablef WAVilla_stableg WAVilla_stableh WAVilla_stablei WAVilla_stablej WAVilla_stablek WAVilla_stablel
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5  5
  Delay = 700 20000
  MinRange = 160
  MaxRange = 700
  Volume = 60
  VolumeShift = -20
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;---------------------------------------------------------------------

AudioEvent GondorLightPointsUp
  ;Sounds       =  ; MICAL: put something here
  Priority     = high
  Type         = ui player
  SubmixSlider = SoundFX
End



;AudioEvent GondorHorseGroupMoveLoop
;  Control = loop
;  Sounds =  GUHorse_movgl2a GUHorse_movgl2b GUHorse_movgl2c GUHorse_movgl2d
;  Attack = GUHorse_movgl1a
;  Decay = GUHorse_movgl3a
;  Priority = normal
;  Limit = 3
;  PitchShift = -5  5
;  Volume = 100
;  Type   = world everyone
;  SubmixSlider = SoundFX
;End

AudioEvent GondorHorseMoveStart
  Sounds = GUHorse_movesta GUHorse_movestb GUHorse_movestc GUHorse_movestd
  Limit = 2
  Volume = 80
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorHorseDie
  Sounds = GUHorse_diea GUHorse_dieb
  Volume = 110
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GandalfBlastWeapon
  Sounds = GUGanda_weapo2a
  Priority = high
  Volume = 130
  PitchShift = -10 10
  MinRange = 400
  MaxRange = 2000
  Type = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent GandalfIstariLightStart
	Sounds		= GUGanda_istar1a
	Priority		= normal
	Volume		= 110
	MinRange		= 500
	MaxRange		= 1000
	Type			= world shrouded everyone 
	SubmixSlider	= SoundFX
End

AudioEvent GandalfBeamWeapon
  Sounds = GUGanda_weapo1a
  Priority = high
  Volume = 80
  MinRange = 200
  MaxRange = 1000
  Type = world everyone 
  SubmixSlider = SoundFX
End

AudioEvent Cin_GondorCharge
  Sounds = SUSoldi_charg1a
  Volume = 100
  MinRange = 300
  MaxRange = 1000
  Type = world everyone player
  SubmixSlider = SoundFX
End

;---------------------------------------------------------------------------

AudioEvent SoldierGroupMoveLoop
  Sounds = GUSoldi_mog1L2a GUSoldi_mog1L2b GUSoldi_mog1L2c GUSoldi_mog1L2d GUSoldi_mog1L2e GUSoldi_mog1L2f GUSoldi_mog1L2g GUSoldi_mog1L2h 
  Sounds = GUSoldi_mog1L2i GUSoldi_mog1L2j GUSoldi_mog1L2k GUSoldi_mog1L2l GUSoldi_mog1L2m GUSoldi_mog1L2n GUSoldi_mog1L2o GUSoldi_mog1L2p
  Sounds = GUSoldi_mog1L2q GUSoldi_mog1L2r GUSoldi_mog1L2s GUSoldi_mog1L2t GUSoldi_mog1L2u GUSoldi_mog1L2v GUSoldi_mog1L2w GUSoldi_mog1L2x
  Sounds = GUSoldi_mog1L2y GUSoldi_mog1L2z

  Attack = GUSoldi_mog1L1a GUSoldi_mog1L1b GUSoldi_mog1L1c GUSoldi_mog1L1d GUSoldi_mog1L1e GUSoldi_mog1L1f GUSoldi_mog1L1g 
  Decay = GUSoldi_mog1L3a GUSoldi_mog1L3b GUSoldi_mog1L3c GUSoldi_mog1L3d GUSoldi_mog1L3e GUSoldi_mog1L3f GUSoldi_mog1L3g 

  Control = loop fade_on_kill
  Priority = lowest
  Limit = 2
  MinRange    = 250
  MaxRange    = 600
  PitchShift = -5 5
  Volume = 50
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent SoldierGroupAmbientLoop
  Sounds = GUSoldi_amg1L2a GUSoldi_amg1L2b GUSoldi_amg1L2c GUSoldi_amg1L2d GUSoldi_amg1L2e GUSoldi_amg1L2f GUSoldi_amg1L2g GUSoldi_amg1L2H:50 GUSoldi_amg1L2I:50 GUSoldi_amg1L2J:50 GUSoldi_amg1L2K:50 GUSoldi_amg1L2L:50
  Attack = GUSoldi_amg1L1a GUSoldi_amg1L1b GUSoldi_amg1L1c
  Decay = GUSoldi_amg1L3a GUSoldi_amg1L3b GUSoldi_amg1L3c
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 45
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GuardGroupAmbientLoop		;GondorTowerGuardShield
  Sounds = GUGuard_amG1L2a GUGuard_amG1L2b GUGuard_amG1L2c GUGuard_amG1L2d GUGuard_amG1L2e GUGuard_amG1L2f GUGuard_amG1L2g GUGuard_amG1L2a GUGuard_amG1L2b GUGuard_amG1L2c GUGuard_amG1L2d GUGuard_amG1L2e GUGuard_amG1L2f GUGuard_amG1L2g GUGuard_amG1L2h GUGuard_amG1L2i GUGuard_amG1L2j GUGuard_amG1L2k GUGuard_amG1L2l GUGuard_amG1L2m GUGuard_amG1L2n GUGuard_amG1L2o GUGuard_amG1L2p GUGuard_amG1L2q GUGuard_amG1L2r GUGuard_amG1L2s GUGuard_amG1L2t GUGuard_amG1L2u GUGuard_amG1L2v GUGuard_amG1L2w GUGuard_amG1L2x GUGuard_amG1L2y GUGuard_amG1L2Z:5
  Attack = GUGuard_amG1L1a GUGuard_amG1L1b GUGuard_amG1L1c
  Decay = GUGuard_amG1L3a GUGuard_amG1L3b GUGuard_amG1L3c
  Control = loop
  Priority = lowest
  Limit = 2
  PitchShift = -5 5
  VolumeShift = -10
  Volume = 70
  MaxRange = 500
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End




AudioEvent GondorSoldierAttention
  Sounds = GUSoldi_selecta 
  Limit = 1
  Volume = 100
  MinRange = 250
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End


;-------------------- BFME2 Emotion Cheer -------------------

	;----------- compilations ------------


AudioEvent GondorSoldierCelebrating
  Sounds = GUSoldg_cheerc
  Limit = 3
  Volume = 100
  MinRange = 250
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorSoldierCelebratingLarge
  Sounds = GUSoldi_cheera GUSoldi_cheerb
  Limit = 3
  Volume = 100
  MinRange = 250
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End



;------------------------------------------------------------------------------------------------------------

AudioEvent GondorForgeHammering
  Sounds = GBForge_hammera GBForge_hammerb GBForge_hammerc GBForge_hammerd GBForge_hammere GBForge_hammerf
  Volume = 20
  VolumeShift = -5
  PitchShift = -5 5
  MinRange = 150
  Priority  = lowest
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorForgeSizzle
  Sounds = GBForge_sizzlea
  Limit = 2
  Volume = 70
  VolumeShift = -10
  MinRange = 150
  Priority  = lowest
  PitchShift = -0 0
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GondorBarracksBeginConstruction
  Sounds = WBBuild_begina WBBuild_beginb WBBuild_beginc
  Control = 
  Priority = low
  VolumeShift = -10
  Volume = 80
  PitchShift = -2  2
  Limit = 1
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Delay = 40 40  ; This is necessary for any sound which wants to play at the instant the building is created
				 ; from the W3DScriptedModelDraw. During the first script update of the building's existence,
				 ; its position is incorrect and the sound will be killed if the out of range checks are not
				 ; delayed 1 frame
End

AudioEvent GondorForgeBeginConstruction
  Sounds = WBBuild_begina WBBuild_beginb WBBuild_beginc
  Control = 
  Priority = low
  VolumeShift = -10
  PitchShift = -2  2
  Limit = 1
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent GondorMasonHammering
  Sounds = GUMasog_builda GUMasog_buildb GUMasog_buildc GUMasog_buildd GUMasog_builde GUMasog_buildf GUMasog_buildg GUMasog_buildh GUMasog_buildi GUMasog_buildj GUMasog_buildk
  Limit = 3
  Volume = 70
  Priority  = lowest
  PitchShift = -10 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent GondorLevelUp1
  Sounds = Ulevelu_gondor1
  Volume = 25
  Limit = 3
  MinRange = 300
  MaxRange = 700
  Type = world player
  SubmixSlider = SoundFX
End


AudioEvent GondorBannerVoiceSelect2
  Sounds = GUGoBan_voise2a
  Limit = 1
  PitchShift = -10 0
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End


AudioEvent GondorSwordmanVoiceSelect2
  Sounds = GUGoSwo_voise2a
  Limit = 1
  PitchShift = -10 0
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent GondorTowerGuardVoiceSelect2
  Sounds = GUGoTow_voise2a
  Limit = 1
  PitchShift = -10 0
  Volume = 60
  MinVolume = 50
  Type = world player
  SubmixSlider = SoundFX
End