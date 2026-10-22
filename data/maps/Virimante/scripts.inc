# 1 "data/maps/Virimante/scripts.pory"

# 2 "data/maps/Virimante/scripts.pory"
Virimante_MapScripts::
# 3 "data/maps/Virimante/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Virimante_OnTransition
# 4 "data/maps/Virimante/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Virimante_OnFrame
# 5 "data/maps/Virimante/scripts.pory"
	.byte 0
# 6 "data/maps/Virimante/scripts.pory"

# 7 "data/maps/Virimante/scripts.pory"
Virimante_OnFrame:
# 8 "data/maps/Virimante/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 31, Virimante_KAM
# 9 "data/maps/Virimante/scripts.pory"
    .2byte 0

Virimante_KAM::
# 12 "data/maps/Virimante/scripts.pory"
	lockall
# 13 "data/maps/Virimante/scripts.pory"
	delay 40
# 14 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 15 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_1
# 16 "data/maps/Virimante/scripts.pory"
	closemessage
# 17 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 18 "data/maps/Virimante/scripts.pory"
	delay 20
# 19 "data/maps/Virimante/scripts.pory"
	playse SE_PIN
# 20 "data/maps/Virimante/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_KAM_Movement_0
# 21 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 22 "data/maps/Virimante/scripts.pory"
	delay 40
# 23 "data/maps/Virimante/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 24 "data/maps/Virimante/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Virimante_KAM_2
# 29 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_2
# 30 "data/maps/Virimante/scripts.pory"
	waitmovement 0
Virimante_KAM_1:
# 32 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 33 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_2
# 34 "data/maps/Virimante/scripts.pory"
	closemessage
# 35 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 36 "data/maps/Virimante/scripts.pory"
	delay 20
# 37 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 38 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_3
# 39 "data/maps/Virimante/scripts.pory"
	closemessage
# 40 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 41 "data/maps/Virimante/scripts.pory"
	delay 20
# 42 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 43 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_4
# 44 "data/maps/Virimante/scripts.pory"
	closemessage
# 45 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 46 "data/maps/Virimante/scripts.pory"
	delay 20
# 47 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_3
# 48 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 49 "data/maps/Virimante/scripts.pory"
	delay 20
# 50 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 51 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_5
# 52 "data/maps/Virimante/scripts.pory"
	closemessage
# 53 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 54 "data/maps/Virimante/scripts.pory"
	delay 20
# 55 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_4
# 56 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 57 "data/maps/Virimante/scripts.pory"
	delay 20
# 58 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 59 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_6
# 60 "data/maps/Virimante/scripts.pory"
	closemessage
# 61 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 62 "data/maps/Virimante/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Virimante_KAM_6
# 77 "data/maps/Virimante/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_KAM_Movement_7
# 78 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_8
# 79 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 80 "data/maps/Virimante/scripts.pory"
	removeobject 4
# 81 "data/maps/Virimante/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/Virimante/scripts.pory"
	setflag FLAG_KAM_VIRIMANTE
# 83 "data/maps/Virimante/scripts.pory"
	delay 80
# 84 "data/maps/Virimante/scripts.pory"
	addobject 4
# 85 "data/maps/Virimante/scripts.pory"
	setobjectxy 4, 8, 17
# 86 "data/maps/Virimante/scripts.pory"
	clearflag FLAG_KAM_VIRIMANTE
# 87 "data/maps/Virimante/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_6
# 89 "data/maps/Virimante/scripts.pory"
	waitmovement 0
Virimante_KAM_5:
# 91 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 92 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_7
# 93 "data/maps/Virimante/scripts.pory"
	closemessage
# 94 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 95 "data/maps/Virimante/scripts.pory"
	delay 20
# 96 "data/maps/Virimante/scripts.pory"
	setflag FLAG_BADGE07_GET
# 97 "data/maps/Virimante/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 98 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_8
# 99 "data/maps/Virimante/scripts.pory"
	waitfanfare
# 100 "data/maps/Virimante/scripts.pory"
	closemessage
# 101 "data/maps/Virimante/scripts.pory"
	delay 20
# 102 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 103 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_9
# 104 "data/maps/Virimante/scripts.pory"
	closemessage
# 105 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 106 "data/maps/Virimante/scripts.pory"
	delay 20
# 107 "data/maps/Virimante/scripts.pory"
	namebox Virimante_KAM_Text_0
