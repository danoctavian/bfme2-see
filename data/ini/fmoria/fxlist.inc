; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; FXList.INC for MORIA (Wild) faction...
; ------------------------------------------------------------------------------
; NOTE: Keep this organized!

;------------------------------------------------------------------------------ CAVE TROLL HERO
FXList FX_TrollClubHammerDebris
	ParticleSystem
		Name = TrollClubSmashDust //GloinBlastFinalLight
		Offset = X:50.0 Y:0.0 Z:60
		OnlyIfOnLand = Yes
	End
	ParticleSystem
		Name = TrollClubLeafDebris
		Offset = X:36.0 Y:0.0 Z:10.0
		OrientToObject = Yes   
		OnlyIfOnLand = Yes
	End
	ParticleSystem
		Name = TrollClubDustDebris
		Offset = X:36.0 Y:0.0 Z:10.0
		OrientToObject = Yes
		OnlyIfOnLand = Yes
	End	
	ParticleSystem
		Name = GloinShatterShockwave
		Offset = X:50.0 Y:0.0 Z:20.0
	End
	ParticleSystem
		Name = GloinShatterwave
		Offset = X:50.0 Y:0.0 Z:15.0
	End
	ParticleSystem
		Name = GloinShatterwave2
		Offset = X:50.0 Y:0.0 Z:15.0
	End
  
  	ParticleSystem
		Name = ProjectileSplash01
		Offset = X:50.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
	ParticleSystem
		Name = ProjectileSplash02
		Offset = X:50.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End
	ParticleSystem
		Name = ProjectileSplash03
		Offset = X:50.0 Y:0.0 Z:1.0
		OnlyIfOnWater = Yes
	End  
	
	Sound
		Name = GloinShatterHammer
		Name = TrollTreeShake
	End	
  
  DynamicDecal	; A decal that belongs to nobody, but updates internally to fade and tint and such
		DecalName		= EXCracks04
		Size				= 120
		Color			= R:105 G:105 B:105
		Offset			= X:50 Y:00 //X:15
		OpacityStart		= 0
		OpacityFadeTimeOne	= 200
		OpacityPeak			= 220	
		OpacityPeakTime		= 250
		OpacityFadeTimeTwo	= 30000
		OpacityEnd			= 0

		StartingDelay		= 350
		Lifetime		= 64000 //34000
  End
	ViewShake 
		Type = STRONG ; NORMAL and SUBTLE are the next choices
	End
End

;------------------------------------------------------------------------------ SHELOB
FXList FX_ShelobDigSummon

  ParticleSystem
    Name = WyrmRocksDiveHole
    Offset = X:0.0 Y:0.0 Z:-10.0
    OrientToObject = Yes
  End

  ParticleSystem
    Name = ShelobDustCloudDive02
    Offset = X:0.0 Y:0.0 Z:-10.0
   OrientToObject = Yes
  End
  
    DynamicDecal           ; A decal that belongs to nobody, but updates internally to fade and tint and such
                DecalName                   = EXSpiderHole
                Size                              = 40
                Color                             = R:255 G:255 B:255
                Offset			= X:0.0 Y:0
                OpacityStart                  = 0
                OpacityFadeTimeOne     = 100
                OpacityPeak                             = 190
                OpacityPeakTime                      = 10000
                OpacityFadeTimeTwo     = 20000
                OpacityEnd                               = 0
                StartingDelay     = 0
                Lifetime             = 29000
	End
  
  
  
  CameraShakerVolume
    Radius = 500
    Duration_Seconds = 1.5
    Amplitude_Degrees = 0.5
  End
End

