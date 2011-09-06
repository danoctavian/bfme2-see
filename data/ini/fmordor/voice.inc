////////////////
// VOICE.INC //
//////////////
//Mordor//
/////////



AudioEvent MordorFighterEntFear
  Sounds =
  PlayPercent = 27
  Limit = 1
  Volume = 90
  MinRange = 300
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End



;------------------------------------------- MordorBannerOrc ---------------------------------------------

AudioEvent MordorBannerOrcVoiceAttack
  Sounds = EUMoBan_voiAtta EUMoBan_voiAttb EUMoBan_voiAttc EUMoBan_voiAttd EUMoBan_voiAtte
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound MordorBannerOrcVoiceAttackMS
	Subsounds = MordorBannerOrcVoiceAttack OrcVoiceAttack2
End

AudioEvent MordorBannerOrcVoiceDie
  Sounds = EUMoBan_voidiea EUMoBan_voidieb EUMoBan_voidiec EUMoBan_voidied EUMoBan_voidiee EUMoBan_voidief 
  Volume      = 100
  VolumeShift   = -20
;  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent MordorBannerOrcVoiceJoin
  Sounds = EUMoBan_voijana EUMoBan_voijanb EUMoBan_voijanc EUMoBan_voijand 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent MordorBannerOrcVoiceMove
  Sounds = EUMoBan_voimova EUMoBan_voimovb EUMoBan_voimovc EUMoBan_voimovd EUMoBan_voimove EUMoBan_voimovf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound MordorBannerOrcVoiceMoveMS
	Subsounds = MordorBannerOrcVoiceMove OrcVoiceMove2
End

AudioEvent MordorBannerOrcVoiceSelect
  Sounds = EUMoBan_voisela EUMoBan_voiselb EUMoBan_voiselc EUMoBan_voiseld EUMoBan_voisele 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound MordorBannerOrcVoiceSelectMS
	Subsounds = MordorBannerOrcVoiceSelect RohanBannerVoiceSelect2
End

;-------------------------------- MordorBuilder ------------------------------------------

AudioEvent MordorBuilderVoiceBuild
  Sounds = EUPorGe_voidela EUPorGe_voidelb EUPorGe_voidelc EUPorGe_voideld EUPorGe_voidele
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MordorBuilderVoiceFearTrample
  Sounds = EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Sounds = EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent MordorBuilderVoiceMove
  Sounds = EUPorGe_voimova EUPorGe_voimovb EUPorGe_voimovc EUPorGe_voimovd
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MordorBuilderVoiceSalute
  Sounds = EUPorGe_voisala EUPorGe_voisalb
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MordorBuilderVoiceSelect
  Sounds = EUPorGe_voisela EUPorGe_voiselb EUPorGe_voiselc EUPorGe_voiseld
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

Multisound MordorBuilderVoiceSelectMS
  Subsounds = MordorBuilderVoiceSelect MordorBuilderFoleySelect
End

;--------------------------------- MouthOfSauron -------------------------------

AudioEvent MouthOfSauronVoiceAttack
  Sounds = EUMouth_voiatta EUMouth_voiattb EUMouth_voiattc EUMouth_voiattd EUMouth_voiatte EUMouth_voiattf
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceAttackBuilding
  Sounds = EUMouth_voiatba EUMouth_voiatbb EUMouth_voiatbc EUMouth_voiatbd
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceAttackCharge
  Sounds = EUMouth_voiatca EUMouth_voiatcb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceCaptureBuilding
  Sounds = EUMouth_voicapa EUMouth_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceDie
  Sounds = EUMouth_voidiea EUMouth_voidieb EUMouth_voidiec EUMouth_voidied EUMouth_voidiee EUMouth_voidief EUMouth_voidieg EUMouth_voidieh EUMouth_voidiei EUMouth_voidiej
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinRange = 500
  MaxRange = 1000
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceDisengage
  Sounds = EUMouth_voidisa EUMouth_voidisb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceHelpMe
  Sounds = EUMouth_voihela EUMouth_voihelb EUMouth_voihelc
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( HELPME_MINVOLUME -5 )
  Priority = critical
  Type = world shrouded player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMove
  Sounds = EUMouth_voimova EUMouth_voimovb EUMouth_voimovc EUMouth_voimovd EUMouth_voimove EUMouth_voimovf EUMouth_voimovg EUMouth_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMoveCamp
  Sounds = EUMouth_voimoca EUMouth_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMoveGarrisonNoTower
  Sounds = EUMouth_voigara EUMouth_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMoveGarrisonTower
  Sounds = EUMouth_voigara EUMouth_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMoveMount
  Sounds = EUMouth_voimoma 
  Sounds = EUMouth_voimova EUMouth_voimovb EUMouth_voimovc EUMouth_voimovd EUMouth_voimove EUMouth_voimovf EUMouth_voimovg EUMouth_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceMoveShip
  Sounds = EUMouth_voimosa EUMouth_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceRespawn
  Sounds = EUMouth_voiresa EUMouth_voiresb
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceRetreat
  Sounds = EUMouth_voireta EUMouth_voiretb EUMouth_voiretc
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceSelect
  Sounds = EUMouth_voisela EUMouth_voiselb EUMouth_voiselc EUMouth_voiseld EUMouth_voisele EUMouth_voiself EUMouth_voiselg EUMouth_voiselh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceSelectBattle
  Sounds = EUMouth_voiseba EUMouth_voisebb EUMouth_voisebc EUMouth_voisebd EUMouth_voisebe EUMouth_voisebf EUMouth_voisebg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MouthOfSauronVoiceEvilEye
  Sounds = EUMouth_voiatta EUMouth_voiattb EUMouth_voiattc EUMouth_voiattd EUMouth_voiatte EUMouth_voiattf
  Volume = #ADD( UNIT_RESPONSE_VOLUME -5 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -5 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound MouthOfSuaronVoiceDismountMS
	Subsounds = UnmountButtonFoley
