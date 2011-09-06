////////////////
// VOICE.INC //
//////////////
//Rhun//
///////



;------------------------------------------- SoldierOfRhun ---------------------------------------------

AudioEvent SoldierOfRhunVoiceAmbushed
  Sounds = EUSoldR_voiamba EUSoldR_voiambb EUSoldR_voiambc EUSoldR_voiambd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  MinRange    = 400
  MaxRange    = 1000
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceAttackBuilding
  Sounds = EUSoldR_voiatba EUSoldR_voiatbb EUSoldR_voiatbc 
  Sounds = EUSoldR_voiatta EUSoldR_voiattb EUSoldR_voiattd EUSoldR_voiatte EUSoldR_voiattf  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateAttackBuilding
  Sounds = EUSoldR_voiatba EUSoldR_voiatbb EUSoldR_voiatbc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceAttackCharge
  Sounds = EUSoldR_voiatca EUSoldR_voiatcb ;EUSoldR_voiatcc 
  Sounds = EUSoldR_voiatta EUSoldR_voiattb EUSoldR_voiattc EUSoldR_voiattd EUSoldR_voiatte EUSoldR_voiattf EUSoldR_voiattg EUSoldR_voiatth EUSoldR_voiatti 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateAttackCharge
  Sounds = EUSoldR_voiatca EUSoldR_voiatcb EUSoldR_voiatcc 
  Sounds = EUSoldR_voiatta EUSoldR_voiattb EUSoldR_voiattc EUSoldR_voiattd EUSoldR_voiatte EUSoldR_voiattf EUSoldR_voiattg EUSoldR_voiatth EUSoldR_voiatti 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceAttack
  Sounds = EUSoldR_voiatta EUSoldR_voiattb EUSoldR_voiattc EUSoldR_voiattd EUSoldR_voiatte EUSoldR_voiattf EUSoldR_voiattg EUSoldR_voiatth EUSoldR_voiatti 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateAttack
  Sounds = EUSoldR_voiatta EUSoldR_voiattb EUSoldR_voiattc EUSoldR_voiattd EUSoldR_voiatte EUSoldR_voiattf EUSoldR_voiattg EUSoldR_voiatth EUSoldR_voiatti 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceDie
  Sounds = EUSoldR_voidiea EUSoldR_voidieb EUSoldR_voidiec EUSoldR_voidied EUSoldR_voidiee EUSoldR_voidief EUSoldR_voidieg EUSoldR_voidieh EUSoldR_voidiei EUSoldR_voidiej
  Volume      = 90
  VolumeShift   = -20
  MinRange      = 400
  MaxRange      = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceDisengage
  Sounds = EUSoldR_voidisa EUSoldR_voidisb EUSoldR_voidisc EUSoldR_voidisd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateDisengage
  Sounds = EUSoldR_voidisa EUSoldR_voidisb EUSoldR_voidisc EUSoldR_voidisd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceFearCower
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd
  Volume      = UNIT_RESPONSE_VOLUME
  MinRange      = 400
  MaxRange      = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceFearDisperse
  Sounds = EUSoldR_voifeda EUSoldR_voifedb EUSoldR_voifedc EUSoldR_voifedd EUSoldR_voifede 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceFearRegroup
  Sounds = EUSoldR_voifera EUSoldR_voiferb EUSoldR_voiferc EUSoldR_voiferd EUSoldR_voifere EUSoldR_voiferf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinRange      = 400
  MaxRange      = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceGarrison
  Sounds = EUSoldR_voigara EUSoldR_voigarb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceGarrisonSlaughterHouse
  Sounds = EUSoldR_voimova EUSoldR_voimovb EUSoldR_voimovc EUSoldR_voimovf EUSoldR_voimovg 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceLineFormation
  Sounds = EUSoldR_voilina EUSoldR_voilinb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceMoveCamp
  Sounds = EUSoldR_voimoca EUSoldR_voimocb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateMoveCamp
  Sounds = EUSoldR_voimoca EUSoldR_voimocb 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceMove
  Sounds = EUSoldR_voimova EUSoldR_voimovb EUSoldR_voimovc EUSoldR_voimovd EUSoldR_voimove EUSoldR_voimovf EUSoldR_voimovg 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent   = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateMove
  Sounds = EUSoldR_voimova EUSoldR_voimovb EUSoldR_voimovc EUSoldR_voimovd EUSoldR_voimove EUSoldR_voimovf EUSoldR_voimovg 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoicePorcupineFormation
  Sounds = EUSoldR_voipora ;EUSoldR_voiporb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoicePorcupineEveryone
  Sounds = EUSoldR_voipora ;EUSoldR_voiporb 
  Volume      = 100
  MinRange    = 400
  MaxRange    = 1000
  Limit       = 1
  Type        = world everyone allies voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceRetreat
  Sounds = EUSoldR_voireta EUSoldR_voiretb EUSoldR_voiretc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceEnterStateRetreat
  Sounds = EUSoldR_voireta EUSoldR_voiretb EUSoldR_voiretc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SoldierOfRhunVoiceSelectBattle
  Sounds = EUSoldR_voiseba EUSoldR_voisebb EUSoldR_voisebc EUSoldR_voisebd EUSoldR_voisebe 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent SoldierOfRhunVoiceSelect
  Sounds = EUSoldR_voisela EUSoldR_voiselb EUSoldR_voiselc EUSoldR_voiseld EUSoldR_voisele EUSoldR_voiself EUSoldR_voiselg 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound SoldierOfRhunVoiceSelectMS
	Subsounds = SoldierOfRhunVoiceSelect ElvenWarriorVoiceSelect2
