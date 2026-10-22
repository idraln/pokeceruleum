# 1 "data/maps/Bammobo/scripts.pory"

# 2 "data/maps/Bammobo/scripts.pory"
Bammobo_MapScripts::
# 3 "data/maps/Bammobo/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Bammobo_OnTransition
# 4 "data/maps/Bammobo/scripts.pory"
	.byte 0

Bammobo_OnTransition::
# 8 "data/maps/Bammobo/scripts.pory"
	setflag FLAG_VISITED_BAMMOBO
	return


Bammobo_GruntF::
# 12 "data/maps/Bammobo/scripts.pory"
	lock
# 13 "data/maps/Bammobo/scripts.pory"
	faceplayer
# 14 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_GruntF_Text_0
# 15 "data/maps/Bammobo/scripts.pory"
	release
	end


Bammobo_GruntM::
# 20 "data/maps/Bammobo/scripts.pory"
	lock
# 21 "data/maps/Bammobo/scripts.pory"
	faceplayer
# 22 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_GruntM_Text_0
# 23 "data/maps/Bammobo/scripts.pory"
	release
	end


Bammobo_Hermit::
# 28 "data/maps/Bammobo/scripts.pory"
	lock
# 29 "data/maps/Bammobo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Bammobo_Hermit_Movement_0
# 30 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 31 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Hermit_Movement_1
# 32 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 33 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_0
# 34 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_1
# 35 "data/maps/Bammobo/scripts.pory"
	closemessage
# 36 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 37 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_2
# 38 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 39 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 40 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_3
# 41 "data/maps/Bammobo/scripts.pory"
	closemessage
# 42 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 43 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Hermit_Movement_1
# 44 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 45 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_0
# 46 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_4
# 47 "data/maps/Bammobo/scripts.pory"
	closemessage
# 48 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 49 "data/maps/Bammobo/scripts.pory"
	delay 40
# 50 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_2
# 51 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 52 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 53 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_5
# 54 "data/maps/Bammobo/scripts.pory"
	closemessage
# 55 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 56 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_3
# 57 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 58 "data/maps/Bammobo/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Hermit_Movement_4
# 60 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 61 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Hermit_Movement_5
# 62 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_6
# 63 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 64 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 65 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_6
# 66 "data/maps/Bammobo/scripts.pory"
	closemessage
# 67 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 68 "data/maps/Bammobo/scripts.pory"
	turnobject 2, DIR_NORTH
# 69 "data/maps/Bammobo/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_7
# 71 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 72 "data/maps/Bammobo/scripts.pory"
	delay 40
# 73 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 74 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Hermit_Text_7
# 75 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 76 "data/maps/Bammobo/scripts.pory"
	goto Bammobo_BeforeFight
	return


Bammobo_BeforeFight::
# 80 "data/maps/Bammobo/scripts.pory"
	special SavePlayerParty
# 81 "data/maps/Bammobo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Bammobo/scripts.pory"
	special ChooseHalfPartyForBattle
# 83 "data/maps/Bammobo/scripts.pory"
	waitstate
# 84 "data/maps/Bammobo/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Bammobo_Fight
# 85 "data/maps/Bammobo/scripts.pory"
	special LoadPlayerParty
# 86 "data/maps/Bammobo/scripts.pory"
	goto Bammobo_BeforeFight2
	return


Bammobo_BeforeFight2::
# 90 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 91 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_BeforeFight2_Text_0
# 92 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 93 "data/maps/Bammobo/scripts.pory"
	special SavePlayerParty
# 94 "data/maps/Bammobo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/Bammobo/scripts.pory"
	special ChooseHalfPartyForBattle
# 96 "data/maps/Bammobo/scripts.pory"
	waitstate
# 97 "data/maps/Bammobo/scripts.pory"
	goto_if_ne VAR_RESULT, 0, Bammobo_Fight
# 98 "data/maps/Bammobo/scripts.pory"
	special LoadPlayerParty
# 99 "data/maps/Bammobo/scripts.pory"
	goto Bammobo_BeforeFight2
	return


Bammobo_Fight::
# 103 "data/maps/Bammobo/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 104 "data/maps/Bammobo/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Bammobo_Fight_2
# 111 "data/maps/Bammobo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Bammobo_Fight_Movement_1
# 112 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 113 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_0
# 114 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
Bammobo_Fight_1:
# 116 "data/maps/Bammobo/scripts.pory"
	multi_2_vs_1 TRAINER_HERMIT, Hermit1, PARTNER_BRUCE
# 117 "data/maps/Bammobo/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/Bammobo/scripts.pory"
	case 1, Bammobo_Fight_7
# 166 "data/maps/Bammobo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/Bammobo/scripts.pory"
	special SetCB2WhiteOut
# 168 "data/maps/Bammobo/scripts.pory"
	waitstate
	return

Bammobo_Fight_2:
# 105 "data/maps/Bammobo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Bammobo_Fight_Movement_0
# 106 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 107 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_0
# 108 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
	goto Bammobo_Fight_1