End

Multisound MouthOfSuaronVoiceMountMS
	Subsounds = HorseWhinnyForMountButton
End

Multisound MouthOfSauronVoiceSelectMS
  Subsounds = MouthOfSauronVoiceSelect HeroVoiceSelect2
End

Multisound MouthOfSauronVoiceSelectMountedMS
  Subsounds = MouthOfSauronVoiceSelect WargRiderVoiceSelect2
End

;-------------------------------------------- OrcArcher -----------------------------

AudioEvent OrcArcherVoiceAmbushed
  Sounds        = EUOrcAr_voiamba EUOrcAr_voiambb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceAttackBuilding
  Sounds        = EUOrcAr_voiatba EUOrcAr_voiatbb EUOrcAr_voiatbc EUOrcAr_voiatbd 
  Sounds        = EUOrcAr_voiattb EUOrcAr_voiattl EUOrcAr_voiattm 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterStateAttackBuilding
  Sounds        = EUOrcAr_voiatba EUOrcAr_voiatbb EUOrcAr_voiatbc EUOrcAr_voiatbd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceAttackCharge
  Sounds        = EUOrcAr_voiatca EUOrcAr_voiatcb EUOrcAr_voiatcc EUOrcAr_voiatcd EUOrcAr_voiatce EUOrcAr_voiatcf EUOrcAr_voiatcg EUOrcAr_voiatch 
  Sounds        = EUOrcAr_voiatta EUOrcAr_voiattb EUOrcAr_voiattc EUOrcAr_voiattd EUOrcAr_voiatte EUOrcAr_voiattf EUOrcAr_voiattg EUOrcAr_voiatth EUOrcAr_voiatti EUOrcAr_voiattj EUOrcAr_voiattk EUOrcAr_voiattl EUOrcAr_voiattm 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterStateAttackCharge
  Sounds        = EUOrcAr_voiatca EUOrcAr_voiatcb EUOrcAr_voiatcc EUOrcAr_voiatcd EUOrcAr_voiatce EUOrcAr_voiatcf EUOrcAr_voiatcg EUOrcAr_voiatch 
  Sounds        = EUOrcAr_voiatta EUOrcAr_voiattb EUOrcAr_voiattc EUOrcAr_voiattd EUOrcAr_voiatte EUOrcAr_voiattf EUOrcAr_voiattg EUOrcAr_voiatth EUOrcAr_voiatti EUOrcAr_voiattj EUOrcAr_voiattk EUOrcAr_voiattl EUOrcAr_voiattm 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceAttack
  Sounds        = EUOrcAr_voiatta EUOrcAr_voiattb EUOrcAr_voiattc EUOrcAr_voiattd EUOrcAr_voiatte EUOrcAr_voiattf EUOrcAr_voiattg EUOrcAr_voiatth EUOrcAr_voiatti EUOrcAr_voiattj EUOrcAr_voiattk EUOrcAr_voiattl EUOrcAr_voiattm 
  Limit = 1
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider  = voice
End

Multisound OrcArcherVoiceAttackMS
	Subsounds = OrcArcherVoiceAttack OrcVoiceAttack2
End

