-- define lua functions 
function NoOp(self, source)
end


function kill(self) -- Kill unit self.
	ExecuteAction("NAMED_KILL", self);
end

function RadiatePhialFear( self )
	ObjectBroadcastEventToEnemies( self, "BeAfraidOfPhial", 75 )
end

function RadiateUncontrollableFear( self )
	ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 350 )
end

function RadiateGateDamageFear(self)
	ObjectBroadcastEventToAllies(self, "BeAfraidOfGateDamaged", 200)
end

function RadiateBalrogFear(self)
	ObjectBroadcastEventToEnemies(self, "BeAfraidOfBalrog", 180)
end

function OnMumakilCreated(self)
	ObjectHideSubObjectPermanently( self, "Houda", true )
	ObjectHideSubObjectPermanently( self, "Houda01", true )
end

function OnTrollCreated(self)
	ObjectHideSubObjectPermanently( self, "Trunk01", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnCreepTrollCreated(self)
	ObjectHideSubObjectPermanently( self, "Trunk01", true )
	ObjectHideSubObjectPermanently( self, "ROCK", true )
end

function OnCaptureFlagGenericEvent(self,data)
	local str = ObjectCapturingObjectPlayerSide(self)
	if str == nil then
		str = ObjectPlayerSide(self)
	end


	ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
	ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
	ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
	ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
	ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)

	if str == "Isengard" then
		ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", false)
	elseif str == "Mordor" then
		ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", false)
	elseif str == "Men" then
		ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
	elseif str == "Dwarves" then
		ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", false)
	elseif str == "Elves" then
		ObjectHideSubObjectPermanently( self, "FLAG_ELVES", false)
	elseif str == "Wild" then
		ObjectHideSubObjectPermanently( self, "FLAG_WILD", false)
	else
		ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
	end
end

function OnTrollGenericEvent(self,data)

	local str = tostring( data )

	if str == "show_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", false )
	elseif str == "hide_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", true )
	end
end

function OnEntCreated(self)
	--ObjectShowSubObjectPermanently( self, "ROCK", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnTreeBeardCreated(self)
	--ObjectShowSubObjectPermanently( self, "ROCK", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
	ObjectGrantUpgrade( self, "Upgrade_PurchasedRock" )
end

function OnMountainGiantCreated(self)
	--ObjectHideSubObjectPermanently( self, "ROCK", true )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnMountainGiantGenericEvent(self)
	
	local str = tostring( data )

	if str == "show_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", false )
	elseif str == "hide_rock" then
		ObjectHideSubObjectPermanently( self, "ROCK", true )
	end
end

function GoIntoRampage(self)
	ObjectEnterRampageState(self)
		
	--Broadcast fear to surrounding unit(if we actually rampaged)
	if ObjectTestModelCondition(self, "WEAPONSET_RAMPAGE") then
		ObjectBroadcastEventToUnits(self, "BeAfraidOfRampage", 250)
	end
end

function MakeMeAlert(self)
	ObjectEnterAlertState(self)
end

function BeEnraged(self)
	--Broadcast enraged to surrounding units.
	ObjectBroadcastEventToAllies(self, "BeingEnraged", 500)
end

function BecomeEnraged(self)
	ObjectSetEnragedState(self, true)
end

function StopEnraged(self)
	ObjectSetEnragedState(self, false)
end

function BecomeUncontrollablyAfraid(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterUncontrollableCowerState(self, other)
end

function BecomeAfraidOfRampage(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self, other)
end

function BecomeAfraidOfBalrog(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self, other)
end

function RadiateTerror(self, other)
	ObjectBroadcastEventToEnemies(self, "BeTerrified", 180)
end
	
function RadiateTerrorEx(self, other, terrorRange)
	ObjectBroadcastEventToEnemies(self, "BeTerrified", terrorRange)
end
	
function RadiateUncontrollableFear_SEE(self, other, terrorRange)
	ObjectBroadcastEventToEnemies(self, "BeUncontrollablyAfraid", terrorRange)
end

function BecomeTerrified(self, other)
	ObjectEnterRunAwayPanicState(self, other)
end

function BecomeAfraidOfGateDamaged(self, other)
	if not ObjectTestCanSufferFear(self) then
		return
	end

	ObjectEnterCowerState(self,other)
end


function ChantForUnit(self) -- Used by units to broadcast the chant event to their own side.
	ObjectBroadcastEventToAllies(self, "BeginChanting", 9999)
end

function StopChantForUnit(self) -- Used by units to stop the chant event to their own side.
	ObjectBroadcastEventToAllies(self, "StopChanting", 9999)
end

function BeginCheeringForGrond(self)
	ObjectSetChanting(self, true)
end

function StopCheeringForGrond(self)
	ObjectSetChanting(self, false)
end

function OnMordorArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
end

function MordorFighterBecomeUncontrollablyAfraid(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)                 -- Call base function appropriate to many unit types
	
	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "MordorFighterEntFear") 
	end
end

function MordorFighterBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)
	-- BecomeAfraidOfTroll(self,other)                 -- Call base function appropriate to many unit types
	
	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
--		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
--			ObjectPlaySound(self, "MordorFighterEntFear") 
--		end
end

function OnMordorCorsairCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade01", true )
end

function WildInfantryBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")
	BecomeUncontrollablyAfraid(self,other)
end


function ShelobBecomeAfraidOfPhial(self,other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeUncontrollablyAfraid(self,other)
	-- BecomeAfraidOfTroll(self,other)                 -- Call base function appropriate to many unit types
	
	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
--		if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
--			ObjectPlaySound(self, "MordorFighterEntFear") 
--		end
end

function OnInfantryBannerCreated(self)
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
end

function OnCavalryCreated(self)
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
end

function OnGondorFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "Glow1", true )
end

function BecomeAdvancedBannerCarrier_SEE(self)
    -- ObjectGrantUpgrade( self, "Upgrade_BasicTraining_SEE" )
end

function OnAragornCreated(self)
	ObjectHideSubObjectPermanently( self, "PLANE02", true )
end

function OnGondorArcherCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
end

function DragonStrikeDragonCreated(self)
	ObjectForbidPlayerCommands( self, true )
end

function OnLegolasCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow02", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	-- ObjectHideSubObjectPermanently( self, "arrow", true )		-- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
end

function OnRohanArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- yes, it's a typo in the art.
	-- ObjectHideSubObjectPermanently( self, "ArrowNock", true )
	-- ObjectHideSubObjectPermanently( self, "arrow", true )
end

function GondorFighterBecomeAfraid(self, other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	-- An object has a 100% chance to become afraid.
	-- An object has a 66% chance to be feared, 33% chance to run away.
	if GetRandomNumber() <= 0.67 then 
		ObjectEnterFearState(self, other, false) -- become afraid of other.
	else --if GetRandomNumber() > 0.67 then
		ObjectEnterRunAwayPanicState(self, other) -- run away.

	end
	
	if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "GondorSoldierScream")	
	end
	
end


function GondorFighterBecomeAfraidOfGateDamaged(self, other)
	local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

	BecomeAfraidOfGateDamaged(self,other)                 -- Call base function appropriate to many unit types
	
	-- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
	-- BecomeAfraidOfGateDamaged may fail, don't play sound if we didn't enter fear state
	
	if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
		ObjectPlaySound(self, "GondorSoldierScream")	
	end
end

function GondorFighterRecoverFromTerror(self)
	-- Add recovery sound
	ObjectPlaySound(self, "GondorSoldierRecoverFromTerror")
end

