////////////////
// VOICE.INC //
//////////////
//Elves//
////////


;--------------------------------------- CampElf -----------------------------------------

AudioEvent CampElfUpgradeElvenArmor						;pickups2
  Sounds = GCElUpg_armora GCElUpg_armorb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeBannerCarrier					;pickups2
  Sounds = GCElUpg_bannera GCElUpg_bannerb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeEaglesNest						;pickups2
  Sounds = GCElUpg_eaglesa GCElUpg_eaglesb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  ; Delay = 10000 10000 Handled in Eva.ini now
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeForgedBlades					;pickups2
  Sounds = GCElUpg_forgeda GCElUpg_forgedb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeGeneric						;pickups2
  Sounds = GCElUpg_generia
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeSilverThorneArrows				;pickups2
  Sounds = GCElUpg_silvera GCElUpg_silverb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWORMustDisputeTerritory				;pickups2
  Sounds = GCElWar_Musdisa GCElWar_Musdisb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWORHeroHasRetreated					;pickups2
  Sounds = GCElWar_Rettera
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieEnemy
  Sounds = GCElEne_diea GCElEne_dieb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieTreebeard
  Sounds = GCElTre_diea GCElTre_dieb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredBarrowWight
  Sounds = GCElBar_discova GCElBar_discovb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingDropped
  Sounds = GCElRin_dropa GCElRin_dropb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingRetrieved
  Sounds = GCElRin_OwnUsa GCElRin_OwnUsb GCElRin_OwnUsc
  Sounds = GCElRin_OwnUsd GCElRin_OwnUse						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingPickedUp-Enemy
  Sounds = GCElRin_PickEna GCElRin_PickEnb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingPickedUp-Us
  Sounds = GCElRin_PickUsa GCElRin_PickUsb GCElRin_PickUsc						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarArmyMerge
  Sounds = ;GCElWar_Mergea GCElWar_Mergeb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfWarArmyMergeMS
	Subsounds = LivingWorldRohanArmyIconMove	;CampElfWarArmyMerge
End

AudioEvent CampElfWarArmySplit
  Sounds = ;GCElWar_Splita GCElWar_Splitb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfWarArmySplitMS
	Subsounds = CampElfWarArmySplit LivingWorldRohanArmyIconMove
End



AudioEvent CampElfWarConstructionCompleted
  Sounds = GCElWar_Complea GCElWar_Compleb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostArnor
  Sounds = GCElWar_LosArna						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostEriador
  Sounds = GCElWar_LosEria						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostGondor
  Sounds = GCElWar_LosGona						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostMordor
  Sounds = GCElWar_LosMora						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostRegion
  Sounds = GCElWar_LosRega						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostRhovanion
  Sounds = GCElWar_LosRhoa						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarLostRhun
  Sounds = GCElWar_LosRhua						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarMustBattle
  Sounds = GCElWar_MusBata GCElWar_MusBatb GCElWar_MusBatc						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarMustChoose
  Sounds = GCElWar_MusChoa						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarMustRetreat
  Sounds = GCElWar_MusReta GCElWar_MusRetb						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarHeroReturnElrond
  Sounds = GCElWar_RetElra						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarHeroReturnHaldir
  Sounds = GCElWar_RetHala						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarHeroReturnThranduil
  Sounds = GCElWar_RetThraa						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarSaluteHeroElrond
  Sounds = GCElWar_SalElra						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarSaluteHeroHaldir
  Sounds = GCElWar_SalHala						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarSaluteReinforcements
  Sounds = GCElWar_SalReia						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarSaluteHeroThranduil
  Sounds = GCElWar_SalThra						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyArnor
  Sounds = GCElWar_UniArna						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyEriador
  Sounds = GCElWar_UniEria						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyGondor
  Sounds = GCElWar_UniGona						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyMordor
  Sounds = GCElWar_UniMora						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyRegion
  Sounds = GCElWar_UniRega						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyRhovanion
  Sounds = GCElWar_UniRhoa						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWarUnifyRhun
  Sounds = GCElWar_UniRhua						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound WarElfUnifyArnorMS
  Subsounds = CampElfWarUnifyArnor LivingWorldRegionCheerGood
End

Multisound WarElfUnifyEriadorMS
  Subsounds = CampElfWarUnifyEriador LivingWorldRegionCheerGood
End

Multisound WarElfUnifyGondorMS
  Subsounds = CampElfWarUnifyGondor LivingWorldRegionCheerGood
End

Multisound WarElfUnifyMordorMS
  Subsounds = CampElfWarUnifyMordor LivingWorldRegionCheerGood
End

Multisound WarElfUnifyRegionMS
  Subsounds = CampElfWarUnifyRegion LivingWorldRegionCheerGood
End

Multisound WarElfUnifyRhovanionMS
  Subsounds = CampElfWarUnifyRhovanion LivingWorldRegionCheerGood
End

Multisound WarElfUnifyRhunMS
  Subsounds = CampElfWarUnifyRhun LivingWorldRegionCheerGood
End

