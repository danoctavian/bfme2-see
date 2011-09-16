; ####################################################
; "Battle for Middle Earth II - Special Extended Edition - Director's Cut"
; ####################################################

; GameDefines.INI for S.E.E.... (GENERAL BALANCE DATA!)
; ------------------------------------------------------------------------------
;NOTE: Attacks are as such: PreAttackDelay -> Both: FiringDuration & DelayBetweenShots -> After DBS starts PreAttackDelay again.

;------------------------------------------------------------------------------ SEE!
#define SHROUD_CLEAR_STANDARD								200 //100
#define SHROUD_CLEAR_MACHINE								250
#define SHROUD_CLEAR_ARTILLERY								500
#define SHROUD_CLEAR_HERO									400
#define SHROUD_CLEAR_RANGED_HERO							500
#define SHROUD_CLEAR_HOBBIT								225 //250
#define SHROUD_CLEAR_BASE_DEFENSE							700 //800
#define SHROUD_CLEAR_FLIER									750 ;900
#define SHROUD_CLEAR_ENT									600 //700 //650
#define SHROUD_CLEAR_GIANT									500
#define SHROUD_CLEAR_TROLL									400
#define SHROUD_CLEAR_TRANSPORTSHIP							400
#define SHROUD_CLEAR_BATTLESHIP							600
#define SHROUD_CLEAR_SKULL_TOTEM							500 //700

#define VISION_STANDARD_TOMBOMB							350
#define VISION_STANDARD_MELEE								250
#define VISION_STANDARD_HORSE								300
#define VISION_STANDARD_LARGE_ANIMAL						350 // firedrake
#define VISION_STANDARD_SHORT								150 //200
#define VISION_HERO_RANGED									400
#define VISION_HERO_STANDARD								175 //300
#define VISION_FLIER										  	375 ;500
#define VISION_BASE_DEFENSE									600 //700
#define VISION_HOBBIT										200
#define CREEP_VISION										250
#define	VISION_ENT											500 //600
#define VISION_STANDARD_MELEE_HORDEMEMBER					150

#define CREEP_LAIR_HEALTH					     			8000
#define CREEP_LAIR_HEALTH_DAMAGED				  			4000
#define CREEP_LAIR_HEALTH_REALLY_DAMAGED					2000
#define CREEP_LAIR_HEALTH_HOLE		     					2000.0
;------------------------------------------------------------------------------ SEE!
//// FortressExpansion Stats!
#define SHROUD_CLEAR_FORTRESS_EXPANSION_DIF				100
#define VISION_FORTRESS_EXPANSION_DIF						100
#define WEAPON_RANGE_FORTRESS_EXPANSION_MULT				1.15
#define WEAPON_RANGE_WALL_UPGRADE_MULT					1.05

; Region Bonuses
#define DEFAULT_REGION_RESOURCE_BONUS			10
#define DEFAULT_REGION_ARMY_BONUS_GOOD			20
#define DEFAULT_REGION_ARMY_BONUS_EVIL			50
#define DEFAULT_REGION_LEGENDARY_BONUS			1

#define SPELL_DARKNESS_DURATION				180000
#define SPELL_FREEZINGRAIN_DURATION			150000	; RotWK originally 180000
#define SPELL_CLOUDBREAK_DURATION			30000

#define SPECIALPOWER_DEVASTATION_RADIUS			180	; balance
#define SPECIALPOWER_DEVASTATION_ENT_DAMAGE		800 	; balance

#define ENSHROUDING_MIST_EFFECT_RADIUS			150

#define BURNINGDEATH_WANDERSPEED_INFANTRY		50
#define BURNINGDEATH_DURATION_INFANTRY			5000

#define BURNINGDEATH_WANDERSPEED_CAVALRY		75
#define BURNINGDEATH_DURATION_CAVALRY			2500

#define BURNINGDEATH_WANDERSPEED_ENT			75
#define BURNINGDEATH_DURATION_ENT			2500

;------------------------GENERIC UNITS/STRUCTURES---------- 

#define GENERIC_KEEP_FLOOR_RADIUS							400
#define GENERIC_KEEP_FLOOR_OBJECT_FILTER			ANY +STRUCTURE -COMMANDCENTER -WALL_SEGMENT -WALL_UPGRADE -WALL_HUB -WALL_GATE -DEFENSIVE_WALL -FS_BASE_DEFENSE


#define STATUE_BUILDTIME							30		// 30 seconds - All statues, monuments and wells!
#define SENTRY_TOWER_COST				500
#define SENTRY_TOWER_BUILDTIME				30



#define STANDARD_HORDE_EXIT_DELAY			10

#define STANDARD_WALL_STAGGERED_BUILD_FACTOR		20 ;SEE!
#define STANDARD_CFH_RADIUS				200

#define EMOTION_CHEER_RADIUS				100
#define ARCHER_FEAR_SCAN_RADIUS				30
#define INFANTRY_FEAR_SCAN_RADIUS			100
#define CAVALRY_FEAR_SCAN_RADIUS			30
#define INFANTRY_TAUNT_POINT_RADIUS			100


#define DEFAULT_STRUCTURE_HEALDELAY			200 //300

#define GENERIC_FACTION_GARRISONABLE			ANY +INFANTRY +BANNER -CAVALRY -SUMMONED -WildSpiderling -WildSpiderlingHorde -COMBO_HORDE -IsengardSharku -AngmarThrallMaster ;+BarrowWight +BarrowWight_Slaved 
#define GENERIC_FACTION_SLAUGHTERABLE			ANY +INFANTRY +CAVALRY +DOZER -HERO -SUMMONED 	;was -DOZER
#define GENERIC_BUFF_RECIPIENT_OBJECT_FILTER		ANY +INFANTRY +CAVALRY -MACHINE -IMMOBILE -DOZER -HERO -STRUCTURE -BASE_FOUNDATION -HORDE -DwarvenBattleWagon -RohanOathbreaker -MordorRamCrew ;-MordorHaradrimArcherHordeOnMumakil -MordorHaradrimArcherMumakil -DwarvenBattleWagon -RohanOathbreaker -MordorRamCrew +MordorWorker -IsengardRamCrew -IsengardBeserker -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde -GondorKnightsofDol -GondorKnightsofDolHorde -WildBabyDrake -WildBabyDrakeHorde -MordorBlackRider -MordorBlackRiderHorde -IsengardFanatic -IsengardBerserkerHorde 

												; Afraid of objects must be SCARY kindof as well.
#define EMOTION_AFRAIDOF_OBJECTFILTER			NONE +GondorGwaihir +RohanTreeBerd +RohanEntFir +RohanEntAsh +RohanEntBirch +MordorBalrog +MordorFellBeast +AngmarWitchking +MordorWitchKingOnFellBeast +MordorCaveTroll +MordorMountainTroll +MordorDrummerTroll +MordorMumakil +MordorGateWatchersExpansion +BarrowWight +NecromancerStatue +GoblinCaveTroll +SpellBookArrowVolley +TomBombadil +TomBombadil_Summoned +GoblinCaveTroll_FromTrollLair +CaveTroll_Slaved +ElvenVigilantEnt +RohanGenericEnt +RohanEntFir_Summoned +RohanEntBirch_Summoned +EvilMenBlackRider +CreateAHero
#define EMOTION_ALWAYS_AFRAIDOF_OBJECTFILTER		NONE +MordorBalrog +RohanOathbreaker 
#define EMOTION_POINTAT_OBJECTFILTER			NONE +MordorFellBeast +MordorWitchKingOnFellBeast +GondorGwaihir +MordorGateWatchersExpansion +SpellBookArrowVolley +AngmarWitchking
#define AND_FLYING_UNITS       +Drogoth +GondorGwaihir_Summoned +GondorGwaihir +MordorFellBeast +MordorWitchKingOnFellBeast +ElvenFortressEagle +SpellBookDragonStrikeDragon
#define CREEP_OBJECTFILTER		 		ANY +SnowTrollLair +HillTrollLair +SnowTrollLairSnow +HillTrollLairSnow +CaveTrollLair +MoriarGoblinLair +WargLair +SpiderLair +BarrowWightLair +FireDrakeLair +MoriarGoblinLairSnow +CaveTrollLairSnow +NeutralWarg +BarrowWight_Slaved +FireDrake_Slaved +MordorGoblinSwordsman_Slaved +MordorGoblinArcher_Slaved +MinorSpider_Slaved +CaveTroll_Slaved ENEMIES
#define NOT_CREEP		 			-SnowTrollLair -HillTrollLair -CaveTrollLair -MoriarGoblinLair -WargLair -SpiderLair -BarrowWightLair -FireDrakeLair -MoriarGoblinLairSnow -CaveTrollLairSnow -NeutralWarg -BarrowWight_Slaved -FireDrake_Slaved -MordorGoblinSwordsman_Slaved -MordorGoblinArcher_Slaved -MinorSpider_Slaved -CaveTroll_Slaved 
#define NOT_FLYING_UNITS				-Drogoth -GondorGwaihir_Summoned -GondorGwaihir -MordorFellBeast -MordorWitchKingOnFellBeast -ElvenFortressEagle -SpellBookDragonStrikeDragon -KhamulFellBeast -MorgomirFellBeast
#define AFFECTED_BY_POISON_OBJECTFILTER			ALL -MACHINE -STRUCTURE -SHIP -MordorSauron -MordorWitchKing -MordorWitchKingOnFellBeast -MordorRingWraith -MordorRingWraithNoGlow -EvilMenBlackRider -BarrowWight -RohanOathbreaker -IsengardDeployedExplosiveMine -MordorBalrog -TheDroppedRing -BattleWagonOilBarrelProjectile -DwarvenCatapult -AngmarWitchking_Mounted -BlackRiderMountedInterface -MordorFellBeast -MordorFellBeastInterface -MorgomirFellBeast -KhamulFellBeast
#define AFFECTED_BY_POISON_CASTABLE			ALL -MACHINE -STRUCTURE -SHIP -MordorWitchKing -MordorWitchKingOnFellBeast -MordorRingWraith -MordorRingWraithNoGlow -EvilMenBlackRider	-KhamulFellBeast -MorgomirFellBeast	;// this needed because th poison weapon also does damage, which we still want to be able to do on poison-immune units
#define DEFAULT_POISON_DAMAGE				10
#define GOBLIN_FIGHTER_POISON_DAMAGE			6	; originally 4
#define SHELOB_POISON_DAMAGE				300
#define GORKIL_POISON_DAMAGE				100
#define POISONED_STINGER_DURATION			15000

#define POSTERNGATE_ALLOWABLE_OBJECTFILTER		ANY +INFANTRY +CAVALRY +WildFireDrake_Summoned +WildFortressFireDrake +BarrowWight +BarrowWight_Slaved +GoblinCaveTroll +MordorWitchKing +AngmarWitchking +IsengardSharku +MordorSauron_RingHero -MONSTER -MACHINE -ARMY_OF_DEAD

#define FORTRESS_RING_STEALER_OBJECTFILTER		NONE ENEMIES +NeutralGollum_RingStealer

#define TRANSPORTSHIP_PASSENGER_OBJECTFILTER		ANY +INFANTRY +CAVALRY +HERO -ElvenGaladriel_RingHero -MONSTER -SUMMONED -AngmarThrallMaster +MordorWitchKing ; +BarrowWight +BarrowWight_Slaved

#define NO_SUMMON_NEAR_OBJECT_FILTER			ANY +RohanOathbreaker +ElvenGaladriel +ElvenGaladriel_RingHero +MordorSauron +MordorSauron_RingHero +MordorBalrog +MordorBalrogEggPlaceHolder +Wyrm +MordorMumakil +WatcherHead +WatcherHittingArm +WatcherEggPlaceHolder +WatcherCaldera +SummonedDragon +SummonedDragonJH1 +SummonedDragonEggPlaceHolder
#define NO_SUMMON_UNDERMINE_NEAR_OBJECT_FILTER		ANY +RohanOathbreaker +ElvenGaladriel +ElvenGaladriel_RingHero +MordorSauron +MordorSauron_RingHero +MordorBalrog +MordorBalrogEggPlaceHolder +Wyrm +MordorMumakil +WatcherHead +WatcherHittingArm +WatcherEggPlaceHolder +WatcherCaldera +SummonedDragon +SummonedDragonJH1 +SummonedDragonEggPlaceHolder //+STRUCTURE
#define NO_SUMMON_CITADEL_NEAR_OBJECT_FILTER		ANY +RohanOathbreaker +ElvenGaladriel +ElvenGaladriel_RingHero +MordorSauron +MordorSauron_RingHero +MordorBalrog +MordorBalrogEggPlaceHolder +Wyrm +MordorMumakil +WatcherHead +WatcherHittingArm +WatcherEggPlaceHolder +WatcherCaldera +SummonedDragon +SummonedDragonJH1 +SummonedDragonEggPlaceHolder //+STRUCTURE
#define NO_SUMMON_STRUCTURE_NEAR_OBJECT_FILTER		ANY +RohanOathbreaker +ElvenGaladriel +ElvenGaladriel_RingHero +MordorSauron +MordorSauron_RingHero +MordorBalrog +MordorBalrogEggPlaceHolder +Wyrm +MordorMumakil +WatcherHead +WatcherHittingArm +WatcherEggPlaceHolder +WatcherCaldera +SummonedDragon +SummonedDragonJH1 +SummonedDragonEggPlaceHolder +INFANTRY +HERO +CAVALRY +MONSTER +MACHINE //+STRUCTURE


;--------------For summon allies-------------------

#define NO_SUMMON_ALLIES_NEAR_THESE			ANY +STRUCTURE

#define INSTANT_DEATH_ON_METAIMPACT_OBJFILTER		ANY +PORTER +DwarvenBattleWagon +DwarvenDemolisher +DwarvenCatapult +GondorTrebuchet +IsengardExplosiveMine +IsengardBallista +IsengardBatteringRam +MordorCatapult +MordorBatteringRam +MordorRamCrew +IsengardRamCrew +AngmarTrollSling

#define ATTACK_TROLL_DOMINATE_OBJECT_FILTER		ANY +MordorMountainTroll +GoblinCaveTroll +MordorDrummerTroll +CaveTroll_Slaved +AngmarSnowTroll +AngmarSnowTrollHorde +SnowTroll_Slaved +AngmarHillTroll +AngmarHillTrollHorde +HillTroll_Slaved
#define ROGASH_DOMINATE_OBJECT_FILTER			ANY +MordorMountainTroll +GoblinCaveTroll +MordorDrummerTroll +CaveTroll_Slaved +AngmarSnowTroll +AngmarSnowTrollHorde +SnowTroll_Slaved +AngmarHillTroll +AngmarHillTrollHorde +HillTroll_Slaved +MordorAttackTroll



#define KINGSFAVOR_OBJECTFILTER				ANY +CAVALRY +INFANTRY -STRUCTURE -CASTLE_KEEP -BASE_FOUNDATION -HERO -MOVE_ONLY -DOZER ALLIES

#define HOBBIT_KINDOF					PRELOAD SELECTABLE CAN_CAST_REFLECTIONS INFANTRY PATH_THROUGH_EACH_OTHER SCORE THROWN_OBJECT HERO HOBBIT ATTACK_NEEDS_LINE_OF_SIGHT HEAVY_MELEE_HITTER


#define HERO_HEAL_AMOUNT				30
#define NAZGUL_HEAL_AMOUNT				60
#define MONSTER_HEAL_AMOUNT				40
#define HERO_HEAL_DELAY					15000

#define MONSTER_HEAL_DELAY				15000

#define HERO_DODGE_PERCENT				50

#define CASTLE_WALL_REBUILD_TIME			180.0
#define CASTLE_WALL_REBUILD_COST			2000.0

#define STEALTH_FRIENDLY_OPACITY_MIN			100.0%
#define STEALTH_FRIENDLY_OPACITY_MAX			100.0%

#define CAMOUFLAGE_RADIUS				100.0
#define ELVEN_MIST_CAMOUFLAGE_DETECTION_RANGE		100.0
#define ELVEN_MIST_OBJECT_FILTER			ANY +HORDE +HERO +DOZER +RohanEntFir_Summoned +RohanEntBirch_Summoned +RohanEntFir +RohanEntBirch +RohanEntAsh +MordorMountainTroll +MordorDrummerTroll +MordorAttackTroll +WildMountainGiant +GoblinCaveTroll +CaveTroll_Slaved +MordorCaveTroll_Summoned +MordorAttackTroll_Summoned +WildMountainGiant_Summoned -Drogoth -GondorGwaihir_Summoned -GondorGwaihir -MordorFellBeast -MordorWitchKingOnFellBeast -ElvenFortressEagle -SpellBookDragonStrikeDragon -KhamulFellBeast -MorgomirFellBeast ALLIES

#define CAMOUFLAGE_DETECTION_DISTANCE_SHORT		0.5
#define CAMOUFLAGE_DETECTION_DISTANCE_SHORTISH		0.8
#define CAMOUFLAGE_DETECTION_DISTANCE_DEFAULT		1.0		// everything has this by default.
#define CAMOUFLAGE_DETECTION_DISTANCE_SHEDIUM		1.5		// not quite short and not quite medium so shedium.
#define CAMOUFLAGE_DETECTION_DISTANCE_MEDIUM		2.0		
#define CAMOUFLAGE_DETECTION_DISTANCE_LONG		3.0

#define GENERIC_KEEP_MONEY_TIME 			6000
#define GENERIC_KEEP_MONEY_AMOUNT			30 ;25
#define GENERIC_KEEP_MONEY_RANGE			50

#define PORTER_FIRE_EXTINGUISHER_DECREASEBURNRATE_RADIUS 	100.0
#define PORTER_FIRE_EXTINGUISHER_DECREASEBURNRATE_AMOUNT 	100.0
#define PORTER_FIRE_EXTINGUISHER_ABILITY_START_RANGE	 	115 	; // should be greater than PORTER_FIRE_EXTINGUISHER_DECREASEBURNRATE_RADIUS

// Command Point bonuses! ----------------------------------------------------- SEE!
#define GENERIC_STATUE_COMMAND_POINT_BONUS				25 //100
#define GENERIC_ECONOMY_COMMAND_POINT_BONUS				50 //150
#define DORMITORY_COMMAND_POINT_BONUS					100 //150
#define DWARVEN_ECONOMY_COMMAND_POINT_BONUS				150 //200
#define OUTPOST_COMMAND_POINT_BONUS						250 //200 //150
#define GENERIC_FORTRESS_COMMAND_POINT_BONUS				500 //400 //500

