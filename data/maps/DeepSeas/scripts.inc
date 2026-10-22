# 1 "data/maps/DeepSeas/scripts.pory"

# 2 "data/maps/DeepSeas/scripts.pory"
DeepSeas_MapScripts::
# 3 "data/maps/DeepSeas/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DeepSeas_OnFrame
# 4 "data/maps/DeepSeas/scripts.pory"
	.byte 0
# 5 "data/maps/DeepSeas/scripts.pory"

# 6 "data/maps/DeepSeas/scripts.pory"
DeepSeas_OnFrame:
# 7 "data/maps/DeepSeas/scripts.pory"
    map_script_2 VAR_DEEP_SEAS_CUTSCENE, 0, DeepSeas_Arrival
# 8 "data/maps/DeepSeas/scripts.pory"
    .2byte 0

DeepSeas_Arrival::
# 12 "data/maps/DeepSeas/scripts.pory"
	lock
# 14 "data/maps/DeepSeas/scripts.pory"
	callnative ClearPlayerParty
# 15 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 16 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_SYS_ID_GET
# 17 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE01_GET
# 18 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE02_GET
# 19 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE03_GET
# 20 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE04_GET
# 21 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE05_GET
# 22 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE06_GET
# 23 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE07_GET
# 24 "data/maps/DeepSeas/scripts.pory"
	clearflag FLAG_BADGE08_GET
# 25 "data/maps/DeepSeas/scripts.pory"
	removemoney 999999
# 26 "data/maps/DeepSeas/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPlank
# 27 "data/maps/DeepSeas/scripts.pory"
	waitmovement 0
# 28 "data/maps/DeepSeas/scripts.pory"
	msgbox DeepSeas_Arrival_Text_0
# 29 "data/maps/DeepSeas/scripts.pory"
	setvar VAR_DEEP_SEAS_CUTSCENE, 1
# 30 "data/maps/DeepSeas/scripts.pory"
	release
	end


DeepSeas_Boat::
# 35 "data/maps/DeepSeas/scripts.pory"
	lockall
# 36 "data/maps/DeepSeas/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBoat
# 37 "data/maps/DeepSeas/scripts.pory"
	applymovement 1, DeepSeas_Boat_Movement_0
# 38 "data/maps/DeepSeas/scripts.pory"
	waitmovement 0
# 39 "data/maps/DeepSeas/scripts.pory"
	msgbox DeepSeas_Boat_Text_0
# 40 "data/maps/DeepSeas/scripts.pory"
	closemessage
# 41 "data/maps/DeepSeas/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/DeepSeas/scripts.pory"
	delay 40
# 43 "data/maps/DeepSeas/scripts.pory"
	warpsilent MAP_CAPE_EAST_HOUSE, 1, 4
# 44 "data/maps/DeepSeas/scripts.pory"
	setrespawn HEAL_LOCATION_CAPE_EAST_HOUSE
# 45 "data/maps/DeepSeas/scripts.pory"
	releaseall
	end


# 50 "data/maps/DeepSeas/scripts.pory"
PlayerPlank:
# 51 "data/maps/DeepSeas/scripts.pory"
	face_right
# 52 "data/maps/DeepSeas/scripts.pory"
	delay_16
# 53 "data/maps/DeepSeas/scripts.pory"
	face_left
# 54 "data/maps/DeepSeas/scripts.pory"
	delay_16
# 55 "data/maps/DeepSeas/scripts.pory"
	face_down
# 56 "data/maps/DeepSeas/scripts.pory"
	delay_16
# 57 "data/maps/DeepSeas/scripts.pory"
	face_up
# 58 "data/maps/DeepSeas/scripts.pory"
	delay_16
# 59 "data/maps/DeepSeas/scripts.pory"
	emote_question_mark
	step_end

# 62 "data/maps/DeepSeas/scripts.pory"
PlayerBoat:
# 63 "data/maps/DeepSeas/scripts.pory"
	face_right
	step_end

# 37 "data/maps/DeepSeas/scripts.pory"
DeepSeas_Boat_Movement_0:
# 37 "data/maps/DeepSeas/scripts.pory"
	face_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
# 37 "data/maps/DeepSeas/scripts.pory"
	walk_fast_left
	step_end

DeepSeas_Arrival_Text_0:
# 28 "data/maps/DeepSeas/scripts.pory"
	.string "(...Ugh...)\p"
	.string "(What happened?)\p"
	.string "(Where am I? My head hurts so bad...)$"

DeepSeas_Boat_Text_0:
# 39 "data/maps/DeepSeas/scripts.pory"
	.string "Hey! Are you OK? It's dangerous to be\n"
	.string "out there! Get on the boat, quick!$"
