# 1 "data/maps/PebbleCross/scripts.pory"

# 2 "data/maps/PebbleCross/scripts.pory"
PebbleCross_MapScripts::
# 3 "data/maps/PebbleCross/scripts.pory"
	.byte 0

PebbleCross_Sam::
# 7 "data/maps/PebbleCross/scripts.pory"
	lock
# 8 "data/maps/PebbleCross/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/PebbleCross/scripts.pory"
	compare VAR_TEMP_1, 13
	goto_if_eq PebbleCross_Sam_2
# 64 "data/maps/PebbleCross/scripts.pory"
	turnobject 1, DIR_EAST
# 65 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 66 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_1
# 67 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 68 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 69 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 70 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_6
# 71 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 72 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 73 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_2
# 74 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 75 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 76 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 77 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_PEBBLE, Sam5
# 78 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 79 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 80 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_3
# 81 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 82 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 83 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 85 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_1
# 86 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 87 "data/maps/PebbleCross/scripts.pory"
	turnobject 1, DIR_SOUTH
# 88 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 89 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 90 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_4
# 91 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 92 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 93 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_2
# 94 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_3
# 95 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 96 "data/maps/PebbleCross/scripts.pory"
	giveitem ITEM_TM49
# 97 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 98 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 99 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 100 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_4
# 101 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 102 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 103 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 104 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_5
# 105 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 106 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 107 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 108 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 109 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_6
# 110 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 111 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 112 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_5
# 113 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 114 "data/maps/PebbleCross/scripts.pory"
	removeobject 1
# 115 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_SAM_PEBBLE
# 116 "data/maps/PebbleCross/scripts.pory"
	setvar VAR_MAIN_STORY, 24
PebbleCross_Sam_1:
# 118 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Sam_2:
# 10 "data/maps/PebbleCross/scripts.pory"
	turnobject 1, DIR_EAST
# 11 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 12 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_1
# 13 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 14 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 15 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 16 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_0
# 17 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 18 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 19 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_2
# 20 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 21 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 22 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 23 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_PEBBLE, Sam5
# 24 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 25 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 26 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_3
# 27 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 28 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 29 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 31 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_1
# 32 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 33 "data/maps/PebbleCross/scripts.pory"
	turnobject 1, DIR_SOUTH
# 34 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 35 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 36 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_4
# 37 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 38 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 39 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Sam_Movement_2
# 40 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_3
# 41 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 42 "data/maps/PebbleCross/scripts.pory"
	giveitem ITEM_TM49
# 43 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 44 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 45 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_4
# 46 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 47 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 48 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 49 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_5
# 50 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 51 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 52 "data/maps/PebbleCross/scripts.pory"
	delay 40
# 53 "data/maps/PebbleCross/scripts.pory"
	namebox PebbleCross_Sam_Text_0
# 54 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sam_Text_6
# 55 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 56 "data/maps/PebbleCross/scripts.pory"
	hidenamebox
# 57 "data/maps/PebbleCross/scripts.pory"
	applymovement 1, PebbleCross_Sam_Movement_5
# 58 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 59 "data/maps/PebbleCross/scripts.pory"
	removeobject 1
# 60 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_SAM_PEBBLE
# 61 "data/maps/PebbleCross/scripts.pory"
	setvar VAR_MAIN_STORY, 24
	goto PebbleCross_Sam_1


PebbleCross_Interaction::
	return


PebbleCross_Lover::
# 131 "data/maps/PebbleCross/scripts.pory"
	lock
# 132 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 133 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Lover_Text_0
# 134 "data/maps/PebbleCross/scripts.pory"
	closemessage
# 135 "data/maps/PebbleCross/scripts.pory"
	turnobject 13, DIR_NORTH
# 136 "data/maps/PebbleCross/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PebbleCross_Lover_Movement_0
# 137 "data/maps/PebbleCross/scripts.pory"
	waitmovement 0
# 138 "data/maps/PebbleCross/scripts.pory"
	delay 20
# 139 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Lover_Text_1
# 140 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Boy::
# 145 "data/maps/PebbleCross/scripts.pory"
	lock
# 146 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 147 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Boy_Text_0
# 148 "data/maps/PebbleCross/scripts.pory"
	turnobject 18, DIR_SOUTH
