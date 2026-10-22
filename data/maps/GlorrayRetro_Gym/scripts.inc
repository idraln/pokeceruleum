# 1 "data/maps/GlorrayRetro_Gym/scripts.pory"

# 2 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_MapScripts::
# 3 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.byte 0

GlorrayRetro_Gym_Aisha::
# 7 "data/maps/GlorrayRetro_Gym/scripts.pory"
	lock
# 8 "data/maps/GlorrayRetro_Gym/scripts.pory"
	faceplayer
# 9 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_0
# 10 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_1, MSGBOX_YESNO
# 11 "data/maps/GlorrayRetro_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GlorrayRetro_Gym_Aisha_2
# 107 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_14
# 108 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
GlorrayRetro_Gym_Aisha_1:
# 110 "data/maps/GlorrayRetro_Gym/scripts.pory"
	release
	end

GlorrayRetro_Gym_Aisha_2:
# 12 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_2
# 13 "data/maps/GlorrayRetro_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_AISHA_RETRO, Aisha1
# 14 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 15 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 40
# 16 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_0
# 17 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_3
# 18 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 19 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 20 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 40
# 21 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 22 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_5
# 23 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 24 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 25 "data/maps/GlorrayRetro_Gym/scripts.pory"
	turnobject 1, DIR_SOUTH
# 26 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 40
# 27 "data/maps/GlorrayRetro_Gym/scripts.pory"
	clearflag FLAG_BRO_GYM
# 28 "data/maps/GlorrayRetro_Gym/scripts.pory"
	addobject 2
# 29 "data/maps/GlorrayRetro_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 30 "data/maps/GlorrayRetro_Gym/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq GlorrayRetro_Gym_Aisha_6
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 2, GlorrayRetro_Gym_Aisha_Movement_3
# 45 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 46 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
GlorrayRetro_Gym_Aisha_5:
# 48 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 49 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_7
# 50 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 51 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 52 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 53 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_0
# 54 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_8
# 55 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 56 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 57 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 58 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 2, GlorrayRetro_Gym_Aisha_Movement_4
# 59 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 60 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 61 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_9
# 62 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 63 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 64 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 65 "data/maps/GlorrayRetro_Gym/scripts.pory"
	turnobject 2, DIR_NORTH
# 66 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 67 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_10
# 68 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 69 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 70 "data/maps/GlorrayRetro_Gym/scripts.pory"
	playse SE_PIN
# 71 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 1, GlorrayRetro_Gym_Aisha_Movement_5
# 72 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 73 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 40
# 74 "data/maps/GlorrayRetro_Gym/scripts.pory"
	turnobject 2, DIR_SOUTH
# 75 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 76 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_11
# 77 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 78 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 79 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 2, GlorrayRetro_Gym_Aisha_Movement_6
# 81 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 82 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 40
# 83 "data/maps/GlorrayRetro_Gym/scripts.pory"
	removeobject 2
# 84 "data/maps/GlorrayRetro_Gym/scripts.pory"
	setflag FLAG_BRO_GYM
# 85 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_0
# 86 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_12
# 87 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 88 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 89 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 90 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 1, GlorrayRetro_Gym_Aisha_Movement_7
# 91 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 92 "data/maps/GlorrayRetro_Gym/scripts.pory"
	turnobject 1, DIR_NORTH
# 93 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GlorrayRetro_Gym_Aisha_Movement_8
# 94 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 95 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_0
# 96 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_13
# 97 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 98 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 99 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 1, GlorrayRetro_Gym_Aisha_Movement_9
# 101 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 102 "data/maps/GlorrayRetro_Gym/scripts.pory"
	removeobject 1
# 103 "data/maps/GlorrayRetro_Gym/scripts.pory"
	setflag FLAG_GRANDMA_GYM
# 104 "data/maps/GlorrayRetro_Gym/scripts.pory"
	setflag FLAG_OLDMAN_NEST
	goto GlorrayRetro_Gym_Aisha_1