End


;----- SOLDIERS OF RHUN EMOTIONS -------

AudioEvent SoldierOfRhunVoiceTerrorAragornElendil
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd 
	;--- BFME2 below ---
  Sounds = EUEaste_voifeda EUEaste_voifedb EUEaste_voifedc
  Sounds = EHEaste_voifeda
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceDoomIncoming
  Sounds = EUSoldR_voifedd EUSoldR_voifede 
	;--- BFME2 below ---
  Sounds = EHEaste_voifeoa EHEaste_voifeob
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 2
  PlayPercent = DOOM_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceCower
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceCowerBusy
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc
  Sounds = EHEaste_voifeca EHEaste_voifecb
  Sounds = EUEaste_voifeca EUEaste_voifecb EUEaste_voifecc EUEaste_voifecd EUEaste_voifece EUEaste_voifecf EUEaste_voifecg EUEaste_voifech
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 1		;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceCowerBoromirHorn
  Sounds = EHEaste_voifeda
  Sounds = EUEaste_voifeda EUEaste_voifedb EUEaste_voifedc
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd	;from BFME1
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoicePointEagle
  Sounds = EUSoldR_voifedd EUSoldR_voifeda
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 2
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoicePointGeneric
  Sounds = EUSoldR_voifedd EUSoldR_voifeda
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 2					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceRegroup
  Sounds = EUSoldR_voifera EUSoldR_voiferb EUSoldR_voiferc EUSoldR_voiferd EUSoldR_voifere EUSoldR_voiferf 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 3					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceTerrorHeads
  Sounds = EUSoldR_voifedd EUSoldR_voifede 
	;cower portion
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd
	;--- BFME2 below ---
  Sounds = EUEaste_voifeda EUEaste_voifedb EUEaste_voifedc
  Sounds = EHEaste_voifeda
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5		;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent SoldierOfRhunVoiceTerrorScreech
  Sounds = EUEaste_voifeda EUEaste_voifedb EUEaste_voifedc
  Sounds = EHEaste_voifeda
	;--- BFME1 below ---
  Sounds = EUSoldR_voifeca EUSoldR_voifecb EUSoldR_voifecc EUSoldR_voifecd 
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End