# 149 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Picnicker::
# 154 "data/maps/PebbleCross/scripts.pory"
	lock
# 155 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 156 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Picnicker_Text_0
# 157 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Hunter::
# 162 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_1, Hunter1, Hunter2
# 163 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Hunter_Text_0
# 164 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Camper::
# 177 "data/maps/PebbleCross/scripts.pory"
	lock
# 178 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 179 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Camper_Text_0
# 180 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Selma::
# 185 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_2, Selma1, Selma2
# 186 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Selma_Text_0
# 187 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Sign::
# 200 "data/maps/PebbleCross/scripts.pory"
	lockall
# 201 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Sign_Text_0
# 202 "data/maps/PebbleCross/scripts.pory"
	releaseall
	end


PebbleCross_Toby::
# 207 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_3, Toby1, Toby2
# 208 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Toby_Text_0
# 209 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Matilda::
# 222 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_4, Matilda1, Matilda2
# 223 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Matilda_Text_0
# 224 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Justine::
# 237 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_5, Justine1, Justine2
# 238 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Justine_Text_0
# 239 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Ninja::
# 252 "data/maps/PebbleCross/scripts.pory"
	lock
# 253 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 254 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Ninja_Text_0
# 255 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Harald::
# 260 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_6, Harald1, Harald2
# 261 "data/maps/PebbleCross/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq PebbleCross_Harald_2
# 265 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Harald_Text_1
PebbleCross_Harald_1:
# 267 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end

PebbleCross_Harald_2:
# 262 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Harald_Text_0
	goto PebbleCross_Harald_1


PebbleCross_Botanist::
# 280 "data/maps/PebbleCross/scripts.pory"
	lock
# 281 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Botanist_Text_0
# 282 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Swimmer::
# 287 "data/maps/PebbleCross/scripts.pory"
	lock
# 288 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 289 "data/maps/PebbleCross/scripts.pory"
	goto_if_set FLAG_QUEST_SHARDS_COMPLETE, PebbleCross_Swimmer_3
PebbleCross_Swimmer_1:
# 294 "data/maps/PebbleCross/scripts.pory"
	goto_if_set FLAG_QUEST_SHARDS, PebbleCross_Swimmer_6
# 347 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_5
# 348 "data/maps/PebbleCross/scripts.pory"
	startquest QUEST_SHARDS
# 349 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_QUEST_SHARDS
# 350 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_2:
# 290 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_0
# 291 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_3:
# 289 "data/maps/PebbleCross/scripts.pory"
	goto_if_set FLAG_QUEST_SHARDS, PebbleCross_Swimmer_2
	goto PebbleCross_Swimmer_1

PebbleCross_Swimmer_6:
# 295 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_1, MSGBOX_YESNO
# 296 "data/maps/PebbleCross/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PebbleCross_Swimmer_9
# 341 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_4
# 342 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_9:
# 297 "data/maps/PebbleCross/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 298 "data/maps/PebbleCross/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PebbleCross_Swimmer_12
# 335 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_3
# 336 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_12:
# 299 "data/maps/PebbleCross/scripts.pory"
	checkitem ITEM_RED_SHARD
# 300 "data/maps/PebbleCross/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PebbleCross_Swimmer_15
# 329 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_3
# 330 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_15:
# 301 "data/maps/PebbleCross/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 302 "data/maps/PebbleCross/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PebbleCross_Swimmer_18
# 323 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_3
# 324 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_18:
# 303 "data/maps/PebbleCross/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 304 "data/maps/PebbleCross/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PebbleCross_Swimmer_21
# 317 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_3
# 318 "data/maps/PebbleCross/scripts.pory"
	release
	end

PebbleCross_Swimmer_21:
# 305 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Swimmer_Text_2
# 306 "data/maps/PebbleCross/scripts.pory"
	giveitem ITEM_RING_TARGET
# 307 "data/maps/PebbleCross/scripts.pory"
	removeitem ITEM_GREEN_SHARD, 1
# 308 "data/maps/PebbleCross/scripts.pory"
	removeitem ITEM_BLUE_SHARD, 1
# 309 "data/maps/PebbleCross/scripts.pory"
	removeitem ITEM_YELLOW_SHARD, 1
# 310 "data/maps/PebbleCross/scripts.pory"
	removeitem ITEM_RED_SHARD, 1
