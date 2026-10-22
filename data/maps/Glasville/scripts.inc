# 1 "data/maps/Glasville/scripts.pory"

# 2 "data/maps/Glasville/scripts.pory"
Glasville_MapScripts::
# 3 "data/maps/Glasville/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Glasville_OnTransition
# 4 "data/maps/Glasville/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Glasville_OnFrame
# 5 "data/maps/Glasville/scripts.pory"
	.byte 0
# 6 "data/maps/Glasville/scripts.pory"

# 7 "data/maps/Glasville/scripts.pory"
Glasville_OnFrame:
# 8 "data/maps/Glasville/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 22, Glasville_SamCall
# 9 "data/maps/Glasville/scripts.pory"
    .2byte 0

Glasville_OnTransition::
# 13 "data/maps/Glasville/scripts.pory"
	setflag FLAG_VISITED_GLASVILLE
	return


Glasville_SamCall::
# 17 "data/maps/Glasville/scripts.pory"
	lockall
# 18 "data/maps/Glasville/scripts.pory"
	faceplayer
# 19 "data/maps/Glasville/scripts.pory"
	pokenavcall GlasvilleCall
# 20 "data/maps/Glasville/scripts.pory"
	waitmessage
# 21 "data/maps/Glasville/scripts.pory"
	setvar VAR_MAIN_STORY, 23
# 22 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 23 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_SAM_PEBBLE
# 24 "data/maps/Glasville/scripts.pory"
	setflag FLAG_BRUCE_IRONAIR
# 25 "data/maps/Glasville/scripts.pory"
	setflag FLAG_BEFORE_ATTACK
# 26 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_AFTER_ATTACK_BRUCE
# 27 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_FRUX_GYM_QUESTION_1
# 28 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_FRUX_GYM_QUESTION_2
# 29 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_FRUX_GYM_QUESTION_3
# 30 "data/maps/Glasville/scripts.pory"
	releaseall
	end


Glasville_LockedDoor::
# 35 "data/maps/Glasville/scripts.pory"
	lock
# 36 "data/maps/Glasville/scripts.pory"
	checkitem ITEM_BIKE_VOUCHER
# 37 "data/maps/Glasville/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Glasville_LockedDoor_1
# 42 "data/maps/Glasville/scripts.pory"
	goto_if_set FLAG_QUEST_HOUSE, Glasville_LockedDoor_5
# 51 "data/maps/Glasville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_LockedDoor_Movement_0
# 52 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 53 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_LockedDoor_Text_0
# 54 "data/maps/Glasville/scripts.pory"
	closemessage
# 55 "data/maps/Glasville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_LockedDoor_Movement_1
# 56 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 57 "data/maps/Glasville/scripts.pory"
	startquest QUEST_EMPTY_HOUSE
# 58 "data/maps/Glasville/scripts.pory"
	setflag FLAG_QUEST_HOUSE
Glasville_LockedDoor_4:
# 60 "data/maps/Glasville/scripts.pory"
	release
	end

Glasville_LockedDoor_1:
# 38 "data/maps/Glasville/scripts.pory"
	release
	end

Glasville_LockedDoor_5:
# 43 "data/maps/Glasville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_LockedDoor_Movement_0
# 44 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 45 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_LockedDoor_Text_0
# 46 "data/maps/Glasville/scripts.pory"
	closemessage
# 47 "data/maps/Glasville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_LockedDoor_Movement_1
# 48 "data/maps/Glasville/scripts.pory"
	waitmovement 0
	goto Glasville_LockedDoor_4


Glasville_OldMan::
# 66 "data/maps/Glasville/scripts.pory"
	lock
# 67 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_OldMan_Text_0
# 68 "data/maps/Glasville/scripts.pory"
	faceplayer
# 69 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_OldMan_Text_1
# 70 "data/maps/Glasville/scripts.pory"
	closemessage
# 71 "data/maps/Glasville/scripts.pory"
	turnobject 2, DIR_NORTH
