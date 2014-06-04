////////////////
// VOICE.INC //
//////////////
//Gondor//
/////////


;------------------------------------------------------------------

AudioEvent GondorSoldierScreamFromNazgul
  Sounds =
  PlayPercent = 56
  Limit = 1
  Volume = 110
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End

AudioEvent GondorSoldierScream
  Sounds =
  PlayPercent = 50
  Limit = 1
  Volume = 110
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End

AudioEvent GondorSoldierPointToTheNazgul
  Sounds =
  ;PlayPercent = 70
  Limit = 1
  Delay = 0 1000
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End

AudioEvent GondorSoldierFearRunFromHeads
  Sounds = ;GUYeoAr_voifeda GUYeoAr_voifedg GUYeoAr_voifedh GUPeasm_voifech GUPeasm_voifeci GUPeasm_voifecj GUPeasm_voifeck GUPeasm_voifecl
  ;PlayPercent = 70
  Limit = 1
  Delay = 0 1000
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End


AudioEvent GondorSoldierTrollFear
  Sounds =
  ;PlayPercent = 70
  Limit = 1
  Delay = 0 1000
  Type = world player voice
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End

; This is played when soldiers are afraid and getting another fear event
AudioEvent GondorSoldierTrollFearContinuing
  Sounds =  
  PlayPercent = 40
  Limit = 1
  Delay = 0 1000
  Volume = 90
  MinRange = 250
  MaxRange = 700
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End

; Sound an instant before being hit by a troll's attack
AudioEvent GondorInfantryPreTrollSmackScream
  Sounds =
  Volume = 110
  Delay = 0 1000
  Limit = 2
  VolumeShift = -10
  Type = world shrouded everyone 
  SubmixSlider = voice
End

; When a group of frightened soldiers attack anyway (because they are under attack)
AudioEvent GondorSoldierVoiceDesperateCharge
  Sounds      = 
  Volume      = 90
  Limit = 2
  Priority    = high
  MinRange    = 320
  Type        = world shrouded everyone
  SubmixSlider = voice
End

AudioEvent GondorSoldierRecoverFromTerror
  Sounds =
  Limit = 1
  Volume = 90
  MinRange = 300
  Priority    = normal
  Type        = world shrouded everyone
  SubmixSlider = voice
End


;------------------------------------------- Boromir ---------------------------------------------

AudioEvent BoromirVoiceAttackBuilding
  Sounds        = GUBorom_voiatba GUBorom_voiatbb GUBorom_voiatbc GUBorom_voiattd
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceAttackCharge
  Sounds        = GUBorom_voiatca GUBorom_voiatcb GUBorom_voiatcc GUBorom_voiatcd 
  Sounds        = GUBorom_voiatta GUBorom_voiattb GUBorom_voiattc GUBorom_voiattd GUBorom_voiatte 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceAttack
  Sounds        = GUBorom_voiatta GUBorom_voiattb GUBorom_voiattc GUBorom_voiattd GUBorom_voiatte 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceDie
  Sounds        = GUBorom_voidiea GUBorom_voidieb GUBorom_voidiec GUBorom_voidied GUBorom_voidiee 
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceDisengage
  Sounds        = GUBorom_voidisa GUBorom_voidisb GUBorom_voidisc GUBorom_voidisd 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceGarrison
  Sounds        = GUBorom_voigara GUBorom_voigarb GUBorom_voigarc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceHelpMe
  Sounds        = GUBorom_voihela GUBorom_voihelb GUBorom_voihelc GUBorom_voiheld 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent BoromirVoiceJoinAnybody
  Sounds        = GUBorom_voijana GUBorom_voijanb GUBorom_voijanc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceMoveCamp
  Sounds        = GUBorom_voimoca GUBorom_voimocb GUBorom_voimocc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceMove
  Sounds        = GUBorom_voimova GUBorom_voimovb GUBorom_voimovc GUBorom_voimovd GUBorom_voimove GUBorom_voimovf GUBorom_voimovg GUBorom_voimovh 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceMoveGroup
  Sounds        = GUBorom_voimova GUBorom_voimovb GUBorom_voimovc GUBorom_voimovd GUBorom_voimove GUBorom_voimovf GUBorom_voimovg GUBorom_voimovh 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceRespawn
  Sounds        = GUBorom_voiresa GUBorom_voiresb GUBorom_voiresc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceRetreat
  Sounds        = GUBorom_voireta 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceSalute
  Sounds        = GUBorom_voisald ;GUBorom_voisala GUBorom_voisalb GUBorom_voisalc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceSelectBattle
  Sounds        = GUBorom_voiseba GUBorom_voisebb GUBorom_voisebc GUBorom_voisebd GUBorom_voisebe GUBorom_voisebf GUBorom_voisebg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceSelect
  Sounds        = boromirsel1 boromirsel2 boromirsel3 boromirsel4 boromirsel5 boromirsel6 boromirsel7 boromirsel8 boromirsel9 boromirsel10 boromirsel11
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound BoromirVoiceSelectMS
	Subsounds = BoromirVoiceSelect HeroVoiceSelect2