# 311 "data/maps/PebbleCross/scripts.pory"
	completequest QUEST_SHARDS
# 312 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_QUEST_SHARDS_COMPLETE
# 313 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_Chloe::
# 356 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_single TRAINER_PEBBLE_7, Chloe1, Chloe2
# 357 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Chloe_Text_0
# 358 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Cyclist::
# 371 "data/maps/PebbleCross/scripts.pory"
	lock
# 372 "data/maps/PebbleCross/scripts.pory"
	faceplayer
# 373 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_Cyclist_Text_0
# 374 "data/maps/PebbleCross/scripts.pory"
	release
	end


PebbleCross_MKandAsh::
# 379 "data/maps/PebbleCross/scripts.pory"
	trainerbattle_double TRAINER_PEBBLE_8, MKandAsh1, MKandAsh2, MKandAshNotEnough
# 380 "data/maps/PebbleCross/scripts.pory"
	msgbox PebbleCross_MKandAsh_Text_0
# 381 "data/maps/PebbleCross/scripts.pory"
	closemessage
	end


PebbleCross_Item::
# 386 "data/maps/PebbleCross/scripts.pory"
	lock
# 387 "data/maps/PebbleCross/scripts.pory"
	removeobject 19
# 388 "data/maps/PebbleCross/scripts.pory"
	giveitem ITEM_TM21
# 389 "data/maps/PebbleCross/scripts.pory"
	setflag FLAG_ITEM_PEBBLE
# 390 "data/maps/PebbleCross/scripts.pory"
	release
	end


# 16 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_0:
# 16 "data/maps/PebbleCross/scripts.pory"
	walk_down
# 16 "data/maps/PebbleCross/scripts.pory"
	walk_left
# 16 "data/maps/PebbleCross/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_1:
# 31 "data/maps/PebbleCross/scripts.pory"
	face_down
	step_end

# 39 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_2:
# 39 "data/maps/PebbleCross/scripts.pory"
	face_left
	step_end

# 40 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_3:
# 40 "data/maps/PebbleCross/scripts.pory"
	face_right
	step_end

# 45 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_4:
# 45 "data/maps/PebbleCross/scripts.pory"
	emote_question_mark
	step_end

# 57 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_5:
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
# 57 "data/maps/PebbleCross/scripts.pory"
	walk_fast_left
	step_end

# 70 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Sam_Movement_6:
# 70 "data/maps/PebbleCross/scripts.pory"
	walk_left
# 70 "data/maps/PebbleCross/scripts.pory"
	walk_left
	step_end

# 136 "data/maps/PebbleCross/scripts.pory"
PebbleCross_Lover_Movement_0:
# 136 "data/maps/PebbleCross/scripts.pory"
	face_up
	step_end

PebbleCross_Sam_Text_0:
# 11 "data/maps/PebbleCross/scripts.pory"
	.string "Sam$"

PebbleCross_Sam_Text_1:
# 12 "data/maps/PebbleCross/scripts.pory"
	.string "Hey, {PLAYER}!$"

PebbleCross_Sam_Text_2:
# 19 "data/maps/PebbleCross/scripts.pory"
	.string "Before I unveil my ground-breaking\n"
	.string "discovery to you, let's have a bit of\l"
	.string "fun, eh?$"

PebbleCross_Sam_Text_3:
# 26 "data/maps/PebbleCross/scripts.pory"
	.string "Check this out. See those rocky walls?$"

PebbleCross_Sam_Text_4:
# 36 "data/maps/PebbleCross/scripts.pory"
	.string "You can actually climb them!... Well, not\n"
	.string "you in particular, but your Pokémons.\l"
	.string "And for that, you'll need this!$"

PebbleCross_Sam_Text_5:
# 49 "data/maps/PebbleCross/scripts.pory"
	.string "...What? You say that you can Rock Climb\n"
	.string "without the TM? You only need an\l"
	.string "emblem? Damn, ok, I guess you already\l"
	.string "know everything! Anyway, that's a huge\l"
	.string "part of Thura that becomes available to\l"
	.string "us!$"

PebbleCross_Sam_Text_6:
# 54 "data/maps/PebbleCross/scripts.pory"
	.string "Gotta go. Talk to you soon!$"

