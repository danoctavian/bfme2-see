////////////////
// VOICE.INC //
//////////////
//Moria//
////////



;--------------------------------------- CampGoblin CampWild --------------------------------------------

AudioEvent CampGoblinUpgradeScavengedArmor				;pickups2
  Sounds = GCGoUpg_armora GCGoUpg_armorb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeBannerCarrier				;pickups2
  Sounds = GCGoUpg_bannera GCGoUpg_bannerb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeDragonsNest					;pickups2
  Sounds = BalrogTotemComplete	//GCGoUpg_dragona GCGoUpg_dragonb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  ; Delay = 11500 11500 Handled in Eva.ini now
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeFlameArrows					;pickups2
  Sounds = GCGoUpg_flamina GCGoUpg_flaminb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeForgedBlades					;pickups2
  Sounds = ScavangedBlades		//GCGoUpg_forgeda GCGoUpg_forgedb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 1 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 1 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeGenericComplete				;pickups2
  Sounds = GCGoUpg_generia
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeTreasureTrove
  Sounds = GCGoUpg_treasua								;pickups2
  Sounds = ECGoUpg_treasua								;first recording session
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeVenomSacs					;pickups2
  Sounds = GCGoUpg_venomsa GCGoUpg_venomsb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWORMustDisputeTerritory			;pickups2
  Sounds = GCGoWar_Musdisa GCGoWar_Musdisb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWORHeroHasRetreated				;pickups2
  Sounds = GCGoWar_Rettera
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieEnemy
  Sounds = ECGoEne_diea ECGoEne_dieb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingDropped
  Sounds = ECGoRin_dropa ECGoRin_dropb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingRetrieved
  Sounds = ECGoRin_OwnUsa ECGoRin_OwnUsb ECGoRin_OwnUsc
  Sounds = ECGoRin_OwnUsd ECGoRin_OwnUse						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingPickedUp-Enemy
  Sounds = ECGoRin_PickEna ECGoRin_PickEnb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingPickedUp-Us
  Sounds = ECGoRin_PickUsa ECGoRin_PickUsb ECGoRin_PickUsc						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackResourceLumbermill
  Sounds = ECGoRes_underAd ECGoRes_underAe						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarArmyMerge
  Sounds = ;ECGoWar_Mergea ECGoWar_Mergeb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound GoblinWarArmyMergeMS
	Subsounds = LivingWorldMordorArmyIconMove	;LivingWorldRohanArmyIconMove CampGoblinWarArmyMerge
End

AudioEvent CampGoblinWarArmySplit
  Sounds = ;ECGoWar_Splita ECGoWar_Splitb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound GoblinWarArmySplitMS
	Subsounds = CampGoblinWarArmySplit LivingWorldMordorArmyIconMove	;LivingWorldRohanArmyIconMove
End

AudioEvent CampGoblinWarConstructionCompleted
  Sounds = ECGoWar_Complea ECGoWar_Compleb						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostArnor
  Sounds = ECGoWar_LosArna						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostEriador
  Sounds = ECGoWar_LosEria						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostGondor
  Sounds = ECGoWar_LosGona						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostMordor
  Sounds = ECGoWar_LosMora						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostRegion
  Sounds = ECGoWar_LosRega						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostRhovanion
  Sounds = ECGoWar_LosRhoa						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarLostRhun
  Sounds = ECGoWar_LosRhua						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustBattle
  Sounds = ECGoWar_MusBata ECGoWar_MusBatb ECGoWar_MusBatc						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustChoose
  Sounds = ECGoWar_MusChoa						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustRetreat
  Sounds = ECGoWar_MusReta						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustReturnDrogoth
  Sounds = ECGoWar_RetDroa						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustReturnGoblinKing
  Sounds = ECGoWar_RetKina						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarMustReturnShelob
  Sounds = ECGoWar_RetShea						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarSaluteReinforcements
  Sounds = ECGoWar_SalReia ECGoWar_SalReib						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyArnor
  Sounds = ECGoWar_UniArna						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyEriador
  Sounds = ECGoWar_UniEria						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyGondor
  Sounds = ECGoWar_UniGona						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyMordor
  Sounds = ECGoWar_UniMora						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyRegion
  Sounds = ECGoWar_UniRega						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyRhovanion
  Sounds = ECGoWar_UniRhoa						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWarUnifyRhun
  Sounds = ECGoWar_UniRhua						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

Multisound WarWildUnifyArnorMS
  Subsounds = CampGoblinWarUnifyArnor LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyEriadorMS
  Subsounds = CampGoblinWarUnifyEriador LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyGondorMS
  Subsounds = CampGoblinWarUnifyGondor LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyMordorMS
  Subsounds = CampGoblinWarUnifyMordor LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyRegionMS
  Subsounds = CampGoblinWarUnifyRegion LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyRhovanionMS
  Subsounds = CampGoblinWarUnifyRhovanion LivingWorldRegionCheerEvil
End

Multisound WarWildUnifyRhunMS
  Subsounds = CampGoblinWarUnifyRhun LivingWorldRegionCheerEvil
End

AudioEvent CampWildAllyDefeated
  Sounds = ECAlly_losea ECAlly_loseb ECAlly_losec ECAlly_losed ECAlly_losee		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinBuildingCaptured
  Sounds = ECGoCap_gaina ECGoCap_gainb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinBuildingBeingCaptured
  Sounds = ECGoCap_losinga ECGoCap_losingb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinBuildingLost
  Sounds = ECGoCap_losta ECGoCap_lostb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampWildCommandPointLimit
  Sounds = ECComma_limita ECComma_limitb ECComma_limitc		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateGoblinArcher
  Sounds = ECGoSal_GobArcb ;ECGoSal_GobArca 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateOrcBuilder
  Sounds = ECGoSal_GobBuia ECGoSal_GobBuib
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateCaveTroll
  Sounds = ECGoSal_GobCavb ;ECGoSal_GobCava 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateCorsairs
  Sounds =  ECGoSal_GobCorb ;ECGoSal_GobCora
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateFireDrake
  Sounds = ECGoSal_GobDrab ;ECGoSal_GobDraa 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateDragonLord
  Sounds = ECGoSal_GobDrob ;ECGoSal_GobDroa 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateGiant
  Sounds = ECGoSal_GobGiaa ;ECGoSal_GobGiab
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End