function SpyMoving(self, other)
	print(ObjectDescription(self).." spying movement of "..ObjectDescription(other));
end

function GandalfConsiderUsingDefensePower(self, other, delay, amount)
	-- Put up the shield if a big attack is coming and we have time to block it
	if tonumber(delay) > 0.5 then
		if tonumber(amount) >= 220 then
			ObjectDoSpecialPower(self, "SpecialPowerShieldBubble_SEE")
			return
		end
	end
	-- if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 10 then
		-- ObjectDoSpecialPower(self, "SpecialAbilityWizardBlast")
		-- return
	-- end
--	-- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
--	if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
--		ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
--		return
--	end
end


function GandalfTriggerDefensePower_SEE(self, other, delay, amount)
		ObjectDoSpecialPower(self, "SpecialPowerShieldBubble_SEE")
end

function GandalfTriggerWizardBlast(self)
	ObjectCreateAndFireTempWeapon(self, "GandalfWizardBlast")
end

--function SarumanConsiderUsingDefensePower(self, other, delay, amount)
--	-- Put up the shield if a big attack is coming and we have time to block it
--E4	if tonumber(delay) > 1 then
--E4		if tonumber(amount) >= 25 then
--E4			ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
--E4			return
--E4		end
--E4	end
--	
--	-- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
--	if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
--		ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
--		return
--	end
--end

function OnFortressWallHubCreated_SEE(self)
	local num =	GetRandomNumber()
	if num <= 0.33 then 
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel2" )
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel3" )
    ObjectGrantUpgrade( self, "Upgrade_StructureLevel1" )
	elseif num <= 0.66 then 
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel1" )
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel3" )
    ObjectGrantUpgrade( self, "Upgrade_StructureLevel2" )
	else -- if num  > 0.66 then
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel2" )
  	ObjectRemoveUpgrade( self, "Upgrade_StructureLevel1" )
  	ObjectGrantUpgrade( self, "Upgrade_StructureLevel3" )
	end
end

function OnInterludeUpgradeVariation_SEE(self)
	local num =	GetRandomNumber()
	if num <= 0.1 then 
  	ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
    ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
	else -- num > 0.1 then
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
  	ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
	end
end

function InitializeFortressWallGateFunctions(self)
  ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
  ObjectGrantUpgrade( self, "Upgrade_EnemyDistant_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function ActivateSpecialPowerMahudHorn_SEE(self)
	ObjectDoSpecialPower(self, "SpecialAbilityHornOfGondor")
end

function OnRohanEowynCreated_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EowynConditionDisguised_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EowynConditionDisguiseCanceled_SEE" )
	ObjectRemoveUpgrade( self, "Upgrade_EnemyClose_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EnemyDistant_SEE" )
end

function OnEnemyClose_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EnemyDistant_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EnemyClose_SEE" )
end

function OnEnemyDistant_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EnemyClose_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EnemyDistant_SEE" )
end

function OnRohanEowynDisguised_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EowynConditionDisguiseCanceled_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EowynConditionDisguised_SEE" )
	ObjectHideSubObjectPermanently( self, "HAMMER", true )
	ObjectHideSubObjectPermanently( self, "SWORD", false )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", false )
	ObjectHideSubObjectPermanently( self, "Broom", true )
end

function OnRohanEowynDisguiseCanceled_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EowynConditionDisguised_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EowynConditionDisguiseCanceled_SEE" )
end

function OnRohanEowynStealthed_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EowynConditionNotStealthed_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EowynConditionStealthed_SEE" )
end

function OnRohanEowynNotStealthed_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_EowynConditionStealthed_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_EowynConditionNotStealthed_SEE" )
end

function BalrogTriggerBreatheFire(self)
	ObjectCreateAndFireTempWeapon(self, "MordorBalrogBreath")
end

function OnRohirrimCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
end

function OnSummonedRohirrimCreated(self)
	ObjectGrantUpgrade( self, "Upgrade_RohanHeavyArmorForRohirrim" )
	ObjectGrantUpgrade( self, "Upgrade_RohanHorseShield" )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
end

function OnGondorCavalryCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "sshield", true )
end

function OnDwarvenBattleWagonCreated(self)
	ObjectHideSubObjectPermanently( self, "dwarfHearth", true )
	ObjectHideSubObjectPermanently( self, "dwarfHearthFire", true )
	ObjectHideSubObjectPermanently( self, "Banner_L", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnEvilMenBlackRiderCreated(self)
	-- @todo place appropriate functionality here
end

function OnEvilMenBlackRiderJustBuilt_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
	ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
end

function OnEvilMenBlackRiderMounting_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
	ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
end

function OnEvilMenBlackRiderDismounting_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
	ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
end

function OnBerserkerDamaged_SEE(self)
	ObjectDoSpecialPower(self, "SpecialAbilityEowynShieldMaiden")
	-- ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
end

function OnBerserkerReallyDamaged_SEE(self)
	-- ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
end


-- function OnWitchkingTransitionToFellbeast_SEE
  -- ObjectDoSpecialPower(self, "SpecialAbilityToggleMounted")
-- end

-- function OnWitchkingTransitionToDismounted_SEE
  -- ObjectDoSpecialPower(self, "SpecialAbilityToggleMountedFromFellBeast")
-- end

function OnHeroInjured_SEE(self)
	-- ObjectRemoveUpgrade( self, "Upgrade_RemoveBeacon_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_ReallyDamaged_SEE" )
end

function OnHeroHealed_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_ReallyDamaged_SEE" )
	-- ObjectGrantUpgrade( self, "Upgrade_RemoveBeacon_SEE" )
end

function OnWorkersEndangered_SEE(self)
	ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
end

function OnBallistaCreated(self)
	ObjectHideSubObjectPermanently( self, "MinedArrow", true )
end

function OnCatapultCreated(self)
	ObjectHideSubObjectPermanently( self, "PROJECTILEROCK", true )
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
end

function OnTrebuchetCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
end

function OnPorterCreated(self)
	ObjectHideSubObjectPermanently( self, "ARROWS", true )
	ObjectHideSubObjectPermanently( self, "BRAZIER", true )
	ObjectHideSubObjectPermanently( self, "BOWS", true )
	ObjectHideSubObjectPermanently( self, "TREBUCHET_FIRE", true )
	ObjectHideSubObjectPermanently( self, "SWORDS", true )
	ObjectHideSubObjectPermanently( self, "SHIELDS", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
end

function OnPorterCreated_SEE(self)
	ObjectHideSubObjectPermanently( self, "ARROWS", true )
	ObjectHideSubObjectPermanently( self, "BRAZIER", true )
	ObjectHideSubObjectPermanently( self, "BOWS", true )
	ObjectHideSubObjectPermanently( self, "TREBUCHET_FIRE", true )
	ObjectHideSubObjectPermanently( self, "SWORDS", true )
	ObjectHideSubObjectPermanently( self, "SHIELDS", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
	ObjectGrantUpgrade( self, "Upgrade_PorterCommandset1_SEE" )
end

function OnPorterCommandSetSwitch2_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_PorterCommandset1_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_PorterCommandset2_SEE" )
	ObjectHideSubObjectPermanently( self, "SWORDS", true )
	ObjectHideSubObjectPermanently( self, "BANNERS", false )
end

function OnPorterCommandSetSwitch1_SEE(self)
	ObjectRemoveUpgrade( self, "Upgrade_PorterCommandset2_SEE" )
	ObjectGrantUpgrade( self, "Upgrade_PorterCommandset1_SEE" )
	ObjectHideSubObjectPermanently( self, "SWORDS", false )
	ObjectHideSubObjectPermanently( self, "BANNERS", true )
end

function OnEvilPorterCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "ARROW_UPGRADE", true )
	ObjectHideSubObjectPermanently( self, "ARMOR_UPGRADE", true )
	ObjectHideSubObjectPermanently( self, "GOLD", true )
	ObjectHideSubObjectPermanently( self, "SWORD_UPGRADES", true )
end

function OnPeasantCreated(self)
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "SWORD", true )
	ObjectHideSubObjectPermanently( self, "HAMMER", false )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "Broom", true )
