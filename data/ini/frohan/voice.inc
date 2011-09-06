////////////////
// VOICE.INC //
//////////////
//Rohan//
////////




;---------------------------------------------- Peasant1 Old Man PeasantMale OldMan ----------------------------------------------

AudioEvent PeasantMaleVoiceSelect
	Sounds = GUPeasm_voisela GUPeasm_voiselb GUPeasm_voiselc GUPeasm_voiseld GUPeasm_voisele GUPeasm_voiself GUPeasm_voiselg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound PeasantMaleVoiceSelectMS
	Subsounds = PeasantMaleVoiceSelect PeasantVoiceSelect2
End

AudioEvent PeasantMaleVoiceSelectBattle
	Sounds = GUPeasm_voiseba GUPeasm_voisebb GUPeasm_voisebc GUPeasm_voisebd GUPeasm_voisebe GUPeasm_voisebf GUPeasm_voisebg  GUPeasm_voisebh GUPeasm_voisebi GUPeasm_voisebj 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceMove
	Sounds = GUPeasm_voimova GUPeasm_voimovb GUPeasm_voimovc GUPeasm_voimovd GUPeasm_voimove GUPeasm_voimovf GUPeasm_voimovg  GUPeasm_voimovh 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    PlayPercent = VOICE_MOVE_PLAY_PERCENT
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateMove
	Sounds = GUPeasm_voimova GUPeasm_voimovb GUPeasm_voimovc GUPeasm_voimovd GUPeasm_voimove GUPeasm_voimovf GUPeasm_voimovg  GUPeasm_voimovh 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceMoveCamp
	Sounds = GUPeasm_voimoca GUPeasm_voimocb GUPeasm_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateMoveCamp
	Sounds = GUPeasm_voimoca GUPeasm_voimocb GUPeasm_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceGarrison
	Sounds = GUPeasm_voigara GUPeasm_voigarb GUPeasm_voigarc GUPeasm_voigard 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceRetreat
	Sounds = GUPeasm_voireta GUPeasm_voiretb GUPeasm_voiretc GUPeasm_voiretd 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateRetreat
	Sounds = GUPeasm_voireta GUPeasm_voiretb GUPeasm_voiretc GUPeasm_voiretd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceAttack
	Sounds = GUPeasm_voiatta GUPeasm_voiattb GUPeasm_voiattc GUPeasm_voiattd GUPeasm_voiatte GUPeasm_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoicePorcupine
	Sounds = GUPeasm_voiattb
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoicePorcupineOut
	Sounds = GUPeasm_voiatta
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End



