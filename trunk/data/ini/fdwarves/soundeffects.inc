///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Dwarves//
//////////



;================================== Dwarf Dwarves Dwarfs ================================

	;----------- BEGIN CROWD RESPONSE -------------

AudioEvent DwarfGroupSmall_AttackCharge
  Sounds = GUDwarf_attcG1a GUDwarf_attcG1b GUDwarf_attcG1c GUDwarf_attcG1d GUDwarf_attcG1e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupSmall_AttackChargeForBullRush
  Sounds = GUDwarf_attcG1a GUDwarf_attcG1b GUDwarf_attcG1c GUDwarf_attcG1d GUDwarf_attcG1e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  ;MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  MinRange = 150
  MaxRange = 300
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupMedium_AttackCharge
  Sounds = GUDwarf_attcG2a GUDwarf_attcG2b GUDwarf_attcG2c GUDwarf_attcG2d GUDwarf_attcG2e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupMedium_AttackChargeForBullRush
  Sounds = GUDwarf_attcG2a GUDwarf_attcG2b GUDwarf_attcG2c GUDwarf_attcG2d GUDwarf_attcG2e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  ;MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  MinRange = 150
  MaxRange = 300
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupMedium_Murmur
  Sounds = GUDwarf_seleG2a GUDwarf_seleG2b GUDwarf_seleG2c GUDwarf_seleG2d GUDwarf_seleG2e
  Volume = #ADD( CROWD_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -10 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfMoveYellSingles
  Sounds = GUDwarf_movYela GUDwarf_movYelb GUDwarf_movYelc GUDwarf_movYeld GUDwarf_movYele GUDwarf_movYelf
  Sounds = GUDwarf_movYelg GUDwarf_movYelh GUDwarf_movYeli GUDwarf_movYelj GUDwarf_movYelk
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  PlayPercent = 50
  Delay = 200 1000
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfMoveYellSinglesForBullRush1
  Sounds = GUDwarf_movYela GUDwarf_movYelb GUDwarf_movYelc GUDwarf_movYeld GUDwarf_movYele GUDwarf_movYelf
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  Delay = 1000 1500
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfMoveYellSinglesForBullRush2
  Sounds = GUDwarf_movYelg GUDwarf_movYelh GUDwarf_movYeli GUDwarf_movYelj GUDwarf_movYelk
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  Delay = 1800 2200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupSmall_Select
  Sounds = GUDwarf_seleG1a GUDwarf_seleG1b GUDwarf_seleG1c GUDwarf_seleG1d GUDwarf_seleG1e GUDwarf_seleG1f GUDwarf_seleG1g GUDwarf_seleG1h
  Volume = #ADD( CROWD_RESPONSE_VOLUME -15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -15 )
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent DwarfGroupSmall_SelectForBullRush
  Sounds = GUDwarf_seleG1a GUDwarf_seleG1b GUDwarf_seleG1c GUDwarf_seleG1d GUDwarf_seleG1e GUDwarf_seleG1f GUDwarf_seleG1g GUDwarf_seleG1h
  Volume = #ADD( CROWD_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -5 )
  Delay = 1500 1500
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound DwarfGroupMedium_AttackChargeMS
  Subsounds = DwarfGroupSmall_AttackCharge DwarfGroupMedium_AttackCharge
End

Multisound DwarfGroupMedium_AttackChargeForBullRushMS
  Subsounds = DwarfGroupSmall_AttackChargeForBullRush DwarfGroupMedium_AttackChargeForBullRush
End

Multisound DwarfGroupMedium_MoveYellsMS
  Subsounds = DwarfMoveYellSingles DwarfGroupMedium_Murmur
End

Multisound DwarfGroupMedium_SelectMS
  Subsounds = DwarfGroupSmall_Select DwarfGroupMedium_Murmur
End

	;----------- END CROWD RESPONSE -------------

AudioEvent DwarfBullRush
	Sounds = GUArago_elend1a
	Volume = 125
	MinRange = 150
	MaxRange = 300
	PitchShift = -30 -20
	Limit = 3
	Type = world shrouded everyone
	SubmixSlider = SoundFX
End

Multisound DwarfBullRushMS
  Subsounds = DwarfBullRush DwarfGroupMedium_AttackChargeForBullRushMS
End

AudioEvent DainMightyRage
	Sounds = GUDain_migRaga
	Volume = 110
	Delay 500 500
	MinRange = 400
	MaxRange = 1000
	Limit = 1
	Type = world shrouded everyone
	SubmixSlider = SoundFX
End




AudioEvent GloinSlam
	Sounds = GUGloin_slama
	Volume = 125
	PitchShift = -5 5
	MinRange = 500
	MaxRange = 1000
	Limit = 2
	Type = world shrouded everyone
	SubmixSlider = SoundFX
End

AudioEvent GloinShakeFoundation
	Sounds = GUGloin_shakefa
	Volume = 125
	PitchShift = -5 5
	MinRange = 500
	MaxRange = 1000
	Limit = 2
	Type = world shrouded everyone
	SubmixSlider = SoundFX
End

AudioEvent GloinShatterHammer
	Sounds = WIShatt_hammea
	Volume = 125
	PitchShift = -5 5
	MinRange = 500
	MaxRange = 1000
	Limit = 2
	Type = world shrouded everyone
	SubmixSlider = SoundFX
End

;------------------	DAIN SUMMON ROYAL GUARD DAINSUMMONROYALGUARD --------------------------