End

AudioEvent BoromirVoiceSpeech
  Sounds        = GUBorom_voispea GUBorom_voispeb GUBorom_voispec GUBorom_voisped 
  Volume        = 120
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceCaptainOfGondor
  Sounds        = boromirexp1 boromirexp2
  Volume        = 120
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End


;------------------------------------------- FaramirRanger ---------------------------------------------

AudioEvent FaramirRangerVoiceAttackBuilding
  Sounds        = GUFarRa_voiatba GUFarRa_voiatbb GUFarRa_voiatta GUFarRa_voiattb GUFarRa_voiattd GUFarRa_voiatte ;GUFarRa_voiatbc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceAttackCharge
  Sounds        = GUFarRa_voiatca GUFarRa_voiatcb GUFarRa_voiatcc 
  Sounds        = GUFarRa_voiatta GUFarRa_voiattb GUFarRa_voiattc GUFarRa_voiattd GUFarRa_voiatte 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceAttack
  Sounds        = GUFarRa_voiatta GUFarRa_voiattb GUFarRa_voiattc GUFarRa_voiattd GUFarRa_voiatte 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceDie
  Sounds        = GUFarRa_voidiea GUFarRa_voidieb GUFarRa_voidiec 
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceDisengage
  Sounds        = GUFarRa_voidisa ;GUFarRa_voidisb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceGarrison
  Sounds        = GUFarRa_voigara GUFarRa_voigarb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceModeKnight
  Sounds        = GUFarRa_voimkna GUFarRa_voimknb GUFarRa_voimknc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound FaramirRangerVoiceModeKnightMS
	Subsounds = FaramirRangerVoiceModeKnight HorseWhinnyForMountButton
End

AudioEvent FaramirRangerVoiceMoveCamp
  Sounds        = GUFarRa_voimoca GUFarRa_voimocb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceMoveTrees
  Sounds        = GUFarRa_voimota GUFarRa_voimotb GUFarRa_voimotc GUFarRa_voimotd GUFarRa_voimote 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceMove
  Sounds        = GUFarRa_voimova GUFarRa_voimovb GUFarRa_voimovc GUFarRa_voimovd GUFarRa_voimove GUFarRa_voimovf GUFarRa_voimovg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceMoveGroup
  Sounds        = GUFarRa_voimova GUFarRa_voimovb GUFarRa_voimovc GUFarRa_voimovd GUFarRa_voimove GUFarRa_voimovf GUFarRa_voimovg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
  
End

AudioEvent FaramirRangerVoiceRetreat
  Sounds        = GUFarRa_voireta 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceSalute
  Sounds        = GUFarRa_voisalc ;GUFarRa_voisala GUFarRa_voisalb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceSelectBattle
  Sounds        = GUFarRa_voiseba GUFarRa_voisebb GUFarRa_voisebc GUFarRa_voisebd GUFarRa_voisebe 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirRangerVoiceSelect
  Sounds        = GUFarRa_voisela GUFarRa_voiselb GUFarRa_voiselc GUFarRa_voiseld GUFarRa_voisele 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound FaramirRangerVoiceSelectMS
	Subsounds = FaramirRangerVoiceSelect HeroVoiceSelect2
End

AudioEvent FaramirRangerVoiceWoundingArrow
  Sounds = GUFarKn_voiatca GUFarRa_voiatca	;"For Gondor!"
  Sounds = GUFarKn_voisela GUFarKn_voiselc	;"I will doo what I can." "In Gondor's honor."
  ;Sounds = GUFarKn_voiatcc GUFarKn_voiatcd	;sound bad
  ;Sounds = GUFarRa_voiwoua GUFarRa_voiwoub GUFarRa_voiwouc GUFarRa_voiwoud ;(the lines don't apply to when he's attacking a building)
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

