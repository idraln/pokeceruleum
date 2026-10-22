# 1 "data/maps/Rocheval/scripts.pory"

# 2 "data/maps/Rocheval/scripts.pory"
Rocheval_MapScripts::
# 3 "data/maps/Rocheval/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_OnFrame
# 4 "data/maps/Rocheval/scripts.pory"
	.byte 0
# 5 "data/maps/Rocheval/scripts.pory"

# 6 "data/maps/Rocheval/scripts.pory"
Rocheval_OnFrame:
# 7 "data/maps/Rocheval/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 2, Rocheval_Starter
# 8 "data/maps/Rocheval/scripts.pory"
    .2byte 0

Rocheval_Starter::
# 12 "data/maps/Rocheval/scripts.pory"
	lock
# 13 "data/maps/Rocheval/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 14 "data/maps/Rocheval/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 15 "data/maps/Rocheval/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_Starter_Movement_0
# 16 "data/maps/Rocheval/scripts.pory"
	waitmovement 0
# 17 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_0
# 18 "data/maps/Rocheval/scripts.pory"
	closemessage
# 19 "data/maps/Rocheval/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 20 "data/maps/Rocheval/scripts.pory"
	compare VAR_TEMP_0, 32
	goto_if_eq Rocheval_Starter_2
Rocheval_Starter_1:
# 24 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_1
# 25 "data/maps/Rocheval/scripts.pory"
	closemessage
# 26 "data/maps/Rocheval/scripts.pory"
	special LoadWallyZigzagoon
# 28 "data/maps/Rocheval/scripts.pory"
	applymovement LOCALID_EMPLOYEE, Rocheval_Starter_Movement_2
# 29 "data/maps/Rocheval/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_Starter_Movement_2
# 30 "data/maps/Rocheval/scripts.pory"
	waitmovement 0
# 31 "data/maps/Rocheval/scripts.pory"
	applymovement LOCALID_EMPLOYEE, Rocheval_Starter_Movement_3, MAP_ROCHEVAL
# 32 "data/maps/Rocheval/scripts.pory"
	waitmovement LOCALID_EMPLOYEE, MAP_ROCHEVAL
# 33 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_2
# 34 "data/maps/Rocheval/scripts.pory"
	closemessage
# 35 "data/maps/Rocheval/scripts.pory"
	special StartWallyTutorialBattle
# 36 "data/maps/Rocheval/scripts.pory"
	waitstate
# 37 "data/maps/Rocheval/scripts.pory"
	callnative ClearPlayerParty
# 38 "data/maps/Rocheval/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/Rocheval/scripts.pory"
	applymovement LOCALID_EMPLOYEE, Rocheval_Starter_Movement_4, MAP_ROCHEVAL
# 40 "data/maps/Rocheval/scripts.pory"
	waitmovement LOCALID_EMPLOYEE, MAP_ROCHEVAL
# 41 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 0
	goto_if_eq Rocheval_Starter_5
# 44 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 1
	goto_if_eq Rocheval_Starter_6
# 47 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 2
	goto_if_eq Rocheval_Starter_7
Rocheval_Starter_4:
# 50 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rocheval_Starter_12
# 80 "data/maps/Rocheval/scripts.pory"
	closemessage
# 81 "data/maps/Rocheval/scripts.pory"
	delay 40
# 82 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_9
# 83 "data/maps/Rocheval/scripts.pory"
	closemessage
# 84 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 0
	goto_if_eq Rocheval_Starter_21
# 101 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 1
	goto_if_eq Rocheval_Starter_22
# 118 "data/maps/Rocheval/scripts.pory"
	compare VAR_FAV_TYPE, 2
	goto_if_eq Rocheval_Starter_23
Rocheval_Starter_20:
# 135 "data/maps/Rocheval/scripts.pory"
	closemessage
# 136 "data/maps/Rocheval/scripts.pory"
	delay 40
# 137 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_13
# 138 "data/maps/Rocheval/scripts.pory"
	setvar VAR_WAKINGUP, 3
# 139 "data/maps/Rocheval/scripts.pory"
	closemessage
Rocheval_Starter_11:
# 141 "data/maps/Rocheval/scripts.pory"
	applymovement LOCALID_EMPLOYEE, Rocheval_Starter_Movement_6, MAP_ROCHEVAL
# 142 "data/maps/Rocheval/scripts.pory"
	waitmovement LOCALID_EMPLOYEE, MAP_ROCHEVAL