AudioEvent DainSummonRoyalGuard_DwarfGroupSmall_AttackCharge
  Sounds = GUDwarf_attcG1a GUDwarf_attcG1b GUDwarf_attcG1c GUDwarf_attcG1d GUDwarf_attcG1e
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME 0 )
  Delay = 1800 1800
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuard_DwarfGroupMedium_AttackCharge
  Sounds = GUDwarf_attcG2a GUDwarf_attcG2b GUDwarf_attcG2c GUDwarf_attcG2d GUDwarf_attcG2e
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME 0 )
  Delay = 2500 2500
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuard_DwarfGroupMedium_Murmur
  Sounds = GUDwarf_seleG2a GUDwarf_seleG2b GUDwarf_seleG2c GUDwarf_seleG2d GUDwarf_seleG2e
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME 0 )
  Delay = 3500 3500
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuard_DwarfMoveYellSingles1
  Sounds = GUDwarf_movYela GUDwarf_movYelb GUDwarf_movYelc GUDwarf_movYeld GUDwarf_movYele GUDwarf_movYelf
  Sounds = GUDwarf_movYelg GUDwarf_movYelh GUDwarf_movYeli GUDwarf_movYelj GUDwarf_movYelk
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME -20 )
  Delay = 4000 4000
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuard_DwarfMoveYellSingles2
  Sounds = GUDwarf_movYela GUDwarf_movYelb GUDwarf_movYelc GUDwarf_movYeld GUDwarf_movYele GUDwarf_movYelf
  Sounds = GUDwarf_movYelg GUDwarf_movYelh GUDwarf_movYeli GUDwarf_movYelj GUDwarf_movYelk
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME -20 )
  Delay = 4700 4700
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuard_DwarfGroupSmall_Select
  Sounds = GUDwarf_seleG1a GUDwarf_seleG1b GUDwarf_seleG1c GUDwarf_seleG1d GUDwarf_seleG1e GUDwarf_seleG1f GUDwarf_seleG1g GUDwarf_seleG1h
  Volume = #ADD( DAIN_SUMMON_ROYALGUARD_VOLUME 0 )
  Delay = 1500 1500
  MinRange = 300
  MaxRange = 800
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  Limit = 2
End

AudioEvent DainSummonRoyalGuardOhhhStereoPlayer
  Sounds = GSsummo_royalGu
  Volume = 50
  MinRange = 300
  Type = player
  SubmixSlider = SoundFX
  Limit = 1
End

AudioEvent DainSummonRoyalGuardOhhhOthers
  Sounds = GSsummo_royalGa
  Volume = 90
  MinRange = 300
  MaxRange = 1000
  Type = world shrouded everyone allies enemies
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound DainSummonRoyalGuardMS
  Subsounds = DainSummonRoyalGuardOhhhStereoPlayer DainSummonRoyalGuardOhhhOthers
  Subsounds = DainSummonRoyalGuard_DwarfGroupSmall_Select
  Subsounds = DainSummonRoyalGuard_DwarfGroupSmall_AttackCharge DainSummonRoyalGuard_DwarfGroupMedium_AttackCharge
  Subsounds = DainSummonRoyalGuard_DwarfGroupMedium_Murmur
  Subsounds = DainSummonRoyalGuard_DwarfMoveYellSingles1 DainSummonRoyalGuard_DwarfMoveYellSingles2
End

;--------------------------------------------

AudioEvent DwarfAxeThrower_SmallGroup_MoveLoop
  Sounds = GUDwAxe_moG1L2a GUDwAxe_moG1L2b GUDwAxe_moG1L2c GUDwAxe_moG1L2d GUDwAxe_moG1L2e GUDwAxe_moG1L2f GUDwAxe_moG1L2g GUDwAxe_moG1L2h GUDwAxe_moG1L2i GUDwAxe_moG1L2j GUDwAxe_moG1L2k GUDwAxe_moG1L2l GUDwAxe_moG1L2m GUDwAxe_moG1L2n GUDwAxe_moG1L2o GUDwAxe_moG1L2p GUDwAxe_moG1L2q GUDwAxe_moG1L2r GUDwAxe_moG1L2s
  Control = loop fade_on_kill ;fade_on_start for immediate start
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = 0 5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfAxeThrowerFoleySelect
  Sounds = GUDwAxe_folsela GUDwGua_folsela
  Limit = 1
  PitchShift = -5 5
  Volume = 50
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfAxeThrowerWeapon 	;DwarfAxThrower DwarvenAxeThrower DwarvenAxThrower DwarfGuardian DwarvenGuardian
  Sounds = GUDwAxe_weapo1a GUDwAxe_weapo1b GUDwAxe_weapo1c GUDwAxe_weapo1d GUDwAxe_weapo1e GUDwAxe_weapo1f GUDwAxe_weapo1g GUDwAxe_weapo1h GUDwAxe_weapo1i GUDwAxe_weapo1j GUDwAxe_weapo1k
  ;Control = interrupt
  Delay = 0 200
  Limit = 3
  PitchShift = -15 15
  VolumeShift = -10
  Volume = 50
  Priority = normal
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End



;-------------- DWARFBATTLEWAGON BATTLE WAGON -----------------------