AudioEvent PeasantMaleVoiceEnterStateAttack
	Sounds = GUPeasm_voiatta GUPeasm_voiattb GUPeasm_voiattc GUPeasm_voiattd GUPeasm_voiatte GUPeasm_voiattf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceAttackCharge
	Sounds = GUPeasm_voiatca GUPeasm_voiatcb GUPeasm_voiatcc GUPeasm_voiatcd GUPeasm_voiatce 
	Sounds = GUPeasm_voiatta GUPeasm_voiattb GUPeasm_voiattc GUPeasm_voiattd GUPeasm_voiatte GUPeasm_voiattf
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateAttackCharge
	Sounds = GUPeasm_voiatca GUPeasm_voiatcb GUPeasm_voiatcc GUPeasm_voiatcd GUPeasm_voiatce 
	Sounds = GUPeasm_voiatta GUPeasm_voiattb GUPeasm_voiattc GUPeasm_voiattd GUPeasm_voiatte GUPeasm_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceAttackBuilding
	Sounds = GUPeasm_voiatba GUPeasm_voiatbb GUPeasm_voiatbc 
	Sounds = GUPeasm_voiatta GUPeasm_voiattb GUPeasm_voiattc GUPeasm_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateAttackBuilding
	Sounds = GUPeasm_voiatba GUPeasm_voiatbb GUPeasm_voiatbc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceDisengage
	Sounds = GUPeasm_voidisa GUPeasm_voidisb GUPeasm_voidisc GUPeasm_voidisd 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceEnterStateDisengage
	Sounds = GUPeasm_voidisa GUPeasm_voidisb GUPeasm_voidisc GUPeasm_voidisd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantMaleVoiceRepair
	Sounds = GUPeasm_voirepa GUPeasm_voirepb GUPeasm_voirepc GUPeasm_voirepd GUPeasm_voirepe GUPeasm_voirepf GUPeasm_voirepg GUPeasm_voireph 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceRepairWall
	Sounds = GUPeasm_voirewa GUPeasm_voirewb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceRepairGate
	Sounds = GUPeasm_voirega GUPeasm_voiregb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceSalute
	Sounds = GUPeasm_voisalb ;GUPeasm_voisala GUPeasm_voisalc GUPeasm_voisald GUPeasm_voisale 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceDraftUpgrade
	Sounds = GUPeasm_voiupga GUPeasm_voiupgb GUPeasm_voiupgc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceJoinArchers
	Sounds = GUPeasm_voijara GUPeasm_voijarb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceJoinHorsemen
	Sounds = GUPeasm_voijhoa GUPeasm_voijhob 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceJoinAnybody
	Sounds = GUPeasm_voijana GUPeasm_voijanb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceFearDisperse
	Sounds = GUPeasm_voifeda GUPeasm_voifedb GUPeasm_voifedc GUPeasm_voifedd GUPeasm_voifede GUPeasm_voifedf GUPeasm_voifedg 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceFearRegroup
	Sounds = GUPeasm_voifera GUPeasm_voiferb GUPeasm_voiferc 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceFearCower
	Sounds = GUPeasm_voifeca GUPeasm_voifecb GUPeasm_voifecc GUPeasm_voifecd GUPeasm_voifece GUPeasm_voifecf GUPeasm_voifecg  GUPeasm_voifech GUPeasm_voifeci GUPeasm_voifecj GUPeasm_voifeck GUPeasm_voifecl 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceFearHit
	Sounds = GUPeasm_voifeha 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantMaleVoiceDie
	Sounds = GUPeasm_voidiea GUPeasm_voidieb GUPeasm_voidiec GUPeasm_voidied GUPeasm_voidiee GUPeasm_voidief GUPeasm_voidieg 
	Volume      = 100
	VolumeShift   = -20
      Type        = world shrouded everyone voice
  SubmixSlider = voice
End

;------------------------- PeasantVoiceDraft --------------------
;------ combines both male and female peasant voices ------------
;----------------------------------------------------------------

AudioEvent PeasantVoiceDraftUpgrade
  Sounds = GUPeasm_voiupga GUPeasF_voidraa GUPeasm_voiupgb GUPeasF_voidrab GUPeasm_voiupgc
  Volume = 110
  MinVolume = 100
  PitchShift = -1 1
  Limit = 1
  Type = world shrouded player ;voice	;it won't play if peasant units are cheering, etc...
  SubmixSlider = voice
End

;---------------------------------------------- PeasantFemale Peasant4 Woman Rohan ----------------------------------------------