AudioEvent CampGoblinCreateGoblinKing
  Sounds =  ECGoSal_GobKinb ;ECGoSal_GobKina
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateHalf-Trolls
  Sounds = ECGoSal_GobWarb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateMouthofSauron
  Sounds =  ECGoSal_GobMoub ;ECGoSal_GobMoua
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateSpiderRiders
  Sounds = ECGoSal_GobRida ;ECGoSal_GobRidb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateShelob
  Sounds = ECGoSal_GobSheb ;ECGoSal_GobShea 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End


AudioEvent CampGoblinCreateSpiderlings
  Sounds = ECGoSal_GobSpia ;ECGoSal_GobSpib
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateGoblinWarrior
  Sounds = ECGoSal_GobWara
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinCreateBarrowWight
  Sounds = ECGoSal_GobWigb ;ECGoSal_GobWiga 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieBuilder
  Sounds = ECGoBui_diea ECGoBui_dieb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieDragonLord
  Sounds = ECGoDro_diea ECGoDro_dieb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieFortress
  Sounds = ECGoFor_losea ECGoFor_loseb ECGoFor_losec
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieFortressAlly
  Sounds = ECGoAll_losea ECGoAll_loseb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieGoblinKing
  Sounds = ECGoKin_diea ECGoKin_dieb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieMouthOfSauron
  Sounds = ECGoMou_diea ECGoMou_dieb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieNazgul
  Sounds = ECGoNaz_diea ECGoNaz_dieb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDieShelob
  ;Sounds =
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredBalrog
  Sounds = ECGoBal_discova ECGoBal_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredBarrowWights
  Sounds = ECGoWig_discova ECGoWig_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredCaveTrolls
  Sounds = ECDisco_trollsa ECDisco_trollsb ECDisco_trollsc		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredCitadel
  Sounds = ECGoCit_discova ECGoCit_discovb
  Sounds = ECGoCit_discovc						;pickups1
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredDrake
  Sounds = ECGoDra_discova ECGoDra_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredDragon
  Sounds = ECGoDrg_discova ECGoDrg_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredEnemyBase
  Sounds = ECGoEne_camDisa ECGoEne_camDisb ECGoEne_camDisc ECGoEne_camDisd
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredEnemyUnits
  Sounds = ECEnemy_discova ECEnemy_discovb ECEnemy_discovc ECEnemy_discovd ECEnemy_discove		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredFortress
  Sounds = ECGoFor_discova ECGoFor_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredGaladriel
  Sounds = ECGoGal_discova ECGoGal_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredGoblins
  Sounds = ECGoGob_discova
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredGollum
  Sounds = ECGoGol_discova ECGoGol_discovb ECGoGol_discovc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredOathbreaker
  Sounds = ECGoOat_discova ECGoOat_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredRing
  Sounds = ECGoRin_discova ECGoRin_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredRingOwner
  Sounds = ECGoRiO_discova ECGoRiO_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredSauron
  Sounds = ECGoSau_discova ECGoSau_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredSpiderlings
  Sounds = ECGoSpi_discova ECGoSpi_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredTechDock
  Sounds = ECGoDoc_discova
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredTechInn
  Sounds = ECGoInn_discova
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredTechOutpost
  Sounds = ECGoOut_discova
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredTechSignalFire
  Sounds = ECGoSFi_discova
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredWargs
  Sounds = ECDisco_wargsa ECDisco_wargsb ECDisco_wargsc		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinDiscoveredWatcher
  Sounds = ECGoWat_discova ECGoWat_discovb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinHelpMeDragonLord
  Sounds = ECGoDro_helpmea
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinHelpMeGoblinKing
  Sounds = ECGoKin_helpmea
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinHelpMeSauron
  Sounds = ECGoSau_helpmea
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinLoseTerritory
  Sounds = ECGoTer_losta ECGoTer_lostb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinLosingBattle
  Sounds = ECGoBat_losina ECGoBat_losinb ECGoBat_losinc ECGoBat_losind
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinResourcesLow
  Sounds = ECGoRes_limita ECGoRes_limitb ECGoRes_limitc ECGoRes_limitd
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingLost
  Sounds = ECGoRin_losta ECGoRin_lostb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingOwn-Ally
  Sounds = ECGoRin_OwnAla ECGoRin_OwnAlb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinRingOwn-Enemy
  Sounds = ECGoRin_OwnEna ECGoRin_OwnEnb ECGoRin_OwnEnc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;combined with CampGoblinRingRetrieved
;
;AudioEvent CampGoblinRingOwn-Us
;  Sounds = ECGoRin_OwnUsa ECGoRin_OwnUsb ECGoRin_OwnUsc
;  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
;  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
;  Type = world player voice
;  SubmixSlider = voice
;End

