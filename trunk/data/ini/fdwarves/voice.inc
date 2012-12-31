////////////////
// VOICE.INC //
//////////////
//Dwarves//
//////////




;--------------------------------------- CampDwarf ---------------------------------------

AudioEvent CampDwarfUpgradeBannerCarrier				;pickups2
  Sounds = GCDwUpg_bannera GCDwUpg_bannerb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeFlamingArrows				;pickups2
  Sounds = GCDwUpg_flamina GCDwUpg_flaminb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeFlamingShots					;pickups2
  Sounds = GCDwUpg_FlaShoa GCDwUpg_FlaShob GCDwUpg_FlaShoc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeForgedBlades					;pickups2
  Sounds = GCDwUpg_forgeda GCDwUpg_forgedb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeGeneric 						;pickups2
  Sounds = GCDwUpg_generia
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeSiegeHammers					;pickups2
  Sounds = GCDwUpg_hammera GCDwUpg_hammerb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeMightyCatapult				;pickups2
  Sounds = GCDwUpg_mightya GCDwUpg_mightyb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  ; Delay = 10500 10500 Handled in Eva.ini now
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeMithrilMail					;pickups2
  Sounds = GCDwUpg_mithria GCDwUpg_mithrib
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWORMustDisputeTerritory				;pickups2
  Sounds = GCDwWar_Musdisa GCDwWar_Musdisb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWORHeroHasRetreated					;pickups2
  Sounds = GCDwWar_Rettera
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieEnemy
  Sounds = GCDwEne_diea GCDwEne_dieb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredBarrowWight
  Sounds = GCDwBar_discova GCDwBar_discovb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingDropped
  Sounds = GCDwRin_dropa GCDwRin_dropb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingRetrieved
  Sounds = GCDwRin_OwnUsa GCDwRin_OwnUsb GCDwRin_OwnUsc
  Sounds = GCDwRin_OwnUsd GCDwRin_OwnUse						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingPickedUp-Enemy
  Sounds = GCDwRin_PickEna GCDwRin_PickEnb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingPickedUp-Us
  Sounds = GCDwRin_PickUsa GCDwRin_PickUsb GCDwRin_PickUsc						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarArmyMerge
  Sounds = ;GCDwWar_Mergea GCDwWar_Mergeb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfWarArmyMergeMS
	Subsounds = LivingWorldGondorArmyIconMove		;LivingWorldRohanArmyIconMove CampDwarfWarArmyMerge
End

AudioEvent CampDwarfWarArmySplit
  Sounds = ;GCDwWar_Splita GCDwWar_Splitb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfWarArmySplitMS
	Subsounds = CampDwarfWarArmySplit LivingWorldGondorArmyIconMove	;LivingWorldRohanArmyIconMove
End

AudioEvent CampDwarfWarConstructionCompleted
  Sounds = GCDwWar_Complea GCDwWar_Compleb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostArnor
  Sounds = GCDwWar_LosArna GCDwWar_LosArnb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostEriador
  Sounds = GCDwWar_LosEria						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostGondor
  Sounds = GCDwWar_LosGona						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostMordor
  Sounds = GCDwWar_LosMora						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostRegion
  Sounds = GCDwWar_LosRega						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostRhovanion
  Sounds = GCDwWar_LosRhoa						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarLostRhun
  Sounds = GCDwWar_LosRhua						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustBattle
  Sounds = GCDwWar_MusBata GCDwWar_MusBatb GCDwWar_MusBatc						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustChoose
  Sounds = GCDwWar_MusChoa						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustRetreat
  Sounds = GCDwWar_MusReta GCDwWar_MusRetb						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustReturnDain
  Sounds = GCDwWar_RetDaia						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustReturnGimli
  Sounds = GCDwWar_RetGima						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarMustReturnGloin
  Sounds = GCDwWar_RetGloa						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarSaluteDain
  Sounds = GCDwWar_SalDaia						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarSaluteGimli
  Sounds = GCDwWar_SalGima						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarSaluteGloin
  Sounds = GCDwWar_SalGloa						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarSaluteReinforcements
  Sounds = GCDwWar_SalReia						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyArnor
  Sounds = GCDwWar_UniArna						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyEriador
  Sounds = GCDwWar_UniEria						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyGondor
  Sounds = GCDwWar_UniGona						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyMordor
  Sounds = GCDwWar_UniMora						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyRegion
  Sounds = GCDwWar_UniRega						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyRhovanion
  Sounds = GCDwWar_UniRhoa						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWarUnifyRhun
  Sounds = GCDwWar_UniRhua						;pickups1
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound WarDwarfUnifyArnorMS
  Subsounds = CampDwarfWarUnifyArnor LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyEriadorMS
  Subsounds = CampDwarfWarUnifyEriador LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyGondorMS
  Subsounds = CampDwarfWarUnifyGondor LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyMordorMS
  Subsounds = CampDwarfWarUnifyMordor LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyRegionMS
  Subsounds = CampDwarfWarUnifyRegion LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyRhovanionMS
  Subsounds = CampDwarfWarUnifyRhovanion LivingWorldRegionCheerGood
End

Multisound WarDwarfUnifyRhunMS
  Subsounds = CampDwarfWarUnifyRhun LivingWorldRegionCheerGood
End

AudioEvent CampDwarfBeaconDetected
  Sounds = GCDwBea_detecta GCDwBea_detectb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfBuildingCaptured
  Sounds = GCDwCap_gaina GCDwCap_gainb GCDwCap_gainc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfBuildingBeingCaptured
  Sounds = GCDwCap_losinga GCDwCap_losingb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfBuildingLost
  Sounds = GCDwCap_losta GCDwCap_lostb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfCommandPointLimit
  Sounds = GCDwCom_limita GCDwCom_limitb GCDwCom_limitc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieAlly			;2nd set
  Sounds = GCDwAll_losea GCDwAll_loseb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieArwen
  Sounds = GCDwArw_diea GCDwArw_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieBuilder			;2nd set
  Sounds = GCDwBui_diea GCDwBui_dieb GCDwBui_diec
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieDain			;2nd set
  Sounds = GCDwDai_diea GCDwDai_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieFortress			;2nd set
  Sounds = GCDwFor_losea GCDwFor_loseb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieFortressAlly			;2nd set
  Sounds = GCDwAll_foLosea GCDwAll_foLoseb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieGaladriel
  Sounds = GCDwGal_diea GCDwGal_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieGimli			;2nd set
  Sounds = GCDwGim_diea GCDwGim_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieGloin			;2nd set
  Sounds = GCDwGli_diea GCDwGli_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieGlorfindel
  Sounds = GCDwGlo_diea GCDwGlo_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieHaldir
  Sounds = GCDwHal_diea GCDwHal_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiePorter
  Sounds = GCDwBui_diea GCDwBui_dieb GCDwBui_diec
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )				;first recording session
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDieThranduil
  Sounds = GCDwThr_diea GCDwThr_dieb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredBalrog
  Sounds = GCDwBal_discova GCDwBal_discovb GCDwBal_discovc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredCaveTrolls
  Sounds = GCDwCav_discova GCDwCav_discovb GCDwCav_discovc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredCitadel
  Sounds = GCDwCit_discova GCDwCit_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredDrake
  Sounds = GCDwDra_discova GCDwDra_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredDragon
  Sounds = GCDwDrg_discova GCDwDrg_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredEnemyBase			;2nd set
  Sounds = GCDwEne_camDisa GCDwEne_camDisb GCDwEne_camDisc GCDwEne_camDisd
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredEnemyUnits			;2nd set
  Sounds = GCDwEne_discova GCDwEne_discovb GCDwEne_discovc GCDwEne_discovd GCDwEne_discove GCDwEne_discovf
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredFortress
  Sounds = GCDwFor_discova GCDwFor_discovb GCDwFor_discovc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredGaladriel
  Sounds = GCDwGal_discova GCDwGal_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredGoblins
  Sounds = GCDwGob_discova GCDwGob_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End
