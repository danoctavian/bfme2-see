////////////////
// VOICE.INC //
//////////////
//Isengard//
///////////



;------------------------------------------- IsengardBannerOrc ---------------------------------------------

AudioEvent IsengardBannerVoiceJoin
  Sounds        = EUIseBa_voijana EUIseBa_voijanb EUIseBa_voijanc EUIseBa_voijand 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBannerVoiceMove
  Sounds        = EUIseBa_voimova EUIseBa_voimovb EUIseBa_voimovc EUIseBa_voimovd EUIseBa_voimove EUIseBa_voimovf EUIseBa_voimovg EUIseBa_voimovh 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound IsengardBannerVoiceMoveMS
	Subsounds = IsengardBannerVoiceMove OrcVoiceMove2
End

AudioEvent IsengardBannerVoiceSelect
  Sounds        = EUIseBa_voisela EUIseBa_voiselb EUIseBa_voiselc EUIseBa_voiseld EUIseBa_voisele 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound IsengardBannerVoiceSelectMS
	Subsounds = IsengardBannerVoiceSelect GondorBannerVoiceSelect2
End

;-------------------------------- IsengardBuilder ------------------------------------------

AudioEvent IsengardBuilderVoiceBuild
  Sounds = ECGoBui_Builda ECGoBui_Buildb ECGoBui_Buildc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceNoBuild
  Sounds = ECGoBui_NoBuilda ECGoBui_NoBuildb ECGoBui_NoBuildc ECGoBui_NoBuildd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceCapture
  Sounds = EUOrcLa_voicona EUOrcLa_voiconb EUOrcLa_voiconc EUOrcLa_voicond EUOrcLa_voicone
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceCompleteFortress
  Sounds = ECGoBui_voicfoa ECGoBui_voicfob
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceCompleteGeneric
  Sounds = ECGoBui_voicgea ECGoBui_voicgeb ECGoBui_voicgec ECGoBui_voicged
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceFearCower
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceFearDisperse
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf
  Sounds = EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceFearDoom
  Sounds = EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Sounds = EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceFearTrample
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

AudioEvent IsengardBuilderVoiceMove
  Sounds = ECGoBui_voimova ECGoBui_voimovb ECGoBui_voimovc ECGoBui_voimovd
  Sounds = EUOrcLa_voimova EUOrcLa_voimovb EUOrcLa_voimovc EUOrcLa_voimovd EUOrcLa_voimove EUOrcLa_voimovf EUOrcLa_voimovg EUOrcLa_voimovh EUOrcLa_voimovi EUOrcLa_voimovj EUOrcLa_voimovk 
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceMoveCamp
  Sounds = EUOrcLa_voimoca EUOrcLa_voimocb EUOrcLa_voimocc
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceMoveGarrison
  Sounds = EUOrcLa_voigara EUOrcLa_voigarb
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceRetreat
  Sounds = EUOrcLa_voireta EUOrcLa_voiretb
  ;Sounds = EUPorGe_voisala EUPorGe_voisalb
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceSelect
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  ;Sounds = EUPorGe_voisela EUPorGe_voiselb EUPorGe_voiselc EUPorGe_voiseld
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceSelectBattle
  Sounds = EUOrcLa_voisebd:1500
  Sounds = EUOrcLa_voirepe:1500
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  ;Sounds = EUPorGe_voisela EUPorGe_voiselb EUPorGe_voiselc EUPorGe_voiseld
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent IsengardBuilderVoiceSelectIdle
  Sounds = EUOrcLa_voifera EUOrcLa_voiferb EUOrcLa_voiferc
  Sounds = ECGoBui_voicseia ECGoBui_voicseib ECGoBui_voicseic ECGoBui_voicseid
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

Multisound IsengardBuilderVoiceSelectMS
  Subsounds = IsengardBuilderVoiceSelect IsengardBuilderFoleySelect
End



;-------------------------------- Isengard UrukHaiCrossbowman UrukCrossbowman ------------------------------

AudioEvent UrukCrossbowmanVoiceSelect
	Sounds = EUUruCr_voisela EUUruCr_voiselb EUUruCr_voiselc EUUruCr_voiseld EUUruCr_voisele EUUruCr_voiself EUUruCr_voiselg EUUruCr_voiselh EUUruCr_voiseli 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukCrossbowmanVoiceSelectMS
	Subsounds = UrukCrossbowmanVoiceSelect UrukCrossbowmanVoiceSelect2
End

AudioEvent UrukCrossbowmanVoiceMove
	Sounds = EUUruCr_voimova EUUruCr_voimovb EUUruCr_voimovc EUUruCr_voimovd EUUruCr_voimove EUUruCr_voimovf
	Volume      = UNIT_RESPONSE_VOLUME
    PlayPercent = VOICE_MOVE_PLAY_PERCENT
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukCrossbowmanVoiceMoveMS
	Subsounds = UrukCrossbowmanVoiceMove OrcVoiceMove2
End