# 108 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_KAM_Text_10
# 109 "data/maps/Virimante/scripts.pory"
	closemessage
# 110 "data/maps/Virimante/scripts.pory"
	hidenamebox
# 111 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_9
# 112 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 113 "data/maps/Virimante/scripts.pory"
	removeobject 4
# 114 "data/maps/Virimante/scripts.pory"
	setflag FLAG_VIKKIE_VIRIMANTE
# 115 "data/maps/Virimante/scripts.pory"
	setflag FLAG_KAM_VIRIMANTE
# 116 "data/maps/Virimante/scripts.pory"
	setflag FLAG_DIVERS_TRAINERS
# 117 "data/maps/Virimante/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 118 "data/maps/Virimante/scripts.pory"
	setvar VAR_MAIN_STORY, 32
# 119 "data/maps/Virimante/scripts.pory"
	releaseall
	end

Virimante_KAM_2:
# 25 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_1
# 26 "data/maps/Virimante/scripts.pory"
	waitmovement 0
	goto Virimante_KAM_1

Virimante_KAM_6:
# 63 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_5
# 64 "data/maps/Virimante/scripts.pory"
	waitmovement 0
# 65 "data/maps/Virimante/scripts.pory"
	removeobject 4
# 66 "data/maps/Virimante/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/Virimante/scripts.pory"
	setflag FLAG_KAM_VIRIMANTE
# 68 "data/maps/Virimante/scripts.pory"
	delay 80
# 69 "data/maps/Virimante/scripts.pory"
	addobject 4
# 70 "data/maps/Virimante/scripts.pory"
	setobjectxy 4, 8, 17
# 71 "data/maps/Virimante/scripts.pory"
	clearflag FLAG_KAM_VIRIMANTE
# 72 "data/maps/Virimante/scripts.pory"
	playse SE_EXIT
# 73 "data/maps/Virimante/scripts.pory"
	applymovement 4, Virimante_KAM_Movement_6
# 74 "data/maps/Virimante/scripts.pory"
	waitmovement 0
	goto Virimante_KAM_5


Virimante_OnTransition::
# 124 "data/maps/Virimante/scripts.pory"
	setflag FLAG_VISITED_VIRIMANTE
	return


Virimante_GruntF::
# 128 "data/maps/Virimante/scripts.pory"
	lock
# 129 "data/maps/Virimante/scripts.pory"
	faceplayer
# 130 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_GruntF_Text_0
# 131 "data/maps/Virimante/scripts.pory"
	turnobject 3, DIR_NORTH
# 132 "data/maps/Virimante/scripts.pory"
	release
	end


Virimante_GruntM::
# 137 "data/maps/Virimante/scripts.pory"
	lock
# 138 "data/maps/Virimante/scripts.pory"
	faceplayer
# 139 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_GruntM_Text_0
# 140 "data/maps/Virimante/scripts.pory"
	release
	end


Virimante_Admin::
# 145 "data/maps/Virimante/scripts.pory"
	lock
# 146 "data/maps/Virimante/scripts.pory"
	faceplayer
# 147 "data/maps/Virimante/scripts.pory"
	msgbox Virimante_Admin_Text_0
# 148 "data/maps/Virimante/scripts.pory"
	release
	end


# 20 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_0:
# 20 "data/maps/Virimante/scripts.pory"
	face_right
# 20 "data/maps/Virimante/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_1:
# 25 "data/maps/Virimante/scripts.pory"
	walk_left
# 25 "data/maps/Virimante/scripts.pory"
	walk_left
# 25 "data/maps/Virimante/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_2:
# 29 "data/maps/Virimante/scripts.pory"
	walk_left
# 29 "data/maps/Virimante/scripts.pory"
	walk_left
	step_end

# 47 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_3:
# 47 "data/maps/Virimante/scripts.pory"
	face_down
	step_end

# 55 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_4:
# 55 "data/maps/Virimante/scripts.pory"
	face_left
	step_end

# 63 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_5:
# 63 "data/maps/Virimante/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_6:
# 73 "data/maps/Virimante/scripts.pory"
	walk_down
# 73 "data/maps/Virimante/scripts.pory"
	face_left
	step_end

# 77 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_7:
# 77 "data/maps/Virimante/scripts.pory"
	walk_left
# 77 "data/maps/Virimante/scripts.pory"
	face_right
	step_end

# 78 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_8:
# 78 "data/maps/Virimante/scripts.pory"
	walk_left