AudioEvent OrcArcherVoiceEnterStateAttack
  Sounds        = EUOrcAr_voiatta EUOrcAr_voiattb EUOrcAr_voiattc EUOrcAr_voiattd EUOrcAr_voiatte EUOrcAr_voiattf EUOrcAr_voiattg EUOrcAr_voiatth EUOrcAr_voiatti EUOrcAr_voiattj EUOrcAr_voiattk EUOrcAr_voiattl EUOrcAr_voiattm 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceDisengage
  Sounds        = EUOrcAr_voidisa EUOrcAr_voidisb EUOrcAr_voidisc EUOrcAr_voidisd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterStateDisengage
  Sounds        = EUOrcAr_voidisa EUOrcAr_voidisb EUOrcAr_voidisc EUOrcAr_voidisd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceFearCower
  Sounds        = EUOrcAr_voifeca EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg EUOrcAr_voifech 
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceFearDisperse
  Sounds        = EUOrcAr_voifeda EUOrcAr_voifedb EUOrcAr_voifedc EUOrcAr_voifedd EUOrcAr_voifede EUOrcAr_voifedf EUOrcAr_voifedg EUOrcAr_voifedh EUOrcAr_voifedi EUOrcAr_voifedj EUOrcAr_voifedk EUOrcAr_voifedl EUOrcAr_voifegh
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceFearHit
  Sounds        = EUOrcAr_voifeha 
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceFearRegroup
  Sounds        = EUOrcAr_voifera EUOrcAr_voiferb EUOrcAr_voiferc EUOrcAr_voiferd 
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceGarrison
  Sounds        = EUOrcAr_voigara EUOrcAr_voigarb EUOrcAr_voigarc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterMumakil
  Sounds        = EUOrcAr_voigara EUOrcAr_voigarc EUOrcAr_voijana EUOrcAr_voijanc EUOrcAr_voijand EUOrcAr_voijane EUOrcAr_voijanf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceGarrisonSlaughterHouse
  Sounds        = EUOrcAr_voigara EUOrcAr_voigarc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterShip
  Sounds        = EUOrcAr_voigara EUOrcAr_voigarc EUOrcAr_voijana EUOrcAr_voijanc EUOrcAr_voijand EUOrcAr_voijane EUOrcAr_voijanf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceJoinAnybody
  Sounds        = EUOrcAr_voijana EUOrcAr_voijanb EUOrcAr_voijanc EUOrcAr_voijand EUOrcAr_voijane EUOrcAr_voijanf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceMove
  Sounds        = EUOrcAr_voimova EUOrcAr_voimovb EUOrcAr_voimovc EUOrcAr_voimovd EUOrcAr_voimove EUOrcAr_voimovf EUOrcAr_voimovg EUOrcAr_voimovh EUOrcAr_voimovi EUOrcAr_voimovj 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcArcherVoiceMoveMS
	Subsounds = OrcArcherVoiceMove OrcVoiceMove2
End

AudioEvent OrcArcherVoiceEnterStateMove
  Sounds        = EUOrcAr_voimova EUOrcAr_voimovb EUOrcAr_voimovc EUOrcAr_voimovd EUOrcAr_voimove EUOrcAr_voimovf EUOrcAr_voimovg EUOrcAr_voimovh EUOrcAr_voimovi EUOrcAr_voimovj 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceRetreat
  Sounds        = EUOrcAr_voireta EUOrcAr_voiretb EUOrcAr_voiretc EUOrcAr_voiretd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceEnterStateRetreat
  Sounds        = EUOrcAr_voireta EUOrcAr_voiretb EUOrcAr_voiretc EUOrcAr_voiretd 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcArcherVoiceSelectBattle
  Sounds        = EUOrcAr_voiseba EUOrcAr_voisebb EUOrcAr_voisebc EUOrcAr_voisebd EUOrcAr_voisebe EUOrcAr_voisebf EUOrcAr_voisebg EUOrcAr_voisebh EUOrcAr_voisebi EUOrcAr_voisebj EUOrcAr_voisebk 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcArcherVoiceSelect
  Sounds        = EUOrcAr_voisela EUOrcAr_voiselb EUOrcAr_voiselc EUOrcAr_voiseld EUOrcAr_voisele EUOrcAr_voiself EUOrcAr_voiselg EUOrcAr_voiselh 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcArcherVoiceSelectMS
	Subsounds = OrcArcherVoiceSelect UrukCrossbowmanVoiceSelect2
End

;-----------------------------------Orc Battering Ram-------------------------