// ---------------------------------------------------------------------------------- SEE!
#define SHOCKWAVE_RESISTANCE_WEAK							10 //20
#define SHOCKWAVE_RESISTANCE_STANDARD					25 //40
#define SHOCKWAVE_RESISTANCE_FORMIDABLE					50 //60
#define SHOCKWAVE_RESISTANCE_STRONG						66 //75 ; not 80. WoP and WKsword use 75 and should be able to do KB to all heroes. Excepting Gandalf with a ShieldBubble.
#define SHOCKWAVE_RESISTANCE_IMMUNE						99
#define SHOCKWAVE_RESISTANCE_ALWAYS						9999 ; always resist meta-impact

#define DWARVENRICHES_EFFECT_RADIUS			100

#define INDUSTRY_TYPE_SPELL_OBJECT_FILTER		ANY +GondorFarm +DwarvenMineShaft +ElvenMallornTree +WildMineShaft +IsengardFurnace +MordorSlaughterHouse +ArnorFarm +AngmarMill ALLIES
#define INDUSTRY_EFFECT_RADIUS				200.0

#define ARCHER_BOMBARD_SCATTER_RADIUS			30
#define ARCHER_BOMBARD_FIREARROW_BURNRATEINCREASE	20

#define SELECTION_PRIORITY_CREBAIN 1
#define SELECTION_PRIORITY_MORDOR_WORKER 2
#define SELECTION_PRIORITY_PORTER 3

#define SPELLBOOK_TAINT_RADIUS				175
#define SPELLBOOK_TAINT_TIME				300000		; ms = 5 minutes

#define ATHELAS_HEAL_AMOUNT				600

#define MONUMENT_FORTRESS_HEALTH			7500
#define MONUMENT_FORTRESS_HEALTH_DAMAGED		3750
#define MONUMENT_FORTRESS_HEALT_REALLY_DAMAGED	1875

#define MONUMENT_FORTRESS_GATE_BUILDCOST		1500

#define STANDARD_MELEE_ATTACK_RANGE			11.5		// This should be used by most melee units in the game...

//-----------------------Generic Experience Values-----------------

#define PLAYER_MAX_PURCHASE_POINTS_DEFAULT		150		// 150 = (3 * 5) + (4 * 10) + (3 * 15) + (2 * 25)
#define PLAYER_MAX_PURCHASE_POINTS_EVIL			225		// 230 = (5 * 5) + (6 * 10) + (5 * 15) + (4 * 25) - 5	( 5 is starting value)
#define PLAYER_MAX_PURCHASE_POINTS_GOOD			201		// 205 = (4 * 5) + (5 * 10) + (4 * 15) + (3 * 25) - 4	(rounding error)
#define PLAYER_PURCHASE_POINTS_GRANTED			1		// 3			// Amount per rank SciencePurchasePointsGranted
#define PLAYER_SKILL_POINTS_DELTA_DEFAULT		60  		// 125 Why was this 42 	// Amount to take to next rank SkillPointsNeededDefault
#define PLAYER_SKILL_POINTS_DELTA_CAMPAIGN		100 		// 133 400		// Amount to take to next rank SkillPointsNeededCampaign

#define EXPERIENCE_REQUIRED_EVIL_WEAK_1			1
#define EXPERIENCE_REQUIRED_EVIL_WEAK_2			40
#define EXPERIENCE_REQUIRED_EVIL_WEAK_3			80
#define EXPERIENCE_REQUIRED_EVIL_WEAK_4			120
#define EXPERIENCE_REQUIRED_EVIL_WEAK_5			160

#define EXPERIENCE_AWARD_EVIL_WEAK_1			1
#define EXPERIENCE_AWARD_EVIL_WEAK_2			2
#define EXPERIENCE_AWARD_EVIL_WEAK_3			3
#define EXPERIENCE_AWARD_EVIL_WEAK_4			4
#define EXPERIENCE_AWARD_EVIL_WEAK_5			5

#define EXPERIENCE_REQUIRED_EVIL_TROOP_1		1
#define EXPERIENCE_REQUIRED_EVIL_TROOP_2		50
#define EXPERIENCE_REQUIRED_EVIL_TROOP_3		100
#define EXPERIENCE_REQUIRED_EVIL_TROOP_4		150
#define EXPERIENCE_REQUIRED_EVIL_TROOP_5		200

#define EXPERIENCE_AWARD_EVIL_TROOP_1			3
#define EXPERIENCE_AWARD_EVIL_TROOP_2			4
#define EXPERIENCE_AWARD_EVIL_TROOP_3			5
#define EXPERIENCE_AWARD_EVIL_TROOP_4			6
#define EXPERIENCE_AWARD_EVIL_TROOP_5			7

#define EXPERIENCE_REQUIRED_EVIL_ELITE_1		1
#define EXPERIENCE_REQUIRED_EVIL_ELITE_2		60
#define EXPERIENCE_REQUIRED_EVIL_ELITE_3		120
#define EXPERIENCE_REQUIRED_EVIL_ELITE_4		180
#define EXPERIENCE_REQUIRED_EVIL_ELITE_5		240

#define EXPERIENCE_AWARD_EVIL_ELITE_1			5
#define EXPERIENCE_AWARD_EVIL_ELITE_2			6
#define EXPERIENCE_AWARD_EVIL_ELITE_3			7
#define EXPERIENCE_AWARD_EVIL_ELITE_4			8
#define EXPERIENCE_AWARD_EVIL_ELITE_5			9

#define EXPERIENCE_REQUIRED_EVIL_MONSTER_1		1
#define EXPERIENCE_REQUIRED_EVIL_MONSTER_2		70
#define EXPERIENCE_REQUIRED_EVIL_MONSTER_3		140
#define EXPERIENCE_REQUIRED_EVIL_MONSTER_4		210
#define EXPERIENCE_REQUIRED_EVIL_MONSTER_5		280

#define EXPERIENCE_AWARD_EVIL_MONSTER_1			30
#define EXPERIENCE_AWARD_EVIL_MONSTER_2			40
#define EXPERIENCE_AWARD_EVIL_MONSTER_3			50
#define EXPERIENCE_AWARD_EVIL_MONSTER_4			60
#define EXPERIENCE_AWARD_EVIL_MONSTER_5			70

#define EXPERIENCE_AWARD_EVIL_MUMAKIL_1			50
#define EXPERIENCE_AWARD_EVIL_MUMAKIL_2			60
#define EXPERIENCE_AWARD_EVIL_MUMAKIL_3			70
#define EXPERIENCE_AWARD_EVIL_MUMAKIL_4			80
#define EXPERIENCE_AWARD_EVIL_MUMAKIL_5			90

#define EXPERIENCE_REQUIRED_EVIL_HORSE_1		1
#define EXPERIENCE_REQUIRED_EVIL_HORSE_2		140  	; 
#define EXPERIENCE_REQUIRED_EVIL_HORSE_3		280 	; 
#define EXPERIENCE_REQUIRED_EVIL_HORSE_4		420 	; 
#define EXPERIENCE_REQUIRED_EVIL_HORSE_5		560 	; 

#define EXPERIENCE_AWARD_EVIL_HORSE_1			8
#define EXPERIENCE_AWARD_EVIL_HORSE_2			9
#define EXPERIENCE_AWARD_EVIL_HORSE_3			10
#define EXPERIENCE_AWARD_EVIL_HORSE_4			11
#define EXPERIENCE_AWARD_EVIL_HORSE_5			12

#define EXPERIENCE_REQUIRED_GOOD_TROOP_1		1
#define EXPERIENCE_REQUIRED_GOOD_TROOP_2		50
#define EXPERIENCE_REQUIRED_GOOD_TROOP_3		100
#define EXPERIENCE_REQUIRED_GOOD_TROOP_4		150
#define EXPERIENCE_REQUIRED_GOOD_TROOP_5		200

#define EXPERIENCE_AWARD_GOOD_TROOP_1			3
#define EXPERIENCE_AWARD_GOOD_TROOP_2			4
#define EXPERIENCE_AWARD_GOOD_TROOP_3			5
#define EXPERIENCE_AWARD_GOOD_TROOP_4			6
#define EXPERIENCE_AWARD_GOOD_TROOP_5			7

#define EXPERIENCE_REQUIRED_GOOD_HORSE_1		1
#define EXPERIENCE_REQUIRED_GOOD_HORSE_2		140  	; 70 	200
#define EXPERIENCE_REQUIRED_GOOD_HORSE_3		280 	; 140 	400
#define EXPERIENCE_REQUIRED_GOOD_HORSE_4		420 	; 210	600
#define EXPERIENCE_REQUIRED_GOOD_HORSE_5		560 	; 280	800

#define EXPERIENCE_AWARD_GOOD_HORSE_1			8
#define EXPERIENCE_AWARD_GOOD_HORSE_2			9
#define EXPERIENCE_AWARD_GOOD_HORSE_3			10
#define EXPERIENCE_AWARD_GOOD_HORSE_4			11
#define EXPERIENCE_AWARD_GOOD_HORSE_5			12

#define EXPERIENCE_REQUIRED_DWARF_MACHINE_1		1
#define EXPERIENCE_REQUIRED_DWARF_MACHINE_2		50
#define EXPERIENCE_REQUIRED_DWARF_MACHINE_3		100 
#define EXPERIENCE_REQUIRED_DWARF_MACHINE_4		150 
#define EXPERIENCE_REQUIRED_DWARF_MACHINE_5		200 

#define EXPERIENCE_AWARD_DWARF_MACHINE_1		10
#define EXPERIENCE_AWARD_DWARF_MACHINE_2		15
#define EXPERIENCE_AWARD_DWARF_MACHINE_3		20
#define EXPERIENCE_AWARD_DWARF_MACHINE_4		25
#define EXPERIENCE_AWARD_DWARF_MACHINE_5		30

#define EXPERIENCE_REQUIRED_GOOD_ELITE_1		1
#define EXPERIENCE_REQUIRED_GOOD_ELITE_2		70	
#define EXPERIENCE_REQUIRED_GOOD_ELITE_3		140
#define EXPERIENCE_REQUIRED_GOOD_ELITE_4		210
#define EXPERIENCE_REQUIRED_GOOD_ELITE_5		280

#define EXPERIENCE_AWARD_GOOD_ELITE_1			5
#define EXPERIENCE_AWARD_GOOD_ELITE_2			6
#define EXPERIENCE_AWARD_GOOD_ELITE_3			7
#define EXPERIENCE_AWARD_GOOD_ELITE_4			8
#define EXPERIENCE_AWARD_GOOD_ELITE_5			9

#define EXPERIENCE_REQUIRED_SHIPS_1			1
#define EXPERIENCE_REQUIRED_SHIPS_2			150
#define EXPERIENCE_REQUIRED_SHIPS_3			300
#define EXPERIENCE_REQUIRED_SHIPS_4			500
#define EXPERIENCE_REQUIRED_SHIPS_5			700

#define EXPERIENCE_AWARD_SHIPS_1			20
#define EXPERIENCE_AWARD_SHIPS_2			30
#define EXPERIENCE_AWARD_SHIPS_3			40
#define EXPERIENCE_AWARD_SHIPS_4			50
#define EXPERIENCE_AWARD_SHIPS_5			60

#define EXPERIENCE_REQUIRED_MINI_HORDE_1		1
#define EXPERIENCE_REQUIRED_MINI_HORDE_2		90	
#define EXPERIENCE_REQUIRED_MINI_HORDE_3		180
#define EXPERIENCE_REQUIRED_MINI_HORDE_4		270
#define EXPERIENCE_REQUIRED_MINI_HORDE_5		360
#define EXPERIENCE_REQUIRED_MINI_HORDE_6		450
#define EXPERIENCE_REQUIRED_MINI_HORDE_7		540	
#define EXPERIENCE_REQUIRED_MINI_HORDE_8		630
#define EXPERIENCE_REQUIRED_MINI_HORDE_9		720
#define EXPERIENCE_REQUIRED_MINI_HORDE_10		810

#define EXPERIENCE_AWARD_MINI_HORDE_1			8
#define EXPERIENCE_AWARD_MINI_HORDE_2			9
#define EXPERIENCE_AWARD_MINI_HORDE_3			10
#define EXPERIENCE_AWARD_MINI_HORDE_4			11
#define EXPERIENCE_AWARD_MINI_HORDE_5			12
#define EXPERIENCE_AWARD_MINI_HORDE_6			13
#define EXPERIENCE_AWARD_MINI_HORDE_7			14
#define EXPERIENCE_AWARD_MINI_HORDE_8			15
#define EXPERIENCE_AWARD_MINI_HORDE_9			16
#define EXPERIENCE_AWARD_MINI_HORDE_10			17

//--------------Level Up Bonuses--------------------------

#define GOOD_TROOP_HP_ADD_LVL2				20
#define GOOD_TROOP_HP_ADD_LVL3				20
#define GOOD_TROOP_HP_ADD_LVL4				20
#define GOOD_TROOP_HP_ADD_LVL5				20

#define GOOD_TROOP_DAMAGE_ADD_LVL2			10
#define GOOD_TROOP_DAMAGE_ADD_LVL3			10
#define GOOD_TROOP_DAMAGE_ADD_LVL4			10
#define GOOD_TROOP_DAMAGE_ADD_LVL5			10

#define GOOD_ELITE_HP_ADD_LVL2				20
#define GOOD_ELITE_HP_ADD_LVL3				20
#define GOOD_ELITE_HP_ADD_LVL4				20
#define GOOD_ELITE_HP_ADD_LVL5				20

#define GOOD_ELITE_DAMAGE_ADD_LVL2			10
#define GOOD_ELITE_DAMAGE_ADD_LVL3			10
#define GOOD_ELITE_DAMAGE_ADD_LVL4			10
#define GOOD_ELITE_DAMAGE_ADD_LVL5			10

#define GOOD_HORSE_HP_ADD_LVL2				20
#define GOOD_HORSE_HP_ADD_LVL3				20
#define GOOD_HORSE_HP_ADD_LVL4				20
#define GOOD_HORSE_HP_ADD_LVL5				20

#define GOOD_HORSE_DAMAGE_ADD_LVL2			10
#define GOOD_HORSE_DAMAGE_ADD_LVL3			10
#define GOOD_HORSE_DAMAGE_ADD_LVL4			10
#define GOOD_HORSE_DAMAGE_ADD_LVL5			10

#define DWARF_MACHINE_HP_ADD_LVL2			250
#define DWARF_MACHINE_HP_ADD_LVL3			250
#define DWARF_MACHINE_HP_ADD_LVL4			250
#define DWARF_MACHINE_HP_ADD_LVL5			250

#define DWARF_MACHINE_DAMAGE_ADD_LVL2			50
#define DWARF_MACHINE_DAMAGE_ADD_LVL3			50
#define DWARF_MACHINE_DAMAGE_ADD_LVL4			50
#define DWARF_MACHINE_DAMAGE_ADD_LVL5			50

#define EVIL_TROOP_HP_ADD_LVL2				20
#define EVIL_TROOP_HP_ADD_LVL3				20
#define EVIL_TROOP_HP_ADD_LVL4				20
#define EVIL_TROOP_HP_ADD_LVL5				20

#define EVIL_TROOP_DAMAGE_ADD_LVL2			5
#define EVIL_TROOP_DAMAGE_ADD_LVL3			5
#define EVIL_TROOP_DAMAGE_ADD_LVL4			5
#define EVIL_TROOP_DAMAGE_ADD_LVL5			5

#define EVIL_ELITE_HP_ADD_LVL2				20
#define EVIL_ELITE_HP_ADD_LVL3				20
#define EVIL_ELITE_HP_ADD_LVL4				20
#define EVIL_ELITE_HP_ADD_LVL5				20

#define EVIL_ELITE_DAMAGE_ADD_LVL2			10
#define EVIL_ELITE_DAMAGE_ADD_LVL3			10
#define EVIL_ELITE_DAMAGE_ADD_LVL4			10
#define EVIL_ELITE_DAMAGE_ADD_LVL5			10

#define EVIL_MONSTER_RESIST_KNOCKBACK			50%

#define EVIL_MONSTER_HP_ADD_LVL2			50
#define EVIL_MONSTER_HP_ADD_LVL3			50
#define EVIL_MONSTER_HP_ADD_LVL4			50
#define EVIL_MONSTER_HP_ADD_LVL5			50
#define EVIL_MONSTER_HP_ADD_LVL10			50

#define EVIL_MONSTER_DAMAGE_ADD_LVL2			30
#define EVIL_MONSTER_DAMAGE_ADD_LVL3			30
#define EVIL_MONSTER_DAMAGE_ADD_LVL4			30
#define EVIL_MONSTER_DAMAGE_ADD_LVL5			30
#define EVIL_MONSTER_DAMAGE_ADD_LVL10			30

#define MINI_HORDE_HP_ADD_LVL2				20
#define MINI_HORDE_HP_ADD_LVL3				20
#define MINI_HORDE_HP_ADD_LVL4				20
#define MINI_HORDE_HP_ADD_LVL5				20
#define MINI_HORDE_HP_ADD_LVL6				20
#define MINI_HORDE_HP_ADD_LVL7				20
#define MINI_HORDE_HP_ADD_LVL8				20
#define MINI_HORDE_HP_ADD_LVL9				20
#define MINI_HORDE_HP_ADD_LVL10				20

#define MINI_HORDE_DAMAGE_ADD_LVL2			10
#define MINI_HORDE_DAMAGE_ADD_LVL3			10
#define MINI_HORDE_DAMAGE_ADD_LVL4			10
#define MINI_HORDE_DAMAGE_ADD_LVL5			10
#define MINI_HORDE_DAMAGE_ADD_LVL6			10
#define MINI_HORDE_DAMAGE_ADD_LVL7			10
#define MINI_HORDE_DAMAGE_ADD_LVL8			10
#define MINI_HORDE_DAMAGE_ADD_LVL9			10
#define MINI_HORDE_DAMAGE_ADD_LVL10			10


//------------ Auto resolve level up bonuses -----------------

#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL2		20
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL3		20
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL4		20
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL5		20
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL6		10
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL7		10
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL8		10
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL9		10
#define AUTORESOLVE_GOOD_SOLDIER_HP_ADD_LVL10		10

;// TODO: finish for other unit types


#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL2	10
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL3	10
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL4	10
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL5	10
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL6	5
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL7	5
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL8	5
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL9	5
#define AUTORESOLVE_GOOD_SOLDIER_DAMAGE_ADD_LVL10	5


;// TODO: finish for other unit types


;--------------Upgrade Bonuses--------------------------

#define AUTORESOLVE_GOOD_SOLDIER_UPGRADE_DAMAGE_ADD	40


;// TODO: finish for other unit types



