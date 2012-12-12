; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; FXParticleSystem.INC for S.E.E....
; ------------------------------------------------------------------------------ 
; NOTE: These codes are ported from Sûlherokkh's coding in Beta 4.7!

;---------------------- OneRingFX
FXParticleSystem FortressOneRingFX_SEE
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXEclipseBlur.tga
    Lifetime = 40 40
    SystemLifetime = 20
    SortLevel = 1
    BurstCount = 2 2
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color2 = R:255 G:232 B:179 20
    ; Color2 = R:132 G:0 B:3 20
    Color3 = R:0 G:0 B:0 40
  End
  Alpha = DefaultAlpha
  End
  Update = DefaultUpdate
    SizeRate = 5 15
    SizeRateDamping = 0.9 0.95
    AngleZ = -7 7
    AngularRateZ = -0.2 0.2
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End



;---------------------- Sauron
FXParticleSystem SauronAura01
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXCloudNazgul.tga ;EXBlast.tga
    Lifetime = 50 50
    SortLevel = 1
    Size = 25 25
    BurstDelay = 2 2
    BurstCount = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    ; Color2 = R:193 G:0 B:0 5
    Color2 = R:58 G:58 B:58 5
    Color3 = R:0 G:0 B:0 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.25 0.3 15
    Alpha3 = -0.25 0 50
  End
  Update = DefaultUpdate
    SizeRate = 1 4
    SizeRateDamping = 0.88 0.99
    AngleZ = 0 7
    AngularRateZ = 0.05 0.05
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.8
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -1 1
    Y = -1 1
  End
  EmissionVolume = BoxEmissionVolume
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem SauronAura02
  System
    Priority = MEDIUM_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud06HiRes.tga
    Lifetime = 50 50
    SortLevel = 1
    Size = 10 10
    BurstDelay = 1 1
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:255 B:255 0
    ; Color2 = R:193 G:0 B:0 25
    ; Color3 = R:0 G:0 B:0 50
    Color2 = R:100 G:100 B:100 25
    Color3 = R:77 G:77 B:77 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.5 0.75 15
    Alpha3 = -0.25 0 50
  End
  Update = DefaultUpdate
    SizeRate = 2 2
    SizeRateDamping = 0.9 0.95
    AngleZ = 0 7
    AngularRateZ = -0.05 0.05
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.8
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:-3
  End
  Draw = DefaultDraw
  End
End


;---------------------- HorseBodyImpact
FXParticleSystem HorseBodyImpactDustFX_SEE
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 60 90
    SystemLifetime = 3
    SortLevel = 1
    Size = 20 25
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:149 G:134 B:119 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.8 1 5
    Alpha3 = 0 0 90
  End
  Update = DefaultUpdate
    SizeRate = 2 5
    SizeRateDamping = 0.9 0.96
    AngleZ = -3 3
    AngularDamping = 0.95 0.94
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.96
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 0 3
    Y = -0.4 0.4
    Z = -1 2
  End
  EmissionVolume = SphereEmissionVolume
    Radius = 10
  End
  Draw = DefaultDraw
  End
End

;---------------------- HumanBodyImpact
FXParticleSystem HumanBodyImpactDustFX_SEE
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 60 90
    SystemLifetime = 3
    SortLevel = 1
    Size = 5 10
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:149 G:134 B:119 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.8 1 5
    Alpha3 = 0 0 90
  End
  Update = DefaultUpdate
    SizeRate = 2 5
    SizeRateDamping = 0.9 0.96
    AngleZ = -3 3
    AngularDamping = 0.95 0.94
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.9 0.96
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 0 3
    Y = -0.4 0.4
    Z = -1 2
  End
  EmissionVolume = SphereEmissionVolume
    Radius = 5
  End
  Draw = DefaultDraw
  End
End

;---------------------- Boromir Last Stand
FXParticleSystem BoromirLastStand_SEE
  System
    Priority = VERY_LOW_OR_ABOVE		;AREA_EFFECT
    ParticleName = EXGimliAxeSpecial.tga
    Lifetime = 10 10
    SortLevel = 1
    Size = 10 15
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:247 G:51 B:51 0
    Color2 = R:0 G:0 B:0 10
  End
  Update = DefaultUpdate
    SizeRate = 2 5
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularRateZ = 0.01 0.01
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem BoromirLastStandWave_SEE
  System
    Priority = VERY_LOW_OR_ABOVE	;AREA_EFFECT
    ParticleName = EXCloud01.tga ;EXCloudLight.tga
    Lifetime = 5 5
    SortLevel = 1
    Size = 10 10
    BurstCount = 2 2
  End
  Color = DefaultColor
    Color1 = R:249 G:60 B:60 0
    Color2 = R:0 G:0 B:0 5
  End
  Update = DefaultUpdate
    SizeRate = 10 10
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularDamping = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
End