AudioEvent UrukCrossbowmanVoiceEnterStateMove
	Sounds = EUUruCr_voimova EUUruCr_voimovb EUUruCr_voimovc EUUruCr_voimovd EUUruCr_voimove EUUruCr_voimovf
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent UrukCrossbowmanVoiceMoveCamp
	Sounds = EUUruCr_voimoca EUUruCr_voimocb EUUruCr_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceEnterStateMoveCamp
	Sounds = EUUruCr_voimoca EUUruCr_voimocb EUUruCr_voimocc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukCrossbowmanVoiceGarrison
	Sounds = EUUruCr_voigara EUUruCr_voigarb EUUruCr_voigarc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceGarrisonSlaughterHouse
	Sounds = EUUruCr_voigarc ;EUUruCr_voigara EUUruCr_voigarb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceDisengage
	Sounds = EUUruCr_voidisa EUUruCr_voidisb EUUruCr_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceEnterStateDisengage
	Sounds = EUUruCr_voidisa EUUruCr_voidisb EUUruCr_voidisc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukCrossbowmanVoiceLineFormation
	Sounds = EUUruCr_voilina EUUruCr_voilinb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceWedgeFormation
	Sounds = EUUruCr_voiweda EUUruCr_voiwedb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceJoinAnybody
	Sounds = EUUruCr_voijana EUUruCr_voijanb EUUruCr_voijanc EUUruCr_voijand 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceAttack
	Sounds = EUUruCr_voiatta EUUruCr_voiattb EUUruCr_voiattc EUUruCr_voiattd EUUruCr_voiatte EUUruCr_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukCrossbowmanVoiceAttackMS
	Subsounds = UrukCrossbowmanVoiceAttack OrcVoiceAttack2
End

AudioEvent UrukCrossbowmanVoiceEnterStateAttack
	Sounds = EUUruCr_voiatta EUUruCr_voiattb EUUruCr_voiattc EUUruCr_voiattd EUUruCr_voiatte EUUruCr_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent UrukCrossbowmanVoiceAttackCharge
	Sounds = EUUruCr_voiatca EUUruCr_voiatcb EUUruCr_voiatcc 
	Sounds = EUUruCr_voiatta EUUruCr_voiattb EUUruCr_voiattc EUUruCr_voiattd EUUruCr_voiatte EUUruCr_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceEnterStateAttackCharge
	Sounds = EUUruCr_voiatca EUUruCr_voiatcb EUUruCr_voiatcc 
	Sounds = EUUruCr_voiatta EUUruCr_voiattb EUUruCr_voiattc EUUruCr_voiattd EUUruCr_voiatte EUUruCr_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukCrossbowmanVoiceAttackBuilding
	Sounds = EUUruCr_voiatba EUUruCr_voiatbb EUUruCr_voiatbc EUUruCr_voiatbd 
	Sounds = EUUruCr_voiatta EUUruCr_voiattc EUUruCr_voiattd EUUruCr_voiatte 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceEnterStateAttackBuilding
	Sounds = EUUruCr_voiatba EUUruCr_voiatbb EUUruCr_voiatbc EUUruCr_voiatbd 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukCrossbowmanVoiceRetreat
	Sounds = EUUruCr_voireta EUUruCr_voiretb EUUruCr_voiretc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceEnterStateRetreat
	Sounds = EUUruCr_voireta EUUruCr_voiretb EUUruCr_voiretc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukCrossbowmanVoiceSelectBattle
	Sounds = EUUruCr_voiseba EUUruCr_voisebb EUUruCr_voisebc EUUruCr_voisebd EUUruCr_voisebe 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceAmbushed
	Sounds = EUUruCr_voiamba EUUruCr_voiambb EUUruCr_voiambc EUUruCr_voiambd 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceFearDisperse
	Sounds = EUUruCr_voifeda EUUruCr_voifedb EUUruCr_voifedc EUUruCr_voifedd EUUruCr_voifede EUUruCr_voifedf
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceFearRegroup
	Sounds = EUUruCr_voifera EUUruCr_voiferb EUUruCr_voiferc EUUruCr_voiferd 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceFearCower
	Sounds = EUUruCr_voifeca EUUruCr_voifecb EUUruCr_voifecc EUUruCr_voifecd EUUruCr_voifece 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukCrossbowmanVoiceDie
      Sounds = EUUrukh_voidiea EUUrukh_voidieb EUUrukh_voidiec EUUrukh_voidied EUUrukh_voidiee EUUrukh_voidief EUUrukh_voidieg EUUrukh_voidieh EUUrukh_voidiei EUUrukh_voidiej EUUrukh_voidiek EUUrukh_voidiel EUUrukh_voidiem EUUrukh_voidien EUUrukh_voidieo 
	Volume      = UNIT_RESPONSE_VOLUME
	VolumeShift   = -20
      Type = world shrouded everyone voice
  SubmixSlider = voice
End

;---------------------------------- UrukHaiPikeman UrukPikeman ------------------------------

AudioEvent UrukPikemanVoiceSelect
	Sounds = EUUruPi_voisela EUUruPi_voiselb EUUruPi_voiselc EUUruPi_voiseld EUUruPi_voiself EUUruPi_voisele 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukPikemanVoiceSelectMS
	Subsounds = UrukPikemanVoiceSelect UrukPikemanVoiceSelect2
