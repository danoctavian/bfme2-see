///////////////////////
// SOUNDEFFECTS.INC //
/////////////////////
//Moria//
////////


;========================================= Wild ======================================

	;----------- BEGIN CROWD RESPONSE -------------

AudioEvent GoblinGroupSmall_AttackCharge
  Sounds = EUGobli_attcG1a EUGobli_attcG1b EUGobli_attcG1c EUGobli_attcG1d EUGobli_attcG1e
  Volume = #ADD( CROWD_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 10 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinGroupMedium_Murmur
  Sounds = EUGobli_murmG2a EUGobli_murmG2b EUGobli_murmG2c EUGobli_murmG2d EUGobli_murmG2e EUGobli_murmG2f
  Sounds = EUGobli_murmG2g EUGobli_murmG2h EUGobli_murmG2i EUGobli_murmG2j EUGobli_murmG2k EUGobli_murmG2l
  Volume = #ADD( CROWD_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -10 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinMoveYellSingles
  Sounds = EUGobli_movYela EUGobli_movYelb EUGobli_movYelc EUGobli_movYeld EUGobli_movYele EUGobli_movYelf EUGobli_movYelg EUGobli_movYelh EUGobli_movYeli EUGobli_movYelj
  Volume = #ADD( CROWD_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME 0 )
  PlayPercent = 40
  PitchShift = -1 1
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinMoveYellSingles_Set1ForMediumGroup
  Sounds = EUGobli_movYela EUGobli_movYelb EUGobli_movYelc EUGobli_movYeld EUGobli_movYele 
  Volume = #ADD( CROWD_RESPONSE_VOLUME -15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -15 )
  PlayPercent = 40
  PitchShift = -1 1
  Delay = 200 1000
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinMoveYellSingles_Set2ForMediumGroup
  Sounds = EUGobli_movYelf EUGobli_movYelg EUGobli_movYelh EUGobli_movYeli EUGobli_movYelj
  Volume = #ADD( CROWD_RESPONSE_VOLUME -15 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -15 )
  PlayPercent = 25
  PitchShift = -1 1
  Delay = 500 1200
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinGroupSmall_Select
  Sounds = EUGobli_seleG1a EUGobli_seleG1b EUGobli_seleG1c EUGobli_seleG1d EUGobli_seleG1e EUGobli_seleG1f
  Volume = #ADD( CROWD_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( CROWD_RESPONSE_MINVOLUME -10 )
  PitchShift = -1 1
  Type = world player
  SubmixSlider = SoundFX
  Limit = 3
End

Multisound GoblinGroupMedium_AttackChargeMS
  Subsounds = GoblinGroupSmall_AttackCharge GoblinGroupMedium_Murmur
End

Multisound GoblinGroupMedium_MoveYellsMS
  Subsounds = GoblinMoveYellSingles_Set1ForMediumGroup GoblinMoveYellSingles_Set2ForMediumGroup GoblinGroupMedium_Murmur
End

Multisound GoblinGroupMedium_SelectMS
  Subsounds = GoblinGroupSmall_Select GoblinGroupMedium_Murmur
End

	;----------- END CROWD RESPONSE -------------

	;--------------------- GoblinKing ------------------

AudioEvent GoblinKingPoisonStingerStrike
  Sounds = EUGoKin_poiStia
  Volume = 105
  PitchShift = -5 5
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent GoblinKingSkullTotem
  Sounds = EUGoKin_skullta
  Volume = 110
  PitchShift = -5 5
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent GoblinKingSpawnFireDrakes
  Sounds = EUGoKin_sumfira
  Volume = 120
  Delay = 2000 2000
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GoblinKingCallFromTheDeep
  Sounds = EUGoKin_callFra
  Volume = 140
  MinRange = 400
  MaxRange = 1000
  Priority = critical
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

	;--------------------- Drogoth Dragon ------------------

AudioEvent DrogothFireball
  Sounds = GUSarum_firebaa
  Volume = 120
  Priority = critical
  PitchShift = -20 -30
  Limit = 2
  MinRange = 400
  MaxRange = 800
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireballImpact
  Sounds = WIBarra_meteora WIBarra_meteorb WIBarra_meteorc WIBarra_meteord WIBarra_meteore WIBarra_meteorf
  Volume = 125
  VolumeShift = -10
  PitchShift = -20 20
  MinRange = 500
  MaxRange = 1500
  Priority = critical
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireballImpactDebris1
  Sounds = WIFire_bomba WIFire_bombb WIFire_bombc WIFire_bombd WIFire_bombe WIFire_bombf WIFire_bombg WIFire_bombh
  Volume = 85
  VolumeShift = -10
  Delay = 800 1000
  Priority = lowest
  Limit = 3
  PitchShift = -20 -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireballImpactDebris2
  Sounds = WIFire_bomba WIFire_bombb WIFire_bombc WIFire_bombd WIFire_bombe WIFire_bombf WIFire_bombg WIFire_bombh
  Volume = 85
  VolumeShift = -10
  Delay = 1000 1200
  Priority = lowest
  Limit = 3
  PitchShift = -20 -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireballImpactDebris3
  Sounds = WIFire_bomba WIFire_bombb WIFire_bombc WIFire_bombd WIFire_bombe WIFire_bombf WIFire_bombg WIFire_bombh
  Volume = 85
  VolumeShift = -10
  Delay = 1200 1400
  Priority = lowest
  Limit = 3
  PitchShift = -20 -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound DrogothFireballImpactMS
  Subsounds = DrogothFireballImpact DrogothFireballImpactDebris1 DrogothFireballImpactDebris2 DrogothFireballImpactDebris3
End

AudioEvent DrogothFireFlight
  Sounds = GUSarum_firebaa
  Volume = 110
  PitchShift = -25 -15
  Limit = 2
  MinRange = 400
  MaxRange = 800
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireFlightScreech
  Sounds = EUDrogo_firefla
  Limit = 2
  Volume = 110
  MinRange = 400
  MaxRange = 1000
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireBreath
  Sounds = EUBalro_fireexa
  Volume = 100
  Delay = 1000 1000
  PitchShift = 5 15
  MinRange = 600
  MaxRange = 1000
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothFireBreathInhale
  Sounds = EUBalro_fireina
  Volume = 100
  PitchShift = -40 -40
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothMoveStart
  Sounds = EUFellb_flapa EUFellb_flapb EUFellb_flapc EUFellb_flapd EUFellb_flape
  Volume = 110
  Delay = 300 600
  PitchShift = 99 99
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent DrogothVoxAmbientLoop
  Sounds = EUDrogo_voxSela EUDrogo_voxSelb EUDrogo_voxSelc EUDrogo_voxSeld EUDrogo_voxSele
  Volume = 80
  PerFileVolumeShift = -10
  Priority = low
  PerFilePitchShift = -10 10
  Type = world shrouded everyone
  Control = loop
  Limit = 1
  Delay = 30000 60000
  MinRange = 300
  MaxRange = 1000
  SubmixSlider = SoundFX
End

AudioEvent DrogothVoxAttack
  Sounds = EUDrogo_voxAtta EUDrogo_voxAttb EUDrogo_voxAttc EUDrogo_voxAttd EUDrogo_voxAtte
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  VolumeShift = -5
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent DrogothVoxAttackCharge
  Sounds = EUDrogo_voxAtca EUDrogo_voxAtcd EUDrogo_voxAtcg
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  VolumeShift = -5
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent DrogothVoxCreated
  Sounds = EUDrogo_voxAtca EUDrogo_voxAtcb EUDrogo_voxAtcc EUDrogo_voxAtcd EUDrogo_voxAtce EUDrogo_voxAtcf EUDrogo_voxAtcg
  Volume = 110
  MinVolume = 95
  Delay = 2000 2200
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent DrogothVoxDie
  Sounds = EUDrogo_voxDiea EUDrogo_voxDieb EUDrogo_voxDiec
  Volume = 120
  VolumeShift = -10
  Priority = low
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent DrogothVoxEnterStateAttack
  Sounds = EUDrogo_voxAtta EUDrogo_voxAttb EUDrogo_voxAttc EUDrogo_voxAttd EUDrogo_voxAtte
  Volume = 110
  MinRange = 200
  Limit = 1
  Type = world allies enemies voice shrouded
  SubmixSlider = SoundFX
  PlayPercent = 25
End

AudioEvent DrogothVoxEnterStateAttackBuilding
  Sounds = EUDrogo_voxSela EUDrogo_voxSelb EUDrogo_voxSelc EUDrogo_voxSeld EUDrogo_voxSele
  Volume = 110
  MinRange = 200
  Limit = 1
  Type = world allies enemies voice shrouded
  SubmixSlider = SoundFX
  PlayPercent = 25
End

