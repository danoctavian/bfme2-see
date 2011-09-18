

;--------------------------------- Gollum -------------------------------
AudioEvent GollumVoiceAboutToStealRing_SEE
  Sounds        = EUgollum_precious EUGollu_voimovc EUGollu_voiselc EUGollu_voiseld EUGollu_voisele
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Priority = critical
  Type          = world everyone voice
  SubmixSlider = voice
End

AudioEvent GollumVoiceRingStolenCheer_SEE
  Attack        = EUGollu_voiselh EUGollu_voiselo
  Sounds        = EUGollu_voiselp
  Decay        = EUGollu_voiselo
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Priority = high
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GollumVoiceConverted_SEE
  Sounds        = EUGollu_voifeca EUGollu_voifecb EUGollu_voifecc EUGollu_voifecd EUGollu_voifece EUSmeag_voifeca EUSmeag_voifecb EUSmeag_voifecd EUSmeag_voifece EUSmeag_voifecf 
  Sounds        = EUSmeag_voisela EUSmeag_voiselb EUSmeag_voiseld EUSmeag_voisele EUSmeag_voiselg EUSmeag_voiseli EUSmeag_voiselj EUgollum_stoleitfromus
  Sounds        = EUGollu_voifeca EUGollu_voifecb EUGollu_voifecc EUGollu_voifecd EUGollu_voifece EUSmeag_voifeca EUSmeag_voifecb EUSmeag_voifecd EUSmeag_voifece EUSmeag_voifecf 
  Limit = 1
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = HELPME_MINVOLUME
  Type        = world shrouded player voice
  Priority = critical
  SubmixSlider = voice
End



;--------------------------------- Gondor Spearmen -------------------------------
AudioEvent GondorSpearmenVoiceLineFormation_SEE
  Sounds        = GUTower_voilina GUTower_voilinb ;GUTower_voilinc
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent GondorSpearmenVoiceWallFormation_SEE
  Sounds        = GUTower_voiwala GUTower_voiwalb GUTower_voiwalc 
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume     = UNIT_RESPONSE_MINVOLUME
  Type          = world player voice
  SubmixSlider = voice
End

;--------------------------------- Dwarven Berzerkers -------------------------------

AudioEvent DwarfZerkVoiceZerkergang_SEE
  Sounds = GUDwGua_voispea GUDwGua_voispeb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateZerkergang_SEE
  Sounds = DUZerkr_voispea DUZerkr_voispeb DUZerkr_voispec 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

Multisound DwarfZealotBoomZerkergangMS_SEE
  ; Owner hears:
  Subsounds = DwarfZerkVoiceLeap DwarfMoveYellSinglesForBullRush1 DwarfMoveYellSinglesForBullRush2 DwarfGroupSmall_SelectForBullRush
  Subsounds = AragornBladeMaster
  ; Others hear:
  Subsounds = DwarfZerkVoiceEnterStateZerkergang_SEE DwarfMoveYellSinglesForBullRush1_NonOwner DwarfMoveYellSinglesForBullRush2_NonOwner DwarfGroupSmall_SelectForBullRush_NonOwner
End

;--------------------------------- Galadriel -------------------------------
AudioEvent GaladrielVoiceSalute_SEE
  Sounds =  GUGalad_voisalc GUGalad_voisala ;GUGalad_voisalb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;--------------------------------- Eowyn -------------------------------
AudioEvent ShieldMaidenSpellSound_SEE
  Sounds = WASpell_generic
  ; Attack  = EowynVoiceDisguiseOff
  Priority = critical
  Limit = 1
	MinRange = 500
	MaxRange = 1000
  Volume = 95
  Type = world shrouded everyone
  SubmixSlider = SoundFX ;voice
End

AudioEvent EowynVoiceSenseEnemy_SEE
  Sounds        = GUEowyn_voisebf GUEowyn_voimsmb GUEowyn_voidifd
  Priority = normal
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume	= BATTLE_CHATTER_MIN_VOLUME
  MaxRange      = BATTLE_CHATTER_RANGE
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent EowynVoiceDisguiseOff_SEE
  Sounds        = GUEowyn_voidifa GUEowyn_voidifc 
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume	= BATTLE_CHATTER_MIN_VOLUME
  MaxRange      = BATTLE_CHATTER_RANGE
  Type          = world player voice
  SubmixSlider = voice
End

Multisound EowynVoiceSoundShieldmaidenMS_SEE
  Subsounds = ShieldMaidenSpellSound_SEE
  Subsounds = EowynVoiceDisguiseOff_SEE
