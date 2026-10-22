# 1 "data/maps/Vikkelson_MansionB1F/scripts.pory"

# 2 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_MapScripts::
# 3 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.byte 0

Vikkelson_MansionB1F_Moria::
# 7 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	trainerbattle_single TRAINER_MANSION_1, Moria1, Moria2
# 8 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_Moria_Text_0
# 9 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	closemessage
	end


Vikkelson_MansionB1F_Claudia::
# 22 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	trainerbattle_single TRAINER_MANSION_2, Claudia1, Claudia2
# 23 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_Claudia_Text_0
# 24 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	closemessage
	end


Vikkelson_MansionB1F_Maid::
# 37 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	lock
# 38 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	faceplayer
# 39 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_Maid_Text_0
# 40 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	release
	end


Vikkelson_MansionB1F_Cook::
# 45 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	lock
# 46 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	faceplayer
# 47 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_Cook_Text_0
# 48 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	release
	end


Vikkelson_MansionB1F_PlaneTicket::
# 53 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	lock
# 54 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	compare VAR_MAIN_STORY, 48
	goto_if_gt Vikkelson_MansionB1F_PlaneTicket_1
# 60 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_PlaneTicket_Text_0
# 61 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	closemessage
# 62 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	clearflag FLAG_SAM_VIKKELSON
# 63 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	addobject 4
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	applymovement 4, Vikkelson_MansionB1F_PlaneTicket_Movement_0
# 65 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_MansionB1F_PlaneTicket_Movement_1
# 67 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	namebox Vikkelson_MansionB1F_PlaneTicket_Text_1
# 69 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_PlaneTicket_Text_2
# 70 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	hidenamebox
# 71 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	closemessage
# 72 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay 20
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_MansionB1F_PlaneTicket_Movement_2
# 74 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay 20
# 76 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	applymovement 4, Vikkelson_MansionB1F_PlaneTicket_Movement_3
# 77 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay 40
# 80 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	namebox Vikkelson_MansionB1F_PlaneTicket_Text_1
# 81 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_PlaneTicket_Text_3
# 82 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	hidenamebox
# 83 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	closemessage
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	applymovement 4, Vikkelson_MansionB1F_PlaneTicket_Movement_4
# 85 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	removeobject 4
# 87 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	setflag FLAG_SAM_VIKKELSON
# 88 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	setvar VAR_MAIN_STORY, 49
# 89 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	release
	end

Vikkelson_MansionB1F_PlaneTicket_1:
# 55 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	msgbox Vikkelson_MansionB1F_PlaneTicket_Text_0
# 56 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	release
	end


# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_PlaneTicket_Movement_0:
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_down
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_right
# 64 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	face_up
	step_end

# 66 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_PlaneTicket_Movement_1:
# 66 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	face_down
	step_end

# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_PlaneTicket_Movement_2:
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	face_up
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay_16
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay_16
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	delay_16
# 73 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	face_down
	step_end

# 76 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_PlaneTicket_Movement_3:
# 76 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
Vikkelson_MansionB1F_PlaneTicket_Movement_4:
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_left
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
# 84 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	walk_fast_up
	step_end

Vikkelson_MansionB1F_Moria_Text_0:
# 8 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "It does not matter that you defeated\n"
	.string "me, you're not allowed here! Leave this\l"
	.string "instant!$"

Vikkelson_MansionB1F_Claudia_Text_0:
# 23 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "Miss Vikkie left Thura, and you'll never\n"
	.string "find her!$"

Vikkelson_MansionB1F_Maid_Text_0:
# 39 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "I'd love to fight you, but I'm on a break.\n"
	.string "And Vikkie still hasn't paid me so I\l"
	.string "don't actually care.$"

Vikkelson_MansionB1F_Cook_Text_0:
# 47 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "Please, I haven't slept in actual days. I\n"
	.string "have no strength left to fight you.$"

Vikkelson_MansionB1F_PlaneTicket_Text_0:
# 55 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "(This looks like a ticket to Mistralton\n"
	.string "City, in Unova.)$"

Vikkelson_MansionB1F_PlaneTicket_Text_1:
# 68 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "Sam$"

Vikkelson_MansionB1F_PlaneTicket_Text_2:
# 69 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "{PLAYER}! Did you find something\n"
	.string "interesting?$"

Vikkelson_MansionB1F_PlaneTicket_Text_3:
# 81 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "Neat! We were right, she's actually left\n"
	.string "Thura! To the airport, now! We're going\l"
	.string "to Unova, baby.$"

Moria1::
# 13 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "What are you doing here? You're not\n"
	.string "allowed here!$"

Moria2::
# 17 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "No! Leave!$"

Claudia1::
# 28 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "You'll never find Miss Vikkie!$"

Claudia2::
# 32 "data/maps/Vikkelson_MansionB1F/scripts.pory"
	.string "It doesn't matter, I won't tell you a\n"
	.string "thing!$"