AudioEvent DrogothVoxEnterStateAttackCharge
  Sounds = EUDrogo_voxAtca EUDrogo_voxAtcb EUDrogo_voxAtcc EUDrogo_voxAtcd EUDrogo_voxAtce EUDrogo_voxAtcf EUDrogo_voxAtcg
  Volume = 110
  MinRange = 200
  Limit = 1
  Type = world allies enemies voice shrouded
  SubmixSlider = SoundFX
  PlayPercent = 40
End

AudioEvent DrogothVoxFireballEveryone
  Sounds = EUDrogo_voxAtcf
  Volume = 115
  Priority = critical
  PitchShift = -10 10
  MinRange = 400
  MaxRange = 1000
  Type = world shrouded everyone voice
  SubmixSlider = Voice
End

AudioEvent DrogothFireballStart
  Sounds = GSSonic_songa
  Volume = 110
  MinRange = 400
  MaxRange = 1000
  Limit = 3
  Priority = critical
  PitchShift = -30 -20
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound DrogothFireballMS
  Subsounds = DrogothFireballStart DrogothFireball DrogothVoxFireballEveryone
End

AudioEvent DrogothVoxFireFlight
  Sounds = EUDrogo_voxAtcc
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  MinRange = 400
  MaxRange = 1000
  Type = world player voice
  SubmixSlider = SoundFX
End

Multisound DrogothFireflightMS
  Subsounds = DrogothFireFlightScreech DrogothFireFlight DrogothVoxFireFlight
End

AudioEvent DrogothVoxIncinerate
  Sounds = EUDrogo_voxAtcb
  Delay = 1000 1000
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  Type = world player voice
  SubmixSlider = SoundFX
End

AudioEvent DrogothVoxMove
  Sounds = EUDrogo_voxMova EUDrogo_voxMovb EUDrogo_voxMovc EUDrogo_voxMovd EUDrogo_voxMove EUDrogo_voxMovf EUDrogo_voxMovg
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  VolumeShift = -5
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent DrogothVoxSelect
  Sounds = EUDrogo_voxSela EUDrogo_voxSelb EUDrogo_voxSelc EUDrogo_voxSeld EUDrogo_voxSele
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  VolumeShift = -5
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent DrogothVoxVeterancy
  Sounds = EUDrogo_voxSela EUDrogo_voxSelb EUDrogo_voxSelc EUDrogo_voxSeld EUDrogo_voxSele
  Volume = 110
  VolumeShift = -5
  MinRange = 300
  MaxRange = 1000
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = Voice
End

AudioEvent DrogothVoxWingBlast
  Sounds = EUDrogo_voxAtce
  PitchShift = -10 10
  Volume = 110
  MinVolume = 95
  MinRange = 400
  MaxRange = 1000
  Type = world player voice
  SubmixSlider = SoundFX
End

AudioEvent DrogothWingBlastLoop
  Sounds = EUDrogo_wingbla EUDrogo_wingblb EUDrogo_wingblc EUDrogo_wingbld EUDrogo_wingble EUDrogo_wingblf EUDrogo_wingblg
  Sounds = EUDrogo_wingblh EUDrogo_wingbli EUDrogo_wingblj EUDrogo_wingblk EUDrogo_wingbll EUDrogo_wingblm
  Volume = 140
  MinRange = 400
  MaxRange = 900
  Control = sequential loop fade_on_start fade_on_kill
  PitchShift = -5 5
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound DrogothVoxMoveMS
  Subsounds = DrogothVoxMove DrogothMoveStart
End

AudioEvent DrogothWingBlastWingFlaps
  Sounds = EUFellb_flapa EUFellb_flapb EUFellb_flapc EUFellb_flapd EUFellb_flape
  Volume = 145
  VolumeShift = -10
  PitchShift = 35 45
  MinRange = 400
  MaxRange = 900
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

	;--------------------- FireDrake ------------------

AudioEvent FireDrakeBodyfall
  Sounds = WIFall_body1a WIFall_infantb
  Limit = 3
  PitchShift = 15 25
  VolumeShift = -10
  Volume = 80
  Priority = low
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeFireExhale		;for their normal attacks, not incinerate/inferno
  Sounds = EUDrake_firAtta EUDrake_firAttb EUDrake_firAttc EUDrake_firAttd EUDrake_firAtte EUDrake_firAttf
  Limit = 3
  Volume = 100
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeFireInhale
  Sounds = EUBalro_fireina
  Volume = 45
  VolumeShift = -10
  Limit = 3
  PitchShift = 25 55
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeFoleySelect
  ;Sounds = 
  PitchShift = -10 10
  Volume = 100
  MinVolume = 90
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeFootstep
  Sounds = WIFootS_dirtA01 WIFootS_dirtA02 WIFootS_dirtA03 WIFootS_dirtA04 WIFootS_dirtA05 WIFootS_dirtA06 WIFootS_dirtA07 WIFootS_dirtA08 WIFootS_dirtA09 WIFootS_dirtA10 WIFootS_dirtA11 WIFootS_dirtA12 WIFootS_dirtA13 WIFootS_dirtA14 WIFootS_dirtA15 WIFootS_dirtA16 WIFootS_dirtA17 WIFootS_dirtA18 WIFootS_dirtA19 WIFootS_dirtA20 WIFootS_dirtA21 WIFootS_dirtA22 WIFootS_dirtA23 WIFootS_dirtA24 WIFootS_dirtA25 WIFootS_dirtA26 WIFootS_dirtA27 WIFootS_dirtA28 WIFootS_dirtA29 WIFootS_dirtA30 WIFootS_dirtA31 WIFootS_dirtA32 WIFootS_dirtA33 WIFootS_dirtA34 WIFootS_dirtA35 WIFootS_dirtA36
  Volume = 50
  VolumeShift = -10
  PitchShift = -30 -20
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeInferno
  Sounds = EUDrake_incinea
  Volume = 100
  PitchShift = -5 5
  MinRange = 300
  MaxRange = 800
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxAmbientLoop
  Sounds = WUDrake_voxAtta WUDrake_voxAttb WUDrake_voxAttc WUDrake_voxAttd
  Sounds = WUDrake_voxDiea WUDrake_voxDieb WUDrake_voxDiec
  Sounds = WUDrake_voxMova WUDrake_voxMovb WUDrake_voxMovc WUDrake_voxMovd
  Sounds = WUDrake_voxSela WUDrake_voxSelb WUDrake_voxSelc WUDrake_voxSeld
  Volume = 70
  Control = loop
  Delay = 8000 15000
  Limit = 3
  PerFileVolumeShift = -20
  PerFilePitchShift = -20 0
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxAttack
  Sounds = WUDrake_voxAtta WUDrake_voxAttb WUDrake_voxAttc WUDrake_voxAttd
  PitchShift = -10 10
  Volume = 120
  MinVolume = 100
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent FireDrakeVoxAttackUnshrouded
  Sounds = WUDrake_voxAtta WUDrake_voxAttb WUDrake_voxAttc WUDrake_voxAttd
  Sounds = WUDrake_voxDiea WUDrake_voxDieb WUDrake_voxDiec
  Sounds = WUDrake_voxMova WUDrake_voxMovb WUDrake_voxMovc WUDrake_voxMovd
  Sounds = WUDrake_voxSela WUDrake_voxSelb WUDrake_voxSelc WUDrake_voxSeld
  Volume = 85
  VolumeShift = -10
  PitchShift = -10 10
  PlayPercent = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxCreated
  Sounds = WUDrake_voxAtta WUDrake_voxAttb WUDrake_voxAttc WUDrake_voxAttd
  Volume = 120
  MinVolume = 120
  Delay = 1500 1500
  PitchShift = -10 10
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxDie
  Sounds = WUDrake_voxDiea WUDrake_voxDieb WUDrake_voxDiec
  Volume = 115
  VolumeShift = -10
  Priority = low
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxDieDelayed
  Sounds = WUDrake_voxDiea WUDrake_voxDieb WUDrake_voxDiec
  Volume = 110
  VolumeShift = -10
  Delay = 1500 2000
  Priority = low
  PitchShift = -20 -10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent FireDrakeVoxInferno
  Sounds = WUDrake_voxAtta WUDrake_voxAttb WUDrake_voxAttc WUDrake_voxAttd
  PitchShift = -10 10
  Volume = 120
  MinVolume = 100
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent FireDrakeVoxMove
  Sounds = WUDrake_voxMova WUDrake_voxMovb WUDrake_voxMovc WUDrake_voxMovd
  PitchShift = -10 10
  Volume = 120
  MinVolume = 100
  Type = world player voice
  SubmixSlider = Voice
End

AudioEvent FireDrakeVoxSelect
  Sounds = WUDrake_voxSela WUDrake_voxSelb WUDrake_voxSelc WUDrake_voxSeld
  PitchShift = -10 10
  Volume = 120
  MinVolume = 100
  Type = world player voice
  SubmixSlider = Voice
End

Multisound FireDrakeVoxSelectMS
  Subsounds = FireDrakeVoxSelect FireDrakeFoleySelect
End

Multisound FireDrakeVoxDieMS
  Subsounds = FireDrakeVoxDie FireDrakeVoxDieDelayed