end

function OnMordorSauronCreated(self)
	ObjectHideSubObjectPermanently( self, "SHARD01", true )
	ObjectHideSubObjectPermanently( self, "SHARD02", true )
	ObjectHideSubObjectPermanently( self, "SHARD03", true )
	ObjectHideSubObjectPermanently( self, "SHARD04", true )
	ObjectHideSubObjectPermanently( self, "SHARD05", true )
	ObjectHideSubObjectPermanently( self, "SHARD06", true )
	ObjectHideSubObjectPermanently( self, "SHARD07", true )
	ObjectHideSubObjectPermanently( self, "SHARD08", true )
	ObjectHideSubObjectPermanently( self, "SHARD09", true )
	ObjectHideSubObjectPermanently( self, "SHARD10", true )
	ObjectHideSubObjectPermanently( self, "SHARD11", true )
	ObjectHideSubObjectPermanently( self, "SHARD12", true )
	ObjectHideSubObjectPermanently( self, "SHARD13", true )
	ObjectHideSubObjectPermanently( self, "SHARD14", true )
	ObjectHideSubObjectPermanently( self, "SHARD15", true )
	ObjectHideSubObjectPermanently( self, "SHARD16", true )
	ObjectHideSubObjectPermanently( self, "SHARD17", true )
	ObjectHideSubObjectPermanently( self, "SHARD18", true )
	ObjectHideSubObjectPermanently( self, "SHARD19", true )
	ObjectHideSubObjectPermanently( self, "SHARD20", true )
end

function OnElvenWarriorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnIsengardFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )
	ObjectHideSubObjectPermanently( self, "SLDR_02", true )
	ObjectHideSubObjectPermanently( self, "GNLT_04", true )
	ObjectHideSubObjectPermanently( self, "BOOT_01", true )
end

function OnIsengardWildmanCreated(self)
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
end

function OnWildSpiderRiderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
end

function OnCreepSpiderRiderCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	-- define the locals as random numbers
	local bow 			=	GetRandomNumber()
	if bow <= 0.5 then
    ObjectGrantUpgrade( self, "Upgrade_ObjectLevel10" )
	end
end

function OnHaradrimArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObject( self, "ArrowNock", true )
end

function OnIsengardArcherCreated(self)
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "SLDR_02", true )
	ObjectHideSubObjectPermanently( self, "GNLT_04", true )
	ObjectHideSubObjectPermanently( self, "BOOT_01", true )
end

function OnWildGoblinArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnGarrisonableCreated(self)
	ObjectHideSubObjectPermanently( self, "GARRISON01", true )
	ObjectHideSubObjectPermanently( self, "GARRISON02", true )
end
function OnDwarvenGuardianCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Hammer1", true )
end

