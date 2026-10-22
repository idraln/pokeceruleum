# 1 "data/maps/Xatu_Tent3/scripts.pory"

# 2 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_MapScripts::
# 3 "data/maps/Xatu_Tent3/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Xatu_Tent3_OnFrame
# 4 "data/maps/Xatu_Tent3/scripts.pory"
	.byte 0
# 5 "data/maps/Xatu_Tent3/scripts.pory"

# 6 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_OnFrame:
# 7 "data/maps/Xatu_Tent3/scripts.pory"
    map_script_2 VAR_SIDE_STORY_RETRO, 1, Xatu_Tent3_Arrival
# 8 "data/maps/Xatu_Tent3/scripts.pory"
    .2byte 0

Xatu_Tent3_Arrival::
# 12 "data/maps/Xatu_Tent3/scripts.pory"
	lock
# 13 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_EAST
# 14 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_0
# 15 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 16 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_WEST
# 17 "data/maps/Xatu_Tent3/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement 2, Xatu_Tent3_Arrival_Movement_0
# 19 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 20 "data/maps/Xatu_Tent3/scripts.pory"
	delay 40
# 21 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement 2, Xatu_Tent3_Arrival_Movement_1
# 22 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 23 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_1
# 24 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 25 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_NORTH
# 26 "data/maps/Xatu_Tent3/scripts.pory"
	delay 40
# 27 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_WEST
# 28 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Xatu_Tent3_Arrival_Movement_2
# 29 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_2
# 30 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 31 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 32 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_EAST
# 33 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 34 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_3
# 35 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 36 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 37 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_WEST
# 38 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 39 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_4
# 40 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_5
# 41 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_6
# 42 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 43 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 44 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_WEST
# 45 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_7
# 46 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 47 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_NORTH
# 48 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 49 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_EAST
# 50 "data/maps/Xatu_Tent3/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement 1, Xatu_Tent3_Arrival_Movement_0
# 52 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 53 "data/maps/Xatu_Tent3/scripts.pory"
	delay 40
# 54 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_8
# 55 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 56 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 1, DIR_WEST
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement 1, Xatu_Tent3_Arrival_Movement_3
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Xatu_Tent3_Arrival_Movement_4
# 59 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 60 "data/maps/Xatu_Tent3/scripts.pory"
	fadeoutbgm 1
# 61 "data/maps/Xatu_Tent3/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 62 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_9
# 63 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 64 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Xatu_Tent3_Arrival_Movement_5
# 65 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 66 "data/maps/Xatu_Tent3/scripts.pory"
	setmetatile 6, 2, METATILE_ArrayBuilding_DoorDown, FALSE
# 67 "data/maps/Xatu_Tent3/scripts.pory"
	setmetatile 6, 1, METATILE_ArrayBuilding_DoorUp, FALSE
# 68 "data/maps/Xatu_Tent3/scripts.pory"
	special DrawWholeMapView
# 69 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 70 "data/maps/Xatu_Tent3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Xatu_Tent3_Arrival_Movement_6
# 71 "data/maps/Xatu_Tent3/scripts.pory"
	waitmovement 0
# 72 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_10
# 73 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 74 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_EAST
# 75 "data/maps/Xatu_Tent3/scripts.pory"
	delay 20
# 76 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_11
# 77 "data/maps/Xatu_Tent3/scripts.pory"
	closemessage
# 78 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_NORTH
# 79 "data/maps/Xatu_Tent3/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_XATU_TENT3
# 80 "data/maps/Xatu_Tent3/scripts.pory"
	setmetatile 6, 2, METATILE_ArrayBuilding_DoorClosedDown, FALSE
# 81 "data/maps/Xatu_Tent3/scripts.pory"
	setmetatile 6, 1, METATILE_ArrayBuilding_DoorClosedUp, FALSE
# 82 "data/maps/Xatu_Tent3/scripts.pory"
	special DrawWholeMapView
# 83 "data/maps/Xatu_Tent3/scripts.pory"
	delay 60
# 84 "data/maps/Xatu_Tent3/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 87 "data/maps/Xatu_Tent3/scripts.pory"
	delay 40
# 88 "data/maps/Xatu_Tent3/scripts.pory"
	setflag FLAG_RETRO_INIT
# 89 "data/maps/Xatu_Tent3/scripts.pory"
	namebox Xatu_Tent3_Arrival_Text_12
# 90 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Arrival_Text_13
# 91 "data/maps/Xatu_Tent3/scripts.pory"
	hidenamebox
# 92 "data/maps/Xatu_Tent3/scripts.pory"
	fwdtime 10, 00
# 93 "data/maps/Xatu_Tent3/scripts.pory"
	special BackupPlayerState
# 94 "data/maps/Xatu_Tent3/scripts.pory"
	special InitFlashbackState
# 95 "data/maps/Xatu_Tent3/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 2
# 96 "data/maps/Xatu_Tent3/scripts.pory"
	setflag FLAG_GRANDMA_NEST
# 97 "data/maps/Xatu_Tent3/scripts.pory"
	setflag FLAG_BRO_GYM