AudioEvent PeasantFemaleVoiceAttackBuilding
  Sounds = GUPeasF_voiatba GUPeasF_voiatbb GUPeasF_voiatbc 
  Sounds = GUPeasF_voiatta GUPeasF_voiattb GUPeasF_voiatte 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateAttackBuilding
  Sounds = GUPeasF_voiatba GUPeasF_voiatbb GUPeasF_voiatbc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceAttackCharge
  Sounds = GUPeasF_voiatca GUPeasF_voiatcb GUPeasF_voiatcc 
  Sounds = GUPeasF_voiatta GUPeasF_voiattb GUPeasF_voiattc GUPeasF_voiattd GUPeasF_voiatte 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateAttackCharge
  Sounds = GUPeasF_voiatca GUPeasF_voiatcb GUPeasF_voiatcc 
  Sounds = GUPeasF_voiatta GUPeasF_voiattb GUPeasF_voiattc GUPeasF_voiattd GUPeasF_voiatte 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceAttack
  Sounds = GUPeasF_voiatta GUPeasF_voiattb GUPeasF_voiattc GUPeasF_voiattd GUPeasF_voiatte 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateAttack
  Sounds = GUPeasF_voiatta GUPeasF_voiattb GUPeasF_voiattc GUPeasF_voiattd GUPeasF_voiatte 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceDie
  Sounds = GUPeasF_voidiea GUPeasF_voidieb GUPeasF_voidiec GUPeasF_voidied GUPeasF_voidiee GUPeasF_voidief GUPeasF_voidieg GUPeasF_voidieh GUPeasF_voidiei 
  Volume      = 100
  VolumeShift   = -20
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceDisengage
  Sounds = GUPeasF_voidisa GUPeasF_voidisb GUPeasF_voidisc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateDisengage
  Sounds = GUPeasF_voidisa GUPeasF_voidisb GUPeasF_voidisc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceDraftUpgrade
  Sounds = GUPeasF_voidraa GUPeasF_voidrab 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceFearCower
  Sounds = GUPeasF_voifeca GUPeasF_voifecb GUPeasF_voifecc GUPeasF_voifecd GUPeasF_voifece 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceFearDisperse
  Sounds = GUPeasF_voifeda GUPeasF_voifedb GUPeasF_voifedc GUPeasF_voifedd GUPeasF_voifede 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceFearRegroup
  Sounds = GUPeasF_voifera GUPeasF_voiferb GUPeasF_voiferc GUPeasF_voiferd GUPeasF_voifere GUPeasF_voiferf GUPeasF_voiferg 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceGarrison
  Sounds = GUPeasF_voigara GUPeasF_voigarb GUPeasF_voigarc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceJoinAnybody
  Sounds = GUPeasF_voijana GUPeasF_voijanb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceJoinArchers
  Sounds = GUPeasF_voijara GUPeasF_voijarb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceJoinHorsemen
  Sounds = GUPeasF_voijhoa GUPeasF_voijhob 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceMoveCamp
  Sounds = GUPeasF_voimoca GUPeasF_voimocb GUPeasF_voimocc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateMoveCamp
  Sounds = GUPeasF_voimoca GUPeasF_voimocb GUPeasF_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceMove
  Sounds = GUPeasF_voimova GUPeasF_voimovb GUPeasF_voimovc GUPeasF_voimovd GUPeasF_voimove GUPeasF_voimovf GUPeasF_voimovg GUPeasF_voimovh GUPeasF_voimovi 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateMove
  Sounds = GUPeasF_voimova GUPeasF_voimovb GUPeasF_voimovc GUPeasF_voimovd GUPeasF_voimove GUPeasF_voimovf GUPeasF_voimovg GUPeasF_voimovh GUPeasF_voimovi 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceRepair
  Sounds = GUPeasF_voirepa GUPeasF_voirepb GUPeasF_voirepc GUPeasF_voirepd GUPeasF_voirepe 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceRetreat
  Sounds = GUPeasF_voireta GUPeasF_voiretb GUPeasF_voiretc GUPeasF_voiretd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceEnterStateRetreat
  Sounds = GUPeasF_voireta GUPeasF_voiretb GUPeasF_voiretc GUPeasF_voiretd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent PeasantFemaleVoiceSalute
  Sounds = GUPeasF_voisalb ;GUPeasF_voisala GUPeasF_voisalc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceSelectBattle
  Sounds = GUPeasF_voiseba GUPeasF_voisebb GUPeasF_voisebc GUPeasF_voisebd GUPeasF_voisebe GUPeasF_voisebf GUPeasF_voisebg GUPeasF_voisebh 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent PeasantFemaleVoiceSelect
  Sounds = GUPeasF_voisela GUPeasF_voiselb GUPeasF_voiselc GUPeasF_voiseld GUPeasF_voisele GUPeasF_voiself GUPeasF_voiselg GUPeasF_voiselh 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound PeasantFemaleVoiceSelectMS
	Subsounds = PeasantFemaleVoiceSelect PeasantVoiceSelect2
End




;------------------------------------------- RohanBannerCarrier ---------------------------------------------

AudioEvent RohanBannerVoiceSelect
	Sounds = GURoBan_voisela GURoBan_voiselb GURoBan_voiselc GURoBan_voiseld GURoBan_voisele 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound RohanBannerVoiceSelectMS
	Subsounds = RohanBannerVoiceSelect RohanBannerVoiceSelect2
End