;------------------------------ Faramir War Speech

FXParticleSystem WSglowHorseRearBright
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar2.tga
    Lifetime = 20 20
    SystemLifetime = 700
    Size = 70 70
    BurstDelay = 6 6
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:44 G:44 B:44 5
    Color3 = R:0 G:0 B:0 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.85
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem WSglowHorseBright
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar2.tga
    Lifetime = 20 20
    SystemLifetime = 700
    Size = 75 75
    BurstDelay = 6 6
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:50 G:50 B:50 5
    Color3 = R:0 G:0 B:0 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.85
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem WSglowBright
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXglow.tga
    Lifetime = 20 20
    SystemLifetime = 700
    Size = 50 50
    BurstDelay = 6 6
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:84 G:66 B:10 5
    Color3 = R:0 G:0 B:0 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.8 0.85
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
  End
  Draw = DefaultDraw
  End
End

;------------------------------ Enshrouding MistFX for Rivendell
FXParticleSystem EnshroudingMistRD
  System
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga
    Lifetime = 100 100
    SortLevel = 1
    Size = 15 15
    StartSizeRate = 1 1
    BurstCount = 0 2
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:232 G:247 B:253 0
    Color2 = R:236 G:247 B:253 0
    Color3 = R:235 G:247 B:254 100
    ColorScale = -30 20
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.2 0.3 50
    Alpha3 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 0.5 0.5
    SizeRateDamping = 1.01 1.01
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1.03 1.03
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.1 0.1
    Y = -0.1 0.1
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    Radius = 400
    Length = 6
    Offset = X:0 Y:0 Z:30
  End
  Draw = DefaultDraw
  End
End

;------------------------------ New HL Leadership
FXParticleSystem HighLevelLD
  System
    Priority = VERY_LOW_OR_ABOVE
    Type = GPU_PARTICLE
    ParticleName = EXGandalfStaffFlare.tga
    Lifetime = 20 20
    SystemLifetime = 25
    SortLevel = 1
    Size = 5 5
    BurstCount = 0.85 1.05
    IsEmitAboveGroundOnly = Yes
  End
  Color = DefaultColor
    Color2 = R:236 G:168 B:96 5
    Color3 = R:0 G:0 B:0 15
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 14 ;10
    Alpha2 = 0 0 20
  End
  Update = DefaultUpdate
    SizeRate = 0.1 0.1
    SizeRateDamping = 1 1
    AngleZ = -5 5
    AngularRateZ = -0.03 0.03
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.85 0.85
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -1.2 1.2 ;-1 1
    Y = -1.2 1.2 ;-1 1
    Z = 0.25 0.5
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:-7 Y:0 Z:8
    EndPoint = X:3 Y:0 Z:8
  End
;  EmissionVolume = CylinderEmissionVolume
;   Radius = 7
;    Length = 10
;    Offset = X:0 Y:0 Z:8
;  End
;  Draw = DefaultDraw
;  End
  Draw = GpuDraw
    FramesPerRow = 1
    TotalFrames = 1
    SpeedMultiplier = 1
  End
End

FXParticleSystem TreeBeardAuraShafts
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = exlight01.w3d
    Lifetime = 50 50 ;150 150
    SystemLifetime = 60 ;250
    SortLevel = 1
    Size = 0.1 0.1
    BurstDelay = 5 5
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:198 G:255 B:119 30 ;GREEN
    Color2 = R:0 G:0 B:0 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.5 0.5 10
    Alpha3 = 0 0 50
  End
  Update = RenderObjectUpdate
    StartSizeX = 0.1 0.1
    StartSizeY = 0.05 0.05
    StartSizeZ = 0.05 0.05
    SizeRateX = 0.05 0.05
    SizeRateY = 0.05 0.05
    SizeRateZ = 0.02 0.02
    SizeDampingX = 0.9 0.9
    SizeDampingY = 0.9 0.9
    SizeDampingZ = 0.98 0.98
    AngleZ = -5 5
    Rotation = ROTATE_Z
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 20
  End
  Draw = RenderObjectDraw
  End
End

FXParticleSystem MollockAuraShafts
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = exlight01.w3d
    Lifetime = 50 50 ;150 150
    SystemLifetime = 60 ;250
    SortLevel = 1
    Size = 0.1 0.1
    BurstDelay = 5 5
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:50 B:50 30 ;RED
    Color2 = R:0 G:0 B:0 50
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.5 0.5 10
    Alpha3 = 0 0 50
  End
  Update = RenderObjectUpdate
    StartSizeX = 0.1 0.1
    StartSizeY = 0.05 0.05
    StartSizeZ = 0.05 0.05
    SizeRateX = 0.05 0.05
    SizeRateY = 0.05 0.05
    SizeRateZ = 0.02 0.02
    SizeDampingX = 0.9 0.9
    SizeDampingY = 0.9 0.9
    SizeDampingZ = 0.98 0.98
    AngleZ = -5 5
    Rotation = ROTATE_Z
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 20
  End
  Draw = RenderObjectDraw
  End