AudioEvent DwarfBattleWagonYurgHornAttackImpact
  Sounds = GUDwBat_attacka GUDwBat_attackb GUDwBat_attackc GUDwBat_attackd GUDwBat_attacke GUDwBat_attackf GUDwBat_attackg GUDwBat_attackh GUDwBat_attacki
  Volume = 85
  VolumeShift = -15
  Limit = 3
  Control = interrupt
  Priority = high
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfBattleWagonDie
  Sounds      = EUCatap_diea EUCatap_dieb EUCatap_diec EUCatap_died EUCatap_diee
  Volume      = 80
  VolumeShift = -10
  PitchShift  = -10 10
  LowPassCutoff = 30
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfBattleWagonFoleySelect
  Sounds = GUDwCat_folsela GUDwCat_folselb GUDwCat_folselc GUDwCat_folseld GUDwCat_folsele GUDwCat_folself
  Limit = 1
  PitchShift = -5 5
  Volume = 50
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfBattleWagonMoveLoop
  Sounds = GUDwBat_moveL2a GUDwBat_moveL2b GUDwBat_moveL2c GUDwBat_moveL2d GUDwBat_moveL2e GUDwBat_moveL2f GUDwBat_moveL2g 
  Attack = GUDwBat_moveL1a 
  Control = loop fade_on_kill
  Limit = 3
  PitchShift = -10 -5
  Volume = 60
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;------------------ OIL BARREL OILBARREL OIL CASKS--------------------------

AudioEvent OilBarrelLaunch
  Sounds = WIOilBa_launcha WIOilBa_launchb WIOilBa_launchc WIOilBa_launchd WIOilBa_launche
  Volume = 100
  VolumeShift = -10
  PitchShift  = -10 10
  Priority = high
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ImpactOilBarrel
  Sounds = WIOilBa_impacta WIOilBa_impactb WIOilBa_impactc WIOilBa_impactd WIOilBa_impacte WIOilBa_impactf WIOilBa_impactg WIOilBa_impacth
  Volume = 110
  VolumeShift = -10
  PitchShift  = -20 0
  Priority = high
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent CatapultOilBarrelFlybys1
  Sounds = WIBarra_flybysa WIBarra_flybysb WIBarra_flybysc WIBarra_flybysd
  Volume = 65
  VolumeShift = -10
  Delay = 300 450
  PitchShift = -50 -40
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent CatapultOilBarrelFlybys2
  Sounds = ESRainO_rockBya ESRainO_rockByb ESRainO_rockByc ESRainO_rockByd ESRainO_rockBye ESRainO_rockByf
  Volume = 75
  VolumeShift = -10
  Delay = 850 1000
  PitchShift = -40 -30
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound CatapultOilBarrelFlybyMS
  Subsounds = CatapultOilBarrelFlybys1 CatapultOilBarrelFlybys2
End

AudioEvent OilCaskLaunch
  Sounds = WIOilBa_launcha WIOilBa_launchb WIOilBa_launchc WIOilBa_launchd WIOilBa_launche
  Volume = 80
  VolumeShift = -10
  PitchShift  = -10 10
  Delay = 100 200
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent OilCaskFlyBy
  Sounds = WIBarra_flybysa WIBarra_flybysb WIBarra_flybysc WIBarra_flybysd
  Volume = 100
  VolumeShift = -10
  Delay = 3100 3100
  PitchShift = -30 -20
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ImpactOilCask
  Sounds = WIOilBa_impacta WIOilBa_impactb WIOilBa_impactc WIOilBa_impactd WIOilBa_impacte WIOilBa_impactf WIOilBa_impactg WIOilBa_impacth
  Volume = 110
  VolumeShift = -10
  PitchShift  = -20 0
  Priority = high
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BattleWagonOilBarrelFlybys1
  Sounds = WIBarra_flybysa WIBarra_flybysb WIBarra_flybysc WIBarra_flybysd
  Volume = 65
  VolumeShift = -10
  Delay = 400 600
  PitchShift = -50 -40
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent BattleWagonOilBarrelFlybys2
  Sounds = ESRainO_rockBya ESRainO_rockByb ESRainO_rockByc ESRainO_rockByd ESRainO_rockBye ESRainO_rockByf
  Volume = 75
  VolumeShift = -10
  Delay = 400 600
  PitchShift = -40 -30
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound BattleWagonOilBarrelFlybyMS
  Control = PLAY_ONE
  Subsounds = BattleWagonOilBarrelFlybys1 BattleWagonOilBarrelFlybys2
End


;----------------------------------------------

AudioEvent DwarfBuilderCartRattlesLoop
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

AudioEvent DwarfBuilderFoleySelect
  Sounds = MUPorte_folsela MUPorte_folselb MUPorte_folselc
  Limit = 1
  PitchShift = -10 10
  Volume = 75
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfBuilderMoveLoop
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

AudioEvent DwarfBuilderMoveStart
  Sounds = MUPorte_movstaa MUPorte_movstab MUPorte_movstac
  Limit = 3
  PitchShift = -15 15
  Volume = 75
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound DwarfBuilderMoveLoopMS
  Subsounds = DwarfBuilderMoveLoop DwarfBuilderCartRattlesLoop
End

;-------------- DWARFCATAPULT DWARF CATAPULT -----------------