;------------------------------------------- FaramirKnight ---------------------------------------------

AudioEvent FaramirKnightVoiceAttackBuilding
  Sounds        = GUFarKn_voiatba GUFarKn_voiatbb ;GUFarKn_voiatbc 
  Sounds        = GUFarKn_voiattb GUFarKn_voiattc GUFarKn_voiatte GUFarKn_voiattg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceAttackCharge
  Sounds        = GUFarKn_voiatca GUFarKn_voiatcb GUFarKn_voiatcc GUFarKn_voiatcd 
  Sounds        = GUFarKn_voiatta GUFarKn_voiattb GUFarKn_voiattc GUFarKn_voiattd GUFarKn_voiatte GUFarKn_voiattf GUFarKn_voiattg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceAttack
  Sounds        = GUFarKn_voiatta GUFarKn_voiattb GUFarKn_voiattc GUFarKn_voiattd GUFarKn_voiatte GUFarKn_voiattf GUFarKn_voiattg 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceCaptain
  Sounds        = GUFarKn_voicapa GUFarKn_voicapb GUFarKn_voicapc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceDisengage
  Sounds        = GUFarKn_voidisa GUFarKn_voidisb GUFarKn_voidisc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceHelpMe
  Sounds        = GUFarKn_voihela GUFarKn_voihelb GUFarKn_voihelc GUFarKn_voiheld 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= HELPME_MINVOLUME 
  Type          = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceMoveCamp
  Sounds        = GUFarKn_voimoca GUFarKn_voimocb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceMove
  Sounds        = GUFarKn_voimova GUFarKn_voimovb GUFarKn_voimovc GUFarKn_voimovd GUFarKn_voimove GUFarKn_voimovf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceMoveGroup
  Sounds        = GUFarKn_voimova GUFarKn_voimovb GUFarKn_voimovc GUFarKn_voimovd GUFarKn_voimove GUFarKn_voimovf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceModeRanger
  Sounds        = GUFarKn_voimraa GUFarKn_voimrab GUFarKn_voimrac 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound FaramirKnightVoiceModeRangerMS
	Subsounds = FaramirKnightVoiceModeRanger UnmountButtonFoley
End

AudioEvent FaramirKnightVoiceRespawn
  Sounds        = GUFarKn_voiresa GUFarKn_voiresc ;GUFarKn_voiresb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceRetreat
  Sounds        = GUFarKn_voireta GUFarKn_voiretb GUFarKn_voiretc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceSelectBattle
  Sounds        = GUFarKn_voiseba GUFarKn_voisebb GUFarKn_voisebc GUFarKn_voisebd GUFarKn_voisebe GUFarKn_voisebf 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent FaramirKnightVoiceSelect
  Sounds        = GUFarKn_voisela GUFarKn_voiselb GUFarKn_voiselc GUFarKn_voiseld GUFarKn_voisele GUFarKn_voiself 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound FaramirKnightVoiceSelectMS
	Subsounds = FaramirKnightVoiceSelect BannerRiderVoiceSelect2
End

AudioEvent FaramirKnightVoiceSpeech
  Sounds        = GUFarKn_voispea GUFarKn_voispeb GUFarKn_voispec 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Delay = 500 500
  Type          = world player voice
  SubmixSlider = voice
End


;---------------------------------------------- GondorArcher --------------------------------------------

AudioEvent GondorArcheryRangeVoiceFire
  Sounds = GUArchg_voiatca GUArchg_voiattb GUArchg_voiattd
  Volume = 54
  MinRange = 100
  MaxRange = 300
  PlayPercent = 6
  Priority = lowest
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent GondorArcheryRangeVoiceAim
  Sounds = GUArchg_voisela GUArchg_voiattg GUArchg_voiselb GUArchg_voiselc GUArchg_voitraa GUArchg_voitrab GUArchg_voitrac GUArchg_voitrad GUArchg_voitrae
  Volume = 54
  MinRange = 100
  MaxRange = 300
  PlayPercent = 6
  Priority = lowest
  Type = world shrouded everyone voice
  SubmixSlider = SoundFX
