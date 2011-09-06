////////////////////////
// COMMANDBUTTON.INC //
//////////////////////
//Rhun//
///////



CommandButton Command_ToggleFormationEasterling
	Command			= HORDE_TOGGLE_FORMATION	;;Soldier of Rhun
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
;	ButtonImage		= UCFormation_Block UCFormation_Line
	ButtonBorderType	= ACTION 
	TextLabel		= CONTROLBAR:TogglePorcupineFormation CONTROLBAR:TogglePorcupineFormationOff
	DescriptLabel		= CONTROLBAR:ToolTipToggleEasterlingLineToPorcupineFormation CONTROLBAR:ToolTipToggleEasterlingPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	;UnitSpecificSound	= EasterlingVoicePorcupineBegin EasterlingVoicePorcupineEnd
End

;CommandButton Command_SetFormationEasterlingPorcupine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= MordorEasterlingPorcupineHorde
;	ButtonImage             = UCFormation_Porcupine
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:TogglePorcupineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipTogglePorcupineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= UrukWarriorVoiceFormationBlock	;;Easterling Porcupine
;End

;CommandButton Command_SetFormationEasterlingLine
;	Command			= HORDE_SET_FORMATION
;	Options			= OK_FOR_MULTI_SELECT
;	Object			= MordorEasterlingHorde
;	ButtonImage             = UCFormation_Line
;	ButtonBorderType        = ACTION 
;	TextLabel               = CONTROLBAR:ToggleLineFormation
;	DescriptLabel           = CONTROLBAR:ToolTipToggleLineFormation
;	InPalantir		= Yes
;	DoubleClick		= Yes
;;	UnitSpecificSound	= UrukWarriorVoiceFormationLine		;;Easterling Line
;End



CommandButton Command_MordorEasterlingPorcupineFormation
	Command			= HORDE_TOGGLE_FORMATION	;;Tower Guard
	Options			= TOGGLE_IMAGE_ON_FORMATION OK_FOR_MULTI_SELECT
	ButtonImage             = UCCommon_PorcupineFormation UCCommon_PorcupineFormationOff
	ButtonBorderType        = ACTION 
	TextLabel               = CONTROLBAR:TogglePorcupineFormation	CONTROLBAR:ToggleLineFormation
	DescriptLabel           = CONTROLBAR:ToolTipToggleTowerGuardLineToPorcupineFormation	CONTROLBAR:ToolTipToggleTowerGuardPorcupineToLineFormation
	InPalantir		= Yes
	DoubleClick		= Yes
	UnitSpecificSound	= EasterlingVoicePorcupineBegin EasterlingVoicePorcupineEnd
End