AudioEvent OrcBatteringRamVoiceAttackBuilding
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006  
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceEnterStateAttackBuilding
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006   
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceAttackCharge
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006 MESouth_OrcH002 MESouth_OrcH003    
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceEnterStateAttackCharge
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006 MESouth_OrcH002 MESouth_OrcH003    
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceAttack
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006  
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceEnterStateAttack
  Sounds        = MEMinas_OrcH009 MEMinas_OrcH037 MENearH_OrcH018 MESouth_OrcH011 MGBlack_OrcH004 MGBlack_OrcH006 MGMinas_OrcH006  
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceDisengage
  Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceEnterStateDisengage
    Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022  
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceMoveCamp
  Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022  
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceEnterStateMoveCamp
    Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022  
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceMove
  Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022 MGMinas_OrcH003 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  PlayPercent   = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcBatteringRamVoiceMoveMS
	Subsounds = OrcBatteringRamVoiceMove OrcVoiceMove2
End

AudioEvent OrcBatteringRamVoiceEnterStateMove
  Sounds        = MEMinas_OrcH031 MEMinas_OrcH033 MEMinas_OrcH034 MEMinas_OrcH046 MEMinas_OrcH051 MENearH_OrcH021 MENearH_OrcH022 MGMinas_OrcH003 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcBatteringRamVoiceSelectBattle
  Sounds        = EUOrcHo_voiselc EUOrcHo_voiselg MENearH_OrcH002 MENearH_OrcH006 MGMinas_OrcH001 MGMinas_OrcH013
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcBatteringRamVoiceSelect
  Sounds        = EUOrcHo_voiselc EUOrcHo_voiselg MENearH_OrcH002 MENearH_OrcH006 MGMinas_OrcH001 MGMinas_OrcH013
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;--------------------------------------------- OrcFighter OrcWarrior MordorFighter -----------------------------------

AudioEvent OrcFighterVoiceAttackBuilding
  Sounds        = EUOrcHo_voiatba EUOrcHo_voiatbb EUOrcHo_voiatbc EUOrcHo_voiatbd EUOrcHo_voiatbe EUOrcHo_voiatbf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceEnterStateAttackBuilding
  Sounds        = EUOrcHo_voiatba EUOrcHo_voiatbb EUOrcHo_voiatbc EUOrcHo_voiatbd EUOrcHo_voiatbe EUOrcHo_voiatbf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceAttackCharge
  Sounds        = EUOrcHo_voiatca EUOrcHo_voiatcb EUOrcHo_voiatcc EUOrcHo_voiatcd EUOrcHo_voiatce EUOrcHo_voiatcf EUOrcHo_voiatcg EUOrcHo_voiatch EUOrcHo_voiatci 
  Sounds        = EUOrcHo_voiatta EUOrcHo_voiattb EUOrcHo_voiattc EUOrcHo_voiattd EUOrcHo_voiatte EUOrcHo_voiattf EUOrcHo_voiattg EUOrcHo_voiatth EUOrcHo_voiatti 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceEnterStateAttackCharge
  Sounds        = EUOrcHo_voiatca EUOrcHo_voiatcb EUOrcHo_voiatcc EUOrcHo_voiatcd EUOrcHo_voiatce EUOrcHo_voiatcf EUOrcHo_voiatcg EUOrcHo_voiatch EUOrcHo_voiatci 
  Sounds        = EUOrcHo_voiatta EUOrcHo_voiattb EUOrcHo_voiattc EUOrcHo_voiattd EUOrcHo_voiatte EUOrcHo_voiattf EUOrcHo_voiattg EUOrcHo_voiatth EUOrcHo_voiatti 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceAttack
  Sounds        = EUOrcHo_voiatta EUOrcHo_voiattb EUOrcHo_voiattc EUOrcHo_voiattd EUOrcHo_voiatte EUOrcHo_voiattf EUOrcHo_voiattg EUOrcHo_voiatth EUOrcHo_voiatti 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcFighterVoiceAttackMS
	Subsounds = OrcFighterVoiceAttack OrcVoiceAttack2
End

