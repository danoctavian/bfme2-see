	
  
  ; #include "..\..\..\includes\FortressAICommandsetUpgrades_SEE.inc"

;############################################################;Sûlherokhh mod start
	;Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetIsengard
	;	; TriggeredBy		= Upgrade_EasyAISinglePlayer Upgrade_EasyAIMultiPlayer Upgrade_MediumAISinglePlayer Upgrade_MediumAIMultiPlayer Upgrade_HardAISinglePlayer Upgrade_HardAIMultiPlayer Upgrade_BrutalAISinglePlayer Upgrade_BrutalAIMultiPlayer
	;	TriggeredBy		= Upgrade_ObjectUnderAIControl
	;	ConflictsWith	= Upgrade_MenFaction Upgrade_ElfFaction Upgrade_DwarfFaction Upgrade_MordorFaction Upgrade_WildFaction Upgrade_RhunFaction Upgrade_HaradFaction
	;	CommandSet		= IsengardFortressCommandSetAI_SEE
	;End
	;Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetMordor
	;	TriggeredBy		= Upgrade_ObjectUnderAIControl
	;	ConflictsWith	= Upgrade_MenFaction Upgrade_ElfFaction Upgrade_DwarfFaction Upgrade_IsengardFaction Upgrade_WildFaction Upgrade_RhunFaction Upgrade_HaradFaction
	;	CommandSet		= MordorFortressCommandSetAI_SEE
	;End
	Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetWild
		TriggeredBy		= Upgrade_ObjectUnderAIControl
		ConflictsWith	= Upgrade_MenFaction Upgrade_ElfFaction Upgrade_DwarfFaction Upgrade_MordorFaction Upgrade_IsengardFaction Upgrade_RhunFaction Upgrade_HaradFaction
		CommandSet		= WildFortressCommandSetAI_SEE
	End
	;Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetElven
	;	TriggeredBy		= Upgrade_ObjectUnderAIControl
	;	ConflictsWith	= Upgrade_MenFaction Upgrade_DwarfFaction Upgrade_MordorFaction Upgrade_IsengardFaction Upgrade_WildFaction Upgrade_RhunFaction Upgrade_HaradFaction
	;	CommandSet		= ElvenFortressCommandSetAI_SEE
	;End
	;Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetDwarven
	;	TriggeredBy		= Upgrade_ObjectUnderAIControl
	;	ConflictsWith	= Upgrade_MenFaction Upgrade_ElfFaction Upgrade_MordorFaction Upgrade_IsengardFaction Upgrade_WildFaction Upgrade_RhunFaction Upgrade_HaradFaction
	;	CommandSet		= DwarvenFortressCommandSetAI_SEE
	;End
	;Behavior = CommandSetUpgrade ModuleTag_AIFortressCommandsetMen
	;	TriggeredBy		= Upgrade_ObjectUnderAIControl
	;	ConflictsWith	= Upgrade_ElfFaction Upgrade_DwarfFaction Upgrade_MordorFaction Upgrade_IsengardFaction Upgrade_WildFaction Upgrade_RhunFaction Upgrade_HaradFaction
	;	CommandSet		= MenFortressCommandSetAI_SEE
	;End
