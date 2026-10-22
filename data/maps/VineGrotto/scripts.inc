# 1 "data/maps/VineGrotto/scripts.pory"

# 2 "data/maps/VineGrotto/scripts.pory"
VineGrotto_MapScripts::
# 3 "data/maps/VineGrotto/scripts.pory"
	.byte 0

VineGrotto_BugCatcher::
# 7 "data/maps/VineGrotto/scripts.pory"
	lock
# 8 "data/maps/VineGrotto/scripts.pory"
	faceplayer
# 9 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_BugCatcher_Text_0
# 10 "data/maps/VineGrotto/scripts.pory"
	release
	end


VineGrotto_LostMan::
# 15 "data/maps/VineGrotto/scripts.pory"
	lock
# 16 "data/maps/VineGrotto/scripts.pory"
	faceplayer
# 17 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_LostMan_Text_0
# 18 "data/maps/VineGrotto/scripts.pory"
	multichoice 0, 6, MULTI_VINEGROTTO, TRUE
# 19 "data/maps/VineGrotto/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/VineGrotto/scripts.pory"
	case 0, VineGrotto_LostMan_2
# 48 "data/maps/VineGrotto/scripts.pory"
	case 1, VineGrotto_LostMan_3
# 68 "data/maps/VineGrotto/scripts.pory"
	case 2, VineGrotto_LostMan_4
	return

VineGrotto_LostMan_2:
# 21 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_LostMan_Text_1
# 22 "data/maps/VineGrotto/scripts.pory"
	closemessage
# 23 "data/maps/VineGrotto/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 24 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq VineGrotto_LostMan_6
# 24 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq VineGrotto_LostMan_6
# 24 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq VineGrotto_LostMan_6
# 36 "data/maps/VineGrotto/scripts.pory"
	applymovement 4, VineGrotto_LostMan_Movement_1
# 37 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 38 "data/maps/VineGrotto/scripts.pory"
	removeobject 4
# 39 "data/maps/VineGrotto/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 7
# 40 "data/maps/VineGrotto/scripts.pory"
	setflag FLAG_MAN_VINEGROTTO
# 41 "data/maps/VineGrotto/scripts.pory"
	clearflag FLAG_ANGRY_VINEGROTTO
# 42 "data/maps/VineGrotto/scripts.pory"
	addobject 7
# 43 "data/maps/VineGrotto/scripts.pory"
	release
	end

VineGrotto_LostMan_3:
# 49 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_LostMan_Text_2
# 50 "data/maps/VineGrotto/scripts.pory"
	closemessage
# 51 "data/maps/VineGrotto/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 52 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq VineGrotto_LostMan_13
# 52 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq VineGrotto_LostMan_13
# 52 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq VineGrotto_LostMan_13
# 61 "data/maps/VineGrotto/scripts.pory"
	applymovement 4, VineGrotto_LostMan_Movement_3
# 62 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 63 "data/maps/VineGrotto/scripts.pory"
	removeobject 4
# 64 "data/maps/VineGrotto/scripts.pory"
	setflag FLAG_MAN_VINEGROTTO
# 65 "data/maps/VineGrotto/scripts.pory"
	release
	end

VineGrotto_LostMan_4:
# 69 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_LostMan_Text_3
# 70 "data/maps/VineGrotto/scripts.pory"
	release
	end

# 46 "data/maps/VineGrotto/scripts.pory"
	release
	end

VineGrotto_LostMan_6:
# 25 "data/maps/VineGrotto/scripts.pory"
	applymovement 4, VineGrotto_LostMan_Movement_0
# 26 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 27 "data/maps/VineGrotto/scripts.pory"
	removeobject 4
# 28 "data/maps/VineGrotto/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 7
# 29 "data/maps/VineGrotto/scripts.pory"
	setflag FLAG_MAN_VINEGROTTO
# 30 "data/maps/VineGrotto/scripts.pory"
	clearflag FLAG_ANGRY_VINEGROTTO
# 31 "data/maps/VineGrotto/scripts.pory"
	addobject 7
# 32 "data/maps/VineGrotto/scripts.pory"
	release
	end

VineGrotto_LostMan_13:
# 53 "data/maps/VineGrotto/scripts.pory"
	applymovement 4, VineGrotto_LostMan_Movement_2
# 54 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 55 "data/maps/VineGrotto/scripts.pory"
	removeobject 4
# 56 "data/maps/VineGrotto/scripts.pory"
	setflag FLAG_MAN_VINEGROTTO
# 57 "data/maps/VineGrotto/scripts.pory"
	release
	end