End

Multisound FireDrakeInfernoMS
  Subsounds = FireDrakeInferno FireDrakeVoxAttackUnshrouded
End

	;--------------------- HalfTrollMarauder Half-Troll Marauders Half Troll ------------------

AudioEvent MarauderGroupAmbientLoop
  Sounds = EUUrukh_amg1l2a EUUrukh_amg1l2b EUUrukh_amg1l2c EUUrukh_amg1l2d EUUrukh_amg1l2e EUUrukh_amg1l2f EUUrukh_amg1l2g EUUrukh_amg1l2h EUUrukh_amg1l2i EUUrukh_amg1l2j 
  Attack = EUUrukh_amg1l1a 
  ;Decay = EUUrukh_amg1l3a
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 2
  PitchShift = -15 -30
  VolumeShift = -10
  Volume = 75
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MarauderGroupMoveLoop
  Sounds = EUUrukh_mog1l2a EUUrukh_mog1l2b EUUrukh_mog1l2c EUUrukh_mog1l2d EUUrukh_mog1l2e EUUrukh_mog1l2f EUUrukh_mog1l2g EUUrukh_mog1l2h
  Attack = EUUrukh_mog1l1a 
  ;Decay = EUUrukh_mog1l3a
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -15 -30
  Volume = 70
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MarauderGroupBattle2Loop
  Sounds = EUUrukh_tag1l2a EUUrukh_tag1l2b EUUrukh_tag1l2c EUUrukh_tag1l2d EUUrukh_tag1l2e EUUrukh_tag1l2f EUUrukh_tag1l2g EUUrukh_tag1l2h EUUrukh_tag1l2i EUUrukh_tag1l2j 
  Attack = EUUrukh_tag1l1a EUUrukh_tag1l1b EUUrukh_tag1l1c 
  ;Decay = EUUrukh_tag1l3a EUUrukh_tag1l3b 
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 300
  MaxRange = 800
  PitchShift = -15 -30
  VolumeShift = -10
  Volume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

	;--------------------- MountainGiant ------------------

AudioEvent MountainGiantBodyfall
  Sounds = WIFall_body1a WIFall_infantb
  Limit = 3
  PitchShift = -50 -40
  Volume = 100
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantFoleySelect
  ;Sounds = 
  PitchShift = -10 10
  Volume = 100
  MinVolume = 90
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantFootstep
  Sounds = EUTroll_footsta EUTroll_footstb EUTroll_footstc EUTroll_footstd EUTroll_footste EUTroll_footstf EUTroll_footstg
  Volume = 50
  VolumeShift = -10
  PitchShift = -30 -10
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GiantFootstepWater
  Sounds = WIFootS_water1a WIFootS_water1b WIFootS_water1c WIFootS_water1d WIFootS_water1e WIFootS_water1f WIFootS_water1g WIFootS_water1h WIFootS_water1i
  Limit = 3
  Priority = low
  Volume = 50
  PitchShift = 5 15
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantBoulderImpacts
  Sounds = WIBarra_meteora WIBarra_meteorb WIBarra_meteorc WIBarra_meteord WIBarra_meteore WIBarra_meteorf
  Volume = 100
  VolumeShift = -10
  PitchShift = -10 10
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantGenericKickImpact
  Sounds = GUEnt_punch1a GUEnt_punch1b GUEnt_punch1c GUEnt_punch1d GUEnt_punch1e GUEnt_punch1f GUEnt_punch1g GUEnt_punch1h GUEnt_punch1i
  Volume = 105
  VolumeShift = -10
  PitchShift = 10 20
  Delay = 70 70
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantGenericChestBeatImpact
  Sounds = GUEnt_punch1a GUEnt_punch1b GUEnt_punch1c GUEnt_punch1d GUEnt_punch1e GUEnt_punch1f GUEnt_punch1g GUEnt_punch1h GUEnt_punch1i
  Volume = 45
  VolumeShift = -10
  PitchShift = 20 30
  Control = interrupt
  Limit = 3
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxAmbientLoop
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  Sounds = WUGiant_voxMova WUGiant_voxMovb WUGiant_voxMovc WUGiant_voxMovd WUGiant_voxMove
  Sounds = WUGiant_voxSela WUGiant_voxSelb WUGiant_voxSelc WUGiant_voxSeld WUGiant_voxSele WUGiant_voxSelf
  Sounds = WUGiant_voxDied
  Volume = 50
  Control = loop
  Delay = 15000 30000
  Limit = 3
  PerFileVolumeShift = -20
  PerFilePitchShift = -20 0
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxAttack
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  PitchShift = -10 10
  Volume = 110
  MinVolume = 90
  Type = world player voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxCheer
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  Sounds = WUGiant_voxMova WUGiant_voxMovb WUGiant_voxMovc WUGiant_voxMovd WUGiant_voxMove
  Sounds = WUGiant_voxSela WUGiant_voxSelb WUGiant_voxSelc WUGiant_voxSeld WUGiant_voxSele WUGiant_voxSelf
  Sounds = WUGiant_voxDied
  Volume = 70
  PitchShift = -10 10
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxCreated
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  Delay = 1500 1500
  PitchShift = -10 10
  Volume = 110
  MinVolume = 90
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxDie
  Sounds = WUGiant_voxDiea WUGiant_voxDieb WUGiant_voxDiec WUGiant_voxDied
  Volume = 115
  VolumeShift = -10
  Priority = low
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxMove
  Sounds = WUGiant_voxMova WUGiant_voxMovb WUGiant_voxMovc WUGiant_voxMovd WUGiant_voxMove
  PitchShift = -10 10
  Volume = 110
  MinVolume = 90
  Type = world player voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxSelect
  Sounds = WUGiant_voxSela WUGiant_voxSelb WUGiant_voxSelc WUGiant_voxSeld WUGiant_voxSele WUGiant_voxSelf
  PitchShift = -10 10
  Volume = 110
  MinVolume = 90
  Type = world player voice
  SubmixSlider = SoundFX
End

Multisound MountainGiantVoxSelectMS
  Subsounds = MountainGiantVoxSelect MountainGiantFoleySelect
End

AudioEvent MountainGiantVoxStomp
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  Volume = 120
  MinRange = 400
  MaxRange = 1000
  Delay = 900 1100
  PitchShift = -10 10
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantFreeda
  Sounds = WUGiant_freeda
  Volume = 130
  MinRange = 400
  MaxRange = 1000
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent MountainGiantVoxFreedVox
  Sounds = WUGiant_voxAtta WUGiant_voxAttb WUGiant_voxAttc WUGiant_voxAttd WUGiant_voxAtte
  Delay = 500 500
  PitchShift = -10 10
  Volume = 110
  MinVolume = 90
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound MountainGiantFreedMS
  Subsounds = MountainGiantFreeda MountainGiantVoxFreedVox
End




	;--------------------- Goblin ----------------

AudioEvent Goblin_SmallGroup_CheerLoop	;designed to not play when Goblin_MediumGroup_CheerLoopMS kicks in in LGA
  Sounds = EUGobli_cheeL1a EUGobli_cheeL1b EUGobli_cheeL1c EUGobli_cheeL1d EUGobli_cheeL1e EUGobli_cheeL1f EUGobli_cheeL1g EUGobli_cheeL1h EUGobli_cheeL1i
  Sounds = EUGobli_cheeL1j EUGobli_cheeL1k EUGobli_cheeL1l EUGobli_cheeL1m
  Sounds = EUGobli_cheeL2a EUGobli_cheeL2b EUGobli_cheeL2c EUGobli_cheeL2d EUGobli_cheeL2e EUGobli_cheeL2f EUGobli_cheeL2g EUGobli_cheeL2h EUGobli_cheeL2i
  Sounds = EUGobli_cheeL2j EUGobli_cheeL2k EUGobli_cheeL2l EUGobli_cheeL2m EUGobli_cheeL2n
  Control = loop fade_on_kill
  Delay = 1 1
  Priority = lowest
  Limit = 3
  PerFilePitchShift = -10 10
  Volume = 60
  PerFileVolumeShift = -5
  LowPassCutoff = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent Goblin_MediumGroup_CheerLoop1
  Sounds = EUGobli_cheeL1a EUGobli_cheeL1b EUGobli_cheeL1c EUGobli_cheeL1d EUGobli_cheeL1e EUGobli_cheeL1f EUGobli_cheeL1g EUGobli_cheeL1h EUGobli_cheeL1i
  Sounds = EUGobli_cheeL1j EUGobli_cheeL1k EUGobli_cheeL1l EUGobli_cheeL1m
  Control = loop fade_on_kill
  Delay = 1 1
  Priority = lowest
  Limit = 3
  PerFilePitchShift = -10 10
  Volume = 60
  PerFileVolumeShift = -5
  LowPassCutoff = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent Goblin_MediumGroup_CheerLoop2
  Sounds = EUGobli_cheeL2a EUGobli_cheeL2b EUGobli_cheeL2c EUGobli_cheeL2d EUGobli_cheeL2e EUGobli_cheeL2f EUGobli_cheeL2g EUGobli_cheeL2h EUGobli_cheeL2i
  Sounds = EUGobli_cheeL2j EUGobli_cheeL2k EUGobli_cheeL2l EUGobli_cheeL2m EUGobli_cheeL2n
  Control = loop fade_on_kill
  Delay = 1 1
  Priority = lowest
  Limit = 3
  PerFilePitchShift = -10 10
  PerFileVolumeShift = -5
  Volume = 60
  LowPassCutoff = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound Goblin_MediumGroup_CheerLoopMS
  Subsounds = Goblin_MediumGroup_CheerLoop1 Goblin_MediumGroup_CheerLoop2