AudioEvent CampDwarfDiscoveredCorsairs
  Sounds = gcdisco_corsairsb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredGollum
  Sounds = GCDwGol_discova GCDwGol_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredOathbreaker
  Sounds = GCDwOat_discova GCDwOat_discovb GCDwOat_discovc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredRing
  Sounds = GCDwRin_discova GCDwRin_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredRingOwner
  Sounds = GCDwRiO_discova GCDwRiO_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredSauron
  Sounds = GCDwSau_discova GCDwSau_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredSpiderlings
  Sounds = GCDwSpi_discova GCDwSpi_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredTechDock			;2nd set
  Sounds = GCDwDoc_discova
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredTechInn			;2nd set
  Sounds = GCDwInn_discova
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredTechOutpost			;2nd set
  Sounds = GCDwOut_discova
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredTechSignalFire			;2nd set
  Sounds = GCDwSFi_discova
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredWargs
  Sounds = GCDwWar_discova GCDwWar_discovb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfDiscoveredWatcher
  Sounds = GCDwWat_discova GCDwWat_discovb GCDwWat_discovc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfFortressWin			;2nd set
  Sounds = GCDwFor_wina GCDwFor_winb GCDwFor_winc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfLoseTerritory
  Sounds = GCDwTer_losta GCDwTer_lostb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfLosingBattle
  Sounds = GCDwBat_losina GCDwBat_losinb GCDwBat_losinc GCDwBat_losind GCDwBat_losine
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfResourceLimit
  Sounds = GCDwRes_limita GCDwRes_limitb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingLost
  Sounds = GCDwRin_Losta GCDwRin_Lostb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingOwn-Ally
  Sounds = GCDwRin_OwnAla GCDwRin_OwnAlb GCDwRin_OwnAlc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfRingOwn-Enemy
  Sounds = GCDwRin_OwnEna GCDwRin_OwnEnb GCDwRin_OwnEnc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;combined with CampDwarfRingRetrieved
;
;AudioEvent CampDwarfRingOwn-Us
;  Sounds = GCDwRin_OwnUsa GCDwRin_OwnUsb GCDwRin_OwnUsc
;  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
;  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
;  Type = world player voice
;  SubmixSlider = voice
;End

AudioEvent CampDwarfUnderAttackAgain			;2nd set
  Sounds = GCDwAga_underAa GCDwAga_underAb GCDwAga_underAc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackAmbush
  Sounds = GCDwAmb_underAa GCDwAmb_underAb GCDwAmb_underAc GCDwAmb_underAd
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackArtillery			;2nd set
  Sounds = GCDwArt_underAa GCDwArt_underAb GCDwArt_underAc GCDwArt_underAd
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackBuilder			;2nd set
  Sounds = GCDwBui_underAa GCDwBui_underAb GCDwBui_underAc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackCamp			;2nd set
  Sounds = GCDwCam_underAa GCDwCam_underAb GCDwCam_underAc GCDwCam_underAd GCDwCam_underAe GCDwCam_underAf
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackEconPlot
  Sounds =
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackFire			;2nd set
  Sounds = GCDwFir_underAa GCDwFir_underAb GCDwFir_underAc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackResource
  Sounds = GCDwRes_underAa GCDwRes_underAb GCDwRes_underAc GCDwRes_underAd
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUnderAttackUnits			;2nd set
  Sounds = GCDwUni_underAa GCDwUni_underAb GCDwUni_underAc GCDwUni_underAd GCDwUni_underAe
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeArcheryRange
  Sounds = GCDwUpg_archera
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeForgeWorks
  Sounds = GCDwUpg_forgewa
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeFortress
  Sounds = GCDwUpg_fortrea
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeHallOfWarriors
  Sounds = GCDwUpg_hallofa
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfUpgradeMineShaft
  Sounds = GCDwUpg_minesha
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWallBroken			;2nd set
  Sounds = GCDwWal_brokena GCDwWal_brokenb GCDwWal_brokenc GCDwWal_brokend
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWallClimbed			;2nd set
  Sounds = GCDwWal_climba GCDwWal_climbb GCDwWal_climbc
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWinningBattle
  Sounds = GCDwBat_winnina GCDwBat_winninb GCDwBat_winninc GCDwBat_winnind
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampDwarfWinTerritory
  Sounds = GCDwTer_wina GCDwTer_winb
  Volume = #ADD( CAMP_DWARF_VOLUME 0 )
  MinVolume = #ADD( CAMP_DWARF_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End




;--------------------------------- DwarfAxeThrower DwarvenAxeThrower DwarfAxThrower DwarvenAxThrower -------------------------------