End

;------------------------------ PoisonFX
FXParticleSystem GoblinFighterPoison
  System
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXwater_drop_2.tga
    Lifetime = 20 20
    SortLevel = 1
    Size = 1.0 2 ;1.5 4
    BurstDelay = 5 12
    BurstCount = 1 2
  End
  Color = DefaultColor
    Color1 = R:102 G:112 B:101 0
    Color2 = R:74 G:82 B:73 20
    ; Color1 = R:116 G:201 B:114 0
    ; Color2 = R:126 G:203 B:132 10
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 0
    Alpha2 = 1 1 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.8 0.8
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.4 ;-1
    VelocityDamping = 1.2 1.5 ;0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:5 ;X:22 Y:0 Z:0
    EndPoint = X:0 Y:0 Z:7 ;X:26 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem GoblinFighterPoison2
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXGandalfStaffFlare.tga ;EXGassmoke09.tga
    Lifetime = 3 3
    SortLevel = 1
    Size = 1.5 3 ;3 5
    BurstCount = 1 3
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    ; Color1 = R:26 G:64 B:29 1
    Color2 = R:19 G:44 B:20 1 ;R:26 G:64 B:29
    Color3 = R:0 G:0 B:0 3
    ; ColorScale = 2 2
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 0
    Alpha2 = 1 1 3
    ; Alpha1 = 0 0 1
    ; Alpha2 = 1 1 10
    ; Alpha3 = 0 0 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.8 0.8
    AngularRateZ = 2 2
    AngularDamping = 1 1
    Rotation = ROTATE_Z
    AngleXY = 45 45
    AngularRateXY = 0.1 0.3
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.00
    VelocityDamping = 0.2 0.2
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:-0.5 Z:1 ;X:20 Y:-1 Z:-1
    EndPoint = X:0 Y:0.5 Z:7 ;X:26 Y:1 Z:1
  End
  Draw = DefaultDraw
  End
End

;------------------------------ PoisonFX
FXParticleSystem GoblinPikemanPoison
  System
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXwater_drop_2.tga
    Lifetime = 20 20
    SortLevel = 1
    Size = 1.0 2 ;1.5 4
    BurstDelay = 5 12
    BurstCount = 1 2
  End
  Color = DefaultColor
    Color1 = R:102 G:112 B:101 0
    Color2 = R:74 G:82 B:73 20
    ; Color1 = R:116 G:201 B:114 0
    ; Color2 = R:126 G:203 B:132 10
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 0
    Alpha2 = 1 1 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.8 0.8
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.4 ;-1
    VelocityDamping = 1.2 1.5 ;0.9 0.9
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:4 Y:-1 Z:18 ;X:22 Y:0 Z:0
    EndPoint = X:4 Y:-1 Z:20 ;X:26 Y:0 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem GoblinPikemanPoison2
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXGandalfStaffFlare.tga ;EXGassmoke09.tga
    Lifetime = 3 3
    SortLevel = 1
    Size = 1.5 3 ;3 5
    BurstCount = 1 3
    IsParticleUpTowardsEmitter = Yes
  End
  Color = DefaultColor
    ; Color1 = R:26 G:64 B:29 1
    Color2 = R:19 G:44 B:20 1 ;R:26 G:64 B:29
    Color3 = R:0 G:0 B:0 3
    ; ColorScale = 2 2
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 0
    Alpha2 = 1 1 3
    ; Alpha1 = 0 0 1
    ; Alpha2 = 1 1 10
    ; Alpha3 = 0 0 20
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.8 0.8
    AngularRateZ = 2 2
    AngularDamping = 1 1
    Rotation = ROTATE_Z
    AngleXY = 45 45
    AngularRateXY = 0.1 0.3
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.00
    VelocityDamping = 0.2 0.2
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:3 Y:0 Z:16 ;X:20 Y:-1 Z:-1
    EndPoint = X:3 Y:1 Z:22 ;X:26 Y:1 Z:1
  End
  Draw = DefaultDraw
  End
End

;------------------------------ Isengard WizardLightning