AudioEvent CampElfBeaconDetected
  Sounds = GCElBea_detecta GCElBea_detectb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfBuildingCaptured
  Sounds = GCElCap_gaina GCElCap_gainb GCElCap_gainc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfBuildingBeingCaptured
  Sounds = GCElCap_losinga GCElCap_losingb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfBuildingLost
  Sounds = GCElCap_losta GCElCap_lostb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfCommandPointLimit
  Sounds = GCElCom_limita GCElCom_limitb GCElCom_limitc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieAlly
  Sounds = GCElAll_losea GCElAll_loseb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieArwen			;2nd set
  Sounds = GCElArw_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieBuilder			;2nd set
  Sounds = GCElBui_diea GCElBui_dieb GCElBui_diec GCElBui_died
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieDain
  Sounds = GCElDai_diea  GCElDai_dieb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieElrond
  Sounds = GCElElr_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieFortress
  Sounds = GCElFor_losea GCElFor_loseb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieFortressAlly
  Sounds = GCElAll_foLosea GCElAll_foLoseb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieGaladriel			;2nd set
  Sounds = GCElGal_diea GCElGal_dieb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieGloin
  Sounds = GCElGli_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieGlorfindel			;2nd set
  Sounds = GCElGlo_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieHaldir			;2nd set
  Sounds = GCElHal_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieLegolas
  Sounds = GCElLeg_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )				;first recording session
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDieThranduil			;2nd set
  Sounds = GCElThr_diea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredBalrog
  Sounds = GCElBal_discova GCElBal_discovb GCElBal_discovc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredCaveTrolls
  Sounds = GCElCav_discova GCElCav_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredCitadel
  Sounds = GCElCit_discova GCElCit_discovb
  Sounds = GCElCit_discovc						;pickups1
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredDrake
  Sounds = GCElDra_discova GCElDra_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredDragon
  Sounds = GCElDrg_discova GCElDrg_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredEnemyBase			;2nd set
  Sounds = GCElEne_camDisa GCElEne_camDisb GCElEne_camDisc GCElEne_camDisd
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredEnemyUnits			;2nd set
  Sounds = GCElUni_discova GCElUni_discovb GCElUni_discovc GCElUni_discovd
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredFortress			;2nd set
  Sounds = GCElFor_discova GCElFor_discovb GCElFor_discovc GCElFor_discovd
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredGaladriel
  Sounds = GCElGal_discova GCElGal_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredGoblins
  Sounds = GCElGob_discova GCElGob_discovb GCElGob_discovc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End
AudioEvent CampElfDiscoveredCorsairs
  Sounds = gcdwdisco_corsairs
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredGollum			;2nd set
  Sounds = GCElGol_discova GCElGol_discovb GCElGol_discovc GCElGol_discovd
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredOathbreaker
  Sounds = GCElOat_discova GCElOat_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredRing
  Sounds = GCElRin_discova GCElRin_discovb GCElRin_discovc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredRingOwner
  Sounds = GCElRiO_discova GCElRiO_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredSauron
  Sounds = GCElSau_discova GCElSau_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredSpiderlings
  Sounds = GCElSpi_discova GCElSpi_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredTechDock
  Sounds = GCElDoc_discova GCElDoc_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredTechInn
  Sounds = GCElInn_discova
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredTechOutpost			;2nd set
  Sounds = GCElOut_discova
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredTechSignalFire			;2nd set
  Sounds = GCElSFi_discova
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredWargs
  Sounds = GCElWar_discova GCElWar_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfDiscoveredWatcher
  Sounds = GCElWat_discova GCElWat_discovb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfLoseTerritory
  Sounds = GCElTer_losta GCElTer_lostb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfLosingBattle
  Sounds = GCElBat_losina GCElBat_losinb GCElBat_losinc GCElBat_losind GCElBat_losine GCElBat_losinf
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfResourceLimit
  Sounds = GCElRes_limita GCElRes_limitb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingLost
  Sounds = GCElRin_Losta GCElRin_Lostb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingOwn-Ally
  Sounds = GCElRin_OwnAla GCElRin_OwnAlb GCElRin_OwnAlc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfRingOwn-Enemy
  Sounds = GCElRin_OwnEna GCElRin_OwnEnb GCElRin_OwnEnc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;combined with CampElfRingRetrieved
;
;AudioEvent CampElfRingOwn-Us
;  Sounds = GCElRin_OwnUsa GCElRin_OwnUsb GCElRin_OwnUsc
;  Volume = #ADD( CAMP_ELF_VOLUME 0 )
;  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
;  Type = world player voice
;  SubmixSlider = voice
;End

AudioEvent CampElfUnderAttackAgain			;2nd set
  Sounds = GCElAga_underAa GCElAga_underAb GCElAga_underAc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackAmbush			;2nd set
  Sounds = GCElAmb_underAa GCElAmb_underAb GCElAmb_underAc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackArtillery			;2nd set
  Sounds = GCElArt_underAa GCElArt_underAb GCElArt_underAc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackBuilder			;2nd set
  Sounds = GCElBui_underAa GCElBui_underAb GCElBui_underAc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackCamp			;2nd set
  Sounds = GCElCam_underAa GCElCam_underAb GCElCam_underAc GCElCam_underAd GCElCam_underAe GCElCam_underAf
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackEconPlot
  Sounds =
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackFire
  Sounds = GCElFir_underAa GCElFir_underAb GCElFir_underAc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackResource
  Sounds = GCElRes_underAa GCElRes_underAb GCElRes_underAc GCElRes_underAd GCElRes_underAe
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUnderAttackUnits			;2nd set
  Sounds = GCElUni_underAa GCElUni_underAb GCElUni_underAc GCElUni_underAd GCElUni_underAe GCElUni_underAf
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeBarracks
  Sounds = GCElUpg_barraca
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeForge
  Sounds = GCElUpg_Forgea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeFortress
  Sounds = GCElUpg_fortrea
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeGreenPasture
  Sounds = GCElUpg_greenpa
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfUpgradeMallornTree
  Sounds = GCElUpg_mallora
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWallBroken			;2nd set
  Sounds = GCElWal_brokena GCElWal_brokenb GCElWal_brokenc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWallClimbed			;2nd set
  Sounds = GCElWal_climba GCElWal_climbb GCElWal_climbc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWinningBattle
  Sounds = GCElBat_winnina GCElBat_winninb GCElBat_winninc GCElBat_winnind 
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWinFortress			;2nd set
  Sounds = GCElFor_wina GCElFor_winb GCElFor_winc
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampElfWinTerritory
  Sounds = GCElTer_wina GCElTer_winb
  Volume = #ADD( CAMP_ELF_VOLUME 0 )
  MinVolume = #ADD( CAMP_ELF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End