# 98 "data/maps/Xatu_Tent3/scripts.pory"
	setvar VAR_REPEL_STEP_COUNT, 0
# 99 "data/maps/Xatu_Tent3/scripts.pory"
	clearflag FLAG_SYS_OPTIONS_DISABLE
# 100 "data/maps/Xatu_Tent3/scripts.pory"
	clearflag FLAG_SYS_DISABLE_SAVE
# 101 "data/maps/Xatu_Tent3/scripts.pory"
	clearflag FLAG_SYS_PHONE_GET
# 102 "data/maps/Xatu_Tent3/scripts.pory"
	warpsilent MAP_XATUS_NEST_RETRO, 17, 38
# 103 "data/maps/Xatu_Tent3/scripts.pory"
	release
	end


Xatu_Tent3_Lieutenant::
# 108 "data/maps/Xatu_Tent3/scripts.pory"
	lock
# 109 "data/maps/Xatu_Tent3/scripts.pory"
	faceplayer
# 110 "data/maps/Xatu_Tent3/scripts.pory"
	msgbox Xatu_Tent3_Lieutenant_Text_0
# 111 "data/maps/Xatu_Tent3/scripts.pory"
	turnobject 2, DIR_NORTH
# 112 "data/maps/Xatu_Tent3/scripts.pory"
	release
	end


# 18 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_0:
# 18 "data/maps/Xatu_Tent3/scripts.pory"
	emote_exclamation_mark
	step_end

# 21 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_1:
# 21 "data/maps/Xatu_Tent3/scripts.pory"
	jump_in_place_left
	step_end

# 28 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_2:
# 28 "data/maps/Xatu_Tent3/scripts.pory"
	face_right
	step_end

# 57 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_3:
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 57 "data/maps/Xatu_Tent3/scripts.pory"
	face_left
	step_end

# 58 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_4:
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
# 58 "data/maps/Xatu_Tent3/scripts.pory"
	walk_right
	step_end

# 64 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_5:
# 64 "data/maps/Xatu_Tent3/scripts.pory"
	face_up
	step_end

# 70 "data/maps/Xatu_Tent3/scripts.pory"
Xatu_Tent3_Arrival_Movement_6:
# 70 "data/maps/Xatu_Tent3/scripts.pory"
	walk_up
# 70 "data/maps/Xatu_Tent3/scripts.pory"
	face_down
	step_end

Xatu_Tent3_Arrival_Text_0:
# 14 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Private! Is the machine ready yet?\n"
	.string "You're taking too long!$"

Xatu_Tent3_Arrival_Text_1:
# 23 "data/maps/Xatu_Tent3/scripts.pory"
	.string "SIR! It's almost ready, sir!$"

Xatu_Tent3_Arrival_Text_2:
# 29 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Well, you said you were from this town\n"
	.string "right? Glorray, they called it? There's\l"
	.string "only one way to figure it out.$"

Xatu_Tent3_Arrival_Text_3:
# 34 "data/maps/Xatu_Tent3/scripts.pory"
	.string "See this machine? It's the Army's\n"
	.string "newest baby. With that, we can delve\l"
	.string "into the memory of anyone who steps\l"
	.string "inside it.$"

Xatu_Tent3_Arrival_Text_4:
# 39 "data/maps/Xatu_Tent3/scripts.pory"
	.string "It's still in the trial phase... You'll be\n"
	.string "the perfect subject to test it on. We'll\l"
	.string "see if you tell the truth.$"

Xatu_Tent3_Arrival_Text_5:
# 40 "data/maps/Xatu_Tent3/scripts.pory"
	.string "...$"

Xatu_Tent3_Arrival_Text_6:
# 41 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Well, if you tell the truth, you can\n"
	.string "leave unscathed. But if it appears you\l"
	.string "lied to us...$"

Xatu_Tent3_Arrival_Text_7:
# 45 "data/maps/Xatu_Tent3/scripts.pory"
	.string "SIR! The machine is ready for use, sir!$"

Xatu_Tent3_Arrival_Text_8:
# 54 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Hahaha... Finally!$"

Xatu_Tent3_Arrival_Text_9:
# 62 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Get in.$"

Xatu_Tent3_Arrival_Text_10:
# 72 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Private, close the door, and run the\n"
	.string "program!$"

Xatu_Tent3_Arrival_Text_11:
# 76 "data/maps/Xatu_Tent3/scripts.pory"
	.string "SIR! YES SIR!$"

Xatu_Tent3_Arrival_Text_12:
# 89 "data/maps/Xatu_Tent3/scripts.pory"
	.string "Ulrich$"

Xatu_Tent3_Arrival_Text_13:
# 90 "data/maps/Xatu_Tent3/scripts.pory"
	.string "{PLAYER}! How are you so slow? Pick it\n"
	.string "up!$"

Xatu_Tent3_Lieutenant_Text_0:
# 110 "data/maps/Xatu_Tent3/scripts.pory"
	.string "What's up? I have to ask you to keep\n"
	.string "what you saw here for yourself. Our\l"
	.string "machine is strictly confidential.$"