FXParticleSystem WizardTowerStormCloudsIG_SEE
  System
    Priority = VERY_LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume2.tga
    Lifetime = 100 100
    SystemLifetime = 100
    SortLevel = 1
    Size = 15 15
    StartSizeRate = 1 1
    BurstDelay = 8 8
    BurstCount = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color1 = R:232 G:247 B:253 0
    Color2 = R:134 G:156 B:168 50
    Color3 = R:235 G:247 B:254 100
    ColorScale = -15 10
  End
  Alpha = DefaultAlpha
    Alpha2 = 1 1 50
    Alpha3 = 0 0 100
  End
  Update = DefaultUpdate
    SizeRate = 0.5 0.5
    SizeRateDamping = 0.98 0.99
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1.03 1.03
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.05 0.05
    Y = -0.05 0.05
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 25
    Length = 3
    Offset = X:0 Y:0 Z:5
  End
  Draw = DefaultDraw
  End
End


FXParticleSystem AshSplatDust_SEE
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXCloud02.tga
    Lifetime = 125 125
    SystemLifetime = 3
    Size = 10 25
    BurstCount = 25 35
    InitialDelay = 120 120
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
    SizeRate = 1 3
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
    Radius = 20
  End
  Draw = DefaultDraw
  End
End


;############## E - Stuff #############
;---------------------------------------------------
FXParticleSystem EvilLevelUpRing_SEE
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = EXLightRing.W3D
    Lifetime = 50 50
    SystemLifetime = 20
    SortLevel = 1
    Size = 0.1 0.1
    BurstDelay = 3 3
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:248 G:97 B:73 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.1 0.2 10
    Alpha3 = -0.2 0 50
  End
  Update = RenderObjectUpdate
    SizeRateX = 0.5 0.5
    SizeRateY = 0.5 0.5
    SizeRateZ = 0.5 1
    SizeDampingX = 0.85 0.85
    SizeDampingY = 0.85 0.85
    SizeDampingZ = 0.85 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
  End
  Draw = RenderObjectDraw
  End
End
FXParticleSystem EvilLevelUpShaftsMotes_SEE
  System
    Priority = HIGH_OR_ABOVE
    ParticleName = EXMultiDot.tga
    Lifetime = 60 60
    SystemLifetime = 10
    SortLevel = 1
    Size = 30 40
    BurstCount = 1 5
  End
  Color = DefaultColor
    Color2 = R:228 G:168 B:168 30
    Color3 = R:0 G:0 B:0 60
    ColorScale = 0 1
  End
  Update = DefaultUpdate
    SizeRateDamping = 1 1
    AngleZ = -7 7
    AngularRateZ = -0.05 0.05
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.95 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    Z = 0.5 2
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:50
  End
  Draw = DefaultDraw
  End
End

;---------------------------------------------------
FXParticleSystem UpgradeBuildingEvilFortressPillar ;_SEE
  System
    Priority = ALWAYS_RENDER
    Shader = W3D_EMISSIVE
    Type = DRAWABLE
    ParticleName = exlight01.w3d
    Lifetime = 90 90
    SystemLifetime = 60
    SortLevel = 1
    Size = 0.1 0.1
    BurstDelay = 1 1
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:165 B:130 0 //R:231 G:255 B:179 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.2 0.2 10
    Alpha3 = 0 0 90
  End
  Update = DefaultUpdate
    SizeRate = 0.03 0.03
    SizeRateDamping = 0.99 0.99
    AngleZ = -500 500
    AngularDamping = 1 1
    Rotation = ROTATE_Z
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 50
  End
  Draw = RenderObjectDraw
  End
End
FXParticleSystem UpgradeBuildingEvilFortressRipples ;_SEE
  System
    Priority = HIGH_OR_ABOVE
    ParticleName = EXLvlUpClutter.TGA
    Lifetime = 75 75
    SystemLifetime = 45
    SortLevel = 1
    Size = 40 40
    BurstDelay = 3 3
    BurstCount = 1 1
    InitialDelay = 15 15
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color2 = R:230 G:54 B:33 15 //R:207 G:235 B:146 15
    Color3 = R:0 G:0 B:0 75
  End
  Update = DefaultUpdate
    SizeRate = 0.4 0.4
    SizeRateDamping = 1 1
    AngleZ = -20 20
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngleXY = 1 1
    AngularRateXY = -1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:100
  End
  Draw = DefaultDraw
  End
End