AudioEvent DwarfCatapultFoleySelect
  Sounds = GUDwCat_folsela GUDwCat_folselb GUDwCat_folselc GUDwCat_folseld GUDwCat_folsele GUDwCat_folself
  Limit = 1
  PitchShift = -5 5
  Volume = 50
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfCatapultMoveLoop
  Sounds = GUDwCat_moveL2a GUDwCat_moveL2b GUDwCat_moveL2c GUDwCat_moveL2d GUDwCat_moveL2e GUDwCat_moveL2f GUDwCat_moveL2g GUDwCat_moveL2h 
  Attack = GUDwCat_moveL1a 
  Control = loop fade_on_kill
  Limit = 3
  PitchShift = -10 -5
  Volume = 60
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfWallCatapultMoveStartForBombard
  Sounds = EUCatap_movesta EUCatap_movestb EUCatap_movestc EUCatap_movestd
  Priority = low
  Limit = 3
  PitchShift = -5 5
  Delay = 500 500
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-------------------------------

AudioEvent DwarfDemolisherDie
  Sounds      = EUCatap_diea EUCatap_dieb EUCatap_diec EUCatap_died EUCatap_diee
  Volume      = 80
  VolumeShift = -10
  PitchShift  = -10 10
  LowPassCutoff = 30
  Type        = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfDemolisherFoleySelect
  Sounds = GUDwDem_folsela GUDwDem_folselb GUDwDem_folselc GUDwDem_folseld GUDwDem_folsele GUDwDem_folself GUDwDem_folselg
  Limit = 1
  PitchShift = -15 -5
  Volume = 50
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfGuardianFoleySelect
  Sounds = GUDwAxe_folsela GUDwGua_folsela
  Limit = 1
  PitchShift = -5 5
  Volume = 50
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfGuardian_SmallGroup_MoveLoop
  Sounds = GUDwAxe_moG1L2a GUDwAxe_moG1L2b GUDwAxe_moG1L2c GUDwAxe_moG1L2d GUDwAxe_moG1L2e GUDwAxe_moG1L2f GUDwAxe_moG1L2g GUDwAxe_moG1L2h GUDwAxe_moG1L2i GUDwAxe_moG1L2j GUDwAxe_moG1L2k GUDwAxe_moG1L2l GUDwAxe_moG1L2m GUDwAxe_moG1L2n GUDwAxe_moG1L2o GUDwAxe_moG1L2p GUDwAxe_moG1L2q GUDwAxe_moG1L2r GUDwAxe_moG1L2s
  Control = loop fade_on_kill ;fade_on_start for immediate start
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -10 -5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfRhinocerousVoxDie
  Sounds = GUDwRhi_voxdiea GUDwRhi_voxdieb GUDwRhi_voxdiec GUDwRhi_voxdied GUDwRhi_voxdiee
  Priority = low
  Volume = 85
  Limit = 3
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfRhinocerousVoxSelect
  Sounds = GUDwRhi_vox001a GUDwRhi_vox001b GUDwRhi_vox001c GUDwRhi_vox003a GUDwRhi_vox003b GUDwRhi_vox003c GUDwRhi_vox003d
  Sounds = GUDwRhi_vox002a GUDwRhi_vox002b GUDwRhi_vox002c GUDwRhi_vox002d GUDwRhi_vox002e GUDwRhi_vox002f GUDwRhi_vox002g
  Priority = normal
  MinVolume = 40
  Limit = 3
  PitchShift = -5 5
  Volume = 80
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfRhinocerousVoxDeploy
  Sounds = GUDwRhi_vox001a GUDwRhi_vox001b GUDwRhi_vox001c GUDwRhi_vox003a GUDwRhi_vox003b GUDwRhi_vox003c GUDwRhi_vox003d
  Sounds = GUDwRhi_vox002a GUDwRhi_vox002b GUDwRhi_vox002c GUDwRhi_vox002d GUDwRhi_vox002e GUDwRhi_vox002f GUDwRhi_vox002g
  Priority = normal
  MinVolume = 40
  Limit = 3
  PitchShift = -5 5
  Volume = 80
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfRhinocerousVoxAmbientLoop
  Control = loop
  Sounds = GUDwRhi_vox001a GUDwRhi_vox001b GUDwRhi_vox001c GUDwRhi_vox003a GUDwRhi_vox003b GUDwRhi_vox003c GUDwRhi_vox003d
  Sounds = GUDwRhi_vox002a GUDwRhi_vox002b GUDwRhi_vox002c GUDwRhi_vox002d GUDwRhi_vox002e GUDwRhi_vox002f GUDwRhi_vox002g
  Priority = low
  Delay = 5000 15000
  MinRange = 160
  MaxRange = 600
  Limit = 3
  PerFilePitchShift = -5 5
  PerFileVolumeShift = -10
  Volume = 70
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarvenCatapultProjectileFlying
  Sounds = EUCatro_flybya EUCatro_flybyb EUCatro_flybyc EUCatro_flybyd EUCatro_flybye EUCatro_flybyf
  Volume = 80
  Delay = 100 600
  PitchShift = -10 10
  VolumeShift = -20
  Limit = 3
  MinRange = 200
  MaxRange = 700
  Priority = normal
  Type = world everyone player
  SubmixSlider = SoundFX
End

AudioEvent DwarvenCatapultWeapon
  Sounds = EUCatap_weapona EUCatap_weaponb EUCatap_weaponc
  Delay = 0 0
  Volume = 70
  VolumeShift = -20
  PitchShift = -10 10
  LowPassCutoff = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;------------------------- DwarfDemolisher ---------------------------

