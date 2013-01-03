; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; AttributeModifier.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

//----------CHEAT BONUS----------------- OBSOLETE, using RG's superior debugger! (Naz)
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

; ------------------------------------------------------------------------------ LARGE GROUP BONUS
ModifierList MordorLargeGroupBonus_SEE
  Category 		= SPELL
  Modifier 		= DAMAGE_MULT 150%
  Modifier 		= SPEED 110%
  Duration 		= 30000				; 30 sec! No worky? *** NOTE: Duration is controlled by LargeGroupBonusUpdate (Sûl). No it's not??? (Naz)
  ModelCondition 	= WAR_CHANT 		; Special AnimationState (and sound) in the Horde!
  FX 			= FX_InfiniteGenericLeadership_SEE 
  EndFX 		= FX_GenericBuffStop_SEE
End
ModifierList MordorLargeGroupBonus_SEE_DisableChant ; Hack by Ridder geel ;)
  Category 		= SPELL
  Duration 		= 30000				; Sets when to stop cheering!
  ClearModelCondition 	= WAR_CHANT 	; Stops special AnimationState (and sound) in the Horde!
End

;---------- For AI flyers -----------------
ModifierList GiantBirdVisionBonusAI_SEE
  Category = STRUCTURE
  Modifier = VISION 100%		// Additive. 
  Duration = 0
End