;---------------------- ElfBuilder ElvenBuilder ElfPorter ElvenPorter ----------------------------

AudioEvent ElfBuilderVoiceBuild
  Sounds = GUElBui_voibuia GUElBui_voibuib GUElBui_voibuic GUElBui_voibuid GUElBui_voibuie GUElBui_voibuif
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCantBuild
  Sounds = GUElBui_voinoba GUElBui_voinobb GUElBui_voinobc GUElBui_voinobd GUElBui_voinobe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCompleteBarracks
  Sounds = GUElBui_voicbaa GUElBui_voicbab
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCompleteEntMoot
  Sounds = GUElBui_voicena ;GUElBui_voicenb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCompleteFortress
  Sounds = GUElBui_voicfoa GUElBui_voicfob
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCompleteGeneric
  Sounds = GUElBui_voicgea GUElBui_voicgeb GUElBui_voicgec GUElBui_voicged
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceCompletePasture
  Sounds = GUElBui_voicpaa GUElBui_voicpab
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceDie
  Sounds = GUElBui_voidiea GUElBui_voidieb GUElBui_voidiec GUElBui_voidied GUElBui_voidiee GUElBui_voidief GUElBui_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceMove
  Sounds = GUElBui_voimova GUElBui_voimovb GUElBui_voimovc GUElBui_voimovd GUElBui_voimove GUElBui_voimovf GUElBui_voimovg GUElBui_voimovh 
  Sounds = GUElBui_voimovi GUElBui_voimovj GUElBui_voimovk GUElBui_voimovl GUElBui_voimovm GUElBui_voimovn GUElBui_voimovo
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceGarrison
  Sounds = GUElBui_voimova GUElBui_voimovb GUElBui_voimovc GUElBui_voimovd GUElBui_voimove GUElBui_voimovf GUElBui_voimovg GUElBui_voimovh 
  Sounds = GUElBui_voimovi GUElBui_voimovj GUElBui_voimovk GUElBui_voimovl GUElBui_voimovm GUElBui_voimovn GUElBui_voimovo
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceSalute
  Sounds = GUElBui_voisala GUElBui_voisalb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceSelect
  Sounds = GUElBui_voisela GUElBui_voiselb GUElBui_voiselc GUElBui_voiseld GUElBui_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfBuilderVoiceSelectIdle
  Sounds = GUElBui_voiseia GUElBui_voiseib GUElBui_voiseic GUElBui_voiseid
  Sounds = GUElBui_voisela GUElBui_voiselb GUElBui_voiselc GUElBui_voiseld GUElBui_voisele
  Sounds = GUElBui_voisela GUElBui_voiselb GUElBui_voiselc GUElBui_voiseld GUElBui_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfBuilderVoiceSelectMS
  Subsounds = ElfBuilderVoiceSelect ElfBuilderFoleySelect
End

;----------------------- ElfLancer ElvenLancer ElfRivendellLancer ElvenRivendellLancer -----------------------------

AudioEvent ElfLancerVoiceAttack
  Sounds = GUElLan_voiatta GUElLan_voiattb GUElLan_voiattc GUElLan_voiattd GUElLan_voiatte GUElLan_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateAttack
  Sounds = GUElLan_voiatta GUElLan_voiattb GUElLan_voiattc GUElLan_voiattd GUElLan_voiatte GUElLan_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceAttackBuilding
  Sounds = GUElLan_voiatba GUElLan_voiatbb GUElLan_voiatbc GUElLan_voiatbd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateAttackBuilding
  Sounds = GUElLan_voiatba GUElLan_voiatbb GUElLan_voiatbc GUElLan_voiatbd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceAttackCharge
  Sounds = GUElLan_voiatca GUElLan_voiatcb GUElLan_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateAttackCharge
  Sounds = GUElLan_voiatca GUElLan_voiatcb GUElLan_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceAttackTrampleOwner
  Sounds = GUElLan_voiat2a GUElLan_voiat2b GUElLan_voiat2c GUElLan_voiat2d
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_PLAY_PERCENT
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceAttackTrampleOther
  Sounds = GUElLan_voiat2a GUElLan_voiat2b GUElLan_voiat2c GUElLan_voiat2d
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  MaxRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_OTHER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceCaptureBuilding
  Sounds = GUElLan_voicapa GUElLan_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceDie
  Sounds = GUElLan_voidiea GUElLan_voidieb GUElLan_voidiec GUElLan_voidied GUElLan_voidiee GUElLan_voidief GUElLan_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceDisengage
  Sounds = GUElLan_voidisa GUElLan_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateDisengage
  Sounds = GUElLan_voidisa GUElLan_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceFearCower
  Sounds = GUElLan_voifeca GUElLan_voifecb GUElLan_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceFearDisperse
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceFearDoom
  Sounds = GUElLan_voifeoa GUElLan_voifeob GUElLan_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceMove
  Sounds = GUElLan_voimova GUElLan_voimovb GUElLan_voimovc GUElLan_voimovd GUElLan_voimove GUElLan_voimovf GUElLan_voimovg GUElLan_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateMove
  Sounds = GUElLan_voimova GUElLan_voimovb GUElLan_voimovc GUElLan_voimovd GUElLan_voimove GUElLan_voimovf GUElLan_voimovg GUElLan_voimovh
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceMoveCamp
  Sounds = GUElLan_voimoca GUElLan_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateMoveCamp
  Sounds = GUElLan_voimoca GUElLan_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceMoveShip
  Sounds = GUElLan_voimosa GUElLan_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceMoveRetreat
  Sounds = GUElLan_voireta GUElLan_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceEnterStateMoveRetreat
  Sounds = GUElLan_voireta GUElLan_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfLancerVoiceSalute
  Sounds = GUElLan_voisala ;GUElLan_voisalb GUElLan_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceSelect
  Sounds = GUElLan_voisela GUElLan_voiselb GUElLan_voiselc GUElLan_voiseld GUElLan_voisele GUElLan_voiself
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfLancerVoiceSelectBattle
  Sounds = GUElLan_voiseba GUElLan_voisebb GUElLan_voisebc GUElLan_voisebd GUElLan_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfLancerVoiceAttackTrampleMS
	Subsounds = ElfLancerVoiceAttackTrampleOwner ElfLancerVoiceAttackTrampleOther