End

AudioEvent UrukPikemanVoiceSelectBattle
	Sounds = EUUruPi_voiseba EUUruPi_voisebb EUUruPi_voisebc EUUruPi_voisebd 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceMove
	Sounds = EUUruPi_voimova EUUruPi_voimovb EUUruPi_voimovc EUUruPi_voimovd EUUruPi_voimove EUUruPi_voimovf 
	Volume      = UNIT_RESPONSE_VOLUME
    PlayPercent =  VOICE_MOVE_PLAY_PERCENT
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukPikemanVoiceMoveMS
	Subsounds = UrukPikemanVoiceMove OrcVoiceMove2
End

AudioEvent UrukPikemanVoiceEnterStateMove
	Sounds = EUUruPi_voimova EUUruPi_voimovb EUUruPi_voimovc EUUruPi_voimovd EUUruPi_voimove EUUruPi_voimovf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceMoveCamp
	Sounds = EUUruPi_voimoca EUUruPi_voimocb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceEnterStateMoveCamp
	Sounds = EUUruPi_voimoca EUUruPi_voimocb 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceGarrison
	Sounds = EUUruPi_voigara EUUruPi_voigarb
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceGarrisonSlaughterHouse
	Sounds = EUUruPi_voigara ;EUUruPi_voigarb
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceRetreat
	Sounds = EUUruPi_voireta EUUruPi_voiretb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukPikemanVoiceRetreatMS
	Subsounds = UrukPikemanVoiceRetreat OrcVoiceMove2
End


AudioEvent UrukPikemanVoiceEnterStateRetreat
	Sounds = EUUruPi_voireta EUUruPi_voiretb 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceAttack
	Sounds = EUUruPi_voiatta EUUruPi_voiattb EUUruPi_voiattc EUUruPi_voiattd EUUruPi_voiatte EUUruPi_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukPikemanVoiceAttackMS
	Subsounds = UrukPikemanVoiceAttack OrcVoiceAttack2
End

AudioEvent UrukPikemanVoiceEnterStateAttack
	Sounds = EUUruPi_voiatta EUUruPi_voiattb EUUruPi_voiattc EUUruPi_voiattd EUUruPi_voiatte EUUruPi_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceAttackCharge
	Sounds = EUUruPi_voiatca EUUruPi_voiatcb EUUruPi_voiatcc 
	Sounds = EUUruPi_voiatta EUUruPi_voiattb EUUruPi_voiattc EUUruPi_voiattd EUUruPi_voiatte EUUruPi_voiattf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceEnterStateAttackCharge
	Sounds = EUUruPi_voiatca EUUruPi_voiatcb EUUruPi_voiatcc 
	Sounds = EUUruPi_voiatta EUUruPi_voiattb EUUruPi_voiattc EUUruPi_voiattd EUUruPi_voiatte EUUruPi_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceAttackBuilding
	Sounds = EUUruPi_voiatba EUUruPi_voiatbb EUUruPi_voiatbc 
	Sounds = EUUruPi_voiattb EUUruPi_voiattc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceEnterStateAttackBuilding
	Sounds = EUUruPi_voiatba EUUruPi_voiatbb EUUruPi_voiatbc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceDisengage
	Sounds = EUUruPi_voidisa EUUruPi_voidisb EUUruPi_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceEnterStateDisengage
	Sounds = EUUruPi_voidisa EUUruPi_voidisb EUUruPi_voidisc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukPikemanVoiceJoinAnybody
	Sounds = EUUruPi_voijana EUUruPi_voijanb EUUruPi_voijanc EUUruPi_voijand EUUruPi_voijane 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceJoinOrcs
	Sounds = EUUruPi_voijora EUUruPi_voijorb EUUruPi_voijorc EUUruPi_voijord 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoicePorcupine
	Sounds = EUUruPi_voiporb ;EUUruPi_voipora EUUruPi_voiporc EUUruPi_voipord 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanPorcupineEveryone
	Sounds = EUUruPi_voiporb ;EUUruPi_voipora  EUUruPi_voiporc EUUruPi_voipord 
	Volume      = 100
	MinRange	= 400
	MaxRange	= 1000
	Limit		= 1
	Type        = world allies enemies 
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceLineFormation
	Sounds = EUUruPi_voilina EUUruPi_voilinb ;EUUruPi_voilinc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceFearDisperse
	Sounds = EUUruPi_voifeda EUUruPi_voifedb EUUruPi_voifedd 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceFearRegroup
	Sounds = EUUruPi_voifera EUUruPi_voiferb EUUruPi_voiferc 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukPikemanVoiceFearCower
	Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc EUUruPi_voifecd EUUruPi_voifece 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

;------------------------------- Isengard UrukHaiWarrior UrukWarrior -------------------------------

AudioEvent UrukWarriorVoiceAmbushed
	Sounds = EUUrukh_voiamba EUUrukh_voiambb EUUrukh_voiambc EUUrukh_voiambd EUUrukh_voiambe EUUrukh_voiambf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceAttack
	Sounds = EUUrukh_voiatta EUUrukh_voiattb EUUrukh_voiattc EUUrukh_voiattd EUUrukh_voiatte EUUrukh_voiattf EUUrukh_voiattg EUUrukh_voiatth EUUrukh_voiatti 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound BatteringRamCrewVoiceAttackMS
	Subsounds = UrukWarriorVoiceAttack OrcVoiceAttack2
