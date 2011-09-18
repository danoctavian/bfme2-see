; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Eva.INC for S.E.E....
; ------------------------------------------------------------------------------ 
; NOTE: These codes are ported from Sûlherokkh's coding in Beta 4.7!


NewEvaEvent RohanArmoryUpgraded_SEE
  Priority             = EVA_UPGRADE_COMPLETE_PRIORITY
  TimeBetweenEventsMS  = EVA_UPGRADE_COMPLETE_TIME_BETWEEN_EVENTS
  ExpirationTimeMS     = EVA_UPGRADE_COMPLETE_EXPIRATION_TIME
  
  SideSound
    Side = Isengard
    Sound = CampOrcUpgradedArmory
  End
  
  SideSound   
    Side = Men
    Sound = CampSoldierUpgradedArmory
  End
End

NewEvaEvent RohanArmoryDraftTechnology_SEE
  Priority             = EVA_UPGRADE_COMPLETE_PRIORITY
  TimeBetweenEventsMS  = EVA_UPGRADE_COMPLETE_TIME_BETWEEN_EVENTS
  ExpirationTimeMS     = EVA_UPGRADE_COMPLETE_EXPIRATION_TIME
  
  SideSound   
    Side = Men
    Sound = PeasantVoiceDraftTechnology_SEE
  End
End

NewEvaEvent LibraryUpgraded_SEE			;GenericBuildingUpgraded
  Priority             = EVA_UPGRADE_COMPLETE_PRIORITY
  TimeBetweenEventsMS  = EVA_UPGRADE_COMPLETE_TIME_BETWEEN_EVENTS
  ExpirationTimeMS     = EVA_UPGRADE_COMPLETE_EXPIRATION_TIME
  
  SideSound
    Side = Men
    Sound = CampSoldierUpgradedBuildingGeneric
  End

  SideSound
	Side = Dwarves
	Sound = DwarfBuilderVoiceCompleteGeneric
  End
End

NewEvaEvent MenBarracksComplete_SEE
  Priority             = EVA_BUILDING_COMPLETE_PRIORITY
  TimeBetweenEventsMS  = EVA_BUILDING_COMPLETE_TIME_BETWEEN_EVENTS
  ExpirationTimeMS     = EVA_BUILDING_COMPLETE_EXPIRATION_TIME
  
  SideSound
    Side = Men
    Sound = MenBuilderVoiceCompleteBarracks
  End
  SideSound
    Side = Dwarves
    Sound = MenBuilderVoiceCompleteBarracks
  End
End

NewEvaEvent DaleBarracksUpgraded_SEE
  Priority             = EVA_UPGRADE_COMPLETE_PRIORITY
  TimeBetweenEventsMS  = EVA_UPGRADE_COMPLETE_TIME_BETWEEN_EVENTS
  ExpirationTimeMS     = EVA_UPGRADE_COMPLETE_EXPIRATION_TIME
  
  SideSound   
    Side = Dwarves
    Sound = CampSoldierUpgradedBarracks ;CampSoldierUpgradedBuildingGeneric
  End
End

//GenericBuildingComplete-Builder   in original EVA.ini


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
NewEvaEvent StructureUnderAttack_SEE
  Priority = 7
  TimeBetweenEventsMS = 300000   ; 300 seconds. Don't play more often than this
  ExpirationTimeMS  = 5000      ; 5 seconds.  If Eva is busy, hold the event this long before giving up
  
  ; List the sound each side should hear when this event occurs
  SideSound
    Side = Mordor
    Sound = CampOrcCampUnderAttack			;BaseUnderAttackHorn
  End

  SideSound
    Side = Isengard
    Sound = CampOrcCampUnderAttack			;BaseUnderAttackHorn
  End

  SideSound
    Side = Wild
    Sound = CampGoblinUnderAttackCamp			;BaseUnderAttackHorn
  End

  SideSound
    Side = Men
    Sound = CampSoldierUnderAttackBase			;BaseUnderAttackHorn
  End


  SideSound
    Side = Elves
    Sound = CampElfUnderAttackCamp			;BaseUnderAttackHorn
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfUnderAttackCamp			;BaseUnderAttackHorn
  End