;---------------------------------------------------
FXParticleSystem EvilLeadership_SEE  ;right now the LargeGroupBonus
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXHPicsubtle.tga
    Lifetime = 80 80 ;40 40
    SystemLifetime = 1
    SortLevel = 1
    BurstDelay = 2 2
    BurstCount = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color2 = R:86 G:34 B:16 40 ;20
    Color3 = R:0 G:0 B:0 80 ;40
  End
  Alpha = DefaultAlpha
  End
  Update = DefaultUpdate
    SizeRate = 2 2 ;5 5
    SizeRateDamping = 0.9 0.95
    AngleZ = 0 7
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem SpellHeal_SEE
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXHPicsubtle.tga
    Lifetime = 20 20 ;40 40
    SystemLifetime = 1
    SortLevel = 1
    BurstDelay = 2 2
    BurstCount = 1 1
    IsGroundAligned = Yes
  End
  Color = DefaultColor
    Color2 = R:16 G:49 B:86 10 ;20
    Color3 = R:0 G:0 B:0 20 ;40
  End
  Alpha = DefaultAlpha
  End
  Update = DefaultUpdate
    SizeRate = 2 2 ;5 5
    SizeRateDamping = 0.9 0.95
    AngleZ = 0 7
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End


; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; New area for EvilMen, added 20080802 by Nazgûl ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤
; ¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤

