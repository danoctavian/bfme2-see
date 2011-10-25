/////////////////
// FXLIST.INC //
///////////////
//Moria//
////////

; ----------------------------------------------
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

;------------------------------------------------------
//FXList FX_MoriaSpellbookStoneGiantsSummon
//  ParticleSystem
//    Name = SummonStoneGiantsSmoke2
//    Offset = X:0.0 Y:0.0 Z:15.0
//  End
//  
//  Sound
//	Name = SarumanLightningMS
//  End
//  
//  Sound
//	Name = SpellEnshroudingMist
//  End
//End

;------------------------------------------------------
FXList FX_MoriaSpellbookStoneGiantsSummon
  ParticleSystem
    Name = SummonStoneGiantsSmoke
    Offset = X:0.0 Y:0.0 Z:15.0
  End
End

;------------------------------------------------------
FXList FX_MoriaSpellbookStoneGiantsDeSummon
  ParticleSystem
    Name = DeSummonStoneGiantsSmoke
    Offset = X:0.0 Y:0.0 Z:15.0
  End
End