;*************************************************************
;*							     *
;*			GOOD FACTIONS			     *
;*							     *
;*************************************************************

;------------------------SHIP------------------------

#define	GOODMEN_SHIP_VISION_RANGE		 	500

#define GOOD_BOMBARDSHIP_BUILDTIME			45
#define GOOD_BOMBARDSHIP_BUILDCOST			3000
#define GOOD_BOMBARDSHIP_HEALTH				1000

#define GOOD_FIRESHIP_BUILDTIME				15
#define GOOD_FIRESHIP_BUILDCOST				500
#define GOOD_FIRESHIP_HEALTH				1000

#define GOOD_BATTLESHIP_BUILDTIME			20
#define GOOD_BATTLESHIP_BUILDCOST			750
#define GOOD_BATTLESHIP_HEALTH				1000

#define	GOOD_SHIP_LOVEOFTHESEA_BUILDCOST		200
#define	GOOD_SHIP_LOVEOFTHESEA_BUILDTIME		10

#define	GOOD_SHIP_CIRDANSCRAFTWORK_BUILDCOST		300
#define	GOOD_SHIP_CIRDANSCRAFTWORK_BUILDTIME		10

#define	GOOD_SHIP_REGEN_AMOUNT				10
#define	GOOD_SHIP_REGEN_DELAY				1000
#define	GOOD_SHIP_HEAL_DELAY				5000

#define GOOD_SHIP_ANTI_SHIP_WEAPON_RANGE		350
#define GOOD_SHIP_ANTI_SHIP_WEAPON_DAMAGE		25
#define GOOD_SHIP_ANTI_SHIP_SPEED			120

#define GOOD_SHIP_BOMBARD_WEAPON_RANGE			1000
#define GOOD_SHIP_BOMBARD_WEAPON_MIN_RANGE		400
#define GOOD_SHIP_BOMBARD_WEAPON_DAMAGE			500
#define GOOD_SHIP_BOMBARD_WEAPON_FIRE_RATE		5000
#define GOOD_SHIP_BOMBARD_SPEED				80

#define GOOD_SHIP_TRANSPORT_SPEED			70

#define GOOD_FIRE_SHIP_RANGE				5
#define GOOD_FIRE_SHIP_TIMEOUT				30000	; time it takes for the ship to die
#define GOOD_FIRE_SHIP_WHIRLPOOL_TIMEOUT		10000	; time the pool hangs around for
#define GOOD_FIRE_SHIP_WHIRLPOOL_RADIUS			200
#define GOOD_FIRE_SHIP_WHIRLPOOL_DAMAGE_RADIUS_01	100	; The smaller more damaging centre
#define GOOD_FIRE_SHIP_WHIRLPOOL_DAMAGE_RADIUS_02	190	; The outer less damaging ring
#define GOOD_FIRE_SHIP_WHIRLPOOL_DAMAGE_AMOUNT_01	80
#define GOOD_FIRE_SHIP_WHIRLPOOL_DAMAGE_AMOUNT_02	20

#define GOOD_SHIP_FIRE_DAMAGE_TIMEOUT			500	; The tick timeout.
#define GOOD_SHIP_FIRE_DAMAGE_AMOUNT			5	; The damage dealt per tick.
#define GOOD_SHIP_FIRE_DAMAGE_HEALTH			#MULTIPLY( GOOD_BATTLESHIP_HEALTH 0.8 )	; The amount of damage we take before catching fire



;******************************************************
;*						      *
;*		    EVIL FACTIONS 		      *
;*						      *
;******************************************************


;//=====================ANGMAR======================== 
;//=====================UNITS=========================


;------------------------PORTER------------------------
#define ANGMAR_PORTER_BUILDCOST				500
#define ANGMAR_PORTER_BUILDTIME				30
#define ANGMAR_PORTER_HEALTH				500
#define ANGMAR_PORTER_HEALTH_DAMAGED			250
#define ANGMAR_PORTER_HEALTH_RECOVERY_TIME		10000
#define	ANGMAR_PORTER_VISION_RANGE 			300
#define	ANGMAR_PORTER_SHROUD_RANGE 			100

#define	ANGMAR_PORTER_BOUNTY_VALUE       		125

;------------------------PEASANT----------------------

#define ANGMAR_PEASANT_BUILDCOST			80
#define ANGMAR_PEASANT_BUILDTIME			20 	; 15
#define ANGMAR_PEASANT_HEALTH				60
#define ANGMAR_PEASANT_HEALTH_DAMAGED			60
#define ANGMAR_PEASANT_HEALTH_RECOVERY_TIME		10000
#define	ANGMAR_PEASANT_VISION_RANGE 			100

#define	ANGMAR_PEASANT_BOUNTY_VALUE       		20

;------------------------DARKDUNEDAIN-----------------

#define ANGMAR_DARKDUNEDAIN_BUILDCOST                	400	; originally 300
#define ANGMAR_DARKDUNEDAIN_BUILDTIME                  	30 	; 20
#define ANGMAR_DARKDUNEDAIN_HEALTH                    	400
#define ANGMAR_DARKDUNEDAIN_HEALTH_DAMAGED            	100
#define ANGMAR_DARKDUNEDAIN_HEALTH_RECOVERY_TIME    	10000

#define ANGMAR_DARKDUNEDAIN_VISION_RANGE              	175 
#define ANGMAR_DARKDUNEDAIN_SHROUD_RANGE              	400 

#define ANGMAR_DARKDUNEDAIN_HORDE_VISION_RANGE        	175
#define ANGMAR_DARKDUNEDAIN_HORDE_SHROUD_RANGE	 	400


#define ANGMAR_SWORD_DAMAGE                     	100
#define ANGMAR_SWORD_DAMAGE_UPGRADE             	200
#define ANGMAR_SWORD_PREATTACKDELAY      		1250
#define ANGMAR_SWORD_DELAYBETWEENSHOTS  		1000
#define ANGMAR_SWORD_FIRINGDURATION     		2500
#define ANGMAR_DARKDUNEDAIN_BOUNTY_VALUE                11	; originally 5

;------------------------RANGER-----------------------

#define ANGMAR_RANGER_BUILDCOST                 	500
#define ANGMAR_RANGER_BUILDTIME                  	40
#define ANGMAR_RANGER_HEALTH                    	250	;400 	; 120
#define ANGMAR_RANGER_HEALTH_DAMAGED            	200 	; 120
#define ANGMAR_RANGER_HEALTH_RECOVERY_TIME    		10000
#define ANGMAR_RANGER_VISION_RANGE              	480
#define ANGMAR_RANGER_HORDE_VISION_RANGE        	470
#define ANGMAR_RANGER_HORDE_SHROUD_RANGE        	500

#define ANGMAR_RANGER_RANGE                     	400
#define ANGMAR_RANGER_BOMBARD_MINRANGE          	100
#define ANGMAR_RANGER_BOMBARD_MAXRANGE          	400

#define ANGMAR_RANGER_DAMAGE                     	100
#define ANGMAR_RANGER_SWORD_DAMAGE               	40
#define ANGMAR_RANGER_SWORD_DAMAGE_UPGRADE       	80

#define ANGMAR_RANGER_DAMAGE_FROST	        	50 	; 10 
#define ANGMAR_RANGER_DAMAGE_FROST_PIERCE	 	100 	; 20

#define ANGMAR_RANGER_BOW_PREATTACKDELAY       		1000
#define ANGMAR_RANGER_BOW_RELOADTIME_MIN       		1500
#define ANGMAR_RANGER_BOW_RELOADTIME_MAX       		2000

#define ANGMAR_RANGER_BOUNTY_VALUE               	10

#define ANGMAR_RANGER_LONGSHOT_RANGE			9999
#define ANGMAR_RANGER_LONGSHOT_CURSOR_RADIUS		80
#define ANGMAR_RANGER_LONGSHOT_DAMAGE			200
#define ANGMAR_RANGER_LONGSHOT_RELOAD_TIME		240000

;------------------------DireWolf---------------------

#define ANGMAR_DIREWOLF_BUILDCOST                	250
#define ANGMAR_DIREWOLF_BUILDTIME                  	30 	; 20
#define ANGMAR_DIREWOLF_HEALTH                    	250
#define ANGMAR_DIREWOLF_HEALTH_DAMAGED            	100
#define ANGMAR_DIREWOLF_HEALTH_RECOVERY_TIME    	10000

#define ANGMAR_DIREWOLF_VISION_RANGE              	175 
#define ANGMAR_DIREWOLF_SHROUD_RANGE              	400 

#define ANGMAR_DIREWOLF_HORDE_VISION_RANGE        	175
#define ANGMAR_DIREWOLF_HORDE_SHROUD_RANGE	 	400


#define ANGMAR_DIREWOLF_SWORD                      	75
#define ANGMAR_DIREWOLF_SWORD_UPGRADE             	80
#define ANGMAR_DIREWOLF_SWORD_PREATTACKDELAY      	800
#define ANGMAR_DIREWOLF_SWORD_DELAYBETWEENSHOTS  	1000
#define ANGMAR_DIREWOLF_SWORD_FIRINGDURATION     	400
#define ANGMAR_DIREWOLF_BOUNTY_VALUE                	8	; originally 5

;--------------------Wolf Riders---------------------
#define ANGMAR_WOLFRIDER_BUILDCOST			400
#define ANGMAR_WOLFRIDER_BUILDTIME			30
#define ANGMAR_WOLFRIDER_HEALTH				200
#define ANGMAR_WOLFRIDER_HEALTH_DAMAGED			100
#define ANGMAR_WOLFRIDER_HEALTH_RECOVERY_TIME		10000

#define ANGMAR_WOLFRIDER_DAMAGE				50
#define ANGMAR_WOLFRIDER_DAMAGE_UPGRADE			80
#define ANGMAR_WOLFRIDER_PREATTACKDELAY      		800
#define ANGMAR_WOLFRIDER_DELAYBETWEENSHOTS  		1000
#define ANGMAR_WOLFRIDER_FIRINGDURATION     		400

#define ANGMAR_WOLFRIDER_BOUNTY_VALUE			10

;------------------------SNOWTROLL--------------------

#define ANGMAR_SNOWTROLL_BUILDCOST			750	; originally 600 
#define ANGMAR_SNOWTROLL_BUILDTIME			40
#define	ANGMAR_SNOWTROLL_VISION_RANGE 			175
#define	ANGMAR_SNOWTROLL_SHROUD_RANGE			300
#define	ANGMAR_SNOWTROLL_HORDE_VISION_RANGE 		175
#define ANGMAR_SNOWTROLL_HEALTH				1000
#define ANGMAR_SNOWTROLL_HEALTH_DAMAGED			600
#define ANGMAR_SNOWTROLL_HEALTH_RECOVERY_TIME		5000

#define ANGMAR_SNOWTROLL_STAB_PREATTACKDELAY 		600
#define ANGMAR_SNOWTROLL_STAB_DELAYBETWEENSHOTS 	900
#define ANGMAR_SNOWTROLL_STAB_FIRINGDURATION 		900
#define ANGMAR_SNOWTROLL_STAB_DAMAGE			100
#define ANGMAR_SNOWTROLL_DAMAGE_UPGRADE			200
#define	ANGMAR_SNOWTROLL_BOUNTY_VALUE			31

#define	ANGMAR_SNOWTROLL_PICK_DAMAGE			100
#define	ANGMAR_SNOWTROLL_PICK_DAMAGE_UPGRADE		200

#define	ANGMAR_SNOWTROLL_DELAYBETWEENSHOTS		1500
#define	ANGMAR_SNOWTROLL_PREATTACKDELAY			400
#define	ANGMAR_SNOWTROLL_FIRINGDURATION			2100

;------------------------HILLTROLL--------------------

#define ANGMAR_HILLTROLL_BUILDCOST			600
#define ANGMAR_HILLTROLL_BUILDTIME			40
#define	ANGMAR_HILLTROLL_VISION_RANGE 			175
#define	ANGMAR_HILLTROLL_SHROUD_RANGE			300
#define	ANGMAR_HILLTROLL_HORDE_VISION_RANGE 		175
#define ANGMAR_HILLTROLL_HEALTH				1000
#define ANGMAR_HILLTROLL_HEALTH_DAMAGED			500
#define ANGMAR_HILLTROLL_HEALTH_RECOVERY_TIME		5000

#define ANGMAR_HILLTROLL_STAB_PREATTACKDELAY 		600
#define ANGMAR_HILLTROLL_STAB_DELAYBETWEENSHOTS 	900
#define ANGMAR_HILLTROLL_STAB_FIRINGDURATION 		900
#define ANGMAR_HILLTROLL_STAB_DAMAGE			100
#define ANGMAR_HILLTROLL_DAMAGE_UPGRADE			200
#define	ANGMAR_HILLTROLL_BOUNTY_VALUE			18

#define	ANGMAR_HILLTROLL_HAMMER_DAMAGE			150
#define	ANGMAR_HILLTROLL_HAMMER_DAMAGE_UPGRADE		300

#define	ANGMAR_HILLTROLL_DELAYBETWEENSHOTS		1500
#define	ANGMAR_HILLTROLL_PREATTACKDELAY			1000
#define	ANGMAR_HILLTROLL_FIRINGDURATION			2100

;------------------------necromancer------------------

#define ANGMAR_NECROMANCER_BUILDCOST                	500
#define ANGMAR_NECROMANCER_BUILDTIME                  	60  	; 20
#define ANGMAR_NECROMANCER_HEALTH                    	300
#define ANGMAR_NECROMANCER_HEALTH_DAMAGED            	100
#define ANGMAR_NECROMANCER_HEALTH_RECOVERY_TIME    	10000

#define ANGMAR_NECROMANCER_VISION_RANGE              	250
#define ANGMAR_NECROMANCER_SHROUD_RANGE              	400 

#define ANGMAR_NECROMANCER_HORDE_VISION_RANGE        	250
#define ANGMAR_NECROMANCER_HORDE_SHROUD_RANGE	 	400


#define ANGMAR_NECROMANCER_BOUNTY_VALUE                	15


;-------------------RHUDAUR SPEARMEN-------------------

#define ANGMAR_RHUDAURSPEAR_BUILDCOST			250	; originally 400 
#define ANGMAR_RHUDAURSPEAR_BUILDTIME			20
#define	ANGMAR_RHUDAURSPEAR_VISION_RANGE 		175
#define	ANGMAR_RHUDAURSPEAR_HORDE_VISION_RANGE 		175
#define	ANGMAR_RHUDAURSPEAR_SHROUD_RANGE 		400
#define ANGMAR_RHUDAURSPEAR_HEALTH			150
#define ANGMAR_RHUDAURSPEAR_HEALTH_DAMAGED		75
#define ANGMAR_RHUDAURSPEAR_HEALTH_RECOVERY_TIME	10000

#define ANGMAR_RHUDAURSPEAR_HORDE_THREAT 		100

#define ANGMAR_RHUDAURSPEAR_PREATTACKDELAY 		567
#define ANGMAR_RHUDAURSPEAR_DELAYBETWEENSHOTS 		633
#define ANGMAR_RHUDAURSPEAR_FIRINGDURATION 		633

#define	ANGMAR_RHUDAURSPEAR_BOUNTY_VALUE		2 	; Originally 8

#define ANGMAR_RHUDAURSPEAR_DAMAGE			40
#define ANGMAR_RHUDAURSPEAR_RADIUS			0

#define ANGMAR_RHUDAURSPEAR_TORCH_DAMAGE		30
#define ANGMAR_RHUDAURSPEAR_TORCH_RADIUS		0

#define ANGMAR_RHUDAURSPEAR_ROCK_DAMAGE			40

#define ANGMAR_RHUDAURSPEAR_THROWN_TORCH_DAMAGE		40
#define ANGMAR_RHUDAURSPEAR_THROWN_TORCH_RADIUS		20

#define ANGMAR_RHUDAURSPEAR_PILLAGE_AMOUNT		2
#define ANGMAR_RHUDAURSPEAR_PILLAGE_NUM_DAMAGES		1
#define ANGMAR_RHUDAURSPEAR_PILLAGE_FILTER		NONE +STRUCTURE

#define ANGMAR_RHUDAURSPEAR_SUMMON_DURATION		120000

;-------------------RHUDAUR SLINGERS-------------------

#define ANGMAR_RHUDAURSLING_BUILDCOST			200	; originally 400
#define ANGMAR_RHUDAURSLING_BUILDTIME			20
#define	ANGMAR_RHUDAURSLING_VISION_RANGE 		375	; originally 175
#define	ANGMAR_RHUDAURSLING_HORDE_VISION_RANGE 		350 	; originally 175
#define	ANGMAR_RHUDAURSLING_SHROUD_RANGE 		400
#define ANGMAR_RHUDAURSLING_HEALTH			100	;150
#define ANGMAR_RHUDAURSLING_HEALTH_DAMAGED		50	;75
#define ANGMAR_RHUDAURSLING_HEALTH_RECOVERY_TIME	10000

#define ANGMAR_RHUDAURSLING_PREATTACKDELAY 		567
#define ANGMAR_RHUDAURSLING_DELAYBETWEENSHOTS 		633
#define ANGMAR_RHUDAURSLING_FIRINGDURATION 		633

#define	ANGMAR_RHUDAURSLING_BOUNTY_VALUE		1	; originally 8

#define ANGMAR_RHUDAURSLING_DAMAGE			30	;40 	Tried 25 (too low)
#define ANGMAR_RHUDAURSLING_RADIUS			0

#define ANGMAR_RHUDAURSLING_TORCH_DAMAGE		30
#define ANGMAR_RHUDAURSLING_TORCH_RADIUS		0

#define ANGMAR_RHUDAURSLING_ROCK_DAMAGE			40

#define ANGMAR_RHUDAURSLING_THROWN_TORCH_DAMAGE		40
#define ANGMAR_RHUDAURSLING_THROWN_TORCH_RADIUS		20

#define ANGMAR_RHUDAURSLING_PILLAGE_AMOUNT		2
#define ANGMAR_RHUDAURSLING_PILLAGE_NUM_DAMAGES		1
#define ANGMAR_RHUDAURSLING_PILLAGE_FILTER		NONE +STRUCTURE

#define ANGMAR_RHUDAURSLING_SUMMON_DURATION		120000


;------------------GUNDABAD ORC WARRIORS---------------

#define ANGMAR_GUNDABAD_ORC_BUILDCOST			200
#define ANGMAR_GUNDABAD_ORC_DAMAGE			38

#define ANGMAR_GUNDABAD_ORC_BOUNTY_VALUE                0

;------------------------TROLLSLING--------------------