End

AudioEvent Goblin_MediumGroup_ClimbLoop
  Sounds = EUGobli_climL2a EUGobli_climL2b EUGobli_climL2c EUGobli_climL2d EUGobli_climL2e EUGobli_climL2f EUGobli_climL2g EUGobli_climL2h EUGobli_climL2i
  Sounds = EUGobli_climL2j EUGobli_climL2k EUGobli_climL2l
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -5
  Volume = 70
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound Goblin_MediumGroup_ClimbLoopMS
  Subsounds = Goblin_MediumGroup_ClimbLoop Goblin_MediumGroup_CheerLoopMS
End

AudioEvent Goblin_MediumGroup_MoveLoop
  Sounds = EUGobli_movG1La EUGobli_movG1Lb EUGobli_movG1Lc EUGobli_movG1Ld EUGobli_movG1Le EUGobli_movG1Lf EUGobli_movG1Lg EUGobli_movG1Lh EUGobli_movG1Li
  Sounds = EUGobli_movG1Lj EUGobli_movG1Lk EUGobli_movG1Ll EUGobli_movG1Lm
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  VolumeShift = -5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

	;--------------------- GoblinArcher ----------------

AudioEvent WildGoblinArcher_SmallGroup_MoveLoop
  Sounds = EUGoArc_movG1La EUGoArc_movG1Lb EUGoArc_movG1Lc EUGoArc_movG1Ld EUGoArc_movG1Le EUGoArc_movG1Lf EUGoArc_movG1Lg EUGoArc_movG1Lh EUGoArc_movG1Li EUGoArc_movG1Lj    
  Sounds = EUGoArc_movG1Lk EUGoArc_movG1Ll EUGoArc_movG1Lm EUGoArc_movG1Ln EUGoArc_movG1Lo EUGoArc_movG1Lp EUGoArc_movG1Lq EUGoArc_movG1Lr EUGoArc_movG1Ls EUGoArc_movG1Lt
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = 5 15
  VolumeShift = -5
  Volume = 45
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildGoblinArcherFoleySelect
  Sounds = EUWiArc_folsela EUWiArc_folselb EUWiArc_folselc
  Priority = normal
  Limit = 2
  PitchShift = 0 15
  Volume = 50
  MinVolume = 30
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent PoisonArrows
  Sounds = EUGoArc_poiArra
  Volume = 135
  PitchShift = 40 50
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

AudioEvent PoisonBlades
  Sounds = EUGoWar_poiBlaa
  Volume = 110
  PitchShift = -5 5
  Limit = 3
  Type = world shrouded everyone 
  SubmixSlider = SoundFX
End

	;--------------------- GoblinWarrior GoblinFighter GoblinSwordsmen GoblinSwordsman ----------------

AudioEvent WildGoblinWarrior_SmallGroup_MoveLoop
  Sounds = EUGoWar_movG1La EUGoWar_movG1Lb EUGoWar_movG1Lc EUGoWar_movG1Ld EUGoWar_movG1Le EUGoWar_movG1Lf EUGoWar_movG1Lg EUGoWar_movG1Lh EUGoWar_movG1Li EUGoWar_movG1Lj   
  Sounds = EUGoWar_movG1Lk EUGoWar_movG1Ll EUGoWar_movG1Lm EUGoWar_movG1Ln EUGoWar_movG1Lo EUGoWar_movG1Lp EUGoWar_movG1Lq EUGoWar_movG1Lr EUGoWar_movG1Ls EUGoWar_movG1Lt
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  PitchShift = -5 0
  VolumeShift = -5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildGoblinWarriorFoleySelect
  Sounds = EUWiWar_folsela EUWiWar_folselb EUWiWar_folselc
  Priority = normal
  Limit = 2
  PitchShift = -5 15
  Volume = 70
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

	;--------------------- Scorpion ---------------------

AudioEvent ScorpionDismountFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 3000 3500
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ScorpionMountFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 3500 3500
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ScorpionMoveLoop
  Sounds = EUSpide_moveL2a EUSpide_moveL2b EUSpide_moveL2c EUSpide_moveL2d EUSpide_moveL2e EUSpide_moveL2f EUSpide_moveL2g EUSpide_moveL2h EUSpide_moveL2i EUSpide_moveL2j EUSpide_moveL2k
  Priority = low
  Control = loop fade_on_kill
  Limit = 2
  Volume = 40
  PitchShift = -40 -50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ScorpionMoveStartFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 500 500
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ScorpionSelectFoley
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Delay = 200 400
  Priority = lowest
  Limit = 3
  PitchShift = -10 10
  Volume = 40
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent ScorpionVoxDismount
  Sounds = EUWiSpR_vox001a EUWiSpR_vox001b EUWiSpR_vox001c EUWiSpR_vox001d EUWiSpR_vox001e EUWiSpR_vox001f
  Priority = normal
  Volume = 80
  MinVolume = 70
  Limit = 2
  PitchShift = -5 5
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent ScorpionVoxMount
  Sounds = EUWiSpR_vox001a EUWiSpR_vox001b EUWiSpR_vox001c EUWiSpR_vox001d EUWiSpR_vox001e EUWiSpR_vox001f
  Priority = normal
  Delay = 4500 5000
  Volume = 80
  MinVolume = 70
  Limit = 2
  PitchShift = -5 5
  Type = world player
  SubmixSlider = SoundFX
End

Multisound ScorpionDismountMS
	Subsounds = ScorpionVoxDismount ScorpionDismountFoley
End

Multisound ScorpionMountMS
	Subsounds = ScorpionVoxMount ScorpionMountFoley
End


	;--------------------- Spiderling -------------------

AudioEvent WildSpiderling_SmallGroup_MoveLoop1
  Sounds = EUWiSpi_movG1La EUWiSpi_movG1Lb EUWiSpi_movG1Lc EUWiSpi_movG1Ld EUWiSpi_movG1Le EUWiSpi_movG1Lf EUWiSpi_movG1Lg EUWiSpi_movG1Lh EUWiSpi_movG1Li EUWiSpi_movG1Lj EUWiSpi_movG1Lk EUWiSpi_movG1Ll 
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -5 5
  Volume = 45
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderling_SmallGroup_MoveLoop2
  Sounds = EUSpide_moveL2a EUSpide_moveL2b EUSpide_moveL2c EUSpide_moveL2d EUSpide_moveL2e EUSpide_moveL2f EUSpide_moveL2g EUSpide_moveL2h EUSpide_moveL2i EUSpide_moveL2j EUSpide_moveL2k
  Priority = lowest
  Control = loop fade_on_kill
  Limit = 3
  Volume = 25
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderling_MediumGroup_MoveLoop
  Sounds = EUWiSpR_movG1La EUWiSpR_movG1Lb EUWiSpR_movG1Lc EUWiSpR_movG1Ld EUWiSpR_movG1Le EUWiSpR_movG1Lf EUWiSpR_movG1Lg EUWiSpR_movG1Lh EUWiSpR_movG1Li EUWiSpR_movG1Lj 
  Control = loop ;fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -5 5
  Volume = 45
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound WildSpiderling_SmallGroup_MoveLoopMS
  Subsounds = WildSpiderling_SmallGroup_MoveLoop1 WildSpiderling_SmallGroup_MoveLoop2
End

AudioEvent WildSpiderlingFoleyAmbientLoop
  Sounds = EUSpide_ambie1a EUSpide_ambie1b EUSpide_ambie1c EUSpide_ambie1d
  Priority = low
  Control = loop
  Delay = 5000 20000
  Limit = 2
  Volume = 50
  PerFileVolumeShift = -10 10
  PerFilePitchShift = -40 40
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderlingFoleySelect
  ;Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Priority = normal
  Volume = 70
  MinVolume = 40
  Limit = 2
  PitchShift = -10 10
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderlingMoveLoop
  Sounds = EUSpide_moveL2a EUSpide_moveL2b EUSpide_moveL2c EUSpide_moveL2d EUSpide_moveL2e EUSpide_moveL2f EUSpide_moveL2g EUSpide_moveL2h EUSpide_moveL2i EUSpide_moveL2j EUSpide_moveL2k
  Priority = low
  Control = loop fade_on_kill
  Limit = 2
  Volume = 30
  PitchShift = -5 5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderlingVoxAttack
  Sounds = EUShelo_voiatta EUShelo_voiattb EUShelo_voiattc EUShelo_voiattd EUShelo_voidieb EUShelo_voidied EUShelo_voisela EUShelo_voiselc EUShelo_voiselk
  Priority = high
  Limit = 1
  Volume = 115
  MinVolume = 80
  PitchShift = 10 20
  Type = world player voice
  SubmixSlider = voice