AudioEvent CampGoblinUnderAttackAgain
  Sounds = ECGoAga_underAa ECGoAga_underAb ECGoAga_underAc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackAmbush
  Sounds = ECGoAmb_underAa ECGoAmb_underAb ECGoAmb_underAc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackArtillery
  Sounds = ECGoArt_underAa ECGoArt_underAb ECGoArt_underAc ECGoArt_underAd
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackBuilder
  Sounds = ECGoBui_underAa ECGoBui_underAb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackCamp
  Sounds = ECCamp_undera ECCamp_underb ECCamp_underc ECCamp_underd ECCamp_undere	;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackEconPlot
  Sounds = 
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackFire
  Sounds = ECGoFir_underAa  ECGoFir_underAc ;ECGoFir_underAb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackResource
  Sounds = ECGoRes_underAa ECGoRes_underAb ECGoRes_underAc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUnderAttackUnits
  Sounds = ECUnits_undera ECUnits_underb ECUnits_underc ECUnits_underd ECUnits_undere ECUnits_underf ECUnits_underg ECUnits_underh		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeCave
  Sounds = ECGoUpg_cavea
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeFissure
  Sounds = ECGoUpg_fissura
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeFortress
  Sounds = ECGoUpg_fortrea
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinUpgradeSpiderPit
  Sounds = ECGoUpg_spidera
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

;AudioEvent CampGoblinUpgradeTreasureTrove
;  Sounds = ECGoUpg_treasua
;  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
;  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
;  Type = world player voice
;  SubmixSlider = voice
;End

AudioEvent CampGoblinWallBroken
  Sounds = ECWall_brokena ECWall_brokenb ECWall_brokenc ECWall_brokend ECWall_brokene		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWinFortress
  Sounds = ECCamp_wina ECCamp_winb ECCamp_winc ECCamp_wind ECCamp_wine		;from BFME1 CampOrc
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWinningBattle
  Sounds = ECGoBat_winnina ECGoBat_winninb ECGoBat_winninc ECGoBat_winnind
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent CampGoblinWinTerritory
  Sounds = ECGoTer_wina ECGoTer_winb
  Volume = #ADD( CAMP_GOBLIN_VOLUME 0 )
  MinVolume = #ADD( CAMP_GOBLIN_MINVOLUME 0 )
  Type = world player voice
  SubmixSlider = voice
End



;----;-;-;-;--------------

;-------------------------------- GoblinArcher ------------------------------------------

AudioEvent GoblinArcherVoiceAttack
  Sounds = EUGobAr_voiatta EUGobAr_voiattb EUGobAr_voiattc EUGobAr_voiattd EUGobAr_voiatte EUGobAr_voiattf EUGobAr_voiattg EUGobAr_voiatth EUGobAr_voiatti
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateAttack
  Sounds = EUGobAr_voiatta EUGobAr_voiattb EUGobAr_voiattc EUGobAr_voiattd EUGobAr_voiatte EUGobAr_voiattf EUGobAr_voiattg EUGobAr_voiatth EUGobAr_voiatti
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceAttackBuilding
  Sounds = EUGobAr_voiatba EUGobAr_voiatbb EUGobAr_voiatbc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateAttackBuilding
  Sounds = EUGobAr_voiatba EUGobAr_voiatbb EUGobAr_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceAttackCharge
  Sounds = EUGobAr_voiatca EUGobAr_voiatcb EUGobAr_voiatcc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateAttackCharge
  Sounds = EUGobAr_voiatca EUGobAr_voiatcb EUGobAr_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceCaptureBuilding
  Sounds = EUGobAr_voicapa EUGobAr_voicapb EUGobAr_voicapc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceDie
  Sounds = EUGobAr_voidiea EUGobAr_voidieb EUGobAr_voidiec EUGobAr_voidied EUGobAr_voidiee EUGobAr_voidief EUGobAr_voidieg EUGobAr_voidieh
  Volume = #ADD( UNIT_RESPONSE_VOLUME -20 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceDisengage
  Sounds = EUGobAr_voidisa EUGobAr_voidisb EUGobAr_voidisc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateDisengage
  Sounds = EUGobAr_voidisa EUGobAr_voidisb EUGobAr_voidisc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceFearCower
  Sounds = EUGobAr_voifeca EUGobAr_voifecb EUGobAr_voifecc EUGobAr_voifecd EUGobAr_voifece
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceFearDisperse
  Sounds = EUGobAr_voifeda EUGobAr_voifedb EUGobAr_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceFearDoom
  Sounds = EUGobAr_voifeoa EUGobAr_voifeob EUGobAr_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceFearTrample
  Sounds = EUGobAr_voifeta EUGobAr_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceGuard
  Sounds = EUGobAr_voimova EUGobAr_voimovb EUGobAr_voimovc EUGobAr_voimovd EUGobAr_voimove EUGobAr_voimovf EUGobAr_voimovg EUGobAr_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceMove
  Sounds = EUGobAr_voimova EUGobAr_voimovb EUGobAr_voimovc EUGobAr_voimovd EUGobAr_voimove EUGobAr_voimovf EUGobAr_voimovg EUGobAr_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateMove
  Sounds = EUGobAr_voimova EUGobAr_voimovb EUGobAr_voimovc EUGobAr_voimovd EUGobAr_voimove EUGobAr_voimovf EUGobAr_voimovg EUGobAr_voimovh
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceMoveCamp
  Sounds = EUGobAr_voimoca EUGobAr_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateMoveCamp
  Sounds = EUGobAr_voimoca EUGobAr_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceMoveGarrison
  Sounds = EUGobAr_voigara EUGobAr_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceMoveHighGround
  Sounds = EUGobAr_voimoha EUGobAr_voimohb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateMoveHighGround
  Sounds = EUGobAr_voimoha EUGobAr_voimohb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceMoveShip
  Sounds = EUGobAr_voimosa EUGobAr_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceMoveWalls
  Sounds = EUGobAr_voimowa EUGobAr_voimowb EUGobAr_voimowc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateMoveWalls
  Sounds = EUGobAr_voimowa EUGobAr_voimowb EUGobAr_voimowc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceRetreat
  Sounds = EUGobAr_voireta EUGobAr_voiretb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceEnterStateRetreat
  Sounds = EUGobAr_voireta EUGobAr_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinArcherVoiceSelect
  Sounds = EUGobAr_voisela EUGobAr_voiselb EUGobAr_voiselc EUGobAr_voiseld EUGobAr_voisele EUGobAr_voiself
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinArcherVoiceSelectBattle
  Sounds = EUGobAr_voiseba EUGobAr_voisebb EUGobAr_voisebc EUGobAr_voisebd EUGobAr_voisebe EUGobAr_voisebf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound GoblinArcherVoiceSelectMS
  Subsounds = GoblinArcherVoiceSelect WildGoblinArcherFoleySelect
