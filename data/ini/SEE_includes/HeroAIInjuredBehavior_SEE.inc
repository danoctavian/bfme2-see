	
  
  ; #include "..\..\..\..\includes\HeroAIInjuredBehavior_SEE.inc"

;------------------------------------------------------------------------------
; 'Ping' for HeroHomingBeacon. Acts like an ring carrier until just before 
; the fortress walls

;--------------------------------------------------------------------------
	;;; Return Home Behavior
;--------------------------------------------------------------------------
	Behavior = ProductionUpdate ProductionUpdateModuleTag
		GiveNoXP   = Yes  ;disable granting xp when producing units.
	End

	Behavior = ObjectCreationUpgrade MaketheHomingCall
		TriggeredBy = Upgrade_ReallyDamaged_SEE Upgrade_ObjectUnderAIControl //_SEE
		RequiresAllTriggers	= Yes
		Delay = 10.0
		ThingToSpawn = HeroHomingBeacon_SEE ; OK!
		Offset				= X:0.0 Y:0.0 Z:15.0
		FadeInTime				= 10
	End

;--------------------------------------------------------------------------
;--------------------------------------------------------------------------