FXParticleSystem AngDenGlow
  System
    Priority = LOW_OR_ABOVE
    ParticleName = EXGimliAxeSpecial.tga
    Lifetime = 100 100
    SortLevel = 1
    Size = 10 15
    BurstDelay = 10 10
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:29 G:43 B:54 50
    Color3 = R:0 G:0 B:0 100
  End
  Update = DefaultUpdate
    SizeRate = 1 2
    SizeRateDamping = 0.9 0.93
    AngleZ = 0 7
    AngularRateZ = -0.05 0.05
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.98 0.99
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 0 0.5
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:1
    EndPoint = X:0 Y:0 Z:1
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngDenMist
  System
    Priority = ALWAYS_RENDER
    Shader = ALPHA
    ParticleName = EXsnowcloud.tga
    Lifetime = 80 80
    SortLevel = 1
    Size = 5 5
    BurstDelay = 15 20
    BurstCount = 1 1
    IsGroundAligned = Yes
    IsEmitAboveGroundOnly = Yes
  End
  Color = DefaultColor
    Color1 = R:222 G:217 B:253 0
    Color2 = R:234 G:238 B:247 30
    Color3 = R:255 G:255 B:255 80
    ColorScale = -5 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.2 0.3 15
    Alpha3 = 0.2 0.3 30
    Alpha4 = 0 0 80
  End
  Update = DefaultUpdate
    SizeRate = 1.5 2.5
    SizeRateDamping = 0.93 0.96
    AngleZ = -250 250
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    DriftVelocity = X:0 Y:0 Z:-0.1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 6 6
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 5
    Length = 3
    Offset = X:20 Y:-10 Z:-5
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngFordgeDoorOpen1
  System
    Priority = LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud01.tga
    Lifetime = 75 75
    SystemLifetime = 15
    SortLevel = 1
    Size = 30 50
    BurstDelay = 999 999
    BurstCount = 125 125
    InitialDelay = 80 80
  End
  Color = DefaultColor
    Color1 = R:217 G:217 B:217 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.15 0.2 15
    Alpha3 = 0 0 75
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.9 0.95
    AngleZ = 7 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.03
    VelocityDamping = 0.75 0.8
    DriftVelocity = X:0.064 Y:0.064 Z:0.08
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = 10 15
    OtherSpeed = 1 1
  End
  EmissionVolume = BoxEmissionVolume
    IsHollow = Yes
    HalfSize = X:4 Y:4 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngFordgeDoorOpen2
  System
    Priority = LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud01.tga
    Lifetime = 75 75
    SystemLifetime = 5
    SortLevel = 1
    Size = 30 50
    BurstDelay = 999 999
    BurstCount = 80 80
    InitialDelay = 80 80
  End
  Color = DefaultColor
    Color1 = R:217 G:217 B:217 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.15 0.2 15
    Alpha3 = 0 0 75
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.8 0.85
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.85 0.95
    DriftVelocity = X:0 Y:0 Z:0.5
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 0 2.5
    Y = 0 2.5
    Z = 0 0.5
  End
  EmissionVolume = BoxEmissionVolume
    IsHollow = Yes
    HalfSize = X:40 Y:40 Z:0
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeSmoke
  System
    Priority = HIGH_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud06HiRes.tga
    Lifetime = 200 200
    SortLevel = 1
    BurstDelay = 3 3
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:210 G:122 B:2 0
    Color2 = R:58 G:58 B:58 60
    Color3 = R:58 G:58 B:58 200
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.3 0.5 10
    Alpha3 = -0.5 0 200
  End
  Update = DefaultUpdate
    SizeRate = 4 5
    SizeRateDamping = 0.85 0.9
    AngleZ = 0 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.95 0.95
    DriftVelocity = X:0 Y:0 Z:0.5
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindMotion = PingPong
    WindStrength = 0.1
    WindAngleChangeMin = 0.149924
    WindAngleChangeMax = 0.449946
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeSmokeV2
  System
    Priority = HIGH_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud06HiRes.tga
    Lifetime = 175 175
    SortLevel = 1
    BurstDelay = 3 3
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:210 G:122 B:2 0
    Color2 = R:58 G:58 B:58 50
    Color3 = R:58 G:58 B:58 175
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.35 0.7 10
    Alpha3 = -0.4 0 175
  End
  Update = DefaultUpdate
    SizeRate = 5 6
    SizeRateDamping = 0.85 0.9
    AngleZ = 0 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.95 0.95
    DriftVelocity = X:0 Y:0 Z:0.8
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindMotion = PingPong
    WindStrength = 0.1
    WindAngleChangeMin = 0.149924
    WindAngleChangeMax = 0.449946
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeSmokeV3
  System
    Priority = HIGH_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXCloud06HiRes.tga
    Lifetime = 150 150
    SortLevel = 1
    BurstDelay = 3 3
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:236 G:136 B:0 0
    Color2 = R:58 G:58 B:58 40
    Color3 = R:58 G:58 B:58 150
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.35 1 5
    Alpha3 = 1 0 150
  End
  Update = DefaultUpdate
    SizeRate = 6 7
    SizeRateDamping = 0.85 0.9
    AngleZ = 0 7
    AngularRateZ = -0.01 0.01
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.95 0.95
    DriftVelocity = X:0 Y:0 Z:0.95
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = PointEmissionVolume
    IsHollow = Yes
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindMotion = PingPong
    WindStrength = 0.1
    WindAngleChangeMin = 0.149924
    WindAngleChangeMax = 0.449946
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeWorksEmbers
  System
    Priority = MEDIUM_OR_ABOVE
    ParticleName = EXEmbersLight.tga
    Lifetime = 100 150
    SortLevel = 1
    Size = 1.2 1.2
    BurstDelay = 40 55
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:255 G:208 B:138 0
    Color2 = R:255 G:190 B:102 50
    Color3 = R:255 G:182 B:83 75
    Color4 = R:0 G:0 B:0 150
  End
  Update = DefaultUpdate
    SizeRate = 3 6
    SizeRateDamping = 0.8 0.9
    AngleZ = 0 1
    AngularRateZ = -0.01 0.01
    AngularDamping = 0.9 0.9
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.01
    VelocityDamping = 0.9 0.99
    DriftVelocity = X:0.01 Y:0.01 Z:0.4
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.05 0.05
    Y = -0.05 0.05
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:5 Y:6 Z:6
    EndPoint = X:6 Y:6 Z:6
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindStrength = 0.5
    WindAngleChangeMin = 0.017453
    WindAngleChangeMax = 0.034907
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeWorksEmbersV2
  System
    Priority = MEDIUM_OR_ABOVE
    ParticleName = EXEmbersLight.tga
    Lifetime = 100 150
    SortLevel = 1
    Size = 1.2 1.2
    BurstDelay = 20 35
    BurstCount = 1 2
  End
  Color = DefaultColor
    Color1 = R:255 G:196 B:106 0
    Color2 = R:255 G:183 B:85 50
    Color3 = R:255 G:208 B:66 85
    Color4 = R:0 G:0 B:0 150
    ColorScale = 0 5
  End
  Update = DefaultUpdate
    SizeRate = 3 6
    SizeRateDamping = 0.8 0.9
    AngleZ = 0 1
    AngularRateZ = -0.01 0.01
    AngularDamping = 0.9 0.9
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.02
    VelocityDamping = 0.9 0.99
    DriftVelocity = X:0.01 Y:0.01 Z:0.4
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.05 0.05
    Y = -0.05 0.05
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:5 Y:6 Z:6
    EndPoint = X:6 Y:6 Z:6
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindStrength = 0.5
    WindAngleChangeMin = 0.017453
    WindAngleChangeMax = 0.034907
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeWorksEmbersV3
  System
    Priority = MEDIUM_OR_ABOVE
    ParticleName = EXEmbersLight.tga
    Lifetime = 80 120
    SortLevel = 1
    Size = 1.2 1.2
    BurstDelay = 8 15
    BurstCount = 2 2
  End
  Color = DefaultColor
    Color1 = R:255 G:193 B:100 0
    Color2 = R:255 G:165 B:74 40
    Color3 = R:254 G:224 B:103 90
    Color4 = R:0 G:0 B:0 120
    ColorScale = -10 10
  End
  Update = DefaultUpdate
    SizeRate = 2 5
    SizeRateDamping = 0.85 0.95
    AngleZ = 0 1
    AngularRateZ = -0.02 0.02
    AngularDamping = 0.9 0.9
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.04
    VelocityDamping = 0.9 0.99
    DriftVelocity = X:0.01 Y:0.01 Z:0.6
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.05 0.05
    Y = -0.05 0.05
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:5 Y:6 Z:6
    EndPoint = X:6 Y:6 Z:6
  End
  Draw = DefaultDraw
  End
  Wind = DefaultWind
    WindStrength = 0.5
    WindAngleChangeMin = 0.017453
    WindAngleChangeMax = 0.034907
    WindPingPongStartAngleMax = 0.785398
    WindPingPongEndAngleMin = 5.49779
    WindPingPongEndAngleMax = 6.28319
  End
