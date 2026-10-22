# 1 "data/maps/PokemonLeague_LastLobby/scripts.pory"

# 2 "data/maps/PokemonLeague_LastLobby/scripts.pory"
PokemonLeague_LastLobby_MapScripts::
# 3 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LastLobby_OnFrame
# 4 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonLeague_LastLobby/scripts.pory"

# 6 "data/maps/PokemonLeague_LastLobby/scripts.pory"
PokemonLeague_LastLobby_OnFrame:
# 7 "data/maps/PokemonLeague_LastLobby/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, PokemonLeague_LastLobby_Arrival
# 8 "data/maps/PokemonLeague_LastLobby/scripts.pory"
    .2byte 0

PokemonLeague_LastLobby_Arrival::
# 13 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	lock
# 14 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	faceplayer
# 15 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LastLobby_Arrival_Movement_0
# 16 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	waitmovement 0
# 17 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	compare VAR_MAIN_STORY, 57
	goto_if_eq PokemonLeague_LastLobby_Arrival_2
# 31 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_eq PokemonLeague_LastLobby_Arrival_3
# 45 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	compare VAR_MAIN_STORY, 0
	goto_if_eq PokemonLeague_LastLobby_Arrival_4
# 78 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 79 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Arrival_Text_4
# 80 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	closemessage
# 81 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
# 82 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LastLobby_Arrival_Movement_1
# 83 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement 1, PokemonLeague_LastLobby_Arrival_Movement_2
# 84 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	waitmovement 0
# 85 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_PRESIDENT_START
# 86 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SAM_FINAL
# 87 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BERNARD_FINAL
# 88 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 89 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 0
PokemonLeague_LastLobby_Arrival_1:
# 91 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	release
	end

PokemonLeague_LastLobby_Arrival_2:
# 18 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 19 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Arrival_Text_1
# 20 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	closemessage
# 21 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
# 22 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LastLobby_Arrival_Movement_1
# 23 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement 1, PokemonLeague_LastLobby_Arrival_Movement_2
# 24 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	waitmovement 0
# 25 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_PRESIDENT_START
# 26 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SAM_FINAL
# 27 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BERNARD_FINAL
# 28 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 29 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 0
	goto PokemonLeague_LastLobby_Arrival_1

PokemonLeague_LastLobby_Arrival_3:
# 32 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 33 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Arrival_Text_2
# 34 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	closemessage
# 35 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
# 36 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LastLobby_Arrival_Movement_1
# 37 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement 1, PokemonLeague_LastLobby_Arrival_Movement_2
# 38 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	waitmovement 0
# 39 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_PRESIDENT_START
# 40 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SAM_FINAL
# 41 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BERNARD_FINAL
# 42 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 43 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 0
	goto PokemonLeague_LastLobby_Arrival_1

PokemonLeague_LastLobby_Arrival_4:
# 46 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 47 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Arrival_Text_3
# 48 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	closemessage
# 49 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
# 50 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LastLobby_Arrival_Movement_1
# 51 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	applymovement 1, PokemonLeague_LastLobby_Arrival_Movement_2
# 52 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	waitmovement 0
# 53 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_PRESIDENT_START
# 54 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SAM_FINAL
# 55 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BERNARD_FINAL
# 56 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 57 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	givemon SPECIES_XATU, 70, ITEM_ASSAULT_VEST, ITEM_LOVE_BALL, NATURE_MODEST, 3, MON_FEMALE, 0, 0, 0, 252, 252, 0, 0, 31, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_AEROBLAST, MOVE_SHADOW_BALL, MOVE_TOXIC
# 58 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE01_GET
# 59 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE02_GET
# 60 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE03_GET
# 61 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE04_GET
# 62 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE05_GET
# 63 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE06_GET
# 64 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE07_GET
# 65 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_BADGE08_GET
# 66 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 67 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SYS_ID_GET
# 68 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SYS_OPTIONS_DISABLE
# 69 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_SYS_DISABLE_SAVE
# 70 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setflag FLAG_KAM_LEAGUE
# 71 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 0
# 72 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_DEEP_SEAS_CUTSCENE, 0
# 73 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_TEMP_0, 1
# 74 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	setvar VAR_LEVELS, 100
# 75 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	addmoney 255984
	goto PokemonLeague_LastLobby_Arrival_1