AudioEvent RohanBannerVoiceMove
	Sounds = GURoBan_voimova GURoBan_voimovb GURoBan_voimovc GURoBan_voimovd GURoBan_voimove GURoBan_voimovf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohanBannerVoiceSalute
	;Sounds = GURoBan_voisalb ;GURoBan_voisala GURoBan_voisalc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohanBannerVoiceJoin
	Sounds = GURoBan_voijana GURoBan_voijanb GURoBan_voijanc GURoBan_voijand GURoBan_voijane 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohanBannerVoiceDie
	Sounds = GURoBan_voidiea GURoBan_voidieb GURoBan_voidiec GURoBan_voidied GURoBan_voidiee GURoBan_voidief GURoBan_voidieg GURoBan_voidieh 
	Volume        = 100
      VolumeShift   = -20
      MinRange      = 400
      MaxRange      = 1000
	Type          = world shrouded everyone voice
      SubmixSlider  = voice
End

;------------------------------------------- RohanBannerRider ---------------------------------------------

AudioEvent RohanBannerRiderVoiceSelect
  Sounds = GURoBan_voiSela GURoBan_voiSelb GURoBan_voiSelc GURoBan_voiSeld GURoBan_voiSele
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohanBannerRiderVoiceMove
  Sounds = GURoBan_voiMova GURoBan_voiMovb GURoBan_voiMovc GURoBan_voiMovd GURoBan_voiMove
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

;----------------------------------- Rohirrim Rohirim Rohan Cavalry Horsemen Knight RidersOfRohan ----------------------------------------

AudioEvent RohirrimVoiceSelect
	Sounds = GURohir_voisela GURohir_voiselb GURohir_voiselc GURohir_voiseld GURohir_voisele GURohir_voiself GURohir_voiselg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound RohirrimVoiceSelectMS
	Subsounds = RohirrimVoiceSelect RohirrimAttention
End