AudioEvent OrcFighterVoiceEnterStateAttack
  Sounds        = EUOrcHo_voiatta EUOrcHo_voiattb EUOrcHo_voiattc EUOrcHo_voiattd EUOrcHo_voiatte EUOrcHo_voiattf EUOrcHo_voiattg EUOrcHo_voiatth EUOrcHo_voiatti 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceFearCower
  Sounds        = EUOrcHo_voifeca EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecd EUOrcHo_voifece EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecl EUOrcHo_voifecm 
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceFearDisperse
  Sounds        = EUOrcHo_voifeda EUOrcHo_voifedb EUOrcHo_voifedc  EUOrcHo_voifede EUOrcHo_voifedf EUOrcHo_voifedg EUOrcHo_voifedh EUOrcHo_voifedi EUOrcHo_voifedj EUOrcHo_voifedk EUOrcHo_voifedl EUOrcHo_voifedm  EUOrcHo_voifedo EUOrcHo_voifedp EUOrcHo_voifedq ;EUOrcHo_voifedd EUOrcHo_voifedn
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceFearHit
  Sounds        = EUOrcHo_voifeha EUOrcHo_voifehb EUOrcHo_voifehc EUOrcHo_voifehd EUOrcHo_voifehe EUOrcHo_voifehf EUOrcHo_voifehg EUOrcHo_voifehh 
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceFearPoint
  Sounds        = EUOrcHo_voifepa
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceFearRegroup
  Sounds        = EUOrcHo_voifera EUOrcHo_voiferb EUOrcHo_voiferc  EUOrcHo_voifere EUOrcHo_voiferf EUOrcHo_voiferg EUOrcHo_voiferh EUOrcHo_voiferi ;EUOrcHo_voiferd
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceEnterMumakil
  Sounds        = EUOrcHo_voigara EUOrcHo_voijanb EUOrcHo_voijand
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceGarrison
  Sounds        = EUOrcHo_voigara EUOrcHo_voigarb EUOrcHo_voigarc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceGarrisonSlaughterHouse
  Sounds        = EUOrcHo_voigara EUOrcHo_voigarc ;EUOrcHo_voigarb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceJoinAnybody
  Sounds        = EUOrcHo_voijana EUOrcHo_voijanb EUOrcHo_voijanc EUOrcHo_voijand EUOrcHo_voijane 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceJoinArcher
  Sounds        = EUOrcHo_voijara EUOrcHo_voijarb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceMoveCamp
  Sounds        = EUOrcHo_voimoca EUOrcHo_voimocb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceEnterStateMoveCamp
  Sounds        = EUOrcHo_voimoca EUOrcHo_voimocb 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceMove
  Sounds        = EUOrcHo_voimova EUOrcHo_voimovb EUOrcHo_voimovc EUOrcHo_voimovd EUOrcHo_voimove EUOrcHo_voimovf EUOrcHo_voimovg EUOrcHo_voimovh EUOrcHo_voimovi 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcFighterVoiceMoveMS
	Subsounds = OrcFighterVoiceMove OrcVoiceMove2
End

AudioEvent OrcFighterVoiceEnterStateMove
  Sounds        = EUOrcHo_voimova EUOrcHo_voimovb EUOrcHo_voimovc EUOrcHo_voimovd EUOrcHo_voimove EUOrcHo_voimovf EUOrcHo_voimovg EUOrcHo_voimovh EUOrcHo_voimovi 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceRetreat
  Sounds        = EUOrcHo_voireta EUOrcHo_voiretb EUOrcHo_voiretc EUOrcHo_voiretd EUOrcHo_voirete EUOrcHo_voiretf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceEnterStateRetreat
  Sounds        = EUOrcHo_voireta EUOrcHo_voiretb EUOrcHo_voiretc EUOrcHo_voiretd EUOrcHo_voirete EUOrcHo_voiretf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcFighterVoiceSelectBattle
  Sounds        = EUOrcHo_voiseba EUOrcHo_voisebb EUOrcHo_voisebc EUOrcHo_voisebd EUOrcHo_voisebe EUOrcHo_voisebf EUOrcHo_voisebg EUOrcHo_voisebh EUOrcHo_voisebi EUOrcHo_voisebj EUOrcHo_voisebk EUOrcHo_voisebl EUOrcHo_voisebm 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcFighterVoiceSelect
  Sounds        = EUOrcHo_voisela EUOrcHo_voiselb EUOrcHo_voiseld EUOrcHo_voisele EUOrcHo_voiself EUOrcHo_voiselh EUOrcHo_voiseli EUOrcHo_voiselj ;EUOrcHo_voiselc EUOrcHo_voiselg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcFighterVoiceSelectMS
	Subsounds = OrcFighterVoiceSelect UrukSwordmanVoiceSelect2
End

;--------------------------------- OrcHorde -------------------------------

AudioEvent OrcHordeVoiceCaptureBuilding
  Sounds = EUOrcHo_voicapa EUOrcHo_voicapb EUOrcHo_voicapc EUOrcHo_voicapd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

;--------------------------------------------- OrcLaborer -----------------------------------------

