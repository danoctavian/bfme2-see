  ; #include "..\..\..\..\includes\Battlestance_SEE.inc"

;############################################################;Sûlherokhh mod start
;-------------Added for SEE since almost all hordes and heroes use this. Plugged in manually for those who don't
	Behavior = AISpecialPowerUpdate StanceBattle
		CommandButtonName = Command_SetStanceBattle
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEBATTLE
	End

	Behavior = AISpecialPowerUpdate StanceHoldGround
		CommandButtonName = Command_SetStanceHoldGround
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEHOLDGROUND
	End

	Behavior = AISpecialPowerUpdate StanceAggressive
		CommandButtonName = Command_SetStanceAggressive
		SpecialPowerAIType = AI_SPECIAL_POWER_STANCEAGGRESSIVE
	End
;############################################################;Sûlherokhh mod end