; ----------------------------------------------
FXList FX_ShelobDigDesummon

  ParticleSystem
    Name = WyrmRocksDiveHole
    Offset = X:40.0 Y:0.0 Z:-10.0
     OrientToObject = Yes
  End

  ParticleSystem
    Name = ShelobDustCloudDive02
    Offset = X:40.0 Y:0.0 Z:-10.0
    OrientToObject = Yes
  End
  
  ParticleSystem
    Name = ShelobKickDust
    Offset = X:40.0 Y:0.0 Z:-5.0
    OrientToObject = Yes
  End
  
  DynamicDecal           ; A decal that belongs to nobody, but updates internally to fade and tint and such
                DecalName                   = EXSpiderHole
                Size                              = 40
                Color                             = R:255 G:255 B:255
                Offset			= X:40 Y:0
                OpacityStart                  = 0
                OpacityFadeTimeOne     = 100
                OpacityPeak                             = 190
                OpacityPeakTime                      = 10000
                OpacityFadeTimeTwo     = 20000
                OpacityEnd                               = 0
                StartingDelay     = 0
                Lifetime             = 29000
	End
  
  
  
  CameraShakerVolume
    Radius = 500
    Duration_Seconds = 1.5
    Amplitude_Degrees = 0.5
  End
  Sound
	Name = ShelobTunnelDown
  End
End

; ----------------------------------------------
FXList FX_ShelobDigDesummon

  ParticleSystem
    Name = WyrmRocksDiveHole
    Offset = X:40.0 Y:0.0 Z:-10.0
     OrientToObject = Yes
  End

  ParticleSystem
    Name = ShelobDustCloudDive02
    Offset = X:40.0 Y:0.0 Z:-10.0
    OrientToObject = Yes
  End
  
  ParticleSystem
    Name = ShelobKickDust
    Offset = X:40.0 Y:0.0 Z:-5.0
    OrientToObject = Yes
  End
  
  DynamicDecal           ; A decal that belongs to nobody, but updates internally to fade and tint and such
                DecalName                   = EXSpiderHole
                Size                              = 40
                Color                             = R:255 G:255 B:255
                Offset			= X:40 Y:0
                OpacityStart                  = 0
                OpacityFadeTimeOne     = 100
                OpacityPeak                             = 190
                OpacityPeakTime                      = 10000
                OpacityFadeTimeTwo     = 20000
                OpacityEnd                               = 0
                StartingDelay     = 0
                Lifetime             = 29000
	End
  
  
  
  CameraShakerVolume
    Radius = 500
    Duration_Seconds = 1.5
    Amplitude_Degrees = 0.5
  End
  Sound
	Name = ShelobTunnelDown
  End
End







; ----------------------------------------------
FXList FX_ShelobWebbingSmoke
  ParticleSystem
    Name = ShelobWebbingSmoke
    Offset = X:0.0 Y:0.0 Z:-4.0
  End
  ParticleSystem
    Name = ShelobWebbingWebObject
    Offset = X:0.0 Y:0.0 Z:0.0
  End
  Sound
    ; Name = ImpactLegolasHawkStrike
  End
End

; ----------------------------------------------
FXList FX_ShelobWebbingHit_SEE
  DynamicDecal	; A decal that belongs to nobody, but updates internally to fade and tint and such
    DecalName = SCCSpiderlingSummon2
    Size = 75 ; Match radius in SpellBookSummonBalrog (this is square length, and there is radius, so this should be double that one)
    Color = R:255 G:255 B:255
    OpacityStart = 0
    OpacityFadeTimeOne	= 1000
    OpacityPeak = 255
    OpacityPeakTime = 60000
    OpacityFadeTimeTwo = 55000 ;7000
    OpacityEnd = 0
    StartingDelay = 0
    Lifetime = 120000 //60000
  End
End




;------------------------------------------------------
FXList FX_MoriaSpellbookStoneGiantsSummon
  ParticleSystem
    Name = SummonStoneGiantsSmoke
    Offset = X:0.0 Y:0.0 Z:15.0
  End
  
  Sound
	Name = SarumanLightningMS
  End
  
  Sound
	Name = SpellEnshroudingMist
  End
End


FXList FX_WildMountaingiantSplatDust
  ParticleSystem
    Name = GiantSplatDust
    Offset = X:0.0 Y:0.0 Z:0.0 //-18.0
  End
End

FXList FX_WildMountaingiantSplatDustAtBAT_SPINE1
	FXListAtBonePos
		FX = FX_WildMountaingiantSplatDust
		BoneName = BAT_SPINE1
	End
End