AudioEvent OrcLaborerVoiceAttackBuilding
  Sounds = EUOrcLa_voiatba EUOrcLa_voiatbb EUOrcLa_voiatbc 
  Sounds = EUOrcLa_voiatte EUOrcLa_voiattf EUOrcLa_voiatth 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceEnterStateAttackBuilding
  Sounds = EUOrcLa_voiatba EUOrcLa_voiatbb EUOrcLa_voiatbc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcLaborerVoiceAttackEnt
  Sounds = EUOrcLa_voiatea EUOrcLa_voiateb EUOrcLa_voiatec 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceAttack
  Sounds = EUOrcLa_voiatta EUOrcLa_voiattb EUOrcLa_voiattc EUOrcLa_voiattd EUOrcLa_voiatte EUOrcLa_voiattf EUOrcLa_voiattg EUOrcLa_voiatth 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound OrcLaborerVoiceAttackMS
	Subsounds = OrcLaborerVoiceAttack OrcVoiceAttack2
End

AudioEvent OrcLaborerVoiceEnterStateAttack
  Sounds = EUOrcLa_voiatta EUOrcLa_voiattb EUOrcLa_voiattc EUOrcLa_voiattd EUOrcLa_voiatte EUOrcLa_voiattf EUOrcLa_voiattg EUOrcLa_voiatth 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcLaborerVoiceConstruct
  Sounds = EUOrcLa_voicona EUOrcLa_voiconb EUOrcLa_voiconc EUOrcLa_voicond EUOrcLa_voicone
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceFearCower
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceFearDisperse
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceFearRegroup
  Sounds = EUOrcLa_voifera EUOrcLa_voiferb EUOrcLa_voiferc 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceGarrison
  Sounds = EUOrcLa_voigara EUOrcLa_voigarb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceGarrisonSlaughterHouse
  Sounds = EUOrcLa_voigara ;EUOrcLa_voigarb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceGather
  Sounds = EUOrcLa_voigata EUOrcLa_voigatb EUOrcLa_voigatc EUOrcLa_voigatd EUOrcLa_voigate 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceMoveCamp
  Sounds = EUOrcLa_voimoca EUOrcLa_voimocb EUOrcLa_voimocc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceEnterStateMoveCamp
  Sounds = EUOrcLa_voimoca EUOrcLa_voimocb EUOrcLa_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcLaborerVoiceMove
  Sounds = EUOrcLa_voimova EUOrcLa_voimovb EUOrcLa_voimovc EUOrcLa_voimovd EUOrcLa_voimove EUOrcLa_voimovf EUOrcLa_voimovg EUOrcLa_voimovh EUOrcLa_voimovi EUOrcLa_voimovj EUOrcLa_voimovk 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

Multisound OrcLaborerVoiceMoveMS
	Subsounds = OrcLaborerVoiceMove OrcVoiceMove2
End

AudioEvent OrcLaborerVoiceEnterStateMove
  Sounds = EUOrcLa_voimova EUOrcLa_voimovb EUOrcLa_voimovc EUOrcLa_voimovd EUOrcLa_voimove EUOrcLa_voimovf EUOrcLa_voimovg EUOrcLa_voimovh EUOrcLa_voimovi EUOrcLa_voimovj EUOrcLa_voimovk 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent OrcLaborerVoiceRepair
  Sounds = EUOrcLa_voirepa EUOrcLa_voirepb EUOrcLa_voirepc EUOrcLa_voirepd EUOrcLa_voirepe 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceRetreat
  Sounds = EUOrcLa_voireta EUOrcLa_voiretb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceSelect
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent OrcLaborerVoiceSelectBattle
  Sounds = EUOrcLa_voiseba EUOrcLa_voisebb EUOrcLa_voisebc EUOrcLa_voisebd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

;------------------------------------------- OrcPorterFireArrows FlamingArrows ------------------------------------

AudioEvent OrcPorterFireArrowsVoiceDeliver
  Sounds        = EUPorFA_voidela EUPorFA_voidelb EUPorFA_voidelc EUPorFA_voideld 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterFireArrowsVoiceSalute
  Sounds        = EUPorFA_voisala ;EUPorFA_voisalb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterFireArrowsVoiceSelect
  Sounds        = EUPorFA_voisela EUPorFA_voiselb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;------------------------------------------- OrcPorterForgedBlades ------------------------------------

AudioEvent OrcPorterForgedBladesVoiceDeliver
  Sounds        = EUPorFB_voidela EUPorFB_voidelb EUPorFB_voidelc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterForgedBladesVoiceSalute
  Sounds        = EUPorFB_voisalb ;EUPorFB_voisala 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterForgedBladesVoiceSelect
  Sounds        = EUPorFB_voisela EUPorFB_voiselb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;------------------------------------------- OrcPorterGold ------------------------------------