AudioEvent RohirrimVoiceSelectBattle
	Sounds = GURohir_voiseba GURohir_voisebb GURohir_voisebc GURohir_voisebd GURohir_voisebe GURohir_voisebf GURohir_voisebg
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimArcherVoiceSelectBattle
	Sounds = GURohir_voiseba GURohir_voisebb GURohir_voisebd GURohir_voisebe GURohir_voisebf GURohir_voisebg ;GURohir_voisebc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceMove
	Sounds = GURohir_voimova GURohir_voimovb GURohir_voimovc GURohir_voimovd GURohir_voimove GURohir_voimovf GURohir_voimovg  GURohir_voimovh GURohir_voimovi GURohir_voimovj GURohir_voimovk 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateMove
	Sounds = GURohir_voimova GURohir_voimovb GURohir_voimovc GURohir_voimovd GURohir_voimove GURohir_voimovf GURohir_voimovg  GURohir_voimovh GURohir_voimovi GURohir_voimovj GURohir_voimovk 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceMoveCamp
	Sounds = GURohir_voimoca GURohir_voimocb GURohir_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
      PlayPercent = VOICE_MOVE_PLAY_PERCENT
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateMoveCamp
	Sounds = GURohir_voimoca GURohir_voimocb GURohir_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceRetreat
	Sounds = GURohir_voireta GURohir_voiretb GURohir_voiretc GURohir_voiretd 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateRetreat
	Sounds = GURohir_voireta GURohir_voiretb GURohir_voiretc GURohir_voiretd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceAttack
	Sounds = GURohir_voiatta GURohir_voiattb GURohir_voiattc GURohir_voiattd GURohir_voiatte GURohir_voiattf GURohir_voiattg  GURohir_voiatth 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateAttack
	Sounds = GURohir_voiatta GURohir_voiattb GURohir_voiattc GURohir_voiattd GURohir_voiatte GURohir_voiattf GURohir_voiattg  GURohir_voiatth 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceAttackBow
	Sounds = GURohir_voiat2a GURohir_voiat2b GURohir_voiat2c GURohir_voiat2d GURohir_voiat2e 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateAttackBow
	Sounds = GURohir_voiat2a GURohir_voiat2b GURohir_voiat2c GURohir_voiat2d GURohir_voiat2e 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceAttackCharge
	Sounds = GURohir_voiatca GURohir_voiatcb GURohir_voiatcc GURohir_voiatcd GURohir_voiatce GURohir_voiatcf GURohir_voiatcg 
	Sounds = GURohir_voiatta GURohir_voiattb GURohir_voiattc GURohir_voiattd GURohir_voiatte GURohir_voiattf GURohir_voiattg  GURohir_voiatth 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateAttackCharge
	Sounds = GURohir_voiatca GURohir_voiatcb GURohir_voiatcc GURohir_voiatcd GURohir_voiatce GURohir_voiatcf GURohir_voiatcg 
	Sounds = GURohir_voiatta GURohir_voiattb GURohir_voiattc GURohir_voiattd GURohir_voiatte GURohir_voiattf GURohir_voiattg  GURohir_voiatth 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceDisengage
	Sounds = GURohir_voidisa GURohir_voidisb GURohir_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceEnterStateDisengage
	Sounds = GURohir_voidisa GURohir_voidisb GURohir_voidisc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RohirrimVoiceSalute
	Sounds = GURohir_voisalc ;GURohir_voisala GURohir_voisalb GURohir_voisald 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimArcherVoiceSalute
	Sounds = GURohir_voisald ; GURohir_voisala GURohir_voisalb GURohir_voisalc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceJoinAnybody
	Sounds = GURohir_voijana GURohir_voijanb GURohir_voijanc
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceModeSpear
	Sounds = GURohir_voimspa GURohir_voimspb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceModeBow
	Sounds = GURohir_voimboa GURohir_voimbob 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceLineFormation
	Sounds = GURohir_voilina GURohir_voilinb GURohir_voilinc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceWedgeFormation
	Sounds = GURohir_voiweda GURohir_voiwedb GURohir_voiwedc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceFearDisperse
	Sounds = GURohir_voifeda GURohir_voifedb GURohir_voifedc
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceFearRegroup
	Sounds = GURohir_voifera GURohir_voiferb GURohir_voiferc GURohir_voiferd GURohir_voifere 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceFearCower
	Sounds = GURohir_voifeca GURohir_voifecb GURohir_voifecc GURohir_voifecd 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent RohirrimVoiceDie
	Sounds = GURohir_voidiea GURohir_voidieb GURohir_voidiec GURohir_voidied GURohir_voidiee GURohir_voidief GURohir_voidieg  GURohir_voidieh GURohir_voidiei GURohir_voidiej GURohir_voidiek GURohir_voidiel 
	Volume      = UNIT_RESPONSE_VOLUME
      VolumeShift   = -20
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End



;------------------------------------------------- YeomanArcher Rohan Rohirrim Archer ----------------------------------------

AudioEvent YeomanArcherVoiceSelect
	Sounds =  ;GUYeoAr_voiselb GUYeoAr_voiselc GUYeoAr_voiseld GUYeoAr_voisele GUYeoAr_voiself GUYeoAr_voiselg ;GUYeoAr_voisela
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound YeomanArcherVoiceSelectMS
	Subsounds = YeomanArcherVoiceSelect YeomanArcherVoiceSelect2
End