AudioEvent DwarfAxeThrowerVoiceAttack
  Sounds = GUDwAxe_voiatta GUDwAxe_voiattb GUDwAxe_voiattc GUDwAxe_voiattd GUDwAxe_voiatte
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateAttack
  Sounds = GUDwAxe_voiatta GUDwAxe_voiattb GUDwAxe_voiattc GUDwAxe_voiattd GUDwAxe_voiatte
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceAttackBuilding
  Sounds = GUDwAxe_voiatba GUDwAxe_voiatbb GUDwAxe_voiatbc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateAttackBuilding
  Sounds = GUDwAxe_voiatba GUDwAxe_voiatbb GUDwAxe_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceAttackCharge
  Sounds = GUDwAxe_voiatca GUDwAxe_voiatcb GUDwAxe_voiatcc GUDwAxe_voiatcd GUDwAxe_voiatce
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateAttackCharge
  Sounds = GUDwAxe_voiatca GUDwAxe_voiatcb GUDwAxe_voiatcc GUDwAxe_voiatcd GUDwAxe_voiatce
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceCaptureBuilding
  Sounds = GUDwAxe_voicapa GUDwAxe_voicapb GUDwAxe_voicapc GUDwAxe_voicapd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceDie
  Sounds = GUDwAxe_voidiea GUDwAxe_voidieb GUDwAxe_voidiec GUDwAxe_voidied GUDwAxe_voidiee GUDwAxe_voidief GUDwAxe_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceDisengage
  Sounds = GUDwAxe_voidisa GUDwAxe_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateDisengage
  Sounds = GUDwAxe_voidisa GUDwAxe_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceFearCower
  Sounds = GUDwAxe_voifeca GUDwAxe_voifecb GUDwAxe_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceFearDisperse
  Sounds = GUDwAxe_voifeda GUDwAxe_voifedb GUDwAxe_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceFearDoom
  Sounds = GUDwAxe_voifeoa GUDwAxe_voifeob GUDwAxe_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceFearTrample
  Sounds = GUDwAxe_voifeta GUDwAxe_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceMoveCamp
  Sounds = GUDwAxe_voimoca GUDwAxe_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateMoveCamp
  Sounds = GUDwAxe_voimoca GUDwAxe_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceMoveGarrison
  Sounds = GUDwAxe_voigara GUDwAxe_voigarb GUDwAxe_voigarc GUDwAxe_voigard
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceMoveHighGround
  Sounds = GUDwAxe_voimoha GUDwAxe_voimohb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateMoveHighGround
  Sounds = GUDwAxe_voimoha GUDwAxe_voimohb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceMoveShip
  Sounds = GUDwAxe_voimosa GUDwAxe_voimosb GUDwAxe_voimosc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceMove
  Sounds = GUDwAxe_voimova GUDwAxe_voimovb GUDwAxe_voimovc GUDwAxe_voimovd GUDwAxe_voimove GUDwAxe_voimovf GUDwAxe_voimovg GUDwAxe_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateMove
  Sounds = GUDwAxe_voimova GUDwAxe_voimovb GUDwAxe_voimovc GUDwAxe_voimovd GUDwAxe_voimove GUDwAxe_voimovf GUDwAxe_voimovg GUDwAxe_voimovh
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceRetreat
  Sounds = GUDwAxe_voireta GUDwAxe_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceEnterStateRetreat
  Sounds = GUDwAxe_voireta GUDwAxe_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfAxeThrowerVoiceSalute
  Sounds = GUDwAxe_voisalb ;GUDwAxe_voisala  GUDwAxe_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceSelect
  Sounds = GUDwAxe_voisela GUDwAxe_voiselb GUDwAxe_voiselc GUDwAxe_voiseld  GUDwAxe_voiself GUDwAxe_voiselg ;GUDwAxe_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfAxeThrowerVoiceSelectBattle
  Sounds = GUDwAxe_voiseba GUDwAxe_voisebb GUDwAxe_voisebc GUDwAxe_voisebd GUDwAxe_voisebe GUDwAxe_voisebf GUDwAxe_voisebg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfAxeThrowerVoiceSelectMS
  Subsounds = DwarfAxeThrowerVoiceSelect DwarfAxeThrowerFoleySelect 	;DwarfRhinocerousVoxSelect
End

;--------------------------------- DwarfBattleWagon DwarfWagon DwarvenBattleWagon DwarvenWagon -------------------------------

AudioEvent DwarfBattleWagonVoiceAttack
  Sounds = GUDwBat_voiatta GUDwBat_voiattb GUDwBat_voiattc GUDwBat_voiattd GUDwBat_voiatte GUDwBat_voiattf GUDwBat_voiattg GUDwBat_voiatth GUDwBat_voiatti GUDwBat_voiattj
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceAttackBuilding
  Sounds = GUDwBat_voiatba GUDwBat_voiatbb GUDwBat_voiatbc GUDwBat_voiatbd GUDwBat_voiatbe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceAttackCharge
  Sounds = GUDwBat_voiatca GUDwBat_voiatcb GUDwBat_voiatcc GUDwBat_voiatcd GUDwBat_voiatce
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceAttackOilBarrels
  Sounds = GUDwBat_voiat3a GUDwBat_voiat3b
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceAttackTrampleOwner
  Sounds = GUDwBat_voiat2a GUDwBat_voiat2b GUDwBat_voiat2c GUDwBat_voiat2d GUDwBat_voiat2e GUDwBat_voiat2f GUDwBat_voiat2g GUDwBat_voiat2h
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_PLAY_PERCENT
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceAttackTrampleOther
  Sounds = GUDwBat_voiat2a GUDwBat_voiat2b GUDwBat_voiat2c GUDwBat_voiat2d GUDwBat_voiat2e GUDwBat_voiat2f GUDwBat_voiat2g GUDwBat_voiat2h
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  MaxRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_OTHER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceDie
  Sounds = GUDwBat_voidiea GUDwBat_voidieb GUDwBat_voidiec GUDwBat_voidied GUDwBat_voidiee GUDwBat_voidief GUDwBat_voidieg GUDwBat_voidieh GUDwBat_voidiei
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceDisengage
  Sounds = GUDwBat_voidisa GUDwBat_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceFearCower
  Sounds = GUDwBat_voifeca GUDwBat_voifecb GUDwBat_voifecc GUDwBat_voifecd GUDwBat_voifece GUDwBat_voifecf GUDwBat_voifecg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceFearDisperse
  Sounds = GUDwBat_voifeda GUDwBat_voifedb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceFearDoom
  Sounds = GUDwBat_voifeoa GUDwBat_voifeob GUDwBat_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceMove
  Sounds = GUDwBat_voimova GUDwBat_voimovb GUDwBat_voimovc GUDwBat_voimovd GUDwBat_voimove GUDwBat_voimovf GUDwBat_voimovg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceMoveCamp
  Sounds = GUDwBat_voimoca GUDwBat_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceMoveShip
  Sounds = GUDwBat_voimosa GUDwBat_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceRetreat
  Sounds = GUDwBat_voireta GUDwBat_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceSalute
  Sounds = GUDwBat_voisald ;GUDwBat_voisala GUDwBat_voisalb GUDwBat_voisalc 
  Priority = high
  Delay = 6000 6000
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceSelect
  Sounds = GUDwBat_voisela GUDwBat_voiselb GUDwBat_voiselc GUDwBat_voiseld GUDwBat_voisele GUDwBat_voiself GUDwBat_voiselg GUDwBat_voiselh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceSelectBattle
  Sounds = GUDwBat_voiseba GUDwBat_voisebb GUDwBat_voisebc GUDwBat_voisebd GUDwBat_voisebe GUDwBat_voisebf GUDwBat_voisebg GUDwBat_voisebh GUDwBat_voisebi
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceUpgradeAxeThrower
  Sounds = GUDwBat_voiuaxa GUDwBat_voiuaxb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceUpgradeBannerCarrier
  Sounds = GUDwBat_voiubna GUDwBat_voiubnb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfBattleWagonUpgradeBannerCarrierMS
  Subsounds = DwarfBattleWagonVoiceUpgradeBannerCarrier UpgradeBannerCarrier