End

AudioEvent GondorArcherVoiceDie
  Sounds      = GUArchg_voidiea GUArchg_voidieb GUArchg_voidiec GUArchg_voidied GUArchg_voidiee GUArchg_voidief GUArchg_voidieg
  Volume      = UNIT_RESPONSE_VOLUME
  VolumeShift   = -20
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceAttack
  Sounds      = GUArchg_voiatta GUArchg_voiattb GUArchg_voiattc GUArchg_voiattd GUArchg_voiatte GUArchg_voiattf GUArchg_voiattg
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceAttackWebbedSoldier
  Sounds      = GUArchg_voimova GUArchg_voimovb GUArchg_voimovc GUArchg_voimovd GUArchg_voimove GUArchg_voimovf GUArchg_voimovg GUArchg_voimovh
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateAttack
  Sounds        = GUArchg_voiatta GUArchg_voiattb GUArchg_voiattc GUArchg_voiattd GUArchg_voiatte GUArchg_voiattf GUArchg_voiattg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceAmbushed
  Sounds      = GUArchg_voiamba GUArchg_voiambb GUArchg_voiambc GUArchg_voiambd GUArchg_voiambe 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceAttackBuilding
  Sounds      = GUArchg_voiatba GUArchg_voiatbb GUArchg_voiatbc
  Sounds      = GUArchg_voiatta GUArchg_voiattb GUArchg_voiattc GUArchg_voiattd GUArchg_voiatte GUArchg_voiattf GUArchg_voiattg
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateAttackBuilding
  Sounds        = GUArchg_voiatba GUArchg_voiatbb GUArchg_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceAttackCharge
  Sounds      = GUArchg_voiatca GUArchg_voiatcb GUArchg_voiatcc
  Sounds      = GUArchg_voiatta GUArchg_voiattb GUArchg_voiattc GUArchg_voiattd GUArchg_voiatte GUArchg_voiattf GUArchg_voiattg
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateAttackCharge
  Sounds        = GUArchg_voiatca GUArchg_voiatcb GUArchg_voiatcc
  Sounds        = GUArchg_voiatta GUArchg_voiattb GUArchg_voiattc GUArchg_voiattd GUArchg_voiatte GUArchg_voiattf GUArchg_voiattg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceDisengage
  Sounds      = GUArchg_voidisa GUArchg_voidisb GUArchg_voidisc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateDisengage
  Sounds      = GUArchg_voidisa GUArchg_voidisb GUArchg_voidisc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceFearCower
  Sounds      = GUArchg_voifeca GUArchg_voifecb GUArchg_voifecc GUArchg_voifecd GUArchg_voifece GUArchg_voifecf GUArchg_voifecg
  Volume      = UNIT_RESPONSE_VOLUME
  Limit = 1
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceFearDisperse
  Sounds      = GUArchg_voifeda GUArchg_voifedb GUArchg_voifedc GUArchg_voifedd GUArchg_voifede GUArchg_voifedf GUArchg_voifedg GUArchg_voifedh GUArchg_voifedi
  Volume      = UNIT_RESPONSE_VOLUME
  Limit = 1
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceFearHit
  Sounds      = GUArchg_voifeha GUArchg_voifehb GUArchg_voifehc GUArchg_voifehd GUArchg_voifehe GUArchg_voifehf
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceFearPoint
  Sounds      = GUArchg_voifepa GUArchg_voifepb GUArchg_voifepc
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceFearRegroup
  Sounds      = GUArchg_voifera GUArchg_voiferb GUArchg_voiferc GUArchg_voiferd GUArchg_voifere GUArchg_voiferf
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceGarrison
  Sounds      = GUArchg_voigara GUArchg_voigarb GUArchg_voigarc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceJoinAnybody
  Sounds      = GUArchg_voijana GUArchg_voijanb GUArchg_voijanc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceLineFormation
  Sounds      = GUArchg_voilina GUArchg_voilinb GUArchg_voilinc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceWedgeFormation
  Sounds      = GUArchg_voiweda GUArchg_voiwedb GUArchg_voiwedc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceMoveCamp
  Sounds      = GUArchg_voimoca GUArchg_voimocb GUArchg_voimocc GUArchg_voimocd GUArchg_voimoce
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateMoveCamp
  Sounds      = GUArchg_voimoca GUArchg_voimocb GUArchg_voimocc GUArchg_voimocd GUArchg_voimoce
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceMove
  Sounds      = GUArchg_voimova GUArchg_voimovb GUArchg_voimovc GUArchg_voimovd GUArchg_voimove GUArchg_voimovf GUArchg_voimovg GUArchg_voimovh
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateMove
  Sounds      = GUArchg_voimova GUArchg_voimovb GUArchg_voimovc GUArchg_voimovd GUArchg_voimove GUArchg_voimovf GUArchg_voimovg GUArchg_voimovh
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceSelect
  Sounds      = GUArchg_voisela GUArchg_voiselb GUArchg_voiselc GUArchg_voiseld GUArchg_voisele GUArchg_voiself GUArchg_voiselg
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