# 143 "data/maps/Rocheval/scripts.pory"
	removeobject LOCALID_EMPLOYEE, MAP_ROCHEVAL
# 144 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_STARTER
# 145 "data/maps/Rocheval/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 146 "data/maps/Rocheval/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 1
# 147 "data/maps/Rocheval/scripts.pory"
	setvar VAR_MAIN_STORY, 3
# 148 "data/maps/Rocheval/scripts.pory"
	release
	end

Rocheval_Starter_2:
# 21 "data/maps/Rocheval/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_Starter_Movement_1
# 22 "data/maps/Rocheval/scripts.pory"
	waitmovement 0
	goto Rocheval_Starter_1

Rocheval_Starter_5:
# 42 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_3, MSGBOX_YESNO
	goto Rocheval_Starter_4

Rocheval_Starter_6:
# 45 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_4, MSGBOX_YESNO
	goto Rocheval_Starter_4

Rocheval_Starter_7:
# 48 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_5, MSGBOX_YESNO
	goto Rocheval_Starter_4

Rocheval_Starter_12:
# 51 "data/maps/Rocheval/scripts.pory"
	closemessage
# 52 "data/maps/Rocheval/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Rocheval/scripts.pory"
	applymovement LOCALID_EMPLOYEE, Rocheval_Starter_Movement_5, MAP_ROCHEVAL
# 54 "data/maps/Rocheval/scripts.pory"
	waitmovement LOCALID_EMPLOYEE, MAP_ROCHEVAL
# 55 "data/maps/Rocheval/scripts.pory"
	delay 40
# 56 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_6
# 57 "data/maps/Rocheval/scripts.pory"
	closemessage
# 58 "data/maps/Rocheval/scripts.pory"
	givemon SPECIES_EEVEE, 5
# 59 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rocheval_Starter_16
# 66 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rocheval_Starter_17
Rocheval_Starter_15:
# 73 "data/maps/Rocheval/scripts.pory"
	closemessage
# 74 "data/maps/Rocheval/scripts.pory"
	delay 40
# 75 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_8
# 76 "data/maps/Rocheval/scripts.pory"
	setvar VAR_WAKINGUP, 2
# 77 "data/maps/Rocheval/scripts.pory"
	closemessage
	goto Rocheval_Starter_11

Rocheval_Starter_16:
# 60 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 61 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_7
# 63 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 64 "data/maps/Rocheval/scripts.pory"
	call NicknamePokemon
	goto Rocheval_Starter_15

Rocheval_Starter_17:
# 67 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 68 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 69 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_7
# 70 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 71 "data/maps/Rocheval/scripts.pory"
	call NicknameBoxmon
	goto Rocheval_Starter_15

Rocheval_Starter_21:
# 85 "data/maps/Rocheval/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 86 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rocheval_Starter_27
# 93 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rocheval_Starter_28
	goto Rocheval_Starter_20

Rocheval_Starter_22:
# 102 "data/maps/Rocheval/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 103 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rocheval_Starter_31
# 110 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rocheval_Starter_32
	goto Rocheval_Starter_20

Rocheval_Starter_23:
# 119 "data/maps/Rocheval/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 120 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rocheval_Starter_35
# 127 "data/maps/Rocheval/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rocheval_Starter_36
	goto Rocheval_Starter_20

Rocheval_Starter_27:
# 87 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 88 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 89 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_10
# 90 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 91 "data/maps/Rocheval/scripts.pory"
	call NicknamePokemon
	goto Rocheval_Starter_20

Rocheval_Starter_28:
# 94 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 95 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 96 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_10
# 97 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 98 "data/maps/Rocheval/scripts.pory"
	call NicknameBoxmon
	goto Rocheval_Starter_20

Rocheval_Starter_31:
# 104 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 105 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 106 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_11
# 107 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 108 "data/maps/Rocheval/scripts.pory"
	call NicknamePokemon
	goto Rocheval_Starter_20

Rocheval_Starter_32:
# 111 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 112 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 113 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_11
# 114 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 115 "data/maps/Rocheval/scripts.pory"
	call NicknameBoxmon
	goto Rocheval_Starter_20

Rocheval_Starter_35:
# 121 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 122 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 123 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_12
# 124 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 125 "data/maps/Rocheval/scripts.pory"
	call NicknamePokemon
	goto Rocheval_Starter_20