#define ANGMAR_TROLLSLING_BUILDCOST			600
#define ANGMAR_TROLLSLING_BUILDTIME			40
#define	ANGMAR_TROLLSLING_VISION_RANGE 			500
#define	ANGMAR_TROLLSLING_SHROUD_RANGE			500
#define	ANGMAR_TROLLSLING_HORDE_VISION_RANGE 		175
#define ANGMAR_TROLLSLING_HEALTH			800
#define ANGMAR_TROLLSLING_HEALTH_DAMAGED		150
#define ANGMAR_TROLLSLING_HEALTH_RECOVERY_TIME		10000

#define ANGMAR_TROLLSLING_STAB_PREATTACKDELAY 		600
#define ANGMAR_TROLLSLING_STAB_DELAYBETWEENSHOTS 	900
#define ANGMAR_TROLLSLING_STAB_FIRINGDURATION 		900
#define ANGMAR_TROLLSLING_STAB_DAMAGE			100
#define ANGMAR_TROLLSLING_DAMAGE_UPGRADE		200
#define	ANGMAR_TROLLSLING_BOUNTY_VALUE			14


;//======================ANGMAR========================
;//====================STRUCTURES======================

;//------------------------ANGMAR Fortress------------------

#define ANGMAR_FORTRESS_BUILDCOST				5000
#define ANGMAR_FORTRESS_BUILDTIME				120
#define ANGMAR_FORTRESS_VISION_RANGE				400
#define	ANGMAR_FORTRESS_SHROUD_CLEAR				800
#define ANGMAR_FORTRESS_HEALTH					7500
#define ANGMAR_FORTRESS_HEALTH_DAMAGED				5000
#define ANGMAR_FORTRESS_HEALTH_REALLY_DAMAGED			3500

#define	ANGMAR_FORTRESS_BOUNTY_VALUE				1250

#define ANGMAR_FORTRESS_WALL_EFFECTIVE_RADIUS			1500

#define ANGMAR_FORTRESS_FIRE_FUEL				50
#define ANGMAR_FORTRESS_FIRE_MAX_BURN_RATE			10
#define ANGMAR_FORTRESS_FIRE_DECAY				1
#define ANGMAR_FORTRESS_FIRE_RESISTANCE				5

//Gorgoroth Spire
#define ANGMAR_SANCTUM_BUILDCOST				2500
#define ANGMAR_SANCTUM_BUILDTIME				30
#define	ANGMAR_SANCTUM_ROCK_RANGE				2000
#define	ANGMAR_SANCTUM_ROCK_DAMAGE				1000
#define	ANGMAR_SANCTUM_FROST_DAMAGE				1000
#define ANGMAR_SANCTUM_ROCK_PREATTACKDELAY 			800
#define ANGMAR_SANCTUM_ROCK_DELAYBETWEENSHOTS 			6000
#define ANGMAR_SANCTUM_ROCK_FIRINGDURATION 			3000

#define ANGMAR_SIEGE_KEGS_BUILDCOST				1000
#define ANGMAR_SIEGE_KEGS_BUILDTIME				30

#define ANGMAR_OIL_CASK_BUILDCOST				1500
#define ANGMAR_OIL_CASK_BUILDTIME				30

#define ANGMAR_FORTRESS_BANNER_BUILDCOST			500
#define ANGMAR_FORTRESS_BANNER_BUILDTIME			5

#define ANGMAR_STONEWORK_BANNER_BUILDCOST			2000
#define ANGMAR_STONEWORK_BANNER_BUILDTIME			30

#define ANGMAR_FLAMING_MUNITIONS_BUILDCOST			1500
#define ANGMAR_FLAMING_MUNITIONS_BUILDTIME			30

#define ANGMAR_FORTRESS_DEATH_MASK_RANGE			300
#define ANGMAR_STONEWORK_KEEP_HEALTH_BONUS			0 	; Nerfing the Fortress Armor Upgrade -GB
#define ANGMAR_STONEWORK_KEEP_ARMOR_BONUS			50%
#define ANGMAR_STONEWORK_EXPANSION_HEALTH_BONUS		0 	; Nerfing the Fortress Armor Upgrade -GB
#define ANGMAR_STONEWORK_EXPANSION_ARMOR_BONUS			50%

;------------------------BARRACKS----------------------

#define ANGMAR_BARRACKS_BUILDCOST			400 	; originally 300
#define ANGMAR_BARRACKS_BUILDTIME			30
#define ANGMAR_BARRACKS_LVL2_UPGRADE_COST		300	; originally 500
#define ANGMAR_BARRACKS_LVL2_UPGRADE_TIME		30 	; originally 45
#define ANGMAR_BARRACKS_LVL3_UPGRADE_COST		500
#define ANGMAR_BARRACKS_LVL3_UPGRADE_TIME		60
#define	ANGMAR_BARRACKS_SHROUD_CLEAR			160
#define ANGMAR_BARRACKS_HEALTH				3000
#define ANGMAR_BARRACKS_HEALTH_DAMAGED			2000
#define ANGMAR_BARRACKS_HEALTH_REALLY_DAMAGED		1000

#define	ANGMAR_BARRACKS_LVL1_EXP_AWARD 			50
#define	ANGMAR_BARRACKS_LVL2_EXP_AWARD 			60
#define	ANGMAR_BARRACKS_LVL3_EXP_AWARD 			70

#define ANGMAR_BARRACKS_LVL2_EXP_NEEDED			100
#define ANGMAR_BARRACKS_LVL3_EXP_NEEDED 		1000

#define	ANGMAR_BARRACKS_LVL2_HP_ADD	 		1500
#define	ANGMAR_BARRACKS_LVL3_HP_ADD	 		1500

#define ANGMAR_BARRACKS_LVL2_BUILD_SPEED 		1.10   
#define ANGMAR_BARRACKS_LVL3_BUILD_SPEED 		1.25    

#define	ANGMAR_BARRACKS_BOUNTY_VALUE			75

;------------------------TROLLDEN---------------------

#define ANGMAR_TROLLDEN_BUILDCOST			450	; originally 1000 then 650
#define ANGMAR_TROLLDEN_BUILDTIME			45
#define	ANGMAR_TROLLDEN_SHROUD_CLEAR			160
#define	ANGMAR_TROLLDEN_VISION_RANGE			160
#define ANGMAR_TROLLDEN_HEALTH				1500
#define ANGMAR_TROLLDEN_HEALTH_DAMAGED			750
#define ANGMAR_TROLLDEN_HEALTH_REALLY_DAMAGED		500

#define	ANGMAR_TROLLDEN_LVL1_EXP_AWARD 			50
#define	ANGMAR_TROLLDEN_LVL2_EXP_AWARD 			60
#define	ANGMAR_TROLLDEN_LVL3_EXP_AWARD 			70

#define ANGMAR_TROLLDEN_LVL2_EXP_NEEDED			100
#define ANGMAR_TROLLDEN_LVL3_EXP_NEEDED 		1000

#define ANGMAR_TROLLDEN_LVL2_HP_ADD          		1500
#define ANGMAR_TROLLDEN_LVL3_HP_ADD          		1500

#define ANGMAR_TROLLDEN_LVL2_BUILD_SPEED 		1.10   
#define ANGMAR_TROLLDEN_LVL3_BUILD_SPEED 		1.25    

#define ANGMAR_TROLLDEN_LVL2_UPGRADE_COST		300	; originally 500
#define ANGMAR_TROLLDEN_LVL2_UPGRADE_TIME		30
#define ANGMAR_TROLLDEN_LVL3_UPGRADE_COST		500
#define ANGMAR_TROLLDEN_LVL3_UPGRADE_TIME		60

#define	ANGMAR_TROLLDEN_BOUNTY_VALUE			185

;------------------------HallofTwilight----------------

#define ANGMAR_HALLOFTWILIGHT_BUILDCOST			600	; originally 750
#define ANGMAR_HALLOFTWILIGHT_BUILDTIME			30
#define ANGMAR_HALLOFTWILIGHT_LVL2_UPGRADE_COST		500
#define ANGMAR_HALLOFTWILIGHT_LVL2_UPGRADE_TIME		30 	; originally 45
#define ANGMAR_HALLOFTWILIGHT_LVL3_UPGRADE_COST		500	; originally 500
#define ANGMAR_HALLOFTWILIGHT_LVL3_UPGRADE_TIME		60
#define	ANGMAR_HALLOFTWILIGHT_SHROUD_CLEAR		300
#define ANGMAR_HALLOFTWILIGHT_HEALTH			3000
#define ANGMAR_HALLOFTWILIGHT_HEALTH_DAMAGED		2000
#define ANGMAR_HALLOFTWILIGHT_HEALTH_REALLY_DAMAGED	1000

#define	ANGMAR_HALLOFTWILIGHT_LVL1_EXP_AWARD 		50
#define	ANGMAR_HALLOFTWILIGHT_LVL2_EXP_AWARD 		60
#define	ANGMAR_HALLOFTWILIGHT_LVL3_EXP_AWARD 		70

#define ANGMAR_HALLOFTWILIGHT_LVL2_EXP_NEEDED		100
#define ANGMAR_HALLOFTWILIGHT_LVL3_EXP_NEEDED 		1000

#define	ANGMAR_HALLOFTWILIGHT_LVL2_HP_ADD	 	1500
#define	ANGMAR_HALLOFTWILIGHT_LVL3_HP_ADD	 	1500

#define ANGMAR_HALLOFTWILIGHT_LVL2_BUILD_SPEED 		1.10   
#define ANGMAR_HALLOFTWILIGHT_LVL3_BUILD_SPEED 		1.25    

#define	ANGMAR_HALLOFTWILIGHT_BOUNTY_VALUE		75

;---------------DARK IRON FORGE-------------------

#define ANGMAR_FORGEWORKS_BUILDCOST			600
#define ANGMAR_FORGEWORKS_BUILDTIME			30
#define ANGMAR_FORGEWORKS_LVL2_UPGRADE_COST		500	; originally 500
#define ANGMAR_FORGEWORKS_LVL2_UPGRADE_TIME		45
#define ANGMAR_FORGEWORKS_LVL3_UPGRADE_COST		500	; originally 500
#define ANGMAR_FORGEWORKS_LVL3_UPGRADE_TIME		60
#define	ANGMAR_FORGEWORKS_SHROUD_CLEAR			300
#define ANGMAR_FORGEWORKS_HEALTH			3000
#define ANGMAR_FORGEWORKS_HEALTH_DAMAGED		2000
#define ANGMAR_FORGEWORKS_HEALTH_REALLY_DAMAGED		1000

#define	ANGMAR_FORGEWORKS_LVL1_EXP_AWARD 		50
#define	ANGMAR_FORGEWORKS_LVL2_EXP_AWARD 		60
#define	ANGMAR_FORGEWORKS_LVL3_EXP_AWARD 		70

#define ANGMAR_FORGEWORKS_LVL2_EXP_NEEDED		100
#define ANGMAR_FORGEWORKS_LVL3_EXP_NEEDED 		1000

#define	ANGMAR_FORGEWORKS_LVL2_HP_ADD	 		1500
#define	ANGMAR_FORGEWORKS_LVL3_HP_ADD	 		1500

#define ANGMAR_FORGEWORKS_LVL2_BUILD_SPEED 		1.10   
#define ANGMAR_FORGEWORKS_LVL3_BUILD_SPEED 		1.25    

#define	ANGMAR_FORGEWORKS_BOUNTY_VALUE			75

;------------------------MILL-------------------------

#define ANGMAR_MILL_BUILDCOST				300
#define ANGMAR_MILL_BUILDTIME				15 	; originally 30
#define ANGMAR_MILL_LVL2_UPGRADE_COST			500
#define ANGMAR_MILL_LVL2_UPGRADE_TIME			45
#define ANGMAR_MILL_LVL3_UPGRADE_COST			500
#define ANGMAR_MILL_LVL3_UPGRADE_TIME			60
#define	ANGMAR_MILL_SHROUD_CLEAR			300
#define ANGMAR_MILL_HEALTH				2100
#define ANGMAR_MILL_HEALTH_DAMAGED			1050
#define ANGMAR_MILL_HEALTH_REALLY_DAMAGED		 550

#define	ANGMAR_MILL_LVL1_EXP_AWARD 			50
#define	ANGMAR_MILL_LVL2_EXP_AWARD 			60
#define	ANGMAR_MILL_LVL3_EXP_AWARD 			70

#define ANGMAR_MILL_LVL2_EXP_NEEDED			100
#define ANGMAR_MILL_LVL3_EXP_NEEDED 			1000

#define	ANGMAR_MILL_LVL2_HP_ADD	 			1500
#define	ANGMAR_MILL_LVL3_HP_ADD	 			1500

#define ANGMAR_MILL_LVL2_BUILD_SPEED 			1.10   
#define ANGMAR_MILL_LVL3_BUILD_SPEED 			1.25    

#define	ANGMAR_MILL_BOUNTY_VALUE			75

;------------------------aNGMARWallHubSmall-----------------

#define ANGMAR_WALLHUB_SMALL_BUILDCOST				200
#define ANGMAR_WALLHUB_SMALL_BUILDTIME				30
#define ANGMAR_WALLHUB_SMALL_VISION_RANGE			160
#define ANGMAR_WALLHUB_SMALL_SHROUD_CLEAR			160
#define ANGMAR_WALLHUB_SMALL_HEALTH				3000
#define ANGMAR_WALLHUB_SMALL_HEALTH_DAMAGED			2000
#define ANGMAR_WALLHUB_SMALL_HEALTH_REALLY_DAMAGED		1000
#define ANGMAR_WALL_HUB_SMALL_EXP_AWARD			10

;------------------------ANGMAR Walls Small------------------

#define ANGMAR_WALLSEGMENT_SMALL_BUILDCOST			50
#define ANGMAR_WALLSEGMENT_SMALL_BUILDTIME			15
#define ANGMAR_WALLSEGMENT_SMALL_VISION_RANGE			160
#define ANGMAR_WALLSEGMENT_SMALL_SHROUD_CLEAR			160
#define ANGMAR_WALLSEGMENT_SMALL_HEALTH			3000
#define ANGMAR_WALLSEGMENT_SMALL_HEALTH_DAMAGED		2000
#define ANGMAR_WALLSEGMENT_SMALL_HEALTH_REALLY_DAMAGED		1000

;------------------------ANGMARWallGateSmall-----------------

#define ANGMAR_WALLGATE_SMALL_BUILDCOST			500
#define ANGMAR_WALLGATE_SMALL_BUILDTIME			30
#define ANGMAR_WALLGATE_SMALL_VISION_RANGE			160
#define ANGMAR_WALLGATE_SMALL_SHROUD_CLEAR			160
#define ANGMAR_WALLGATE_SMALL_HEALTH				2000
#define ANGMAR_WALLGATE_SMALL_HEALTH_DAMAGED			1500
#define ANGMAR_WALLGATE_SMALL_HEALTH_REALLY_DAMAGED		500
#define ANGMAR_WALL_GATE_SMALL_EXP_AWARD			10

;-----------------ANGMARWallPosternGateSmall----------------

#define ANGMAR_POSTERNGATE_SMALL_BUILDCOST			300
#define ANGMAR_POSTERNGATE_SMALL_BUILDTIME			15
#define ANGMAR_POSTERNGATE_SMALL_VISION_RANGE			160
#define ANGMAR_POSTERNGATE_SMALL_SHROUD_CLEAR			160
#define ANGMAR_POSTERNGATE_SMALL_HEALTH			1000
#define ANGMAR_POSTERNGATE_SMALL_HEALTH_DAMAGED		1500
#define ANGMAR_POSTERNGATE_SMALL_HEALTH_REALLY_DAMAGED		750
#define ANGMAR_WALL_POSTERN_GATE_SMALL_EXP_AWARD	10

;-------------------ANGMARWallTowerSmall--------------------

#define ANGMAR_WALLTOWER_SMALL_BUILDCOST			500
#define ANGMAR_WALLTOWER_SMALL_BUILDTIME			15
#define ANGMAR_WALLTOWER_SMALL_VISION_RANGE			200
#define ANGMAR_WALLTOWER_SMALL_SHROUD_CLEAR			250
#define ANGMAR_WALLTOWER_SMALL_HEALTH				3000
#define ANGMAR_WALLTOWER_SMALL_HEALTH_DAMAGED			2000
#define ANGMAR_WALLTOWER_SMALL_HEALTH_REALLY_DAMAGED		1000
#define ANGMAR_WALL_TOWER_SMALL_EXP_AWARD			10

;------------------ANGMARWallCatapultSmall------------------

#define ANGMAR_WALLCATAPULT_SMALL_BUILDCOST			1200
#define ANGMAR_WALLCATAPULT_SMALL_BUILDTIME			30
#define ANGMAR_WALLCATAPULT_SMALL_VISION_RANGE			160
#define ANGMAR_WALLCATAPULT_SMALL_SHROUD_CLEAR			160
#define ANGMAR_WALLCATAPULT_SMALL_HEALTH			3000
#define ANGMAR_WALLCATAPULT_SMALL_HEALTH_DAMAGED		2000
#define ANGMAR_WALLCATAPULT_SMALL_HEALTH_REALLY_DAMAGED	1000
#define ANGMAR_WALL_CATAPULT_SMALL_EXP_AWARD			10

;------------------------WALL--------------------------------
	
#define ANGMAR_CASTLE_WALL_HEALTH				5000
#define ANGMAR_WALL_HUB_COST					300
#define ANGMAR_WALL_SEGMENT_COST				200
#define ANGMAR_WALL_SEGMENT_BUILDTIME				15


;-------------------------Stone Thrower-----------------------------

;------------------------CATAPULT-------------

#define ANGMAR_STONETHROWER_BUILDCOST			300
#define ANGMAR_STONETHROWER_BUILDTIME			30 
#define ANGMAR_STONETHROWER_HEALTH			2000 	; 240
#define ANGMAR_STONETHROWER_HEALTH_DAMAGED		1000
#define	ANGMAR_STONETHROWER_VISION_RANGE 		550

#define	ANGMAR_STONETHROWER_LVL1_EXP_AWARD 		10

#define ANGMAR_STONETHROWER_ROCK_PREATTACKDELAY 	666
#define ANGMAR_STONETHROWER_ROCK_DELAYBETWEENSHOTS 	8000
#define ANGMAR_STONETHROWER_ROCK_FIRINGDURATION 	2880

#define	ANGMAR_STONETHROWER_ROCK_RANGE			400 	; 400
#define ANGMAR_STONETHROWER_ROCK_MINRANGE		300
#define	ANGMAR_STONETHROWER_ROCK_DAMAGE			500	;400
#define	ANGMAR_STONETHROWER_ROCK_DAMAGEUPGRADE		900	;400