End

;--------------------------------- Boromir -------------------------------
AudioEvent BoromirVoiceSalute_SEE
  Sounds        = GUBorom_voisala GUBorom_voisalc GUBorom_voisald ;GUBorom_voisalb
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type          = world player voice
  SubmixSlider = voice
End

AudioEvent BoromirVoiceAttackRampage_SEE
  Sounds        = GUBorom_voiatca GUBorom_voiatcb GUBorom_voiatcc GUBorom_voiatcd
  Volume        = UNIT_RESPONSE_VOLUME
  MinVolume	= UNIT_RESPONSE_MINVOLUME
  MaxRange      = BATTLE_CHATTER_RANGE
  Limit = 1
  Type          = world everyone voice
  SubmixSlider = voice
End

; BoromirVoiceHelpMe

;--------------------------------- Draft Upgrade -------------------------------
AudioEvent PeasantVoiceDraftTechnology_SEE
  Sounds = GUPeasm_voiupga GUPeasF_voidraa GUPeasm_voiupgb GUPeasF_voidrab GUPeasm_voiupgc
  Volume = 110
  MinVolume = 100
  PitchShift = -1 1
  Limit = 1
  Type = world shrouded player ;voice	;it won't play if peasant units are cheering, etc...
  SubmixSlider = SoundFX
End

;--------------------------------- Goblin Drummer -------------------------------
AudioEvent MoriaGoblinsDrummerArrives_SEE
  Sounds      = GoblinDrummerCreated //WSMoria_goblina
  Limit	     = 1
  Volume      = 200 //105
  PitchShift = -15 0
  ;VolumeShift = -10
  Type = world everyone shrouded ;voice	;voice parameter conflicts with CampOrc announcement
  SubmixSlider = SoundFX
End


AudioEvent MoriaGoblinDrumHit_SEE
  Control = interrupt
  Sounds =  GoblinDrum1 GoblinDrum2 GoblinDrum3 GoblinDrum4
  Priority = normal
  MinRange    = 200
  MaxRange    = 600
  Limit = 4
  PitchShift = -5 5
  Volume = 100 //55
  Type   = world shrouded everyone
  SubmixSlider = SoundFX
End


;--------------------------------- Warg/Wolf Select Sounds -------------------------------

AudioEvent WargRiderIsengardVoiceSelect
  Sounds = EUWargR_voisela EUWargR_voiselb EUWargR_voiselc EUWargR_voiseld EUWargR_voisele EUWargR_voiselg EUWargR_voiselh ; EUWargR_voiself
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WargRiderMoriaVoiceSelect
  Sounds = EUWargR_voisela EUWargR_voiselb EUWargR_voiseld EUWargR_voisele EUWargR_voiselg EUWargR_voiselh ; EUWargR_voiselc EUWargR_voiself
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent WolfRiderMoriaVoiceSelect
  Sounds = EUWargR_voiselb EUWargR_voiself EUWargR_voiselg EUWargR_voiselh ; EUWargR_voisela EUWargR_voiselc EUWargR_voiseld EUWargR_voisele
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

Multisound WargRiderIsengardVoiceSelectMS
  Subsounds = WargRiderIsengardVoiceSelect WargRiderVoiceSelect2
End

Multisound WargRiderMoriaVoiceSelectMS
  Subsounds = WargRiderMoriaVoiceSelect WargRiderVoiceSelect2
End

Multisound WolfRiderMoriaVoiceSelectMS
  Subsounds = WolfRiderMoriaVoiceSelect WargRiderVoiceSelect2
End


;--------------------------------- Cheering Orcs -------------------------------
; AudioEvent GoblinWarriorVoiceTauntLoop

; AudioEvent UrukWarriorVoiceTauntEnemy
	; Sounds = EUUrukh_voitaea EUUrukh_voitaeb EUUrukh_voitaec EUUrukh_voitaed 
	; Volume      = UNIT_RESPONSE_VOLUME
	; MinVolume   = UNIT_RESPONSE_MINVOLUME
	; Type        = world player voice
  ; SubmixSlider = voice
; End

; AudioEvent UrukWarriorVoiceTauntFriend
	; Sounds = EUUrukh_voitafa EUUrukh_voitafb EUUrukh_voitafc EUUrukh_voitafd EUUrukh_voitafe EUUrukh_voitaff EUUrukh_voitafg 
	; Volume      = UNIT_RESPONSE_VOLUME
	; MinVolume   = UNIT_RESPONSE_MINVOLUME
	; Type        = world player voice
  ; SubmixSlider = voice