End


Multisound UrukWarriorVoiceAttackMS
	Subsounds = UrukWarriorVoiceAttack OrcVoiceMove2
End


AudioEvent UrukWarriorVoiceEnterStateAttack
    Sounds = EUUrukh_voiatta EUUrukh_voiattb EUUrukh_voiattc EUUrukh_voiattd EUUrukh_voiatte EUUrukh_voiattf EUUrukh_voiattg EUUrukh_voiatth EUUrukh_voiatti 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceAttackBuilding
	Sounds = EUUrukh_voiatba EUUrukh_voiatbb EUUrukh_voiatbc 
	Sounds = EUUrukh_voiatta EUUrukh_voiattc EUUrukh_voiattg EUUrukh_voiatti 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceEnterStateAttackBuilding
	Sounds = EUUrukh_voiatba EUUrukh_voiatbb EUUrukh_voiatbc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceAttackCharge
	Sounds = EUUrukh_voiatca EUUrukh_voiatcb EUUrukh_voiatcc EUUrukh_voiatcd 
	Sounds = EUUrukh_voiatta EUUrukh_voiattb EUUrukh_voiattc EUUrukh_voiattd EUUrukh_voiatte EUUrukh_voiattf EUUrukh_voiattg EUUrukh_voiatth EUUrukh_voiatti 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
   SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceEnterStateAttackCharge
	Sounds = EUUrukh_voiatca EUUrukh_voiatcb EUUrukh_voiatcc EUUrukh_voiatcd 
	Sounds = EUUrukh_voiatta EUUrukh_voiattb EUUrukh_voiattc EUUrukh_voiattd EUUrukh_voiatte EUUrukh_voiattf EUUrukh_voiattg EUUrukh_voiatth EUUrukh_voiatti 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceDie
	Sounds = EUUrukh_voidiea EUUrukh_voidieb EUUrukh_voidiec EUUrukh_voidied EUUrukh_voidiee EUUrukh_voidief EUUrukh_voidieg EUUrukh_voidieh EUUrukh_voidiei EUUrukh_voidiej EUUrukh_voidiek EUUrukh_voidiel EUUrukh_voidiem EUUrukh_voidien EUUrukh_voidieo 
	Volume      = UNIT_RESPONSE_MINVOLUME
    VolumeShift   = -20
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceDisengage
	Sounds = EUUrukh_voidisa EUUrukh_voidisb EUUrukh_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukWarriorVoiceDisengageMS
	Subsounds = UrukWarriorVoiceDisengage OrcVoiceMove2
End

AudioEvent UrukWarriorVoiceEnterStateDisengage
	Sounds = EUUrukh_voidisa EUUrukh_voidisb EUUrukh_voidisc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceFearCower
	Sounds = EUUrukh_voifeca EUUrukh_voifecb EUUrukh_voifecc EUUrukh_voifecd EUUrukh_voifece EUUrukh_voifecf EUUrukh_voifecg EUUrukh_voifech EUUrukh_voifeci EUUrukh_voifecj 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceFearDisperse
	Sounds = EUUrukh_voifeda  EUUrukh_voifedc EUUrukh_voifedd EUUrukh_voifede EUUrukh_voifedf EUUrukh_voifedg
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceFearRegroup
	Sounds = EUUrukh_voifera EUUrukh_voiferb EUUrukh_voiferc EUUrukh_voiferd EUUrukh_voifere 
	Volume      = UNIT_RESPONSE_VOLUME
	Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceFormationLine		;nothing specific recorded for this
	Sounds = EUUrukh_voimocb EUUruPi_voilina EUUruPi_voilinb EUUruPi_voilinc EUUruPi_voimoca EUUrukh_voijanb
	Volume      = UNIT_RESPONSE_VOLUME
	;PlayPercent = 30
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceFormationBlock		;nothing specific recorded for this
	Sounds = EUUruPi_voipora EUUruPi_voiporc EUUruPi_voiMovb EUUrukh_voisele EUUrukh_voijana EUUrukh_voifere
	Volume      = UNIT_RESPONSE_VOLUME
	;PlayPercent = 30
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceGarrison
	Sounds = EUUrukh_voigara EUUrukh_voigarb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceGarrisonSlaughterHouse
	Sounds = EUUrukh_voigara ;EUUrukh_voigarb 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceJoin
	Sounds = EUUrukh_voijana EUUrukh_voijanb EUUrukh_voijanc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceJoinOrcs
	Sounds = EUUrukh_voijora EUUrukh_voijorb EUUrukh_voijorc EUUrukh_voijord 
	Sounds = EUUruPi_voijora EUUruPi_voijorb EUUruPi_voijorc EUUruPi_voijord 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceJoinOrcsBattleChatter
	Sounds = EUUrukh_voijora EUUrukh_voijorb EUUrukh_voijorc EUUrukh_voijord 
	Sounds = EUUruPi_voijora EUUruPi_voijorb EUUruPi_voijorc EUUruPi_voijord 
    Volume      = BATTLE_CHATTER_VOLUME
    MinVolume   = BATTLE_CHATTER_MIN_VOLUME
    Type        = world allies enemies voice shrouded
    SubmixSlider = voice
    MaxRange    = BATTLE_CHATTER_RANGE