End

Multisound ElfLancerVoiceSelectMS
	Subsounds = ElfLancerVoiceSelect RohirrimAttention
End

;----------------------- ElfHorseArcher -----------------------------

AudioEvent ElfHorseArcherVoiceAttack
  Sounds = GUElArc_voiattb GUElArc_voiatta GUElArc_voiattc GUElArc_voiattd GUElArc_voiatte GUElArc_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateAttack
  Sounds = GUElArc_voiattb GUElArc_voiatta GUElArc_voiattc GUElArc_voiattd GUElArc_voiatte GUElArc_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceAttackBuilding
  Sounds = GUElArc_voiatba GUElArc_voiatbc GUElArc_voiatbd GUElArc_voiatbb 
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateAttackBuilding
  Sounds = GUElArc_voiatba GUElArc_voiatbc GUElArc_voiatbd GUElArc_voiatbb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceAttackCharge
  Sounds = GUElArc_voiatca GUElArc_voiatcb GUElArc_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateAttackCharge
  Sounds = GUElArc_voiatca GUElArc_voiatcb GUElArc_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceAttackTrampleOwner
  Sounds = GUElArc_voiat2a GUElArc_voiat2b GUElArc_voiat2c GUElArc_voiat2d
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_PLAY_PERCENT
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceAttackTrampleOther
  Sounds = GUElArc_voiat2a GUElArc_voiat2b GUElArc_voiat2c GUElArc_voiat2d
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  MaxRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_OTHER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceCaptureBuilding
  Sounds = GUElArc_voicapa GUElArc_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceDie
  Sounds = GUElArc_voidiea GUElArc_voidieb GUElArc_voidiec GUElArc_voidied GUElArc_voidiee GUElArc_voidief GUElArc_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceDisengage
  Sounds = GUElArc_voidisa GUElArc_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateDisengage
  Sounds = GUElArc_voidisa GUElArc_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceFearCower
  Sounds = GUElArc_voifeca GUElArc_voifecb GUElArc_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceFearDisperse
  Sounds = GUElArc_voifeda GUElArc_voifedb GUElArc_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceFearDoom
  Sounds = GUElArc_voifeoa GUElArc_voifeob GUElArc_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceMove
  Sounds = GUElArc_voimova GUElArc_voimovb GUElArc_voimovd GUElArc_voimove GUElArc_voimovf GUElArc_voimovg GUElArc_voimovh GUElArc_voimovc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateMove
  Sounds = GUElArc_voimova GUElArc_voimovb GUElArc_voimovd GUElArc_voimove GUElArc_voimovf GUElArc_voimovg GUElArc_voimovh GUElArc_voimovc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceMoveCamp
  Sounds = GUElArc_voimoca GUElArc_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateMoveCamp
  Sounds = GUElArc_voimoca GUElArc_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceMoveShip
  Sounds = GUElArc_voimosa GUElArc_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceMoveRetreat
  Sounds = GUElArc_voireta GUElArc_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceEnterStateMoveRetreat
  Sounds = GUElArc_voireta GUElArc_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfHorseArcherVoiceSalute
  Sounds = GUElArc_voisala GUElArc_voisalb GUElArc_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceSelect
  Sounds = GUElArc_voiselb GUElArc_voisele GUElArc_voisela GUElArc_voiselc GUElArc_voiseld GUElArc_voiself
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfHorseArcherVoiceSelectBattle
  Sounds = GUElArc_voiseba GUElArc_voisebb GUElArc_voisebc GUElArc_voisebd GUElArc_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfHorseArcherVoiceAttackTrampleMS
	Subsounds = ElfHorseArcherVoiceAttackTrampleOwner ElfHorseArcherVoiceAttackTrampleOther
End

Multisound ElfHorseArcherVoiceSelectMS
	Subsounds = ElfHorseArcherVoiceSelect RohirrimAttention
End

;-------------------------------- ElfMirkwoodArcher ElvenMirkwoodArcher ------------------------------------------