#define	ANGMAR_STONETHROWER_FROST_DAMAGE		100
#define ANGMAR_STONETHROWER_ICE_PREATTACKDELAY 		666
#define ANGMAR_STONETHROWER_ICE_DELAYBETWEENSHOTS 	8000
#define ANGMAR_STONETHROWER_ICE_FIRINGDURATION 		2880
#define	ANGMAR_STONETHROWER_ICE_RANGE			420 	; 400
#define	ANGMAR_STONETHROWER_ICE_DAMAGE			500
#define	ANGMAR_STONETHROWER_BOUNTY_VALUE		125
#define ANGMAR_STONETHROWER_EXPANSION_AIM_DELTA		90


;//==============Angmar Tech & Upgrades==================
;//======================================================


#define ANGMAR_TECH_BASIC_TRAINING_BUILDCOST		1000
#define ANGMAR_TECH_BASIC_TRAINING_BUILDTIME		60

#define ANGMAR_TECH_DARKIRON_BLADES_BUILDCOST		1000	; 300
#define ANGMAR_TECH_DARKIRON_BLADES_BUILDTIME		30

#define ANGMAR_TECH_SIEGE_HAMMER_BUILDCOST		1000	; 300
#define ANGMAR_TECH_SIEGE_HAMMER_BUILDTIME		30

#define ANGMAR_TECH_HEAVY_COLLAR_BUILDCOST		500	; 300
#define ANGMAR_TECH_HEAVY_ARMOR_BUILDCOST		1000	; 300
#define ANGMAR_TECH_HEAVY_ARMOR_BUILDTIME		30

#define ANGMAR_TECH_ICE_SHOT_BUILDCOST			1000	; 300
#define ANGMAR_TECH_ICE_SHOT_BUILDTIME			30

#define ANGMAR_TECH_ICE_ARROWS_BUILDCOST		1000	; 300
#define ANGMAR_TECH_ICE_ARROWS_BUILDTIME		30

#define ANGMAR_TECH_SOUL_FREEZE_BUILDCOST		0	; 300
#define ANGMAR_TECH_SOUL_FREEZE_BUILDTIME		0

#define ANGMAR_TECH_CORPSE_RAIN_BUILDCOST		0	; 300
#define ANGMAR_TECH_CORPSE_RAIN_BUILDTIME		0

#define ANGMAR_TECH_WELL_OF_SOULS_BUILDCOST		0	; 300
#define ANGMAR_TECH_WELL_OF_SOULS_BUILDTIME		0

;-----
#define ANGMAR_PERSONAL_BASIC_TRAINING_BUILDCOST	300
#define ANGMAR_PERSONAL_BASIC_TRAINING_BUILDTIME	10

#define ANGMAR_PERSONAL_DARKIRON_BLADES_BUILDCOST	300
#define ANGMAR_PERSONAL_DARKIRON_BLADES_BUILDTIME	10

#define ANGMAR_PERSONAL_SIEGE_HAMMER_BUILDCOST		300
#define ANGMAR_PERSONAL_SIEGE_HAMMER_BUILDTIME		10

#define ANGMAR_PERSONAL_HEAVY_ARMOR_BUILDCOST		300
#define ANGMAR_PERSONAL_HEAVY_ARMOR_BUILDTIME		10

#define ANGMAR_PERSONAL_ICE_SHOT_BUILDCOST		300
#define ANGMAR_PERSONAL_ICE_SHOT_BUILDTIME		10

#define ANGMAR_PERSONAL_ICE_ARROWS_BUILDCOST		300
#define ANGMAR_PERSONAL_ICE_ARROWS_BUILDTIME		10

#define ANGMAR_PERSONAL_SOUL_FREEZE_BUILDCOST		300
#define ANGMAR_PERSONAL_SOUL_FREEZE_BUILDTIME		10

#define ANGMAR_PERSONAL_CORPSE_RAIN_BUILDCOST		500
#define ANGMAR_PERSONAL_CORPSE_RAIN_BUILDTIME		10

#define ANGMAR_PERSONAL_WELL_OF_SOULS_BUILDCOST		400
#define ANGMAR_PERSONAL_WELL_OF_SOULS_BUILDTIME		10



//=======================ANGMAR=========================
//=======================POWERS=========================

//--------------------SPELL BOOK POWERS-----------------

#define BLIGHT_EFFECT_RADIUS				200
#define BLIGHT_EFFECT_DECAL_SIZE        		400 	; 2x the radius guv'
#define BLIGHT_EFFECT_DURATION				180000
#define BLIGHT_EFFECT_FADE_ONE          		2000
#define BLIGHT_EFFECT_FADE_TWO         			298000
#define BLIGHT_EFFECT_FADE_PEAK         		8000
#define BLIGHT_TYPE_SPELL_OBJECT_FILTER			ANY +GondorFarm +DwarvenMineShaft +ElvenMallornTree +WildMineShaft +IsengardFurnace +MordorSlaughterHouse +ArnorFarm +AngmarMill +MordorLumberMill +IsengardLumberMill +WildLumberMill ENEMIES

#define FROZEN_LAND_EFFECT_DECAL_SIZE        		400 	; 2x the radius guv'
#define FROZEN_LAND_EFFECT_DURATION			300000  ; In Milliseconds	ms = 5 minutes
#define FROZEN_LAND_EFFECT_FADE_ONE          		3500   	; In Milliseconds
#define FROZEN_LAND_EFFECT_FADE_TWO          		8000  ; In Milliseconds    296500
#define FROZEN_LAND_EFFECT_FADE_PEAK         		288500   ; In Milliseconds

#define CHILL_WIND_EFFECT_RADIUS			150
#define	CHILL_WIND_EFFECT_STRENGTH			100.0	; strength of pull force
#define CHILL_WIND_EFFECT_ZMULT				0.75	; multiplier to how high they fly
#define CHILL_WIND_EFFECT_DAMAGE			20
#define CHILL_WIND_TYPE_SPELL_OBJECT_FILTER		ANY +INFANTRY +CAVALRY +MONSTER +HORDE ENEMIES -BIG_MONSTER -MordorSauron -MordorSauron_RingHero -ElvenGaladriel -ElvenGaladriel_RingHero 


#define SNOWBIND_EFFECT_RADIUS				200
#define SNOWBIND_EFFECT_DURATION			30000
#define SNOWBIND_TYPE_SPELL_OBJECT_FILTER		ANY ENEMIES ALLIES +STRUCTURE

#define AVALANCHE_DAMAGE				150
#define AVALANCHE_RADIUS				40

//------------------------UNITS------------------------

#define ANGMAR_NECRO_BUILDCOST				500
#define ANGMAR_NECRO_BUILDTIME				30
#define ANGMAR_NECRO_HORDE_VISION_RANGE			250
#define ANGMAR_NECRO_SHROUD_RANGE			300
#define ANGMAR_NECRO_HORDE_THREAT			100


#define ANGMAR_NECRO_DEATH_MASK_RANGE			75
#define ANGMAR_NECRO_DEATH_MASK_DURATION		3000

#define ANGMAR_NECRO_BLACK_ICE_DECAL_SIZE        	200 	; 2x the radius guv'
#define ANGMAR_NECRO_BLACK_ICE_START_RANGE		300
#define ANGMAR_NECRO_BLACK_ICE_ATTACK_RADIUS		100
#define ANGMAR_NECRO_BLACK_ICE_DURATION			20000
#define ANGMAR_NECRO_BLACK_ICE_WEAPON_ID            	2

#define ANGMAR_NECRO_SOUL_FREEZE_START_RANGE		300
#define ANGMAR_NECRO_SOUL_FREEZE_ATTACK_RADIUS		75
#define ANGMAR_NECRO_SOUL_FREEZE_DURATION		17000
#define ANGMAR_NECRO_SOUL_FREEZE_WEAPON_ID          	3

#define ANGMAR_NECRO_CORPSE_RAIN_START_RANGE		300
#define ANGMAR_NECRO_CORPSE_RAIN_ATTACK_RADIUS		100
#define ANGMAR_NECRO_CORPSE_RAIN_DAMAGE			50
#define ANGMAR_NECRO_CORPSE_RAIN_DOT_DAMAGE		25
#define ANGMAR_NECRO_CORPSE_RAIN_NUM_CORPSES		6
#define ANGMAR_NECRO_CORPSE_RAIN_WEAPON_ID          	4

#define ANGMAR_NECRO_WELL_OF_SOULS_START_RANGE		250
#define ANGMAR_NECRO_WELL_OF_SOULS_ATTACK_RADIUS	75	
#define ANGMAR_NECRO_WELL_OF_SOULS_DAMAGE		30
#define ANGMAR_NECRO_WELL_OF_SOULS_BUFF_RADIUS		320	; RotWK originally 400
#define ANGMAR_NECRO_WELL_OF_SOULS_HEAL_AMT         	0.5 	;// as percent so 1.0f is most likely 100.0% heal 0.5% would be 1/2 or 50%
#define ANGMAR_NECRO_WELL_OF_SOULS_WEAPON_ID        	1

#define ANGMAR_NECRO_FELL_STRENGTH_START_RANGE		300
#define ANGMAR_NECRO_FELL_STRENGTH_ATTACK_DAMAGE	50
#define ANGMAR_NECRO_FELL_STRENGTH_ATTACK_RADIUS	75
#define ANGMAR_NECRO_FELL_STRENGTH_BUFF_RANGE		200
#define ANGMAR_NECRO_FELL_STRENGTH_BUFF_RADIUS		250
#define ANGMAR_NECRO_FELL_STRENGTH_WEAPON_ID        	5   	;// we can only have up to 6

#define ANGMAR_THRALL_MASTER_BUILDCOST			200	; RotWK originally 100
#define ANGMAR_THRALL_MASTER_BUILDTIME			20
#define ANGMAR_THRALL_MASTER_BOUNTY_VALUE		25	; originally 15
#define ANGMAR_THRALL_MASTER_HEALTH			500
#define ANGMAR_THRALL_MASTER_HEALTH_DAMAGED		150
#define ANGMAR_THRALL_MASTER_HEALTH_RECOVERY_TIME	5000
#define	ANGMAR_THRALL_MASTER_VISION_RANGE 		175

#define	ANGMAR_THRALL_MASTER_PREATTACKDELAY             433; 300 is mace swing delay time before contact with target.
#define	ANGMAR_THRALL_MASTER_FIRINGDURATION    		467; Duration of the mace swing 


#define	ANGMAR_THRALL_MASTER_LVL1_EXP_AWARD 		3
#define	ANGMAR_THRALL_MASTER_LVL2_EXP_AWARD 		4
#define	ANGMAR_THRALL_MASTER_LVL3_EXP_AWARD 		5
#define	ANGMAR_THRALL_MASTER_LVL4_EXP_AWARD 		6
#define	ANGMAR_THRALL_MASTER_LVL2_EXP_NEEDED 		10000
#define	ANGMAR_THRALL_MASTER_LVL3_EXP_NEEDED 		20000
#define	ANGMAR_THRALL_MASTER_LVL4_EXP_NEEDED 		30000
#define	ANGMAR_THRALL_MASTER_LVL2_HP_ADD	 	50
#define	ANGMAR_THRALL_MASTER_LVL3_HP_ADD	 	50
#define	ANGMAR_THRALL_MASTER_LVL4_HP_ADD	 	50
#define	ANGMAR_THRALL_MASTER_LVL2_DAM_ADD		10
#define	ANGMAR_THRALL_MASTER_LVL3_DAM_ADD		10
#define	ANGMAR_THRALL_MASTER_LVL4_DAM_ADD		10

#define ANGMAR_THRALL_ORC_UPGRADE_COST			0	; RotWK originally 50
#define ANGMAR_THRALL_ORC_UPGRADE_TIME			1
#define ANGMAR_THRALL_WOLF_UPGRADE_COST			350	; RotWk originally 400
#define ANGMAR_THRALL_WOLF_UPGRADE_TIME			1
#define ANGMAR_THRALL_SPEAR_UPGRADE_COST		100	; RotWK originally 150
#define ANGMAR_THRALL_SPEAR_UPGRADE_TIME		1
#define ANGMAR_THRALL_SLING_UPGRADE_COST		0	; RotWk originally 50
#define ANGMAR_THRALL_SLING_UPGRADE_TIME		1

;--------------------Angmar Shade of the Wolf------------------------
#define SHADEOFWOLF_HEALTH				4000

#define	SHADEOFWOLF_SWORD_SWIPE_DAMAGE_NORMAL		400	; Normal attack with knockback
#define	SHADEOFWOLF_SWORD_SWIPE_DAMAGE_FROST		500 	; 1000
#define	SHADEOFWOLF_JUMP_DAMAGE				400
#define	SHADEOFWOLF_SUMMONING_DAMAGE			1000
#define SHADEOFWOLF_LIFETIME				90000
#define ANGMAR_SHADE_PACK_DAMAGE			150
#define ANGMAR_SHADE_PACK_RADIUS			40
#define SHROUD_CLEAR_SHADEOFWOLF			800
#define VISION_SHADEOFWOLF				400
#define ANGMAR_SHADE_LAMENT_DURATION			10000
#define ANGMAR_SHADE_LAMENT_RADIUS			150
#define ANGMAR_SHADE_LAMENT_DELAYBETWEENSHOTS 		120
#define ANGMAR_SHADE_LAMENT_PREATTACKDELAY 		1500;			150
#define ANGMAR_SHADE_LAMENT_FIRINGDURATION 		1000

#define ANGMAR_SHADE_CHOMP_PREATTACKDELAY 		500
#define ANGMAR_SHADE_CHOMP_DELAYBETWEENSHOTS 		30000
#define ANGMAR_SHADE_CHOMP_FIRINGDURATION 		1300
#define	ANGMAR_SHADE_CHOMP_DAMAGE			2000

;========================EVILMEN=======================
;=========================UNITS========================

;------------------------SHIP------------------------

#define EVIL_BOMBARDSHIP_BUILDTIME			45
#define EVIL_BOMBARDSHIP_BUILDCOST			3000
#define EVIL_BOMBARDSHIP_HEALTH				1000

#define EVIL_FIRESHIP_BUILDTIME				15
#define EVIL_FIRESHIP_BUILDCOST				500
#define EVIL_FIRESHIP_HEALTH				1000

#define EVIL_BATTLESHIP_BUILDTIME			20
#define EVIL_BATTLESHIP_BUILDCOST			750
#define EVIL_BATTLESHIP_HEALTH				1000

#define	EVILMEN_SHIP_VISION_RANGE		 	500


#define	EVIL_SHIP_HEAVY_ARMOR_BUILDCOST			200
#define	EVIL_SHIP_HEAVY_ARMOR_BUILDTIME			10

#define	EVIL_SHIP_PIRATEFLAG_BUILDCOST			200
#define	EVIL_SHIP_PIRATEFLAG_BUILDTIME			10

#define	EVIL_SHIP_CROWSNEST_BUILDCOST			200
#define	EVIL_SHIP_CROWSNEST_BUILDTIME			10

#define EVIL_SHIP_FLAMINGPITCH_BUILDCOST		200
#define EVIL_SHIP_FLAMINGPITCH_BUILDTIME		10

#define EVIL_SHIP_ANTI_SHIP_WEAPON_RANGE		350
#define EVIL_SHIP_ANTI_SHIP_WEAPON_DAMAGE		25
#define EVIL_SHIP_ANTI_SHIP_SPEED			120
#define EVIL_SHIP_ANTI_SHIP_REVEAL_RADIUS		100	; The amount we are reveal when firing
#define EVIL_SHIP_ANTI_SHIP_REVEAL_TIMEOUT		5000	; The amount of time we are revealed for when firing

#define EVIL_SHIP_BOMBARD_WEAPON_RANGE			1000
#define EVIL_SHIP_BOMBARD_WEAPON_MIN_RANGE		400
#define EVIL_SHIP_BOMBARD_WEAPON_DAMAGE			500
#define EVIL_SHIP_BOMBARD_WEAPON_FIRE_RATE		5000
#define EVIL_SHIP_BOMBARD_SPEED				80
#define EVIL_SHIP_BOMBARD_REVEAL_RADIUS			100	; The amount we are reveal when firing
#define EVIL_SHIP_BOMBARD_REVEAL_TIMEOUT		5000	; The amount of time we are revealed for when firing

#define EVIL_SHIP_TRANSPORT_SPEED			70

#define EVIL_FIRE_SHIP_RANGE				5
#define EVIL_FIRE_SHIP_TIMEOUT				30000
#define EVIL_FIRE_SHIP_WEAPON_DAMAGE_01			1000	; For expanding rings of damage.
#define EVIL_FIRE_SHIP_WEAPON_RADIUS_01			200
#define EVIL_FIRE_SHIP_WEAPON_DAMAGE_02			750
#define EVIL_FIRE_SHIP_WEAPON_RADIUS_02			300
#define EVIL_FIRE_SHIP_WEAPON_DAMAGE_03			500
#define EVIL_FIRE_SHIP_WEAPON_RADIUS_03			400

#define EVIL_SHIP_FIRE_DAMAGE_TIMEOUT			500	; The tick timeout.
#define EVIL_SHIP_FIRE_DAMAGE_AMOUNT			5	; The damage dealt per tick.
#define EVIL_SHIP_FIRE_DAMAGE_HEALTH			#MULTIPLY( EVIL_BATTLESHIP_HEALTH 0.8 )		; The amount of damage we take before catching fire.

;------------------------BLACKRIDER-------------

#define EVILMEN_BLACKRIDER_BUILDCOST			2000
#define EVILMEN_BLACKRIDER_BUILDTIME			40 
#define EVILMEN_BLACKRIDER_HEALTH			2000
#define EVILMEN_BLACKRIDER_HEALTH_DAMAGED		1000
#define EVILMEN_BLACKRIDER_HEALTH_RECOVERY_TIME		10000
#define	EVILMEN_BLACKRIDER_VISION_RANGE 		175
#define	EVILMEN_BLACKRIDER_SHROUD_RANGE 		300

#define	EVILMEN_BLACKRIDER_DAMAGE			150
#define EVILMEN_BLACKRIDER_MORGULBLADE_DAMAGE		80
#define	EVILMEN_BLACKRIDER_FORGEDBLADES_UPGRADE		90 
#define EVILMEN_BLACKRIDER_PREATTACKDELAY 		500  
#define EVILMEN_BLACKRIDER_DELAYBETWEENSHOTS 		1000 
#define EVILMEN_BLACKRIDER_FIRINGDURATION 		1000 
#define	EVILMEN_BLACKRIDER_BOUNTY_VALUE        		250
#define	BLACKRIDER_BOUNTY_VALUE        			104


