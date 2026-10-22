# 1 "data/maps/PokemonLeague_RoofTop/scripts.pory"

# 2 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_MapScripts::
# 3 "data/maps/PokemonLeague_RoofTop/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_RoofTop_OnFrame
# 4 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonLeague_RoofTop/scripts.pory"

# 6 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_OnFrame:
# 7 "data/maps/PokemonLeague_RoofTop/scripts.pory"
    map_script_2 VAR_FIRST_CUTSCENE, 0, PokemonLeague_RoofTop_Arrival
# 8 "data/maps/PokemonLeague_RoofTop/scripts.pory"
    .2byte 0

PokemonLeague_RoofTop_Arrival::
# 12 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	lock
# 13 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	compare VAR_MAIN_STORY, 57
	goto_if_eq PokemonLeague_RoofTop_Arrival_2
# 71 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_eq PokemonLeague_RoofTop_Arrival_3
# 226 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	compare VAR_MAIN_STORY, 0
	goto_if_eq PokemonLeague_RoofTop_Arrival_4
# 315 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_HALL_OF_FAME, 0
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_31
# 317 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 318 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_32
# 320 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 321 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 322 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 14, 5
# 323 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 324 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 325 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_2
# 326 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 327 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setflag FLAG_BERNARD_PRESIDENT
# 328 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	warp MAP_COUNCIL_HQ_PRESIDENT, 7, 16
# 329 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 1
PokemonLeague_RoofTop_Arrival_1:
# 331 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	release
	end

PokemonLeague_RoofTop_Arrival_2:
# 14 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_0
# 16 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 17 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 18 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, TRUE
# 19 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_0
# 20 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_1
# 21 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 22 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 23 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 24 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	trainerbattle_no_intro TRAINER_KAM_FINAL, SamFinal1
# 25 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq PokemonLeague_RoofTop_Arrival_9
# 44 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_VICTORY_GYM_LEADER, TRUE
# 45 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_0
# 46 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_3
# 47 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 48 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 4, PokemonLeague_RoofTop_Arrival_Movement_1
# 50 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 51 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 9, 5
# 52 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 53 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 4, PokemonLeague_RoofTop_Arrival_Movement_2
# 54 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 55 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	removeobject 4
# 56 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setflag FLAG_KAM_LEAGUE
# 57 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 59 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closedoor 9, 5
# 60 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 61 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_3
# 62 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 63 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 64 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	completequest QUEST_LAST_FIGHT
# 65 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 66 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_MAIN_STORY, 58
# 67 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 68 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special GameClear
	goto PokemonLeague_RoofTop_Arrival_1

PokemonLeague_RoofTop_Arrival_3:
# 72 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_HALL_OF_FAME, 0
# 73 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_4
# 74 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 75 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_5
# 77 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 78 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 79 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_4
# 80 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 81 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 60
# 82 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_6
# 83 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 84 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 85 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 9, 5
# 86 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 87 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_SAM_FINAL
# 88 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	addobject 2
# 89 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_4
# 90 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 91 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closedoor 9, 5
# 92 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 93 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 94 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_5
# 95 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_6
# 96 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 97 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 98 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_7
# 100 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 101 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 102 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_5
# 103 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_7
# 104 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 105 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 106 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 107 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_8
# 108 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 109 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_9
# 110 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 111 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 112 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_5
# 113 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_8
# 114 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 115 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 116 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 117 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 9, 5
# 118 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 119 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_BERNARD_FINAL
# 120 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	addobject 3
# 121 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_4
# 122 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 123 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closedoor 9, 5
# 124 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_10
# 126 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 127 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 128 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_10
# 129 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 130 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 131 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playse SE_PIN
# 132 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_11
# 133 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_11
# 134 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 135 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 136 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 137 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_11
# 138 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 139 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 140 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 141 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_9
# 142 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_12
# 143 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 144 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 145 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_13
# 146 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_13
# 147 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 148 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 149 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 150 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_12
# 151 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 152 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 153 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 154 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 155 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_9
# 156 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_12
# 157 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 158 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 159 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_5
# 160 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_13
# 161 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 162 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 163 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_14
# 164 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 2, PokemonLeague_RoofTop_Arrival_Movement_15
# 165 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 166 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 167 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_FINAL, SamFinal1
# 168 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq PokemonLeague_RoofTop_Arrival_12
# 187 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_VICTORY_GYM_LEADER, TRUE
# 188 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_16
# 189 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 190 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 191 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_15
# 192 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 193 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 194 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 195 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_9
# 196 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 197 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 198 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 199 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_16
# 200 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 201 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 202 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 203 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_12
# 204 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 205 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 206 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_9
# 207 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_17
# 208 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 209 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_17
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_18
# 212 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 213 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 14, 5
# 214 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 215 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 3, PokemonLeague_RoofTop_Arrival_Movement_2
# 216 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 217 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	removeobject 3
# 218 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 219 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setflag FLAG_BERNARD_FINAL
# 220 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_19
# 221 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 222 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	warp MAP_COUNCIL_HQ_PRESIDENT, 7, 16
# 223 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 1
	goto PokemonLeague_RoofTop_Arrival_1