AudioEvent ElfMirkwoodArcherVoiceAttack
  Sounds = GUElMir_voiatta GUElMir_voiattb GUElMir_voiattc GUElMir_voiattd GUElMir_voiatte GUElMir_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateAttack
  Sounds = GUElMir_voiatta GUElMir_voiattb GUElMir_voiattc GUElMir_voiattd GUElMir_voiatte GUElMir_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent ElfMirkwoodArcherVoiceAttackBuilding
  Sounds = GUElMir_voiatba GUElMir_voiatbb GUElMir_voiatbc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateAttackBuilding
  Sounds = GUElMir_voiatba GUElMir_voiatbb GUElMir_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceAttackCharge
  Sounds = GUElMir_voiatca GUElMir_voiatcb GUElMir_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateAttackCharge
  Sounds = GUElMir_voiatca GUElMir_voiatcb GUElMir_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceCaptureBuilding
  Sounds = GUElMir_voicapa GUElMir_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateCaptureBuilding
  Sounds = GUElMir_voicapa GUElMir_voicapb
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  Limit = 1
  MaxRange = BATTLE_CHATTER_RANGE
  PlayPercent = BATTLE_CHATTER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceDie
  Sounds = GUElMir_voidiea GUElMir_voidieb GUElMir_voidiec GUElMir_voidied GUElMir_voidiee GUElMir_voidief GUElMir_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceDisengage
  Sounds = GUElMir_voidisa GUElMir_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateDisengage
  Sounds = GUElMir_voidisa GUElMir_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceFearCower
  Sounds = GUElMir_voifeca GUElMir_voifecb GUElMir_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceFearDisperse
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceFearDoom
  Sounds = GUElMir_voifeoa GUElMir_voifeob GUElMir_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceFearTrample
  Sounds = GUElMir_voifeta GUElMir_voifetb GUElMir_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceMove
  Sounds = GUElMir_voimova GUElMir_voimovb GUElMir_voimovc GUElMir_voimovd GUElMir_voimove GUElMir_voimovf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateMove
  Sounds = GUElMir_voimova GUElMir_voimovb GUElMir_voimovc GUElMir_voimovd GUElMir_voimove GUElMir_voimovf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceMoveCamp
  Sounds = GUElMir_voimoca GUElMir_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateMoveCamp
  Sounds = GUElMir_voimoca GUElMir_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceMoveForest
  Sounds = GUElMir_voimofa GUElMir_voimofb GUElMir_voimofc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateMoveForest
  Sounds = GUElMir_voimofa GUElMir_voimofb GUElMir_voimofc
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  Limit = 1
  MaxRange = BATTLE_CHATTER_RANGE
  PlayPercent = BATTLE_CHATTER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceMoveGarrison
  Sounds = GUElMir_voigara GUElMir_voigarb GUElMir_voigarc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceMoveHighGround
  Sounds = GUElMir_voimoha GUElMir_voimohb GUElMir_voimohc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateMoveHighGround
  Sounds = GUElMir_voimoha GUElMir_voimohb GUElMir_voimohc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceMoveRetreat
  Sounds = GUElMir_voireta GUElMir_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceEnterStateRetreat
  Sounds = GUElMir_voireta GUElMir_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfMirkwoodArcherVoiceMoveShip
  Sounds = GUElMir_voimosa GUElMir_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceSalute
  Sounds = GUElMir_voisala ;GUElMir_voisalb GUElMir_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceSelect
  Sounds = GUElMir_voisela GUElMir_voiselb GUElMir_voiselc GUElMir_voiseld GUElMir_voisele GUElMir_voiself GUElMir_voiselg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfMirkwoodArcherVoiceSelectBattle
  Sounds = GUElMir_voiseba GUElMir_voisebb GUElMir_voisebc GUElMir_voisebd GUElMir_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfMirkwoodArcherVoiceSelectMS
	Subsounds = ElfMirkwoodArcherVoiceSelect YeomanArcherVoiceSelect2
End

;------------------ ElfSentry ElvenSentry ElfMithlondSentry ElvenMithlondSentry ---------------------

AudioEvent ElfSentryVoiceAttack
  Sounds = GUElSen_voiatta GUElSen_voiattb GUElSen_voiattc GUElSen_voiattd GUElSen_voiatte GUElSen_voiattf GUElSen_voiattg GUElSen_voiatth
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateAttack
  Sounds = GUElSen_voiatta GUElSen_voiattb GUElSen_voiattc GUElSen_voiattd GUElSen_voiatte GUElSen_voiattf GUElSen_voiattg GUElSen_voiatth
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceAttackBuilding
  Sounds = GUElSen_voiatba GUElSen_voiatbb GUElSen_voiatbc GUElSen_voiatbd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateAttackBuilding
  Sounds = GUElSen_voiatba GUElSen_voiatbb GUElSen_voiatbc GUElSen_voiatbd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceAttackCharge
  Sounds = GUElSen_voiatca GUElSen_voiatcb GUElSen_voiatcc GUElSen_voiatcd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateAttackCharge
  Sounds = GUElSen_voiatca GUElSen_voiatcb GUElSen_voiatcc GUElSen_voiatcd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceCaptureBuilding
  Sounds = GUElSen_voicapa GUElSen_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceDie
  Sounds = GUElSen_voidiea GUElSen_voidieb GUElSen_voidiec GUElSen_voidied GUElSen_voidiee GUElSen_voidief GUElSen_voidieg GUElSen_voidieh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceDisengage
  Sounds = GUElSen_voidisa GUElSen_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateDisengage
  Sounds = GUElSen_voidisa GUElSen_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceFearCower
  Sounds = GUElSen_voifeca GUElSen_voifecb GUElSen_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceFearDisperse
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceFearDoom
  Sounds = GUElSen_voifeoa GUElSen_voifeob GUElSen_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceFearTrample
  Sounds = GUElSen_voifeta GUElSen_voifetb ; GUElSen_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceMove
  Sounds = GUElSen_voimova GUElSen_voimovb GUElSen_voimovc GUElSen_voimovd GUElSen_voimove GUElSen_voimovf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateMove
  Sounds = GUElSen_voimova GUElSen_voimovb GUElSen_voimovc GUElSen_voimovd GUElSen_voimove GUElSen_voimovf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceMoveCamp
  Sounds = GUElSen_voimoca GUElSen_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateMoveCamp
  Sounds = GUElSen_voimoca GUElSen_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceMoveForest
  Sounds = GUElSen_voimofa GUElSen_voimofb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateMoveForest
  Sounds = GUElSen_voimofa GUElSen_voimofb
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  Limit = 1
  MaxRange = BATTLE_CHATTER_RANGE
  PlayPercent = BATTLE_CHATTER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceMoveGarrison
  Sounds = GUElSen_voigara GUElSen_voigarb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceMoveShip
  Sounds = GUElSen_voimosa GUElSen_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoicePorcupineBegin
  Sounds = GUElSen_voipo1a GUElSen_voipo1b GUElSen_voipo1c GUElSen_voifetc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoicePorcupineEnd
  Sounds = GUElSen_voipo2a GUElSen_voipo2b
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceRetreat
  Sounds = GUElSen_voireta GUElSen_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceEnterStateRetreat
  Sounds = GUElSen_voireta GUElSen_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfSentryVoiceSalute
  Sounds = GUElSen_voisala ;GUElSen_voisalb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceSelect
  Sounds = GUElSen_voisela GUElSen_voiselb GUElSen_voiselc GUElSen_voiseld GUElSen_voisele GUElSen_voiself
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfSentryVoiceSelectBattle
  Sounds = GUElSen_voiseba GUElSen_voisebb GUElSen_voisebc GUElSen_voisebd GUElSen_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfSentryVoiceSelectMS
	Subsounds = ElfSentryVoiceSelect GondorTowerGuardVoiceSelect2