; End

; AudioEvent LivingWorldRegionCheerEvil
  ; Sounds = CUOrc_cheeG3a CUOrc_cheeG3b CUOrc_cheeG3c CUOrc_cheeG3d CUOrc_cheeG3e
  ; Volume	= 50
  ; Priority	= high
  ; Type		= ui everyone
  ; SubmixSlider = SoundFX
; End

;--------------------------------- MenOfDale Archers -------------------------------
AudioEvent MenOfDaleVoiceSalute_SEE
  Sounds = GUDwMen_voisalb GUDwMen_voisald ;GUDwMen_voisala GUDwMen_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceSelect_SEE
  Sounds = GUDwMen_voisela GUDwMen_voiself GUDwMen_voiselg GUDwMen_voiselh ;GUDwMen_voiselb GUDwMen_voiselc GUDwMen_voiseld GUDwMen_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceSelectBattle_SEE
  Sounds = GUDwMen_voisebb GUDwMen_voisebc GUDwMen_voisebd GUDwMen_voisebg GUDwMen_voisebh ;GUDwMen_voiseba GUDwMen_voisebe GUDwMen_voisebf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound MenOfDaleVoiceSelectMS_SEE
  Subsounds = MenOfDaleVoiceSelect_SEE YeomanArcherVoiceSelect2 ;MenOfDaleVoiceSelect
End

;--------------------------------- MenOfDale Swordsmen -------------------------------

AudioEvent MenOfDaleVoiceAttackSwordsmen_SEE
  Sounds = GUDwMen_voiattc GUDwMen_voiattd GUDwMen_voiatte GUDwMen_voiattf GUDwMen_voiattg ;GUDwMen_voiatta GUDwMen_voiattb   ;-------------ArcherSounds
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceEnterStateAttackSwordsmen_SEE
  Sounds = GUDwMen_voiattc GUDwMen_voiattd GUDwMen_voiatte GUDwMen_voiattf GUDwMen_voiattg ;GUDwMen_voiatta GUDwMen_voiattb   ;-------------ArcherSounds
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent MenOfDaleVoiceAttackChargeSwordsmen_SEE
  Sounds = GUDwMen_voiatca GUDwMen_voiatcb GUDwMen_voiatcc GUDwMen_voiatcd ;GUDwMen_voiatce GUDwMen_voiatcf   ;-------------ArcherSounds
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceEnterStateAttackChargeSwordsmen_SEE
  Sounds = GUDwMen_voiatca GUDwMen_voiatcb GUDwMen_voiatcc GUDwMen_voiatcd ;GUDwMen_voiatce GUDwMen_voiatcf  ;-------------ArcherSounds
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent MenOfDaleVoiceDisengageSwordsmen_SEE
  Sounds = GUDwMen_voidisb GUDwMen_voidisc ;GUDwMen_voidisa  ;-------------ArcherSounds
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceEnterStateDisengageSwordsmen_SEE
  Sounds = GUDwMen_voidisb GUDwMen_voidisc ;GUDwMen_voidisa  ;-------------ArcherSounds
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent MenOfDaleVoiceMoveGarrisonSwordsmen_SEE
  Sounds = GUDwMen_voigarb GUDwMen_voigarc ;GUDwMen_voigara  ;-------------ArcherSounds
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceMoveSwordsmen_SEE
  Sounds = GUDwMen_voimova GUDwMen_voimovb GUDwMen_voimovc GUDwMen_voimove GUDwMen_voimovf GUDwMen_voimovg GUDwMen_voimovh ;GUDwMen_voimovd  ;-------------ArcherSounds
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceEnterStateMoveSwordsmen_SEE
  Sounds = GUDwMen_voimova GUDwMen_voimovb GUDwMen_voimovc GUDwMen_voimove GUDwMen_voimovf GUDwMen_voimovg GUDwMen_voimovh ;GUDwMen_voimovd  ;-------------ArcherSounds
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent MenOfDaleVoiceSaluteSwordsmen_SEE
  Sounds = GUDwMen_voisala GUDwMen_voisalc ;GUDwMen_voisalb GUDwMen_voisald(NEW FOR ARCHERS!!!!)
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceSelectSwordsmen_SEE
  Sounds = GUDwMen_voiselb GUDwMen_voiselc GUDwMen_voiseld GUDwMen_voisele ;GUDwMen_voisela GUDwMen_voiself GUDwMen_voiselg GUDwMen_voiselh (NEW! ONLY FOR ARCHERS!!!!)
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent MenOfDaleVoiceSelectBattleSwordsmen_SEE
  Sounds = GUDwMen_voiseba GUDwMen_voisebe GUDwMen_voisebf ;GUDwMen_voisebb GUDwMen_voisebc GUDwMen_voisebd GUDwMen_voisebg GUDwMen_voisebh (NEW! ONLY FOR ARCHERS!!!!)
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound MenOfDaleVoiceSelectMSSwordsmen_SEE
  Subsounds = MenOfDaleVoiceSelectSwordsmen_SEE YeomanArcherVoiceSelect2