Bammobo_Fight_7:
# 119 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Fight_Movement_2
# 120 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 121 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_0
# 122 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Fight_Text_0
# 123 "data/maps/Bammobo/scripts.pory"
	closemessage
# 124 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 125 "data/maps/Bammobo/scripts.pory"
	delay 40
# 126 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Fight_Movement_3
# 127 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 128 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_0
# 129 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Fight_Text_1
# 130 "data/maps/Bammobo/scripts.pory"
	closemessage
# 131 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 132 "data/maps/Bammobo/scripts.pory"
	applymovement 1, Bammobo_Fight_Movement_4
# 133 "data/maps/Bammobo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Bammobo_Fight_Movement_5
# 134 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 135 "data/maps/Bammobo/scripts.pory"
	delay 40
# 136 "data/maps/Bammobo/scripts.pory"
	removeobject 1
# 137 "data/maps/Bammobo/scripts.pory"
	delay 40
# 138 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Fight_Movement_6
# 139 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 140 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 141 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Fight_Text_2
# 142 "data/maps/Bammobo/scripts.pory"
	closemessage
# 143 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 144 "data/maps/Bammobo/scripts.pory"
	delay 20
# 145 "data/maps/Bammobo/scripts.pory"
	turnobject 2, DIR_NORTH
# 146 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 147 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Fight_Text_3
# 148 "data/maps/Bammobo/scripts.pory"
	closemessage
# 149 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 150 "data/maps/Bammobo/scripts.pory"
	delay 20
# 151 "data/maps/Bammobo/scripts.pory"
	turnobject 2, DIR_WEST
# 152 "data/maps/Bammobo/scripts.pory"
	namebox Bammobo_Hermit_Text_2
# 153 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Fight_Text_4
# 154 "data/maps/Bammobo/scripts.pory"
	closemessage
# 155 "data/maps/Bammobo/scripts.pory"
	hidenamebox
# 156 "data/maps/Bammobo/scripts.pory"
	applymovement 2, Bammobo_Hermit_Movement_3
# 157 "data/maps/Bammobo/scripts.pory"
	waitmovement 0
# 158 "data/maps/Bammobo/scripts.pory"
	removeobject 2
# 159 "data/maps/Bammobo/scripts.pory"
	playse SE_EXIT
# 160 "data/maps/Bammobo/scripts.pory"
	setflag FLAG_HERMIT_LEAVING
# 161 "data/maps/Bammobo/scripts.pory"
	clearflag FLAG_HERMIT_BUSH
# 162 "data/maps/Bammobo/scripts.pory"
	setvar VAR_MAIN_STORY, 29
# 163 "data/maps/Bammobo/scripts.pory"
	release
	end


Bammobo_Sign::
# 176 "data/maps/Bammobo/scripts.pory"
	lockall
# 177 "data/maps/Bammobo/scripts.pory"
	msgbox Bammobo_Sign_Text_0
# 178 "data/maps/Bammobo/scripts.pory"
	releaseall
	end


# 29 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_0:
# 29 "data/maps/Bammobo/scripts.pory"
	face_down
	step_end

# 31 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_1:
# 31 "data/maps/Bammobo/scripts.pory"
	walk_in_place_right
	step_end

# 37 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_2:
# 37 "data/maps/Bammobo/scripts.pory"
	walk_in_place_left
	step_end

# 56 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_3:
# 56 "data/maps/Bammobo/scripts.pory"
	walk_down
	step_end

# 59 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_4:
# 59 "data/maps/Bammobo/scripts.pory"
	emote_exclamation_mark
# 59 "data/maps/Bammobo/scripts.pory"
	jump_in_place_down
# 59 "data/maps/Bammobo/scripts.pory"
	delay_16
# 59 "data/maps/Bammobo/scripts.pory"
	delay_16
# 59 "data/maps/Bammobo/scripts.pory"
	walk_fast_down
# 59 "data/maps/Bammobo/scripts.pory"
	walk_fast_down
# 59 "data/maps/Bammobo/scripts.pory"
	walk_fast_right
	step_end

# 61 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_5:
# 61 "data/maps/Bammobo/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_6:
# 62 "data/maps/Bammobo/scripts.pory"
	walk_up
# 62 "data/maps/Bammobo/scripts.pory"
	face_down
	step_end

# 70 "data/maps/Bammobo/scripts.pory"
Bammobo_Hermit_Movement_7:
# 70 "data/maps/Bammobo/scripts.pory"
	emote_exclamation_mark
	step_end

# 105 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_0:
# 105 "data/maps/Bammobo/scripts.pory"
	walk_down
# 105 "data/maps/Bammobo/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_1:
# 111 "data/maps/Bammobo/scripts.pory"
	walk_down
# 111 "data/maps/Bammobo/scripts.pory"
	walk_left
# 111 "data/maps/Bammobo/scripts.pory"
	walk_down
	step_end

# 119 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_2:
# 119 "data/maps/Bammobo/scripts.pory"
	face_left
# 119 "data/maps/Bammobo/scripts.pory"
	delay_16
