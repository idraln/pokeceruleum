# 1 "data/maps/ObsidianPathCave/scripts.pory"

# 2 "data/maps/ObsidianPathCave/scripts.pory"
ObsidianPathCave_MapScripts::
# 3 "data/maps/ObsidianPathCave/scripts.pory"
	.byte 0

ObsidianPathCave_Item::
# 7 "data/maps/ObsidianPathCave/scripts.pory"
	lock
# 8 "data/maps/ObsidianPathCave/scripts.pory"
	removeobject 3
# 9 "data/maps/ObsidianPathCave/scripts.pory"
	setflag FLAG_ITEM_OBSIDIAN_CAVE
# 10 "data/maps/ObsidianPathCave/scripts.pory"
	giveitem ITEM_BIKE_VOUCHER
# 11 "data/maps/ObsidianPathCave/scripts.pory"
	setvar VAR_HOUSE_GLASVILLE, 1
# 12 "data/maps/ObsidianPathCave/scripts.pory"
	release
	end


ObsidianPathCave_Dusknoir::
# 17 "data/maps/ObsidianPathCave/scripts.pory"
	lock
# 18 "data/maps/ObsidianPathCave/scripts.pory"
	faceplayer
# 19 "data/maps/ObsidianPathCave/scripts.pory"
	delay 20
# 20 "data/maps/ObsidianPathCave/scripts.pory"
	applymovement 4, ObsidianPathCave_Dusknoir_Movement_0
# 21 "data/maps/ObsidianPathCave/scripts.pory"
	waitmovement 0
# 22 "data/maps/ObsidianPathCave/scripts.pory"
	playse SE_PIN
# 23 "data/maps/ObsidianPathCave/scripts.pory"
	delay 40
# 24 "data/maps/ObsidianPathCave/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 40
# 25 "data/maps/ObsidianPathCave/scripts.pory"
	waitse
# 26 "data/maps/ObsidianPathCave/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 27 "data/maps/ObsidianPathCave/scripts.pory"
	delay 40
# 28 "data/maps/ObsidianPathCave/scripts.pory"
	waitmoncry
# 29 "data/maps/ObsidianPathCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/ObsidianPathCave/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/ObsidianPathCave/scripts.pory"
	waitstate
# 32 "data/maps/ObsidianPathCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 33 "data/maps/ObsidianPathCave/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_FAINT
# 34 "data/maps/ObsidianPathCave/scripts.pory"
	waitmoncry
# 35 "data/maps/ObsidianPathCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/ObsidianPathCave/scripts.pory"
	delay 40
# 37 "data/maps/ObsidianPathCave/scripts.pory"
	setflag FLAG_DUSKNOIR_OBSIDIAN
# 38 "data/maps/ObsidianPathCave/scripts.pory"
	removeobject 4
# 39 "data/maps/ObsidianPathCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/ObsidianPathCave/scripts.pory"
	release
	end


# 20 "data/maps/ObsidianPathCave/scripts.pory"
ObsidianPathCave_Dusknoir_Movement_0:
# 20 "data/maps/ObsidianPathCave/scripts.pory"
	emote_exclamation_mark
	step_end