End



;------------------------------------------------- Rohan Royal Guard ----------------------------------------
AudioEvent RoyalGuardVoiceSalute
	Sounds		= GURohir_voisald ;GURohir_voisala GURohir_voisalb GURohir_voisald 
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Limit		= 1
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceMove
	Sounds		= GURohir_voimovc GURohir_voimovd GURohir_voimove GURohir_voimovf GURohir_voimovh 
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceEnterStateMove
	Sounds		= GURohir_voimovc GURohir_voimovd GURohir_voimove GURohir_voimovf GURohir_voimovh 
	Limit		= 1
	Volume		= BATTLE_CHATTER_VOLUME
	MinVolume	= BATTLE_CHATTER_MIN_VOLUME
	Type		= world allies enemies voice shrouded
	SubmixSlider	= voice
	MaxRange	= BATTLE_CHATTER_RANGE
	PlayPercent	= BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RoyalGuardVoiceMoveCamp
	Sounds		= GURohir_voimoca GURohir_voimocc 
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	PlayPercent	= VOICE_MOVE_PLAY_PERCENT
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceEnterStateMoveCamp
	Sounds		= GURohir_voimoca GURohir_voimocc 
	Limit		= 1
	Volume		= BATTLE_CHATTER_VOLUME
	MinVolume	= BATTLE_CHATTER_MIN_VOLUME
	Type		= world allies enemies voice shrouded
	SubmixSlider	= voice
	MaxRange	= BATTLE_CHATTER_RANGE
	PlayPercent	= BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RoyalGuardVoiceDisengage
	Sounds		= GURohir_voidisa GURohir_voidisb 
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceEnterStateDisengage
	Sounds		= GURohir_voidisa GURohir_voidisb 
	Limit		= 1
	Volume		= BATTLE_CHATTER_VOLUME
	MinVolume	= BATTLE_CHATTER_MIN_VOLUME
	Type		= world allies enemies voice shrouded
	SubmixSlider	= voice
	MaxRange	= BATTLE_CHATTER_RANGE
	PlayPercent	= BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RoyalGuardVoiceAttack
	Sounds		= GURohir_voiatta GURohir_voiatte GURohir_voiattg  
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceEnterStateAttack
	Sounds		= GURohir_voiatta GURohir_voiatte GURohir_voiattg 
	Limit		= 1
	Volume		= BATTLE_CHATTER_VOLUME
	MinVolume	= BATTLE_CHATTER_MIN_VOLUME
	Type		= world allies enemies voice shrouded
	SubmixSlider	= voice
	MaxRange	= BATTLE_CHATTER_RANGE
	PlayPercent	= BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RoyalGuardVoiceAttackCharge
	Sounds		= GURohir_voiatca GURohir_voiatcb GURohir_voiatcc GURohir_voiatcd 
	Sounds		= GURohir_voiatta GURohir_voiatte GURohir_voiattg
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceEnterStateAttackCharge
	Sounds		= GURohir_voiatca GURohir_voiatcb GURohir_voiatcc GURohir_voiatcd 
	Sounds		= GURohir_voiatta GURohir_voiatte GURohir_voiattg
	Limit		= 1
	Volume		= BATTLE_CHATTER_VOLUME
	MinVolume	= BATTLE_CHATTER_MIN_VOLUME
	Type		= world allies enemies voice shrouded
	SubmixSlider	= voice
	MaxRange	= BATTLE_CHATTER_RANGE
	PlayPercent	= BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent RoyalGuardVoiceSelect
	Sounds		= GURohir_voiselb GURohir_voiselc GURohir_voisele GURohir_voiself GURohir_voiselg 
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceSelectBattle
	Sounds		= GURohir_voiseba GURohir_voisebb GURohir_voisebd GURohir_voisebe GURohir_voisebf GURohir_voisebg
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