End

AudioEvent DwarfBattleWagonVoiceUpgradelBarrels
  Sounds = GUDwBat_voiubaa GUDwBat_voiubab
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceUpgradeGeneric
  Sounds = GUDwBat_voiugea GUDwBat_voiugeb GUDwBat_voiugec GUDwBat_voiuged GUDwBat_voiugee
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceUpgradeHearth
  Sounds = GUDwBat_voiuhea GUDwBat_voiuheb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfBattleWagonUpgradeHearthMS
  Subsounds = DwarfBattleWagonVoiceUpgradeHearth UpgradeFireStones
End

AudioEvent DwarfBattleWagonVoiceUpgradeMenOfDale
  Sounds = GUDwBat_voiumea GUDwBat_voiumeb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBattleWagonVoiceUpgradePhalanx
  Sounds = GUDwBat_voiupha GUDwBat_voiuphb GUDwBat_voiuphc GUDwBat_voiuphd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 10 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfBattleWagonVoiceAttackTrampleMS
	Subsounds = DwarfBattleWagonVoiceAttackTrampleOwner DwarfBattleWagonVoiceAttackTrampleOther
End

Multisound DwarfBattleWagonVoiceSelectMS
  Subsounds = DwarfBattleWagonVoiceSelect DwarfBattleWagonFoleySelect DwarfRhinocerousVoxSelect
End

;--------------------------------- DwarfBuilder DwarfPorter DwarvenBuilder DwarvenPorter -------------------------------

AudioEvent DwarfBuilderVoiceBuild
  Sounds = GUDwBui_voibuia GUDwBui_voibuib GUDwBui_voibuic GUDwBui_voibuid GUDwBui_voibuie GUDwBui_voibuif GUDwBui_voibuig GUDwBui_voibuih
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCantBuild
  Sounds = GUDwBui_voinoba GUDwBui_voinobb GUDwBui_voinobc GUDwBui_voinobd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCompleteArcheryRange
  Sounds = GUDwBui_voicara GUDwBui_voicarb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCompleteForgeWorks
  Sounds = GUDwBui_voicfwa GUDwBui_voicfwb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCompleteFortress
  Sounds = GUDwBui_voicfoa GUDwBui_voicfob
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCompleteGeneric
  Sounds = GUDwBui_voicgea GUDwBui_voicgeb GUDwBui_voicgec GUDwBui_voicged
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceCompleteHallOfWarriors
  Sounds = GUDwBui_voichaa GUDwBui_voichab
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceDie
  Sounds = GUDwBui_voidiea GUDwBui_voidieb GUDwBui_voidiec GUDwBui_voidied GUDwBui_voidiee GUDwBui_voidief
  Sounds = GUDwBui_voidieg GUDwBui_voidieh GUDwBui_voidiei GUDwBui_voidiej GUDwBui_voidiek
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceFearCower
  Sounds = GUDwBui_voifeca GUDwBui_voifecb GUDwBui_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceFearDisperse
  Sounds = GUDwBui_voifeda GUDwBui_voifedb GUDwBui_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceFearDoom
  Sounds = GUDwBui_voifeoa GUDwBui_voifeob GUDwBui_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceFearTrample
  Sounds = GUDwBui_voifeta GUDwBui_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceMove
  Sounds = GUDwBui_voimova GUDwBui_voimovb GUDwBui_voimovc GUDwBui_voimovd GUDwBui_voimove GUDwBui_voimovf GUDwBui_voimovg GUDwBui_voimovh GUDwBui_voimovi GUDwBui_voimovj GUDwBui_voimovk GUDwBui_voimovl GUDwBui_voimovm GUDwBui_voimovn
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceSalute
  Sounds = GUDwBui_voisala GUDwBui_voisalb GUDwBui_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceSelect
  Sounds = GUDwBui_voisela GUDwBui_voiselb GUDwBui_voiselc GUDwBui_voiseld GUDwBui_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfBuilderVoiceSelectIdle
  Sounds = GUDwBui_voiseia GUDwBui_voiseib GUDwBui_voiseic GUDwBui_voiseid
  Sounds = GUDwBui_voisela GUDwBui_voiselb GUDwBui_voiselc GUDwBui_voiseld GUDwBui_voisele
  Sounds = GUDwBui_voisela GUDwBui_voiselb GUDwBui_voiselc GUDwBui_voiseld GUDwBui_voisele
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME -10 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfBuilderVoiceSelectMS
  Subsounds = DwarfBuilderVoiceSelect DwarfBuilderFoleySelect
End

;--------------------------------- DwarfCatapult DwarfIronHillsCatapult DwarvenCatapult DwarvenIronHillsCatapult -------------------------------