End

; WildSpiderlingVoxEnterStateAttack in Voice.ini to use the BATTLE_CHATTER defines

AudioEvent WildSpiderlingVoxCreated
  Sounds = EUShelo_voiatta EUShelo_voiattb EUShelo_voiattc EUShelo_voiattd EUShelo_voidieb EUShelo_voidied EUShelo_voisela EUShelo_voiselc EUShelo_voiselk
  Priority = low
  Limit = 3
  Volume = 115
  MinVolume = 115
  PitchShift = 10 20
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderlingVoxDie
  Sounds = EUShelo_voidiea:750 EUShelo_voidieb:750 EUShelo_voidiec EUShelo_voidied EUShelo_voidiee:750
  Priority = low
  Limit = 3
  Volume = 105
  VolumeShift = -10
  PitchShift = 10 30
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderlingVoxHurt
  Sounds = EUShelo_voidiea EUShelo_voidieb EUShelo_voidiec EUShelo_voidied EUShelo_voidiee
  Priority = low
  Limit = 3
  Volume = 105
  VolumeShift = -10
  PitchShift = 10 30
  PlayPercent = 75
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

; WildSpiderlingVoxEnterStateHurt in Voice.ini to use the BATTLE_CHATTER defines

AudioEvent WildSpiderlingVoxMove
  Sounds = EUShelo_voimova EUShelo_voisela EUShelo_voiselb EUShelo_voiselc EUShelo_voiseld EUShelo_voisele EUShelo_voiself EUShelo_voiselg:500 EUSHelo_voiselh:500 EUSHelo_voiseli:500 EUSHelo_voiselj:500 EUSHelo_voiselk:500 EUSHelo_voisell:500 EUSHelo_voiselm:500
  Priority = high
  Limit = 1
  Volume = 115
  MinVolume = 80
  PitchShift = 10 20
  Type = world player voice
  SubmixSlider = voice
End

; WildSpiderlingVoxEnterStateMove in Voice.ini to use the BATTLE_CHATTER defines

AudioEvent WildSpiderlingVoxSelect
  Sounds = EUShelo_voimova:500 EUShelo_voisela:500 EUSHelo_voiselb:500 EUSHelo_voiselc:500 EUSHelo_voiseld:500 EUSHelo_voisele:500 EUSHelo_voiself:500 EUSHelo_voiselg EUShelo_voiselh EUShelo_voiseli EUShelo_voiselj EUShelo_voiselk EUShelo_voisell EUShelo_voiselm 
  Priority = high
  Limit = 1
  Volume = 115
  MinVolume = 80
  PitchShift = 10 20
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildSpiderlingVoxSelectBattle
  Sounds = EUShelo_voimova:500 EUShelo_voisela:500 EUSHelo_voiselb:500 EUSHelo_voiselc:500 EUSHelo_voiseld:500 EUSHelo_voisele:500 EUSHelo_voiself:500 EUSHelo_voiselg EUShelo_voiselh EUShelo_voiseli EUShelo_voiselj EUShelo_voiselk EUShelo_voisell EUShelo_voiselm 
  Priority = high
  Limit = 1
  Volume = 115
  MinVolume = 80
  PitchShift = 10 20
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildSpiderlingVoxSinglesLoop
  Sounds = EUShelo_voiatta EUShelo_voiattb EUShelo_voiattc EUShelo_voiattd EUShelo_voimova EUShelo_voisela EUShelo_voiselb EUShelo_voiselc EUShelo_voiseld EUShelo_voisele EUShelo_voiself EUShelo_voiselg EUShelo_voiselh EUShelo_voiseli EUShelo_voiselj EUShelo_voiselk EUShelo_voisell EUShelo_voiselm 
  Priority = low
  Limit = 2
  Volume = 80
  PerFileVolumeShift = -10
  PerFilePitchShift = 10 30
  Control = loop
  Delay = 7500 20000
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound WildSpiderlingAmbientLoopMS
	Subsounds = WildSpiderlingFoleyAmbientLoop WildSpiderlingVoxSinglesLoop
End

Multisound WildSpiderlingVoxSelectMS
	Subsounds = WildSpiderlingFoleySelect WildSpiderlingVoxSelect
End

Multisound WildSpiderlingVoxSelectBattleMS
	Subsounds = WildSpiderlingFoleySelect WildSpiderlingVoxSelectBattle
End

	;--------------------- SpiderRider -------------------

AudioEvent WildSpiderRider_SmallGroup_MoveLoop1
  Sounds = EUWiSpR_movG3La EUWiSpR_movG3Lb EUWiSpR_movG3Lc EUWiSpR_movG3Ld EUWiSpR_movG3Le EUWiSpR_movG3Lf EUWiSpR_movG3Lg EUWiSpR_movG3Lh EUWiSpR_movG3Li EUWiSpR_movG3Lj
  Sounds = EUWiSpR_movG3Lk EUWiSpR_movG3Ll EUWiSpR_movG3Lm EUWiSpR_movG3Ln EUWiSpR_movG3Lo EUWiSpR_movG3Lp EUWiSpR_movG3Lq EUWiSpR_movG3Lr EUWiSpR_movG3Ls EUWiSpR_movG3Lt
  Sounds = EUWiSpR_movG3Lu EUWiSpR_movG3Lv
  ;Sounds = EUWiSpi_movG1La EUWiSpi_movG1Lb EUWiSpi_movG1Lc EUWiSpi_movG1Ld EUWiSpi_movG1Le EUWiSpi_movG1Lf EUWiSpi_movG1Lg EUWiSpi_movG1Lh EUWiSpi_movG1Li EUWiSpi_movG1Lj EUWiSpi_movG1Lk EUWiSpi_movG1Ll 
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -10 10
  Volume = 55
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRider_SmallGroup_MoveLoop2
  Sounds = EUSpide_moveL2a EUSpide_moveL2b EUSpide_moveL2c EUSpide_moveL2d EUSpide_moveL2e EUSpide_moveL2f EUSpide_moveL2g EUSpide_moveL2h EUSpide_moveL2i EUSpide_moveL2j EUSpide_moveL2k
  Priority = lowest
  Control = loop fade_on_kill
  Limit = 2
  Volume = 25
  PitchShift = -15 -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRider_SmallGroup_MoveLoop3
  Sounds = EUWiSpR_movG2La EUWiSpR_movG2Lb EUWiSpR_movG2Lc EUWiSpR_movG2Ld EUWiSpR_movG2Le EUWiSpR_movG2Lf EUWiSpR_movG2Lg EUWiSpR_movG2Lh EUWiSpR_movG2Li EUWiSpR_movG2Lj EUWiSpR_movG2Lk EUWiSpR_movG2Ll EUWiSpR_movG2Lm EUWiSpR_movG2Ln EUWiSpR_movG2Lo
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -5 5
  Volume = 40
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRider_MediumGroup_MoveLoop
  Sounds = EUWiSpR_movG1La EUWiSpR_movG1Lb EUWiSpR_movG1Lc EUWiSpR_movG1Ld EUWiSpR_movG1Le EUWiSpR_movG1Lf EUWiSpR_movG1Lg EUWiSpR_movG1Lh EUWiSpR_movG1Li EUWiSpR_movG1Lj 
  Control = loop fade_on_kill
  Priority = lowest
  Limit = 3
  MinRange = 175
  MaxRange = 600
  PitchShift = -15 -5
  Volume = 50
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound WildSpiderRider_SmallGroup_MoveLoopMS
  Subsounds = WildSpiderRider_SmallGroup_MoveLoop1 WildSpiderRider_SmallGroup_MoveLoop2 WildSpiderRider_SmallGroup_MoveLoop3
End