PebbleCross_Lover_Text_0:
# 133 "data/maps/PebbleCross/scripts.pory"
	.string "See that girl down there?$"

PebbleCross_Lover_Text_1:
# 139 "data/maps/PebbleCross/scripts.pory"
	.string "She's literally the cutest. But I'm\n"
	.string "stuck here because I don't have any\l"
	.string "Pokémon that can Rock Climb. Maybe I\l"
	.string "need to climb down by myself...$"

PebbleCross_Boy_Text_0:
# 147 "data/maps/PebbleCross/scripts.pory"
	.string "I can't climb down, so I will jump from\n"
	.string "here and land on those comfortable\l"
	.string "looking trees down there! Surely that's\l"
	.string "a great idea!!$"

PebbleCross_Picnicker_Text_0:
# 156 "data/maps/PebbleCross/scripts.pory"
	.string "What a wonderful landscape! I love how\n"
	.string "the two soils blend together!$"

PebbleCross_Hunter_Text_0:
# 163 "data/maps/PebbleCross/scripts.pory"
	.string "If you're a fan of hiking, you'll enjoy\n"
	.string "the next hours. Otherwise, I would\l"
	.string "advise you to go back to the big city.$"

PebbleCross_Camper_Text_0:
# 179 "data/maps/PebbleCross/scripts.pory"
	.string "Nature is perfect. Why would you live in\n"
	.string "a big tower made out of concrete when\l"
	.string "you can hang your hammock wherever you\l"
	.string "want?$"

PebbleCross_Selma_Text_0:
# 186 "data/maps/PebbleCross/scripts.pory"
	.string "People don't realise that we live in one\n"
	.string "of the lushest place on Earth. How\l"
	.string "lucky we are!$"

PebbleCross_Sign_Text_0:
# 201 "data/maps/PebbleCross/scripts.pory"
	.string "{LEFT_ARROW} Frux\n"
	.string "{RIGHT_ARROW} Pkmn League HQ$"

PebbleCross_Toby_Text_0:
# 208 "data/maps/PebbleCross/scripts.pory"
	.string "I've been told of another kind of bug\n"
	.string "Pokémon that likes heat, but I don't\l"
	.string "remember its name...$"

PebbleCross_Matilda_Text_0:
# 223 "data/maps/PebbleCross/scripts.pory"
	.string "The heat is doing wonders to my feet. No\n"
	.string "more pain!$"

PebbleCross_Justine_Text_0:
# 238 "data/maps/PebbleCross/scripts.pory"
	.string "Back in my country, there's no volcano.\n"
	.string "It's huge!$"

PebbleCross_Ninja_Text_0:
# 254 "data/maps/PebbleCross/scripts.pory"
	.string "To complete my training, I have to hide\n"
	.string "in one of those sand dunes. But I'm\l"
	.string "claustrophobic. I'm never going to pass\l"
	.string "my exams...$"

PebbleCross_Harald_Text_0:
# 262 "data/maps/PebbleCross/scripts.pory"
	.string "Arceus has listened to our prayers! I'm\n"
	.string "catching fishes again!$"

PebbleCross_Harald_Text_1:
# 265 "data/maps/PebbleCross/scripts.pory"
	.string "Damn, no fish to be found, even in here.\n"
	.string "We might actually be doomed.$"

PebbleCross_Botanist_Text_0:
# 281 "data/maps/PebbleCross/scripts.pory"
	.string "...Hmmm, yes, this is indeed a tree. That\n"
	.string "looks like every other tree in here.\l"
	.string "Interesting...$"

PebbleCross_Swimmer_Text_0:
# 290 "data/maps/PebbleCross/scripts.pory"
	.string "Look! I've made a cute necklace!$"

PebbleCross_Swimmer_Text_1:
# 295 "data/maps/PebbleCross/scripts.pory"
	.string "Do you have the shards?$"

PebbleCross_Swimmer_Text_2:
# 305 "data/maps/PebbleCross/scripts.pory"
	.string "Woah! They look so pretty! Thank you so\n"
	.string "much! As promised, here's your gift.$"

PebbleCross_Swimmer_Text_3:
# 317 "data/maps/PebbleCross/scripts.pory"
	.string "You don't have enough shards! Please, I\n"
	.string "need them!$"