AudioEvent DwarfCatapultVoiceAttack
  Sounds = GUDwCat_voiatta GUDwCat_voiattb GUDwCat_voiattc GUDwCat_voiattd GUDwCat_voiatte GUDwCat_voiattf GUDwCat_voiattg GUDwCat_voiatth GUDwCat_voiatti GUDwCat_voiattj
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceAttackBarrel
  Sounds = GUDwCat_voiat2a GUDwCat_voiat2b GUDwCat_voiat2c GUDwCat_voiat2d
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceAttackBuilding
  Sounds = GUDwCat_voiatba GUDwCat_voiatbb GUDwCat_voiatbc GUDwCat_voiatbd GUDwCat_voiatbe GUDwCat_voiatbf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceAttackCharge
  Sounds = GUDwCat_voiatca
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceDie
  ;Sounds = ;nothing specifically recorded for this
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceDisengage
  Sounds = GUDwCat_voidisa GUDwCat_voidisb GUDwCat_voidisc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceFearCower
  Sounds = GUDwCat_voifeca GUDwCat_voifecb GUDwCat_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceFearDisperse
  Sounds = GUDwCat_voifeda GUDwCat_voifedb GUDwCat_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceFearDoom
  Sounds = GUDwCat_voifeoa GUDwCat_voifeob GUDwCat_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceMove
  Sounds = GUDwCat_voimova GUDwCat_voimovb GUDwCat_voimovc GUDwCat_voimovd GUDwCat_voimove GUDwCat_voimovf GUDwCat_voimovg GUDwCat_voimovh GUDwCat_voimovi GUDwCat_voimovj
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceMoveCamp
  Sounds = GUDwCat_voimoca GUDwCat_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceMoveHighGround
  Sounds = GUDwCat_voimoha GUDwCat_voimohb GUDwCat_voimohc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceMoveRotate
  Sounds = GUDwCat_voimora GUDwCat_voimorb GUDwCat_voimorc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceRetreat
  Sounds = GUDwCat_voireta GUDwCat_voiretb GUDwCat_voiretc GUDwCat_voiretd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceSalute
  Sounds = GUDwCat_voisalb ;GUDwCat_voisala GUDwCat_voisalc
  Priority = high
  Delay = 6500 6500
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceSelect
  Sounds = GUDwCat_voisela GUDwCat_voiselb GUDwCat_voiselc GUDwCat_voiseld GUDwCat_voisele GUDwCat_voiself
  Sounds = GUDwCat_voiselg GUDwCat_voiselh GUDwCat_voiseli GUDwCat_voiselj GUDwCat_voiselk GUDwCat_voisell
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfCatapultVoiceSelectBattle
  Sounds = GUDwCat_voiseba GUDwCat_voisebb GUDwCat_voisebc GUDwCat_voisebd GUDwCat_voisebe GUDwCat_voisebf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfCatapultVoiceSelectMS
  Subsounds = DwarfCatapultVoiceSelect DwarfCatapultFoleySelect
End

;--------------------------------- DwarfDemolisher DwarfBatteringRam DwarvenDemolisher DwarvenBatteringRam -------------------------------

AudioEvent DwarfDemolisherVoiceAttack
  Sounds = GUDwDem_voiatta GUDwDem_voiattb GUDwDem_voiattc GUDwDem_voiattd GUDwDem_voiatte GUDwDem_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceAttackBuilding
  Sounds = GUDwDem_voiatba GUDwDem_voiatbb GUDwDem_voiatbc GUDwDem_voiatbd GUDwDem_voiatbe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceDeploy
  Sounds = GUDwDem_voide1a
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceUndeploy
  Sounds = GUDwDem_voide2a
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceDie
  Sounds = GUDwDem_voidiea GUDwDem_voidieb GUDwDem_voidiec GUDwDem_voidied GUDwDem_voidiee GUDwDem_voidief GUDwDem_voidieg
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceDisengage
  Sounds = GUDwDem_voidisa GUDwDem_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceFearCower
  Sounds = GUDwDem_voifeca GUDwDem_voifecb GUDwDem_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceFearDisperse
  Sounds = GUDwDem_voifeda GUDwDem_voifedb GUDwDem_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceFearDoom
  Sounds = GUDwDem_voifeoa GUDwDem_voifeob GUDwDem_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceMove
  Sounds = GUDwDem_voimova GUDwDem_voimovb GUDwDem_voimovc GUDwDem_voimovd GUDwDem_voimove GUDwDem_voimovf GUDwDem_voimovg GUDwDem_voimovh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceMoveCamp
  Sounds = GUDwDem_voimoca GUDwDem_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceMoveShip
  Sounds = GUDwDem_voimosa GUDwDem_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceRetreat
  Sounds = GUDwDem_voireta GUDwDem_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceSalute
  Sounds = GUDwDem_voisala ;GUDwDem_voisalb GUDwDem_voisalc
  Priority = high
  Delay = 7000 7000
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceSelect
  Sounds = GUDwDem_voisela GUDwDem_voiselb GUDwDem_voiselc GUDwDem_voiseld GUDwDem_voisele GUDwDem_voiself
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfDemolisherVoiceSelectBattle
  Sounds = GUDwDem_voiseba GUDwDem_voisebb GUDwDem_voisebc GUDwDem_voisebd GUDwDem_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfDemolisherVoiceSelectMS
  Subsounds = DwarfDemolisherVoiceSelect DwarfDemolisherFoleySelect DwarfRhinocerousVoxSelect
End

Multisound DwarfDemolisherDeployMS
  Subsounds = DwarfDemolisherVoiceDeploy DwarfDemolisherDeploy DwarfRhinocerousVoxDeploy
End

Multisound DwarfDemolisherUndeployMS
  Subsounds = DwarfDemolisherVoiceUndeploy DwarfDemolisherUndeploy DwarfRhinocerousVoxDeploy
End

;--------------------------------- DwarfGuardian DwarvenGuardian -------------------------------

AudioEvent DwarfGuardianVoiceAttack
  Sounds = GUDwGua_voiatta GUDwGua_voiattb GUDwGua_voiattc GUDwGua_voiattd GUDwGua_voiatte GUDwGua_voiattf
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateAttack
  Sounds = GUDwGua_voiatta GUDwGua_voiattb GUDwGua_voiattc GUDwGua_voiattd GUDwGua_voiatte GUDwGua_voiattf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceAttackBuilding
  Sounds = GUDwGua_voiatba GUDwGua_voiatbb GUDwGua_voiatbc 
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateAttackBuilding
  Sounds = GUDwGua_voiatba GUDwGua_voiatbb GUDwGua_voiatbc 
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceAttackCharge
  Sounds = GUDwGua_voiatca GUDwGua_voiatcb GUDwGua_voiatcc GUDwGua_voiatcd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateAttackCharge
  Sounds = GUDwGua_voiatca GUDwGua_voiatcb GUDwGua_voiatcc GUDwGua_voiatcd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceAttackHammer
  Sounds = GUDwGua_voiat2a GUDwGua_voiat2b GUDwGua_voiat2c
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateAttackHammer
  Sounds = GUDwGua_voiat2a GUDwGua_voiat2b GUDwGua_voiat2c
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceBullRush
  Sounds = GUDwGua_voispea GUDwGua_voispeb GUDwGua_voispec
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateBullRush
  Sounds = GUDwGua_voispea GUDwGua_voispeb GUDwGua_voispec
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