AudioEvent WildSpiderRiderFoleySelect
  Sounds = EUWiSpR_folsela EUWiSpR_folselb EUWiSpR_folselc EUWiSpR_folseld EUWiSpR_folsele EUWiSpR_folself
  Priority = normal
  Volume = 60
  MinVolume = 40
  Limit = 2
  PitchShift = -10 10
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRiderMoveLoop
  Sounds = EUSpide_moveL2a EUSpide_moveL2b EUSpide_moveL2c EUSpide_moveL2d EUSpide_moveL2e EUSpide_moveL2f EUSpide_moveL2g EUSpide_moveL2h EUSpide_moveL2i EUSpide_moveL2j EUSpide_moveL2k
  Priority = low
  Control = loop fade_on_kill
  Limit = 2
  Volume = 30
  PitchShift = -15 -5
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRiderVoxSelect
  Sounds = EUWiSpR_vox001a EUWiSpR_vox001b EUWiSpR_vox001c EUWiSpR_vox001d EUWiSpR_vox001e EUWiSpR_vox001f
  Priority = high
  Volume = 80
  MinVolume = 70
  Limit = 2
  PitchShift = -5 5
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRiderVoxSinglesAmbientLoop
  Sounds = EUWiSpR_vox001a EUWiSpR_vox001b EUWiSpR_vox001c EUWiSpR_vox001d EUWiSpR_vox001e EUWiSpR_vox001f
  Priority = lowest
  Delay = 7500 15000
  Volume = 45
  PerFileVolumeShift = -10
  PerFilePitchShift = -30 -10
  Control = loop
  Limit = 2
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRider_SmallGroup_FoleyAmbientLoop
  Sounds = GURange_amG1L2a GURange_amG1L2b GURange_amG1L2c GURange_amG1L2d GURange_amG1L2e GURange_amG1L2f GURange_amG1L2g GURange_amG1L2h GURange_amG1L2i GURange_amG1L2j GURange_amG1L2k GURange_amG1L2l GURange_amG1L2m GURange_amG1L2n GURange_amG1L2o GURange_amG1L2p GURange_amG1L2q GURange_amG1L2r GURange_amG1L2s GURange_amG1L2t GURange_amG1L2u GURange_amG1L2v GURange_amG1L2w GURange_amG1L2x
  Control = loop
  Delay = 100 900
  Priority = lowest
  Limit = 2
  PerFilePitchShift = -5 5
  PerFileVolumeShift = -10
  Volume = 45
  MaxRange = 500
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRider_SpiderVoxSinglesLoop
  Sounds = EUShelo_voiatta EUShelo_voiattb EUShelo_voiattc EUShelo_voiattd EUShelo_voimova EUShelo_voisela EUShelo_voiselb EUShelo_voiselc EUShelo_voiseld EUShelo_voisele EUShelo_voiself EUShelo_voiselg EUShelo_voiselh EUShelo_voiseli EUShelo_voiselj EUShelo_voiselk EUShelo_voisell EUShelo_voiselm 
  Priority = low
  Limit = 2
  Volume = 55
  PerFileVolumeShift = -10
  PerFilePitchShift = 0 10
  Control = loop
  Delay = 7500 20000
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderRiderSpiderVoxDie
  Sounds = EUShelo_voidiea:750 EUShelo_voidieb:750 EUShelo_voidiec EUShelo_voidied EUShelo_voidiee:750
  Priority = low
  Limit = 3
  Volume = 105
  VolumeShift = -20
  PitchShift = 10 20
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound WildSpiderRiderAmbientLoopMS
	Subsounds = WildSpiderRider_SpiderVoxSinglesLoop WildSpiderRiderVoxSinglesAmbientLoop
End

	;--------------------- WildBuilder ----------------

AudioEvent WildBuilderCartRattlesLoop
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

AudioEvent WildBuilderFoleySelect
  Sounds = MUPorte_folsela MUPorte_folselb MUPorte_folselc
  Limit = 1
  PitchShift = -10 10
  Volume = 75
  MinVolume = 40
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildBuilderMoveLoop
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

AudioEvent WildBuilderMoveStart
  Sounds = MUPorte_movstaa MUPorte_movstab MUPorte_movstac
  Limit = 3
  PitchShift = -15 15
  Volume = 75
  VolumeShift = -10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

Multisound WildBuilderMoveLoopMS
  Subsounds = WildBuilderMoveLoop WildBuilderCartRattlesLoop
End


;----- WILD BUILDING SELECTS ------

AudioEvent WildCaveSelect
  Sounds = EBWiCav_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildFissureSelect
  Sounds = EBWiFis_selecta
  Volume = 85
  MinVolume = 75
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildFortressSelect
  Sounds = EBWiFor_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildDefiledMineSelect
  Sounds = EBWiDef_selecta
  Volume = 85
  MinVolume = 75
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderPitSelect
  Sounds = EBWiSpi_selecta
  Volume = 85
  MinVolume = 75
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildTreasureTroveSelect
  Sounds = EBWiTre_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildSentryTowerSelect
  Sounds = EBWiTow_selecta
  Volume = 95
  MinVolume = 85
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildArrowDenExpansionSelect1
  Sounds = EBWiTow_selecta
  Volume = 70
  MinVolume = 60
  MinRange = 400
  PitchShift = 30 40
  Limit = 1
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WildArrowDenExpansionSelect2
  Sounds = NBArrow_selecta
  Volume = 65
  MinVolume = 55
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

Multisound WildArrowDenExpansionSelectMS
  Subsounds = WildArrowDenExpansionSelect1 WildArrowDenExpansionSelect2
End


AudioEvent WildCaveAmbience
  Sounds = EBGoCav_ambiL1a EBGoCav_ambiL1b EBGoCav_ambiL1c EBGoCav_ambiL1d EBGoCav_ambiL1e EBGoCav_ambiL1f EBGoCav_ambiL1g
  Sounds = EBGoCav_ambiL1h EBGoCav_ambiL1i EBGoCav_ambiL1j EBGoCav_ambiL1k EBGoCav_ambiL1l EBGoCav_ambiL1m EBGoCav_ambiL1n
  Volume = 75
  PerFileVolumeShift = -10
  PerFilePitchShift = -10 10
  Control = loop
  Delay = 10000 20000
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent WildSpiderPitAmbience
  Sounds = EBSpide_ambiL1a EBSpide_ambiL1b EBSpide_ambiL1c EBSpide_ambiL1d EBSpide_ambiL1e
  Sounds = EBSpide_ambiL1f EBSpide_ambiL1g EBSpide_ambiL1h EBSpide_ambiL1i
  Volume = 75
  PerFileVolumeShift = -10
  PerFilePitchShift = -10 10
  Control = loop
  Delay = 10000 20000
  Limit = 3
  Priority = lowest
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End



;-------------------- BFME2 Emotion Cheer -------------------

	;----------- compilations ------------

AudioEvent EmotionGoblinCompilationVoxCheerSinglesLoop
  Sounds = EUGoArc_voxChea EUGoArc_voxCheb EUGoArc_voxChec EUGoArc_voxChed EUGoArc_voxChee
  Sounds = EUSpiRi_voxChea EUSpiRi_voxCheb EUSpiRi_voxChec EUSpiRi_voxChed EUSpiRi_voxChee EUSpiRi_voxChef EUSpiRi_voxCheg EUSpiRi_voxCheh EUSpiRi_voxChei
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

AudioEvent EmotionMarauderCompilationVoxCheerSinglesLoop
  Sounds = EUMarau_voxChea EUMarau_voxCheb EUMarau_voxChec EUMarau_voxChed EUMarau_voxChee
  Sounds = EUMarau_voxChef EUMarau_voxCheg EUMarau_voxCheh EUMarau_voxChei EUMarau_voxChej
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


AudioEvent EmotionGoblinArcherVoxCheerLoop
  Sounds = EUGoArc_voxChea EUGoArc_voxCheb EUGoArc_voxChec EUGoArc_voxChed EUGoArc_voxChee
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


AudioEvent EmotionMarauderVoxCheerLoop
  Sounds = EUMarau_voxChea EUMarau_voxCheb EUMarau_voxChec EUMarau_voxChed EUMarau_voxChee
  Sounds = EUMarau_voxChef EUMarau_voxCheg EUMarau_voxCheh EUMarau_voxChei EUMarau_voxChej
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


AudioEvent EmotionSpiderRiderVoxCheerLoop
  Sounds = EUSpiRi_voxChea EUSpiRi_voxCheb EUSpiRi_voxChec EUSpiRi_voxChed EUSpiRi_voxChee EUSpiRi_voxChef EUSpiRi_voxCheg EUSpiRi_voxCheh EUSpiRi_voxChei
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

;-------------------------------------------------------

AudioEvent EmotionGoblinCompilationVoxTauntSinglesLoop
  Sounds = EUGoArc_voxTaua EUGoArc_voxTaub EUGoArc_voxTauc
  Sounds = EUSpiRi_voxTaua EUSpiRi_voxTaub EUSpiRi_voxTauc EUSpiRi_voxTaud EUSpiRi_voxTaue EUSpiRi_voxTauf
  Sounds = EUSpiRi_voxTaug EUSpiRi_voxTauh EUSpiRi_voxTaui EUSpiRi_voxTauj EUSpiRi_voxTauk
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

AudioEvent EmotionMarauderCompilationVoxTauntSinglesLoop
  Sounds = EUMarau_voxTaua EUMarau_voxTaub EUMarau_voxTauc EUMarau_voxTaud EUMarau_voxTaue EUMarau_voxTauf EUMarau_voxTaug EUMarau_voxTauh
  Sounds = EUMarau_voxTaui EUMarau_voxTauj EUMarau_voxTauk EUMarau_voxTaul EUMarau_voxTaum EUMarau_voxTaun EUMarau_voxTauo EUMarau_voxTaup
  Sounds = EUMarau_voxTauq EUMarau_voxTaur EUMarau_voxTaus EUMarau_voxTaut EUMarau_voxTauu EUMarau_voxTauv EUMarau_voxTauw
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