AudioEvent RoyalGuardVoiceJoinAnybody
	Sounds		= GURohir_voijana GURohir_voijanb
	Volume		= UNIT_RESPONSE_VOLUME
	MinVolume	= UNIT_RESPONSE_MINVOLUME
	Type		= world player voice
	SubmixSlider	= voice
End

Multisound RoyalGuardVoiceSelectMS
	Subsounds = RoyalGuardVoiceSelect RohirrimAttention
End



;------------------------------------------------- YeomanArcher Rohan Rohirrim Archer ----------------------------------------

AudioEvent YeomanArcherVoiceSelect_SEE
	Sounds =  GUYeoAr_voiselb GUYeoAr_voiselc GUYeoAr_voiseld GUYeoAr_voisele GUYeoAr_voiself GUYeoAr_voiselg ;GUYeoAr_voisela
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

Multisound YeomanArcherVoiceSelectMS_SEE
	Subsounds = YeomanArcherVoiceSelect_SEE YeomanArcherVoiceSelect2
End

AudioEvent YeomanArcherVoiceSelectBattle_SEE
	Sounds = GUYeoAr_voiseba GUYeoAr_voisebb GUYeoAr_voisebc GUYeoAr_voisebd GUYeoAr_voisebe GUYeoAr_voisebf GUYeoAr_voisebg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceMove_SEE
	Sounds = GUYeoAr_voimova GUYeoAr_voimovb GUYeoAr_voimovc GUYeoAr_voimovd GUYeoAr_voimove GUYeoAr_voimovf GUYeoAr_voimovg  GUYeoAr_voimovh 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    PlayPercent = VOICE_MOVE_PLAY_PERCENT
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateMove_SEE
	Sounds = GUYeoAr_voimova GUYeoAr_voimovb GUYeoAr_voimovc GUYeoAr_voimovd GUYeoAr_voimove GUYeoAr_voimovf GUYeoAr_voimovg  GUYeoAr_voimovh 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceMoveCamp_SEE
	Sounds = GUYeoAr_voimoca GUYeoAr_voimocb GUYeoAr_voimocc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateMoveCamp_SEE
	Sounds = GUYeoAr_voimoca GUYeoAr_voimocb GUYeoAr_voimocc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceGarrison_SEE
	Sounds = GUYeoAr_voigara GUYeoAr_voigarb GUYeoAr_voigarc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceRetreat_SEE
	Sounds = GUYeoAr_voireta GUYeoAr_voiretb GUYeoAr_voiretc GUYeoAr_voiretd GUYeoAr_voirete GUYeoAr_voiretf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateRetreat_SEE
	Sounds = GUYeoAr_voireta GUYeoAr_voiretb GUYeoAr_voiretc GUYeoAr_voiretd GUYeoAr_voirete GUYeoAr_voiretf 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttack_SEE
	Sounds = GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateAttack_SEE
	Sounds = GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttackCharge_SEE
	Sounds = GUYeoAr_voiatca GUYeoAr_voiatcb GUYeoAr_voiatcc GUYeoAr_voiatcd GUYeoAr_voiatce GUYeoAr_voiatcf GUYeoAr_voiatcg GUYeoAr_voiatch
	Sounds = GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateAttackCharge_SEE
	Sounds = GUYeoAr_voiatca GUYeoAr_voiatcb GUYeoAr_voiatcc GUYeoAr_voiatcd GUYeoAr_voiatce GUYeoAr_voiatcf GUYeoAr_voiatcg GUYeoAr_voiatch
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAttackBuilding_SEE
	Sounds = GUYeoAr_voiatbb GUYeoAr_voiatbc GUYeoAr_voiatbd ;GUYeoAr_voiatba
	Sounds = GUYeoAr_voiatta GUYeoAr_voiattb GUYeoAr_voiattc GUYeoAr_voiattd GUYeoAr_voiatte GUYeoAr_voiattf GUYeoAr_voiattg 
  Limit = 1
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider  = voice

End

