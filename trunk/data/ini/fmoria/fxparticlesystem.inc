///////////////////////////
// FXPARTICLESYSTEM.INC //
/////////////////////////
//Moria//
////////

FXParticleSystem MoriaSpellbookScurry
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