VineGrotto_Dexter::
# 76 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_single TRAINER_VINE_GROTTO_1, Dexter1, Dexter2
# 77 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Dexter_Text_0
# 78 "data/maps/VineGrotto/scripts.pory"
	closemessage
	end


VineGrotto_Elsie::
# 91 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_single TRAINER_VINE_GROTTO_2, Elsie1, Elsie2
# 92 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Elsie_Text_0
# 93 "data/maps/VineGrotto/scripts.pory"
	closemessage
	end


VineGrotto_Angry::
# 106 "data/maps/VineGrotto/scripts.pory"
	lock
# 107 "data/maps/VineGrotto/scripts.pory"
	delay 20
# 108 "data/maps/VineGrotto/scripts.pory"
	playse SE_PIN
# 109 "data/maps/VineGrotto/scripts.pory"
	applymovement 7, VineGrotto_Angry_Movement_0
# 110 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 111 "data/maps/VineGrotto/scripts.pory"
	delay 40
# 112 "data/maps/VineGrotto/scripts.pory"
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
# 113 "data/maps/VineGrotto/scripts.pory"
	compare VAR_TEMP_4, 9
	goto_if_eq VineGrotto_Angry_2
# 124 "data/maps/VineGrotto/scripts.pory"
	applymovement 7, VineGrotto_Angry_Movement_3
# 125 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 126 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Angry_Text_0
# 127 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_no_intro TRAINER_VINE_GROTTO_3, Haris1
# 128 "data/maps/VineGrotto/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 8
# 129 "data/maps/VineGrotto/scripts.pory"
	applymovement 7, VineGrotto_Angry_Movement_4
# 130 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 131 "data/maps/VineGrotto/scripts.pory"
	turnobject 7, DIR_NORTH
VineGrotto_Angry_1:
# 133 "data/maps/VineGrotto/scripts.pory"
	release
	end

VineGrotto_Angry_2:
# 114 "data/maps/VineGrotto/scripts.pory"
	applymovement 7, VineGrotto_Angry_Movement_1
# 115 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 116 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Angry_Text_0
# 117 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_no_intro TRAINER_VINE_GROTTO_3, Haris1
# 118 "data/maps/VineGrotto/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 8
# 119 "data/maps/VineGrotto/scripts.pory"
	applymovement 7, VineGrotto_Angry_Movement_2
# 120 "data/maps/VineGrotto/scripts.pory"
	waitmovement 0
# 121 "data/maps/VineGrotto/scripts.pory"
	turnobject 7, DIR_NORTH
	goto VineGrotto_Angry_1


VineGrotto_Haris::
# 142 "data/maps/VineGrotto/scripts.pory"
	lock
# 143 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Haris_Text_0
# 144 "data/maps/VineGrotto/scripts.pory"
	release
	end


VineGrotto_Brett::
# 149 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_single TRAINER_VINE_GROTTO_4, Brett1, Brett2
# 150 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Brett_Text_0
# 151 "data/maps/VineGrotto/scripts.pory"
	release
	end


VineGrotto_Mildred::
# 164 "data/maps/VineGrotto/scripts.pory"
	trainerbattle_single TRAINER_VINE_GROTTO_5, Mildred1, Mildred2
# 165 "data/maps/VineGrotto/scripts.pory"
	msgbox VineGrotto_Mildred_Text_0
# 166 "data/maps/VineGrotto/scripts.pory"
	release
	end


# 25 "data/maps/VineGrotto/scripts.pory"
VineGrotto_LostMan_Movement_0:
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 25 "data/maps/VineGrotto/scripts.pory"
	delay_16
# 25 "data/maps/VineGrotto/scripts.pory"
	delay_16
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 25 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
	step_end

# 36 "data/maps/VineGrotto/scripts.pory"
VineGrotto_LostMan_Movement_1:
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_left
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 36 "data/maps/VineGrotto/scripts.pory"
	delay_16
# 36 "data/maps/VineGrotto/scripts.pory"
	delay_16
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_left
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
# 36 "data/maps/VineGrotto/scripts.pory"
	walk_fast_up
	step_end

# 53 "data/maps/VineGrotto/scripts.pory"
VineGrotto_LostMan_Movement_2:
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 53 "data/maps/VineGrotto/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/VineGrotto/scripts.pory"
VineGrotto_LostMan_Movement_3:
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_left
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 61 "data/maps/VineGrotto/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/VineGrotto/scripts.pory"
VineGrotto_Angry_Movement_0:
# 109 "data/maps/VineGrotto/scripts.pory"
	face_down
