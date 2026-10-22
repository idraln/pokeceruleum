# 1 "data/maps/Cali_House1/scripts.pory"

# 2 "data/maps/Cali_House1/scripts.pory"
Cali_House1_MapScripts::
# 3 "data/maps/Cali_House1/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Cali_House1_OnFrame
# 4 "data/maps/Cali_House1/scripts.pory"
	.byte 0
# 5 "data/maps/Cali_House1/scripts.pory"

# 6 "data/maps/Cali_House1/scripts.pory"
Cali_House1_OnFrame:
# 7 "data/maps/Cali_House1/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 13, Cali_House1_Arrival
# 8 "data/maps/Cali_House1/scripts.pory"
    .2byte 0

Cali_House1_Arrival::
# 12 "data/maps/Cali_House1/scripts.pory"
	lock
# 13 "data/maps/Cali_House1/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_0
# 15 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 16 "data/maps/Cali_House1/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 17 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 18 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_1
# 19 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 20 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 21 "data/maps/Cali_House1/scripts.pory"
	delay 20
# 22 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_1
# 23 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 24 "data/maps/Cali_House1/scripts.pory"
	applymovement 2, Cali_House1_Arrival_Movement_2
# 25 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 26 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_2
# 27 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_3
# 28 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 29 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 30 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_3
# 31 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 32 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 33 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_4
# 34 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 35 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 36 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_1
# 37 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 38 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_2
# 39 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_5
# 40 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 41 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 42 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_3
# 43 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 44 "data/maps/Cali_House1/scripts.pory"
	delay 20
# 45 "data/maps/Cali_House1/scripts.pory"
	playse SE_PIN
# 46 "data/maps/Cali_House1/scripts.pory"
	applymovement 1, Cali_House1_Arrival_Movement_4
# 47 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Cali_House1/scripts.pory"
	delay 30
# 49 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 50 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_6
# 51 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 52 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 53 "data/maps/Cali_House1/scripts.pory"
	applymovement 1, Cali_House1_Arrival_Movement_5
# 54 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Cali_House1_Arrival_Movement_6
# 55 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 56 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Cali_House1_Arrival_Movement_7
# 57 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Cali_House1/scripts.pory"
	special RemoveCameraObject
# 59 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 60 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_7
# 61 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 62 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 63 "data/maps/Cali_House1/scripts.pory"
	delay 30
# 64 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 65 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_8
# 66 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 67 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_9
# 68 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 69 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_10
# 70 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 71 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 72 "data/maps/Cali_House1/scripts.pory"
	applymovement 2, Cali_House1_Arrival_Movement_1
# 73 "data/maps/Cali_House1/scripts.pory"
	waitmovement
# 74 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 75 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Arrival_Text_11
# 76 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 77 "data/maps/Cali_House1/scripts.pory"
	trainerbattle_no_intro TRAINER_CALI_GRUNT_1, CaliGrunt2
# 78 "data/maps/Cali_House1/scripts.pory"
	goto Cali_House1_2ndBattle
	return


Cali_House1_2ndBattle::
# 86 "data/maps/Cali_House1/scripts.pory"
	applymovement 1, Cali_House1_2ndBattle_Movement_0
# 87 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 88 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 89 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_2ndBattle_Text_0
# 90 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 91 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 92 "data/maps/Cali_House1/scripts.pory"
	applymovement 2, Cali_House1_2ndBattle_Movement_1
# 93 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 94 "data/maps/Cali_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Cali_House1_2ndBattle_Movement_0
# 95 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 96 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_2
# 97 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_2ndBattle_Text_1
# 98 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 99 "data/maps/Cali_House1/scripts.pory"
	trainerbattle_no_intro TRAINER_CALI_GRUNT_2, CaliGrunt4
# 100 "data/maps/Cali_House1/scripts.pory"
	goto Cali_House1_Defeat
	return


Cali_House1_Defeat::
# 108 "data/maps/Cali_House1/scripts.pory"
	applymovement 1, Cali_House1_Arrival_Movement_2
# 109 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 110 "data/maps/Cali_House1/scripts.pory"
	namebox Cali_House1_Arrival_Text_0
# 111 "data/maps/Cali_House1/scripts.pory"
	msgbox Cali_House1_Defeat_Text_0
# 112 "data/maps/Cali_House1/scripts.pory"
	closemessage
# 113 "data/maps/Cali_House1/scripts.pory"
	hidenamebox
# 114 "data/maps/Cali_House1/scripts.pory"
	turnobject 1, DIR_SOUTH
# 115 "data/maps/Cali_House1/scripts.pory"
	removeobject 1
# 116 "data/maps/Cali_House1/scripts.pory"
	applymovement 2, Cali_House1_Defeat_Movement_0
# 117 "data/maps/Cali_House1/scripts.pory"
	waitmovement 0
# 118 "data/maps/Cali_House1/scripts.pory"
	removeobject 2
# 119 "data/maps/Cali_House1/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/Cali_House1/scripts.pory"
	setflag FLAG_CALI_GRUNTS
# 121 "data/maps/Cali_House1/scripts.pory"
	setvar VAR_MAIN_STORY, 14
# 122 "data/maps/Cali_House1/scripts.pory"
	fadeoutbgm 1
# 123 "data/maps/Cali_House1/scripts.pory"
	playbgm MUS_OLDALE, TRUE
# 124 "data/maps/Cali_House1/scripts.pory"
	release
	end


Cali_House1_Scarf::
# 129 "data/maps/Cali_House1/scripts.pory"
	lock
# 130 "data/maps/Cali_House1/scripts.pory"
	removeobject 3