PokemonLeague_RoofTop_Arrival_4:
# 227 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_20
# 229 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 230 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special SpawnCameraObject
# 231 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_RoofTop_Arrival_Movement_21
# 232 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 233 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 234 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	opendoor 14, 5
# 235 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 236 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_PRESIDENT_START
# 237 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	addobject 1
# 238 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_4
# 239 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 240 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closedoor 14, 5
# 241 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitdooranim
# 242 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_22
# 244 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 245 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 246 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, TRUE
# 247 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_18
# 248 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_19
# 249 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 250 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 251 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_23
# 252 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_24
# 253 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 254 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 255 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	fadeoutbgm 0
# 257 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_20
# 258 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_21
# 259 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 260 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 261 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 262 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_25
# 264 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 265 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 266 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_18
# 267 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_22
# 268 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 269 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 270 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 271 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_20
# 272 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_23
# 273 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 274 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 275 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_26
# 276 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 277 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 40
# 278 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_18
# 279 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_24
# 280 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 281 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 282 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_12
# 283 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 284 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 285 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_18
# 286 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_25
# 287 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 288 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 289 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 290 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_20
# 291 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_26
# 292 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 293 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 294 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay 20
# 295 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_20
# 296 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_27
# 297 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 298 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 299 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	call ScreenShake
# 300 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	playse SE_PIN
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_27
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_28
# 303 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	call ScreenShake
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_RoofTop_Arrival_Movement_29
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	applymovement 1, PokemonLeague_RoofTop_Arrival_Movement_30
# 306 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	call ScreenShake
# 307 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitmovement 0
# 308 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special RemoveCameraObject
# 311 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	warpsilent MAP_DEEP_SEAS, 3, 4
# 312 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 1
	goto PokemonLeague_RoofTop_Arrival_1

PokemonLeague_RoofTop_Arrival_9:
# 26 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_0
# 27 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_2
# 28 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 29 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 30 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special HealPlayerParty
# 31 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 32 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 33 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 34 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 35 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 36 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 37 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 38 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 39 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 40 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 41 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 1
	goto PokemonLeague_RoofTop_Arrival_1

PokemonLeague_RoofTop_Arrival_12:
# 169 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	namebox PokemonLeague_RoofTop_Arrival_Text_5
# 170 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	msgbox PokemonLeague_RoofTop_Arrival_Text_14
# 171 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	closemessage
# 172 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	hidenamebox
# 173 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special HealPlayerParty
# 174 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 175 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 176 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 177 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 178 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 179 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 180 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 181 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 182 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 183 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 184 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_FIRST_CUTSCENE, 1
	goto PokemonLeague_RoofTop_Arrival_1


ScreenShake::
# 336 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_0x8004, 5
# 337 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_0x8005, 10
# 338 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_0x8006, 10
# 339 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	setvar VAR_0x8007, 5
# 340 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	special ShakeCamera
# 341 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	waitstate
	return


# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_0:
# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 15 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
	step_end

# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_1:
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_left
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_left
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_left
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_left
# 49 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
	step_end

# 53 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_2:
# 53 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_3:
# 61 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
	step_end

# 73 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_4:
# 73 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_5:
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 76 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
	step_end

# 82 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_6:
# 82 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 82 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 82 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_7:
# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 99 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
	step_end

# 107 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_8:
# 107 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 107 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 107 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 109 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_9:
# 109 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_right
	step_end

# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_10:
# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 125 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
	step_end

# 132 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_11:
# 132 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	emote_exclamation_mark
# 132 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
	step_end

# 142 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_12:
# 142 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 145 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_13:
# 145 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
	step_end

# 163 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_14:
# 163 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_left
# 163 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_right
	step_end

# 164 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_15:
# 164 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 164 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 188 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_16:
# 188 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 188 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 188 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_17:
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 210 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
	step_end

# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_18:
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 211 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
	step_end

# 220 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_19:
# 220 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 220 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
	step_end

# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_20:
# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 228 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_right
	step_end

# 231 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_21:
# 231 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 231 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
	step_end

# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_22:
# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 243 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 251 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_23:
# 251 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_fast_right
	step_end

# 252 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_24:
# 252 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_fast_left
	step_end

# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_25:
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 263 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	emote_question_mark
	step_end

# 275 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_26:
# 275 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	emote_question_mark
	step_end

# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_27:
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	emote_exclamation_mark
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 301 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
	step_end

# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_28:
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	emote_exclamation_mark
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_right
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 302 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_29:
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_right
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 304 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
	step_end

# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_30:
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_up
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_left
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	delay_16
# 305 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
	step_end

# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_31:
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_down
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 316 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	face_down
	step_end

# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
PokemonLeague_RoofTop_Arrival_Movement_32:
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_right
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
# 319 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	walk_up
	step_end

PokemonLeague_RoofTop_Arrival_Text_0:
# 19 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "K.A.M.$"