PokemonLeague_LastLobby_Manager2::
# 96 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	lock
# 97 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	faceplayer
# 98 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_lt PokemonLeague_LastLobby_Manager2_2
# 104 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 105 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Manager2_Text_1
# 106 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
PokemonLeague_LastLobby_Manager2_1:
# 108 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	release
	end

PokemonLeague_LastLobby_Manager2_2:
# 99 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	namebox PokemonLeague_LastLobby_Arrival_Text_0
# 100 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Manager2_Text_0
# 101 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	hidenamebox
	goto PokemonLeague_LastLobby_Manager2_1


PokemonLeague_LastLobby_Mart::
# 113 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	lock
# 114 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	faceplayer
# 115 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Mart_Text_0
# 116 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	pokemart LastLobbyMart
# 117 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_Mart_Text_1
# 118 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	release
	end


PokemonLeague_LastLobby_LockedDoor::
# 123 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	lockall
# 124 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	msgbox PokemonLeague_LastLobby_LockedDoor_Text_0
# 125 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	releaseall
	return


	.align 2
# 128 "data/maps/PokemonLeague_LastLobby/scripts.pory"
LastLobbyMart:
# 129 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 130 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 131 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.2byte ITEM_ELIXIR
# 132 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.2byte ITEM_REVIVE
# 133 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

# 15 "data/maps/PokemonLeague_LastLobby/scripts.pory"
PokemonLeague_LastLobby_Arrival_Movement_0:
# 15 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	face_right
	step_end

# 22 "data/maps/PokemonLeague_LastLobby/scripts.pory"
PokemonLeague_LastLobby_Arrival_Movement_1:
# 22 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	walk_down
	step_end

# 23 "data/maps/PokemonLeague_LastLobby/scripts.pory"
PokemonLeague_LastLobby_Arrival_Movement_2:
# 23 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	walk_left
# 23 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	face_down
	step_end

PokemonLeague_LastLobby_Arrival_Text_0:
# 18 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Bernard$"

PokemonLeague_LastLobby_Arrival_Text_1:
# 19 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "{PLAYER}, good to see you back!\n"
	.string "There's someone very special waiting\l"
	.string "for you on the rooftop, go on and meet\l"
	.string "them!$"

PokemonLeague_LastLobby_Arrival_Text_2:
# 33 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "{PLAYER}, you mad one... You did it\n"
	.string "again! You defeated the Council once\l"
	.string "again! What a performance! Wait no more,\l"
	.string "and get to the roof. I'll join you in a\l"
	.string "few minutes and officially appoint you\l"
	.string "President of Thura!$"

PokemonLeague_LastLobby_Arrival_Text_3:
# 47 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Congratulations {PLAYER}!! You have\n"
	.string "successfully defeated every single\l"
	.string "member of the Council! The President\l"
	.string "awaits you outside. This is your big\l"
	.string "moment! Your final challenge! Many\l"
	.string "trainers have dreamt of this moment,\l"
	.string "and here you are! Now, be cool. Whatever\l"
	.string "happens, you already did so well. I'm so\l"
	.string "proud of you! Now, go and face your\l"
	.string "destiny!$"

PokemonLeague_LastLobby_Arrival_Text_4:
# 79 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "{PLAYER}, you know the drill. In the\n"
	.string "president room you go!$"

PokemonLeague_LastLobby_Manager2_Text_0:
# 100 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Come on now, enough chatter! It's time\n"
	.string "to face the President!$"

PokemonLeague_LastLobby_Manager2_Text_1:
# 105 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Come on, {PLAYER}! To the roof you go!$"

PokemonLeague_LastLobby_Mart_Text_0:
# 115 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Hi {PLAYER}! This is your last chance\n"
	.string "at buying something! What do you need?$"

PokemonLeague_LastLobby_Mart_Text_1:
# 117 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "Good luck, you'll need it!$"

PokemonLeague_LastLobby_LockedDoor_Text_0:
# 124 "data/maps/PokemonLeague_LastLobby/scripts.pory"
	.string "The door is locked.$"