Rocheval_Starter_36:
# 128 "data/maps/Rocheval/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 129 "data/maps/Rocheval/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 130 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Starter_Text_12
# 131 "data/maps/Rocheval/scripts.pory"
	waitfanfare
# 132 "data/maps/Rocheval/scripts.pory"
	call NicknameBoxmon
	goto Rocheval_Starter_20


Rocheval_TownHallSign::
# 153 "data/maps/Rocheval/scripts.pory"
	lockall
# 154 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_TownHallSign_Text_0
# 155 "data/maps/Rocheval/scripts.pory"
	releaseall
	return


Rocheval_TownSign::
# 159 "data/maps/Rocheval/scripts.pory"
	lockall
# 160 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_TownSign_Text_0
# 161 "data/maps/Rocheval/scripts.pory"
	releaseall
	return


Rocheval_Tourist::
# 165 "data/maps/Rocheval/scripts.pory"
	lock
# 166 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 167 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Tourist_Text_0
# 168 "data/maps/Rocheval/scripts.pory"
	release
	end


Rocheval_LittleGirl::
# 173 "data/maps/Rocheval/scripts.pory"
	compare VAR_MAIN_STORY, 7
	goto_if_ne Rocheval_LittleGirl_1
# 181 "data/maps/Rocheval/scripts.pory"
	lock
# 182 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 183 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_LittleGirl_Text_1
# 184 "data/maps/Rocheval/scripts.pory"
	release
	end

Rocheval_LittleGirl_1:
# 174 "data/maps/Rocheval/scripts.pory"
	lock
# 175 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 176 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_LittleGirl_Text_0
# 177 "data/maps/Rocheval/scripts.pory"
	release
	end


Rocheval_Grandma::
# 190 "data/maps/Rocheval/scripts.pory"
	lock
# 191 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 192 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Grandma_Text_0
# 193 "data/maps/Rocheval/scripts.pory"
	release
	end


Rocheval_Teenager::
# 198 "data/maps/Rocheval/scripts.pory"
	lock
# 199 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 200 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Teenager_Text_0
# 201 "data/maps/Rocheval/scripts.pory"
	release
	end


Rocheval_Artist::
# 206 "data/maps/Rocheval/scripts.pory"
	lock
# 207 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 208 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Artist_Text_0
# 209 "data/maps/Rocheval/scripts.pory"
	release
	end


Rocheval_Woman::
# 214 "data/maps/Rocheval/scripts.pory"
	lock
# 215 "data/maps/Rocheval/scripts.pory"
	faceplayer
# 216 "data/maps/Rocheval/scripts.pory"
	msgbox Rocheval_Woman_Text_0
# 217 "data/maps/Rocheval/scripts.pory"
	release
	end


# 221 "data/maps/Rocheval/scripts.pory"
LittleGirlRocheval:
# 222 "data/maps/Rocheval/scripts.pory"
	face_up
	step_end

# 15 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_0:
# 15 "data/maps/Rocheval/scripts.pory"
	face_right
	step_end

# 21 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_1:
# 21 "data/maps/Rocheval/scripts.pory"
	walk_right
	step_end

# 28 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_2:
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
# 28 "data/maps/Rocheval/scripts.pory"
	walk_right
	step_end

# 31 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_3:
# 31 "data/maps/Rocheval/scripts.pory"
	face_up
	step_end

# 39 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_4:
# 39 "data/maps/Rocheval/scripts.pory"
	face_left
	step_end

# 53 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_5:
# 53 "data/maps/Rocheval/scripts.pory"
	emote_exclamation_mark
	step_end

# 141 "data/maps/Rocheval/scripts.pory"
Rocheval_Starter_Movement_6:
# 141 "data/maps/Rocheval/scripts.pory"
	walk_down
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
# 141 "data/maps/Rocheval/scripts.pory"
	walk_left
	step_end

Rocheval_Starter_Text_0:
# 17 "data/maps/Rocheval/scripts.pory"
	.string "...There you are.$"

Rocheval_Starter_Text_1:
# 24 "data/maps/Rocheval/scripts.pory"
	.string "...Come on now, I don't have much time.$"

Rocheval_Starter_Text_2:
# 33 "data/maps/Rocheval/scripts.pory"
	.string "...Ok, get ready. But don't get too\n"
	.string "excited, the Pokémons on this route are\l"
	.string "pretty weak.$"