function CreateAHeroHideEverything(self)
	ObjectHideSubObjectPermanently( self, "SWORD", true )
	ObjectHideSubObjectPermanently( self, "BOW", true )
	ObjectHideSubObjectPermanently( self, "TRUNK01", true )
	ObjectHideSubObjectPermanently( self, "STAFF_LIGHT", true )
	ObjectHideSubObjectPermanently( self, "OBJECT01", true )
	
	ObjectHideSubObjectPermanently( self, "SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_01", true )
	ObjectHideSubObjectPermanently( self, "SPEAR", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_B", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_C", true )
	ObjectHideSubObjectPermanently( self, "SHIELD_D", true )
	ObjectHideSubObjectPermanently( self, "B_SHIELD", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_A", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_B", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_C", true )
	ObjectHideSubObjectPermanently( self, "WEAPON_D", true )
	
	ObjectHideSubObjectPermanently( self, "AXE02", true )

	ObjectHideSubObjectPermanently( self, "AxeWeapon", true )
	ObjectHideSubObjectPermanently( self, "Belthronding", true )
	ObjectHideSubObjectPermanently( self, "Dwarf_Axe01", true )
	ObjectHideSubObjectPermanently( self, "FireBrand", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_SM", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_FX01", true )
	ObjectHideSubObjectPermanently( self, "FireBrand_FX02", true )
	ObjectHideSubObjectPermanently( self, "Gurthang", true )
	ObjectHideSubObjectPermanently( self, "Gurthang_SM", true )
	ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield", true )
	ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield_SM", true )
	ObjectHideSubObjectPermanently( self, "MithlondBow", true )
	ObjectHideSubObjectPermanently( self, "TrollBane", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_SM", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_FX01", true )
	ObjectHideSubObjectPermanently( self, "TrollBane_FX02", true )
	ObjectHideSubObjectPermanently( self, "TrollMace", true )
	ObjectHideSubObjectPermanently( self, "TrollSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword", true )
	ObjectHideSubObjectPermanently( self, "WestronSword_SM", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX2", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX3", true )
	ObjectHideSubObjectPermanently( self, "WizStaff01_FX4", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff02", true )
	ObjectHideSubObjectPermanently( self, "WizStaff02_FX1", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff03", true )
	ObjectHideSubObjectPermanently( self, "WizStaff03_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff03_FX02", true )
	ObjectHideSubObjectPermanently( self, "WizardStaff04", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX01", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX02", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX03", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX04", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX05", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX06", true )
	ObjectHideSubObjectPermanently( self, "WizStaff04_FX07", true )
	ObjectHideSubObjectPermanently( self, "WizardSword", true )
	ObjectHideSubObjectPermanently( self, "CMSword01", true )
	ObjectHideSubObjectPermanently( self, "CMSword02", true )
	ObjectHideSubObjectPermanently( self, "CHEST_00", true )	
	ObjectHideSubObjectPermanently( self, "CHEST_01", true )	
	ObjectHideSubObjectPermanently( self, "CHEST_02", true )	
	ObjectHideSubObjectPermanently( self, "BOOT_00", true )
	ObjectHideSubObjectPermanently( self, "BOOT_01", true )
	ObjectHideSubObjectPermanently( self, "BOOT_02", true )
	ObjectHideSubObjectPermanently( self, "BOOT_03", true )
	ObjectHideSubObjectPermanently( self, "BOOT_04", true )
	ObjectHideSubObjectPermanently( self, "BOOT_05", true )
	ObjectHideSubObjectPermanently( self, "SHLD_00", true )
	ObjectHideSubObjectPermanently( self, "SHLD_01", true )
	ObjectHideSubObjectPermanently( self, "SHLD_02", true )
	ObjectHideSubObjectPermanently( self, "SHLD_03", true )
	ObjectHideSubObjectPermanently( self, "SHLD_04", true )
	ObjectHideSubObjectPermanently( self, "SLDR_00", true )
	ObjectHideSubObjectPermanently( self, "SLDR_01", true )
	ObjectHideSubObjectPermanently( self, "SLDR_02", true )
	ObjectHideSubObjectPermanently( self, "SLDR_03", true )
	ObjectHideSubObjectPermanently( self, "SLDR_04", true )
	ObjectHideSubObjectPermanently( self, "SLDR_05", true )
	ObjectHideSubObjectPermanently( self, "SLDR_06", true )
	ObjectHideSubObjectPermanently( self, "Shield_1OG", true )
	ObjectHideSubObjectPermanently( self, "Shield_2OG", true )
	ObjectHideSubObjectPermanently( self, "HAIR_00", true )
	ObjectHideSubObjectPermanently( self, "HAIR_01", true )
	ObjectHideSubObjectPermanently( self, "HLMT_00", true )
	ObjectHideSubObjectPermanently( self, "HLMT_01", true )
	ObjectHideSubObjectPermanently( self, "HLMT_02", true )
	ObjectHideSubObjectPermanently( self, "HLMT_03", true )
	ObjectHideSubObjectPermanently( self, "HLMT_04", true )
	ObjectHideSubObjectPermanently( self, "HLMT_05", true )
	ObjectHideSubObjectPermanently( self, "HLMT_06", true )
	ObjectHideSubObjectPermanently( self, "HLMT_07", true )
	ObjectHideSubObjectPermanently( self, "GNLT_00", true )
	ObjectHideSubObjectPermanently( self, "GNLT_01", true )
	ObjectHideSubObjectPermanently( self, "GNLT_02", true )
	ObjectHideSubObjectPermanently( self, "GNLT_03", true )
	ObjectHideSubObjectPermanently( self, "GNLT_04", true )
	ObjectHideSubObjectPermanently( self, "GNLT_05", true )
	ObjectHideSubObjectPermanently( self, "SPR_01", true )
	ObjectHideSubObjectPermanently( self, "SWRD_01", true )
	ObjectHideSubObjectPermanently( self, "SWRD_02", true )
	ObjectHideSubObjectPermanently( self, "SWRD_03", true )
	ObjectHideSubObjectPermanently( self, "SWRD_04", true )
	ObjectHideSubObjectPermanently( self, "SWRD_05", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_01", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_02", true )
	ObjectHideSubObjectPermanently( self, "objSLDR_03", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_01", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_02", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_03", true )
	ObjectHideSubObjectPermanently( self, "objHLMT_04", true )	
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_01", true )
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_02", true )
	ObjectHideSubObjectPermanently( self, "Uruk_Sword_03", true )
	ObjectHideSubObjectPermanently( self, "TrollTree", true )
	ObjectHideSubObjectPermanently( self, "TrollHammer", true )
	ObjectHideSubObjectPermanently( self, "CLUB_01", true )
	ObjectHideSubObjectPermanently( self, "CLUB_02", true )
	ObjectHideSubObjectPermanently( self, "CLUB_03", true )
	ObjectHideSubObjectPermanently( self, "HMR_01", true )
	ObjectHideSubObjectPermanently( self, "HMR_02", true )
	ObjectHideSubObjectPermanently( self, "HMR_03", true )
	ObjectHideSubObjectPermanently( self, "AXE_01", true )
	ObjectHideSubObjectPermanently( self, "AXE_02", true )
	ObjectHideSubObjectPermanently( self, "AXE_03", true )
	ObjectHideSubObjectPermanently( self, "BARREL", true )
	ObjectHideSubObjectPermanently( self, "OBJECT02", true )	-- Barrel on the Orc Raider
	ObjectHideSubObjectPermanently( self, "ARROW", true )
	ObjectHideSubObjectPermanently( self, "PLANE02", true )	
end

function OnCreateAHeroFunctions(self)
	CreateAHeroHideEverything(self)
end

function OnEvilShipCreated(self)
	ObjectHideSubObjectPermanently( self, "CAULDRON", true )
	ObjectHideSubObjectPermanently( self, "CAULDRON_FIRE", true )
	ObjectHideSubObjectPermanently( self, "CAULDRON_TOP", true )
	ObjectHideSubObjectPermanently( self, "CROWSNEST", true )
	ObjectHideSubObjectPermanently( self, "FLAG", true )
	ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnGoodShipCreated(self)
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_01", true )
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_02", true )
	ObjectHideSubObjectPermanently( self, "UG_FLAMING_FIRE", true )
	ObjectHideSubObjectPermanently( self, "UG_ARMOR", true )
	ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnShipWrightCreated(self)
	ObjectHideSubObjectPermanently( self, "GoodPart_A", true )
	ObjectHideSubObjectPermanently( self, "GoodPart_B", true )
	ObjectHideSubObjectPermanently( self, "EvilPart_A", true )
	ObjectHideSubObjectPermanently( self, "EvilPart_B", true )
end

function OnDormitoryBuildVariation(self,variation)

	local var = tonumber(variation)

	if var == 1 then
		ObjectSetGeometryActive( self, "VersionOne", true )
		ObjectSetGeometryActive( self, "VersionTwo", false )
	elseif var == 2 then
		ObjectSetGeometryActive( self, "VersionOne", false )
		ObjectSetGeometryActive( self, "VersionTwo", true )
	end

end

function OnFortressCreated(self)
	ObjectHideSubObjectPermanently( self, "DBFBANNER", true )	
	ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnFortressRingStolen_SEE(self)
  -- ObjectRemoveUpgrade( self, "Upgrade_RingHero" )
  -- ObjectRemoveUpgrade( self, "Upgrade_FortressRingHero" )
	ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
  -- ObjectPlaySound(self, "EVA:LocalPlayerLosesRing")
end
function OnFortressRingStolenAftermath_SEE(self)
  ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
end


function OnGateWatcherBuilt(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGateWatchersFear")
end	

-- function NeutralGollum_RingStealerDamaged(self,other)

	-- if ObjectHasUpgrade( other, "Upgrade_RingHero" ) == 0 then
		-- ObjectChangeAllegianceFromNonPlayablePlayer( self, other )
	-- end
	
-- end


function NeutralGollum_RingStealerDamaged(self,other)

	if ObjectHasUpgrade( other, "Upgrade_RingHero" ) == 0 then
  	if ObjectPlayerSide(self) == "Isengard" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	elseif ObjectPlayerSide(self) == "Mordor" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	elseif ObjectPlayerSide(self) == "Men" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	elseif ObjectPlayerSide(self) == "Dwarves" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	elseif ObjectPlayerSide(self) == "Elves" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	elseif ObjectPlayerSide(self) == "Wild" then
  		ObjectChangeAllegianceFromNonPlayablePlayer( self, other, false)
  	else
  		ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
  	end    
    -- ObjectChangeAllegianceFromNonPlayablePlayer( self, other, true)
    ObjectChangeAllegianceFromNonPlayablePlayer( self, other)
	end
	
end  
  
function NeutralGollum_RingStealerSlaughtered(self,other)
	ObjectRemoveUpgrade( other, "Upgrade_RingHero" )
	-- ObjectRemoveUpgrade( other, "Upgrade_FortressRingHero" )
end


function OnNecromancerStatueCreated(self)
	ObjectDoSpecialPower(self, "SpecialAbilityGateWatchersFear")
end	

function IsengardFellbeastCreated(self)
	ObjectHideSubObjectPermanently( self, "NAZGUL_SKIN", true )
end


function OnFrodoDisguised_SEE(self)
  OnMordorOrcFighterCreated(self)
  OnMordorOrcArcherCreated(self)
  OnMordorMorgulOrcsCreated(self)
  OnMoriaGoblinsSwordCreated(self)
  OnMoriaGoblinsSpearCreated(self)
  OnMoriaGoblinsBowCreated(self)
end


function OnMordorOrcFighterCreated(self)

	-- comments:
	-- this function is very long, because of all the different subobjects we have to choose from
	-- the basic order is: hide everything, choose a helmet, choose all other equipment depending on the fact if a helmet is shown or not

	
	-- hide all heads
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD03", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD01", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD03", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD04", true )
	
	-- hide all hair
	ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR01", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HAIR01", true )
	
	-- hide all helmets
	ObjectHideSubObjectPermanently( self, "HELMET_01", true )
	ObjectHideSubObjectPermanently( self, "HELMET_02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_03", true )
	ObjectHideSubObjectPermanently( self, "HELMET_04", true )
	ObjectHideSubObjectPermanently( self, "HELMET_05", true )
	ObjectHideSubObjectPermanently( self, "HELMET_06", true )
	ObjectHideSubObjectPermanently( self, "HELMET_07", true )
	ObjectHideSubObjectPermanently( self, "HELMET_08", true )
	ObjectHideSubObjectPermanently( self, "HELMET_09", true )
	
	--hide all right hand equipments (only weapons)
	ObjectHideSubObjectPermanently( self, "RIGHT_SWORD01", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SWORD02", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SWORD03", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SWORD04", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR01", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR02", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR03", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR04", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_AXE01", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_AXE02", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_AXE03", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_AXE04", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_MACE01", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_MACE02", true )
	ObjectHideSubObjectPermanently( self, "RIGHT_MACE03", true )
	
	--hide all left hand equipments (shields and weapons)
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD01", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD03", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD04", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD05", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SHIELD06", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SWORD01", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SWORD02", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SWORD03", true )
	ObjectHideSubObjectPermanently( self, "LEFT_SWORD04", true )
	ObjectHideSubObjectPermanently( self, "LEFT_AXE01", true )
	ObjectHideSubObjectPermanently( self, "LEFT_AXE02", true )
	ObjectHideSubObjectPermanently( self, "LEFT_AXE03", true )
	
	-- define the locals as random numbers
	local head 			=	GetRandomNumber()
	local helmet 		=	GetRandomNumber()
	local hair 			=	GetRandomNumber()
	local righthand 	=	GetRandomNumber()
	local lefthand 		=	GetRandomNumber()
	
	local hashelmet		= false
	
	
	--//////////////////////////////////////////
	--			HELMET
	--//////////////////////////////////////////
	-- start picking a helmet
	-- this comes first because some heads and hair must have a helmet, some must not
	
	if helmet <= 0.4 then
		hashelmet		= false
	elseif helmet <= 0.466 then
		ObjectHideSubObjectPermanently( self, "HELMET_01", false )
		hashelmet		= true
	elseif helmet <= 0.533 then
		ObjectHideSubObjectPermanently( self, "HELMET_02", false )
		hashelmet		= true
	elseif helmet <= 0.6 then
		ObjectHideSubObjectPermanently( self, "HELMET_03", false )
		hashelmet		= true
	elseif helmet <= 0.666 then
		ObjectHideSubObjectPermanently( self, "HELMET_04", false )
		hashelmet		= true
	elseif helmet <= 0.733 then
		ObjectHideSubObjectPermanently( self, "HELMET_05", false )
		hashelmet		= true
	elseif helmet <= 0.8 then
		ObjectHideSubObjectPermanently( self, "HELMET_06", false )
		hashelmet		= true
	elseif helmet <= 0.866 then
		ObjectHideSubObjectPermanently( self, "HELMET_07", false )
		hashelmet		= true
	elseif helmet <= 0.933 then
		ObjectHideSubObjectPermanently( self, "HELMET_08", false )
		hashelmet		= true
	else
		ObjectHideSubObjectPermanently( self, "HELMET_09", false )
		hashelmet		= true
	end
	
	
	--//////////////////////////////////////////
	--			HEAD
	--//////////////////////////////////////////
	-- set the heads that require a helmet
	if hashelmet == true then
	
		if head <= 0.25 then
			ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD01", false )
		elseif head <= 0.75 then
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD02", false )
		else
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD03", false )
		end
		
	end
	
	-- now set the heads that must not have a helmet
	if hashelmet == false then
	
		if head <= 0.25 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD01", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD02", false )
		elseif head <= 0.75 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD03", false )
		else
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD04", false )
		end
		
	end	
	
	
	--//////////////////////////////////////////
	--			HAIR
	--//////////////////////////////////////////
	
	-- set helmet-hair
	if hashelmet == true then
	
		-- 33% chance of getting helmet-hair
		if hair <= 0.33 then
			ObjectHideSubObjectPermanently( self, "HELMET_HAIR01", false )
		end
	
	end
	
	-- set non-helmet-hair 
	if hashelmet == false then
	
		-- 50% chance of getting non-helmet-hair
		if hair <= 0.25 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR01", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR02", false )
		end
	
	end
	
	
	--//////////////////////////////////////////
	--			RIGHT HAND
	--//////////////////////////////////////////
	-- set the right hand subobject; note: we need one of them, so there's no "empty" possibility
	if righthand <= 0.075 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SWORD01", false )
	elseif righthand <= 0.15 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SWORD02", false )
	elseif righthand <= 0.225 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SWORD03", false )
	elseif righthand <= 0.3 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SWORD04", false )
	elseif righthand <= 0.338 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR01", false )
	elseif righthand <= 0.375 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR02", false )
	elseif righthand <= 0.412 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR03", false )
	elseif righthand <= 0.45 then
		ObjectHideSubObjectPermanently( self, "RIGHT_SPEAR04", false )
	elseif righthand <= 0.525 then
		ObjectHideSubObjectPermanently( self, "RIGHT_AXE01", false )
	elseif righthand <= 0.6 then
		ObjectHideSubObjectPermanently( self, "RIGHT_AXE02", false )
	elseif righthand <= 0.675 then
		ObjectHideSubObjectPermanently( self, "RIGHT_AXE03", false )
	elseif righthand <= 0.75 then
		ObjectHideSubObjectPermanently( self, "RIGHT_AXE04", false )
	elseif righthand <= 0.84 then
		ObjectHideSubObjectPermanently( self, "RIGHT_MACE01", false )
	elseif righthand <= 0.92 then
		ObjectHideSubObjectPermanently( self, "RIGHT_MACE02", false )
	else
		ObjectHideSubObjectPermanently( self, "RIGHT_MACE03", false )
	end
	
	
	--//////////////////////////////////////////
	--			LEFT HAND
	--//////////////////////////////////////////
	-- set the left hand subobject; note: we don't necessarily need one of them, so we can have some unused possibilities
	if lefthand <= 0.1 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD01", false )
	elseif lefthand <= 0.2 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD02", false )
	elseif lefthand <= 0.3 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD03", false )
	elseif lefthand <= 0.4 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD04", false )
	elseif lefthand <= 0.5 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD05", false )
	elseif lefthand <= 0.6 then
		ObjectHideSubObjectPermanently( self, "LEFT_SHIELD06", false )
	elseif lefthand <= 0.63 then
		ObjectHideSubObjectPermanently( self, "LEFT_SWORD01", false )
	elseif lefthand <= 0.66 then
		ObjectHideSubObjectPermanently( self, "LEFT_SWORD02", false )
	elseif lefthand <= 0.69 then
		ObjectHideSubObjectPermanently( self, "LEFT_SWORD03", false )
	elseif lefthand <= 0.71 then
		ObjectHideSubObjectPermanently( self, "LEFT_SWORD04", false )
	elseif lefthand <= 0.74 then
		ObjectHideSubObjectPermanently( self, "LEFT_AXE01", false )
	elseif lefthand <= 0.77 then
		ObjectHideSubObjectPermanently( self, "LEFT_AXE02", false )
	elseif lefthand <= 0.8 then
		ObjectHideSubObjectPermanently( self, "LEFT_AXE03", false )
	else
		-- do nothing
	end
	
end


function OnMorannonArcherCreated(self)

	-- normal:
	ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )

	-- hide all helmets
	ObjectHideSubObjectPermanently( self, "ORCHELM1", true )
	ObjectHideSubObjectPermanently( self, "ORCHELM2", true )
	ObjectHideSubObjectPermanently( self, "ORCHELM3", true )
	
		-- define the locals as random numbers
	local helmet 		=	GetRandomNumber()
	
  if helmet <= 0.33 then
    ObjectHideSubObjectPermanently( self, "ORCHELM1", false )
  elseif helmet <= 0.66 then
    ObjectHideSubObjectPermanently( self, "ORCHELM2", false )
  else
    ObjectHideSubObjectPermanently( self, "ORCHELM3", false )
  end
		
