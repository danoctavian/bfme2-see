//----------CHEAT BONUS-----------------
;ModifierList GLOBAL_FastGamePlay_SEE
  //Modifier = MultiPlayBuildingSpeedMult 25% ;MP1:0.1	//Won't work! Have to manually edit speed of structures in "camerasettings"
  //Modifier = M_BASIC_BUILDING_BUILDTIME 25%
;  Modifier = SPEED 100%
;  Modifier = EXPERIENCE 200% //2x (double) speed for XP gain! ;300%
;  Modifier = PRODUCTION 1000% //10x faster production (of units, BC, FB, HA, etc)! Handled by hard coded value now (so building construction will work).
;  Modifier = RECHARGE_TIME 10% //10x faster power recharge!
;  Upgrade = Upgrade_Fast_Gameplay_SEE Delay:100		// give drafted upgrade after specified delay
;  Duration = 3000
;End

;---------- Mordor Hordes -----------------
ModifierList MordorLargeGroupBonus_SEE
  Category = SPELL
  Modifier = DAMAGE_MULT 150%
  Modifier = SPEED 125%
  Duration = 0				// ***NOTE: Duration is controlled by LargeGroupBonusUpdate
  ModelCondition = WAR_CHANT ;EMOTION_CELEBRATING	// *** Added Animation, Sûlherokhh
  FX = FX_InfiniteGenericLeadership_SEE //yayshitface
  EndFX = FX_GenericBuffStop_SEE //whattheshitface?
End