; NOTE: 
; Have to put these here so that we can use the BATTLE_CHATTER_ defines, even though they belong in SoundEffects.ini
AudioEvent DwarfMoveYellSinglesForBullRush1_NonOwner
  Sounds = GUDwarf_movYela GUDwarf_movYelb GUDwarf_movYelc GUDwarf_movYeld GUDwarf_movYele GUDwarf_movYelf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies shrouded
  SubmixSlider  = SoundFX
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfMoveYellSinglesForBullRush2_NonOwner
  Sounds = GUDwarf_movYelg GUDwarf_movYelh GUDwarf_movYeli GUDwarf_movYelj GUDwarf_movYelk
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies shrouded
  SubmixSlider  = SoundFX
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfGroupSmall_SelectForBullRush_NonOwner
  Sounds = GUDwarf_seleG1a GUDwarf_seleG1b GUDwarf_seleG1c GUDwarf_seleG1d GUDwarf_seleG1e GUDwarf_seleG1f GUDwarf_seleG1g GUDwarf_seleG1h
  Limit = 1
  Volume        = #ADD( BATTLE_CHATTER_VOLUME -5 )
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies shrouded
  SubmixSlider  = SoundFX
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

Multisound DwarfGuardianBullRushMS
  ; Owner hears:
  Subsounds = DwarfGuardianVoiceBullRush DwarfMoveYellSinglesForBullRush1 DwarfMoveYellSinglesForBullRush2 DwarfGroupSmall_SelectForBullRush
  ; Others hear:
  Subsounds = DwarfGuardianVoiceEnterStateBullRush DwarfMoveYellSinglesForBullRush1_NonOwner DwarfMoveYellSinglesForBullRush2_NonOwner DwarfGroupSmall_SelectForBullRush_NonOwner
End

AudioEvent DwarfGuardianVoiceCaptureBuilding
  Sounds = GUDwGua_voicapa GUDwGua_voicapb  GUDwGua_voicapd ;GUDwGua_voicapc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceDie
  Sounds = GUDwGua_voidiea GUDwGua_voidieb GUDwGua_voidiec GUDwGua_voidied GUDwGua_voidiee GUDwGua_voidief GUDwGua_voidieg GUDwGua_voidieh
  Sounds = GUDwGua_voidiei GUDwGua_voidiej GUDwGua_voidiek GUDwGua_voidiel GUDwGua_voidiem GUDwGua_voidien GUDwGua_voidieo GUDwGua_voidiep 
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceDisengage
  Sounds = GUDwGua_voidisa GUDwGua_voidisb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateDisengage
  Sounds = GUDwGua_voidisa GUDwGua_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceFearCower
  Sounds = GUDwGua_voifeca GUDwGua_voifecb GUDwGua_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceFearDisperse
  Sounds = GUDwGua_voifeda GUDwGua_voifedb GUDwGua_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceFearDoom
  Sounds = GUDwGua_voifeoa GUDwGua_voifeob GUDwGua_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceFearTrample
  Sounds = GUDwGua_voifeta GUDwGua_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceMove
  Sounds = GUDwGua_voimova GUDwGua_voimovb GUDwGua_voimovc GUDwGua_voimovd GUDwGua_voimove GUDwGua_voimovf GUDwGua_voimovg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateMove
  Sounds = GUDwGua_voimova GUDwGua_voimovb GUDwGua_voimovc GUDwGua_voimovd GUDwGua_voimove GUDwGua_voimovf GUDwGua_voimovg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceMoveGarrison
  Sounds = GUDwGua_voigara GUDwGua_voigarb GUDwGua_voigarc GUDwGua_voigard GUDwGua_voigare
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceMoveCamp
  Sounds = GUDwGua_voimoca GUDwGua_voimocb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateMoveCamp
  Sounds = GUDwGua_voimoca GUDwGua_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceMoveShip
  Sounds = GUDwGua_voimosa GUDwGua_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceRetreat
  Sounds = GUDwGua_voireta GUDwGua_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceEnterStateRetreat
  Sounds = GUDwGua_voireta GUDwGua_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfGuardianVoiceSalute
  Sounds = GUDwGua_voisala ;GUDwGua_voisalb GUDwGua_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceSelect
  Sounds = GUDwGua_voisela GUDwGua_voiselb GUDwGua_voiselc GUDwGua_voiseld GUDwGua_voisele GUDwGua_voiself
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfGuardianVoiceSelectBattle
  Sounds = GUDwGua_voiseba GUDwGua_voisebb GUDwGua_voisebc GUDwGua_voisebd GUDwGua_voisebe GUDwGua_voisebf GUDwGua_voisebg ; GUDwGua_voisebh
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfGuardianVoiceSelectMS
  Subsounds = DwarfGuardianVoiceSelect DwarfGuardianFoleySelect
End

;--------------------------------- DwarfPhalanx DwarvenPhalanx -------------------------------

AudioEvent DwarfPhalanxVoiceAttackBuilding
  Sounds = GUDwPha_voiatba GUDwPha_voiatbb GUDwPha_voiatbc GUDwPha_voiatbd
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateAttackBuilding
  Sounds = GUDwPha_voiatba GUDwPha_voiatbb GUDwPha_voiatbc GUDwPha_voiatbd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfPhalanxVoiceAttackCharge
  Sounds = GUDwPha_voiatca GUDwPha_voiatcb GUDwPha_voiatcc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateAttackCharge
  Sounds = GUDwPha_voiatca GUDwPha_voiatcb GUDwPha_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfPhalanxVoiceAttack
  Sounds = GUDwPha_voiatta GUDwPha_voiattb GUDwPha_voiattc GUDwPha_voiattd GUDwPha_voiatte GUDwPha_voiattf GUDwPha_voiattg
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateAttack
  Sounds = GUDwPha_voiatta GUDwPha_voiattb GUDwPha_voiattc GUDwPha_voiattd GUDwPha_voiatte GUDwPha_voiattf GUDwPha_voiattg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfPhalanxVoiceCaptureBuilding
  Sounds = GUDwPha_voicapa GUDwPha_voicapb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceDie
  Sounds = GUDwPha_voidiea GUDwPha_voidieb GUDwPha_voidiec GUDwPha_voidied GUDwPha_voidiee GUDwPha_voidief GUDwPha_voidieg GUDwPha_voidieh GUDwPha_voidiei GUDwPha_voidiej
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceDisengage
  Sounds = GUDwPha_voidisa GUDwPha_voidisb GUDwPha_voidisc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateDisengage
  Sounds = GUDwPha_voidisa GUDwPha_voidisb GUDwPha_voidisc
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfPhalanxVoiceFearCower
  Sounds = GUDwPha_voifeca GUDwPha_voifecb GUDwPha_voifecc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceFearDisperse
  Sounds = GUDwPha_voifeda GUDwPha_voifedb GUDwPha_voifedc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceFearDoom
  Sounds = GUDwPha_voifeoa GUDwPha_voifeob GUDwPha_voifeoc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceFearTrample
  Sounds = GUDwPha_voifeta GUDwPha_voifetb ;GUDwPha_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceMoveGarrison
  Sounds = GUDwPha_voigara GUDwPha_voigarb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceMoveCamp
  Sounds = GUDwPha_voimoca GUDwPha_voimocb GUDwPha_voimocc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateMoveCamp
  Sounds = GUDwPha_voimoca GUDwPha_voimocb GUDwPha_voimocc
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfPhalanxVoiceMoveShip
  Sounds = GUDwPha_voimosa GUDwPha_voimosb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceMove
  Sounds = GUDwPha_voimova GUDwPha_voimovb GUDwPha_voimovc GUDwPha_voimovd GUDwPha_voimove GUDwPha_voimovf GUDwPha_voimovg GUDwPha_voimovh GUDwPha_voimovi GUDwPha_voimovj
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateMove
  Sounds = GUDwPha_voimova GUDwPha_voimovb GUDwPha_voimovc GUDwPha_voimovd GUDwPha_voimove GUDwPha_voimovf GUDwPha_voimovg GUDwPha_voimovh GUDwPha_voimovi GUDwPha_voimovj
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfPhalanxVoicePorcupineBegin
  Sounds = GUDwPha_voipo1a GUDwPha_voipo1b GUDwPha_voipo1c
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoicePorcupineEnd
  Sounds = GUDwPha_voipo2a GUDwPha_voipo2b
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceRetreat
  Sounds = GUDwPha_voireta GUDwPha_voiretb
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceEnterStateRetreat
  Sounds = GUDwPha_voireta GUDwPha_voiretb
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfPhalanxVoiceSalute
  Sounds = GUDwPha_voisala ; GUDwPha_voisalb GUDwPha_voisalc
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceSelectBattle
  Sounds = GUDwPha_voiseba GUDwPha_voisebb GUDwPha_voisebc GUDwPha_voisebd GUDwPha_voisebe
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfPhalanxVoiceSelect
  Sounds = GUDwPha_voisela GUDwPha_voiselb GUDwPha_voiselc GUDwPha_voiseld GUDwPha_voisele GUDwPha_voiself GUDwPha_voisalb 
  Priority = high
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound DwarfPhalanxVoiceSelectMS
  Subsounds = DwarfPhalanxVoiceSelect DwarfGuardianFoleySelect