GlorrayRetro_Gym_Aisha_6:
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 2, GlorrayRetro_Gym_Aisha_Movement_0
# 32 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
# 33 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 34 "data/maps/GlorrayRetro_Gym/scripts.pory"
	namebox GlorrayRetro_Gym_Aisha_Text_4
# 35 "data/maps/GlorrayRetro_Gym/scripts.pory"
	msgbox GlorrayRetro_Gym_Aisha_Text_6
# 36 "data/maps/GlorrayRetro_Gym/scripts.pory"
	closemessage
# 37 "data/maps/GlorrayRetro_Gym/scripts.pory"
	hidenamebox
# 38 "data/maps/GlorrayRetro_Gym/scripts.pory"
	delay 20
# 39 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement 2, GlorrayRetro_Gym_Aisha_Movement_1
# 40 "data/maps/GlorrayRetro_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GlorrayRetro_Gym_Aisha_Movement_2
# 41 "data/maps/GlorrayRetro_Gym/scripts.pory"
	waitmovement 0
	goto GlorrayRetro_Gym_Aisha_5


# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_0:
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 31 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_1:
# 39 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_2:
# 40 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_right
# 40 "data/maps/GlorrayRetro_Gym/scripts.pory"
	face_left
	step_end

# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_3:
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
# 44 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_4:
# 58 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_5:
# 71 "data/maps/GlorrayRetro_Gym/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_6:
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 80 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
	step_end

# 90 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_7:
# 90 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 90 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_8:
# 93 "data/maps/GlorrayRetro_Gym/scripts.pory"
	face_down
	step_end

# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
GlorrayRetro_Gym_Aisha_Movement_9:
# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
# 100 "data/maps/GlorrayRetro_Gym/scripts.pory"
	walk_down
	step_end

GlorrayRetro_Gym_Aisha_Text_0:
# 9 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "Grandma$"

GlorrayRetro_Gym_Aisha_Text_1:
# 10 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...{PLAYER}. Have you finished your\n"
	.string "training? Do you wish to take your final\l"
	.string "test?$"

GlorrayRetro_Gym_Aisha_Text_2:
# 12 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "Very well, then. Show me what you've\n"
	.string "learned.$"

GlorrayRetro_Gym_Aisha_Text_3:
# 17 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...Very well. I think you're more than\n"
	.string "ready to try your chance on the\l"
	.string "continent. Let me just-$"

GlorrayRetro_Gym_Aisha_Text_4:
# 21 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "Ulrich$"

GlorrayRetro_Gym_Aisha_Text_5:
# 22 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "GRANDMA!$"

GlorrayRetro_Gym_Aisha_Text_6:
# 35 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...Out of my way, you.$"

GlorrayRetro_Gym_Aisha_Text_7:
# 49 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...I want a battle. Now.$"

GlorrayRetro_Gym_Aisha_Text_8:
# 54 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "With what Pokémon? Ulrich, you don't\n"
	.string "learn, do you? You need to behave.$"

GlorrayRetro_Gym_Aisha_Text_9:
# 61 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...Oh yeah?$"

GlorrayRetro_Gym_Aisha_Text_10:
# 67 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...Tell that to the old fart that guards\n"
	.string "the cave under Xatu's nest. He'll tell\l"
	.string "you if I behaved.$"

GlorrayRetro_Gym_Aisha_Text_11:
# 76 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "...See you. In another life.$"

GlorrayRetro_Gym_Aisha_Text_12:
# 86 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "This can't be...$"

GlorrayRetro_Gym_Aisha_Text_13:
# 96 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "{PLAYER}, meet me in Xatu's cave.\n"
	.string "Let's hope that Ulrich hasn't done any\l"
	.string "damage to the sacred painting.$"

GlorrayRetro_Gym_Aisha_Text_14:
# 107 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "In that case, go and spend more time\n"
	.string "with your Pokémons. Remember, you don't\l"
	.string "gain their trust only by having them on\l"
	.string "your belt.$"

Aisha1::
# 114 "data/maps/GlorrayRetro_Gym/scripts.pory"
	.string "Just as I expected. Well done.$"
