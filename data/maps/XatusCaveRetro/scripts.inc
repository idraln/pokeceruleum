# 1 "data/maps/XatusCaveRetro/scripts.pory"

# 2 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_MapScripts::
# 3 "data/maps/XatusCaveRetro/scripts.pory"
	.byte 0

XatusCaveRetro_Reveal::
# 7 "data/maps/XatusCaveRetro/scripts.pory"
	lock
# 8 "data/maps/XatusCaveRetro/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/XatusCaveRetro/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq XatusCaveRetro_Reveal_2
# 13 "data/maps/XatusCaveRetro/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq XatusCaveRetro_Reveal_3
# 17 "data/maps/XatusCaveRetro/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq XatusCaveRetro_Reveal_4
XatusCaveRetro_Reveal_1:
# 21 "data/maps/XatusCaveRetro/scripts.pory"
	delay 40
# 22 "data/maps/XatusCaveRetro/scripts.pory"
	turnobject 1, DIR_WEST
# 23 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_0
# 24 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_1
# 25 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 26 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 27 "data/maps/XatusCaveRetro/scripts.pory"
	turnobject 1, DIR_NORTH
# 28 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 29 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_0
# 30 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_2
# 31 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 32 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 33 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 34 "data/maps/XatusCaveRetro/scripts.pory"
	turnobject 2, DIR_EAST
# 35 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 36 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_3
# 37 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_4
# 38 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 39 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 40 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 41 "data/maps/XatusCaveRetro/scripts.pory"
	turnobject 2, DIR_NORTH
# 42 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 43 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_3
# 44 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_5
# 45 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 46 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 47 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 48 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement 2, XatusCaveRetro_Reveal_Movement_3
# 49 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement 0
# 50 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusCaveRetro_Reveal_Movement_4
# 51 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement 0
# 52 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_3
# 53 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_6
# 54 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 55 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 56 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 57 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement 2, XatusCaveRetro_Reveal_Movement_5
# 58 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement 0
# 59 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 60 "data/maps/XatusCaveRetro/scripts.pory"
	namebox XatusCaveRetro_Reveal_Text_3
# 61 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_7
# 62 "data/maps/XatusCaveRetro/scripts.pory"
	closemessage
# 63 "data/maps/XatusCaveRetro/scripts.pory"
	hidenamebox
# 64 "data/maps/XatusCaveRetro/scripts.pory"
	delay 20
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement 2, XatusCaveRetro_Reveal_Movement_6
# 66 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement 0
# 67 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusCaveRetro_Reveal_Movement_7
# 68 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement 0
# 69 "data/maps/XatusCaveRetro/scripts.pory"
	delay 40
# 70 "data/maps/XatusCaveRetro/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 71 "data/maps/XatusCaveRetro/scripts.pory"
	delay 40
# 72 "data/maps/XatusCaveRetro/scripts.pory"
	clearflag FLAG_RETRO_INIT
# 73 "data/maps/XatusCaveRetro/scripts.pory"
	msgbox XatusCaveRetro_Reveal_Text_8
# 74 "data/maps/XatusCaveRetro/scripts.pory"
	special RestorePlayerState
# 75 "data/maps/XatusCaveRetro/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 76 "data/maps/XatusCaveRetro/scripts.pory"
	setflag FLAG_DAVE_GLORRAY
# 77 "data/maps/XatusCaveRetro/scripts.pory"
	setflag FLAG_SYS_OPTIONS_DISABLE
# 78 "data/maps/XatusCaveRetro/scripts.pory"
	setflag FLAG_SYS_DISABLE_SAVE
# 79 "data/maps/XatusCaveRetro/scripts.pory"
	setflag FLAG_SYS_PHONE_GET
# 80 "data/maps/XatusCaveRetro/scripts.pory"
	warpsilent MAP_XATUS_NEST, 23, 50
# 81 "data/maps/XatusCaveRetro/scripts.pory"
	release
	end