AudioEvent OrcPorterGoldVoiceDeliver
  Sounds        = EUPorGo_voidela EUPorGo_voidelb EUPorGo_voidelc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterGoldVoiceSalute
  Sounds        = EUPorGo_voisalb  ;EUPorGo_voisala EUPorGo_voisalc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterGoldVoiceSelect
  Sounds        = EUPorGo_voisela EUPorGo_voiselb EUPorGo_voiselc EUPorGo_voiseld 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;------------------------------------------- OrcPorterHeavyArmor ------------------------------------

AudioEvent OrcPorterHeavyArmorVoiceDeliver
  Sounds        = EUPorHA_voidelb ;EUPorHA_voidela 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterHeavyArmorVoiceSalute
  Sounds        =  EUPorHA_voisalc ;EUPorHA_voisala EUPorHA_voisalb
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterHeavyArmorVoiceSelect
  Sounds        = EUPorHA_voisela EUPorHA_voiselb EUPorHA_voiselc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;------------------------------------------- OrcPorterGeneric ------------------------------------

AudioEvent OrcPorterGenericVoiceDeliver
  Sounds        = EUPorGe_voidela EUPorGe_voidelb EUPorGe_voidelc EUPorGe_voideld EUPorGe_voidele 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterGenericVoiceMove
  Sounds        = EUPorGe_voimova EUPorGe_voimovb EUPorGe_voimovc EUPorGe_voimovd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcPorterGenericVoiceMoveMS
	Subsounds = OrcPorterGenericVoiceMove OrcVoiceMove2
End

AudioEvent OrcPorterGenericVoiceSalute
  Sounds        = EUPorGe_voisala EUPorGe_voisalb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent OrcPorterGenericVoiceSelect
  Sounds        = EUPorGe_voisela EUPorGe_voiselb EUPorGe_voiselc EUPorGe_voiseld 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound OrcPorterGenericVoiceSelectMS
	Subsounds = OrcPorterGenericVoiceSelect OrcPorterVoiceSelect2
End






;----- MORDOR ISENGARD EMOTIONS -------

AudioEvent MordorVoiceTerrorAragornElendil
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUOrcAr_voifeca EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg EUOrcAr_voifech 
  Sounds = EUOrcHo_voifeca EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecd EUOrcHo_voifece EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecl EUOrcHo_voifecm 
  Sounds = EUWargR_voifeda  EUWargR_voifedc EUWargR_voifedd EUWargR_voifede 		; EUWargR_voifedb  EUWargR_voifedf ;from BFME1
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

AudioEvent MordorVoiceDoomIncoming
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl EUOrcAr_voifeha 
  Sounds = EUOrcAr_voifeda EUOrcAr_voifedb EUOrcAr_voifedc EUOrcAr_voifedd EUOrcAr_voifede EUOrcAr_voifedf EUOrcAr_voifedg EUOrcAr_voifedh EUOrcAr_voifedi EUOrcAr_voifedj EUOrcAr_voifedk EUOrcAr_voifedl EUOrcAr_voifegh EUOrcAr_voifera
  Sounds = EUOrcHo_voifeda EUOrcHo_voifedb EUOrcHo_voifedc EUOrcHo_voifede EUOrcHo_voifedf EUOrcHo_voifedg EUOrcHo_voifedh EUOrcHo_voifedi EUOrcHo_voifedj EUOrcHo_voifedk EUOrcHo_voifedl EUOrcHo_voifedm EUOrcHo_voifedo EUOrcHo_voifedp EUOrcHo_voifedq 
  Sounds = EUOrcHo_voifeha EUOrcHo_voifehb EUOrcHo_voifehc EUOrcHo_voifehd EUOrcHo_voifehe EUOrcHo_voifehf EUOrcHo_voifehg EUOrcHo_voifehh 
  Sounds = EUWargR_voifeda  EUWargR_voifedc EUWargR_voifedd EUWargR_voifede  ;EUWargR_voifedb EUWargR_voifedf
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

AudioEvent MordorVoicePointGeneric
  Sounds = EUOrcHo_voifepa EUOrcHo_voifecb
  Sounds = EUUrukh_voifecf
  Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc
  Sounds = EUUruCr_voifedb
  Sounds = EUWargR_voifeda EUWargR_voifedc EUWargR_voifedd
  Sounds = EUOrcAr_voifecb EUOrcAr_voifede
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 7						;EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent MordorVoicePointEagle
  Sounds = EUOrcHo_voifepa  EUOrcHo_voifecb ;EUOrcHo_voifedd
  Sounds = EUUruPi_voifedc EUUruPi_voifede EUUruPi_voifecb EUUruPi_voifecc
  Sounds = EUUruCr_voifeda EUUruCr_voifedb
  Sounds = EUUrukh_voifeda EUUrukh_voifedb
  Sounds = EUWargR_voifedb EUWargR_voifedf
  Sounds = EUOrcAr_voifecb
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 7						;EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent OrcVoiceFearCower			;MordorVoiceCower
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci		;from BFME1
  Sounds = EUOrcAr_voifeca EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg EUOrcAr_voifech 
  Sounds = EUOrcHo_voifeca EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecd EUOrcHo_voifece EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecl EUOrcHo_voifecm		;from BFME1
  Sounds = EUWargR_voifeca EUWargR_voifecb EUWargR_voifecc EUWargR_voifecd EUWargR_voifece EUWargR_voifecf EUWargR_voifecg EUWargR_voifech			;from BFME1
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