# 72 "data/maps/Glasville/scripts.pory"
	delay 20
# 73 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_OldMan_Text_2
# 74 "data/maps/Glasville/scripts.pory"
	release
	end


Glasville_OldWoman::
# 79 "data/maps/Glasville/scripts.pory"
	lock
# 80 "data/maps/Glasville/scripts.pory"
	faceplayer
# 81 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_OldWoman_Text_0
# 82 "data/maps/Glasville/scripts.pory"
	release
	end


Glasville_Cosplayer::
# 87 "data/maps/Glasville/scripts.pory"
	lock
# 88 "data/maps/Glasville/scripts.pory"
	faceplayer
# 89 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_Cosplayer_Text_0
# 90 "data/maps/Glasville/scripts.pory"
	release
	end


Glasville_Sign::
# 95 "data/maps/Glasville/scripts.pory"
	lockall
# 96 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_Sign_Text_0
# 97 "data/maps/Glasville/scripts.pory"
	releaseall
	end


Glasville_Gym::
# 102 "data/maps/Glasville/scripts.pory"
	lockall
# 103 "data/maps/Glasville/scripts.pory"
	compare VAR_MAIN_STORY, 17
	goto_if_le Glasville_Gym_2
# 131 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_Gym_Text_0
Glasville_Gym_1:
# 133 "data/maps/Glasville/scripts.pory"
	releaseall
	end

Glasville_Gym_2:
# 104 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_Gym_Text_0
# 105 "data/maps/Glasville/scripts.pory"
	closemessage
# 106 "data/maps/Glasville/scripts.pory"
	delay 40
# 107 "data/maps/Glasville/scripts.pory"
	clearflag FLAG_SCIENTIST_GLASVILLE
# 108 "data/maps/Glasville/scripts.pory"
	addobject 4
# 109 "data/maps/Glasville/scripts.pory"
	applymovement 4, Glasville_Gym_Movement_0
# 110 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 111 "data/maps/Glasville/scripts.pory"
	delay 20
# 112 "data/maps/Glasville/scripts.pory"
	applymovement 4, Glasville_Gym_Movement_1
# 113 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 114 "data/maps/Glasville/scripts.pory"
	delay 20
# 115 "data/maps/Glasville/scripts.pory"
	applymovement 4, Glasville_Gym_Movement_2
# 116 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 117 "data/maps/Glasville/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_Gym_Movement_3
# 118 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 119 "data/maps/Glasville/scripts.pory"
	msgbox Glasville_Gym_Text_1
# 120 "data/maps/Glasville/scripts.pory"
	closemessage
# 121 "data/maps/Glasville/scripts.pory"
	applymovement 4, Glasville_Gym_Movement_4
# 122 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 123 "data/maps/Glasville/scripts.pory"
	delay 20
# 124 "data/maps/Glasville/scripts.pory"
	applymovement 4, Glasville_Gym_Movement_5
# 125 "data/maps/Glasville/scripts.pory"
	waitmovement 0
# 126 "data/maps/Glasville/scripts.pory"
	removeobject 4
# 127 "data/maps/Glasville/scripts.pory"
	setflag FLAG_SCIENTIST_GLASVILLE
# 128 "data/maps/Glasville/scripts.pory"
	setvar VAR_MAIN_STORY, 18
	goto Glasville_Gym_1


# 43 "data/maps/Glasville/scripts.pory"
Glasville_LockedDoor_Movement_0:
# 43 "data/maps/Glasville/scripts.pory"
	face_up
	step_end

# 47 "data/maps/Glasville/scripts.pory"
Glasville_LockedDoor_Movement_1:
# 47 "data/maps/Glasville/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_0:
# 109 "data/maps/Glasville/scripts.pory"
	walk_right
# 109 "data/maps/Glasville/scripts.pory"
	walk_right
# 109 "data/maps/Glasville/scripts.pory"
	walk_right