End

Multisound UrukWarriorVoiceJoinOrcsMS
	Subsounds = UrukWarriorVoiceJoinOrcs UrukWarriorVoiceJoinOrcsBattleChatter
End

AudioEvent UrukWarriorVoiceMove
	Sounds = EUUrukh_voimova EUUrukh_voimovb EUUrukh_voimovc EUUrukh_voimovd EUUrukh_voimove 
	Volume      = UNIT_RESPONSE_VOLUME
	PlayPercent = VOICE_MOVE_PLAY_PERCENT
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukWarriorVoiceMoveMS
	Subsounds = UrukWarriorVoiceMove OrcVoiceMove2
End

AudioEvent UrukWarriorVoiceEnterStateMove
  Sounds = EUUrukh_voimova EUUrukh_voimovb EUUrukh_voimovc EUUrukh_voimovd EUUrukh_voimove 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceMoveCamp
	Sounds = EUUrukh_voimoca EUUrukh_voimocb EUUrukh_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceEnterStateMoveCamp
  Sounds = EUUrukh_voimoca EUUrukh_voimocb EUUrukh_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent UrukWarriorVoiceQuarrel
	Sounds = EUUrukh_voiquaa EUUrukh_voiquab EUUrukh_voiquac EUUrukh_voiquad EUUrukh_voiquae 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceSelect
	Sounds = EUUrukh_voisela EUUrukh_voiselb EUUrukh_voiselc EUUrukh_voiseld EUUrukh_voisele EUUrukh_voiself 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound UrukWarriorVoiceSelectMS
	Subsounds = UrukWarriorVoiceSelect UrukSwordmanVoiceSelect2
End

AudioEvent UrukWarriorVoiceSelectBattle
	Sounds = EUUrukh_voiseba EUUrukh_voisebb EUUrukh_voisebc EUUrukh_voisebd EUUrukh_voisebe 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceTauntEnemy
	Sounds = EUUrukh_voitaea EUUrukh_voitaeb EUUrukh_voitaec EUUrukh_voitaed 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent UrukWarriorVoiceTauntFriend
	Sounds = EUUrukh_voitafa EUUrukh_voitafb EUUrukh_voitafc EUUrukh_voitafd EUUrukh_voitafe EUUrukh_voitaff EUUrukh_voitafg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

	;---- old stuff below ---

AudioEvent UrukVoiceSelect
End

AudioEvent UrukVoiceMove
End

Multisound UrukVoiceMoveMS
	Subsounds = UrukVoiceMove OrcVoiceMove2
End

AudioEvent UrukVoiceAttack
End

Multisound UrukVoiceAttackMS
	Subsounds = UrukVoiceAttack OrcVoiceAttack2
End

;------------------------------------------- WargRider ---------------------------------------------

AudioEvent WargRiderVoiceAttackBuilding
	Sounds = EUWargR_voiatba EUWargR_voiatbb EUWargR_voiatbc EUWargR_voiatbd 
	Sounds = EUWargR_voiatta 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceEnterStateAttackBuilding
	Sounds = EUWargR_voiatba EUWargR_voiatbb EUWargR_voiatbc EUWargR_voiatbd 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceAttackCharge
	Sounds = EUWargR_voiatca EUWargR_voiatcb EUWargR_voiatcc EUWargR_voiatcd EUWargR_voiatce EUWargR_voiatcf EUWargR_voiatcg EUWargR_voiatch 
	Sounds = EUWargR_voiatta EUWargR_voiattb EUWargR_voiattc EUWargR_voiattd EUWargR_voiatte EUWargR_voiattf EUWargR_voiattg EUWargR_voiatth EUWargR_voiatti 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceEnterStateAttackCharge
	Sounds = EUWargR_voiatca EUWargR_voiatcb EUWargR_voiatcc EUWargR_voiatcd EUWargR_voiatce EUWargR_voiatcf EUWargR_voiatcg EUWargR_voiatch 
	Sounds = EUWargR_voiatta EUWargR_voiattb EUWargR_voiattc EUWargR_voiattd EUWargR_voiatte EUWargR_voiattf EUWargR_voiattg EUWargR_voiatth EUWargR_voiatti 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceAttack
	Sounds = EUWargR_voiatta EUWargR_voiattb EUWargR_voiattc EUWargR_voiattd EUWargR_voiatte EUWargR_voiattf EUWargR_voiattg EUWargR_voiatth EUWargR_voiatti 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound WargRiderVoiceAttackMS
	Subsounds = WargRiderVoiceAttack OrcVoiceAttack2
End

