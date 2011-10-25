/////////////////////////////
// OBJECTCREATIONLIST.INC //
///////////////////////////
//Moria//
////////

;ObjectCreationList OCL_GreatGoblinPoisonMist
;    CreateObject
;        ObjectNames     = GratMistPing
;		Disposition		= ON_GROUND_ALIGNED USE_WATER_SURFACE USE_CLIFF
;		Count			= 1
;		ParticleSystem	= PoisonMist
;    End
;End

;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------

; Tier 1
; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_SpellBookMoriaCaveBats
	CreateObject
		ObjectNames			= WildCaveBats
		Count				= 1
		UseJustBuiltFlag	= Yes
		JustBuiltDuration	= 2000
	End
End

; Tier 3
; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_SpellBookMoriaShelobEgg
	CreateObject
		ObjectNames		= WildShelobSummonEgg //WildShelob
		Count			= 1
		FadeIn					= No //Yes
//		FadeTime				= 1 //3000
		ClearRemovables		= Yes
//		UseJustBuiltFlag	= Yes
//		JustBuiltDuration	= 42 //1500
	End
End

; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_SpellBookMoriaShelob
	CreateObject
		ObjectNames		= WildShelob
		Count			= 1
		FadeIn					= No //Yes
//		FadeTime				= 1 //3000
		ClearRemovables		= Yes
		UseJustBuiltFlag	= Yes
		JustBuiltDuration	= 1500
	End
End

; Tier 4
; ---------------------------------------------------------------------------------------
ObjectCreationList OCL_MoriaStoneGiantsEgg
	CreateObject
		ObjectNames			= MoriaStoneGiantsEgg
		Count				= 1
		FadeIn					= No
		ClearRemovables		= Yes
	End
End

; ---------------------------------------------------------------------------------------
; Create A bunch of Stone Giants out of thin air. 
ObjectCreationList OCL_MoriaStoneGiants
	CreateObject
		ObjectNames = WildMountainGiant_Summoned
		Count = 5
		FadeIn = Yes
		FadeTime = 2000
		IgnoreCommandPointLimit = Yes
		Disposition = SPAWN_AROUND
		DispositionAngle = 72 ;90	;SpawnAround uses this as the arc between guys
		DispositionIntensity = 350 ;200 ; and this for distance from center
        UseJustBuiltFlag = Yes
        StartingBusyTime = 5000
	End
End