End

;------------------------------------- Elven Elf Warrior ElvenWarrior ElfWarrior -------------------------------

AudioEvent ElfWarriorVoiceAttack
  Sounds = GUElWar_voiatta GUElWar_voiattb GUElWar_voiattc GUElWar_voiattd GUElWar_voiatte GUElWar_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceAttack
  Sounds = GUElWar_voiatta GUElWar_voiattb GUElWar_voiattc GUElWar_voiattd GUElWar_voiatte GUElWar_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateAttack
  Sounds = GUElWar_voiatta GUElWar_voiattb GUElWar_voiattc GUElWar_voiattd GUElWar_voiatte GUElWar_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceAttackBow
  Sounds = GUElWar_voiat2a GUElWar_voiat2b GUElWar_voiat2c GUElWar_voiat2d GUElWar_voiat2e
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateAttackBow
  Sounds = GUElWar_voiat2a GUElWar_voiat2b GUElWar_voiat2c GUElWar_voiat2d GUElWar_voiat2e
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElvenWarriorVoiceAttackBow
  Sounds = GUElWar_voiat2a GUElWar_voiat2b GUElWar_voiat2c GUElWar_voiat2d GUElWar_voiat2e
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceEnterStateAttackBow
  Sounds = GUElWar_voiat2a GUElWar_voiat2b GUElWar_voiat2c GUElWar_voiat2d GUElWar_voiat2e
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceAttackBuilding
  Sounds = GUElWar_voiatba GUElWar_voiatbb GUElWar_voiatbc GUElWar_voiatbd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceAttackCharge
  Sounds = GUElWar_voiatca GUElWar_voiatcb GUElWar_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceAttackCharge
  Sounds = GUElWar_voiatca GUElWar_voiatcb GUElWar_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateAttackCharge
  Sounds = GUElWar_voiatca GUElWar_voiatcb GUElWar_voiatcc
  Sounds = GUElWar_voiatta GUElWar_voiattb GUElWar_voiattc GUElWar_voiattd GUElWar_voiatte GUElWar_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceCaptureBuilding
  Sounds = GUElWar_voicapa GUElWar_voicapb GUElWar_voicapc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateCaptureBuilding
  Sounds = GUElWar_voicapa GUElWar_voicapb GUElWar_voicapc
  Volume = #ADD( BATTLE_CHATTER_VOLUME 0 )
  MinVolume = #ADD( BATTLE_CHATTER_MIN_VOLUME 0 )
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElvenWarriorVoiceAttackStructure
  Sounds = GUElWar_voicapa GUElWar_voicapb GUElWar_voicapc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceDie
  Sounds = GUElWar_voidiea GUElWar_voidieb GUElWar_voidiec GUElWar_voidied GUElWar_voidiee GUElWar_voidief GUElWar_voidieg GUElWar_voidieh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceDie
;  Sounds = GUElWar_voidiea GUElWar_voidieb GUElWar_voidiec GUElWar_voidied GUElWar_voidiee GUElWar_voidief GUElWar_voidieg GUElWar_voidieh
  Sounds = GUElven_voidiea GUElven_voidieb GUElven_voidiec GUElven_voidied GUElven_voidiee		;from BFME1
  Sounds = GUElven_voidief GUElven_voidieg  GUElven_voidieh GUElven_voidiei GUElven_voidiej		;from BFME1
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceDisengage
  Sounds = GUElWar_voidisa GUElWar_voidisb GUElWar_voidisc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceDisengage
  Sounds = GUElWar_voidisa GUElWar_voidisb GUElWar_voidisc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateDisengage
  Sounds = GUElWar_voidisa GUElWar_voidisb GUElWar_voidisc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceFearCower
  Sounds = GUElWar_voifeca GUElWar_voifecb GUElWar_voifecc GUElWar_voifecd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceFearDisperse
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceFearDoom
  Sounds = GUElWar_voifeoa GUElWar_voifeob GUElWar_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceFearTrample
  Sounds = GUElWar_voifeta GUElWar_voifetb GUElWar_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceModeSword
  Sounds = GUElWar_voiweab GUElWar_voiwead
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceModeBow
  Sounds = GUElWar_voiweaa GUElWar_voiweac
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceMove
  Sounds = GUElWar_voimova GUElWar_voimovb GUElWar_voimovc GUElWar_voimovd GUElWar_voimove GUElWar_voimovf GUElWar_voimovg GUElWar_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceMove
  Sounds = GUElWar_voimova GUElWar_voimovb GUElWar_voimovc GUElWar_voimovd GUElWar_voimove GUElWar_voimovf GUElWar_voimovg GUElWar_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateMove
  Sounds = GUElWar_voimova GUElWar_voimovb GUElWar_voimovc GUElWar_voimovd GUElWar_voimove GUElWar_voimovf GUElWar_voimovg GUElWar_voimovh
  Limit = 1
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
  MaxRange = BATTLE_CHATTER_RANGE
  PlayPercent = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceMoveCamp
  Sounds = GUElWar_voimoca GUElWar_voimocb GUElWar_voimocc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceMoveCamp
  Sounds = GUElWar_voimoca GUElWar_voimocb GUElWar_voimocc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateMoveCamp
  Sounds = GUElWar_voimoca GUElWar_voimocb GUElWar_voimocc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceMoveForest
  Sounds = GUElWar_voimofa GUElWar_voimofb GUElWar_voimofc GUElWar_voimofd GUElWar_voimofe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateMoveForest
  Sounds = GUElWar_voimofa GUElWar_voimofb GUElWar_voimofc GUElWar_voimofd GUElWar_voimofe
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElvenWarriorVoiceMoveForest
  Sounds = GUElWar_voimofa GUElWar_voimofb GUElWar_voimofc GUElWar_voimofd GUElWar_voimofe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceMoveGarrison
  Sounds = GUElWar_voigara GUElWar_voigarb GUElWar_voigarc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceGarrison							;old one from BFME1
	Sounds = GUElven_voigara GUElven_voigarb GUElven_voigarc 
	Volume      = UNIT_RESPONSE_VOLUME
	MinVolume   = UNIT_RESPONSE_MINVOLUME
	Type        = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceMoveShip
  Sounds = GUElWar_voimosa GUElWar_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceRetreat
  Sounds = GUElWar_voireta GUElWar_voiretb GUElWar_voiretc GUElWar_voiretd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceRetreat
  Sounds = GUElWar_voireta GUElWar_voiretb GUElWar_voiretc GUElWar_voiretd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceEnterStateRetreat
  Sounds = GUElWar_voireta GUElWar_voiretb GUElWar_voiretc GUElWar_voiretd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  ;PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent ElfWarriorVoiceSalute
  Sounds = GUElWar_voisala ;GUElWar_voisalb GUElWar_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceSalute
  Sounds = GUElWar_voisala GUElWar_voisalb GUElWar_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceSaluteBow
  Sounds = GUElWar_voisald GUElWar_voisale
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceSelect
  Sounds =  GUElWar_voiselb GUElWar_voiselc GUElWar_voiseld GUElWar_voisele GUElWar_voiself GUElWar_voiselg GUElWar_voiselh ;GUElWar_voisela
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElfWarriorVoiceSelectBattle
  Sounds = GUElWar_voiseba GUElWar_voisebb GUElWar_voisebc GUElWar_voisebd GUElWar_voisebe GUElWar_voisebf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElvenWarriorVoiceSelectBattle
  Sounds = GUElWar_voiseba GUElWar_voisebb GUElWar_voisebc GUElWar_voisebd GUElWar_voisebe GUElWar_voisebf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElfWarriorVoiceSelectMS
	Subsounds = ElfWarriorVoiceSelect ElvenWarriorVoiceSelect2