end

function OnMordorOrcArcherCreated(self)

	-- normal:
	ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )

	-- comments:
	-- this is basicly a copy-paste from the orc fighter above, but we have less different weapons

	
	-- hide all heads
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HEAD03", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD01", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD02", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD03", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD04", true )
	
	-- hide all hair
	ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR01", true )
	ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_HAIR01", true )
	
	-- hide all helmets
	ObjectHideSubObjectPermanently( self, "HELMET_01", true )
	ObjectHideSubObjectPermanently( self, "HELMET_02", true )
	ObjectHideSubObjectPermanently( self, "HELMET_03", true )
	ObjectHideSubObjectPermanently( self, "HELMET_04", true )
	ObjectHideSubObjectPermanently( self, "HELMET_05", true )
	ObjectHideSubObjectPermanently( self, "HELMET_06", true )
	ObjectHideSubObjectPermanently( self, "HELMET_07", true )
	ObjectHideSubObjectPermanently( self, "HELMET_08", true )
	ObjectHideSubObjectPermanently( self, "HELMET_09", true )
	
	-- hide all bows
	ObjectHideSubObjectPermanently( self, "BOW_01", true )
	ObjectHideSubObjectPermanently( self, "BOW_02", true )
	ObjectHideSubObjectPermanently( self, "BOW_03", true )
	
	
	
	-- define the locals as random numbers
	local head 			=	GetRandomNumber()
	local helmet 		=	GetRandomNumber()
	local hair 			=	GetRandomNumber()
	local bow 	=	GetRandomNumber()
	
	local hashelmet		= false
	
	
	--//////////////////////////////////////////
	--			HELMET
	--//////////////////////////////////////////
	-- start picking a helmet
	-- this comes first because some heads and hair must have a helmet, some must not
	
	if helmet <= 0.4 then
		hashelmet		= false
	elseif helmet <= 0.466 then
		ObjectHideSubObjectPermanently( self, "HELMET_01", false )
		hashelmet		= true
	elseif helmet <= 0.533 then
		ObjectHideSubObjectPermanently( self, "HELMET_02", false )
		hashelmet		= true
	elseif helmet <= 0.6 then
		ObjectHideSubObjectPermanently( self, "HELMET_03", false )
		hashelmet		= true
	elseif helmet <= 0.666 then
		ObjectHideSubObjectPermanently( self, "HELMET_04", false )
		hashelmet		= true
	elseif helmet <= 0.733 then
		ObjectHideSubObjectPermanently( self, "HELMET_05", false )
		hashelmet		= true
	elseif helmet <= 0.8 then
		ObjectHideSubObjectPermanently( self, "HELMET_06", false )
		hashelmet		= true
	elseif helmet <= 0.866 then
		ObjectHideSubObjectPermanently( self, "HELMET_07", false )
		hashelmet		= true
	elseif helmet <= 0.933 then
		ObjectHideSubObjectPermanently( self, "HELMET_08", false )
		hashelmet		= true
	else
		ObjectHideSubObjectPermanently( self, "HELMET_09", false )
		hashelmet		= true
	end
	
	
	--//////////////////////////////////////////
	--			HEAD
	--//////////////////////////////////////////
	-- set the heads that require a helmet
	if hashelmet == true then
	
		if head <= 0.25 then
			ObjectHideSubObjectPermanently( self, "HEAD02", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD01", false )
		elseif head <= 0.75 then
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD02", false )
		else
			ObjectHideSubObjectPermanently( self, "HELMET_HEAD03", false )
		end
		
	end
	
	-- now set the heads that must not have a helmet
	if hashelmet == false then
	
		if head <= 0.25 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD01", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD02", false )
		elseif head <= 0.75 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD03", false )
		else
			ObjectHideSubObjectPermanently( self, "NOHELMET_HEAD04", false )
		end
		
	end	
	
	
	--//////////////////////////////////////////
	--			HAIR
	--//////////////////////////////////////////
	
	-- set helmet-hair
	if hashelmet == true then
	
		-- 33% chance of getting helmet-hair
		if hair <= 0.33 then
			ObjectHideSubObjectPermanently( self, "HELMET_HAIR01", false )
		end
	
	end
	
	-- set non-helmet-hair 
	if hashelmet == false then
	
		-- 50% chance of getting non-helmet-hair
		if hair <= 0.25 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR01", false )
		elseif head <= 0.5 then
			ObjectHideSubObjectPermanently( self, "NOHELMET_HAIR02", false )
		end
	
	end
	
	
	--//////////////////////////////////////////
	--			RIGHT HAND
	--//////////////////////////////////////////
	-- set the bow; note: we need one of them, so there's no "empty" possibility
	if bow <= 0.33 then
		ObjectHideSubObjectPermanently( self, "BOW_01", false )
	elseif bow <= 0.66 then
		ObjectHideSubObjectPermanently( self, "BOW_02", false )
	else
		ObjectHideSubObjectPermanently( self, "BOW_03", false )
	end
	
	