;-------------------------Central Keeps--------------------

#define MORDOR_CENTRAL_CAMP_KEEP_HEALTH			4000
#define ISGENARD_CENTRAL_CAMP_KEEP_HEALTH		4000
#define ROHAN_CENTRAL_CAMP_KEEP_HEALTH			4000
#define ROHAN_CENTRAL_GOLDENHALL_HEALTH			4000
#define ELDER_CENTRAL_CAMP_KEEP_HEALTH			4000
#define GOBLIN_CENTRAL_CAMP_KEEP_HEALTH			4000

;------------------------FLAGS------------------------

#define ELVES_FLAG_ECONOMY_UNPACK_COST			200
#define ELVES_FLAG_OUTPOST_UNPACK_COST			800
#define ELVES_FLAG_CAMP_UNPACK_COST			2000
#define ELVES_FLAG_CASTLE_UNPACK_COST			5000

;------------------------FLAGS------------------------

#define GOBLINS_FLAG_ECONOMY_UNPACK_COST		200
#define GOBLINS_FLAG_OUTPOST_UNPACK_COST		800
#define GOBLINS_FLAG_CAMP_UNPACK_COST			2000
#define GOBLINS_FLAG_CASTLE_UNPACK_COST			5000

;------------------------FLAGS------------------------

#define EVILMEN_FLAG_ECONOMY_UNPACK_COST		200
#define EVILMEN_FLAG_OUTPOST_UNPACK_COST		800
#define EVILMEN_FLAG_CAMP_UNPACK_COST			2000
#define EVILMEN_FLAG_CASTLE_UNPACK_COST			5000




;********************************************************
;*							*
;*  			HERO DATA  			*
;*							*
;********************************************************

; Temp location for BOUNTY_VALUE Macros for heroes 
; until those units get added to this file.

#define ROHAN_GIMLI_BOUNTY_VALUE			1000
#define ELVEN_ISILDUR_BOUNTY_VALUE			20


#define STEALTH_THRANDUIL_OPACITY_MIN			60.0%
#define STEALTH_THRANDUIL_OPACITY_MAX			80.0%

;----------------Generic Hero Level Up Bonuses --------

#define	HERO_LVL2_HP_ADD	 			60 	; 100
#define	HERO_LVL3_HP_ADD	 			60 	; 100
#define	HERO_LVL4_HP_ADD	 			80 	; 100
#define	HERO_LVL5_HP_ADD	 			100
#define	HERO_LVL6_HP_ADD	 			100 	; 200
#define	HERO_LVL7_HP_ADD	 			100 	; 200
#define	HERO_LVL8_HP_ADD	 			100 	; 200
#define	HERO_LVL9_HP_ADD	 			100	; 250
#define	HERO_LVL10_HP_ADD	 			100 	; 250

#define	HERO_LVL2_DAM_ADD				10
#define	HERO_LVL3_DAM_ADD				10
#define	HERO_LVL4_DAM_ADD				10
#define	HERO_LVL5_DAM_ADD				10
#define	HERO_LVL6_DAM_ADD				10
#define	HERO_LVL7_DAM_ADD				10
#define	HERO_LVL8_DAM_ADD				10
#define	HERO_LVL9_DAM_ADD				10
#define	HERO_LVL10_DAM_ADD				20

;----------------Generic Hobbit Level Up Bonuses --------

#define	HOBBIT_LVL2_HP_ADD	 			20
#define	HOBBIT_LVL3_HP_ADD	 			20
#define	HOBBIT_LVL4_HP_ADD	 			20
#define	HOBBIT_LVL5_HP_ADD	 			20
#define	HOBBIT_LVL6_HP_ADD	 			25
#define	HOBBIT_LVL7_HP_ADD	 			25
#define	HOBBIT_LVL8_HP_ADD	 			25
#define	HOBBIT_LVL9_HP_ADD	 			30
#define	HOBBIT_LVL10_HP_ADD	 			30

#define	HOBBIT_LVL2_DAM_ADD				10
#define	HOBBIT_LVL3_DAM_ADD				10
#define	HOBBIT_LVL4_DAM_ADD				10
#define	HOBBIT_LVL5_DAM_ADD				10
#define	HOBBIT_LVL6_DAM_ADD				15
#define	HOBBIT_LVL7_DAM_ADD				15
#define	HOBBIT_LVL8_DAM_ADD				15
#define	HOBBIT_LVL9_DAM_ADD				20
#define	HOBBIT_LVL10_DAM_ADD				20

;----------------Generic Hero Resurect Times --------

#define	HERO_LVL1_REZ	 				30
#define	HERO_LVL2_REZ	 				60
#define	HERO_LVL3_REZ	 				60
#define	HERO_LVL4_REZ	 				90
#define	HERO_LVL5_REZ	 				90
#define	HERO_LVL6_REZ	 				90
#define	HERO_LVL7_REZ	 				90
#define	HERO_LVL8_REZ	 				90
#define	HERO_LVL9_REZ	 				120
#define	HERO_LVL10_REZ	 				120



//----------------------Tornado--------------------

#define TORNADO_DAMAGE_INNER				120
#define TORNADO_DAMAGE_OUTER				30
#define TORNADO_METASHOCKWAVE_AMOUNT			170.0
#define TORNADO_METASHOCKWAVE_RADIUS			80.0

// Elrond's Whirlwind is a slightly nerfed Tornado
#define WHIRLWIND_DAMAGE_INNER				90
#define WHIRLWIND_DAMAGE_OUTER				20
#define WHIRLWIND_METASHOCKWAVE_AMOUNT			150.0
#define WHIRLWIND_METASHOCKWAVE_RADIUS			50.0





;--------------------Glorfindel------------------------

#define GLORFINDEL_SWORD_DELAYBETWEENSHOTS		1
#define GLORFINDEL_SWORD_PREATTACKDELAY			500
#define GLORFINDEL_SWORD_FIRINGDURATION 		500
#define	GLORFINDEL_SWORD_DAMAGE				150

#define SPELL_GLORFINDEL_STARLIGHT_DURATION_MS		30000


;---------------- CAH --------------------------------	

#define CAH_BUILDCOST					500
#define CAH_BUILDTIME					30

;-----------------------Angmar WitchKing--------------

#define ANGMAR_WITCHKING_BUILDCOST				4000
#define ANGMAR_WITCHKING_BUILDTIME				60
#define ANGMAR_WITCHKING_HEALTH					8000
#define ANGMAR_WITCHKING_HEALTH_DAMAGED				4000
#define ANGMAR_WITCHKING_HEALTH_RECOVERY_TIME			5000
#define ANGMAR_WITCHKING_COMMAND_POINTS				75
#define ANGMAR_WITCHKING_VISION_RANGE				250
#define ANGMAR_WITCHKING_SHROUD_RANGE				300

#define ANGMAR_WITCHKING_SWORD_PREATTACKDELAY 			500
#define ANGMAR_WITCHKING_DELAYBETWEENSHOTS 			700
#define ANGMAR_WITCHKING_FIRINGDURATION 			700
#define	ANGMAR_WITCHKING_DAMAGE					320

#define ANGMAR_WITCHKING_MORGUL_PREATTACKDELAY 			500
#define ANGMAR_WITCHKING_MORGULBLADE_DELAYBETWEENSHOTS 		700
#define ANGMAR_WITCHKING_MORGULBLADE_FIRINGDURATION 		700
#define	ANGMAR_WITCHKING_MORGULBLADE_DAMAGE			600
#define	ANGMAR_WITCHKING_MORGULBLADE_DOT			30


#define ANGMAR_WITCHKING_MACE_PREATTACKDELAY 			1000
#define ANGMAR_WITCHKING_MACE_DELAYBETWEENSHOTS 		1000
#define ANGMAR_WITCHKING_MACE_FIRINGDURATION 			1750
#define	ANGMAR_WITCHKING_MACE_DAMAGE				400

#define	ANGMAR_WITCHKING_LVL1_EXP_AWARD				35
#define	ANGMAR_WITCHKING_LVL2_EXP_NEEDED 			100
#define	ANGMAR_WITCHKING_LVL2_EXP_AWARD 			40
#define	ANGMAR_WITCHKING_LVL3_EXP_NEEDED 			200
#define	ANGMAR_WITCHKING_LVL3_EXP_AWARD 			45
#define	ANGMAR_WITCHKING_LVL4_EXP_NEEDED 			300
#define	ANGMAR_WITCHKING_LVL4_EXP_AWARD 			50
#define	ANGMAR_WITCHKING_LVL5_EXP_NEEDED 			500
#define	ANGMAR_WITCHKING_LVL5_EXP_AWARD 			60
#define	ANGMAR_WITCHKING_LVL6_EXP_NEEDED 			700
#define	ANGMAR_WITCHKING_LVL6_EXP_AWARD 			75
#define	ANGMAR_WITCHKING_LVL7_EXP_NEEDED 			900
#define	ANGMAR_WITCHKING_LVL7_EXP_AWARD 			90
#define	ANGMAR_WITCHKING_LVL8_EXP_NEEDED 			1100
#define	ANGMAR_WITCHKING_LVL8_EXP_AWARD 			105
#define	ANGMAR_WITCHKING_LVL9_EXP_NEEDED 			1500
#define	ANGMAR_WITCHKING_LVL9_EXP_AWARD 			125
#define	ANGMAR_WITCHKING_LVL10_EXP_NEEDED 			2000
#define	ANGMAR_WITCHKING_LVL10_EXP_AWARD 			150

#define ANGMAR_WITCHKING_DREADWRATH_EFFECT_RADIUS_MOUNTED	200
#define ANGMAR_WITCHKING_DREADWRATH_EFFECT_RADIUS		200
#define ANGMAR_WITCHKING_DREADWRATH_DURATION			3000


;------------------------Morgramir-------------

 

#define ANGMAR_MORGRAMIR_BUILDCOST                     	1500
#define ANGMAR_MORGRAMIR_BUILDTIME                     	40 

#define ANGMAR_MORGRAMIR_HEALTH                       	3000
#define ANGMAR_MORGRAMIR_HEALTH_DAMAGED                	1000
#define ANGMAR_MORGRAMIR_HEALTH_RECOVERY_TIME           5000

#define ANGMAR_MORGRAMIR_VISION_RANGE                  	175
#define ANGMAR_MORGRAMIR_SHROUD_RANGE                  	300

#define ANGMAR_MORGRAMIR_DAMAGE                        	250
#define ANGMAR_MORGRAMIR_FORGEDBLADES_UPGRADE          	90 
#define ANGMAR_MORGRAMIR_PREATTACKDELAY                 500  
#define ANGMAR_MORGRAMIR_DELAYBETWEENSHOTS              1000 

#define ANGMAR_MORGRAMIR_FIRINGDURATION                 1000 

#define	ANGMAR_MORGRAMIR_MORGULBLADE_DAMAGE		400
#define	ANGMAR_MORGRAMIR_MORGULBLADE_DOT		15


#define ANGMAR_MORGRAMIR_RUIN_DAMAGE                    2500
#define ANGMAR_MORGRAMIR_RUIN_PREATTACKDELAY                 2000  
#define ANGMAR_MORGRAMIR_RUIN_DELAYBETWEENSHOTS              1000 
#define ANGMAR_MORGRAMIR_RUIN_FIRINGDURATION                 1000 

#define	ANGMAR_MORGRAMIR_LVL1_EXP_AWARD 		30
#define	ANGMAR_MORGRAMIR_LVL2_EXP_AWARD 		35
#define	ANGMAR_MORGRAMIR_LVL3_EXP_AWARD 		40
#define	ANGMAR_MORGRAMIR_LVL4_EXP_AWARD 		45
#define	ANGMAR_MORGRAMIR_LVL5_EXP_AWARD 		50
#define	ANGMAR_MORGRAMIR_LVL6_EXP_AWARD 		55
#define	ANGMAR_MORGRAMIR_LVL7_EXP_AWARD 		60
#define	ANGMAR_MORGRAMIR_LVL8_EXP_AWARD 		70
#define	ANGMAR_MORGRAMIR_LVL9_EXP_AWARD 		80
#define	ANGMAR_MORGRAMIR_LVL10_EXP_AWARD 		100

#define	ANGMAR_MORGRAMIR_LVL2_EXP_NEEDED 		100
#define	ANGMAR_MORGRAMIR_LVL3_EXP_NEEDED 		200
#define	ANGMAR_MORGRAMIR_LVL4_EXP_NEEDED 		300
#define	ANGMAR_MORGRAMIR_LVL5_EXP_NEEDED 		400
#define	ANGMAR_MORGRAMIR_LVL6_EXP_NEEDED 		500
#define	ANGMAR_MORGRAMIR_LVL7_EXP_NEEDED 		600
#define	ANGMAR_MORGRAMIR_LVL8_EXP_NEEDED 		700
#define	ANGMAR_MORGRAMIR_LVL9_EXP_NEEDED 		800
#define	ANGMAR_MORGRAMIR_LVL10_EXP_NEEDED 		1000

;----------------------ROGASH------------------------

#define ROGASH_BUILDCOST				3000
#define ROGASH_BUILDTIME				45		
#define ROGASH_HEALTH					3000
#define ROGASH_WEAPON_RANGE				30.0

#define	ROGASH_LVL1_EXP_AWARD 				30
#define	ROGASH_LVL2_EXP_AWARD 				35
#define	ROGASH_LVL3_EXP_AWARD 				40
#define	ROGASH_LVL4_EXP_AWARD 				45
#define	ROGASH_LVL5_EXP_AWARD 				50
#define	ROGASH_LVL6_EXP_AWARD 				55
#define	ROGASH_LVL7_EXP_AWARD 				60
#define	ROGASH_LVL8_EXP_AWARD 				70
#define	ROGASH_LVL9_EXP_AWARD 				80
#define	ROGASH_LVL10_EXP_AWARD 				100

#define	ROGASH_LVL2_EXP_NEEDED 				200
#define	ROGASH_LVL3_EXP_NEEDED 				400
#define	ROGASH_LVL4_EXP_NEEDED 				600
#define	ROGASH_LVL5_EXP_NEEDED 				800
#define	ROGASH_LVL6_EXP_NEEDED 				1000
#define	ROGASH_LVL7_EXP_NEEDED 				1200
#define	ROGASH_LVL8_EXP_NEEDED 				1600
#define	ROGASH_LVL9_EXP_NEEDED 				2000
#define	ROGASH_LVL10_EXP_NEEDED 			2400
#define ANGMAR_ROGASH_BOUNTY_VALUE			200
#define ROGASH_THREAT_LEVEL				100


#define ROGASH_MACE_PREATTACKDELAY 			633
#define ROGASH_MACE_DELAYBETWEENSHOTS 			1000
#define ROGASH_MACE_FIRINGDURATION 			1367
#define	ROGASH_MACE_DAMAGE				200

#define ROGASH_PREATTACKDELAY 				433
#define ROGASH_DELAYBETWEENSHOTS 			600
#define ROGASH_FIRINGDURATION 				600
#define	ROGASH_DAMAGE					300
#define ROGASH_PREATTACKDELAY_SUPER			833
#define ROGASH_DELAYBETWEENSHOTS_SUPER			600
#define ROGASH_FIRINGDURATION_SUPER			900
#define	ROGASH_DAMAGE_SUPER				500
#define	ROGASH_LEAP_DAMAGE				300

#define	ROGASH_THROW_DAMAGE				400
#define	ROGASH_THROW_RANGE				175


;-----------------------HWALDAR-----------------------

#define HWALDAR_BUILDCOST				1200
#define HWALDAR_BUILDTIME				30
#define HWALDAR_HEALTH					2400

#define	HWALDAR_LVL1_EXP_AWARD 				20
#define	HWALDAR_LVL2_EXP_AWARD 				25
#define	HWALDAR_LVL3_EXP_AWARD 				30
#define	HWALDAR_LVL4_EXP_AWARD 				35
#define	HWALDAR_LVL5_EXP_AWARD 				40
#define	HWALDAR_LVL6_EXP_AWARD 				45
#define	HWALDAR_LVL7_EXP_AWARD 				50
#define	HWALDAR_LVL8_EXP_AWARD 				60
#define	HWALDAR_LVL9_EXP_AWARD 				75
#define	HWALDAR_LVL10_EXP_AWARD 			100

#define	HWALDAR_LVL2_EXP_NEEDED 			50 	; 60
#define	HWALDAR_LVL3_EXP_NEEDED 			100 	; 200
#define	HWALDAR_LVL4_EXP_NEEDED 			200 	; 400
#define	HWALDAR_LVL5_EXP_NEEDED 			300 	; 600
#define	HWALDAR_LVL6_EXP_NEEDED 			400 	; 800
#define	HWALDAR_LVL7_EXP_NEEDED 			500 	; 1000
#define	HWALDAR_LVL8_EXP_NEEDED 			600 	; 1200
#define	HWALDAR_LVL9_EXP_NEEDED 			700 	; 1600
#define	HWALDAR_LVL10_EXP_NEEDED 			800 	; 2000

#define HWALDAR_PREATTACKDELAY 				1000
#define HWALDAR_DELAYBETWEENSHOTS 			1500
#define HWALDAR_FIRINGDURATION 				1500
#define	HWALDAR_DAMAGE					200

#define HWALDAR_CARNAGE_PREATTACKDELAY 			367
#define HWALDAR_CARNAGE_DELAYBETWEENSHOTS 		1200
#define HWALDAR_CARNAGE_FIRINGDURATION 			833
#define HWALDAR_CARNAGE_DAMAGE				300


#define HWALDAR_CRIPPLE_RANGE_ABILTY_START		320
#define HWALDAR_CRIPPLE_RANGE_WEAPON			350 ;// this has to be bigger than HWALDAR_CRIPPLE_RANGE_ABILTY_START


;----------------------KARSH--------------------

#define KARSH_BUILDCOST					2000
#define KARSH_BUILDTIME					45
#define KARSH_HEALTH					3000

#define KARSH_BOUNTY_VALUE				375
	
#define KARSH_DAMAGE					320

#define KARSH_PREATTACKDELAY 				500  
#define KARSH_DELAYBETWEENSHOTS 			1000 
#define KARSH_FIRINGDURATION 				1000 