End

EvaEventForwardReference UnitUnderAttackFromShroudedUnit_SEE

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
NewEvaEvent UnitUnderAttack_SEE
  Priority = 3
  
  ExpirationTimeMS  = EVA_UNIT_UNDER_ATTACK_EXPIRATION_TIME      ;  If Eva is busy, hold the event this long before giving up
  OtherEvaEventsToBlock = UnitUnderAttackFromShroudedUnit_SEE  ; Don't play both UnitUnderAttack and UnitUnderAttackFromShroudedUnit if 
														   ; we are being attacked from both a shrouded and non-shrouded unit
  
  ; NOTE: This should be less than or equal to SecondDamageFarFromFirstTimeoutMS in Objects that use this event
  TimeBetweenEventsMS = 90000   ; 90 seconds. Don't play more often than this

  SideSound
    Side = Mordor
    Sound = CampOrcUnderAttack
  End

  SideSound
    Side = Isengard
    Sound = CampOrcUnderAttack
  End

  SideSound
    Side = Wild
    Sound = CampGoblinUnderAttackUnits
  End

  SideSound
    Side = Men
    Sound = CampSoldierUnderAttack
  End

  SideSound
    Side = Elves
    Sound = CampElfUnderAttackUnits
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfUnderAttackUnits
  End

End

NewEvaEvent UnitUnderAttackFromShroudedUnit_SEE
  Priority = 3
  TimeBetweenEventsMS = 90000   ; 90 seconds. Don't play more often than this
  ExpirationTimeMS  = EVA_UNIT_UNDER_ATTACK_EXPIRATION_TIME      ;  If Eva is busy, hold the event this long before giving up
  OtherEvaEventsToBlock = UnitUnderAttack_SEE   ; Don't play both UnitUnderAttack and UnitUnderAttackFromShroudedUnit if 
										    ; we are being attacked from both a shrouded and non-shrouded unit
  
  SideSound
    Side = Mordor
    Sound = CampOrcUnderAttackArtillery
  End

  SideSound
    Side = Isengard
    Sound = CampOrcUnderAttackArtillery
  End

  SideSound
    Side = Wild
    Sound = CampGoblinUnderAttackArtillery
  End

  SideSound
    Side = Men
    Sound = CampSoldierUnderAttackArtillery
  End

  SideSound
    Side = Elves
    Sound = CampElfUnderAttackArtillery
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfUnderAttackArtillery
  End

End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Special damaged event when I'm not in combat and enemy is stealthed
NewEvaEvent UnitAmbushed_SEE 
  Priority = 4
  TimeBetweenEventsMS = 92000   ; 92 seconds. Slightly longer than UnitUnderAttack. Prefer UnitUnderAttack if given a choice during long battles
  ExpirationTimeMS  = EVA_UNIT_UNDER_ATTACK_EXPIRATION_TIME      ;  If Eva is busy, hold the event this long before giving up
  OtherEvaEventsToBlock = UnitUnderAttack_SEE  UnitUnderAttackFromShroudedUnit_SEE ; This counts as a "damage" event
  
  SideSound
    Side = Mordor
    Sound = CampOrcAmbushed
  End

  SideSound
    Side = Isengard
    Sound = CampOrcAmbushed
  End

  SideSound
    Side = Wild
    Sound = CampGoblinUnderAttackAmbush
  End

  SideSound
    Side = Men
    Sound = CampSoldierAmbushed
  End

  SideSound
    Side = Elves
    Sound = CampElfUnderAttackAmbush
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfUnderAttackAmbush
  End
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Another attack occurs, far away from the place where we played 
; UnitUnderAttack
NewEvaEvent UnitUnderAttackAgain_SEE
  Priority = 3
  ExpirationTimeMS  = #MULTIPLY( EVA_UNIT_UNDER_ATTACK_EXPIRATION_TIME 2 )   ; Extra long because of the way this blocks
  TimeBetweenEventsMS = 90000   ; 90 seconds. Don't play more often than this

  SideSound
    Side = Mordor
    Sound = CampOrcUnderAttackAgain
  End

  SideSound
    Side = Isengard
    Sound = CampOrcUnderAttackAgain
  End

  SideSound
    Side = Wild
    Sound = CampGoblinUnderAttackAgain
  End

  SideSound
    Side = Men
    Sound = CampSoldierUnderAttackAgain
  End

  SideSound
    Side = Elves
    Sound = CampElfUnderAttackAgain
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfUnderAttackAgain
  End
  