# 131 "data/maps/Cali_House1/scripts.pory"
	giveitem ITEM_RED_SCARF
# 132 "data/maps/Cali_House1/scripts.pory"
	setflag FLAG_EKA_SCARF
# 133 "data/maps/Cali_House1/scripts.pory"
	release
	end


# 14 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_0:
# 14 "data/maps/Cali_House1/scripts.pory"
	walk_up
# 14 "data/maps/Cali_House1/scripts.pory"
	walk_up
# 14 "data/maps/Cali_House1/scripts.pory"
	walk_up
	step_end

# 22 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_1:
# 22 "data/maps/Cali_House1/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_2:
# 24 "data/maps/Cali_House1/scripts.pory"
	walk_in_place_up
	step_end

# 30 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_3:
# 30 "data/maps/Cali_House1/scripts.pory"
	walk_up
	step_end

# 46 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_4:
# 46 "data/maps/Cali_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_5:
# 53 "data/maps/Cali_House1/scripts.pory"
	walk_left
# 53 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 53 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 53 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 53 "data/maps/Cali_House1/scripts.pory"
	face_right
	step_end

# 54 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_6:
# 54 "data/maps/Cali_House1/scripts.pory"
	walk_left
# 54 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 54 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 54 "data/maps/Cali_House1/scripts.pory"
	walk_down
# 54 "data/maps/Cali_House1/scripts.pory"
	walk_right
	step_end

# 56 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Arrival_Movement_7:
# 56 "data/maps/Cali_House1/scripts.pory"
	face_left
	step_end

# 86 "data/maps/Cali_House1/scripts.pory"
Cali_House1_2ndBattle_Movement_0:
# 86 "data/maps/Cali_House1/scripts.pory"
	face_up
	step_end

# 92 "data/maps/Cali_House1/scripts.pory"
Cali_House1_2ndBattle_Movement_1:
# 92 "data/maps/Cali_House1/scripts.pory"
	walk_in_place_down
	step_end

# 116 "data/maps/Cali_House1/scripts.pory"
Cali_House1_Defeat_Movement_0:
# 116 "data/maps/Cali_House1/scripts.pory"
	walk_fast_left
# 116 "data/maps/Cali_House1/scripts.pory"
	walk_fast_down
	step_end

Cali_House1_Arrival_Text_0:
# 17 "data/maps/Cali_House1/scripts.pory"
	.string "Grunt 1$"

Cali_House1_Arrival_Text_1:
# 18 "data/maps/Cali_House1/scripts.pory"
	.string "You absolute moron. Why did you have to\n"
	.string "steal this boy's scarf? Don't you\l"
	.string "remember? We need to take the gym, not\l"
	.string "a stupid scarf!$"

Cali_House1_Arrival_Text_2:
# 26 "data/maps/Cali_House1/scripts.pory"
	.string "Grunt 2$"

Cali_House1_Arrival_Text_3:
# 27 "data/maps/Cali_House1/scripts.pory"
	.string "Man, you know how I be! I can't help\n"
	.string "myself, I constantly need to steal\l"
	.string "stuff!$"

Cali_House1_Arrival_Text_4:
# 33 "data/maps/Cali_House1/scripts.pory"
	.string "Well, now, we can't go back there\n"
	.string "because everyone saw us! We have to\l"
	.string "wait here until everybody forgets\l"
	.string "about us, all of that because of you!\l"
	.string "Congratulations!$"

Cali_House1_Arrival_Text_5:
# 39 "data/maps/Cali_House1/scripts.pory"
	.string "Ah thanks man! I knew you would... Wait,\n"
	.string "that was sarcasm, wasn't it? Whatever.$"

Cali_House1_Arrival_Text_6:
# 50 "data/maps/Cali_House1/scripts.pory"
	.string "Shut up! There's someone there!$"

Cali_House1_Arrival_Text_7:
# 60 "data/maps/Cali_House1/scripts.pory"
	.string "Hey, uh, can we help you?$"

Cali_House1_Arrival_Text_8:
# 65 "data/maps/Cali_House1/scripts.pory"
	.string "A scarf you say? I don't know what\n"
	.string "you're talking about, haha!$"

Cali_House1_Arrival_Text_9:
# 67 "data/maps/Cali_House1/scripts.pory"
	.string "...$"

Cali_House1_Arrival_Text_10:
# 69 "data/maps/Cali_House1/scripts.pory"
	.string "...You heard us? Dammit. I'm sorry kid,\n"
	.string "but you leave us no choice.$"

Cali_House1_Arrival_Text_11:
# 75 "data/maps/Cali_House1/scripts.pory"
	.string "We're gonna have to take care of you.\n"
	.string "And not in the nice, comforting way.$"

Cali_House1_2ndBattle_Text_0:
# 89 "data/maps/Cali_House1/scripts.pory"
	.string "Hey, this is your fault! You take care\n"
	.string "of this!$"

Cali_House1_2ndBattle_Text_1:
# 97 "data/maps/Cali_House1/scripts.pory"
	.string "Uh... Uh... Okay, here it comes, I guess?$"

Cali_House1_Defeat_Text_0:
# 111 "data/maps/Cali_House1/scripts.pory"
	.string "Great work, you nutjob. Let's get out of\n"
	.string "here, if we don't want our butts to get\l"
	.string "sorer. Damn it, we'll swim to Virimante.$"

CaliGrunt2::
# 81 "data/maps/Cali_House1/scripts.pory"
	.string "...This is a disaster...$"

CaliGrunt4::
# 103 "data/maps/Cali_House1/scripts.pory"
	.string "Noooo....$"