End

Multisound ElvenWarriorVoiceSelectMS
	Subsounds = ElfWarriorVoiceSelect ElvenWarriorVoiceSelect2
End

;------------------------------------------------- Elrond ----------------------------------------------

AudioEvent ElrondVoiceAttack
  Sounds = GUElron_voiatta GUElron_voiattb GUElron_voiattc GUElron_voiattd GUElron_voiatte GUElron_voiattf GUElron_voiattg GUElron_voiatth
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceAttackBuilding
  Sounds = GUElron_voiatba GUElron_voiatbb GUElron_voiatbc GUElron_voiatbd GUElron_voiatbe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceAttackCharge
  Sounds = GUElron_voiatca GUElron_voiatcb GUElron_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceCaptureBuilding
  Sounds = GUElron_voicapa GUElron_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceDie
  Sounds = GUElron_voidiea GUElron_voidieb GUElron_voidiec GUElron_voidied GUElron_voidiee GUElron_voidief
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinRange = 500
  MaxRange = 1000
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceDisengage
  Sounds = GUElron_voidisa GUElron_voidisb GUElron_voidisc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceHelpMe
  Sounds = GUElron_voihela GUElron_voihelb GUElron_voihelc GUElron_voiheld
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( HELPME_MINVOLUME 0 )
  Priority = critical
  Type = world shrouded player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceMove
  Sounds = GUElron_voimova GUElron_voimovb GUElron_voimovc GUElron_voimovd GUElron_voimove GUElron_voimovf GUElron_voimovg GUElron_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceMoveCamp
  Sounds = GUElron_voimoca GUElron_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceMoveGarrison
  Sounds = GUElron_voigara GUElron_voigarb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceMoveShip
  Sounds = GUElron_voimosa GUElron_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceRespawn
  Sounds = GUElron_voiresa GUElron_voiresb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceRetreat
  Sounds = GUElron_voireta GUElron_voiretb GUElron_voiretc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceSalute
  Sounds = GUElron_voisalb ;GUElron_voisala GUElron_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceSelect
  Sounds = GUElron_voisela GUElron_voiselb GUElron_voiselc GUElron_voiseld GUElron_voisele GUElron_voiself GUElron_voiselg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent ElrondVoiceSelectBattle
  Sounds = GUElron_voiseba GUElron_voisebb GUElron_voisebc GUElron_voisebd GUElron_voisebe GUElron_voisebf GUElron_voisebg GUElron_voisebh GUElron_voisebi GUElron_voisebj
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound ElrondVoiceSelectMS
	Subsounds = ElrondVoiceSelect HeroVoiceSelect2
End





; ------- Generic Die sounds ------

	;------------ Elf ------------

AudioEvent ElfGenericVoiceDie
		;--- from BFME1 ---
  Sounds = GUElven_voidiea GUElven_voidieb GUElven_voidiec GUElven_voidied GUElven_voidiee
  Sounds = GUElven_voidief GUElven_voidieg  GUElven_voidieh GUElven_voidiei GUElven_voidiej

		;--- from BFME2 ---
  Sounds = GUElLan_voidiea GUElLan_voidieb GUElLan_voidiec GUElLan_voidied GUElLan_voidiee GUElLan_voidief GUElLan_voidieg
  Sounds = GUElMir_voidiea GUElMir_voidieb GUElMir_voidiec GUElMir_voidied GUElMir_voidiee GUElMir_voidief GUElMir_voidieg
  Sounds = GUElSen_voidiea GUElSen_voidieb GUElSen_voidiec GUElSen_voidied GUElSen_voidiee GUElSen_voidief GUElSen_voidieg GUElSen_voidieh
  Sounds = GUElWar_voidiea GUElWar_voidieb GUElWar_voidiec GUElWar_voidied GUElWar_voidiee GUElWar_voidief GUElWar_voidieg GUElWar_voidieh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End