End

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
NewEvaEvent GenericEnemyUnitSighted_SEE
  Priority = 3
  TimeBetweenEventsMS = 90000   ; 90 seconds. Don't play more often than this
  ExpirationTimeMS  = 1000      ; 1 second.  If Eva is busy, hold the event this long before giving up
  
  SideSound
    Side = Mordor
    Sound = CampOrcEnemyDiscovered	
  End

  SideSound
    Side = Isengard
    Sound = CampOrcEnemyDiscovered	
  End

  SideSound
    Side = Wild
    Sound = CampGoblinDiscoveredEnemyUnits
  End

  SideSound
    Side = Men
    Sound = CampSoldierEnemyDiscovered
  End

  SideSound
    Side = Elves
    Sound = CampElfDiscoveredEnemyUnits
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfDiscoveredEnemyUnits
  End
End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
NewEvaEvent EnemyCampSighted_SEE
  Priority = 3
  TimeBetweenEventsMS = 300000   ; 300 seconds. Don't play more often than this
  ExpirationTimeMS  = 1000      ; 1 second.  If Eva is busy, hold the event this long before giving up
  
  SideSound
    Side = Mordor
    Sound = CampOrcEnemyCampDiscovered		
  End

  SideSound
    Side = Isengard
    Sound = CampOrcEnemyCampDiscovered		
  End

  SideSound
    Side = Wild
    Sound = CampGoblinDiscoveredEnemyBase
  End

  SideSound
    Side = Men
    Sound = CampSoldierEnemyCampDiscovered	
  End

  SideSound
    Side = Elves
    Sound = CampElfDiscoveredEnemyBase
  End

  SideSound
    Side = Dwarves
    Sound = CampDwarfDiscoveredEnemyBase
  End

End


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
NewEvaEvent UrukHeroCreated_SEE
  Priority				= EVA_HERO_CREATED_PRIORITY
  TimeBetweenEventsMS	= EVA_HERO_CREATED_TIME_BETWEEN_EVENTS   
  ExpirationTimeMS		= EVA_HERO_CREATED_EXPIRATION_TIME     
  CountAsJumpToLocation = No        ; Don't jump to unit-creations. (a) it spams the spacebar too much (b) it's inconsistent between good & evil sides

  SideSound
    Side = Isengard
    Sound = BerserkerVoiceAttackCharge
  End
  SideSound
    Side = Mordor
    Sound = BerserkerVoiceAttackCharge
  End
End
NewEvaEvent UrukHeroDie_SEE
  Priority = 7
  TimeBetweenEventsMS = 30000   ; 30 seconds. Don't play more often than this
  ExpirationTimeMS  = 5000      ; 5 seconds.  If Eva is busy, hold the event this long before giving up
  AlwaysPlayFromHomeBase = Yes  ; Don't want voice coming from dead body
  
  SideSound
    Side = Isengard
    Sound = BerserkerVoiceDie
  End
  SideSound
    Side = Mordor
    Sound = BerserkerVoiceDie
  End
End