AudioEvent YeomanArcherVoiceSelectBattle
	Sounds = ;GUYeoAr_voiseba GUYeoAr_voisebb GUYeoAr_voisebc GUYeoAr_voisebd GUYeoAr_voisebe GUYeoAr_voisebf GUYeoAr_voisebg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceMove
	Sounds = ; GUYeoAr_voimova GUYeoAr_voimovb GUYeoAr_voimovc GUYeoAr_voimovd GUYeoAr_voimove GUYeoAr_voimovf GUYeoAr_voimovg  GUYeoAr_voimovh 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    PlayPercent = VOICE_MOVE_PLAY_PERCENT
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateMove
	Sounds = ;GUYeoAr_voimova GUYeoAr_voimovb GUYeoAr_voimovc GUYeoAr_voimovd GUYeoAr_voimove GUYeoAr_voimovf GUYeoAr_voimovg  GUYeoAr_voimovh 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceMoveCamp
	Sounds = ;GUYeoAr_voimoca GUYeoAr_voimocb GUYeoAr_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateMoveCamp
	Sounds = ;GUYeoAr_voimoca GUYeoAr_voimocb GUYeoAr_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceGarrison
	Sounds = ;GUYeoAr_voigara GUYeoAr_voigarb GUYeoAr_voigarc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceRetreat
	Sounds = ;GUYeoAr_voireta GUYeoAr_voiretb GUYeoAr_voiretc GUYeoAr_voiretd GUYeoAr_voirete GUYeoAr_voiretf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateRetreat
	Sounds = ;GUYeoAr_voireta GUYeoAr_voiretb GUYeoAr_voiretc GUYeoAr_voiretd GUYeoAr_voirete GUYeoAr_voiretf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttack
	Sounds = ;GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateAttack
	Sounds = ;GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttackCharge
	Sounds = ;GUYeoAr_voiatca GUYeoAr_voiatcb GUYeoAr_voiatcc GUYeoAr_voiatcd GUYeoAr_voiatce GUYeoAr_voiatcf GUYeoAr_voiatcg GUYeoAr_voiatch
	Sounds = ;GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateAttackCharge
	Sounds = ;GUYeoAr_voiatca GUYeoAr_voiatcb GUYeoAr_voiatcc GUYeoAr_voiatcd GUYeoAr_voiatce GUYeoAr_voiatcf GUYeoAr_voiatcg GUYeoAr_voiatch
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttackBuilding
	Sounds =  ;GUYeoAr_voiatbb GUYeoAr_voiatbc GUYeoAr_voiatbd ;GUYeoAr_voiatba
	Sounds = ;GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
  Limit = 1
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider  = voice

End

AudioEvent YeomanArcherVoiceEnterStateAttackBuilding
	Sounds = ;GUYeoAr_voiatba GUYeoAr_voiatbb GUYeoAr_voiatbc GUYeoAr_voiatbd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceDisengage
	Sounds = ;GUYeoAr_voidisa GUYeoAr_voidisb GUYeoAr_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateDisengage
	Sounds = ;GUYeoAr_voidisa GUYeoAr_voidisb GUYeoAr_voidisc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAmbushed
	Sounds = GUYeoAr_voiamba GUYeoAr_voiambb GUYeoAr_voiambc GUYeoAr_voiambd GUYeoAr_voiambe GUYeoAr_voiambf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceSalute
	Sounds = ;GUYeoAr_voisalb ;GUYeoAr_voisala GUYeoAr_voisalc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceJoinPeasants
	Sounds = ;GUYeoAr_voijpea 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceJoinRohirrim
	Sounds = ;GUYeoAr_voijroa 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceJoinAnybody
	Sounds = ;GUYeoAr_voijana GUYeoAr_voijanb GUYeoAr_voijanc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceLineFormation
	Sounds = ;GUYeoAr_voilina GUYeoAr_voilinb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceSkirmishFormation
	Sounds = ;GUYeoAr_voiskia GUYeoAr_voiskib 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceFearPoint
	Sounds = GUYeoAr_voifepa GUYeoAr_voifepb GUYeoAr_voifepc 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceFearDisperse
	Sounds = GUYeoAr_voifeda GUYeoAr_voifedb GUYeoAr_voifedc GUYeoAr_voifedd GUYeoAr_voifede GUYeoAr_voifedf GUYeoAr_voifedg GUYeoAr_voifedh
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceFearRegroup
	Sounds = GUYeoAr_voifera GUYeoAr_voiferb GUYeoAr_voiferc GUYeoAr_voiferd GUYeoAr_voifere GUYeoAr_voiferf 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceFearCower
	Sounds = GUYeoAr_voifeca GUYeoAr_voifecb GUYeoAr_voifecc GUYeoAr_voifecd GUYeoAr_voifece 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceFearHit
	Sounds = GUYeoAr_voifeha GUYeoAr_voifehb
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceDie
	Sounds = GUYeoAr_voidiea GUYeoAr_voidieb GUYeoAr_voidiec GUYeoAr_voidied GUYeoAr_voidiee GUYeoAr_voidief GUYeoAr_voidieg GUYeoAr_voidieh 
	Volume      = 90
	VolumeShift   = -20
      Type        = world shrouded everyone voice
  SubmixSlider = voice
End