;-----------  ELVEN WARRIOR EMOTIONS -------

AudioEvent ElvenWarriorVoiceTerrorAragornElendil
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf
	;--- BFME2 below ---
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5						;EMOTION_PLAY_PERCENT 
  Type          = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent ElfVoiceDoomIncoming
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf 
  Sounds = GUElven_voifeha GUElven_voifehb
	;--- BFME2 below ---
  Sounds = GUElLan_voifeoa GUElLan_voifeob GUElLan_voifeoc
  Sounds = GUElLan_voimova GUElLan_voimovb GUElLan_voimovc GUElLan_voimovd GUElLan_voimove GUElLan_voimovf GUElLan_voimovg GUElLan_voimovh
  Sounds = GUElMir_voifeoa GUElMir_voifeob GUElMir_voifeoc
  Sounds = GUElSen_voifeoa GUElSen_voifeob GUElSen_voifeoc
  Sounds = GUElWar_voifeoa GUElWar_voifeob GUElWar_voifeoc
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf 
  Sounds = GUElven_voifeha GUElven_voifehb
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = #ADD( EMOTION_PLAY_PERCENT 10 )
  Type          = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent ElvenWarriorVoiceCower
  Sounds = GUElven_voifeca GUElven_voifecb GUElven_voifecc GUElven_voifecd GUElven_voifece GUElven_voifecf
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

AudioEvent ElvenWarriorVoiceCowerBoromirHorn
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
	;--- BFME1 below ---
  Sounds = GUElven_voifecc GUElven_voifecd GUElven_voifece GUElven_voifecf  
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

AudioEvent ElvenWarriorVoiceCowerBusy
  Sounds = GUElven_voifeca GUElven_voifecb GUElven_voifecc GUElven_voifecd GUElven_voifece GUElven_voifecf 
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

AudioEvent ElvenWarriorVoiceRegroup
  Sounds = GUElven_voifera GUElven_voiferb GUElven_voiferc GUElven_voiferd 
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

AudioEvent ElvenWarriorVoicePointGeneric
  Sounds = GUElven_voifedb GUElven_voifeha
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 1					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent ElvenWarriorVoicePointNazgul
  Sounds = GUElven_voifeda GUElven_voifecb GUElven_voifecd GUElven_voifece GUElven_voifecf
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent ElvenWarriorVoiceTerrorHeads
  Sounds = GUElven_voifeca GUElven_voifecb GUElven_voifecc GUElven_voifecd GUElven_voifece GUElven_voifecf 
  Sounds = GUElven_voifeha GUElven_voifehb
	;--- BFME2 below ---
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End

AudioEvent ElvenWarriorVoiceTerrorScreech
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf 
	;--- BFME2 below ---
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = 5					;EMOTION_PLAY_PERCENT
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End


;;---------------------------------

AudioEvent ElfVoiceFearCower
  Sounds = GUElLan_voifeca GUElLan_voifecb GUElLan_voifecc
  Sounds = GUElMir_voifeca GUElMir_voifecb GUElMir_voifecc
  Sounds = GUElSen_voifeca GUElSen_voifecb GUElSen_voifecc
  Sounds = GUElWar_voifeca GUElWar_voifecb GUElWar_voifecc GUElWar_voifecd
  Sounds = GUElven_voifeca GUElven_voifecb GUElven_voifecc GUElven_voifecd GUElven_voifece GUElven_voifecf		;from BFME1
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


AudioEvent ElfVoiceFearDisperse
  Sounds = GUElLan_voifeda GUElLan_voifedb GUElLan_voifedc
  Sounds = GUElMir_voifeda GUElMir_voifedb GUElMir_voifedc
  Sounds = GUElSen_voifeda GUElSen_voifedb GUElSen_voifedc GUElSen_voifedd
  Sounds = GUElWar_voifeda GUElWar_voifedb GUElWar_voifedc
	;--- BFME1 below ---
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf
  Volume = EMOTION_VOLUME
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = #DIVIDE( EMOTION_PLAY_PERCENT 2 )
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End


AudioEvent ElfVoiceFearDoom
  Sounds = GUElLan_voifeoa GUElLan_voifeob GUElLan_voifeoc
  Sounds = GUElLan_voimova GUElLan_voimovb GUElLan_voimovc GUElLan_voimovd GUElLan_voimove GUElLan_voimovf GUElLan_voimovg GUElLan_voimovh
  Sounds = GUElMir_voifeoa GUElMir_voifeob GUElMir_voifeoc
  Sounds = GUElSen_voifeoa GUElSen_voifeob GUElSen_voifeoc
  Sounds = GUElWar_voifeoa GUElWar_voifeob GUElWar_voifeoc
  Sounds = GUElven_voifedb GUElven_voifedc GUElven_voifedd GUElven_voifede GUElven_voifedf 
  Sounds = GUElven_voifeha GUElven_voifehb
  Volume = #ADD( EMOTION_VOLUME 0 )
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = #ADD( FEAR_DOOM_PLAY_PERCENT_BFME2 0 )
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End


AudioEvent ElfVoiceFearTrample
  Sounds = GUElMir_voifeta GUElMir_voifetb GUElMir_voifetc
  Sounds = GUElSen_voifeta GUElSen_voifetb GUElSen_voifetc
  Sounds = GUElSen_voimova GUElSen_voimovb GUElSen_voimovc GUElSen_voimovd GUElSen_voimove GUElSen_voimovf
  Sounds = GUElWar_voifeta GUElWar_voifetb GUElWar_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End