AudioEvent DwarfDemolisherDeploy
  Sounds = EUCatap_weapona EUCatap_weaponb EUCatap_weaponc		;REPLACE;
  Volume = 70
  VolumeShift = -20
  PitchShift = -50 -60
  LowPassCutoff = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfDemolisherUndeploy
  Sounds = EUCatap_weapona EUCatap_weaponb EUCatap_weaponc		;REPLACE;
  Volume = 70
  VolumeShift = -20
  PitchShift = -50 -60
  LowPassCutoff = 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;----------------------------------------------------

AudioEvent DwarvenImpactCatapultRock
  Sounds = WIImpac_rock1a WIImpac_rock1b WIImpac_rock1c WIImpac_rock1d WIImpac_rock1e WIImpac_rock1f
  Sounds = WIImpac_rock2a WIImpac_rock2b WIImpac_rock2c WIImpac_rock2d WIImpac_rock2e
  Control = interrupt
  Delay = 0 500
  Limit = 3
  PitchShift = -10 10
  VolumeShift = -20
  MinRange = 160
  MaxRange = 700
  Volume = 60
  LowPassCutoff = 30
  Priority = high
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ImpactDwarfAxeThrown
  Sounds = WIAxHit_throwna WIAxHit_thrownb WIAxHit_thrownc WIAxHit_thrownd WIAxHit_throwne WIAxHit_thrownf WIAxHit_throwng WIAxHit_thrownh WIAxHit_throwni WIAxHit_thrownj 
  Sounds = WIAxHit_thrownk WIAxHit_thrownl WIAxHit_thrownm WIAxHit_thrownn WIAxHit_throwno WIAxHit_thrownp WIAxHit_thrownq WIAxHit_thrownr WIAxHit_throwns WIAxHit_thrownt
  ;Control = interrupt
  Delay = 0 200
  Priority = low
  Limit = 3
  PitchShift = -10 10
  VolumeShift = -15
  Volume = 80
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;----- DWARF BUILDING SELECTS ------

AudioEvent DwarfBarracksSelect
  Sounds = GBDwHal_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfHearthSelect
  Sounds = GBDwHea_selecta
  Volume = 70
  MinVolume = 60
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarvenCatapultExpansionSelect
  Sounds = GBDwCat_selecta
  Volume = 70
  MinVolume = 60
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfCitadelSelect
  Sounds = GBDwCit_selecta
  Volume = 100
  MinVolume = 90
  PitchShift = 10 10
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarvenFortressSelect
  Sounds = GBDwFor_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfHallExpansionSelect
  Sounds = NBGarri_selecta
  Volume = 100
  MinVolume = 90
  PitchShift = 10 10
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfTowerExpansionSelect		;aka DwarvenEreborTowerTowerExpansion
  Sounds = GBDwTow_walSela
  Volume = 85
  MinVolume = 75
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfTowerSpawnedSelect
  Sounds = GBDwTow_walSela
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarfTowerWallSelect
  Sounds = GBDwTow_walSela
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarvenMineShaftSelect
  Sounds = GBDwMin_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent DwarvenForgeWorksSelect
  Sounds = GBDwFog_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End


;---------------------------------------- DwarfMineShaft DwarvenMineShaft -------------------------------

AudioEvent DwarfMineShaftAmbientLoop
  Sounds = GBDwarf_minAmba GBDwarf_minAmbb GBDwarf_minAmbc GBDwarf_minAmbd GBDwarf_minAmbe GBDwarf_minAmbf
  Sounds = GBDwarf_minAmbg GBDwarf_minAmbh GBDwarf_minAmbi GBDwarf_minAmbj GBDwarf_minAmbk GBDwarf_minAmbl
  Control = loop
  Volume = 60
  VolumeShift = -5
  PitchShift = -25 -20
  Limit = 3
  Priority = lowest
  MinRange = 200
  MaxRange = 600 
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End



;------------------------

AudioEvent DwarfHearthAmbientLoop
  Sounds = WAFire1_campL2a WAFire1_campL2b WAFire1_campL2c WAFire1_campL2d WAFire1_campL2e WAFire1_campL2f WAFire1_campL2g
  Sounds = WAFire1_campL2h WAFire1_campL2i WAFire1_campL2j WAFire1_campL2k WAFire1_campL2l WAFire1_campL2m WAFire1_campL2n 
  Control = loop
  Limit = 3
  PitchShift = -20 -10
  Volume = 55
  VolumeShift = -10
  Priority  = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent DwarfArcheryRangeAxes
  Sounds = GUDwAxe_weapo1a GUDwAxe_weapo1b GUDwAxe_weapo1c GUDwAxe_weapo1d GUDwAxe_weapo1e GUDwAxe_weapo1f GUDwAxe_weapo1g GUDwAxe_weapo1h GUDwAxe_weapo1i GUDwAxe_weapo1j GUDwAxe_weapo1k
  MinRange = 100 
  MaxRange = 500
  Limit = 3
  PitchShift = -15 15
  VolumeShift = -10
  Volume = 20
  Priority = normal
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


;---------- DWARF MIGHTY CATAPULT DWARVENMIGHTYCATAPULT --------------