End

;--------------------------------- GoblinBuilder -------------------------------

AudioEvent GoblinBuilderVoiceBuild
  Sounds = ECGoBui_Builda ECGoBui_Buildb ECGoBui_Buildc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceNoBuild
  Sounds = ECGoBui_NoBuilda ECGoBui_NoBuildb ECGoBui_NoBuildc ECGoBui_NoBuildd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCapture
  Sounds = EUOrcLa_voicona EUOrcLa_voiconb EUOrcLa_voiconc EUOrcLa_voicond EUOrcLa_voicone	;from OrcLaborer BFME1
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteCave
  Sounds = ECGoBui_voiccaa ECGoBui_voiccab
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteFissure
  Sounds = ECGoBui_voicfia ECGoBui_voicfib
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteFortress
  Sounds = ECGoBui_voicfoa ECGoBui_voicfob
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteGeneric
  Sounds = ECGoBui_voicgea ECGoBui_voicgeb ECGoBui_voicgec ECGoBui_voicged
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteSpidersNest
  Sounds = ECGoBui_voicspa ECGoBui_voicspb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteTavern
  Sounds = ECGoBui_voictaa ;ECGoBui_voictab
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceCompleteWargSentry
  Sounds = ECGoBui_voicwaa ECGoBui_voicwab
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceFearCower
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceFearDisperse
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf
  Sounds = EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceFearDoom
  Sounds = EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Sounds = EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceFearTrample
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

AudioEvent GoblinBuilderVoiceMove
  Sounds = ECGoBui_voimova ECGoBui_voimovb ECGoBui_voimovc ECGoBui_voimovd
  Sounds = EUOrcLa_voimova EUOrcLa_voimovb EUOrcLa_voimovc EUOrcLa_voimovd EUOrcLa_voimove EUOrcLa_voimovf EUOrcLa_voimovg EUOrcLa_voimovh EUOrcLa_voimovi EUOrcLa_voimovj EUOrcLa_voimovk 
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceMoveCamp
  Sounds = EUOrcLa_voimoca EUOrcLa_voimocb EUOrcLa_voimocc	;from OrcLaborer BFME1
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceMoveGarrison
  Sounds = EUOrcLa_voigara EUOrcLa_voigarb	;from OrcLaborer BFME1
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceMoveShip	;from OrcLaborer BFME1
  Sounds = EUOrcLa_voigara
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceRetreat
  Sounds = EUOrcLa_voireta EUOrcLa_voiretb	;from OrcLaborer BFME1
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceSelect
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceSelectBattle
  Sounds = EUOrcLa_voisebd:1500	;from OrcLaborer BFME1
  Sounds = EUOrcLa_voirepe:1500	;from OrcLaborer BFME1
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  ;Sounds = EUPorGe_voisela EUPorGe_voiselb EUPorGe_voiselc EUPorGe_voiseld
  Volume = UNIT_RESPONSE_VOLUME
  MinVolume = UNIT_RESPONSE_MINVOLUME
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinBuilderVoiceSelectIdle
  Sounds = EUOrcLa_voifera EUOrcLa_voiferb EUOrcLa_voiferc
  Sounds = ECGoBui_voicseia ECGoBui_voicseib ECGoBui_voicseic ECGoBui_voicseid
  Sounds = EUOrcLa_voisela EUOrcLa_voiselb EUOrcLa_voiselc EUOrcLa_voiseld EUOrcLa_voisele EUOrcLa_voiself EUOrcLa_voiselg EUOrcLa_voiselh	;from BFME1 OrcLaborer
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound GoblinBuilderVoiceSelectMS
  Subsounds = GoblinBuilderVoiceSelect WildBuilderFoleySelect
End

;--------------------------------- GoblinKing -------------------------------

