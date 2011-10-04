; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; Object.INC for S.E.E....
; ------------------------------------------------------------------------------ 
; NOTE: These codes are ported from Sûlherokkh's coding in Beta 4.7!

//THIS IS WHAT ENABLES THE AI IN SEE!
	InheritableModule
		Behavior = ObjectCreationUpgrade ModuleTag_IamAI  ;ModuleTag_RealFireArrows
		TriggeredBy	= Upgrade_EasyAISinglePlayer Upgrade_EasyAIMultiPlayer Upgrade_MediumAISinglePlayer Upgrade_MediumAIMultiPlayer Upgrade_HardAISinglePlayer Upgrade_HardAIMultiPlayer Upgrade_BrutalAISinglePlayer Upgrade_BrutalAIMultiPlayer			
		Delay			= 500
		GrantUpgrade	= Upgrade_ObjectUnderAIControl
		End	
	End
	