Multisound GondorArcherVoiceSelectMS
	Subsounds = GondorArcherVoiceSelect GondorTowerGuardVoiceSelect2
End

AudioEvent GondorArcherVoiceSelectBattle
  Sounds      = GUArchg_voiseba GUArchg_voisebb GUArchg_voisebc GUArchg_voisebd GUArchg_voisebe GUArchg_voisebf
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceRetreat
  Sounds      = GUArchg_voireta GUArchg_voiretb GUArchg_voiretc GUArchg_voiretd
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceEnterStateRetreat
  Sounds      = GUArchg_voireta GUArchg_voiretb GUArchg_voiretc GUArchg_voiretd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorArcherVoiceSalute
  Sounds      = GUArchg_voisala ;GUArchg_voisalb GUArchg_voisalc GUArchg_voisald
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceArcheryRange
  Sounds	= GUArchg_voitraa GUArchg_voitrab GUArchg_voitrac GUArchg_voitrad GUArchg_voitrae
  Volume	= UNIT_RESPONSE_MINVOLUME
  Type		= world everyone voice
  SubmixSlider	= voice
End

	;---------------- old below -----------------------

AudioEvent GondorArcherVoiceCombine
;  Sounds      = GUArchg_voicoma  GUArchg_voicomb GUArchg_voicomc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceCreated
; Sounds      = GUArchg_voicrea GUArchg_voicreb GUArchg_voicrec GUArchg_voicred
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceBuy
;  Sounds      = ;GUArchg_voibuya GUArchg_voibuyb GUArchg_voibuyc GUArchg_voibuyd GUArchg_voibuye
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceFear
;  Sounds      = GUArchg_voifeaa GUArchg_voifeab GUArchg_voifeac GUArchg_voifead GUArchg_voifeae
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherVoiceInspired
;  Sounds      = GUArchg_voiinsa GUArchg_voiinsb GUArchg_voiinsc GUArchg_voiinsd
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorArcherDie
;  Sounds      = GUArchg_voidiea GUArchg_voidieb GUArchg_voidiec GUArchg_voidied GUArchg_voidiee GUArchg_voidief GUArchg_voidieg
  Volume      = UNIT_RESPONSE_VOLUME
  Type = world player voice
  SubmixSlider = voice
End

;------------------------------------------- GondorBannerCarrier ---------------------------------------------

AudioEvent GondorBannerVoiceDie
  Sounds      = GUGonBa_voidiea GUGonBa_voidieb GUGonBa_voidiec GUGonBa_voidied GUGonBa_voidiee
  Volume      = 100
  VolumeShift   = -20
  MinRange      = 400
  MaxRange      = 1000
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorBannerVoiceJoin
  Sounds      = GUGonBa_voijana GUGonBa_voijanb GUGonBa_voijanc GUGonBa_voijand
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorBannerVoiceMove
  Sounds      = GUGonBa_voimova GUGonBa_voimovb GUGonBa_voimovc GUGonBa_voimovd GUGonBa_voimove
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorBannerVoiceEnterStateMove
  Sounds      = GUGonBa_voimova GUGonBa_voimovb GUGonBa_voimovc GUGonBa_voimovd GUGonBa_voimove
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorBannerVoiceSalute
  ;Sounds      = GUGonBa_voisalb  ;GUGonBa_voisala GUGonBa_voisalc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GondorBannerVoiceSelect
  Sounds      = GUGonBa_voisela GUGonBa_voiselc GUGonBa_voiseld GUGonBa_voisele GUGonBa_voiself ;GUGonBa_voiselb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