# 109 "data/maps/Glasville/scripts.pory"
	walk_right
	step_end

# 112 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_1:
# 112 "data/maps/Glasville/scripts.pory"
	face_up
# 112 "data/maps/Glasville/scripts.pory"
	delay_16
# 112 "data/maps/Glasville/scripts.pory"
	face_left
# 112 "data/maps/Glasville/scripts.pory"
	delay_16
	step_end

# 115 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_2:
# 115 "data/maps/Glasville/scripts.pory"
	walk_fast_right
# 115 "data/maps/Glasville/scripts.pory"
	walk_fast_right
# 115 "data/maps/Glasville/scripts.pory"
	walk_fast_down
# 115 "data/maps/Glasville/scripts.pory"
	walk_fast_right
	step_end

# 117 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_3:
# 117 "data/maps/Glasville/scripts.pory"
	face_left
	step_end

# 121 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_4:
# 121 "data/maps/Glasville/scripts.pory"
	walk_left
# 121 "data/maps/Glasville/scripts.pory"
	walk_left
# 121 "data/maps/Glasville/scripts.pory"
	walk_left
# 121 "data/maps/Glasville/scripts.pory"
	walk_up
	step_end

# 124 "data/maps/Glasville/scripts.pory"
Glasville_Gym_Movement_5:
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
# 124 "data/maps/Glasville/scripts.pory"
	walk_fast_left
	step_end

Glasville_LockedDoor_Text_0:
# 45 "data/maps/Glasville/scripts.pory"
	.string "The door is locked. It'll need a key to\n"
	.string "open.$"

Glasville_OldMan_Text_0:
# 67 "data/maps/Glasville/scripts.pory"
	.string "...$"

Glasville_OldMan_Text_1:
# 69 "data/maps/Glasville/scripts.pory"
	.string "The water flows for a reason. We must\n"
	.string "not disturb it. Have you ever wondered\l"
	.string "why there aren't as many fish in the sea\l"
	.string "as there used to be?$"

Glasville_OldMan_Text_2:
# 73 "data/maps/Glasville/scripts.pory"
	.string "The answer is simple, and it's before our\n"
	.string "very eyes.$"

Glasville_OldWoman_Text_0:
# 81 "data/maps/Glasville/scripts.pory"
	.string "Corinna, may she rest in peace, turned\n"
	.string "this hollow land into a place where the\l"
	.string "souls can rest forever. She did a great\l"
	.string "job at it.$"

Glasville_Cosplayer_Text_0:
# 89 "data/maps/Glasville/scripts.pory"
	.string "I'm a big fan of Halloween and\n"
	.string "everything that is scary, so this town\l"
	.string "is the perfect place for me!$"

Glasville_Sign_Text_0:
# 96 "data/maps/Glasville/scripts.pory"
	.string "Glasville\n"
	.string "Thura's eternal resting place.$"

Glasville_Gym_Text_0:
# 104 "data/maps/Glasville/scripts.pory"
	.string "To every challenger\n"
	.string "Due to Corinna's death, the gym is\l"
	.string "closed until further notice.$"

Glasville_Gym_Text_1:
# 119 "data/maps/Glasville/scripts.pory"
	.string "...Hey. You're doing the Council\n"
	.string "Challenge, right? Corinna died a few\l"
	.string "days ago, what a bummer... But worry not,\l"
	.string "challenger. I may have just the right\l"
	.string "thing for you to progress in your quest.\l"
	.string "Meet me in my house. You go left from\l"
	.string "the gym, and it's in front of the\l"
	.string "vertical bridge. If someone asks you, we\l"
	.string "don't know each other.$"

GlasvilleCall::
# 137 "data/maps/Glasville/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Sam: Hiya {PLAYER}! Sup?\p"
	.string "… … … … … …\p"
	.string "Meet me in Pebble Cross!\n"
	.string "There's something neat I want\l"
	.string "to show you. Don't be late!\p"
	.string "… … … … … …\n… … … … … Click!$"
