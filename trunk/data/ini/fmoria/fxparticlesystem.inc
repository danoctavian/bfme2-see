; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; FXParticleSystem.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!




;-------------------------------------------------------------------
; SEE DC MORIA SPELLBOOK! - KEEP ORGANIZED!
;-------------------------------------------------------------------
; Tier 2

FXParticleSystem MoriaSpellbookScurry ;OBSOLETE! CAUSES CRASHES!
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXCloudTrailDust.tga ;EXsnowcloud02.tga
    Lifetime = 10 10 ;125 125
    SystemLifetime = 0 ;5
    Size = 1 1 ;10 25
    BurstCount = 10 10 ;25 35
    InitialDelay = 1 1 ;96 96
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
  End
  Alpha = DefaultAlpha
    Alpha1 = 0.5 0.5 1
    Alpha2 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 0.1 0.1 ;2 3.5
    SizeRateDamping = 0.8 0.9
    AngleZ = -1 1
    AngularRateZ = -0.03 0.03
    AngularDamping = 0.9 0.99
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.7 0.8
    DriftVelocity = X:0 Y:0 Z:0.24
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = 12 16
    OtherSpeed = 16 24
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
End

; Tier 4
FXParticleSystem SummonStoneGiantsSmoke
  System
    Priority = LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 50 50
    SystemLifetime = 100
    SortLevel = 1
    Size = 1 1
    BurstCount = 5 5
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0 //R:75 G:70 B:61 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.35 0.35 15
    Alpha3 = 0 0 30
  End
  Update = DefaultUpdate
    SizeRate = 10 20
    SizeRateDamping = 0.7 0.8
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -1 1
    Y = -1 1
    Z = 1 1
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 100
  End
  Draw = DefaultDraw
  End
End


/////
//GAINTS///

FXParticleSystem GiantSplatDust ;from TreebeardSplatDust
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXCloud02.tga
    Lifetime = 500 500 //300 300 //150 150 //125 125
    SystemLifetime = 6 //3
    Size = 10 25
    BurstCount = 25 35
    InitialDelay = 0 0 //8 8
	;IsGroundAligned = Yes	
  End
  Color = DefaultColor
    Color1 = R:123 G:111 B:87 1
    Color2 = R:56 G:56 B:56 0
  End
  Alpha = DefaultAlpha
    Alpha1 = 0.1 0.3 1
    Alpha2 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 3 3 //1 3
    SizeRateDamping = 0.85 0.95
    AngleZ = 0 7
    AngularRateZ = -0.03 0.03
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.75 0.8
    DriftVelocity = X:0 Y:0 Z:0.24
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = 8 12
    OtherSpeed = 2 4
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 40 //20
  End
  Draw = DefaultDraw
  End
End