End

FXParticleSystem AngForgeWorksFire
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga
    Lifetime = 20 20
    Size = 2 3
    BurstCount = 1 2
  End
  Color = DefaultColor
    Color2 = R:72 G:43 B:30 5
    Color3 = R:116 G:71 B:48 10
    Color4 = R:0 G:0 B:0 20
  End
  Update = DefaultUpdate
    SizeRate = 1 2
    SizeRateDamping = 0.8 0.99
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.4
    VelocityDamping = 0.5 0.5
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = 1 1
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    Radius = 8
    Length = 8
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksFireV2
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga
    Lifetime = 25 25
    Size = 2 3
    BurstCount = 2 3
  End
  Color = DefaultColor
    Color2 = R:73 G:43 B:30 5
    Color3 = R:116 G:71 B:48 10
    Color4 = R:0 G:0 B:0 25
  End
  Update = DefaultUpdate
    SizeRate = 1 2
    SizeRateDamping = 0.8 0.99
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.45
    VelocityDamping = 0.5 0.5
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = 1 1
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    Radius = 8
    Length = 8
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksFireV3
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXFire01.tga
    Lifetime = 25 25
    Size = 2 3
    BurstCount = 3 4
  End
  Color = DefaultColor
    Color2 = R:73 G:43 B:30 5
    Color3 = R:116 G:71 B:48 10
    Color4 = R:0 G:0 B:0 25
  End
  Update = DefaultUpdate
    SizeRate = 1 2
    SizeRateDamping = 0.8 0.99
    AngleZ = 0 7
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.8
    VelocityDamping = 0.5 0.5
    DriftVelocity = X:0 Y:0 Z:0.1
  End
  EmissionVelocity = OutwardEmissionVelocity
    Speed = -3 3
  End
  EmissionVolume = CylinderEmissionVolume
    IsHollow = Yes
    Radius = 8.5
    Length = 8.5
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlow
  System
    Priority = HIGH_OR_ABOVE
    ParticleName = EXGimliAxeSpecial.tga
    Lifetime = 100 100
    SortLevel = 1
    BurstDelay = 20 25
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:169 G:89 B:1 50
    Color3 = R:137 G:117 B:1 70
    Color4 = R:0 G:0 B:0 100
  End
  Update = DefaultUpdate
    SizeRate = 1.5 2
    SizeRateDamping = 0.9 0.93
    AngleZ = 0 7
    AngularRateZ = -0.06 0.06
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.002
    VelocityDamping = 0.98 0.99
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:-2
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlow01
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar2.tga
    Lifetime = 3 3
    SortLevel = 1
    Size = 45 55
    BurstDelay = 1 2
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:217 G:108 B:0 0
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.99 0.99
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:12
    EndPoint = X:0 Y:0 Z:12
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlow01V2
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar2.tga
    Lifetime = 3 3
    SortLevel = 1
    Size = 55 65
    BurstDelay = 1 2
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:210 G:148 B:0 0
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.99 0.99
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:14
    EndPoint = X:0 Y:0 Z:14
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlow01V3
  System
    Priority = ALWAYS_RENDER
    ParticleName = EXLnzFlar2.tga
    Lifetime = 3 3
    SortLevel = 1
    Size = 65 75
    BurstDelay = 1 2
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:159 G:136 B:0 0
  End
  Update = DefaultUpdate
    SizeRateDamping = 0.99 0.99
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  EmissionVelocity = OutwardEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:15
    EndPoint = X:0 Y:0 Z:15
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlowV2
  System
    Priority = HIGH_OR_ABOVE
    ParticleName = EXGimliAxeSpecial.tga
    Lifetime = 100 100
    SortLevel = 1
    BurstDelay = 15 20
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:154 G:82 B:1 50
    Color3 = R:131 G:112 B:1 70
    Color4 = R:0 G:0 B:0 100
  End
  Update = DefaultUpdate
    SizeRate = 1.7 2.3
    SizeRateDamping = 0.9 0.93
    AngleZ = 0 7
    AngularRateZ = -0.08 0.08
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.01
    VelocityDamping = 0.98 0.99
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:-2
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem AngForgeWorksGlowV3
  System
    Priority = HIGH_OR_ABOVE
    ParticleName = EXGimliAxeSpecial.tga
    Lifetime = 90 90
    SortLevel = 1
    BurstDelay = 10 18
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color2 = R:169 G:89 B:1 40
    Color3 = R:137 G:117 B:1 65
    Color4 = R:0 G:0 B:0 90
  End
  Update = DefaultUpdate
    SizeRate = 2 2.7
    SizeRateDamping = 0.9 0.93
    AngleZ = 0 7
    AngularRateZ = -0.1 0.1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = 0.015
    VelocityDamping = 0.98 0.99
  End
  EmissionVelocity = OrthoEmissionVelocity
  End
  EmissionVolume = LineEmissionVolume
    StartPoint = X:0 Y:0 Z:-2
    EndPoint = X:0 Y:0 Z:20
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem ExpAngmarB
  System
    Priority = MEDIUM_OR_ABOVE
    Shader = W3D_ALPHA
    Type = DRAWABLE
    ParticleName = EXSnowChunk.w3d
    Lifetime = 75 75
    SystemLifetime = 4000
    Size = 1 1.5
    BurstDelay = 7 7
    BurstCount = 1 1
    InitialDelay = 75 75
  End
  Color = DefaultColor
    Color1 = R:255 G:170 B:55 0
    Color2 = R:63 G:63 B:63 50
  End
  Alpha = DefaultAlpha
    Alpha1 = 1 1 0
    Alpha2 = 0 0 75
  End
  Update = DefaultUpdate
    SizeRate = -0.025 -0.025
    SizeRateDamping = 1 1
    AngleZ = -500 500
    AngularRateZ = -0.5 0.5
    AngularDamping = 1 1
    Rotation = ROTATE_X
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.25
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -1 1
    Y = -1 1
    Z = 3 5
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 40
    Offset = X:0 Y:0 Z:5
  End
  Draw = RenderObjectDraw
  End
  Wind = DefaultWind
    WindStrength = 1
    WindAngleChangeMin = 0.05
    WindAngleChangeMax = 0.05
    TurbulenceAmplitude = 1
    TurbulenceFrequency = 0.1
  End