AudioEvent YeomanArcherVoiceEnterStateAttackBuilding_SEE
	Sounds = GUYeoAr_voiatbb GUYeoAr_voiatbc GUYeoAr_voiatbd ;GUYeoAr_voiatba
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceDisengage_SEE
	Sounds = GUYeoAr_voidisa GUYeoAr_voidisb GUYeoAr_voidisc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceEnterStateDisengage_SEE
	Sounds = GUYeoAr_voidisa GUYeoAr_voidisb GUYeoAr_voidisc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent YeomanArcherVoiceAmbushed_SEE
	Sounds = GUYeoAr_voiamba GUYeoAr_voiambb GUYeoAr_voiambc GUYeoAr_voiambd GUYeoAr_voiambe GUYeoAr_voiambf 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent YeomanArcherVoiceSalute_SEE
	Sounds = GUYeoAr_voisalb GUYeoAr_voisala GUYeoAr_voisalc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
    Limit = 1
	Type        = world player voice
  SubmixSlider = voice
End

; AudioEvent YeomanArcherVoiceFearPoint_SEE
	; Sounds = GUYeoAr_voifepa GUYeoAr_voifepb GUYeoAr_voifepc 
	; Volume      = UNIT_RESPONSE_VOLUME
	; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

; AudioEvent YeomanArcherVoiceFearDisperse_SEE
	; Sounds = GUYeoAr_voifeda GUYeoAr_voifedb GUYeoAr_voifedc GUYeoAr_voifedd GUYeoAr_voifede GUYeoAr_voifedf GUYeoAr_voifedg GUYeoAr_voifedh
	; Volume      = UNIT_RESPONSE_VOLUME
	; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

; AudioEvent YeomanArcherVoiceFearRegroup_SEE
	; Sounds = GUYeoAr_voifera GUYeoAr_voiferb GUYeoAr_voiferc GUYeoAr_voiferd GUYeoAr_voifere GUYeoAr_voiferf 
	; Volume      = UNIT_RESPONSE_VOLUME
	; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

; AudioEvent YeomanArcherVoiceFearCower_SEE
	; Sounds = GUYeoAr_voifeca GUYeoAr_voifecb GUYeoAr_voifecc GUYeoAr_voifecd GUYeoAr_voifece 
	; Volume      = UNIT_RESPONSE_VOLUME
	; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

; AudioEvent YeomanArcherVoiceFearHit_SEE
	; Sounds = GUYeoAr_voifeha GUYeoAr_voifehb
	; Volume      = UNIT_RESPONSE_VOLUME
	; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

; AudioEvent YeomanArcherVoiceDie_SEE
	; Sounds = GUYeoAr_voidiea GUYeoAr_voidieb GUYeoAr_voidiec GUYeoAr_voidied GUYeoAr_voidiee GUYeoAr_voidief GUYeoAr_voidieg GUYeoAr_voidieh 
	; Volume      = 90
	; VolumeShift   = -20
      ; Type        = world shrouded everyone voice
  ; SubmixSlider = voice
; End

AudioEvent PippinVoiceJoinHorse
  Sounds = GUPippi_voimovc
  Volume = 115
  MinVolume = 105
  PlayPercent = 100
  Type = world player voice
  SubmixSlider = voice
End
; AudioEvent MerryVoiceJoinHorse
  ; Sounds = GUMerry_voijhoa 
  ; Volume = 115
  ; MinVolume = 105
  ; Type = world player voice
  ; SubmixSlider = voice
; End


AudioEvent BlackRiderVoiceDie_SEE
  Sounds = EUNazgu_screecc ;EUNazgu_screeca EUNazgu_screecb EUNazgu_screecd
  Volume        = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type          = world shrouded everyone voice
  SubmixSlider = voice
End

;------------------------------------------------- Bilbo ----------------------------------------------

AudioEvent BilboVoiceAttack
  Sounds = bilbo_sticklebacks bilbo_take_it bilbo_yes_yes
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceDie
  Sounds = GUSamwi_voiatcf
  Volume      = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceHelpMe
  Sounds = bilbo_careful bilbo_sticklebacks
  Volume      = UNIT_RESPONSE_VOLUME
  ;MinVolume   = HELPME_MINVOLUME 
  Type        = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent BilboVoiceMove
  Sounds = bilbo_faces bilbo_careful bilbo_pretty_thing bilbo_mountains bilbo_long_road bilbo_yes_yes
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceRespawn
  Sounds = bilbo_faces bilbo_mountains bilbo_yes_yes
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceSalute
  Sounds = bilbo_pretty_thing bilbo_mountains
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Limit = 1
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceSelectBattle
  Sounds = bilbo_sticklebacks bilbo_take_it bilbo_yes_yes
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent BilboVoiceSelect
  Sounds =  bilbo_careful bilbo_mountains bilbo_take_it bilbo_yes_yes
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound BilboVoiceSelectMS
	Subsounds = BilboVoiceSelect HeroVoiceSelect2
End