XatusCaveRetro_Reveal_2:
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusCaveRetro_Reveal_Movement_0
# 11 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement
	goto XatusCaveRetro_Reveal_1

XatusCaveRetro_Reveal_3:
# 14 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusCaveRetro_Reveal_Movement_1
# 15 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement
	goto XatusCaveRetro_Reveal_1

XatusCaveRetro_Reveal_4:
# 18 "data/maps/XatusCaveRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusCaveRetro_Reveal_Movement_2
# 19 "data/maps/XatusCaveRetro/scripts.pory"
	waitmovement
	goto XatusCaveRetro_Reveal_1


# 10 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_0:
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	walk_right
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	walk_right
# 10 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
	step_end

# 14 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_1:
# 14 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 14 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 14 "data/maps/XatusCaveRetro/scripts.pory"
	walk_right
# 14 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
	step_end

# 18 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_2:
# 18 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 18 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
# 18 "data/maps/XatusCaveRetro/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_3:
# 48 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
# 48 "data/maps/XatusCaveRetro/scripts.pory"
	walk_right
# 48 "data/maps/XatusCaveRetro/scripts.pory"
	walk_right
# 48 "data/maps/XatusCaveRetro/scripts.pory"
	face_up
	step_end

# 50 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_4:
# 50 "data/maps/XatusCaveRetro/scripts.pory"
	face_down
	step_end

# 57 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_5:
# 57 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_6:
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
# 65 "data/maps/XatusCaveRetro/scripts.pory"
	walk_down
	step_end

# 67 "data/maps/XatusCaveRetro/scripts.pory"
XatusCaveRetro_Reveal_Movement_7:
# 67 "data/maps/XatusCaveRetro/scripts.pory"
	face_up
	step_end

XatusCaveRetro_Reveal_Text_0:
# 23 "data/maps/XatusCaveRetro/scripts.pory"
	.string "Guard$"

XatusCaveRetro_Reveal_Text_1:
# 24 "data/maps/XatusCaveRetro/scripts.pory"
	.string "Aisha... I don't understand! After Ulrich\n"
	.string "left, the painting was completely\l"
	.string "destroyed... I hurried to let you know\l"
	.string "what happened, but when I came back...$"

XatusCaveRetro_Reveal_Text_2:
# 30 "data/maps/XatusCaveRetro/scripts.pory"
	.string "...The painting was back to its original\n"
	.string "state. As pristine as if it was just\l"
	.string "drawn.$"

XatusCaveRetro_Reveal_Text_3:
# 36 "data/maps/XatusCaveRetro/scripts.pory"
	.string "Grandma$"

XatusCaveRetro_Reveal_Text_4:
# 37 "data/maps/XatusCaveRetro/scripts.pory"
	.string "Now, you fully understand why I wanted\n"
	.string "you to keep the cave from everyone\l"
	.string "else. There is truly something mystical\l"
	.string "about this place, something that we will\l"
	.string "never grasp... And we must protect it.$"

XatusCaveRetro_Reveal_Text_5:
# 44 "data/maps/XatusCaveRetro/scripts.pory"
	.string "...But for now, I must return to my\n"
	.string "duties.$"

XatusCaveRetro_Reveal_Text_6:
# 53 "data/maps/XatusCaveRetro/scripts.pory"
	.string "{PLAYER}, you go and live your\n"
	.string "adventure, you fully deserve so. You\l"
	.string "will bring great pride to our family.$"

XatusCaveRetro_Reveal_Text_7:
# 61 "data/maps/XatusCaveRetro/scripts.pory"
	.string "As for your brother, don't worry about\n"
	.string "him. He'll behave. He always does... sort\l"
	.string "of.$"

XatusCaveRetro_Reveal_Text_8:
# 73 "data/maps/XatusCaveRetro/scripts.pory"
	.string "Lad! Wake up! You're free to go!$"