AudioEvent MightyCatapultCrank
  Sounds = EUBalli_crank1a EUBalli_crank1b EUBalli_crank1c
  Volume = 95
  MinRange = 400
  MaxRange = 1100
  PitchShift = -5 5
  ;Delay = 300 300
  Limit = 2
  Priority = high
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultLock
  Sounds = EUBalli_lock1_a
  Volume = 95
  MinRange = 400
  MaxRange = 1100
  PitchShift = -5 5
  ;Delay = 800 800
  Limit = 2
  Priority = high
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultFoley
  Sounds = GUTrebu_voise2a
  Volume = 90
  MinRange = 400
  MaxRange = 1100
  PitchShift = -25 -15
  Limit = 2
  Priority = critical
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultWallImpact
  Sounds = WILadde_wall1_a
  Volume = 95
  MinRange = 400
  MaxRange = 1100
  PitchShift = -10 0
  Limit = 2
  Priority = critical
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound MightyCatapultStarterMS
  Subsounds = MightyCatapultFoley MightyCatapultWallImpact MightyCatapultCrank MightyCatapultLock
End

AudioEvent MightyCatapultMoveStart
  Sounds = EUCatap_movesta EUCatap_movestb EUCatap_movestc EUCatap_movestd
  Volume = 90
  MinRange = 400
  MaxRange = 1100
  PitchShift = -20 -10
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultCreak
  Sounds = WACreak_metal1a WACreak_metal1b WACreak_metal1c WACreak_metal1d WACreak_metal1e WACreak_metal1f WACreak_metal1g
  Volume = 70
  PitchShift = -50 -40
  Limit = 2
  Priority = critical
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound MightyCatapultRotateMS
  Subsounds = MightyCatapultMoveStart MightyCatapultCreak
End

AudioEvent MightyCatapultProjectileImpact
  Sounds = WIBarra_meteora WIBarra_meteorb WIBarra_meteorc WIBarra_meteord WIBarra_meteore WIBarra_meteorf
  Volume = 115
  VolumeShift = -10
  PitchShift = -20 20
  MinRange = 400
  MaxRange = 1100
  Priority = critical
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultProjectileFlyBy
  Sounds = ESRainO_rockBya ESRainO_rockByb ESRainO_rockByc ESRainO_rockByd ESRainO_rockBye ESRainO_rockByf
  Volume = 95
  PerFileVolumeShift = -10
  MinRange = 300
  MaxRange = 900
  PerFilePitchShift = -10 10
  Delay = 500 2200
  ;Control = loop
  Limit = 3
  Priority = high
  Type = world everyone
  SubmixSlider = SoundFX
End

;Multisound MightyCatapultProjectileFlyingMS
;  Subsounds = MightyCatapultProjectileFlyBy
  ;Subsounds = TrebuchetProjectileFlying BallistaProjectileFlying CatapultProjectileFlying
;  Control = PLAY_ONE
;End

AudioEvent MightyCatapultWeaponFire1
  Sounds = GBDwFor_MigFira
  Volume = 70
  MinRange = 300
  MaxRange = 900
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultWeaponFire2
  Sounds = EUBalli_fire1_c
  Volume = 100
  MinRange = 300
  MaxRange = 900
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MightyCatapultWeaponFire3
  Sounds = GUTrebu_weapona GUTrebu_weaponb GUTrebu_weaponc GUTrebu_weapond 
  Volume = 95
  MinRange = 300
  MaxRange = 900
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
  SubmixSlider = SoundFX
End

Multisound DwarvenMightyCatapultWeaponFireMS
  Subsounds = MightyCatapultWeaponFire1 MightyCatapultWeaponFire2 MightyCatapultWeaponFire3
End


;-------------------- BFME2 Emotion Cheer -------------------

	;----------- compilations ------------

AudioEvent EmotionDwarfCompilationVoxCheerSinglesLoop
  Sounds = GUDain_voxChea GUDain_voxCheb GUDain_voxChec GUDain_voxChed GUDain_voxChee
  Sounds = GUDwAxe_voxChea GUDwAxe_voxCheb GUDwAxe_voxChec GUDwAxe_voxChed GUDwAxe_voxChee
  Sounds = GUDwAxe_voxChef GUDwAxe_voxCheg GUDwAxe_voxCheh GUDwAxe_voxChei GUDwAxe_voxChej
  Sounds = GUDwBat_voxChea GUDwBat_voxCheb GUDwBat_voxChec
  Sounds = GUDwBui_voxChea GUDwBui_voxCheb GUDwBui_voxChec GUDwBui_voxChed GUDwBui_voxChee
  Sounds = GUDwDem_voxChea GUDwDem_voxCheb GUDwDem_voxChec GUDwDem_voxChed GUDwDem_voxChee GUDwDem_voxChef GUDwDem_voxCheg
  Sounds = GUDwDem_voxCheh GUDwDem_voxChei GUDwDem_voxChej GUDwDem_voxChek GUDwDem_voxChel GUDwDem_voxChem GUDwDem_voxChen
  Sounds = GUDwGua_voxChea GUDwGua_voxCheb GUDwGua_voxChec GUDwGua_voxChed GUDwGua_voxChee GUDwGua_voxChef
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

AudioEvent EmotionDwarfAxeThrowerVoxCheerLoop
  Sounds = GUDwAxe_voxChea GUDwAxe_voxCheb GUDwAxe_voxChec GUDwAxe_voxChed GUDwAxe_voxChee
  Sounds = GUDwAxe_voxChef GUDwAxe_voxCheg GUDwAxe_voxCheh GUDwAxe_voxChei GUDwAxe_voxChej
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

AudioEvent EmotionDwarfBattleWagonVoxCheerLoop
  Sounds = GUDwBat_voxChea GUDwBat_voxCheb GUDwBat_voxChec
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

