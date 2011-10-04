

; ;------------------------------------------------------------------------------
Locomotor InvisiblePingLocomotor_SEE
	Surfaces            = AIR
	TurnTime            = 0
	TurnTimeDamaged     = 0
	TurnThreshold       = 5
	TurnThresholdHS     = 30
	SlowTurnRadius		= 0.0 ;  From a standing starts, 30 foot radius.
	FastTurnRadius		= 0.0 ; Once the catapult gets moving, still uses a 30 foot radius to turn.	
	Acceleration		= 2000  ; Instant accelerate to full speed.
	Braking				= 2000  ; Instant brake from full speed.
	MinTurnSpeed        = 0%
	ZAxisBehavior       = NO_Z_MOTIVE_FORCE
	Appearance          = HOVER
	StickToGround       = Yes
End

; ;------------------------------------------------------------------------------



