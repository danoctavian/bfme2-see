////////////////
// VOICE.INC //
//////////////
//Harad//
////////





;----------------------------------------------- HaradrimArcher -------------------------------------------

AudioEvent HaradrimArcherVoiceAttack
  Sounds      = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf
  Volume      = UNIT_RESPONSE_VOLUME
  Priority    = high
  MinRange    = 320
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimArcherVoiceEnterStateAttack
  Sounds      = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimArcherVoiceEnterStateMove
  Sounds      = EUHarad_voimova EUHarad_voimovb EUHarad_voimovc EUHarad_voimovd EUHarad_voimove
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimArcherVoiceMove
  Sounds      = EUHarad_voimova EUHarad_voimovb EUHarad_voimovc EUHarad_voimovd EUHarad_voimove
  Volume      = UNIT_RESPONSE_VOLUME
  Priority    = high
  MinRange    = 320
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimArcherVoiceSelect
  Sounds      = EUHarad_voisela EUHarad_voiselb EUHarad_voiselc EUHarad_voiseld EUHarad_voisele EUHarad_voiself
  Volume      = UNIT_RESPONSE_VOLUME
  Priority    = high
  MinRange    = 320
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

;----------------------------------------------- Haradrim -------------------------------------------

AudioEvent HaradrimVoiceAttack
  Sounds        = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateAttack
  Sounds        = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceAttackBuilding
  Sounds        = EUHarad_voiatba EUHarad_voiatbb EUHarad_voiatbc EUHarad_voiatbd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateAttackBuilding
  Sounds        = EUHarad_voiatba EUHarad_voiatbb EUHarad_voiatbc EUHarad_voiatbd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceAttackCharge
  Sounds        = EUHarad_voiatca EUHarad_voiatcb EUHarad_voiatcc 
  Sounds        = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateAttackCharge
  Sounds        = EUHarad_voiatca EUHarad_voiatcb EUHarad_voiatcc 
  Sounds        = EUHarad_voiatta EUHarad_voiattb EUHarad_voiattc EUHarad_voiattd EUHarad_voiatte EUHarad_voiattf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceCaptureBuilding
  Sounds = EUHarad_voicapa EUHarad_voicapb EUHarad_voicapc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceDie
  Sounds        = EUHarad_voidiea EUHarad_voidieb EUHarad_voidiec EUHarad_voidied EUHarad_voidiee EUHarad_voidief EUHarad_voidieg EUHarad_voidieh
  Volume        = 100
  VolumeShift   = -20
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceFearCower
  Sounds        = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceFearDisperse
  Sounds        = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd EUHarad_voifede
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceFearRegroup
  Sounds        = EUHarad_voifera EUHarad_voiferb EUHarad_voiferc EUHarad_voiferd EUHarad_voifere:250
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceGarrisonMumakil
  Sounds        = EUHarad_voigama EUHarad_voigamb EUHarad_voigamc ;EUHarad_voigamd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceGarrison
  Sounds        = EUHarad_voigara EUHarad_voigarb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceGarrisonSlaughterHouse
  Sounds        =  EUHarad_voigarb ;EUHarad_voigara
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceMoveCamp
  Sounds        = EUHarad_voimoca EUHarad_voimocb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateMoveCamp
  Sounds        = EUHarad_voimoca EUHarad_voimocb 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceMove
  Sounds        = EUHarad_voimova EUHarad_voimovb EUHarad_voimovc EUHarad_voimovd EUHarad_voimove 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateMove
  Sounds        = EUHarad_voimova EUHarad_voimovb EUHarad_voimovc EUHarad_voimovd EUHarad_voimove 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceRetreat
  Sounds        = EUHarad_voireta EUHarad_voiretb EUHarad_voiretc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceEnterStateRetreat
  Sounds        = EUHarad_voireta EUHarad_voiretb EUHarad_voiretc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradrimVoiceSelectBattle
  Sounds        = EUHarad_voiseba EUHarad_voisebb EUHarad_voisebc EUHarad_voisebd EUHarad_voisebe 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	    = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceSelect
  Sounds        = EUHarad_voisela EUHarad_voiselb EUHarad_voiselc EUHarad_voiseld EUHarad_voisele EUHarad_voiself EUHarad_voiselg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound HaradrimVoiceSelectMS
	Subsounds = HaradrimVoiceSelect YeomanArcherVoiceSelect2
End

AudioEvent HaradrimVoiceLineFormation			;nothing specific recorded for this action
  Sounds        = EUHarad_voifecd EUHarad_voifece EUHarad_voimove:250
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent HaradrimVoiceWedgeFormation			;nothing specific recorded for this action
  Sounds        = EUHarad_voifere EUHarad_voiferb:250
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End



;----- HARADRIM EMOTIONS -------