AudioEvent GoblinKingVoiceAttack
  Sounds = EUGoKing_voiatta EUGoKing_voiattb EUGoKing_voiattc EUGoKing_voiattd EUGoKing_voiatte EUGoKing_voiattf EUGoKing_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceAttackBuilding
  Sounds = EUGoKing_voiatba EUGoKing_voiatbb EUGoKing_voiatbc EUGoKing_voiatbd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceAttackCharge
  Sounds = EUGoKing_voiatca EUGoKing_voiatcb EUGoKing_voiatcc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceAttackStinger
  Sounds = EUGoKing_voiat2a EUGoKing_voiat2b EUGoKing_voiat2c
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceCaptureBuilding
  Sounds = EUGoKing_voicapa EUGoKing_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceDie
  Sounds = EUGoKing_voidiea EUGoKing_voidieb EUGoKing_voidiec EUGoKing_voidied EUGoKing_voidiee EUGoKing_voidief
  Sounds = EUGoKing_voidieg EUGoKing_voidieh EUGoKing_voidiei EUGoKing_voidiej EUGoKing_voidiek
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinRange = 500
  MaxRange = 1000
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceDisengage
  Sounds = EUGoKing_voidisa EUGoKing_voidisb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceDismount
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceHelpMe
  Sounds = EUGoKing_voihela EUGoKing_voihelb EUGoKing_voihelc EUGoKing_voiheld EUGoKing_voihele
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( HELPME_MINVOLUME 0 )
  Priority = critical
  Type = world shrouded player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMount
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMove
  Sounds = EUGoKing_voimova EUGoKing_voimovb EUGoKing_voimovc EUGoKing_voimovd EUGoKing_voimove EUGoKing_voimovf EUGoKing_voimovg EUGoKing_voimovh EUGoKing_voimovi
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMoveCamp
  Sounds = EUGoKing_voimoca EUGoKing_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMoveGarrison
  Sounds = EUGoKing_voigara EUGoKing_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMoveMounted
  Sounds = EUGoKing_voimoma EUGoKing_voimomb EUGoKing_voimomc EUGoKing_voimomd
  Sounds = EUGoKing_voimova EUGoKing_voimovb EUGoKing_voimovc EUGoKing_voimovd EUGoKing_voimove EUGoKing_voimovf EUGoKing_voimovg EUGoKing_voimovh EUGoKing_voimovi
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceMoveShip
  Sounds = EUGoKing_voimosa EUGoKing_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceRespawn
  Sounds = EUGoKing_voiresa EUGoKing_voiresb EUGoKing_voiresc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceRetreat
  Sounds = EUGoKing_voireta EUGoKing_voiretb EUGoKing_voiretc EUGoKing_voiretd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceRiseFromTheDeep
  Sounds = EUGoKing_voispea EUGoKing_voispeb EUGoKing_voispec EUGoKing_voisped
  Volume = 100
  ;Delay = 900 1100
  Limit = 2
  Type = world everyone voice
  SubmixSlider = voice
End

Multisound GoblinKingCallFromTheDeepMS
  Subsounds = GoblinKingCallFromTheDeep GoblinKingSpawnFireDrakes GoblinKingVoiceRiseFromTheDeep
End

AudioEvent GoblinKingVoiceSelect
  Sounds =  EUGoKing_voiselb EUGoKing_voiselc EUGoKing_voisele EUGoKing_voiself EUGoKing_voiselg EUGoKing_voiselh ;EUGoKing_voiseld EUGoKing_voisela
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceSelectBattle
  Sounds = EUGoKing_voiseba EUGoKing_voisebb EUGoKing_voisebc EUGoKing_voisebd EUGoKing_voisebe EUGoKing_voisebf EUGoKing_voisebg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceSelectMounted
  Sounds =  EUGoKing_voiselb EUGoKing_voiselc EUGoKing_voiseld EUGoKing_voisele EUGoKing_voiself EUGoKing_voiselg EUGoKing_voiselh ;EUGoKing_voisela
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinKingVoiceSkullTotem								;nothing specifically recorded for this
  Sounds = EUGoKing_voisebc EUGoKing_voisebd EUGoKing_voisebe
  Sounds = EUGoKing_voisele EUGoKing_voiself
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound GoblinKingVoiceDismountMS
	Subsounds = GoblinKingVoiceDismount ScorpionDismountMS UnmountButtonFoley
End

Multisound GoblinKingVoiceMountMS
	Subsounds = GoblinKingVoiceMount ScorpionMountMS UnmountButtonFoley
End

Multisound GoblinKingVoiceMoveMountedMS
  Subsounds = GoblinKingVoiceMoveMounted ScorpionMoveStartFoley
End

Multisound GoblinKingVoiceSelectMountedMS
  Subsounds = GoblinKingVoiceSelectMounted ScorpionSelectFoley
End

Multisound GoblinKingVoiceSelectMS
  Subsounds = GoblinKingVoiceSelect
End

;-------------------------------- GoblinWarrior GoblinFighter ------------------------------------------

