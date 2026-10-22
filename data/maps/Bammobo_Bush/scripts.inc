# 1 "data/maps/Bammobo_Bush/scripts.pory"

# 2 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_MapScripts::
# 3 "data/maps/Bammobo_Bush/scripts.pory"
	.byte 0

Bammobo_Bush_Hermit::
# 7 "data/maps/Bammobo_Bush/scripts.pory"
	lock
# 8 "data/maps/Bammobo_Bush/scripts.pory"
	goto_if_set FLAG_QUEST_HERMIT, Bammobo_Bush_Hermit_3
Bammobo_Bush_Hermit_1:
# 15 "data/maps/Bammobo_Bush/scripts.pory"
	goto_if_set FLAG_QUEST_HERMIT, Bammobo_Bush_Hermit_8
Bammobo_Bush_Hermit_7:
# 114 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 115 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_1
# 116 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 117 "data/maps/Bammobo_Bush/scripts.pory"
	startquest QUEST_HERMIT
# 118 "data/maps/Bammobo_Bush/scripts.pory"
	setflag FLAG_QUEST_HERMIT
# 119 "data/maps/Bammobo_Bush/scripts.pory"
	setvar VAR_QUEST_HERMIT, 1
# 120 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end

Bammobo_Bush_Hermit_2:
# 9 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 10 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_1
# 11 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 12 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end

Bammobo_Bush_Hermit_3:
# 8 "data/maps/Bammobo_Bush/scripts.pory"
	compare VAR_QUEST_HERMIT, 1
	goto_if_eq Bammobo_Bush_Hermit_2
	goto Bammobo_Bush_Hermit_1

Bammobo_Bush_Hermit_6:
# 16 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 17 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_2
# 18 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 19 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 20 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 21 "data/maps/Bammobo_Bush/scripts.pory"
	playse SE_PIN
# 22 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_0
# 23 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 24 "data/maps/Bammobo_Bush/scripts.pory"
	delay 40
# 25 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_1
# 26 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 27 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 28 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_3
# 29 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 30 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 31 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 32 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 33 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 34 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 35 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 36 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_5
# 37 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 38 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 39 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 40 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 41 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 42 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 43 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 44 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_6
# 45 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 46 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 47 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 48 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 49 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 50 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 51 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_2
# 52 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 53 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 54 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 55 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_7
# 56 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 57 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 58 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 59 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 60 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 61 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 62 "data/maps/Bammobo_Bush/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_3
# 64 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 65 "data/maps/Bammobo_Bush/scripts.pory"
	delay 40
# 66 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 67 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_8
# 68 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 69 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 70 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 71 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 72 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 73 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 74 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_2
# 75 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 76 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 77 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 78 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_9
# 79 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 80 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 81 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 82 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_4
# 83 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 84 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 85 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_1
# 86 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 87 "data/maps/Bammobo_Bush/scripts.pory"
	delay 20
# 88 "data/maps/Bammobo_Bush/scripts.pory"
	namebox Bammobo_Bush_Hermit_Text_0
# 89 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Hermit_Text_10
# 90 "data/maps/Bammobo_Bush/scripts.pory"
	closemessage
# 91 "data/maps/Bammobo_Bush/scripts.pory"
	hidenamebox
# 92 "data/maps/Bammobo_Bush/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 93 "data/maps/Bammobo_Bush/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Bammobo_Bush_Hermit_12
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_5
# 103 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 104 "data/maps/Bammobo_Bush/scripts.pory"
	removeobject 1
# 105 "data/maps/Bammobo_Bush/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/Bammobo_Bush/scripts.pory"
	setflag FLAG_HERMIT_BUSH
# 107 "data/maps/Bammobo_Bush/scripts.pory"
	clearflag FLAG_HERMIT_JANGALA
Bammobo_Bush_Hermit_11:
# 109 "data/maps/Bammobo_Bush/scripts.pory"
	setvar VAR_QUEST_HERMIT, 3
# 110 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end

Bammobo_Bush_Hermit_8:
# 15 "data/maps/Bammobo_Bush/scripts.pory"
	compare VAR_QUEST_HERMIT, 2
	goto_if_eq Bammobo_Bush_Hermit_6
	goto Bammobo_Bush_Hermit_7

Bammobo_Bush_Hermit_12:
# 94 "data/maps/Bammobo_Bush/scripts.pory"
	applymovement 1, Bammobo_Bush_Hermit_Movement_4
# 95 "data/maps/Bammobo_Bush/scripts.pory"
	waitmovement 0
# 96 "data/maps/Bammobo_Bush/scripts.pory"
	removeobject 1
# 97 "data/maps/Bammobo_Bush/scripts.pory"
	playse SE_EXIT
# 98 "data/maps/Bammobo_Bush/scripts.pory"
	setflag FLAG_HERMIT_BUSH
# 99 "data/maps/Bammobo_Bush/scripts.pory"
	clearflag FLAG_HERMIT_JANGALA
	goto Bammobo_Bush_Hermit_11


Bammobo_Bush_Journal1::
# 127 "data/maps/Bammobo_Bush/scripts.pory"
	lock
# 128 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Journal1_Text_0
# 129 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end


Bammobo_Bush_Journal2::
# 134 "data/maps/Bammobo_Bush/scripts.pory"
	lock