AudioEvent EmotionDwarfBuilderVoxCheerLoop
  Sounds = GUDwBui_voxChea GUDwBui_voxCheb GUDwBui_voxChec GUDwBui_voxChed GUDwBui_voxChee
  Volume = #ADD( EMOTION_CHEER_VOLUME 0 )
  MinRange = #ADD( EMOTION_CHEER_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_CHEER_MAXRANGE 0 )
  Delay = EMOTION_CHEER_DELAY_MIN #ADD( EMOTION_CHEER_DELAY_MAX 3000 )
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_CHEER_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionDwarfDemolisherVoxCheerLoop
  Sounds = GUDwDem_voxChea GUDwDem_voxCheb GUDwDem_voxChec GUDwDem_voxChed GUDwDem_voxChee GUDwDem_voxChef GUDwDem_voxCheg
  Sounds = GUDwDem_voxCheh GUDwDem_voxChei GUDwDem_voxChej GUDwDem_voxChek GUDwDem_voxChel GUDwDem_voxChem GUDwDem_voxChen
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

AudioEvent EmotionDwarfGuardianVoxCheerLoop
  Sounds = GUDwGua_voxChea GUDwGua_voxCheb GUDwGua_voxChec GUDwGua_voxChed GUDwGua_voxChee GUDwGua_voxChef
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


AudioEvent EmotionDwarfVoxFearSinglesLoop1
  Sounds = GUDwarf_voxfe1a GUDwarf_voxfe1b GUDwarf_voxfe1c GUDwarf_voxfe1d GUDwarf_voxfe1e GUDwarf_voxfe1f GUDwarf_voxfe1g GUDwarf_voxfe1h
  Sounds = GUDwarf_voxfe1i GUDwarf_voxfe1j GUDwarf_voxfe1k GUDwarf_voxfe1l GUDwarf_voxfe1m GUDwarf_voxfe1n GUDwarf_voxfe1o
  Volume = #ADD( EMOTION_FEAR_VOLUME 0 )
  MinRange = #ADD( EMOTION_FEAR_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_FEAR_MAXRANGE 0 )
  Delay = EMOTION_FEAR_DELAY_MIN EMOTION_FEAR_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_FEAR_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent EmotionDwarfVoxFearSinglesLoop2
  Sounds = GUDwarf_voxfe2a GUDwarf_voxfe2b GUDwarf_voxfe2c GUDwarf_voxfe2d GUDwarf_voxfe2e GUDwarf_voxfe2f GUDwarf_voxfe2g GUDwarf_voxfe2h GUDwarf_voxfe2i
  Sounds = GUDwarf_voxfe2j GUDwarf_voxfe2k GUDwarf_voxfe2l GUDwarf_voxfe2m GUDwarf_voxfe2n GUDwarf_voxfe2o GUDwarf_voxfe2p GUDwarf_voxfe2q GUDwarf_voxfe2r
  Sounds = GUDwarf_voxfe2s GUDwarf_voxfe2t GUDwarf_voxfe2u
  Volume = #ADD( EMOTION_FEAR_VOLUME 0 )
  MinRange = #ADD( EMOTION_FEAR_MINRANGE 0 )
  MaxRange = #ADD( EMOTION_FEAR_MAXRANGE 0 )
  Delay = EMOTION_FEAR_DELAY_MIN EMOTION_FEAR_DELAY_MAX
  Control = loop
  Priority = low
  PerFilePitchShift = -1 1
  PerFileVolumeShift = #ADD( EMOTION_FEAR_PERFILEVOLUMESHIFT 0 )
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent EmotionDwarfCompilationVoxTauntSinglesLoop
  Sounds = GUDain_voxTaua GUDain_voxTaub GUDain_voxTauc GUDain_voxTaud GUDain_voxTaue
  Sounds = GUDain_voxTauf GUDain_voxTaug GUDain_voxTauh GUDain_voxTaui GUDain_voxTauj
  Sounds = GUDwAxe_voxTaua GUDwAxe_voxTaub GUDwAxe_voxTauc GUDwAxe_voxTaud GUDwAxe_voxTaue GUDwAxe_voxTauf GUDwAxe_voxTaug GUDwAxe_voxTauh
  Sounds = GUDwBat_voxTaua GUDwBat_voxTaub GUDwBat_voxTauc GUDwBat_voxTaud GUDwBat_voxTaue
  Sounds = GUDwBui_voxTaua GUDwBui_voxTaub GUDwBui_voxTauc GUDwBui_voxTaud GUDwBui_voxTaue GUDwBui_voxTauf GUDwBui_voxTaug
  Sounds = GUDwBui_voxTauh GUDwBui_voxTaui GUDwBui_voxTauj GUDwBui_voxTauk GUDwBui_voxTaul GUDwBui_voxTaum
  Sounds = GUDwDem_voxTaua GUDwDem_voxTaub GUDwDem_voxTauc GUDwDem_voxTaud GUDwDem_voxTaue GUDwDem_voxTauf GUDwDem_voxTaug
  Sounds = GUDwDem_voxTauh GUDwDem_voxTaui GUDwDem_voxTauj GUDwDem_voxTauk GUDwDem_voxTaul GUDwDem_voxTaum GUDwDem_voxTaun
  Sounds = GUDwGua_voxTaua GUDwGua_voxTaub GUDwGua_voxTauc GUDwGua_voxTaud GUDwGua_voxTaue
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


