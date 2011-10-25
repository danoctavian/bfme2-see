///////////////////////////
// FXPARTICLESYSTEM.INC //
/////////////////////////
//Moria//
////////

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
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 100 100
    SystemLifetime = 25
    SortLevel = 1
    Size = 100 100 //15 15
    StartSizeRate = 0.2 0.2
    BurstDelay = 3 5
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.3 0.6 50
    Alpha3 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 0.5 0.5
    SizeRateDamping = 1.01 1.01
    AngleZ = 0 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1.03 1.03
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.1 -0.2
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 30
    Length = 10
    Offset = X:20 Y:-20 Z:20
  End
  Draw = DefaultDraw
  End
End


FXParticleSystem DeSummonStoneGiantsSmoke
  System
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 100 100
    SystemLifetime = 25
    SortLevel = 1
    Size = 15 15
    StartSizeRate = 0.2 0.2
    BurstDelay = 3 5
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.3 0.6 50
    Alpha3 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 0.5 0.5
    SizeRateDamping = 1.01 1.01
    AngleZ = 0 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1.03 1.03
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.1 -0.2
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 30
    Length = 10
    Offset = X:20 Y:-20 Z:20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem SummonStoneGiantsSmokeOBSOLETE
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