AudioEvent HaradrimVoiceTerrorAragornElendil
  ;Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg
  Sounds = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd EUHarad_voifede
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceDoomIncoming
  Sounds = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = DOOM_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceCower
  Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceCowerBusy
  Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceCowerBoromirHorn
  Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoicePointEagle
  Sounds = EUHarad_voifede EUHarad_voiatte
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoicePointGeneric
  Sounds = EUHarad_voiatte EUHarad_voifedd
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 2						;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceRegroup 
  Sounds = EUHarad_voifera EUHarad_voiferb EUHarad_voiferc EUHarad_voiferd EUHarad_voifere 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5						;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceTerrorHeads
  ;disperse portion
  Sounds = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd 
  ;cower portion
  Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent HaradrimVoiceTerrorScreech
  Sounds = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd
  ;Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End




;------------------------------------Haradrim cavalry-------------------------------------------------------------------

AudioEvent HaradCavVoiceCaptureBuilding
  Sounds = MUHarCv_voicapa MUHarCv_voicapb MUHarCv_voicapc MUHarCv_voicapd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceAttackBuilding
  Sounds = MUHarCv_voiatba MUHarCv_voiatbb MUHarCv_voiatbc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceAttackCharge
  Sounds = MUHarCv_voiatca MUHarCv_voiatcb MUHarCv_voiatcc MUHarCv_voiatcd  
  Sounds = MUHarCv_voiatta MUHarCv_voiattb MUHarCv_voiattc MUHarCv_voiattd MUHarCv_voiatte MUHarCv_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceEnterStateAttackCharge
  Sounds = MUHarCv_voiatca MUHarCv_voiatcb MUHarCv_voiatcc MUHarCv_voiatcd  
  Sounds = MUHarCv_voiatta MUHarCv_voiattb MUHarCv_voiattc MUHarCv_voiattd MUHarCv_voiatte MUHarCv_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent HaradCavVoiceAttack
  Sounds = MUHarCv_voiatta MUHarCv_voiattb MUHarCv_voiattc MUHarCv_voiattd MUHarCv_voiatte MUHarCv_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound HaradCavVoiceAttackMS
	Subsounds = HaradCavVoiceAttack OrcVoiceAttack2
End

AudioEvent HaradCavVoiceDie
  Sounds = MUHarCv_voidiea MUHarCv_voidieb MUHarCv_voidiec MUHarCv_voidied MUHarCv_voidiee MUHarCv_voidief MUHarCv_voidieg MUHarCv_voidieh MUHarCv_voidiei
  Volume      = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceDisengage
  Sounds = MUHarCv_voidisa MUHarCv_voidisb
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = HELPME_MINVOLUME 
  Type        = world player voice
  Priority = critical
  SubmixSlider = voice
End


AudioEvent HaradCavVoiceMoveCamp
  Sounds = MUHarCv_voimoca MUHarCv_voimocb  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceMoveShip
  Sounds = MUHarCv_voimosa MUHarCv_voimosb  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceMoveGarr
  Sounds = MUHarCv_voigara MUHarCv_voigarb MUHarCv_voigarc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


AudioEvent HaradCavVoiceMove
  Sounds = MUHarCv_voimova MUHarCv_voimovb MUHarCv_voimovc MUHarCv_voimovd MUHarCv_voimove MUHarCv_voimovf MUHarCv_voimovg ;MUHarCv_voimovh  MUHarCv_voimovj  ;MUHarCv_voimovi
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

Multisound HaradCavVoiceMoveMS
	Subsounds = HaradCavVoiceMove OrcVoiceMove2
End


AudioEvent HaradCavVoiceMoveGroup
  Sounds = MUHarCv_voimova MUHarCv_voimovb MUHarCv_voimovc MUHarCv_voimovd MUHarCv_voimove MUHarCv_voimovf MUHarCv_voimovg ;MUHarCv_voimovh  MUHarCv_voimovj  ;MUHarCv_voimovi
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceSalute
  Sounds = MUHarCv_voisala MUHarCv_voisalb MUHarCv_voisalc ;MUHarCv_voisald  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceSelectBattle
  Sounds = MUHarCv_voiseba MUHarCv_voisebb MUHarCv_voisebc MUHarCv_voisebd MUHarCv_voisebe MUHarCv_voisebf MUHarCv_voisebg MUHarCv_voisebh 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent HaradCavVoiceSelect
  Sounds = MUHarCv_voisela MUHarCv_voiselb MUHarCv_voiselc MUHarCv_voiseld MUHarCv_voisele MUHarCv_voiself ;MUHarCv_voiselg MUHarCv_voiselh MUHarCv_voiseli  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


Multisound HaradCavVoiceSelectMS
	Subsounds = HaradCavVoiceSelect HeroVoiceSelect2
End

AudioEvent HaradCavVoiceRetreat
  Sounds = MUHarCv_voireta MUHarCv_voiretb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


AudioEvent HaradCavVoiceLeap
  Sounds = MUHarCv_voispea MUHarCv_voispeb MUHarCv_voispec 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


;-----------------

AudioEvent HaradrimCompiledVoiceFearDisperse
  Sounds = EUHarad_voifeca EUHarad_voifecb EUHarad_voifecc EUHarad_voifecd EUHarad_voifece EUHarad_voifecf EUHarad_voifecg
  Sounds = EUHarad_voifeda EUHarad_voifedb EUHarad_voifedc EUHarad_voifedd EUHarad_voifede
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End