#define	KARSH_LVL1_EXP_AWARD 				20
#define	KARSH_LVL2_EXP_AWARD 				25
#define	KARSH_LVL3_EXP_AWARD 				30
#define	KARSH_LVL4_EXP_AWARD 				35
#define	KARSH_LVL5_EXP_AWARD 				40
#define	KARSH_LVL6_EXP_AWARD 				45
#define	KARSH_LVL7_EXP_AWARD 				50
#define	KARSH_LVL8_EXP_AWARD 				60
#define	KARSH_LVL9_EXP_AWARD 				75
#define	KARSH_LVL10_EXP_AWARD 				100

#define	KARSH_LVL2_EXP_NEEDED 				50 	; 100
#define	KARSH_LVL3_EXP_NEEDED 				100 	; 200
#define	KARSH_LVL4_EXP_NEEDED 				200 	; 400
#define	KARSH_LVL5_EXP_NEEDED 				300 	; 600
#define	KARSH_LVL6_EXP_NEEDED 				400	; 800
#define	KARSH_LVL7_EXP_NEEDED 				500 	; 1000
#define	KARSH_LVL8_EXP_NEEDED 				600 	; 1200
#define	KARSH_LVL9_EXP_NEEDED 				700 	; 1600
#define	KARSH_LVL10_EXP_NEEDED 				800 	; 2000

#define KARSH_DOUBT_DAMAGE_MULT_MODIFIER		75%	;// <100% for debuff
#define KARSH_DOUBT_ARMOR_MODIFIER			-25%	;// additive, this value is subtracted from all entries in armor.ini
#define KARSH_DOUBT_RADIUS				100
#define KARSH_DOUBT_RECHARGE_MS				60000

#define KARSH_DISSENT_DURATION_MS			45000
#define KARSH_DISSENT_RADIUS				100
#define KARSH_DISSENT_RECHARGE_MS			120000

#define KARSH_EVILEYE_RANGE				250
#define KARSH_EVILEYE_RECHARGE_MS			90000

#define CHILL_SOUL_EFFECT_DAMAGE			1
#define CHILL_SOUL_EFFECT_RADIUS			50
#define CHILL_SOUL_DURATION			5000

#define KARSH_SWORD_DELAYBETWEENSHOTS			2000
#define KARSH_SWORD_PREATTACKDELAY			500
#define KARSH_SWORD_FIRINGDURATION			1500
#define KARSH_SWORD_DAMAGE				70

#define WHISPEROFDEATH_OBJECT_FILTER			ANY +HERO +INFANTRY +CAVALRY +MONSTER -MACHINE -STRUCTURE -MordorBalrog -GondorGwaihir -GondorGwaihir_Summoned -MordorFellBeast -MordorFellBeastInterface -MordorWitchKingOnFellBeast -Drogoth -ElvenFortressEagle -AngmarKarsh ENEMIES 
#define ANGMAR_WHISPEROFDEATH_PREATTACKDELAY 		500
#define ANGMAR_WHISPEROFDEATH_DELAYBETWEENSHOTS 	700
#define ANGMAR_WHISPEROFDEATH_FIRINGDURATION 		700
#define	ANGMAR_WHISPEROFDEATH_DAMAGE			500

;-----------------------Tom Bombadil-------------------

#define TOM_BOMBADIL_HEALTH				5000
#define	TOM_BOMBADIL_SONIC_SONG_DAMAGE			500
#define	TOM_BOMBADIL_SONIC_SONG_RANGE			100
#define TOM_BOMBADIL_PUNCH_DELAYBETWEENSHOTS		1000
#define TOM_BOMBADIL_PUNCH_FIRINGDURATION		1000
#define TOM_BOMBADIL_PUNCH_PREATTACKDELAY		500
#define TOM_BOMBADIL_PUNCH_DAMAGE			200

;-----------------------SummonedDragon------------------------

#define SUMMONED_DRAGON_FLAME_RANGE				200
#define SUMMONED_DRAGON_FLAME_SPEED				100
#define SUMMONED_DRAGON_FLAME_MINSPEED				85
#define SUMMONED_DRAGON_FLAME_MAXSPEED				115
#define SUMMONED_DRAGON_FLAME_DELAYBETWEENSHOTS			50
#define SUMMONED_DRAGON_FLAME_PREATTACKDELAY			0
#define SUMMONED_DRAGON_FLAME_FIRINGDURATION			0
#define SUMMONED_DRAGON_FLAME_RELOADTIME_MAX			50
#define SUMMONED_DRAGON_FLAME_DAMAGE				2000
#define SUMMONED_DRAGON_FLAME_RADIUS				175
#define SUMMONED_DRAGON_FLAME_DELAY				0
#define SUMMONED_DRAGON_FLAME_FUELINCREASE_RADIUS		30
#define SUMMONED_DRAGON_FLAME_FUELINCREASE_AMOUNT		150
#define SUMMONED_DRAGON_FLAME_FUELINCREASE_MINMAXBURNRATE	10
#define SUMMONED_DRAGON_FLAME_FUELINCREASE_RESISTANCE		5
#define SUMMONED_DRAGON_FLAME_INCREASEBURNRATE_RADIUS		50
#define SUMMONED_DRAGON_FLAME_INCREASEBURNRATE_AMOUNT		10
#define SUMMONED_DRAGON_CRUSH_DAMAGE				200

;-----------------------Isildur-----------------------

#define ISILDUR_HEALTH					1500

;-----------------------Giant Eagle------------------

#define GIANT_EAGLE_HEALTH				3000	; RotWK originally 2000
#define	EAGLE_PLOW_DAMAGE_OUTER				250
#define	EAGLE_PLOW_DAMAGE_INNER				500
#define EAGLE_FLY_INTO_DAMAGE				200
#define	EAGLE_CLAW_DAMAGE				500
#define EAGLE_GRAB_SPLASH_DAMAGE			40.0	

;Gwaihir uses all the nazgul attacks for damage. 

;----------------------Balrog of Morgoth!!!-------------
; -------------------------------------------------------------------------------
#define BALROG_HEALTH										50000

#define	BALROG_SWORD_SWIPE_DAMAGE_NORMAL					4000	;Normal attack with knockback
#define	BALROG_SWORD_SWIPE_DAMAGE_FLAME					5000
#define	BALROG_SWORD_CHOP_DAMAGE_STRUCTURAL				6000	;Chop against buildings and some monsters
#define	BALROG_SWORD_CHOP_DAMAGE_FLAME					8000
#define	BALROG_DAMAGE_DISPLAY								8000	; In the hero tooltip, how much damage I say I do
#define	BALROG_WHIP_DAMAGE									6000
#define	BALROG_WHIP_DAMAGE_FLAME							3000
#define	BALROG_BREATH_DAMAGE								7000 ;twice, magic+flame
#define BALROG_BREATH_RADIUS								350 ;320
#define	BALROG_JUMP_DAMAGE									2000
#define	BALROG_SUMMONING_DAMAGE							3000
#define	BALROG_IGNITE_AURA_DAMAGE							500 ;twice, magic+flame
#define BALROG_LIFETIME										300000  ; 5 MINUTES!!! Use them well!

#define BALROG_FLAME_FUELINCREASE_RADIUS					100
#define BALROG_FLAME_FUELINCREASE_AMOUNT					50 //150
#define BALROG_FLAME_FUELINCREASE_MINMAXBURNRATE			10
#define BALROG_FLAME_FUELINCREASE_RESISTANCE				5
#define BALROG_FLAME_INCREASEBURNRATE_RADIUS				100
#define BALROG_FLAME_INCREASEBURNRATE_AMOUNT				10

#define SHROUD_CLEAR_BALROG								800
#define VISION_BALROG										600
; -------------------------------------------------------------------------------


#define WATCHER_LIFETIME				30000
#define WATCHER_CALDERA_LIFETIME			32000	; This number should be bigger than LurkerLifetime by the "DestructionDelay" in "ModuleTag_HatchProcess" in "LurkerEgg"
#define WATCHER_ARM_HEALTH				2000


;-------------- Wyrm ---------------

#define WYRM_HEALTH					5000
#define WYRM_FIRE_PREATTACKDELAY 			800
#define WYRM_FIRE_DELAYBETWEENSHOTS 			1000
#define WYRM_FIRE_FIRINGDURATION 			1000
#define	WYRM_FIRE_DAMAGE				2000
#define	WYRM_FIRE_RADIUS				80
#define	WYRM_APPEAR_DAMAGE				100	; The damage when we erupt through the ground.
#define	WYRM_APPEAR_RADIUS				50
#define	WYRM_APPEAR_SH_RADIUS				75

;-------------- Gollum ---------------

#define GOLLUM_PREATTACKDELAY 				1000
#define GOLLUM_DELAYBETWEENSHOTS 			0
#define GOLLUM_FIRINGDURATION 				1000
#define GOLLUM_DAMAGE					10


;----------------------ARMY OF THE DEAD - OATHBREAKERS ----

#define	OATHBREAKER_SWORD				300
#define OATHBREAKER_SWORD_PREATTACKDELAY 		200
#define OATHBREAKER_SWORD_DELAYBETWEENSHOTS 		300
#define OATHBREAKER_SWORD_FIRINGDURATION 		300

#define	OATHBREAKER_LIFETIME				45000

;----------------------BARROW WIGHT -------------------

#define	BARROWWIGHT_SWORD				200
#define BARROWWIGHT_SWORD_PREATTACKDELAY 		600
#define BARROWWIGHT_SWORD_DELAYBETWEENSHOTS 		300
#define BARROWWIGHT_SWORD_FIRINGDURATION 		1400
#define LESSER_WIGHT_REINFORCEMENT_LIFETIME		30000


;-----------------------Cave Troll-------------------------

#define	CAVE_TROLL_HEALTH 				2000


;-------------------HORDE RENDER LOD DATA-------------

#define ALLOW_MULTIPLE_MODELS_LOW			No
#define MAX_RANDOM_TEXTURES_LOW				1
#define MAX_RANDOM_ANIMATIONS_LOW			1
#define MAX_ANIM_FRAME_DELTA_LOW			10

#define ALLOW_MULTIPLE_MODELS_MED			No
#define MAX_RANDOM_TEXTURES_MED				2
#define MAX_RANDOM_ANIMATIONS_MED			4
#define MAX_ANIM_FRAME_DELTA_MED			4

#define ALLOW_MULTIPLE_MODELS_HIGH			Yes
#define MAX_RANDOM_TEXTURES_HIGH			2
#define MAX_RANDOM_ANIMATIONS_HIGH			4
#define MAX_ANIM_FRAME_DELTA_HIGH			4

;--------------------HORDE MOVEMENT DATA---------------

#define UNIT_FLAMING_DEATH_PANIC_SPEED			40

#define NORMAL_INGAME_PORTER_SPEED			60

#define NORMAL_EVIL_INFANTRY_HORDE_SPEED		33
#define NORMAL_EVIL_INFANTRY_MEMBER_SPEED		37	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_EVIL_FAST_HORDE_SPEED			50
#define NORMAL_EVIL_FAST_MEMBER_SPEED			55	; A little faster so when the formation wheels the unit can catch up.


#define NORMAL_GOOD_INFANTRY_HORDE_SPEED		40
#define NORMAL_GOOD_INFANTRY_MEMBER_SPEED		45	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_GOOD_FAST_HORDE_SPEED			50
#define NORMAL_GOOD_FAST_MEMBER_SPEED			55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_CAVALRY_HORDE_SPEED			80
#define NORMAL_CAVALRY_MEMBER_SPEED			90	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_CAVALRY_FAST_HORDE_SPEED			90
#define NORMAL_CAVALRY_FAST_MEMBER_SPEED		100	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_DWARF_HERO_SPEED				45
#define NORMAL_GOOD_HERO_SPEED				50
#define NORMAL_EVIL_HERO_SPEED				55	; RotWK originally 50
#define NORMAL_EVIL_FAST_HERO_SPEED			60	; RotWK originally 55

#define NORMAL_GOOD_LEGOLAS_SPEED			50
#define NORMAL_GOOD_HOBBIT_SPEED			35
#define NORMAL_GOOD_THRANDUIL_SPEED			50


#define NORMAL_ISENGARD_INFANTRY_HORDE_SPEED		50
#define NORMAL_ISENGARD_INFANTRY_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ISENGARD_PIKEMEN_HORDE_SPEED		50
#define NORMAL_ISENGARD_PIKEMEN_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ISENGARD_FAST_HORDE_SPEED		65
#define NORMAL_ISENGARD_FAST_MEMBER_SPEED		75	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ISENGARD_CAVALRY_HORDE_SPEED		80
#define NORMAL_ISENGARD_CAVALRY_MEMBER_SPEED		90	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ISENGARD_CAVALRY_FAST_HORDE_SPEED	110
#define NORMAL_ISENGARD_CAVALRY_FAST_MEMBER_SPEED	120	; A little faster so when the formation wheels the unit can catch up.

	

#define NORMAL_MORDOR_INFANTRY_HORDE_SPEED		50
#define NORMAL_MORDOR_INFANTRY_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MORDOR_PIKEMEN_HORDE_SPEED		63
#define NORMAL_MORDOR_PIKEMEN_MEMBER_SPEED		67	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MORDOR_FAST_HORDE_SPEED			70
#define NORMAL_MORDOR_FAST_MEMBER_SPEED			75	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MORDOR_CAVALRY_HORDE_SPEED		100
#define NORMAL_MORDOR_CAVALRY_MEMBER_SPEED		110	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MORDOR_CAVALRY_FAST_HORDE_SPEED		120
#define NORMAL_MORDOR_CAVALRY_FAST_MEMBER_SPEED		130	; A little faster so when the formation wheels the unit can catch up.


#define NORMAL_WILD_INFANTRY_HORDE_SPEED		50
#define NORMAL_WILD_INFANTRY_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_WILD_PIKEMEN_HORDE_SPEED			63
#define NORMAL_WILD_PIKEMEN_MEMBER_SPEED		67	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_WILD_FAST_HORDE_SPEED			65
#define NORMAL_WILD_FAST_MEMBER_SPEED			70	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_WILD_CAVALRY_HORDE_SPEED			90
#define NORMAL_WILD_CAVALRY_MEMBER_SPEED		100	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_WILD_CAVALRY_FAST_HORDE_SPEED		120
#define NORMAL_WILD_CAVALRY_FAST_MEMBER_SPEED		130	; A little faster so when the formation wheels the unit can catch up.


#define NORMAL_ELVEN_INFANTRY_HORDE_SPEED		50
#define NORMAL_ELVEN_INFANTRY_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ELVEN_PIKEMEN_HORDE_SPEED		50
#define NORMAL_ELVEN_PIKEMEN_MEMBER_SPEED		55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ELVEN_FAST_HORDE_SPEED			60
#define NORMAL_ELVEN_FAST_MEMBER_SPEED			65	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ELVEN_CAVALRY_HORDE_SPEED		100
#define NORMAL_ELVEN_CAVALRY_MEMBER_SPEED		110	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_ELVEN_CAVALRY_FAST_HORDE_SPEED		90
#define NORMAL_ELVEN_CAVALRY_FAST_MEMBER_SPEED		100	; A little faster so when the formation wheels the unit can catch up.

;====================RotWK Horde Speed Data=========================================

#define NORMAL_FOOT_VERYFAST_HORDE_SPEED		63
#define NORMAL_FOOT_VERYFAST_MEMBER_SPEED		67	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_FOOT_FAST_HORDE_SPEED			55
#define NORMAL_FOOT_FAST_MEMBER_SPEED			60	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_FOOT_MED_HORDE_SPEED			50	; RotWK originally 45  Member speed was 50
#define NORMAL_FOOT_MED_MEMBER_SPEED			55	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_FOOT_SLOW_HORDE_SPEED			40	; RotWK originally 35  Member speed was 40
#define NORMAL_FOOT_SLOW_MEMBER_SPEED			45	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MOUNTED_VERYFAST_HORDE_SPEED		120
#define NORMAL_MOUNTED_VERYFAST_MEMBER_SPEED		125	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MOUNTED_FAST_HORDE_SPEED			110
#define NORMAL_MOUNTED_FAST_MEMBER_SPEED		115	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MOUNTED_MED_HORDE_SPEED			100
#define NORMAL_MOUNTED_MED_MEMBER_SPEED			105	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_MOUNTED_SLOW_HORDE_SPEED			85
#define NORMAL_MOUNTED_SLOW_MEMBER_SPEED		90	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_SIEGE_FAST_HORDE_SPEED			45
#define NORMAL_SIEGE_FAST_MEMBER_SPEED			50	; A little faster so when the formation wheels the unit can catch up.

#define NORMAL_SIEGE_MED_HORDE_SPEED			35
#define NORMAL_SIEGE_MED_MEMBER_SPEED			40	; A little faster so when the formation wheels the unit can catch up.




; ==================== HORDE SIZE ==========================

#define ORC_HORDE_SIZE                  		10  	; Orcs & Uruk Hai
#define EVIL_RIDER_HORDE_SIZE				5
#define EVIL_RIDER_LARGE_HORDE_SIZE			10
#define EVIL_MEN_BIG_HORDE_SIZE				15
#define EVIL_MEN_NORMAL_HORDE_SIZE			5
#define GOOD_MEN_HORDE_SIZE             		10   	; Actually any infantry right now
#define GOOD_MEN_SMALL_HORDE_SIZE       		5   	; Actually any infantry right now
#define GOOD_MEN_GIANT_HORDE_SIZE       		15  	; ??? It actually looks like a mistake that this and GOOD_MEN_HORDE_SIZE are different; may need to collapse the two
#define GOOD_RIDER_HORDE_SIZE           		5
#define GOOD_RIDER_SMALL_HORDE_SIZE     		3   	; Actually any infantry right now
#define GOOD_RIDER_LARGE_HORDE_SIZE     		10  	; ??? Another one where it looks like having two numbers was a mistake (since the alternate formation horde has the other number)
#define OATHBREAKER_HORDE_SIZE          		40
#define OATHBREAKER_SMALL_HORDE_SIZE    		16

;================ CRUSHING AND BEING CRUSHED ================

#define SUPER_INFANTRY_CRUSH_REVENGE_DAMAGE		250
#define ANTI_CAVALRY_INFANTRY_CRUSH_REVENGE_DAMAGE	250
#define BASIC_INFANTRY_CRUSH_REVENGE_DAMAGE		10
#define RANGED_INFANTRY_CRUSH_REVENGE_DAMAGE		5
				

