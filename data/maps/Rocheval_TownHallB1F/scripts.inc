# 1 "data/maps/Rocheval_TownHallB1F/scripts.pory"

# 2 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_MapScripts::
# 3 "data/maps/Rocheval_TownHallB1F/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_TownHallB1F_OnFrame
# 4 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.byte 0
# 5 "data/maps/Rocheval_TownHallB1F/scripts.pory"

# 6 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_OnFrame:
# 7 "data/maps/Rocheval_TownHallB1F/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 1, Rocheval_TownHallB1F_Arrival
# 8 "data/maps/Rocheval_TownHallB1F/scripts.pory"
    .2byte 0

Rocheval_TownHallB1F_Arrival::
# 13 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_MAIN_STORY, 1
	goto_if_eq Rocheval_TownHallB1F_Arrival_1
# 54 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	release
	end

Rocheval_TownHallB1F_Arrival_1:
# 14 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	lock
# 15 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_0
# 17 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay 40
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_1
# 20 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Arrival_Text_0
# 22 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	closemessage
# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_2
# 24 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay 20
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_3
# 27 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay 20
# 29 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Arrival_Text_1
# 30 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	closemessage
# 31 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay 40
# 32 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_4
# 33 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_TownHallB1F_Arrival_Movement_5
# 34 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Arrival_Text_2
# 36 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	closemessage
# 37 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_TownHallB1F_Arrival_Movement_6
# 38 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_7
# 40 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	hideobjectat 1, MAP_ROCHEVAL_TOWN_HALL_B1F
# 42 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitse
# 44 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	applymovement 1, Rocheval_TownHallB1F_Arrival_Movement_8
# 45 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	clearflag FLAG_STARTER
# 47 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_WALK, 1
# 49 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_MAIN_STORY, 2
# 50 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	release
	end


Rocheval_TownHallB1F_Pokeball::
# 61 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	lockall
# 62 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 63 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Pokeball_Text_0, MSGBOX_YESNO
# 64 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rocheval_TownHallB1F_Pokeball_2
# 90 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	hidemonpic
# 91 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Pokeball_Text_3
Rocheval_TownHallB1F_Pokeball_1:
# 93 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	waitmessage
# 94 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	releaseall
	end

Rocheval_TownHallB1F_Pokeball_2:
# 65 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 66 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rocheval_TownHallB1F_Pokeball_5
# 75 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rocheval_TownHallB1F_Pokeball_6
# 85 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	hidemonpic
# 86 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Pokeball_Text_2
	goto Rocheval_TownHallB1F_Pokeball_1

Rocheval_TownHallB1F_Pokeball_5:
# 67 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 68 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Pokeball_Text_1
# 69 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	removeobject 2
# 70 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setflag FLAG_STARTER
# 71 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call NicknamePokemon
# 72 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_MAIN_STORY, 3
# 73 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 1
	goto Rocheval_TownHallB1F_Pokeball_1

Rocheval_TownHallB1F_Pokeball_6:
# 76 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 77 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Pokeball_Text_1
# 78 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	removeobject 2
# 79 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setflag FLAG_STARTER
# 80 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call NicknameBoxmon
# 81 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_MAIN_STORY, 3
# 82 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 1
	goto Rocheval_TownHallB1F_Pokeball_1


Rocheval_TownHallB1F_Worker::
# 99 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_WAKINGUP, 2
	goto_if_eq Rocheval_TownHallB1F_Worker_1
# 115 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_WAKINGUP, 3
	goto_if_eq Rocheval_TownHallB1F_Worker_2
	return

Rocheval_TownHallB1F_Worker_1:
# 100 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	lock
# 101 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	faceplayer
# 102 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_FAV_TYPE, 0
	goto_if_eq Rocheval_TownHallB1F_Worker_6
# 105 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_FAV_TYPE, 1
	goto_if_eq Rocheval_TownHallB1F_Worker_7
# 109 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_2
Rocheval_TownHallB1F_Worker_5:
# 112 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	release
	end

Rocheval_TownHallB1F_Worker_2:
# 116 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	lock
# 117 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	faceplayer
# 118 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_FAV_TYPE, 0
	goto_if_eq Rocheval_TownHallB1F_Worker_12
# 121 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_FAV_TYPE, 1
	goto_if_eq Rocheval_TownHallB1F_Worker_13
# 125 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_5
Rocheval_TownHallB1F_Worker_11:
# 127 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	release
	end

Rocheval_TownHallB1F_Worker_6:
# 103 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_0
	goto Rocheval_TownHallB1F_Worker_5

Rocheval_TownHallB1F_Worker_7:
# 106 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_1
	goto Rocheval_TownHallB1F_Worker_5

Rocheval_TownHallB1F_Worker_12:
# 119 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_3
	goto Rocheval_TownHallB1F_Worker_11