end




--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中
--   Lauri's scripts below, new area from 20070605 /Nazg�l :)
--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function OnMordorBlackUrukCreated(self)

	ObjectHideSubObjectPermanently( self, "SWORD01", true )
	ObjectHideSubObjectPermanently( self, "SWORD02", true )
	ObjectHideSubObjectPermanently( self, "SWORD03", true )
	ObjectHideSubObjectPermanently( self, "SWORD04", true )
	ObjectHideSubObjectPermanently( self, "SWORD05", true )
	ObjectHideSubObjectPermanently( self, "SWORD06", true )
	
	-- define the locals as random numbers
	local sword 	=	GetRandomNumber()
	
	-- set the bow; note: we need one of them, so there's no "empty" possibility
	if sword <= 0.2 then
		ObjectHideSubObjectPermanently( self, "SWORD01", false )
	elseif sword <= 0.4 then
		ObjectHideSubObjectPermanently( self, "SWORD02", false )
	elseif sword <= 0.5 then
		ObjectHideSubObjectPermanently( self, "SWORD03", false )
	elseif sword <= 0.6 then
		ObjectHideSubObjectPermanently( self, "SWORD04", false )
	elseif sword <= 0.8 then
		ObjectHideSubObjectPermanently( self, "SWORD05", false )
	else
		ObjectHideSubObjectPermanently( self, "SWORD06", false )
	end
	
	
end