# 78 "data/maps/Virimante/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/Virimante/scripts.pory"
Virimante_KAM_Movement_9:
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_up
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
# 111 "data/maps/Virimante/scripts.pory"
	walk_right
	step_end

Virimante_KAM_Text_0:
# 14 "data/maps/Virimante/scripts.pory"
	.string "K.A.M.$"

Virimante_KAM_Text_1:
# 15 "data/maps/Virimante/scripts.pory"
	.string "...Hey.$"

Virimante_KAM_Text_2:
# 33 "data/maps/Virimante/scripts.pory"
	.string "I know, I just told you I was leaving,\n"
	.string "but I couldn't help myself to\l"
	.string "reconsider. I need to make amends with\l"
	.string "all the chaos we provoked in the\l"
	.string "region... It was fun, but I kinda feel\l"
	.string "guilty. And I mostly don't want to get\l"
	.string "caught leaving the region and spend\l"
	.string "the rest of my life in prison.$"

Virimante_KAM_Text_3:
# 38 "data/maps/Virimante/scripts.pory"
	.string "So, yeah, that means I'll help you, I\n"
	.string "guess. I'll give it a try, anyway. So...\l"
	.string "What next?$"

Virimante_KAM_Text_4:
# 43 "data/maps/Virimante/scripts.pory"
	.string "Now that I think about it, there was\n"
	.string "something strange that happened to me\l"
	.string "right after what happened at the\l"
	.string "League...$"

Virimante_KAM_Text_5:
# 51 "data/maps/Virimante/scripts.pory"
	.string "There was this woman, Vikkie, I think...\n"
	.string "She called me and asked me if I was\l"
	.string "interested in a top secret project. It\l"
	.string "had something to do with sapphires, I\l"
	.string "reckon? She didn't seem worried or\l"
	.string "troubled with what happened at the\l"
	.string "League?$"

Virimante_KAM_Text_6:
# 59 "data/maps/Virimante/scripts.pory"
	.string "...There are sapphires in the Ironair?\n"
	.string "Hah, so the explosion the old man spoke\l"
	.string "about earlier, that must've been them.\l"
	.string "What's his name? Bruce? I need to speak\l"
	.string "to him. I'll go to Frux. But before that,\l"
	.string "wait here.$"

Virimante_KAM_Text_7:
# 92 "data/maps/Virimante/scripts.pory"
	.string "You know this was an old gym, right?\n"
	.string "Well, I've always wanted to be a Gym\l"
	.string "leader back in Hoenn, but I couldn't, I\l"
	.string "wasn't strong enough. Visibly, I'm still\l"
	.string "not strong enough, since you kicked my\l"
	.string "ass! So, here is a token of your victory\l"
	.string "earlier. You deserve it, and it makes me\l"
	.string "feel like a genuine Gym leader.$"

Virimante_KAM_Text_8:
# 98 "data/maps/Virimante/scripts.pory"
	.string "You just received the Frozen Emblem.$"

Virimante_KAM_Text_9:
# 103 "data/maps/Virimante/scripts.pory"
	.string "I also think this Emblem gives you the\n"
	.string "possibility to dive? There are a lot of\l"
	.string "deep waters in Hoenn, but I've always\l"
	.string "been scared shitless of depths, hah.$"

Virimante_KAM_Text_10:
# 108 "data/maps/Virimante/scripts.pory"
	.string "Ok, time for me to go see Bruce. I hope\n"
	.string "he'll forgive me, so that we can guard\l"
	.string "the Ironair together. Take care!$"

Virimante_GruntF_Text_0:
# 130 "data/maps/Virimante/scripts.pory"
	.string "This is unacceptable! Just because\n"
	.string "we're a bunch of outlaws, does that\l"
	.string "mean we have to soil everything? And\l"
	.string "I'm the one cleaning everything up.$"

Virimante_GruntM_Text_0:
# 139 "data/maps/Virimante/scripts.pory"
	.string "This town used to be a safe haven for\n"
	.string "fishermen. But since every fish in the\l"
	.string "ocean decided to go on a vacation\l"
	.string "somewhere else, every living soul left\l"
	.string "for places where they could fish again.\l"
	.string "It's actually sad when you think about\l"
	.string "it...$"

Virimante_Admin_Text_0:
# 147 "data/maps/Virimante/scripts.pory"
	.string "I'm on smoko, so leave me alone.$"
