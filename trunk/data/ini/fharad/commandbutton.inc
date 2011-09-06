////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Harad//
////////


CommandButton Command_HaradrimArcherBarbedArrowAbility
	Command			= SPECIAL_POWER
	SpecialPower		= SpecialAbilityHaradrimArcherBarbedArrow
	Options			= NEED_TARGET_ENEMY_OBJECT NEED_TARGET_NEUTRAL_OBJECT
	ButtonImage		= UCCommon_BarbedArrows
	CursorName		= EvilAbilityObj
	InvalidCursorName	= GenericInvalid
	TextLabel		= CONTROLBAR:BarbedArrows
	DescriptLabel		= CONTROLBAR:ToolTipBarbedArrows
	InPalantir		= Yes	
	ButtonBorderType    	= ACTION
	AutoAbility		= Yes
End

CommandButton Command_ToggleFormationHaradrim
	Command			= HORDE_TOGGLE_FORMATION	;;HaradrimLancer
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage             = UCFormation_Wedge UCFormation_Line
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:ToggleWedgeFormation CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleHaradrimLineToWedgeFormation CONTROLBAR:ToolTipToggleHaradrimWedgeToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound       = HaradrimVoiceWedgeFormation HaradrimVoiceLineFormation
End

;CommandButton Command_SetFormationHaradrimWedge
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= MordorHaradrimHordeWedge
;	ButtonImage             = UCFormation_Wedge
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleWedgeFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleWedgeFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= UrukWarriorVoiceFormationBlock	;haradrim wedge
;End

;CommandButton Command_SetFormationHaradrimLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= MordorHaradrimHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= UrukWarriorVoiceFormationLine		;haradrim line
;End