PokemonLeague_RoofTop_Arrival_Text_1:
# 20 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}! Remember when I said I\n"
	.string "wanted to be a Gym leader back in\l"
	.string "Hoenn? Well, I've been training hard to\l"
	.string "find Vikkie, and at some point I said to\l"
	.string "myself, heck it! Why not? Whay can't I\l"
	.string "achieve my dream? So I tried my luck at\l"
	.string "the Council Challenge, and here I am!\l"
	.string "And you're the last hurdle I have to\l"
	.string "overcome to complete that dream. Let's\l"
	.string "do it!$"

PokemonLeague_RoofTop_Arrival_Text_2:
# 27 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "I did it!$"

PokemonLeague_RoofTop_Arrival_Text_3:
# 46 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}... Thank you. I know my worth,\n"
	.string "and it's thanks to you. I realised I\l"
	.string "could be much more than a bandit... I'm\l"
	.string "actually talented. I'm actually someone\l"
	.string "worth of recongition... Thank you. I'll\l"
	.string "leave you alone, for now. See ya!$"

PokemonLeague_RoofTop_Arrival_Text_4:
# 79 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "(...I did it. For you, Grandma. For you,\n"
	.string "Xatu. Even you, Ulrich...)$"

PokemonLeague_RoofTop_Arrival_Text_5:
# 94 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Sam$"

PokemonLeague_RoofTop_Arrival_Text_6:
# 95 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "...Hey, {PLAYER}.$"

PokemonLeague_RoofTop_Arrival_Text_7:
# 103 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Fancy seeing you here, eh? Who would've\n"
	.string "thought that we, that I would end up on\l"
	.string "top of the most prestigious building of\l"
	.string "all Thura?$"

PokemonLeague_RoofTop_Arrival_Text_8:
# 113 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Guess what? I've also defeated each\n"
	.string "and every member of the Council! That\l"
	.string "means that we're both Presidents!$"

PokemonLeague_RoofTop_Arrival_Text_9:
# 127 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Bernard$"

PokemonLeague_RoofTop_Arrival_Text_10:
# 128 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Um, actually, no.$"

PokemonLeague_RoofTop_Arrival_Text_11:
# 137 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Sorry to be a killjoy, but there can't be\n"
	.string "two Presidents. Believe me, we've tried\l"
	.string "and it doesn't work.$"

PokemonLeague_RoofTop_Arrival_Text_12:
# 150 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "That means that you'll have to fight in\n"
	.string "order to decide who'll become the sole\l"
	.string "President of Thura.$"

PokemonLeague_RoofTop_Arrival_Text_13:
# 160 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "...{PLAYER}, I hope you're ready. This\n"
	.string "is an opportunity of a lifetime, and I'm\l"
	.string "not going to waste it. Let's do this!$"

PokemonLeague_RoofTop_Arrival_Text_14:
# 170 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "It's okay, {PLAYER}. I'll wait for you\n"
	.string "here.$"

PokemonLeague_RoofTop_Arrival_Text_15:
# 191 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}, congratulations!! It's now\n"
	.string "official, you're the new President of\l"
	.string "Thura!$"

PokemonLeague_RoofTop_Arrival_Text_16:
# 199 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Don't be sad, Sam. You've done great.\n"
	.string "You've got a long training career in\l"
	.string "front of you. And I might have\l"
	.string "something for you... Wait here.$"

PokemonLeague_RoofTop_Arrival_Text_17:
# 207 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}, follow me.$"

PokemonLeague_RoofTop_Arrival_Text_18:
# 247 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Pres.$"

PokemonLeague_RoofTop_Arrival_Text_19:
# 248 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}, it is with great honour that\n"
	.string "I welcome you on top of the most\l"
	.string "prestigious place in Thura: the Pokémon\l"
	.string "League. I heard you defeated every\l"
	.string "single member of the Council... Very\l"
	.string "good. See, I followed your career with\l"
	.string "great interest, ever since you earned\l"
	.string "your first emblem. I never doubted that\l"
	.string "someday, we would meet. And that day\l"
	.string "has finally come! Now, let's begin. Let's\l"
	.string "see which one of us is the strongest\l"
	.string "trainer of Thura!$"

PokemonLeague_RoofTop_Arrival_Text_20:
# 257 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "???$"

PokemonLeague_RoofTop_Arrival_Text_21:
# 258 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Not so fast!!$"

PokemonLeague_RoofTop_Arrival_Text_22:
# 267 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "What was that?$"

PokemonLeague_RoofTop_Arrival_Text_23:
# 272 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "We've surronded the building.\n"
	.string "Resistance will be futile!$"

PokemonLeague_RoofTop_Arrival_Text_24:
# 279 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Who are you? What is the meaning of all\n"
	.string "this?$"

PokemonLeague_RoofTop_Arrival_Text_25:
# 286 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "{PLAYER}, do you have something to do\n"
	.string "with this masquerade?$"

PokemonLeague_RoofTop_Arrival_Text_26:
# 291 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Silence! You'll soon find out!$"

PokemonLeague_RoofTop_Arrival_Text_27:
# 296 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "Steelix, use Earthquake!$"

SamFinal1::
# 344 "data/maps/PokemonLeague_RoofTop/scripts.pory"
	.string "...Woah. What a fight! Bravo,\n"
	.string "{PLAYER}!! You truly deserve to be\l"
	.string "the President!$"