# 119 "data/maps/Bammobo/scripts.pory"
	face_up
# 119 "data/maps/Bammobo/scripts.pory"
	delay_16
# 119 "data/maps/Bammobo/scripts.pory"
	face_left
# 119 "data/maps/Bammobo/scripts.pory"
	delay_16
# 119 "data/maps/Bammobo/scripts.pory"
	face_up
	step_end

# 126 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_3:
# 126 "data/maps/Bammobo/scripts.pory"
	walk_fast_left
# 126 "data/maps/Bammobo/scripts.pory"
	face_up
	step_end

# 132 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_4:
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_up
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_right
# 132 "data/maps/Bammobo/scripts.pory"
	walk_fast_right
# 132 "data/maps/Bammobo/scripts.pory"
	face_up
	step_end

# 133 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_5:
# 133 "data/maps/Bammobo/scripts.pory"
	walk_left
# 133 "data/maps/Bammobo/scripts.pory"
	face_right
	step_end

# 138 "data/maps/Bammobo/scripts.pory"
Bammobo_Fight_Movement_6:
# 138 "data/maps/Bammobo/scripts.pory"
	walk_left
	step_end

Bammobo_GruntF_Text_0:
# 14 "data/maps/Bammobo/scripts.pory"
	.string "Haha, get ready, everyone! Our plan to\n"
	.string "rule over all of Thura is finally taking\l"
	.string "its shape!...\p"
	.string "But first, we need to go back to\n"
	.string "Virimante. That old stinky dude is\l"
	.string "blocking the path.$"

Bammobo_GruntM_Text_0:
# 22 "data/maps/Bammobo/scripts.pory"
	.string "There's this guy that lives in that bush\n"
	.string "and stinks like death, he refrained me\l"
	.string "from entering the Bois. I'm too scared\l"
	.string "to try again, I'm afraid he'll take me in\l"
	.string "his bush and do weird things to me.$"

Bammobo_Hermit_Text_0:
# 33 "data/maps/Bammobo/scripts.pory"
	.string "Hermit$"

Bammobo_Hermit_Text_1:
# 34 "data/maps/Bammobo/scripts.pory"
	.string "No, no, and NO! You will not go inside\n"
	.string "that forest! Those pink bastards have\l"
	.string "already done too much harm to the\l"
	.string "sacred forest!$"

Bammobo_Hermit_Text_2:
# 39 "data/maps/Bammobo/scripts.pory"
	.string "Bruce$"

Bammobo_Hermit_Text_3:
# 40 "data/maps/Bammobo/scripts.pory"
	.string "Come on, old man. That's ridiculous!\n"
	.string "We're talking about the fate of Thura in\l"
	.string "its whole! We're going to get rid of\l"
	.string "those vermins, I promise! You have to\l"
	.string "let me in!$"

Bammobo_Hermit_Text_4:
# 46 "data/maps/Bammobo/scripts.pory"
	.string "Over my dead body!$"

Bammobo_Hermit_Text_5:
# 53 "data/maps/Bammobo/scripts.pory"
	.string "Sorry, but I really don't have the time\n"
	.string "for that pettiness. I'm going in.$"

Bammobo_Hermit_Text_6:
# 65 "data/maps/Bammobo/scripts.pory"
	.string "Did you just push me? Man, I swear, I-$"

Bammobo_Hermit_Text_7:
# 74 "data/maps/Bammobo/scripts.pory"
	.string "{PLAYER}! You might just be the\n"
	.string "person I need! Let's bring reason back\l"
	.string "into that man's mind! Let's join forces!$"

Bammobo_BeforeFight2_Text_0:
# 91 "data/maps/Bammobo/scripts.pory"
	.string "Come on, {PLAYER}, choose! Each\n"
	.string "second lost is an hour gained for the\l"
	.string "Fandango Band!$"

Bammobo_Fight_Text_0:
# 122 "data/maps/Bammobo/scripts.pory"
	.string "2 against 1... How brave you two are! I'll\n"
	.string "curse you! CURSE, YOU HEAR?$"

Bammobo_Fight_Text_1:
# 129 "data/maps/Bammobo/scripts.pory"
	.string "MOVE OUT THE WAY!$"

Bammobo_Fight_Text_2:
# 141 "data/maps/Bammobo/scripts.pory"
	.string "{PLAYER}! Are you okay?$"

Bammobo_Fight_Text_3:
# 147 "data/maps/Bammobo/scripts.pory"
	.string "What was that all about? Speaking\n"
	.string "about a sacred forest? Nonsense!$"

Bammobo_Fight_Text_4:
# 153 "data/maps/Bammobo/scripts.pory"
	.string "Anyway. Now that we got rid of him, we\n"
	.string "can go to Virimante. Quick! We lost\l"
	.string "enough time as is!$"

Bammobo_Sign_Text_0:
# 177 "data/maps/Bammobo/scripts.pory"
	.string "Bammobo\n"
	.string "The dampest place in Thura.$"

Hermit1::
# 171 "data/maps/Bammobo/scripts.pory"
	.string "May Arceus curse you both!!$"