Rocheval_Starter_Text_3:
# 42 "data/maps/Rocheval/scripts.pory"
	.string "What the hell??? I've been on this\n"
	.string "route a million times and I've never\l"
	.string "encountered a Treecko!! I'll trade you\l"
	.string "my Eevee for it. Please.$"

Rocheval_Starter_Text_4:
# 45 "data/maps/Rocheval/scripts.pory"
	.string "What the hell??? I've been on this\n"
	.string "route a million times and I've never\l"
	.string "encountered a Torchic!! I'll trade you\l"
	.string "my Eevee for it. Please.$"

Rocheval_Starter_Text_5:
# 48 "data/maps/Rocheval/scripts.pory"
	.string "What the hell??? I've been on this\n"
	.string "route a million times and I've never\l"
	.string "encountered a Mudkip!! I'll trade you my\l"
	.string "Eevee for it. Please.$"

Rocheval_Starter_Text_6:
# 56 "data/maps/Rocheval/scripts.pory"
	.string "...You're a legend. Thank you so much.\n"
	.string "Here, take my Eevee.$"

Rocheval_Starter_Text_7:
# 62 "data/maps/Rocheval/scripts.pory"
	.string "You've just received an Eevee!$"

Rocheval_Starter_Text_8:
# 75 "data/maps/Rocheval/scripts.pory"
	.string "...I'll never forget what you did. Very\n"
	.string "cool. See you around.$"

Rocheval_Starter_Text_9:
# 82 "data/maps/Rocheval/scripts.pory"
	.string "...Wow. I see how it is. Nevermind, I don't\n"
	.string "need it.$"

Rocheval_Starter_Text_10:
# 89 "data/maps/Rocheval/scripts.pory"
	.string "You've just received a Treecko!$"

Rocheval_Starter_Text_11:
# 106 "data/maps/Rocheval/scripts.pory"
	.string "You've just received a Torchic!$"

Rocheval_Starter_Text_12:
# 123 "data/maps/Rocheval/scripts.pory"
	.string "You've just received a Mudkip!$"

Rocheval_Starter_Text_13:
# 137 "data/maps/Rocheval/scripts.pory"
	.string "...Not cool.$"

Rocheval_TownHallSign_Text_0:
# 154 "data/maps/Rocheval/scripts.pory"
	.string "Rocheval's Town Hall$"

Rocheval_TownSign_Text_0:
# 160 "data/maps/Rocheval/scripts.pory"
	.string "Rocheval \nThe charming seaside town.$"

Rocheval_Tourist_Text_0:
# 167 "data/maps/Rocheval/scripts.pory"
	.string "The mountains on this island are\n"
	.string "mental! I almost broke my leg hiking\l"
	.string "those summits. Worth it though.$"

Rocheval_LittleGirl_Text_0:
# 176 "data/maps/Rocheval/scripts.pory"
	.string "I heard that a new battle contest is\n"
	.string "taking place soon! I wish they'll accept\l"
	.string "me this time.$"

Rocheval_LittleGirl_Text_1:
# 183 "data/maps/Rocheval/scripts.pory"
	.string "That was so fun!! I hope I'll get\n"
	.string "further next time!$"

Rocheval_Grandma_Text_0:
# 192 "data/maps/Rocheval/scripts.pory"
	.string "I came here to retire, and to be at\n"
	.string "peace with Mother Nature. And then,\l"
	.string "those so-called artists come and\l"
	.string "disrupt our tranquility. One of them\l"
	.string "even called me 'old'.$"

Rocheval_Teenager_Text_0:
# 200 "data/maps/Rocheval/scripts.pory"
	.string "Do you think someone could swim up that\n"
	.string "waterfall? Well, I tried once and I\l"
	.string "almost went all the way up. I swear!$"

Rocheval_Artist_Text_0:
# 208 "data/maps/Rocheval/scripts.pory"
	.string "Ah, yes, I get it! The inspiration! Look\n"
	.string "at those flowers, those trees. Mmmh,\l"
	.string "yes. Even that old lady by the Town Hall.\l"
	.string "Everything makes sense. Yes!$"

Rocheval_Woman_Text_0:
# 216 "data/maps/Rocheval/scripts.pory"
	.string "Everything smells good here. Even the\n"
	.string "tourists who come back from their hike.\l"
	.string "That's the power of that town, I'll tell\l"
	.string "you what.$"