End




; ------- Generic Die sounds ------


	;------------ Dwarf ------------

AudioEvent DwarfGenericVoiceDie
  Sounds = GUDwAxe_voidiea GUDwAxe_voidieb GUDwAxe_voidiec GUDwAxe_voidied GUDwAxe_voidiee GUDwAxe_voidief GUDwAxe_voidieg
  Sounds = GUDwBat_voidiea GUDwBat_voidieb GUDwBat_voidiec GUDwBat_voidied GUDwBat_voidiee GUDwBat_voidief GUDwBat_voidieg GUDwBat_voidieh GUDwBat_voidiei
  Sounds = GUDwDem_voidiea GUDwDem_voidieb GUDwDem_voidiec GUDwDem_voidied GUDwDem_voidiee GUDwDem_voidief GUDwDem_voidieg
  Sounds = GUDwGua_voidiea GUDwGua_voidieb GUDwGua_voidiec GUDwGua_voidied GUDwGua_voidiee GUDwGua_voidief GUDwGua_voidieg GUDwGua_voidieh
  Sounds = GUDwGua_voidiei GUDwGua_voidiej GUDwGua_voidiek GUDwGua_voidiel GUDwGua_voidiem GUDwGua_voidien GUDwGua_voidieo GUDwGua_voidiep 
  Sounds = GUDwPha_voidiea GUDwPha_voidieb GUDwPha_voidiec GUDwPha_voidied GUDwPha_voidiee GUDwPha_voidief GUDwPha_voidieg GUDwPha_voidieh GUDwPha_voidiei GUDwPha_voidiej
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

Multisound DwarfBattleWagonDieMS
  Subsounds = DwarfRhinocerousVoxDie DwarfBattleWagonDie DwarfGenericVoiceDie
End

Multisound DwarfDemolisherDieMS
  Subsounds = DwarfRhinocerousVoxDie DwarfDemolisherDie DwarfGenericVoiceDie
End



;------------------------------------Dwarf Zerker-------------------------------------------------------------------

AudioEvent DwarfZerkVoiceCaptureBuilding
  Sounds = DUZerkr_voicapa DUZerkr_voicapb DUZerkr_voicapc DUZerkr_voicapd 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateCaptureBuilding
  Sounds = DUZerkr_voicapa DUZerkr_voicapb DUZerkr_voicapc DUZerkr_voicapd 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfZerkVoiceAttackBuilding
  Sounds = DUZerkr_voiatba DUZerkr_voiatbb DUZerkr_voiatbc
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateAttackBuilding
  Sounds = DUZerkr_voiatba DUZerkr_voiatbb DUZerkr_voiatbc
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfZerkVoiceAttackCharge
  Sounds = DUZerkr_voiatca DUZerkr_voiatcb DUZerkr_voiatcc DUZerkr_voiatcd  
  Sounds = DUZerkr_voiatta DUZerkr_voiattb DUZerkr_voiattc DUZerkr_voiattd DUZerkr_voiatte DUZerkr_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateAttackCharge
  Sounds = DUZerkr_voiatca DUZerkr_voiatcb DUZerkr_voiatcc DUZerkr_voiatcd  
  Sounds = DUZerkr_voiatta DUZerkr_voiattb DUZerkr_voiattc DUZerkr_voiattd DUZerkr_voiatte DUZerkr_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfZerkVoiceAttack
  Sounds = DUZerkr_voiatta DUZerkr_voiattb DUZerkr_voiattc DUZerkr_voiattd DUZerkr_voiatte DUZerkr_voiattf 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

Multisound DwarfZerkVoiceAttackMS
	Subsounds = DwarfZerkVoiceAttack OrcVoiceAttack2
End

AudioEvent DwarfZerkVoiceEnterStateAttack
  Sounds = DUZerkr_voiatta DUZerkr_voiattb DUZerkr_voiattc DUZerkr_voiattd DUZerkr_voiatte DUZerkr_voiattf 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfZerkVoiceDie
  Sounds = DUZerkr_voidiea DUZerkr_voidieb DUZerkr_voidiec DUZerkr_voidied DUZerkr_voidiee DUZerkr_voidief DUZerkr_voidieg DUZerkr_voidieh DUZerkr_voidiei
  Volume      = UNIT_RESPONSE_VOLUME
  MinRange = 500
  MaxRange = 1000
  Type        = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceDisengage
  Sounds = DUZerkr_voidisa DUZerkr_voidisb
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = HELPME_MINVOLUME 
  Type        = world player voice
  Priority = critical
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateDisengage
  Sounds = DUZerkr_voidisa DUZerkr_voidisb
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfZerkVoiceMoveCamp
  Sounds = DUZerkr_voimoca DUZerkr_voimocb  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