AudioEvent WargRiderVoiceEnterStateAttack
	Sounds = EUWargR_voiatta EUWargR_voiattb EUWargR_voiattc EUWargR_voiattd EUWargR_voiatte EUWargR_voiattf EUWargR_voiattg EUWargR_voiatth EUWargR_voiatti 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceDie
	Sounds = EUWargR_voidiea EUWargR_voidieb EUWargR_voidiec EUWargR_voidied EUWargR_voidiee EUWargR_voidief EUWargR_voidieg EUWargR_voidieh EUWargR_voidiei EUWargR_voidiej 
	Volume        = 100
      VolumeShift   = -20
      MinRange      = 400
      MaxRange      = 1000
	Type          = world shrouded everyone voice
      SubmixSlider  = voice
End

AudioEvent WargRiderVoiceDisengage
	Sounds = EUWargR_voidisa EUWargR_voidisb EUWargR_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceEnterStateDisengage
	Sounds = EUWargR_voidisa EUWargR_voidisb EUWargR_voidisc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceFearCower
	Sounds = EUWargR_voifeca EUWargR_voifecb EUWargR_voifecc EUWargR_voifecd EUWargR_voifece EUWargR_voifecf EUWargR_voifecg EUWargR_voifech
	Volume      = UNIT_RESPONSE_VOLUME
	MinRange      = 400
	MaxRange      = 1000	
	Type        = world shrouded everyone voice
	SubmixSlider = voice
End

AudioEvent WargRiderVoiceFearDisperse
	Sounds = EUWargR_voifeda  EUWargR_voifedc EUWargR_voifedd EUWargR_voifede  ;EUWargR_voifedb EUWargR_voifedf
	Volume      = UNIT_RESPONSE_VOLUME
      MinRange      = 400
      MaxRange      = 1000	
      Type        = world shrouded everyone voice
      SubmixSlider = voice
End

AudioEvent WargRiderVoiceFearRegroup
	Sounds = EUWargR_voifera EUWargR_voiferb EUWargR_voiferc 
	Volume      = UNIT_RESPONSE_VOLUME
      MinRange      = 400
      MaxRange      = 1000
	Type        = world shrouded everyone voice
      SubmixSlider = voice
End

AudioEvent WargRiderVoiceMove
	Sounds = EUWargR_voimova EUWargR_voimovb EUWargR_voimovc EUWargR_voimovd EUWargR_voimove EUWargR_voimovf EUWargR_voimovg EUWargR_voimovh EUWargR_voimovi EUWargR_voimovj EUWargR_voimovk EUWargR_voimovl 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    PlayPercent   = VOICE_MOVE_PLAY_PERCENT
	Type        = world player voice
  SubmixSlider = voice
End

Multisound WargRiderVoiceMoveMS
	Subsounds = WargRiderVoiceMove OrcVoiceMove2
End

AudioEvent WargRiderVoiceEnterStateMove
	Sounds = EUWargR_voimova EUWargR_voimovb EUWargR_voimovc EUWargR_voimovd EUWargR_voimove EUWargR_voimovf EUWargR_voimovg EUWargR_voimovh EUWargR_voimovi EUWargR_voimovj EUWargR_voimovk EUWargR_voimovl 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceMoveCamp
	Sounds = EUWargR_voimoca EUWargR_voimocb EUWargR_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceEnterStateMoveCamp
	Sounds = EUWargR_voimoca EUWargR_voimocb EUWargR_voimocc 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceRetreat
	Sounds = EUWargR_voireta  EUWargR_voiretc EUWargR_voiretd ;EUWargR_voiretb
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceEnterStateRetreat
	Sounds = EUWargR_voireta EUWargR_voiretb EUWargR_voiretc EUWargR_voiretd 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent WargRiderVoiceSelectBattle
	Sounds = EUWargR_voiseba EUWargR_voisebb EUWargR_voisebc EUWargR_voisebd EUWargR_voisebe EUWargR_voisebf EUWargR_voisebg EUWargR_voisebh EUWargR_voisebi 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderVoiceSelect
	Sounds = EUWargR_voisela EUWargR_voiselb EUWargR_voiselc EUWargR_voiseld EUWargR_voisele EUWargR_voiself EUWargR_voiselg EUWargR_voiselh 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound WargRiderVoiceSelectMS
	Subsounds = WargRiderVoiceSelect WargRiderVoiceSelect2
End

AudioEvent WargRiderVoiceTauntEnemy
	Sounds = EUWargR_voitaea EUWargR_voitaeb EUWargR_voitaec EUWargR_voitaed EUWargR_voitaee  EUWargR_voitaeg ;EUWargR_voitaef
	Volume      = UNIT_RESPONSE_VOLUME
      MinRange      = 400
      MaxRange      = 1000
	Type        = world shrouded everyone voice
      SubmixSlider = voice
End

;--------------------------------- WildMen (Dunland?) -------------------------------