PebbleCross_Swimmer_Text_4:
# 341 "data/maps/PebbleCross/scripts.pory"
	.string "Please! I need them so much!$"

PebbleCross_Swimmer_Text_5:
# 347 "data/maps/PebbleCross/scripts.pory"
	.string "You know what I need right now? Shards!\n"
	.string "Yeah, shards! I heard you can mine them\l"
	.string "in The Ironair, but I don't have any\l"
	.string "tools... Can you please mine me some\l"
	.string "shards? One of each colour, please. I'll\l"
	.string "give you something in return, promise!$"

PebbleCross_Chloe_Text_0:
# 357 "data/maps/PebbleCross/scripts.pory"
	.string "I've been applying to work in Bruce's\n"
	.string "foundry for months, but they say I'm\l"
	.string "not qualified enough. Of course! That's\l"
	.string "why I want to work with you guys, so\l"
	.string "that I can learn!$"

PebbleCross_Cyclist_Text_0:
# 373 "data/maps/PebbleCross/scripts.pory"
	.string "I'm absolutely exhausted. Riding all the\n"
	.string "way from Ohulinn to Frux wasn't a good\l"
	.string "idea, and now I think I injured myself.$"

PebbleCross_MKandAsh_Text_0:
# 380 "data/maps/PebbleCross/scripts.pory"
	.string "We've settled just outside of Frux, so\n"
	.string "that exhausted trainers lose against\l"
	.string "us and give us all of their money! Very\l"
	.string "clever! Just like our big bro somewhere\l"
	.string "around Ohulinn.$"

Sam5::
# 126 "data/maps/PebbleCross/scripts.pory"
	.string "How are you already that strong? Teach\n"
	.string "me!$"

Hunter1::
# 168 "data/maps/PebbleCross/scripts.pory"
	.string "Hey! You! How did you get down there?$"

Hunter2::
# 172 "data/maps/PebbleCross/scripts.pory"
	.string "Yup, just like me!$"

Selma1::
# 191 "data/maps/PebbleCross/scripts.pory"
	.string "Wanna share some berries with me? I\n"
	.string "just picked some!$"

Selma2::
# 195 "data/maps/PebbleCross/scripts.pory"
	.string "You could've just said no...$"

Toby1::
# 213 "data/maps/PebbleCross/scripts.pory"
	.string "I'll show you something you've never\n"
	.string "seen before!$"

Toby2::
# 217 "data/maps/PebbleCross/scripts.pory"
	.string "Like, how? Not cool, man. I just caught\n"
	.string "it.$"

Matilda1::
# 228 "data/maps/PebbleCross/scripts.pory"
	.string "Have you ever heard of the benefits of\n"
	.string "heat therapy to your body?$"

Matilda2::
# 232 "data/maps/PebbleCross/scripts.pory"
	.string "I see, you already know your science!$"

Justine1::
# 243 "data/maps/PebbleCross/scripts.pory"
	.string "I come from a dry, hot place. I'm in my\n"
	.string "element!$"

Justine2::
# 247 "data/maps/PebbleCross/scripts.pory"
	.string "Woah, do you also live in a desert or\n"
	.string "something?$"

Harald1::
# 271 "data/maps/PebbleCross/scripts.pory"
	.string "Nothing. No-thing. Sorry bud, you're\n"
	.string "talking to me at the worst possible\l"
	.string "moment...$"

Harald2::
# 275 "data/maps/PebbleCross/scripts.pory"
	.string "Great. Fantastic, even.$"

Chloe1::
# 362 "data/maps/PebbleCross/scripts.pory"
	.string "Don't be scared! I'm trying to show my\n"
	.string "worth to Bruce!$"

Chloe2::
# 366 "data/maps/PebbleCross/scripts.pory"
	.string "Ok, back to the drawing board.$"

MKandAsh1::
# 394 "data/maps/PebbleCross/scripts.pory"
	.string "Heehee, you're trapped! You must be\n"
	.string "veeeery tired, right?$"

MKandAsh2::
# 398 "data/maps/PebbleCross/scripts.pory"
	.string "Nooo! That can't be!!$"

MKandAshNotEnough::
# 402 "data/maps/PebbleCross/scripts.pory"
	.string "Teehee, we're meanies, but not to the\n"
	.string "point to attack a trainer with only one\l"
	.string "Pokémon.$"