AudioEvent DwarfZerkVoiceEnterStateMoveCamp
  Sounds = DUZerkr_voimoca DUZerkr_voimocb  
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent DwarfZerkVoiceMoveShip
  Sounds = DUZerkr_voimosa DUZerkr_voimosb  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceMoveGarr
  Sounds = DUZerkr_voigara DUZerkr_voigarb DUZerkr_voigarc 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


AudioEvent DwarfZerkVoiceMove
  Sounds = DUZerkr_voimova DUZerkr_voimovb DUZerkr_voimovc DUZerkr_voimovd DUZerkr_voimove DUZerkr_voimovf DUZerkr_voimovg ;DUZerkr_voimovh  DUZerkr_voimovj  ;DUZerkr_voimovi
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  PlayPercent = VOICE_MOVE_PLAY_PERCENT
  Type        = world player voice
  SubmixSlider = voice
End

Multisound DwarfZerkVoiceMoveMS
	Subsounds = DwarfZerkVoiceMove OrcVoiceMove2
End

AudioEvent DwarfZerkVoiceEnterStateMove
  Sounds = DUZerkr_voimova DUZerkr_voimovb DUZerkr_voimovc DUZerkr_voimovd DUZerkr_voimove DUZerkr_voimovf DUZerkr_voimovg ;DUZerkr_voimovh  DUZerkr_voimovj  ;DUZerkr_voimovi
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfZerkVoiceMoveGroup
  Sounds = DUZerkr_voimova DUZerkr_voimovb DUZerkr_voimovc DUZerkr_voimovd DUZerkr_voimove DUZerkr_voimovf DUZerkr_voimovg ;DUZerkr_voimovh  DUZerkr_voimovj  ;DUZerkr_voimovi
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceSalute
  Sounds = DUZerkr_voisala DUZerkr_voisalb DUZerkr_voisalc ;DUZerkr_voisald  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceSelectBattle
  Sounds = DUZerkr_voiseba DUZerkr_voisebb DUZerkr_voisebc DUZerkr_voisebd DUZerkr_voisebe DUZerkr_voisebf DUZerkr_voisebg DUZerkr_voisebh 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceSelect
  Sounds = DUZerkr_voisela DUZerkr_voiselb DUZerkr_voiselc DUZerkr_voiseld DUZerkr_voisele DUZerkr_voiself ;DUZerkr_voiselg DUZerkr_voiselh DUZerkr_voiseli  
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End


Multisound DwarfZerkVoiceSelectMS
	Subsounds = DwarfZerkVoiceSelect HeroVoiceSelect2
End

AudioEvent DwarfZerkVoiceRetreat
  Sounds = DUZerkr_voireta DUZerkr_voiretb 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

AudioEvent DwarfZerkVoiceEnterStateRetreat
  Sounds = DUZerkr_voireta DUZerkr_voiretb 
    Limit = 1
    Volume        = BATTLE_CHATTER_VOLUME
    MinVolume     = BATTLE_CHATTER_MIN_VOLUME
    Type          = world allies enemies voice shrouded
    SubmixSlider  = voice
    MaxRange      = BATTLE_CHATTER_RANGE
    PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End


AudioEvent DwarfZerkVoiceLeap
  Sounds = DUZerkr_voispea DUZerkr_voispeb DUZerkr_voispec 
  Volume      = UNIT_RESPONSE_VOLUME
  MinVolume   = UNIT_RESPONSE_MINVOLUME
  Type        = world player voice
  SubmixSlider = voice
End

;;----------------------------------

AudioEvent DwarfVoiceFearCower
  Sounds = GUDwAxe_voifeca GUDwAxe_voifecb GUDwAxe_voifecc
  Sounds = GUDwBat_voifeca GUDwBat_voifecb GUDwBat_voifecc GUDwBat_voifecd GUDwBat_voifece GUDwBat_voifecf GUDwBat_voifecg
  Sounds = GUDwBui_voifeca GUDwBui_voifecb GUDwBui_voifecc
  Sounds = GUDwCat_voifeca GUDwCat_voifecb GUDwCat_voifecc
  Sounds = GUDwDem_voifeca GUDwDem_voifecb GUDwDem_voifecc
  Sounds = GUDwGua_voifeca GUDwGua_voifecb GUDwGua_voifecc
  Sounds = GUDwPha_voifeca GUDwPha_voifecb GUDwPha_voifecc
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


AudioEvent DwarfVoiceFearDisperse
  Sounds = GUDwAxe_voifeda GUDwAxe_voifedb GUDwAxe_voifedc
  Sounds = GUDwBat_voifeda GUDwBat_voifedb
  Sounds = GUDwBui_voifeda GUDwBui_voifedb GUDwBui_voifedc
  Sounds = GUDwCat_voifeda GUDwCat_voifedb GUDwCat_voifedc
  Sounds = GUDwDem_voifeda GUDwDem_voifedb GUDwDem_voifedc
  Sounds = GUDwGua_voifeda GUDwGua_voifedb GUDwGua_voifedc
  Sounds = GUDwPha_voifeda GUDwPha_voifedb GUDwPha_voifedc
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

AudioEvent DwarfVoiceFearDoom
  Sounds = GUDwAxe_voifeoa GUDwAxe_voifeob GUDwAxe_voifeoc
  Sounds = GUDwBat_voifeoa GUDwBat_voifeob GUDwBat_voifeoc
  Sounds = GUDwBui_voifeoa GUDwBui_voifeob GUDwBui_voifeoc
  Sounds = GUDwCat_voifeoa GUDwCat_voifeob GUDwCat_voifeoc
  Sounds = GUDwDem_voifeoa GUDwDem_voifeob GUDwDem_voifeoc
  Sounds = GUDwGua_voifeoa GUDwGua_voifeob GUDwGua_voifeoc
  Sounds = GUDwPha_voifeoa GUDwPha_voifeob GUDwPha_voifeoc
  Volume = #ADD( EMOTION_VOLUME 0 )
  MinRange = 300
  MaxRange = 800
  VolumeShift = -20
  Limit = 1
  PlayPercent = #ADD( FEAR_DOOM_PLAY_PERCENT_BFME2 10 )
  Type = world shrouded everyone voice
  SubmixSlider = voice
  PitchShift = -2 2
End


AudioEvent DwarfVoiceFearTrample
  Sounds = GUDwAxe_voifeta GUDwAxe_voifetb
  Sounds = GUDwBui_voifeta GUDwBui_voifetb
  Sounds = GUDwGua_voifeta GUDwGua_voifetb
  Sounds = GUDwPha_voifeta GUDwPha_voifetb GUDwPha_voifetc
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End