Rocheval_TownHallB1F_Worker_13:
# 122 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox Rocheval_TownHallB1F_Worker_Text_4
	goto Rocheval_TownHallB1F_Worker_11


NicknamePokemon::
# 133 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox NicknamePokemon_Text_0, MSGBOX_YESNO
# 134 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	hidemonpic
# 135 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePokemon_1
	return

NicknamePokemon_1:
# 136 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 137 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxmon::
# 142 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	msgbox NicknamePokemon_Text_0, MSGBOX_YESNO
# 143 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	hidemonpic
# 144 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxmon_1
	return

NicknameBoxmon_1:
# 145 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 146 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 150 "data/maps/Rocheval_TownHallB1F/scripts.pory"
WorkerWelcoming:
# 151 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	emote_exclamation_mark
# 152 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay_16
	step_end

# 155 "data/maps/Rocheval_TownHallB1F/scripts.pory"
WorkerSearching:
# 156 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 156 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 156 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 157 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
# 157 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
# 158 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 158 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 158 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 159 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
# 160 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay_16
# 160 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay_16
# 161 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_down
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 162 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 163 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

# 166 "data/maps/Rocheval_TownHallB1F/scripts.pory"
WorkerPuttingPokeballOnTable:
# 167 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_down
# 168 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 168 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 169 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_down
# 170 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	delay_16
	step_end

# 173 "data/maps/Rocheval_TownHallB1F/scripts.pory"
WorkerBackToDesk:
# 174 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 174 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 175 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_down
# 175 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_down
# 176 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 176 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 176 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 177 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_up
	step_end

# 180 "data/maps/Rocheval_TownHallB1F/scripts.pory"
PokeballMovingLOL:
# 181 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_down
	step_end

# 16 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_0:
# 16 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_1:
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
# 19 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_2:
# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 23 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_3:
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_down
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_right
# 26 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_4:
# 32 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_left
	step_end

# 33 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_5:
# 33 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_right
	step_end

# 37 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_6:
# 37 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 37 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	face_right
	step_end

# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_7:
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_left
# 39 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/Rocheval_TownHallB1F/scripts.pory"
Rocheval_TownHallB1F_Arrival_Movement_8:
# 44 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	walk_up
	step_end

Rocheval_TownHallB1F_Arrival_Text_0:
# 21 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Are you the one that needs a\n"
	.string "Pokémon? Alright. I don't have much\l"
	.string "left, let me check real quick.$"

Rocheval_TownHallB1F_Arrival_Text_1:
# 29 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Ah.$"

Rocheval_TownHallB1F_Arrival_Text_2:
# 35 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...It appears I actually don't have any\n"
	.string "Pokémons left. Don't worry, though.\l"
	.string "Meet me outside, we'll go capture one on\l"
	.string "Cape East.$"

Rocheval_TownHallB1F_Pokeball_Text_0:
# 63 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "Would you like to take this Cyndaquil?$"

Rocheval_TownHallB1F_Pokeball_Text_1:
# 68 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "You just received a Cyndaquil! How\n"
	.string "cute.$"

Rocheval_TownHallB1F_Pokeball_Text_2:
# 86 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "You don't have any room left!$"

Rocheval_TownHallB1F_Pokeball_Text_3:
# 91 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "Think carefully!... Well, it's not like you\n"
	.string "have much choice anyway.$"

Rocheval_TownHallB1F_Worker_Text_0:
# 103 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Hey. Treecko is truly one of its kind.\n"
	.string "Thanks again. You did me a solid...$"

Rocheval_TownHallB1F_Worker_Text_1:
# 106 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Hey. Litten is truly one of its kind.\n"
	.string "Thanks again. You did me a solid...$"

Rocheval_TownHallB1F_Worker_Text_2:
# 109 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Hey. Totodile is truly one of its kind.\n"
	.string "Thanks again. You did me a solid...$"

Rocheval_TownHallB1F_Worker_Text_3:
# 119 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Oh. It's you. How's the Treecko? Which\n"
	.string "is technically mine, because I captured\l"
	.string "it? Ugh, life's so unfair...$"

Rocheval_TownHallB1F_Worker_Text_4:
# 122 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Oh. It's you. How's the Torchic? Which\n"
	.string "is technically mine, because I captured\l"
	.string "it? Ugh, life's so unfair...$"

Rocheval_TownHallB1F_Worker_Text_5:
# 125 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "...Oh. It's you. How's the Mudkip? Which\n"
	.string "is technically mine, because I captured\l"
	.string "it? Ugh, life's so unfair...$"

NicknamePokemon_Text_0:
# 133 "data/maps/Rocheval_TownHallB1F/scripts.pory"
	.string "Would you like to give it a nickname?$"