AudioEvent EmotionGoblinArcherVoxTauntLoop
  Sounds = EUGoArc_voxTaua EUGoArc_voxTaub EUGoArc_voxTauc
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


AudioEvent EmotionMarauderVoxTauntLoop
  Sounds = EUMarau_voxTaua EUMarau_voxTaub EUMarau_voxTauc EUMarau_voxTaud EUMarau_voxTaue EUMarau_voxTauf EUMarau_voxTaug EUMarau_voxTauh
  Sounds = EUMarau_voxTaui EUMarau_voxTauj EUMarau_voxTauk EUMarau_voxTaul EUMarau_voxTaum EUMarau_voxTaun EUMarau_voxTauo EUMarau_voxTaup
  Sounds = EUMarau_voxTauq EUMarau_voxTaur EUMarau_voxTaus EUMarau_voxTaut EUMarau_voxTauu EUMarau_voxTauv EUMarau_voxTauw
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


AudioEvent EmotionSpiderRiderVoxTauntLoop
  Sounds = EUSpiRi_voxTaua EUSpiRi_voxTaub EUSpiRi_voxTauc EUSpiRi_voxTaud EUSpiRi_voxTaue EUSpiRi_voxTauf
  Sounds = EUSpiRi_voxTaug EUSpiRi_voxTauh EUSpiRi_voxTaui EUSpiRi_voxTauj EUSpiRi_voxTauk
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


;-----------------------------------------FEARTERROR

AudioEvent GoblinVoxFearSinglesLoop
  Sounds = EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1m EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox2g EUGobli_amVox2k EUGobli_amVox2p 
  Sounds = EUOrc_voxdiebl
  Volume = 55
  VolumeShift = -10
  PitchShift = -10 10
  Delay = 1000 8000
  Limit = 3
  Control = loop  
  Priority = lowest
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxFearSingles
  Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxtere EUOrc_voxterf EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero
  ;Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxterd EUOrc_voxtere EUOrc_voxterf EUOrc_voxterg EUOrc_voxterh EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero 
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 55
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxTerrorSingles
  Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxtere EUOrc_voxterf EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero
  ;Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxterd EUOrc_voxtere EUOrc_voxterf EUOrc_voxterg EUOrc_voxterh EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero 
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 55
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxDoomIncomingSingles
  Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxtere EUOrc_voxterf EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero
  ;Sounds = EUOrc_voxtera EUOrc_voxterb EUOrc_voxterc EUOrc_voxterd EUOrc_voxtere EUOrc_voxterf EUOrc_voxterg EUOrc_voxterh EUOrc_voxteri EUOrc_voxterj EUOrc_voxterk EUOrc_voxterl EUOrc_voxterm EUOrc_voxtern EUOrc_voxtero 
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 55
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;------------------TAUNT

AudioEvent GoblinVoxTauntSingles
  Sounds = EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1m EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox2g EUGobli_amVox2k EUGobli_amVox2p 
  Sounds = EUOrc_voxdiebl
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 50
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxPointSingles
  Sounds = EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1m EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox2g EUGobli_amVox2k EUGobli_amVox2p 
  Sounds = EUOrc_voxdiebl
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 50
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxTauntPointSinglesLoop
  ;Sounds = EUGobli_amVox1a EUGobli_amVox1b EUGobli_amVox1c EUGobli_amVox1d EUGobli_amVox1e EUGobli_amVox1f EUGobli_amVox1g EUGobli_amVox1h EUGobli_amVox1i EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1l EUGobli_amVox1m EUGobli_amVox1n EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox1q EUGobli_amVox1r EUGobli_amVox1s EUGobli_amVox1t EUGobli_amVox1u EUGobli_amVox1v
  Sounds = EUGobli_amVox2a EUGobli_amVox2b EUGobli_amVox2c EUGobli_amVox2d EUGobli_amVox2e EUGobli_amVox2f EUGobli_amVox2g EUGobli_amVox2h EUGobli_amVox2i EUGobli_amVox2j EUGobli_amVox2k EUGobli_amVox2l EUGobli_amVox2m EUGobli_amVox2n EUGobli_amVox2o EUGobli_amVox2p EUGobli_amVox2q
  Volume = 45
  PitchShift = -15 15
  Delay = 1000 10000
  Limit = 3
  Control = loop  
  Priority = lowest
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

;----------------------------CHEER

AudioEvent GoblinVoxCheerSingles
  ;Sounds = EUGobli_amVox1a EUGobli_amVox1b EUGobli_amVox1c EUGobli_amVox1d EUGobli_amVox1e EUGobli_amVox1f EUGobli_amVox1g EUGobli_amVox1h EUGobli_amVox1i EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1l EUGobli_amVox1m EUGobli_amVox1n EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox1q EUGobli_amVox1r EUGobli_amVox1s EUGobli_amVox1t EUGobli_amVox1u EUGobli_amVox1v
  Sounds = EUGobli_amVox2a EUGobli_amVox2b EUGobli_amVox2c EUGobli_amVox2d EUGobli_amVox2e EUGobli_amVox2f EUGobli_amVox2g EUGobli_amVox2h EUGobli_amVox2i EUGobli_amVox2j EUGobli_amVox2k EUGobli_amVox2l EUGobli_amVox2m EUGobli_amVox2n EUGobli_amVox2o EUGobli_amVox2p EUGobli_amVox2q
  Priority = low
  Limit = 1
  PlayPercent = 5
  Volume = 65
  VolumeShift = -10
  PitchShift = -10 10
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-------------------------------------------