function OnMordorMorgulOrcsCreated(self)

	ObjectHideSubObjectPermanently( self, "weap01", true )
	ObjectHideSubObjectPermanently( self, "weap02", true )
	ObjectHideSubObjectPermanently( self, "weap03", true )
	ObjectHideSubObjectPermanently( self, "weap04", true )
	ObjectHideSubObjectPermanently( self, "weap05", true )
	ObjectHideSubObjectPermanently( self, "weap06", true )
	ObjectHideSubObjectPermanently( self, "weap07", true )
	
	ObjectHideSubObjectPermanently( self, "helmet01", true )
	ObjectHideSubObjectPermanently( self, "helmet02", true )
	ObjectHideSubObjectPermanently( self, "helmet03", true )
	ObjectHideSubObjectPermanently( self, "helmet04", true )
	
	ObjectHideSubObjectPermanently( self, "shield01", true )
	ObjectHideSubObjectPermanently( self, "shield02", true )
	ObjectHideSubObjectPermanently( self, "shield03", true )
	ObjectHideSubObjectPermanently( self, "shield04", true )
	ObjectHideSubObjectPermanently( self, "shield05", true )
	
	-- define the locals as random numbers
	local sword 	=	GetRandomNumber()
	local helmet 	=	GetRandomNumber()
	local shield 	=	GetRandomNumber()
	
	-- set the bow; note: we need one of them, so there's no "empty" possibility
	if sword <= 0.2 then
		ObjectHideSubObjectPermanently( self, "weap01", false )
	elseif sword <= 0.4 then
		ObjectHideSubObjectPermanently( self, "weap02", false )
	elseif sword <= 0.5 then
		ObjectHideSubObjectPermanently( self, "weap03", false )
	elseif sword <= 0.6 then
		ObjectHideSubObjectPermanently( self, "weap04", false )
	elseif sword <= 0.8 then
		ObjectHideSubObjectPermanently( self, "weap05", false )
	elseif sword <= 0.8 then
		ObjectHideSubObjectPermanently( self, "weap06", false )
	else
		ObjectHideSubObjectPermanently( self, "weap07", false )
	end
	
		-- set the bow; note: we need one of them, so there's no "empty" possibility
	if helmet <= 0.25 then
		ObjectHideSubObjectPermanently( self, "helmet01", false )
	elseif helmet <= 0.5 then
		ObjectHideSubObjectPermanently( self, "helmet02", false )
	elseif helmet <= 0.75 then
		ObjectHideSubObjectPermanently( self, "helmet03", false )
	else
		ObjectHideSubObjectPermanently( self, "helmet04", false )
	end
	
		-- set the bow; note: we need one of them, so there's no "empty" possibility
	if shield <= 0.15 then
		ObjectHideSubObjectPermanently( self, "shield01", false )
	elseif shield <= 0.3 then
		ObjectHideSubObjectPermanently( self, "shield02", false )
	elseif shield <= 0.5 then
		ObjectHideSubObjectPermanently( self, "shield03", false )
	elseif shield <= 0.65 then
		ObjectHideSubObjectPermanently( self, "shield04", false )
	elseif shield <= 0.80 then
		ObjectHideSubObjectPermanently( self, "shield05", false )
	else
		ObjectHideSubObjectPermanently( self, "shield_NOWAY", false )
	end
	
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function OnMoriaGoblinsSwordCreated(self)

	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )

  ObjectHideSubObjectPermanently( self, "WEAPON01", true )
  ObjectHideSubObjectPermanently( self, "WEAPON02", true )
  ObjectHideSubObjectPermanently( self, "WEAPON03", true )
  ObjectHideSubObjectPermanently( self, "WEAPON04", true )
  ObjectHideSubObjectPermanently( self, "WEAPON05", true )

  ObjectHideSubObjectPermanently( self, "HEAD01", true )
  ObjectHideSubObjectPermanently( self, "HEAD02", true )
  ObjectHideSubObjectPermanently( self, "HEAD03", true )

  ObjectHideSubObjectPermanently( self, "ARM", true )
  ObjectHideSubObjectPermanently( self, "SHIELD", true )
  ObjectHideSubObjectPermanently( self, "SHOULDER", true )
  ObjectHideSubObjectPermanently( self, "FEET", true )

  -- define the locals as random numbers
  local sword = GetRandomNumber()
  local helmet = GetRandomNumber()
  local shield = GetRandomNumber()
  local feet = GetRandomNumber()
  local shoulder = GetRandomNumber()

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if sword <= 0.2 then
      ObjectHideSubObjectPermanently( self, "WEAPON01", false )
    elseif sword <= 0.4 then
      ObjectHideSubObjectPermanently( self, "WEAPON02", false )
    elseif sword <= 0.6 then
      ObjectHideSubObjectPermanently( self, "WEAPON03", false )
    elseif sword <= 0.8 then
      ObjectHideSubObjectPermanently( self, "WEAPON04", false )
    else
      ObjectHideSubObjectPermanently( self, "WEAPON05", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if helmet <= 0.33 then
      ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.66 then
      ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
      ObjectHideSubObjectPermanently( self, "HEAD03", false )
  end

  -- set the arms;
  if shield <= 0.33 then
      ObjectHideSubObjectPermanently( self, "ARM", false )
    elseif shield <= 0.66 then
      ObjectHideSubObjectPermanently( self, "SHIELD", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if feet <= 0.5 then
      ObjectHideSubObjectPermanently( self, "FEET", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if shoulder <= 0.5 then
      ObjectHideSubObjectPermanently( self, "SHOULDER", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function OnMoriaGoblinsSpearCreated(self)

	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )

  ObjectHideSubObjectPermanently( self, "PIKE01", true )
  ObjectHideSubObjectPermanently( self, "PIKE02", true )

  ObjectHideSubObjectPermanently( self, "STAFF01", true )
  ObjectHideSubObjectPermanently( self, "STAFF02", true )

  ObjectHideSubObjectPermanently( self, "HEAD01", true )
  ObjectHideSubObjectPermanently( self, "HEAD02", true )
  ObjectHideSubObjectPermanently( self, "HEAD03", true )

  ObjectHideSubObjectPermanently( self, "ARM", true )
  ObjectHideSubObjectPermanently( self, "SHOULDER", true )
  ObjectHideSubObjectPermanently( self, "FEET", true )

  -- define the locals as random numbers
  local sword = GetRandomNumber()
  local staff = GetRandomNumber()
  local helmet = GetRandomNumber()
  local shield = GetRandomNumber()
  local feet = GetRandomNumber()
  local shoulder = GetRandomNumber()

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if sword <= 0.5 then
      ObjectHideSubObjectPermanently( self, "PIKE01", false )
    else
      ObjectHideSubObjectPermanently( self, "PIKE02", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if staff <= 0.5 then
      ObjectHideSubObjectPermanently( self, "STAFF01", false )
    else
      ObjectHideSubObjectPermanently( self, "STAFF02", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if helmet <= 0.33 then
      ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.66 then
      ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
      ObjectHideSubObjectPermanently( self, "HEAD03", false )
  end

  -- set the arms;
  if shield <= 0.5 then
      ObjectHideSubObjectPermanently( self, "ARM", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if feet <= 0.5 then
      ObjectHideSubObjectPermanently( self, "FEET", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if shoulder <= 0.5 then
      ObjectHideSubObjectPermanently( self, "SHOULDER", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function OnMoriaGoblinsBowCreated(self)

	ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )

	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )

  ObjectHideSubObjectPermanently( self, "BOW01", true )
  ObjectHideSubObjectPermanently( self, "BOW02", true )

  ObjectHideSubObjectPermanently( self, "HEAD01", true )
  ObjectHideSubObjectPermanently( self, "HEAD02", true )
  ObjectHideSubObjectPermanently( self, "HEAD03", true )

  ObjectHideSubObjectPermanently( self, "ARM", true )
  ObjectHideSubObjectPermanently( self, "SHOULDER", true )
  ObjectHideSubObjectPermanently( self, "FEET", true )

  -- define the locals as random numbers
  local bow = GetRandomNumber()
  local helmet = GetRandomNumber()
  local shield = GetRandomNumber()
  local feet = GetRandomNumber()
  local shoulder = GetRandomNumber()

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if bow <= 0.5 then
      ObjectHideSubObjectPermanently( self, "BOW01", false )
    else
      ObjectHideSubObjectPermanently( self, "BOW02", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if helmet <= 0.33 then
      ObjectHideSubObjectPermanently( self, "HEAD01", false )
    elseif helmet <= 0.66 then
      ObjectHideSubObjectPermanently( self, "HEAD02", false )
    else
      ObjectHideSubObjectPermanently( self, "HEAD03", false )
  end

  -- set the arms;
  if shield <= 0.5 then
      ObjectHideSubObjectPermanently( self, "ARM", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if feet <= 0.5 then
      ObjectHideSubObjectPermanently( self, "FEET", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end

  -- set the bow; note: we need one of them, so there's no "empty" possibility
  if shoulder <= 0.5 then
      ObjectHideSubObjectPermanently( self, "SHOULDER", false )
    else
      ObjectHideSubObjectPermanently( self, "NOTHING", false )
  end
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

	function OnGoblinWargBannerCreated(self)
	--They will be randomly, and they have some of possibilities...
	ObjectHideSubObjectPermanently( self, "ARM", true )
	ObjectHideSubObjectPermanently( self, "SHOULDER", true )
	ObjectHideSubObjectPermanently( self, "PIKE", true )
	
	ObjectHideSubObjectPermanently( self, "HEAD01", true )
	ObjectHideSubObjectPermanently( self, "HEAD02", true )
	ObjectHideSubObjectPermanently( self, "HEAD03", true )
	
    local arm	=    GetRandomNumber()
    local shoulder	=    GetRandomNumber()
    local banner	=    GetRandomNumber()
    local head    =    GetRandomNumber()
	
        if head <= 0.33 then
            ObjectHideSubObjectPermanently( self, "HEAD01", false )
        elseif head <= 0.66 then
            ObjectHideSubObjectPermanently( self, "HEAD02", false )
        else
            ObjectHideSubObjectPermanently( self, "HEAD03", false )
        end
		
	    if arm <= 0.5 then --50% shot at getting the arm armour.. adjust as you please, but it is a banner carrier
            ObjectHideSubObjectPermanently( self, "ARM", false )
        end

	    if shoulder <= 0.5 then --50% shot at getting the shoulder armour
            ObjectHideSubObjectPermanently( self, "SHOULDER", false )
        end
		
	    if banner <= 0.8 then --80% at getting spear-like top on the banner
            ObjectHideSubObjectPermanently( self, "PIKE", false )
        end
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function OnCreepSpiderLairCreated_SEE(self)
	ObjectHideSubObjectPermanently( self, "Cocoon02", false )
	ObjectHideSubObjectPermanently( self, "B_Cocoon02", false )
	ObjectHideSubObjectPermanently( self, "C_Cocoon02", false )
	ObjectHideSubObjectPermanently( self, "D_Cocoon02", false )
	ObjectHideSubObjectPermanently( self, "N_Window", false )
	ObjectHideSubObjectPermanently( self, "N_Fire", false )
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中

function UsingFireArrows_SEE(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", false )
end

function NOTUsingFireArrows_SEE(self)
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中
function OnHaradrimsSwordsmenCreated(self)
	-- comments:
	-- this function is very long, because of all the different subobjects we have to choose from
	-- the basic order is: hide everything, choose a helmet, choose all other equipment depending on the fact if a helmet is shown or not

	
	-- hide all heads
	ObjectHideSubObjectPermanently( self, "HAT", true )
	ObjectHideSubObjectPermanently( self, "HAT03", true )
	
	--Weapons
	ObjectHideSubObjectPermanently( self, "SWRD4", true )
	ObjectHideSubObjectPermanently( self, "SWRD3", true )

	--hide all back equipments (shields and weapons)
	ObjectHideSubObjectPermanently( self, "SHIELD02", true )
	ObjectHideSubObjectPermanently( self, "SHIELD05", true )
	
	--Accessories, Etc
	ObjectHideSubObjectPermanently( self, "SLDR_02", true )
	ObjectHideSubObjectPermanently( self, "BOWP", true )
	ObjectHideSubObjectPermanently( self, "BOW", true )
	
	
	-- define the locals as random numbers
	local head 			=	GetRandomNumber()
	local helmet 		=	GetRandomNumber()
	local hair 			=	GetRandomNumber()
	local righthand 	=	GetRandomNumber()
	local lefthand 		=	GetRandomNumber()
	local back		=	GetRandomNumber()
	
	local hashelmet		= true
	
	--//////////////////////////////////////////
	--			Head and Helmets
	--//////////////////////////////////////////
	-- set the heads that require a helmet
	if hashelmet == true then
	
		if head <= 0.25 then
			ObjectHideSubObjectPermanently( self, "HAT03", false )
		elseif righthand >= 0.50 then
		    ObjectHideSubObjectPermanently( self, "HAT", false )
		else
			ObjectHideSubObjectPermanently( self, "HEAD", false )
		end
		
	end
	
	--//////////////////////////////////////////
	--	Weapons and Right Hand Objects
	--//////////////////////////////////////////
	-- set the right hand subobject; note: we need one of them, so there's no "empty" possibility
	if righthand >= 0.30 then
		ObjectHideSubObjectPermanently( self, "SWRD3", false )
	else
		ObjectHideSubObjectPermanently( self, "SWRD4", false )
	end
	
	--//////////////////////////////////////////
	--		Shields and Left Hand Objects
	--//////////////////////////////////////////
	-- set the left hand subobject; note: we don't necessarily need one of them, so we can have some unused possibilities
	if lefthand <= 0.20 then
		ObjectHideSubObjectPermanently( self, "SHIELD02", false )
	elseif righthand >= 0.50 then
		ObjectHideSubObjectPermanently( self, "SHIELD05", false )
	end
	
		--//////////////////////////////////////////
	--			Accessories
	--//////////////////////////////////////////
	-- 
	if back <= 0.10 then
		ObjectHideSubObjectPermanently( self, "BOWP", false )
	elseif back <= 0.20 then
		ObjectHideSubObjectPermanently( self, "SLDR_02", false )
	elseif back <= 0.50 then
		ObjectHideSubObjectPermanently( self, "SLDR_02", false )
	end
end

--// 中中中中中中中中中中中中中中中中中中中中中中中中中中中中中
function OnDwarvenMinerCreated(self)
	--They will be barely randomly, and they have 5 skins....20 possibilities
	ObjectHideSubObjectPermanently( self, "SHOVEL", true )
	ObjectHideSubObjectPermanently( self, "PICKAXE", true )
	
    local arms = GetRandomNumber()

    if arms <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHOVEL", false )
    else
        ObjectHideSubObjectPermanently( self, "PICKAXE", false )
    end
	
end