AudioEvent WildMenVoiceAttack
  Sounds = EUWildm_voiatta EUWildm_voiattb EUWildm_voiattc EUWildm_voiattd EUWildm_voiatte EUWildm_voiattf EUWildm_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceAttackBuilding
  Sounds = EUWildm_voiatba EUWildm_voiatbb EUWildm_voiatbc EUWildm_voiatbd EUWildm_voiatbe EUWildm_voiatbf
  Sounds = EUWildm_voispea EUWildm_voispeb EUWildm_voispec
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceAttackCharge
  Sounds = EUWildm_voiatca EUWildm_voiatcb EUWildm_voiatcc EUWildm_voiatcd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceCaptureBuilding
  Sounds = EUWildm_voicapa EUWildm_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceDie
  Sounds = EUWildm_voidiea EUWildm_voidieb EUWildm_voidiec EUWildm_voidied EUWildm_voidiee EUWildm_voidief
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceFearCower
  Sounds = EUWildm_voifeca EUWildm_voifecb EUWildm_voifecc EUWildm_voifecd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceFearDisperse
  Sounds = EUWildm_voifeda EUWildm_voifedb EUWildm_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceFearDoom
  Sounds = EUWildm_voifeoa EUWildm_voifeob EUWildm_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceFearTrample
  Sounds = EUWildm_voifeta EUWildm_voifetb EUWildm_voifetc EUWildm_voifetd
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent WildMenVoiceMove
  Sounds = EUWildm_voimova EUWildm_voimovb EUWildm_voimovc EUWildm_voimovd EUWildm_voimove EUWildm_voimovf EUWildm_voimovg EUWildm_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceMoveCamp
  Sounds = EUWildm_voimoca EUWildm_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceMoveGarrison
  Sounds = EUWildm_voigara EUWildm_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceMoveShip
  Sounds = EUWildm_voimosa EUWildm_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoicePillage
  Sounds = EUWildm_voispea EUWildm_voispeb EUWildm_voispec
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceSelect
  Sounds = EUWildm_voisela EUWildm_voiselb EUWildm_voiselc EUWildm_voiseld EUWildm_voisele EUWildm_voiself EUWildm_voiselg EUWildm_voiselh EUWildm_voiseli
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WildMenVoiceSelectBattle
  Sounds = EUWildm_voiseba EUWildm_voisebb EUWildm_voisebc EUWildm_voisebd EUWildm_voisebe EUWildm_voisebf EUWildm_voisebg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound WildMenVoiceSelectMS
  Subsounds = WildMenVoiceSelect PeasantVoiceSelect2
End

;--------------------------------- Wormtongue -------------------------------

AudioEvent WormtongueVoiceAttack
  Sounds = EUWormto_voiatta EUWormto_voiattb EUWormto_voiattc EUWormto_voiattd EUWormto_voiatte EUWormto_voiattf EUWormto_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceAttackBuilding
  Sounds = EUWormto_voiatba EUWormto_voiatbb EUWormto_voiatbc EUWormto_voiatbd EUWormto_voiatbe
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceAttackCharge
  Sounds = EUWormto_voiatca EUWormto_voiatcb EUWormto_voiatcc EUWormto_voiatcd EUWormto_voiatce
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceBackstab
  Sounds = EUWormto_voiatta EUWormto_voiattb EUWormto_voiattc EUWormto_voiattd EUWormto_voiatte EUWormto_voiattf EUWormto_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceCaptureBuilding
  Sounds = EUWormto_voicapa EUWormto_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceCorrodeAllegiance
  Sounds = EUWormto_voispea EUWormto_voispeb EUWormto_voispec
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceDie
  Sounds = EUWormto_voidiea EUWormto_voidieb EUWormto_voidiec EUWormto_voidied EUWormto_voidiee EUWormto_voidief EUWormto_voidieg EUWormto_voidieh EUWormto_voidiei
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinRange = 500
  MaxRange = 1000
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceDisengage
  Sounds = EUWormto_voidisa EUWormto_voidisb EUWormto_voidisc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceHelpMe
  Sounds = EUWormto_voihela EUWormto_voihelb EUWormto_voihelc EUWormto_voiheld EUWormto_voihele EUWormto_voihelf EUWormto_voihelg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( HELPME_MINVOLUME 0 )
  Priority = critical
  Type = world shrouded player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceHelpMeEnemy
  Sounds = EUWormto_voihela EUWormto_voihelc EUWormto_voiheld EUWormto_voihelg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( HELPME_MINVOLUME 0 )
  Priority = critical
  Type = world shrouded player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceMove
  Sounds = EUWormto_voimova EUWormto_voimovb EUWormto_voimovc EUWormto_voimovd EUWormto_voimove EUWormto_voimovf EUWormto_voimovg EUWormto_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceMoveCamp
  Sounds = EUWormto_voimoca EUWormto_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceMoveGarrison
  Sounds = EUWormto_voigara EUWormto_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceMoveShip
  Sounds = EUWormto_voimosa EUWormto_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceRespawn
  Sounds = EUWormto_voiresa EUWormto_voiresb EUWormto_voiresc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceRetreat
  Sounds = EUWormto_voireta EUWormto_voiretb EUWormto_voiretc EUWormto_voiretd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceSelect
  Sounds = EUWormto_voisela EUWormto_voiselb EUWormto_voiselc EUWormto_voiseld EUWormto_voisele EUWormto_voiself EUWormto_voiselg EUWormto_voiselh EUWormto_voiseli
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WormtongueVoiceSelectBattle
  Sounds = EUWormto_voiseba EUWormto_voisebb EUWormto_voisebc EUWormto_voisebd EUWormto_voisebe EUWormto_voisebf EUWormto_voisebg EUWormto_voisebh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound WormtongueVoiceSelectMS
  Subsounds = WormtongueVoiceSelect HeroVoiceSelect2
