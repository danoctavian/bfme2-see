//////////////////
// SCIENCE.INC //
////////////////
//Moria//
////////

;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------

; Tier 1
Science SCIENCE_MoriaDeepDrums ;Drums of the Deep (War Chant)
  PrerequisiteSciences = SCIENCE_EVIL OR SCIENCE_WILD
  SciencePurchasePointCost = EVIL_RANK_1_COST
  SciencePurchasePointCostMP = 1 ;5
  IsGrantable = Yes
End

Science SCIENCE_MoriaPlunder ;Plunder
  PrerequisiteSciences = SCIENCE_EVIL OR SCIENCE_WILD
  SciencePurchasePointCost = EVIL_RANK_1_COST
  SciencePurchasePointCostMP = 1 ;5
  IsGrantable = Yes
End

Science SCIENCE_MoriaCaveBats ;Cave Bats
  PrerequisiteSciences = SCIENCE_EVIL OR SCIENCE_WILD
  SciencePurchasePointCost = EVIL_RANK_1_COST
  SciencePurchasePointCostMP = 1 ;5
  IsGrantable = Yes
End

; Tier 2
Science SCIENCE_MoriaCallTheHorde ;Call the Horde
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaDeepDrums
  SciencePurchasePointCost = EVIL_RANK_2_COST
  SciencePurchasePointCostMP = 1 ;10
  IsGrantable = Yes
End

Science SCIENCE_MoriaScurry ;Scurry
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaDeepDrums OR SCIENCE_WILD SCIENCE_MoriaPlunder
  SciencePurchasePointCost = EVIL_RANK_2_COST
  SciencePurchasePointCostMP = 1 ;10
  IsGrantable = Yes
End

Science SCIENCE_MoriaUntamedAllegiance ;Untamed Allegiance
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaCaveBats OR SCIENCE_WILD SCIENCE_MoriaPlunder
  SciencePurchasePointCost = EVIL_RANK_2_COST
  SciencePurchasePointCostMP = 1 ;10
  IsGrantable = Yes
End

;WIP!
Science SCIENCE_MoriaDeteriorate ;Deteriorate
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaCaveBats
  SciencePurchasePointCost = EVIL_RANK_2_COST
  SciencePurchasePointCostMP = 1 ;10
  IsGrantable = Yes
End

; Tier 3
Science SCIENCE_MoriaShelob ;Shelob
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaCallTheHorde OR SCIENCE_WILD SCIENCE_MoriaScurry
  SciencePurchasePointCost = EVIL_RANK_3_COST
  SciencePurchasePointCostMP = 1 ;15
  IsGrantable = Yes
End

Science SCIENCE_MoriaDarkness ;Darkness
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaScurry OR SCIENCE_WILD SCIENCE_MoriaUntamedAllegiance
  SciencePurchasePointCost = EVIL_RANK_3_COST
  SciencePurchasePointCostMP = 1 ;15
  IsGrantable = Yes
End

Science SCIENCE_MoriaWatcher ;Watcher in the Water
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaUntamedAllegiance OR SCIENCE_WILD SCIENCE_MoriaDeteriorate
  SciencePurchasePointCost = EVIL_RANK_3_COST
  SciencePurchasePointCostMP = 1 ;15
  IsGrantable = Yes
End

; Tier 4
Science SCIENCE_MoriaStoneGiants ;Stone Giants
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaCallTheHorde OR SCIENCE_WILD SCIENCE_MoriaScurry
  SciencePurchasePointCost = EVIL_RANK_4_COST
  SciencePurchasePointCostMP = 1 ;25
  IsGrantable = Yes
End

;WIP!
Science SCIENCE_MoriaAbyss ;Abyss
  PrerequisiteSciences = SCIENCE_WILD SCIENCE_MoriaScurry OR SCIENCE_WILD SCIENCE_MoriaUntamedAllegiance
  SciencePurchasePointCost = EVIL_RANK_4_COST
  SciencePurchasePointCostMP = 1  ;25
  IsGrantable = Yes
End