AudioEvent GoblinWarriorVoiceAttack
  Sounds = EUGobWa_voiatta EUGobWa_voiattb EUGobWa_voiattc EUGobWa_voiattd EUGobWa_voiatte EUGobWa_voiattf EUGobWa_voiattg EUGobWa_voiatth
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateAttack
  Sounds = EUGobWa_voiatta EUGobWa_voiattb EUGobWa_voiattc EUGobWa_voiattd EUGobWa_voiatte EUGobWa_voiattf EUGobWa_voiattg EUGobWa_voiatth
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceAttackBuilding
  Sounds = EUGobWa_voiatba EUGobWa_voiatbb EUGobWa_voiatbc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateAttackBuilding
  Sounds = EUGobWa_voiatba EUGobWa_voiatbb EUGobWa_voiatbc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceAttackCharge
  Sounds = EUGobWa_voiatca EUGobWa_voiatcb EUGobWa_voiatcc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateAttackCharge
  Sounds = EUGobWa_voiatca EUGobWa_voiatcb EUGobWa_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceCaptureBuilding
  Sounds = EUGobWa_voicapa EUGobWa_voicapb EUGobWa_voicapc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceCheerLoop
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Type = world shrouded everyone voice
  Control = loop
  Delay = 3000 10000
  Limit = 1
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceDisengage
  Sounds = EUGobWa_voidisa EUGobWa_voidisb EUGobWa_voidisc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateDisengage
  Sounds = EUGobWa_voidisa EUGobWa_voidisb EUGobWa_voidisc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceFearCower
  Sounds = EUGobWa_voifeca EUGobWa_voifecb EUGobWa_voifecc EUGobWa_voifecd EUGobWa_voifece EUGobWa_voifecf EUGobWa_voifecg EUGobWa_voifech
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceFearDisperse
  Sounds = EUGobWa_voifeda EUGobWa_voifedb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceFearDoom
  Sounds = EUGobWa_voifeoa EUGobWa_voifeob
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceFearLoop
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Type = world shrouded everyone voice
  Control = loop
  Delay = 3000 10000
  Limit = 1
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceFearTrample
  Sounds = EUGobWa_voifeta EUGobWa_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceGuard
  Sounds = EUGobWa_voimova EUGobWa_voimovb EUGobWa_voimovc EUGobWa_voimovd EUGobWa_voimove EUGobWa_voimovf EUGobWa_voimovg EUGobWa_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceMove
  Sounds = EUGobWa_voimova EUGobWa_voimovb EUGobWa_voimovc EUGobWa_voimovd EUGobWa_voimove EUGobWa_voimovf EUGobWa_voimovg EUGobWa_voimovh
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateMove
  Sounds = EUGobWa_voimova EUGobWa_voimovb EUGobWa_voimovc EUGobWa_voimovd EUGobWa_voimove EUGobWa_voimovf EUGobWa_voimovg EUGobWa_voimovh
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceMoveCamp
  Sounds = EUGobWa_voimoca EUGobWa_voimocb EUGobWa_voimocc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateMoveCamp
  Sounds = EUGobWa_voimoca EUGobWa_voimocb EUGobWa_voimocc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceMoveGarrison
  Sounds = EUGobWa_voigara EUGobWa_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceMoveShip
  Sounds = EUGobWa_voimosa EUGobWa_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceMoveWalls
  Sounds = EUGobWa_voimowa EUGobWa_voimowb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateMoveWalls
  Sounds = EUGobWa_voimowa EUGobWa_voimowb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinFighterVoicePointLoop
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Type = world shrouded everyone voice
  Control = loop
  Delay = 3000 10000
  Limit = 1
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceRetreat
  Sounds = EUGobWa_voireta EUGobWa_voiretb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceEnterStateRetreat
  Sounds = EUGobWa_voireta EUGobWa_voiretb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GoblinWarriorVoiceSelect
  Sounds = EUGobWa_voisela EUGobWa_voiselb EUGobWa_voiselc EUGobWa_voiseld EUGobWa_voisele EUGobWa_voiself
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceSelectBattle
  Sounds = EUGobWa_voiseba EUGobWa_voisebb EUGobWa_voisebc EUGobWa_voisebd EUGobWa_voisebe EUGobWa_voisebf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GoblinWarriorVoiceTauntLoop
  ;Sounds = 
  Volume = #ADD( UNIT_RESPONSE_VOLUME -10 )
  Type = world shrouded everyone voice
  Control = loop
  Delay = 3000 10000
  Limit = 1
  SubmixSlider = voice
End

Multisound GoblinWarriorVoiceSelectMS
  Subsounds = GoblinWarriorVoiceSelect WildGoblinWarriorFoleySelect
End



;--------------------------------- SpiderRider -------------------------------

AudioEvent SpiderRiderVoiceAttack
  Sounds = EUSpiRi_voiatta EUSpiRi_voiattb EUSpiRi_voiattc EUSpiRi_voiattd EUSpiRi_voiatte EUSpiRi_voiattf EUSpiRi_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateAttack
  Sounds = EUSpiRi_voiatta EUSpiRi_voiattb EUSpiRi_voiattc EUSpiRi_voiattd EUSpiRi_voiatte EUSpiRi_voiattf EUSpiRi_voiattg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceAttackBuilding
  Sounds = EUSpiRi_voiatba EUSpiRi_voiatbb EUSpiRi_voiatbc EUSpiRi_voiatbd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateAttackBuilding
  Sounds = EUSpiRi_voiatba EUSpiRi_voiatbb EUSpiRi_voiatbc EUSpiRi_voiatbd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceAttackCharge
  Sounds = EUSpiRi_voiatca EUSpiRi_voiatcb EUSpiRi_voiatcc EUSpiRi_voiatcd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateAttackCharge
  Sounds = EUSpiRi_voiatca EUSpiRi_voiatcb EUSpiRi_voiatcc EUSpiRi_voiatcd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceAttackTrampleOwner
  Sounds = EUSpiRi_voiat2a EUSpiRi_voiat2b EUSpiRi_voiat2c
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_PLAY_PERCENT
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceAttackTrampleOther
  Sounds = EUSpiRi_voiat2a EUSpiRi_voiat2b EUSpiRi_voiat2c
  Volume = BATTLE_CHATTER_VOLUME
  MinVolume = BATTLE_CHATTER_MIN_VOLUME
  MaxRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = ATTACK_TRAMPLE_OTHER_PLAY_PERCENT
  Type = world allies enemies voice shrouded
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceCaptureBuilding
  Sounds = EUSpiRi_voicapa EUSpiRi_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceDie
  Sounds = EUSpiRi_voidiea EUSpiRi_voidieb EUSpiRi_voidiec EUSpiRi_voidied EUSpiRi_voidiee EUSpiRi_voidief EUSpiRi_voidieg EUSpiRi_voidieh EUSpiRi_voidiei EUSpiRi_voidiej
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceDisengage
  Sounds = EUSpiRi_voidisa EUSpiRi_voidisb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateDisengage
  Sounds = EUSpiRi_voidisa EUSpiRi_voidisb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceFearCower
  Sounds = EUSpiRi_voifeca EUSpiRi_voifecb EUSpiRi_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceFearDisperse
  Sounds = EUSpiRi_voifeda EUSpiRi_voifedb EUSpiRi_voifedc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceFearDoom
  Sounds = EUSpiRi_voifeoa EUSpiRi_voifeob EUSpiRi_voifeoc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceGuard
  Sounds = EUSpiRi_voimova EUSpiRi_voimovb EUSpiRi_voimovc EUSpiRi_voimovd EUSpiRi_voimove EUSpiRi_voimovf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceMove
  Sounds = EUSpiRi_voimova EUSpiRi_voimovb EUSpiRi_voimovc EUSpiRi_voimovd EUSpiRi_voimove EUSpiRi_voimovf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateMove
  Sounds = EUSpiRi_voimova EUSpiRi_voimovb EUSpiRi_voimovc EUSpiRi_voimovd EUSpiRi_voimove EUSpiRi_voimovf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceMoveCamp
  Sounds = EUSpiRi_voimoca EUSpiRi_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateMoveCamp
  Sounds = EUSpiRi_voimoca EUSpiRi_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceMoveHighGround
  Sounds = EUSpiRi_voimoha EUSpiRi_voimohb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateMoveHighGround
  Sounds = EUSpiRi_voimoha EUSpiRi_voimohb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceMoveShip
  Sounds = EUSpiRi_voimosa EUSpiRi_voimosb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceMoveWalls
  Sounds = EUSpiRi_voimowa EUSpiRi_voimowb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateMoveWalls
  Sounds = EUSpiRi_voimowa EUSpiRi_voimowb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoicePoison
  Sounds = EUSpiRi_voispea EUSpiRi_voispeb EUSpiRi_voispec
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceRetreat
  Sounds = EUSpiRi_voireta EUSpiRi_voiretb EUSpiRi_voiretc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceEnterStateRetreat
  Sounds = EUSpiRi_voireta EUSpiRi_voiretb EUSpiRi_voiretc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent SpiderRiderVoiceSelect
  Sounds = EUSpiRi_voisela EUSpiRi_voiselb EUSpiRi_voiselc EUSpiRi_voiseld EUSpiRi_voisele EUSpiRi_voiself EUSpiRi_voiselg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent SpiderRiderVoiceSelectBattle
  Sounds = EUSpiRi_voiseba EUSpiRi_voisebb EUSpiRi_voisebc EUSpiRi_voisebd EUSpiRi_voisebe EUSpiRi_voisebf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound SpiderRiderVoiceAttackTrampleMS
	Subsounds = SpiderRiderVoiceAttackTrampleOwner SpiderRiderVoiceAttackTrampleOther