End





; -------- ISENGARD EMOTIONS ----------

AudioEvent IsengardVoiceTerrorAragornElendil
  Sounds = EUUruCr_voifeda EUUruCr_voifedb EUUruCr_voifedc EUUruCr_voifedd EUUruCr_voifede EUUruCr_voifedf
  Sounds = EUUruPi_voifeda EUUruPi_voifedb  EUUruPi_voifedd  
  Sounds =   EUUrukh_voifedc EUUrukh_voifedd EUUrukh_voifede EUUrukh_voifedf EUUrukh_voifedg
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

AudioEvent UrukVoiceFearCower				;IsengardVoiceCower
  Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc EUUruPi_voifecd EUUruPi_voifece 
  Sounds = EUUruCr_voifecb EUUruCr_voifecc EUUruCr_voifecd EUUruCr_voifece 
  Sounds = EUUrukh_voifeca EUUrukh_voifecb EUUrukh_voifecc EUUrukh_voifecd EUUrukh_voifece EUUrukh_voifecf EUUrukh_voifecg EUUrukh_voifech EUUrukh_voifeci EUUrukh_voifecj 
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

AudioEvent IsengardVoiceCowerBoromirHorn
  Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc EUUruPi_voifecd EUUruPi_voifece 
  Sounds = EUUruCr_voifecb EUUruCr_voifecc EUUruCr_voifecd EUUruCr_voifece 
  Sounds = EUUrukh_voifeca EUUrukh_voifecb EUUrukh_voifecc EUUrukh_voifecd EUUrukh_voifece EUUrukh_voifecf EUUrukh_voifecg EUUrukh_voifech EUUrukh_voifeci EUUrukh_voifecj 
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

AudioEvent UrukVoiceFearCowerBusy
  Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc EUUruPi_voifecd EUUruPi_voifece 
  Sounds = EUUruCr_voifecc EUUruCr_voifecd EUUruCr_voifece 
  Sounds = EUUrukh_voifeca EUUrukh_voifecb EUUrukh_voifecc EUUrukh_voifece EUUrukh_voifecf EUUrukh_voifecg EUUrukh_voifech EUUrukh_voifeci EUUrukh_voifecj 
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

AudioEvent IsengardVoiceDoomIncoming
  Sounds = EUUruPi_voifeda EUUruPi_voifedb EUUruPi_voifedd  
  Sounds = EUUruCr_voifeda EUUruCr_voifedb EUUruCr_voifedc EUUruCr_voifedd EUUruCr_voifede EUUruCr_voifedf 
  Sounds = EUUrukh_voifedc EUUrukh_voifedd EUUrukh_voifede EUUrukh_voifedf EUUrukh_voifedg
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

AudioEvent IsengardVoicePointEagle
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
  PlayPercent = EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent IsengardVoicePointGeneric
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
  PlayPercent = EMOTION_PLAY_PERCENT 
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent IsengardVoiceRegroup
  Sounds = EUUruPi_voifera EUUruPi_voiferb EUUruPi_voiferc 
  Sounds = EUUruCr_voifera EUUruCr_voiferb EUUruCr_voiferc EUUruCr_voiferd 
  Sounds = EUUrukh_voifera EUUrukh_voiferb EUUrukh_voiferc EUUrukh_voiferd EUUrukh_voifere 
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

AudioEvent IsengardVoiceTerrorHeads
  ;disperse portion
  Sounds = EUUruPi_voifeda EUUruPi_voifedb EUUruPi_voifedd  
  Sounds = EUUruCr_voifeda EUUruCr_voifedb EUUruCr_voifedc EUUruCr_voifedd EUUruCr_voifede EUUruCr_voifedf 
  Sounds = EUUrukh_voifedc EUUrukh_voifedd EUUrukh_voifede EUUrukh_voifedf EUUrukh_voifedg
  ;cower portion
  Sounds = EUUruPi_voifeca EUUruPi_voifecb EUUruPi_voifecc EUUruPi_voifecd EUUruPi_voifece 
  Sounds = EUUruCr_voifecb EUUruCr_voifecc EUUruCr_voifecd EUUruCr_voifece 
  Sounds = EUUrukh_voifeca EUUrukh_voifecb EUUrukh_voifecc EUUrukh_voifecd EUUrukh_voifece EUUrukh_voifecf EUUrukh_voifecg EUUrukh_voifech EUUrukh_voifeci EUUrukh_voifecj 
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

AudioEvent IsengardVoiceTerrorScreech
	;disperse portion
  Sounds = EUUruCr_voifeda EUUruCr_voifedb EUUruCr_voifedc EUUruCr_voifedd EUUruCr_voifede EUUruCr_voifedf
  Sounds = EUUruPi_voifeda EUUruPi_voifedb EUUruPi_voifedd 
  Sounds =   EUUrukh_voifedc EUUrukh_voifedd EUUrukh_voifede EUUrukh_voifedf EUUrukh_voifedg
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