AudioEvent GoblinGroupLargeBattleAmbienceLoop
  Sounds = EUGobli_baG2L2a EUGobli_baG2L2b EUGobli_baG2L2c EUGobli_baG2L2d EUGobli_baG2L2e EUGobli_baG2L2f EUGobli_baG2L2g EUGobli_baG2L2h EUGobli_baG2L2i EUGobli_baG2L2j EUGobli_baG2L2k EUGobli_baG2L2l EUGobli_baG2L2m EUGobli_baG2L2n EUGobli_baG2L2o
  Attack = EUGobli_baG2L1a EUGobli_baG2L1b
  Decay = EUGobli_baG2L3a EUGobli_baG2L3b
  Control = loop 
  Priority = lowest
  Limit = 2
  PitchShift = -5  5
  Volume = 40
  LowPassCutoff = 50
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinGroupMediumBattleVoxLoop
  Sounds = EUGobli_baG1L2_01 EUGobli_baG1L2_02 EUGobli_baG1L2_03 EUGobli_baG1L2_04 EUGobli_baG1L2_05 EUGobli_baG1L2_06 EUGobli_baG1L2_07 EUGobli_baG1L2_08 EUGobli_baG1L2_09 EUGobli_baG1L2_10 EUGobli_baG1L2_11 EUGobli_baG1L2_12 EUGobli_baG1L2_13 EUGobli_baG1L2_14 EUGobli_baG1L2_15 EUGobli_baG1L2_16 EUGobli_baG1L2_17 EUGobli_baG1L2_18 EUGobli_baG1L2_19 EUGobli_baG1L2_20 EUGobli_baG1L2_21 EUGobli_baG1L2_22 EUGobli_baG1L2_23 EUGobli_baG1L2_24 

  Sounds = EUGobli_baG1L2_25 EUGobli_baG1L2_26 EUGobli_baG1L2_27 EUGobli_baG1L2_28 EUGobli_baG1L2_29 EUGobli_baG1L2_30 EUGobli_baG1L2_31 EUGobli_baG1L2_32 EUGobli_baG1L2_33 EUGobli_baG1L2_34 EUGobli_baG1L2_35 EUGobli_baG1L2_36 EUGobli_baG1L2_37 EUGobli_baG1L2_38 EUGobli_baG1L2_39 EUGobli_baG1L2_40 EUGobli_baG1L2_41 EUGobli_baG1L2_42 EUGobli_baG1L2_43 EUGobli_baG1L2_44 EUGobli_baG1L2_45 
  
  Attack = EUGobli_baG1L1_01 EUGobli_baG1L1_02 EUGobli_baG1L1_03 EUGobli_baG1L1_04 
  Decay = EUGobli_baG1L3_01 EUGobli_baG1L3_02 EUGobli_baG1L3_03 EUGobli_baG1L3_04 
  Control = loop 
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  Volume = 40
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinGroupAmbientLoop
  Sounds = EUGobli_fsG1L1a EUGobli_fsG1L2a EUGobli_fsG1L2b EUGobli_fsG1L2c EUGobli_fsG1L2d EUGobli_fsG1L2e EUGobli_fsG1L2f EUGobli_fsG1L2g EUGobli_fsG1L2h EUGobli_fsG1L2i EUGobli_fsG1L2j EUGobli_fsG1L2k EUGobli_fsG1L2l EUGobli_fsG1L2m EUGobli_fsG1L2n EUGobli_fsG1L2o EUGobli_fsG1L2p EUGobli_fsG1L2q EUGobli_fsG1L2r EUGobli_fsG1L2s EUGobli_fsG1L2t EUGobli_fsG1L2u EUGobli_fsG1L2v EUGobli_fsG1L2w EUGobli_fsG1L2x EUGobli_fsG1L2y EUGobli_fsG1L2z

  Sounds = EUGobli_amG2L2a EUGobli_amG2L2b EUGobli_amG2L2c EUGobli_amG2L2d EUGobli_amG2L2e EUGobli_amG2L2f EUGobli_amG2L2g EUGobli_amG2L2h EUGobli_amG2L2i EUGobli_amG2L2j EUGobli_amG2L2k EUGobli_amG2L2l EUGobli_amG2L2m EUGobli_amG2L2n EUGobli_amG2L2o EUGobli_amG2L2p EUGobli_amG2L2q EUGobli_amG2L2r EUGobli_amG2L2s EUGobli_amG2L2t EUGobli_amG2L2u EUGobli_amG2L2v EUGobli_amG2L2w EUGobli_amG2L2x

  Sounds = EUGobli_amG1L2a EUGobli_amG1L2b EUGobli_amG1L2c EUGobli_amG1L2d EUGobli_amG1L2e EUGobli_amG1L2f EUGobli_amG1L2g EUGobli_amG1L2h EUGobli_amG1L2i EUGobli_amG1L2j EUGobli_amG1L2k EUGobli_amG1L2l EUGobli_amG1L2m EUGobli_amG1L2n EUGobli_amG1L2o EUGobli_amG1L2p EUGobli_amG1L2q EUGobli_amG1L2r EUGobli_amG1L2s EUGobli_amG1L2t EUGobli_amG1L2u
  Control = loop 
  Priority = lowest
  Limit = 3
  PitchShift = -5 5
  Volume = 55
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinVoxAmbienceSinglesLoop
  Sounds = EUGobli_amVox1a EUGobli_amVox1b EUGobli_amVox1c EUGobli_amVox1d EUGobli_amVox1e EUGobli_amVox1f EUGobli_amVox1g EUGobli_amVox1h EUGobli_amVox1i EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1l EUGobli_amVox1m EUGobli_amVox1n EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox1q EUGobli_amVox1r EUGobli_amVox1s EUGobli_amVox1t EUGobli_amVox1u EUGobli_amVox1v
  ;Sounds = EUGobli_amVox2a EUGobli_amVox2b EUGobli_amVox2c EUGobli_amVox2d EUGobli_amVox2e EUGobli_amVox2f EUGobli_amVox2g EUGobli_amVox2h EUGobli_amVox2i EUGobli_amVox2j EUGobli_amVox2k EUGobli_amVox2l EUGobli_amVox2m EUGobli_amVox2n EUGobli_amVox2o EUGobli_amVox2p EUGobli_amVox2q
  Control = loop  
  Priority = lowest
  Delay = 600 3000
  Limit = 3
  PitchShift = -15 15
  Volume = 50
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinGroupVoxMoveLoop
  Sounds = EUGobli_amVox1a EUGobli_amVox1b EUGobli_amVox1c EUGobli_amVox1d EUGobli_amVox1e EUGobli_amVox1f EUGobli_amVox1g EUGobli_amVox1h EUGobli_amVox1i EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1l EUGobli_amVox1m EUGobli_amVox1n EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox1q EUGobli_amVox1r EUGobli_amVox1s EUGobli_amVox1t EUGobli_amVox1u EUGobli_amVox1v
  Sounds = EUGobli_amVox2a EUGobli_amVox2b EUGobli_amVox2c EUGobli_amVox2d EUGobli_amVox2e EUGobli_amVox2f EUGobli_amVox2g EUGobli_amVox2h EUGobli_amVox2i EUGobli_amVox2j EUGobli_amVox2k EUGobli_amVox2l EUGobli_amVox2m EUGobli_amVox2n EUGobli_amVox2o EUGobli_amVox2p EUGobli_amVox2q
  Control = loop fade_on_kill
  Priority = lowest
  Delay = 200 500
  Limit = 3
  PitchShift = -15 15
  Volume = 50
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End

AudioEvent GoblinGroupBattleVox
  Sounds = EUGobli_amVox1a EUGobli_amVox1b EUGobli_amVox1c EUGobli_amVox1d EUGobli_amVox1e EUGobli_amVox1f EUGobli_amVox1g EUGobli_amVox1h EUGobli_amVox1i EUGobli_amVox1j EUGobli_amVox1k EUGobli_amVox1l EUGobli_amVox1m EUGobli_amVox1n EUGobli_amVox1o EUGobli_amVox1p EUGobli_amVox1q EUGobli_amVox1r EUGobli_amVox1s EUGobli_amVox1t EUGobli_amVox1u EUGobli_amVox1v
  Sounds = EUGobli_amVox2a EUGobli_amVox2b EUGobli_amVox2c EUGobli_amVox2d EUGobli_amVox2e EUGobli_amVox2f EUGobli_amVox2g EUGobli_amVox2h EUGobli_amVox2i EUGobli_amVox2j EUGobli_amVox2k EUGobli_amVox2l EUGobli_amVox2m EUGobli_amVox2n EUGobli_amVox2o EUGobli_amVox2p EUGobli_amVox2q
  Control = loop 
  Priority = lowest
  Limit = 3
  PitchShift = -15 15
  Volume = 50
  Type = world everyone shrouded
  SubmixSlider = SoundFX
End


; UPGRADES GOBLIN FORTRESS

AudioEvent UpgradeGoblinFortressFireArrows
  Sounds = EBGoFor_fireara
  Volume = 105
  MinVolume = 85
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeGoblinFortressBatCloud
  Sounds = EBGoFor_batcloa
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeGoblinFortressWebCocoon
  Sounds = EBGoFor_webcoca
  Volume = 100
  MinVolume = 80
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeGoblinFortressRazorSpine
  Sounds = EBGoFor_razorSa
  Volume = 115
  MinVolume = 95
  Delay = 2000 2000
  PitchShift = -10 -5
  Limit = 3
  Type = world shrouded player
  SubmixSlider = SoundFX
End

AudioEvent UpgradeHeavyArmor
  Sounds = WIUpgra_armor1a
  Limit = 1
  Volume = 100
  MinVolume = 80
  Type = world shrouded player
  SubmixSlider = SoundFX
End

;----------goblindie

AudioEvent GoblinVoiceDie
  Sounds = EUGobli_voxdiea EUGobli_voxdieb EUGobli_voxdiec EUGobli_voxdied EUGobli_voxdiee EUGobli_voxdief EUGobli_voxdieg EUGobli_voxdieh EUGobli_voxdiei EUGobli_voxdiej EUGobli_voxdiek EUGobli_voxdiel EUGobli_voxdiem EUGobli_voxdien EUGobli_voxdieo EUGobli_voxdiep
  Priority = low
  Limit = 3
  Volume = 95
  VolumeShift = -10
  PitchShift = 40 60
  Type = world shrouded everyone
  SubmixSlider = SoundFX
End

;-----------------------------

AudioEvent WorldGoblinFortress
  Sounds = EBWiFor_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldGoblinCave
  Sounds = EBWiCav_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldGoblinTreasureTrove
  Sounds = EBWiTre_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

AudioEvent WorldGoblinMineShaft
  Sounds = EBWiDef_selecta
  Volume = 80
  MinVolume = 70
  Limit = 1
  MinRange = 400
  Type = world player
  SubmixSlider = SoundFX
End

;----------------------------

AudioEvent GoblinGroupExtraLargeSelectStereo
  Sounds = GUCrowd_seleG3a
  Volume = 30
  MinVolume = 20
  PitchShift = 0 20
  Type = player
  SubmixSlider = SoundFX
  Limit = 3
End

AudioEvent GoblinGroupExtraLargeAttackChargeStereo
  Sounds = GUCrowd_seleG3a
  Volume = 50
  MinVolume = 40
  PitchShift = 0 20
  Type = player
  SubmixSlider = SoundFX
  Limit = 3
End


Multisound GoblinGroupLarge_AttackChargeMS
  Subsounds = GoblinGroupMedium_AttackChargeMS HobbitGroupMedium_AttackChargeMS
End

Multisound GoblinGroupLarge_SelectMS
  Subsounds = GoblinGroupMedium_SelectMS HobbitGroupMedium_SelectMS
End

Multisound GoblinGroupExtraLarge_AttackChargeMS
  Subsounds = GoblinGroupLarge_AttackChargeMS GoblinGroupExtraLargeAttackChargeStereo
End

Multisound GoblinGroupExtraLarge_SelectMS
  Subsounds = GoblinGroupLarge_SelectMS GoblinGroupExtraLargeSelectStereo
End