AudioEvent OrcVoiceFearCowerBusy
  Sounds = EUOrcLa_voifeca EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg 
  Sounds = EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecm 
  Sounds = EUWargR_voifeca EUWargR_voifecb EUWargR_voifecc EUWargR_voifecd EUWargR_voifece EUWargR_voifecf EUWargR_voifecg EUWargR_voifech
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 4						;EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent MordorVoiceCowerBoromirHorn
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUOrcAr_voifeca EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg EUOrcAr_voifech 
  Sounds = EUOrcHo_voifeca EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecd EUOrcHo_voifece EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecl EUOrcHo_voifecm 
  Sounds = EUWargR_voifeda  EUWargR_voifedc EUWargR_voifedd EUWargR_voifede  ;EUWargR_voifedb EUWargR_voifedf
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

AudioEvent MordorVoiceRegroup
  Sounds = EUOrcAr_voifera EUOrcAr_voiferb EUOrcAr_voiferc EUOrcAr_voiferd
  Sounds = EUOrcHo_voifera EUOrcHo_voiferb EUOrcHo_voiferc EUOrcHo_voifere EUOrcHo_voiferf EUOrcHo_voiferg EUOrcHo_voiferh EUOrcHo_voiferi 
  Sounds = EUOrcLa_voifera EUOrcLa_voiferb EUOrcLa_voiferc 
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

AudioEvent MordorVoiceTerrorHeads
  ;disperse portion
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl EUOrcAr_voifeha 
  Sounds = EUOrcAr_voifeda EUOrcAr_voifedb EUOrcAr_voifedc EUOrcAr_voifedd EUOrcAr_voifede EUOrcAr_voifedf EUOrcAr_voifedg EUOrcAr_voifedh EUOrcAr_voifedi EUOrcAr_voifedj EUOrcAr_voifedk EUOrcAr_voifedl EUOrcAr_voifegh EUOrcAr_voifera
  Sounds = EUOrcHo_voifeda EUOrcHo_voifedb EUOrcHo_voifedc EUOrcHo_voifede EUOrcHo_voifedf EUOrcHo_voifedg EUOrcHo_voifedh EUOrcHo_voifedi EUOrcHo_voifedj EUOrcHo_voifedk EUOrcHo_voifedl EUOrcHo_voifedm EUOrcHo_voifedo EUOrcHo_voifedp EUOrcHo_voifedq 
  Sounds = EUOrcHo_voifeha EUOrcHo_voifehb EUOrcHo_voifehc EUOrcHo_voifehd EUOrcHo_voifehe EUOrcHo_voifehf EUOrcHo_voifehg EUOrcHo_voifehh 
  ;cower portion
  Sounds = EUOrcLa_voifeca EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg 
  Sounds = EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecm 
  Sounds = EUWargR_voifeca EUWargR_voifecb EUWargR_voifecc EUWargR_voifecd EUWargR_voifece EUWargR_voifecf EUWargR_voifecg EUWargR_voifech
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 7						;EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent MordorVoiceTerrorScreech
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUOrcAr_voifeca EUOrcAr_voifecb EUOrcAr_voifecc EUOrcAr_voifecd EUOrcAr_voifece EUOrcAr_voifecf EUOrcAr_voifecg EUOrcAr_voifech 
  Sounds = EUOrcHo_voifeca EUOrcHo_voifecb EUOrcHo_voifecc EUOrcHo_voifecd EUOrcHo_voifece EUOrcHo_voifecf EUOrcHo_voifecg EUOrcHo_voifech EUOrcHo_voifeci EUOrcHo_voifecj EUOrcHo_voifeck EUOrcHo_voifecl EUOrcHo_voifecm 
  Sounds = EUWargR_voifeda  EUWargR_voifedc EUWargR_voifedd EUWargR_voifede  ;EUWargR_voifedb EUWargR_voifedf
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 7						;EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End