End

FXParticleSystem ExpAngmar2B
  System
    Priority = VERY_LOW_OR_ABOVE
    ParticleName = EXEmbersLightAlpha.tga
    Lifetime = 80 80
    SystemLifetime = 4000
    Size = 10 30
    BurstDelay = 8 8
    BurstCount = 1 1
    InitialDelay = 25 25
  End
  Color = DefaultColor
    Color1 = R:34 G:145 B:255 0
    Color2 = R:196 G:204 B:244 3
    Color3 = R:255 G:255 B:255 30
    Color4 = R:0 G:0 B:0 80
  End
  Update = DefaultUpdate
    SizeRate = 0.5 0.7
    SizeRateDamping = 0.95 0.98
    AngleZ = -7 7
    AngularRateZ = -0.05 0.05
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    Gravity = -0.05
    VelocityDamping = 1 1
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = -0.8 0.8
    Y = -0.8 0.8
    Z = 2.5 3.5
  End
  EmissionVolume = CylinderEmissionVolume
    Radius = 35
    Offset = X:0 Y:0 Z:5
  End
  Draw = DefaultDraw
  End
End

FXParticleSystem HordeUpgradeDust_SEE
  System
    Priority = HIGH_OR_ABOVE //LOW_OR_ABOVE
    Shader = ALPHA
    ParticleName = EXsmokeplume.tga //EXsnowcloud02.tga
    Lifetime = 50 50 //150 150
    SystemLifetime = 100 //200 //5000
    SortLevel = 1
    Size = 40 40 //10 10
    BurstCount = 1 1
  End
  Color = DefaultColor
    Color1 = R:162 G:151 B:136 0
  End
  Alpha = DefaultAlpha
    Alpha2 = 0.15 0.35 15
    Alpha3 = 0 0 75
  End
  Update = DefaultUpdate
    SizeRate = 10 15
    SizeRateDamping = 0.8 0.85
    AngleZ = -1 1
    AngularDamping = 1 1
    AngularDampingXY = 1 1
  End
  Physics = DefaultPhysics
    VelocityDamping = 0.85 0.95
    DriftVelocity = X:0 Y:0 Z:0.5
  End
  EmissionVelocity = OrthoEmissionVelocity
    X = 0 0.5
    Y = 0 0.5
    Z = 0 0.5
  End
  EmissionVolume = CylinderEmissionVolume //BoxEmissionVolume
    ;IsHollow = Yes
    ;HalfSize = X:25 Y:50 Z:5  
    Radius = 100 //75						;Changed for SEE!
    Offset = X:0 Y:0 Z:5
  End
  Draw = DefaultDraw
  End
End