#define MUMAKIL_CRUSH_DAMAGE				400
#define TOM_BOMBADIL_CRUSH_DAMAGE			400
#define BALROG_CRUSH_DAMAGE				200
#define KNIGHT_CRUSH_DAMAGE				80
#define SPIDER_CRUSH_DAMAGE				10
#define WARG_CRUSH_DAMAGE				60
#define TROLL_CRUSH_DAMAGE				10 
#define ROHIRRIM_CRUSH_DAMAGE				160
#define SPIDERRIDER_CRUSH_DAMAGE			160
#define RIVENDELLLANCER_CRUSH_DAMAGE			100
#define RIVENDELLARCHER_CRUSH_DAMAGE			100
#define DWARVEN_BATTLEWAGON_CRUSH_DAMAGE		300
#define SHELOB_CRUSH_DAMAGE				200
#define ROGASH_CRUSH_DAMAGE				400 ; I lowered this (was 160) because he doesn't really slow down any more

;===================== AI BONUSES =======================

#define EASY_AI_SINGLE_PLAYER_DAMAGE_MULT		25%
#define MEDIUM_AI_SINGLE_PLAYER_DAMAGE_MULT 	100%
#define HARD_AI_SINGLE_PLAYER_DAMAGE_MULT		120%
#define BRUTAL_AI_SINGLE_PLAYER_DAMAGE_MULT		150%

#define EASY_AI_MULTI_PLAYER_DAMAGE_MULT		100%
#define MEDIUM_AI_MULTI_PLAYER_DAMAGE_MULT		100%
#define HARD_AI_MULTI_PLAYER_DAMAGE_MULT		100%
#define BRUTAL_AI_MULTI_PLAYER_DAMAGE_MULT		100%


;==================== THREAT LEVELS ======================

	;-------HORDES--------

#define GOBLIN_FIGHTER_HORDE_THREAT 		100
#define GOBLIN_ARCHER_HORDE_THREAT 		100
#define WILD_SPIDERLING_HORDE_THREAT 		100
#define GOBLIN_SPIDERRIDER_HORDE_THREAT 	100
#define WILD_MAURADER_HORDE_THREAT 		100
#define WILD_MARAUDERSWORDS_HORDE_THREAT	100
#define MORDOR_FIGHTER_HORDE_THREAT 		100
#define MORDOR_BLACKORC_HORDE_THREAT		100	; BFME2 Expansion Pact Faction enhancement
#define MORDOR_ARCHER_HORDE_THREAT 		100
#define MORDOR_ORC_SCOUT_HORDE_THREAT 		15.0
#define MORDOR_GOBLINFIGHTER_HORDE_THREAT 	15.0
#define MORDOR_CORSAIRSOFUMBAR_HORDE_THREAT 	100
#define MORDOR_HARADRIM_ARCHER_HORDE_THREAT 	100
#define MORDOR_HARADRIMRIDERS_HORDE_THREAT	100
#define MORDOR_EASTERLING_HORDE_THREAT 		100
#define ISENGARD_FIGHTER_HORDE_THREAT 		100
#define ISENGARD_BERSERKER_HORDE_THREAT 	100	; BFME2 Expansion Pact Faction enhancement
#define ISENGARD_PIKEMAN_HORDE_THREAT 		100
#define ISENGARD_WILDMAN_HORDE_THREAT 		100
#define ISENGARD_URUKCROSSBOW_HORDE_THREAT 	100
#define ISENGARD_WARGRIDER_HORDE_THREAT 	100
#define ISENGARD_WARGPACK_HORDE_THREAT 		100
#define GONDOR_FIGHTER_HORDE_THREAT 		100
#define GONDOR_TOWERSHIELDGUARD_HORDE_THREAT 	100
#define GONDOR_SPEARMEN_HORDE_THREAT		100 
#define GONDOR_ARCHER_HORDE_THREAT 		100
#define GONDOR_RANGER_HORDE_THREAT 		100
#define GONDOR_KNIGHT_HORDE_THREAT 		100
#define	GONDOR_KNIGHTSOFDOL_HORDE_THREAT	200
#define ROHAN_ROHIRRIM_HORDE_THREAT 		100
#define ELVEN_MIRKWOODARCHER_HORDE_THREAT 	100
#define ELVEN_RIVENDELLLANCER_HORDE_THREAT 	100
#define ELVEN_RIVENDELLARCHER_HORDE_THREAT 	100
#define ELVEN_LORIENWARRIOR_HORDE_THREAT 	100
#define ELVEN_MITHLONDSENTRY_HORDE_THREAT 	100
#define ELVEN_LORIENARCHER_HORDE_THREAT 	100
#define DWARVEN_GUARDIAN_HORDE_THREAT 		100
#define DWARVEN_AXETHROWER_HORDE_THREAT 	100
#define DWARVEN_PHALANX_HORDE_THREAT 		100
#define DWARVEN_MENOFDALE_HORDE_THREAT 		100

;--------	EVIL -----------------------------------------------------

#define BALROG_THREAT_LEVEL		       			10000	//5000	; originally 4.0 which was located in NeutralUnits.ini
#define DRAGONSTRIKE_DRAGON_THREAT_LEVEL 			7000	//300	; originally 5.0
#define DROGOTH_THREAT_LEVEL 						6000	//400	; originally 5.0
#define SUMMONEDDRAGON_THREAT_LEVEL 				5000	//300	; originally 5.0
#define SAURON_THREAT_LEVEL 						4000	//500	; originally 100
#define MUMAKIL_THREAT_LEVEL 						3000	//100
#define SARUMAN_THREAT_LEVEL 						2500	//500	; originally 100
#define WATCHER_THREAT_LEVEL 		       			2250	//3500	; originally 5.0
#define WYRM_THREAT_LEVEL 		       				2000	//3000	; originally 5.0
#define SHELOB_THREAT_LEVEL 						1800	//400	; originally 100
#define WITCHKING_THREAT_LEVEL 					1500	//400	; originally 100
#define MOUNTAIN_GIANT_THREAT_LEVEL 				1000	//100
#define BLACKRIDER_THREAT_LEVEL 					900		//100
#define RING_WRAITH_THREAT_LEVEL 					900		//400	; originally 5.0
#define ATTACK_TROLL_THREAT_LEVEL 					800		//100
#define MORDOR_MOUNTAINTROLL_THREAT_LEVEL 		700		//100
#define CAVE_TROLL_THREAT_LEVEL 					500		//100
#define FELL_BEAST_THREAT_LEVEL 					400		//350	; originally 100
#define FIRE_DRAKE_THREAT_LEVEL 					250 	//200	; originally 100
#define MORDOR_DRUMMERTROLL_THREAT_LEVEL 			200		//100


#define GOBLIN_KING_THREAT_LEVEL 		400	; originally 100
#define AZOG_THREAT_LEVEL			300
#define MOUTH_OF_SAURON_THREAT_LEVEL 		200	; originally 100
#define SIEGETOWER_THREAT_LEVEL 		100
#define MORDOR_CATAPULT_THREAT_LEVEL 		100
#define GOTHMOG_THREAT_LEVEL 			400	; originally 100
#define GROND_THREAT_LEVEL 			200	; originally 100
#define LURTZ_THREAT_LEVEL 			300	; originally 100
#define ISENGARD_MINE_THREAT_LEVEL 		100
#define SHARKU_THREAT_LEVEL 			250	; originally 100
#define ISENGARD_SIEGELADDER_THREAT_LEVEL 	100
#define WORMTONGUE_THREAT_LEVEL 		300	; originally 100
#define ISENGARD_BATTERINGRAM_THREAT_LEVEL 	100	; originally 100
#define ISENGARD_BALLISTA_THREAT_LEVEL 		100
#define EVILMEN_TRANSPORTSHIP_THREAT_LEVEL 	100
#define CORSAIRSHIP_THREAT_LEVEL 		100
#define ISENGARD_BESERKER_THREAT_LEVEL 		100
#define HWALDAR_THREAT_LEVEL 			250	; originally 5.0
#define ANGMAR_MORGRAMIR_BOUNTY_VALUE		300

;--------	GOOD ----------------------------------------------------

#define GLOIN_THREAT_LEVEL 			300	; originally 100
#define GIMLI_THREAT_LEVEL 			300	; originally 100
#define DWARVEN_RAM_THREAT_LEVEL 		100
#define DWARVEN_BATTLEWAGON_THREAT_LEVEL 	100
#define DAIN_THREAT_LEVEL 			400	; originally 100
#define DWARVEN_CATAPULT_THREAT_LEVEL 		100
#define ELVEN_SHIP_THREAT_LEVEL 		100
#define ARWEN_THREAT_LEVEL 			250	; originally 100
#define TREEBEARD_THREAT_LEVEL 			300	; originally 100
#define ENT_INFANTRY_THREAT_LEVEL 		200	; originally 5.0
#define THARANDUIL_THREAT_LEVEL 		350	; originally 100
#define LEGOLAS_THREAT_LEVEL 			300	; originally 100
#define ISILDUR_THREAT_LEVEL 			200	; originally 5.0
#define HALDIR_THREAT_LEVEL 			200	; originally 100
#define GWAIHIR_THREAT_LEVEL 			200	; originally 100
#define GLORFINDEL_THREAT_LEVEL 		400	; originally 100
#define GALADRIEL_THREAT_LEVEL 			500	; originally 100
#define ELVEN_TRANSPORTSHIP_THREAT_LEVEL 	100
#define GANDALF_THREAT_LEVEL 			400	; originally 100
#define FRODO_THREAT_LEVEL 			100
#define FARAMIR_THREAT_LEVEL 			200	; originally 100
#define EOWYN_THREAT_LEVEL 			100
#define EOMER_THREAT_LEVEL 			300	; originally 100
#define BOROMIR_THREAT_LEVEL 			250	; originally 100
#define ARAGORN_THREAT_LEVEL 			400	; originally 100
#define DENETHOR_THREAT_LEVEL 			200	; originally 5.0
#define GAMLING_THREAT_LEVEL 			200	; originally 5.0
#define GONDOR_TREBUCHET_THREAT_LEVEL 		100
#define THEODEN_THREAT_LEVEL 			100
#define SAM_THREAT_LEVEL 			100
#define PIPPIN_THREAT_LEVEL 			100
#define MERRY_THREAT_LEVEL 			100
#define NOLDOR_THREAT_LEVEL			175

	;-------STRUCTURES--------

#define FACTORY_THREAT_LEVEL			150
#define WALL_THREAT_LEVEL			0
#define TOWER_THREAT_LEVEL			350
#define WALL_CATAPULT_THREAT_LEVEL		300
#define FORTRESS_THREAT_LEVEL			500
#define RESOURCE_THREAT_LEVEL			100
#define PROP_THREAT_LEVEL			0
#define LAIR_THREAT_LEVEL			200


;======================= SPELL DATA =========================

#define SPELL_HEAL_RADIUS_CURSOR		200.0   ; Cursor size for heal spell       ; RotWK originally 150.0
#define SPELL_HEAL_RADIUS_UNIT_SCAN		200	;100.0    ; How far to scan for units to heal    ; RotWK orginally 150.0
#define SPELL_HEAL_RADIUS_HORDE_SCAN		225.0   ; A little bigger so that if some horde members are within the cursor, scan will find the horde brain   ; RotWK originally 200

#define SPELL_REBUILD_RADIUS_CURSOR		150.0	; RotWK originally 300.0
#define SPELL_REBUILD_RADIUS_STRUCTURE_SCAN 	300.0	 

#define ELVEN_GIFT_REGEN_AMOUNT			10.0
#define ELVEN_GIFT_REGEN_DELAY			1000

#define SPELL_UNDERMINE_SPAWN_DAMAGE_RADIUS	200 ; balance
#define SPELL_UNDERMINE_AFFECTS_OBJECT_FILTER	ANY +INFANTRY +CAVALRY +MONSTER +MACHINE +HORDE +HERO

#define SPELL_RECHARGE_TIME_TIER_1		180000
#define SPELL_RECHARGE_TIME_TIER_2		360000	
#define SPELL_RECHARGE_TIME_TIER_3		540000
#define SPELL_RECHARGE_TIME_TIER_4		720000
#define SPELL_RECHARGE_TIME_TIER_5		90000
#define SPELL_RECHARGE_TIME_TIER_6		120000

;//---------Sunflare Info-----------
#define SPELL_SUNFLARE_EFFECT_RADIUS		200
#define SPELL_SUNFLARE_FIRE_DAMAGE		40
#define SPELL_SUNFLARE_FIRE_FUEL		500
#define SPELL_SUNFLARE_FIRE_MINMAX_BURNRATE	40
#define SPELL_SUNFLARE_DAMAGE			3000
#define SPELL_SUNFLARE_DURATION			20000
#define SPELL_SUNFLARE_RELOAD_TIME		600000
#define SPELL_SUNFLARE_VIEW_OBJECT_DURATION	10000
#define SPELL_SUNFLARE_VIEW_OBJECT_RANGE	200


;//====================== FIRE DATA ============================

;//----------------MEN OF THE WEST FIRE DATA--------------------

#define MEN_FARM_FIRE_FUEL				140
#define MEN_FARM_FIRE_MAX_BURN_RATE			20
#define MEN_FARM_FIRE_DECAY				5
#define MEN_FARM_FIRE_RESISTANCE			10

#define MEN_ARCHERY_RANGE_FIRE_FUEL			300
#define MEN_ARCHERY_RANGE_FIRE_MAX_BURN_RATE		20
#define MEN_ARCHERY_RANGE_FIRE_DECAY			5
#define MEN_ARCHERY_RANGE_FIRE_RESISTANCE		10

#define MEN_BARRACKS_FIRE_FUEL				300
#define MEN_BARRACKS_FIRE_MAX_BURN_RATE			20
#define MEN_BARRACKS_FIRE_DECAY				5
#define MEN_BARRACKS_FIRE_RESISTANCE			10

#define MEN_FORGE_FIRE_FUEL				100
#define MEN_FORGE_FIRE_MAX_BURN_RATE			20
#define MEN_FORGE_FIRE_DECAY				5
#define MEN_FORGE_FIRE_RESISTANCE			10

#define MEN_MARKETPLACE_FIRE_FUEL			200
#define MEN_MARKETPLACE_FIRE_MAX_BURN_RATE		20
#define MEN_MARKETPLACE_FIRE_DECAY			5
#define MEN_MARKETPLACE_FIRE_RESISTANCE			10

#define MEN_STABLE_FIRE_FUEL				300
#define MEN_STABLE_FIRE_MAX_BURN_RATE			20
#define MEN_STABLE_FIRE_DECAY				5
#define MEN_STABLE_FIRE_RESISTANCE			10

#define MEN_STATUE_FIRE_FUEL				100
#define MEN_STATUE_FIRE_MAX_BURN_RATE			20
#define MEN_STATUE_FIRE_DECAY				5
#define MEN_STATUE_FIRE_RESISTANCE			10

#define MEN_WELL_FIRE_FUEL				100
#define MEN_WELL_FIRE_MAX_BURN_RATE			20
#define MEN_WELL_FIRE_DECAY				5
#define MEN_WELL_FIRE_RESISTANCE			10

#define MEN_WORKSHOP_FIRE_FUEL				140
#define MEN_WORKSHOP_FIRE_MAX_BURN_RATE			20
#define MEN_WORKSHOP_FIRE_DECAY				5
#define MEN_WORKSHOP_FIRE_RESISTANCE			10

#define MEN_STONEMAKER_FIRE_FUEL			200
#define MEN_STONEMAKER_FIRE_MAX_BURN_RATE		20
#define MEN_STONEMAKER_FIRE_DECAY			5
#define MEN_STONEMAKER_FIRE_RESISTANCE			10

#define MEN_BATTLETOWER_FIRE_FUEL			140
#define MEN_BATTLETOWER_FIRE_MAX_BURN_RATE		20
#define MEN_BATTLETOWER_FIRE_DECAY			5
#define MEN_BATTLETOWER_FIRE_RESISTANCE			10

#define MEN_FORTRESS_FIRE_FUEL				100
#define MEN_FORTRESS_FIRE_MAX_BURN_RATE			20
#define MEN_FORTRESS_FIRE_DECAY				5
#define MEN_FORTRESS_FIRE_RESISTANCE			10

#define MEN_GARRISONEXPANSION_FIRE_FUEL			100
#define MEN_GARRISONEXPANSION_FIRE_MAX_BURN_RATE	20
#define MEN_GARRISONEXPANSION_FIRE_DECAY		5
#define MEN_GARRISONEXPANSION_FIRE_RESISTANCE		10

#define MEN_TOWEREXPANSION_FIRE_FUEL			100
#define MEN_TOWEREXPANSION_FIRE_MAX_BURN_RATE		20
#define MEN_TOWEREXPANSION_FIRE_DECAY			5
#define MEN_TOWEREXPANSION_FIRE_RESISTANCE		10

#define MEN_TREBUCHETEXPANSION_FIRE_FUEL		100
#define MEN_TREBUCHETEXPANSION_FIRE_MAX_BURN_RATE	20
#define MEN_TREBUCHETEXPANSION_FIRE_DECAY		5
#define MEN_TREBUCHETEXPANSION_FIRE_RESISTANCE		10

;------------------TRANSPORT SLOTS---------------------

#define TRANSPORTSLOTCOUNT_NOT_TRANSPORTABLE		0
#define TRANSPORTSLOTCOUNT_HERO				1
#define TRANSPORTSLOTCOUNT_DOZER			1
#define TRANSPORTSLOTCOUNT_SIEGE			1
#define TRANSPORTSLOTCOUNT_UNIT				1
#define TRANSPORTSLOTCOUNT_MONSTER			1
#define TRANSPORTSLOTCOUNT_SMALL_HORDE			1
#define TRANSPORTSLOTCOUNT_LARGE_HORDE			1
#define TRANSPORTSLOTCOUNT_MACHINE			1


;//-----------------------------TECH BUILDINGS----------------------------------

;//-----------------------------INN----------------------------------------
#define INN_UNIT_BUILDCOST_DWARVEN			150
#define INN_UNIT_BUILDCOST_ELVEN			50
#define INN_UNIT_BUILDCOST_MEN				250
#define INN_UNIT_BUILDCOST_MORDOR			200
#define INN_UNIT_BUILDCOST_ISENGARD			150	; originally 200
#define INN_UNIT_BUILDCOST_WILD				200

;//-----------------------------OUTPOST----------------------------------------
#define OUTPOST_MONEY_TIME				10000
#define	OUTPOST_MONEY_AMOUNT				60
#define	OUTPOST_INITIAL_CAPTURE_BONUS			0

;//-------------------------WOTR-----------------------------------------------
#define GAIN_PER_FORTRESS 300
#define GAIN_PER_FARM 300
#define FERTILE_TERRITORY_BONUS 500
#define WOTR_FARM_COST 0
#define WOTR_BARRACKS_COST 500
#define WOTR_FORTRESS_COST 1500
#define WOTR_FORGE_COST 500