# 109 "data/maps/VineGrotto/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data/maps/VineGrotto/scripts.pory"
VineGrotto_Angry_Movement_1:
# 114 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 114 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 114 "data/maps/VineGrotto/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/VineGrotto/scripts.pory"
VineGrotto_Angry_Movement_2:
# 119 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 119 "data/maps/VineGrotto/scripts.pory"
	walk_up
	step_end

# 124 "data/maps/VineGrotto/scripts.pory"
VineGrotto_Angry_Movement_3:
# 124 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 124 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 124 "data/maps/VineGrotto/scripts.pory"
	walk_down
# 124 "data/maps/VineGrotto/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/VineGrotto/scripts.pory"
VineGrotto_Angry_Movement_4:
# 129 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 129 "data/maps/VineGrotto/scripts.pory"
	walk_up
# 129 "data/maps/VineGrotto/scripts.pory"
	walk_up
	step_end

VineGrotto_BugCatcher_Text_0:
# 9 "data/maps/VineGrotto/scripts.pory"
	.string "The refuge is great, but there are lots\n"
	.string "of Pokémons that are just as\l"
	.string "interesting here! If not more.$"

VineGrotto_LostMan_Text_0:
# 17 "data/maps/VineGrotto/scripts.pory"
	.string "I'm lost. You gotta help me, I don't do\n"
	.string "well in caves. Where should I go?$"

VineGrotto_LostMan_Text_1:
# 21 "data/maps/VineGrotto/scripts.pory"
	.string "Hmmm... You're sure? It looks darker\n"
	.string "that way... Oh well, I guess I don't have\l"
	.string "a choice, do I?$"

VineGrotto_LostMan_Text_2:
# 49 "data/maps/VineGrotto/scripts.pory"
	.string "Dude, you're a legend! Thank you so\n"
	.string "much!$"

VineGrotto_LostMan_Text_3:
# 69 "data/maps/VineGrotto/scripts.pory"
	.string "Come on, please! I'm on the verge of\n"
	.string "tears right here! Help me!$"

VineGrotto_Dexter_Text_0:
# 77 "data/maps/VineGrotto/scripts.pory"
	.string "You always gotta chase that high! Keep\n"
	.string "on training!$"

VineGrotto_Elsie_Text_0:
# 92 "data/maps/VineGrotto/scripts.pory"
	.string "How the hell do trees grow on rocks?\n"
	.string "Don't they need soil?$"

VineGrotto_Angry_Text_0:
# 116 "data/maps/VineGrotto/scripts.pory"
	.string "YOU! You TRICKED ME!! This is not at all\n"
	.string "the exit of the cave! Do you think it's\l"
	.string "funny to play with a man's emotions?$"

VineGrotto_Haris_Text_0:
# 143 "data/maps/VineGrotto/scripts.pory"
	.string "...Maybe if I dig with my own hands, will I\n"
	.string "be able to get out? God, why did I get\l"
	.string "myself into this mess?...$"

VineGrotto_Brett_Text_0:
# 150 "data/maps/VineGrotto/scripts.pory"
	.string "The look of fear on the trainers I face,\n"
	.string "you should see them!$"

VineGrotto_Mildred_Text_0:
# 165 "data/maps/VineGrotto/scripts.pory"
	.string "I've gone through a lot of changes in my\n"
	.string "life. I couldn't be happier now, I finally\l"
	.string "feel like my true self.$"

Dexter1::
# 82 "data/maps/VineGrotto/scripts.pory"
	.string "The humidity is doing wonders to my\n"
	.string "battle skills! See for yourself!$"

Dexter2::
# 86 "data/maps/VineGrotto/scripts.pory"
	.string "Great execution! How did you do that?$"

Elsie1::
# 97 "data/maps/VineGrotto/scripts.pory"
	.string "The biology of that cave makes no\n"
	.string "sense. Help me understand it better.$"

Elsie2::
# 101 "data/maps/VineGrotto/scripts.pory"
	.string "I still don't have answers to my\n"
	.string "questions? What was the point of that?$"

Haris1::
# 137 "data/maps/VineGrotto/scripts.pory"
	.string "I don't feel well, I think I'm gonna pass\n"
	.string "out...$"

Brett1::
# 155 "data/maps/VineGrotto/scripts.pory"
	.string "Aha! Bet you didn't see me there, did\n"
	.string "you?$"

Brett2::
# 159 "data/maps/VineGrotto/scripts.pory"
	.string "Hmm. Back to my hiding spot.$"

Mildred1::
# 170 "data/maps/VineGrotto/scripts.pory"
	.string "Let me teach you about love, young one.$"

Mildred2::
# 174 "data/maps/VineGrotto/scripts.pory"
	.string "Well, seeing you battle, you already\n"
	.string "know more about love than I thought!$"
