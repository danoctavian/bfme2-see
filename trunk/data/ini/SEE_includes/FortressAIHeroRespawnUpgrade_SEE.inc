  
  
  ; #include "..\..\..\includes\FortressAIHeroRespawnUpgrade_SEE.inc"

  Behavior = ProductionUpdate ProductionUpdateModuleTag
    // AI Specific
    ProductionModifier ;This one compensates for the lacking ability of the AI to revive heroes simultaneously.
      RequiredUpgrade = Upgrade_ObjectUnderAIControl_SEE
      TimeMultiplier = 0.25
      HeroRevive = Yes
      ModifierFilter = NONE +HERO
    End
    ProductionModifier ;This one tempers the BrutalAI. It will still purchase and revive heroes at half the costs
      RequiredUpgrade = Upgrade_BrutalAIMultiPlayer Upgrade_BrutalAISinglePlayer
      CostMultiplier = 2.00
      HeroPurchase = Yes	; Instead of an object filter, needs to be explicitly hero-revival-system compatible
      HeroRevive = Yes
      ModifierFilter = NONE +HERO
    End
    // MotW Faction Specific
    ProductionModifier ; An object-local discount.
      RequiredUpgrade = Upgrade_MenFortressBanners 
      CostMultiplier = 0.80
      ModifierFilter = NONE +MenPorter
    End
    ProductionModifier
      RequiredUpgrade = Upgrade_MenFortressBanners 
      CostMultiplier = 0.90
      TimeMultiplier = 0.90
      HeroPurchase = Yes	; Instead of an object filter, needs to be explicitly hero-revival-system compatible
      ModifierFilter = NONE +HERO
    End
    ProductionModifier
      RequiredUpgrade = Upgrade_MenFortressHouseOfHealing
      CostMultiplier = 0.80
      TimeMultiplier = 0.80
      HeroRevive = Yes
      ModifierFilter = NONE +HERO
    End
    // Elven Faction Specific
    ProductionModifier
      RequiredUpgrade = Upgrade_ElvenFortressMysticFountains
      TimeMultiplier = 0.75
      HeroRevive = Yes
      ModifierFilter = NONE +HERO
    End
    // Dwarven Faction Specific
    ProductionModifier ;// An object-local discount.  
      RequiredUpgrade = Upgrade_DwarvenFortressBanners 
      CostMultiplier = 0.80
      ModifierFilter = NONE +DwarvenPorter
    End
    ProductionModifier
      RequiredUpgrade = Upgrade_DwarvenFortressBanners 
      CostMultiplier = 0.90
      TimeMultiplier = 0.90
      HeroPurchase = Yes ;// Instead of an object filter, needs to be explicitly hero-revival-system compatible
      ModifierFilter = NONE +HERO
    End
    // Mordor Faction Specific
    ProductionModifier ;// An object-local discount.  
      RequiredUpgrade = Upgrade_MordorFortressDoomPyres 
      CostMultiplier = 0.80
      ModifierFilter = NONE +MordorPorter
    End
    ProductionModifier
      RequiredUpgrade = Upgrade_MordorFortressDoomPyres 
      CostMultiplier = 0.90
      TimeMultiplier = 0.90
      HeroPurchase = Yes // Instead of an object filter, needs to be explicitly hero-revival-system compatible
      ModifierFilter = NONE +HERO
    End
    // Cheat Specific
    ProductionModifier
      RequiredUpgrade = Upgrade_Fast_Gameplay_SEE 
      CostMultiplier = 1.00
      TimeMultiplier = 0.10
      HeroPurchase = Yes // Instead of an object filter, needs to be explicitly hero-revival-system compatible
      HeroRevive = Yes
      ModifierFilter = NONE +HERO
    End
    
    NumDoorAnimations = 1
    DoorOpeningTime = 3000  ;in mSeconds how long you want doors to be in open state
    DoorWaitOpenTime = 3000  ;in mSeconds time the door stays open, so units can exit
    DoorCloseTime = 3000  ;in mSeconds how long you want doors to be in open state		
  End
  
  // Cheat Specific
  Behavior = SpellRechargeModifierUpgrade ModuleTag_MakeSpellsRefreshFaster
    ; LabelForPalantirString = GUI:SpellBookRefreshReduction
    StartsActive = No
    TriggeredBy = Upgrade_Fast_Gameplay_SEE
    Percentage = -90%
  End
  
  