End

Multisound SpiderRiderVoiceSelectMS
  Subsounds = SpiderRiderVoiceSelect WildSpiderRiderVoxSelect WildSpiderRiderFoleySelect
End

Multisound SpiderRiderVoiceSelectBattleMS
  Subsounds = SpiderRiderVoiceSelectBattle WildSpiderRiderVoxSelect WildSpiderRiderFoleySelect
End

;------------------------------------------- Spiderling enter state -------------------------------

; Here not SoundEffects.ini so that we can use the BATTLE_CHATTER #defines
AudioEvent WildSpiderlingVoxEnterStateAttack
  Sounds = EUShelo_voiatta EUShelo_voiattb EUShelo_voiattc EUShelo_voiattd EUShelo_voidieb EUShelo_voidied EUShelo_voisela EUShelo_voiselc EUShelo_voiselk
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
  PitchShift = 10 20
End

AudioEvent WildSpiderlingVoxEnterStateHurt
  Sounds = EUShelo_voidiea EUShelo_voidieb EUShelo_voidiec EUShelo_voidied EUShelo_voidiee
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
  VolumeShift = -10
  PitchShift = 10 30
End

AudioEvent WildSpiderlingVoxEnterStateMove
  Sounds = EUShelo_voimova EUShelo_voisela EUShelo_voiselb EUShelo_voiselc EUShelo_voiseld EUShelo_voisele EUShelo_voiself EUShelo_voiselg:500 EUSHelo_voiselh:500 EUSHelo_voiseli:500 EUSHelo_voiselj:500 EUSHelo_voiselk:500 EUSHelo_voisell:500 EUSHelo_voiselm:500
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
  PitchShift = 10 20
End



; ------- Generic Die sounds ------
	;------------ Goblin ------------

Multisound GoblinVoxDieMS
  Control = PLAY_ONE
  Subsounds = GoblinArcherVoiceDie GoblinVoiceDie
End

Multisound SpiderRiderDieMS
  Subsounds = SpiderRiderVoiceDie WildSpiderRiderSpiderVoxDie
End

;--------------------emotes------------------
AudioEvent GoblinVoiceFearCower
  Sounds = EUOrcLa_voifeca EUOrcLa_voifecb EUOrcLa_voifecc EUOrcLa_voifecd EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci 
  Sounds = EUGobAr_voifeca EUGobAr_voifecb EUGobAr_voifecc EUGobAr_voifecd EUGobAr_voifece
  Sounds = EUGobWa_voifeca EUGobWa_voifecb EUGobWa_voifecc EUGobWa_voifecd EUGobWa_voifece EUGobWa_voifecf EUGobWa_voifecg EUGobWa_voifech
  Sounds = EUSpiRi_voifeca EUSpiRi_voifecb EUSpiRi_voifecc
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


AudioEvent GoblinVoiceFearDisperse
  Sounds = EUGobAr_voifeda EUGobAr_voifedb EUGobAr_voifedc
  Sounds = EUOrcLa_voifeda EUOrcLa_voifedb EUOrcLa_voifedc EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf
  Sounds = EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Sounds = EUGobWa_voifeda EUGobWa_voifedb
  Sounds = GUArchg_voifeda GUArchg_voifedb GUArchg_voifedc GUArchg_voifedd GUArchg_voifede GUArchg_voifedf GUArchg_voifedg GUArchg_voifedh GUArchg_voifedi
  Sounds = EUSpiRi_voifeda EUSpiRi_voifedb EUSpiRi_voifedc
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


AudioEvent GoblinVoiceFearDoom
  Sounds = EUGobAr_voifeoa EUGobAr_voifeob EUGobAr_voifeoc
  Sounds = EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Sounds = EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Sounds = EUGobWa_voifeoa EUGobWa_voifeob
  Sounds = EUSpiRi_voifeoa EUSpiRi_voifeob EUSpiRi_voifeoc
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