AudioEvent EmotionDwarfAxeThrowerVoxTauntLoop
  Sounds = GUDwAxe_voxTaua GUDwAxe_voxTaub GUDwAxe_voxTauc GUDwAxe_voxTaud GUDwAxe_voxTaue GUDwAxe_voxTauf GUDwAxe_voxTaug GUDwAxe_voxTauh
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

AudioEvent EmotionDwarfBattleWagonVoxTauntLoop
  Sounds = GUDwBat_voxTaua GUDwBat_voxTaub GUDwBat_voxTauc GUDwBat_voxTaud GUDwBat_voxTaue
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

AudioEvent EmotionDwarfBuilderVoxTauntLoop
  Sounds = GUDwBui_voxTaua GUDwBui_voxTaub GUDwBui_voxTauc GUDwBui_voxTaud GUDwBui_voxTaue GUDwBui_voxTauf GUDwBui_voxTaug
  Sounds = GUDwBui_voxTauh GUDwBui_voxTaui GUDwBui_voxTauj GUDwBui_voxTauk GUDwBui_voxTaul GUDwBui_voxTaum
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

AudioEvent EmotionDwarfDemolisherVoxTauntLoop
  Sounds = GUDwDem_voxTaua GUDwDem_voxTaub GUDwDem_voxTauc GUDwDem_voxTaud GUDwDem_voxTaue GUDwDem_voxTauf GUDwDem_voxTaug
  Sounds = GUDwDem_voxTauh GUDwDem_voxTaui GUDwDem_voxTauj GUDwDem_voxTauk GUDwDem_voxTaul GUDwDem_voxTaum GUDwDem_voxTaun
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

AudioEvent EmotionDwarfGuardianVoxTauntLoop
  Sounds = GUDwGua_voxTaua GUDwGua_voxTaub GUDwGua_voxTauc GUDwGua_voxTaud GUDwGua_voxTaue
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

AudioEvent TauntDwarfHitShieldLoose
  Sounds = WIShiel_tauhita WIShiel_tauhitb WIShiel_tauhitc WIShiel_tauhitd WIShiel_tauhite WIShiel_tauhitf WIShiel_tauhitg WIShiel_tauhith WIShiel_tauhiti WIShiel_tauhitj
  Sounds = GUSoldi_tauhitb GUSoldi_tauhitc GUSoldi_tauhitd GUSoldi_tauhite GUSoldi_tauhitg GUSoldi_tauhiti GUSoldi_tauhitk GUSoldi_tauhitl 	;GUSoldi_tauhita GUSoldi_tauhitf GUSoldi_tauhith GUSoldi_tauhitj
  Volume = 30
  VolumeShift = -10
  PitchShift = -30 0
  Delay = 0 100
  Control = interrupt
  Priority = low
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


AudioEvent DwarfFortressUpgradeGlowEffect1
  Sounds = WSResur_spawn1a
  Volume = 65
  PitchShift = -25 -25
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent DwarfFortressUpgradeGlowEffect2
  Sounds = WSResur_spawn2a
  Volume = 60
  PitchShift = -25 -25
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

Multisound DwarfFortressUpgradeGlowEffectMS
  Subsounds = DwarfFortressUpgradeGlowEffect1 DwarfFortressUpgradeGlowEffect2
End


; UPGRADES DWARF FORTRESS

AudioEvent UpgradeDwarfFortressBanner
  Sounds = GBDwFor_bannera
  Volume = 120
  MinVolume = 100
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeDwarfFortressMightyCatapult
  Sounds = GBDwFor_mightya
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeDwarfFortressOilCasks
  Sounds = GBDwFor_oilcasa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeDwarfFortressSiegeKegs
  Sounds = GBDwFor_siegeKa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeDwarfFortressStonework
  Sounds = GBDwFor_stonewa
  Limit = 3
  Volume = 100
  MinVolume = 80
  Type = world shrouded player
  SubmixSlider = SoundFX
End



AudioEvent UpgradeSiegeHammer
  Sounds = GUDwarf_siegeHa
  Limit = 1
  Volume = 100
  MinVolume = 80
  Type = world shrouded player
  SubmixSlider = SoundFX
End


AudioEvent DwarfSiege_LargeGroup_MoveRumbleLoop
	Sounds = EUWargs_moG2L2a EUWargs_moG2L2b EUWargs_moG2L2c EUWargs_moG2L2d EUWargs_moG2L2e EUWargs_moG2L2f EUWargs_moG2L2g EUWargs_moG2L2h EUWargs_moG2L2i EUWargs_moG2L2j EUWargs_moG2L2k EUWargs_moG2L2l EUWargs_moG2L2m EUWargs_moG2L2n EUWargs_moG2L2o EUWargs_moG2L2p
	Decay = EUWargs_moG2L3a
	Attack = EUWargs_moG2L1a
	Priority = low
	Limit = 1
	PitchShift = -5 5
	VolumeShift = -5
	MinRange = 350
	MaxRange = 850
	Volume = 65
	Control = loop fade_on_kill
	Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DwarfDemolisherMoveLoop
  Sounds = GUDwDem_moveL2a GUDwDem_moveL2b GUDwDem_moveL2c GUDwDem_moveL2d GUDwDem_moveL2e GUDwDem_moveL2f GUDwDem_moveL2g GUDwDem_moveL2h 
  Attack = GUDwDem_moveL1a 
  Control = loop fade_on_kill
  Limit = 3
  PitchShift = -10 -5
  Volume = 60
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End