Multisound GondorBannerVoiceSelectMS
	Subsounds = GondorBannerVoiceSelect GondorBannerVoiceSelect2
End

;---------------------------------------------- GondorKnight GondorCavalry GondorHorse ---------------------------------

AudioEvent GondorKnightVoiceAmbushed
  Sounds        = GUKnigh_voiamba GUKnigh_voiambb GUKnigh_voiambc GUKnigh_voiambd GUKnigh_voiambe GUKnigh_voiambf GUKnigh_voiambg GUKnigh_voiambh
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceAttackBuilding
  Sounds        = GUKnigh_voiatba GUKnigh_voiatbb GUKnigh_voiatbc
  Sounds        = GUKnigh_voiatta GUKnigh_voiattb GUKnigh_voiattc GUKnigh_voiattd GUKnigh_voiattf GUKnigh_voiattg ;GUKnigh_voiatth
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateAttackBuilding
  Sounds        = GUKnigh_voiatba GUKnigh_voiatbb GUKnigh_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceAttackCharge
  Sounds        = GUKnigh_voiatca GUKnigh_voiatcb GUKnigh_voiatcc GUKnigh_voiatcd GUKnigh_voiatce
  Sounds        = GUKnigh_voiatta GUKnigh_voiattb GUKnigh_voiattc GUKnigh_voiattd GUKnigh_voiatte GUKnigh_voiattf GUKnigh_voiattg ;GUKnigh_voiatth
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateAttackCharge
  Sounds        = GUKnigh_voiatca GUKnigh_voiatcb GUKnigh_voiatcc GUKnigh_voiatcd GUKnigh_voiatce
  Sounds        = GUKnigh_voiatta GUKnigh_voiattb GUKnigh_voiattc GUKnigh_voiattd GUKnigh_voiatte GUKnigh_voiattf GUKnigh_voiattg ;GUKnigh_voiatth
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceAttack
  Sounds        = GUKnigh_voiatta GUKnigh_voiattb GUKnigh_voiattc GUKnigh_voiattd GUKnigh_voiatte GUKnigh_voiattf GUKnigh_voiattg ;GUKnigh_voiatth
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateAttack
  Sounds        = GUKnigh_voiatta GUKnigh_voiattb GUKnigh_voiattc GUKnigh_voiattd GUKnigh_voiatte GUKnigh_voiattf GUKnigh_voiattg ;GUKnigh_voiatth
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceDisengage
  Sounds        = GUKnigh_voidisa GUKnigh_voidisb GUKnigh_voidisc GUKnigh_voidisd GUKnigh_voidise
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateDisengage
  Sounds        = GUKnigh_voidisa GUKnigh_voidisb GUKnigh_voidisc GUKnigh_voidisd GUKnigh_voidise
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceFearCower
  Sounds        = GUKnigh_voifeca GUKnigh_voifecb GUKnigh_voifecc GUKnigh_voifecd GUKnigh_voifece GUKnigh_voifecf GUKnigh_voifecg GUKnigh_voifech GUKnigh_voifeci GUKnigh_voifecj GUKnigh_voifeck GUKnigh_voifecl
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceFearDisperse
  Sounds        = GUKnigh_voifeda GUKnigh_voifedb GUKnigh_voifedc GUKnigh_voifedd GUKnigh_voifede GUKnigh_voifedf GUKnigh_voifedg GUKnigh_voifedh GUKnigh_voifedi
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceFearPoint
  Sounds        = GUKnigh_voifepa
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceFearRegroup
  Sounds        = GUKnigh_voifera GUKnigh_voiferb GUKnigh_voiferc GUKnigh_voiferd GUKnigh_voifere GUKnigh_voiferf GUKnigh_voiferg
  Volume        = UNIT_RESPONSE_VOLUME
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceJoinAnybody
  Sounds        = GUKnigh_voijana GUKnigh_voijanb GUKnigh_voijanc
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceLineFormation
  Sounds        = GUKnigh_voilina GUKnigh_voilinb
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceMoveCamp
  Sounds        = GUKnigh_voimoca GUKnigh_voimocb GUKnigh_voimocc GUKnigh_voimocd GUKnigh_voimoce ;GUKnigh_voimocf
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateMoveCamp
  Sounds        = GUKnigh_voimoca GUKnigh_voimocb GUKnigh_voimocc GUKnigh_voimocd GUKnigh_voimoce ;GUKnigh_voimocf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceMove
  Sounds        = GUKnigh_voimova GUKnigh_voimovb GUKnigh_voimovc GUKnigh_voimovd  GUKnigh_voimovf GUKnigh_voimovg GUKnigh_voimovh GUKnigh_voimovi GUKnigh_voimovj GUKnigh_voimovk ;GUKnigh_voimove
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateMove
  Sounds        = GUKnigh_voimova GUKnigh_voimovb GUKnigh_voimovc GUKnigh_voimovd  GUKnigh_voimovf GUKnigh_voimovg GUKnigh_voimovh GUKnigh_voimovi GUKnigh_voimovj GUKnigh_voimovk ;GUKnigh_voimove
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceRetreat
  Sounds        = GUKnigh_voireta GUKnigh_voiretb GUKnigh_voiretc GUKnigh_voiretd
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceEnterStateRetreat
  Sounds        = GUKnigh_voireta GUKnigh_voiretb GUKnigh_voiretc GUKnigh_voiretd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorKnightVoiceSalute
  Sounds        = GUKnigh_voisalc ;GUKnigh_voisala GUKnigh_voisalb 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceSelectBattle
  Sounds        = GUKnigh_voiseba GUKnigh_voisebb GUKnigh_voisebc GUKnigh_voisebd GUKnigh_voisebe GUKnigh_voisebf
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorKnightVoiceSelect
  Sounds        = GUKnigh_voisela GUKnigh_voiselb GUKnigh_voiselc GUKnigh_voiseld GUKnigh_voisele GUKnigh_voiself GUKnigh_voiselg
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