AudioEvent GoblinVoiceFearTrample
  Sounds = EUGobAr_voifeta EUGobAr_voifetb
  Sounds = EUOrcLa_voifece EUOrcLa_voifecf EUOrcLa_voifecg EUOrcLa_voifech EUOrcLa_voifeci
  Sounds = EUOrcLa_voifedd EUOrcLa_voifede EUOrcLa_voifedf EUOrcLa_voifedg EUOrcLa_voifedh EUOrcLa_voifedi EUOrcLa_voifedj EUOrcLa_voifedk EUOrcLa_voifedl
  Sounds = EUGobWa_voifeta EUGobWa_voifetb
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

;--------------------------------- Golfimbul -------------------------------

AudioEvent GolfimbulVoiceAttack
  Sounds = EUGolf_voiatta EUGolf_voiattb EUGolf_voiattc EUGolf_voiatte EUGolf_voiattg
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateAttack
  Sounds = EUGolf_voiatta EUGolf_voiattb EUGolf_voiattc  EUGolf_voiatte EUGolf_voiattg
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceAttackBuilding
  Sounds = EUGolf_voiatba EUGolf_voiatbb EUGolf_voiatbc EUGolf_voiatbd EUGolf_voiatbe
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateAttackBuilding
  Sounds = EUGolf_voiatba EUGolf_voiatbb EUGolf_voiatbc EUGolf_voiatbd EUGolf_voiatbe
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceAttackCharge
  Sounds = EUGolf_voiatca EUGolf_voiatcc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateAttackCharge
  Sounds = EUGolf_voiatca EUGolf_voiatcc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceAttackFirebomb
  Sounds = EUGolf_voiat2c
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateAttackFirebomb
  Sounds = EUGolf_voiat2c
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceCaptureBuilding
  Sounds = EUGolf_voicapa EUGolf_voicapb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceDie
  Sounds = EUGolf_voidiea EUGolf_voidieb EUGolf_voidiec EUGolf_voidied EUGolf_voidiee EUGolf_voidief
  Sounds = EUGolf_voidieg EUGolf_voidieh EUGolf_voidiei EUGolf_voidiej EUGolf_voidiek
  Volume = #ADD( UNIT_RESPONSE_VOLUME -15 )
  VolumeShift = -20
  PitchShift = -5 5
  Priority = low
  Limit = 3
  Type = world shrouded everyone voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceDisengage
  Sounds = EUGolf_voidisa EUGolf_voidisb EUGolf_voidisc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateDisengage
  Sounds = EUGolf_voidisa EUGolf_voidisb EUGolf_voidisc
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceFearCower
  Sounds = EUGolf_voifeca EUGolf_voifecb EUGolf_voifecc
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceFearDisperse
  Sounds = EUGolf_voifeda EUGolf_voifedb EUGolf_voifedc EUGolf_voifedd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceFearDoom
  Sounds = EUGolf_voifeoa EUGolf_voifeob
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceFearTrample
  Sounds = EUGolf_voifeta EUGolf_voifetb EUGolf_voifetc EUGolf_voifetd
  Volume = BATTLE_CHATTER_VOLUME
  MinRange = BATTLE_CHATTER_RANGE
  Limit = 1
  PlayPercent = FEAR_TRAMPLE_PLAY_PERCENT
  Delay = FEAR_TRAMPLE_MIN_DELAY FEAR_TRAMPLE_MAX_DELAY
  Type = world everyone shrouded
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceMove
  Sounds = EUGolf_voimovb EUGolf_voimovc EUGolf_voimovd EUGolf_voimove EUGolf_voimovf
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateMove
  Sounds = EUGolf_voimovb EUGolf_voimovc EUGolf_voimovd EUGolf_voimove EUGolf_voimovf
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceMoveCamp
  Sounds = EUGolf_voimoca EUGolf_voimocb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateMoveCamp
  Sounds = EUGolf_voimoca EUGolf_voimocb
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceMoveGarrison
  Sounds = EUGolf_voigara EUGolf_voigarb
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceMoveShip
  Sounds = EUGolf_voimosa
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceMoveWalls
  Sounds = EUGolf_voimowa
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateMoveWalls
  Sounds = EUGolf_voimowa
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceRetreat
  Sounds = EUGolf_voireta EUGolf_voiretb EUGolf_voiretc EUGolf_voiretd
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceEnterStateRetreat
  Sounds = EUGolf_voireta EUGolf_voiretb EUGolf_voiretc EUGolf_voiretd
  Limit = 1
  Volume        = BATTLE_CHATTER_VOLUME
  MinVolume     = BATTLE_CHATTER_MIN_VOLUME
  Type          = world allies enemies voice shrouded
  SubmixSlider  = voice
  MaxRange      = BATTLE_CHATTER_RANGE
  PlayPercent   = BATTLE_CHATTER_PLAY_PERCENT
End

AudioEvent GolfimbulVoiceSelect
  Sounds = EUGolf_voisele
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceSelectBattle
  Sounds = EUGolf_voiseba EUGolf_voisebb EUGolf_voisebc EUGolf_voisebd EUGolf_voisebe EUGolf_voisebf 
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

Multisound GolfimbulVoiceSelectMS
  Subsounds = GolfimbulVoiceSelect ;YeomanArcherVoiceSelect2
End

AudioEvent GolfimbulVoiceWeaponSwitchFirebombs						;pickups2
  Sounds = EUGolf_voiwe1b
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
End

AudioEvent GolfimbulVoiceWeaponSwitchSwords							;pickups2
  Sounds = EUGolf_voiwe2b
  Volume = #ADD( UNIT_RESPONSE_VOLUME 0 )
  MinVolume = #ADD( UNIT_RESPONSE_MINVOLUME 0 )
  Priority = high
  Type = world player voice
  SubmixSlider = voice
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