# 135 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Journal2_Text_0
# 136 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end


Bammobo_Bush_Journal3::
# 141 "data/maps/Bammobo_Bush/scripts.pory"
	lock
# 142 "data/maps/Bammobo_Bush/scripts.pory"
	msgbox Bammobo_Bush_Journal3_Text_0
# 143 "data/maps/Bammobo_Bush/scripts.pory"
	release
	end


# 22 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_0:
# 22 "data/maps/Bammobo_Bush/scripts.pory"
	emote_exclamation_mark
# 22 "data/maps/Bammobo_Bush/scripts.pory"
	jump_in_place_down
# 22 "data/maps/Bammobo_Bush/scripts.pory"
	jump_in_place_down
	step_end

# 25 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_1:
# 25 "data/maps/Bammobo_Bush/scripts.pory"
	face_player
	step_end

# 51 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_2:
# 51 "data/maps/Bammobo_Bush/scripts.pory"
	face_away_player
	step_end

# 63 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_3:
# 63 "data/maps/Bammobo_Bush/scripts.pory"
	emote_exclamation_mark
# 63 "data/maps/Bammobo_Bush/scripts.pory"
	jump_in_place_down
# 63 "data/maps/Bammobo_Bush/scripts.pory"
	jump_in_place_down
# 63 "data/maps/Bammobo_Bush/scripts.pory"
	face_player
	step_end

# 94 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_4:
# 94 "data/maps/Bammobo_Bush/scripts.pory"
	walk_down
# 94 "data/maps/Bammobo_Bush/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/Bammobo_Bush/scripts.pory"
Bammobo_Bush_Hermit_Movement_5:
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	walk_left
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	walk_down
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	walk_down
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	walk_right
# 102 "data/maps/Bammobo_Bush/scripts.pory"
	face_down
	step_end

Bammobo_Bush_Hermit_Text_0:
# 9 "data/maps/Bammobo_Bush/scripts.pory"
	.string "Hermit$"

Bammobo_Bush_Hermit_Text_1:
# 10 "data/maps/Bammobo_Bush/scripts.pory"
	.string "...Mmmh...\n...Hnngh...\l...AAAH!!...$"

Bammobo_Bush_Hermit_Text_2:
# 17 "data/maps/Bammobo_Bush/scripts.pory"
	.string "...Hnngh...$"

Bammobo_Bush_Hermit_Text_3:
# 28 "data/maps/Bammobo_Bush/scripts.pory"
	.string "WHAT DID YOU JUST SAY?$"

Bammobo_Bush_Hermit_Text_4:
# 32 "data/maps/Bammobo_Bush/scripts.pory"
	.string "...$"

Bammobo_Bush_Hermit_Text_5:
# 36 "data/maps/Bammobo_Bush/scripts.pory"
	.string "MY WIFE? HOW DO YOU KNOW ABOUT HER?$"

Bammobo_Bush_Hermit_Text_6:
# 44 "data/maps/Bammobo_Bush/scripts.pory"
	.string "She... wonders how I'm doing?$"

Bammobo_Bush_Hermit_Text_7:
# 55 "data/maps/Bammobo_Bush/scripts.pory"
	.string "This is none of her business. I'm doing\n"
	.string "very well. I've got all the modern\l"
	.string "comfort here.$"

Bammobo_Bush_Hermit_Text_8:
# 67 "data/maps/Bammobo_Bush/scripts.pory"
	.string "My kids!! They must all be grown up now!$"

Bammobo_Bush_Hermit_Text_9:
# 78 "data/maps/Bammobo_Bush/scripts.pory"
	.string "Ok. I'll go back to the city. But first,\n"
	.string "you've got to help me.$"

Bammobo_Bush_Hermit_Text_10:
# 89 "data/maps/Bammobo_Bush/scripts.pory"
	.string "There's a spirit that's been messing\n"
	.string "with me. I know I'm not crazy. I fear it's\l"
	.string "going to follow me anywhere I go. Help\l"
	.string "me get rid of it. Meet me upnorth, at\l"
	.string "night.$"

Bammobo_Bush_Journal1_Text_0:
# 128 "data/maps/Bammobo_Bush/scripts.pory"
	.string "May 8th, 1994 ----------------------\n"
	.string "That's it. I lost my job at the\l"
	.string "restaurant's airport. I'm so ashamed I\l"
	.string "can't face my wife and kids anymore.\l"
	.string "What am I going to do?...$"

Bammobo_Bush_Journal2_Text_0:
# 135 "data/maps/Bammobo_Bush/scripts.pory"
	.string "November 12th, 1994 ----------------\n"
	.string "I finally learned to fish! I can finally\l"
	.string "eat something else other than berries.\l"
	.string "I was beginning to lose my mind... Oh, I\l"
	.string "wonder how my wife and kids are doing...\l"
	.string "How I miss them... I don't know if I can\l"
	.string "go any longer.$"

Bammobo_Bush_Journal3_Text_0:
# 142 "data/maps/Bammobo_Bush/scripts.pory"
	.string "????????? ??th, 199? ---------------\n"
	.string "I saw it. The shade. AGAIN! WHY ME? I'm\l"
	.string "sure it whispered something. I haven't\l"
	.string "slept for days. I need to look for\l"
	.string "another place to fish and harvest\l"
	.string "berries, the route upnorth is cursed...$"