Multisound GondorKnightVoiceSelectMS
	Subsounds = GondorKnightVoiceSelect RohirrimAttention
End

AudioEvent GondorKnightVoiceWedgeFormation
  Sounds        = GUKnigh_voiweda GUKnigh_voiwedb GUKnigh_voiwedc
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End


;------------------------------------------------ GondorSoldier -----------------------------------

AudioEvent GondorSoldierVoiceAmbushed
  Sounds = GUSoldg_voiamba GUSoldg_voiambb GUSoldg_voiambc GUSoldg_voiambd GUSoldg_voiambe GUSoldg_voiambf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceAttackBuilding
  Sounds = GUSoldg_voiatba GUSoldg_voiatbb GUSoldg_voiatbc 
  Sounds = GUSoldg_voiatta GUSoldg_voiattb GUSoldg_voiattc GUSoldg_voiattd GUSoldg_voiatte GUSoldg_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateAttackBuilding
  Sounds = GUSoldg_voiatba GUSoldg_voiatbb GUSoldg_voiatbc 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceAttackCharge
  Sounds = GUSoldg_voiatca GUSoldg_voiatcb GUSoldg_voiatcc GUSoldg_voiatcd GUSoldg_voiatce GUSoldg_voiatcf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateAttackCharge
  Sounds = GUSoldg_voiatca GUSoldg_voiatcb GUSoldg_voiatcc GUSoldg_voiatcd GUSoldg_voiatce GUSoldg_voiatcf 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceAttack
  Sounds = GUSoldg_voiatta GUSoldg_voiattb GUSoldg_voiattc GUSoldg_voiattd GUSoldg_voiatte GUSoldg_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceAttackWebbedSoldier
  Sounds = GUSoldg_voimova GUSoldg_voimovb GUSoldg_voimovc GUSoldg_voimovd GUSoldg_voimove GUSoldg_voimovf GUSoldg_voimovg GUSoldg_voimovh GUSoldg_voimovi GUSoldg_voimovj GUSoldg_voimovk GUSoldg_voimovl GUSoldg_voimovm 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateAttack
  Sounds = GUSoldg_voiatta GUSoldg_voiattb GUSoldg_voiattc GUSoldg_voiattd GUSoldg_voiatte GUSoldg_voiattf 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceBlockFormationOn
  Sounds = GUSoldg_voibloa GUSoldg_voiblob 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceDie
  Sounds = GUSoldg_voidiea GUSoldg_voidieb GUSoldg_voidiec GUSoldg_voidied GUSoldg_voidiee GUSoldg_voidief GUSoldg_voidieg GUSoldg_voidieh GUSoldg_voidiei GUSoldg_voidiej 
  Volume      = UNIT_RESPONSE_VOLUME
  VolumeShift   = -20
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceDisengage
  Sounds = GUSoldg_voidisa GUSoldg_voidisb GUSoldg_voidisc GUSoldg_voidisd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateDisengage
  Sounds = GUSoldg_voidisa GUSoldg_voidisb GUSoldg_voidisc GUSoldg_voidisd 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceFearCower
  Sounds = GUSoldg_voifeca GUSoldg_voifecb GUSoldg_voifecc GUSoldg_voifecd GUSoldg_voifece GUSoldg_voifecf GUSoldg_voifecg 
  Volume      = UNIT_RESPONSE_VOLUME
  Limit = 1
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceFearDisperse
  Sounds = GUSoldg_voifeda GUSoldg_voifedb GUSoldg_voifedc GUSoldg_voifedd GUSoldg_voifede GUSoldg_voifedf GUSoldg_voifedg GUSoldg_voifedi
  Volume      = UNIT_RESPONSE_VOLUME
  Limit = 1
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceFearPoint
  Sounds = GUSoldg_voifepa GUSoldg_voifepb 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceFearRegroup
  Sounds = GUSoldg_voifera GUSoldg_voiferb GUSoldg_voiferc GUSoldg_voiferd GUSoldg_voifere GUSoldg_voiferg GUSoldg_voiferh GUSoldg_voiferi 
  Volume      = UNIT_RESPONSE_VOLUME
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceGarrison
  Sounds = GUSoldg_voigara GUSoldg_voigarb GUSoldg_voigarc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceJoinAnybody
  Sounds = GUSoldg_voijana GUSoldg_voijanb GUSoldg_voijanc GUSoldg_voijand GUSoldg_voijane 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceLineFormation
  Sounds = GUSoldg_voilina GUSoldg_voilinb GUSoldg_voilinc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceMoveCamp
  Sounds = GUSoldg_voimoca GUSoldg_voimocb GUSoldg_voimocc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateMoveCamp
  Sounds = GUSoldg_voimoca GUSoldg_voimocb GUSoldg_voimocc 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceMove
  Sounds = GUSoldg_voimova GUSoldg_voimovb GUSoldg_voimovc GUSoldg_voimovd GUSoldg_voimove GUSoldg_voimovf GUSoldg_voimovg GUSoldg_voimovh GUSoldg_voimovi GUSoldg_voimovj GUSoldg_voimovk GUSoldg_voimovl GUSoldg_voimovm 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateMove
  Sounds = GUSoldg_voimova GUSoldg_voimovb GUSoldg_voimovc GUSoldg_voimovd GUSoldg_voimove GUSoldg_voimovf GUSoldg_voimovg GUSoldg_voimovh GUSoldg_voimovi GUSoldg_voimovj GUSoldg_voimovk GUSoldg_voimovl GUSoldg_voimovm 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceRetreat
  Sounds = GUSoldg_voireta GUSoldg_voiretb GUSoldg_voiretc GUSoldg_voiretd GUSoldg_voirete 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceEnterStateRetreat
  Sounds = GUSoldg_voireta GUSoldg_voiretb GUSoldg_voiretc GUSoldg_voiretd GUSoldg_voirete 
  Limit = 1
  Volume      = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type        = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange    = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GondorSoldierVoiceSalute
  Sounds = GUSoldg_voisalb ;GUSoldg_voisala GUSoldg_voisalc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceSelectBattle
  Sounds = GUSoldg_voiseba GUSoldg_voisebb GUSoldg_voisebc GUSoldg_voisebd GUSoldg_voisebe GUSoldg_voisebf GUSoldg_voisebg GUSoldg_voisebh GUSoldg_voisebi GUSoldg_voisebj 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSoldierVoiceSelect
  Sounds = GUSoldg_voisela GUSoldg_voiselb GUSoldg_voiselc GUSoldg_voiseld GUSoldg_voisele GUSoldg_voiself GUSoldg_voiselg GUSoldg_voiselh GUSoldg_voiseli 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound GondorSoldierVoiceSelectMS
	Subsounds = GondorSoldierVoiceSelect GondorSwordmanVoiceSelect2
End