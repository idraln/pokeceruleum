# 1 "data/maps/Array/scripts.pory"

# 2 "data/maps/Array/scripts.pory"
Array_MapScripts::
# 3 "data/maps/Array/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Array_OnTransition
# 4 "data/maps/Array/scripts.pory"
	.byte 0

Array_OnTransition::
	end


Array_Kidnapping::
# 12 "data/maps/Array/scripts.pory"
	lock
# 13 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_0
# 14 "data/maps/Array/scripts.pory"
	closemessage
# 15 "data/maps/Array/scripts.pory"
	playbgm MUS_RG_SILPH, TRUE
# 16 "data/maps/Array/scripts.pory"
	delay 20
# 17 "data/maps/Array/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Array/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Array_Kidnapping_Movement_0
# 19 "data/maps/Array/scripts.pory"
	waitmovement 0
# 20 "data/maps/Array/scripts.pory"
	delay 40
# 21 "data/maps/Array/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq Array_Kidnapping_2
# 26 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq Array_Kidnapping_3
# 30 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Array_Kidnapping_4
# 34 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq Array_Kidnapping_5
Array_Kidnapping_1:
# 38 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_1
# 39 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_2
# 40 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_3
# 41 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_2
# 42 "data/maps/Array/scripts.pory"
	closemessage
# 43 "data/maps/Array/scripts.pory"
	delay 20
# 44 "data/maps/Array/scripts.pory"
	turnobject 1, DIR_EAST
# 45 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_4
# 46 "data/maps/Array/scripts.pory"
	closemessage
# 47 "data/maps/Array/scripts.pory"
	delay 20
# 48 "data/maps/Array/scripts.pory"
	msgbox Array_Kidnapping_Text_5
# 49 "data/maps/Array/scripts.pory"
	closemessage
# 50 "data/maps/Array/scripts.pory"
	turnobject 1, DIR_WEST
# 51 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_eq Array_Kidnapping_11
# 57 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq Array_Kidnapping_12
# 63 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq Array_Kidnapping_13
# 69 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq Array_Kidnapping_14
Array_Kidnapping_10:
# 75 "data/maps/Array/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 1
# 76 "data/maps/Array/scripts.pory"
	setflag FLAG_ARMY_GLORRAY
# 77 "data/maps/Array/scripts.pory"
	warpsilent MAP_XATU_TENT3, 0, 3
# 78 "data/maps/Array/scripts.pory"
	release
	end

Array_Kidnapping_2:
# 23 "data/maps/Array/scripts.pory"
	applymovement 1, Array_Kidnapping_Movement_1
# 24 "data/maps/Array/scripts.pory"
	waitmovement 0
	goto Array_Kidnapping_1

Array_Kidnapping_3:
# 27 "data/maps/Array/scripts.pory"
	applymovement 1, Array_Kidnapping_Movement_2
# 28 "data/maps/Array/scripts.pory"
	waitmovement 0
	goto Array_Kidnapping_1

Array_Kidnapping_4:
# 31 "data/maps/Array/scripts.pory"
	applymovement 1, Array_Kidnapping_Movement_3
# 32 "data/maps/Array/scripts.pory"
	waitmovement 0
	goto Array_Kidnapping_1

Array_Kidnapping_5:
# 35 "data/maps/Array/scripts.pory"
	applymovement 1, Array_Kidnapping_Movement_4
# 36 "data/maps/Array/scripts.pory"
	waitmovement 0
	goto Array_Kidnapping_1

Array_Kidnapping_11:
# 52 "data/maps/Array/scripts.pory"
	applymovement 2, Array_Kidnapping_Movement_5
# 53 "data/maps/Array/scripts.pory"
	applymovement 3, Array_Kidnapping_Movement_6
# 54 "data/maps/Array/scripts.pory"
	waitmovement 0
# 55 "data/maps/Array/scripts.pory"
	delay 60
	goto Array_Kidnapping_10

Array_Kidnapping_12:
# 58 "data/maps/Array/scripts.pory"
	applymovement 2, Array_Kidnapping_Movement_7
# 59 "data/maps/Array/scripts.pory"
	applymovement 3, Array_Kidnapping_Movement_5
# 60 "data/maps/Array/scripts.pory"
	waitmovement 0
# 61 "data/maps/Array/scripts.pory"
	delay 60
	goto Array_Kidnapping_10

Array_Kidnapping_13:
# 64 "data/maps/Array/scripts.pory"
	applymovement 2, Array_Kidnapping_Movement_8
# 65 "data/maps/Array/scripts.pory"
	applymovement 3, Array_Kidnapping_Movement_9
# 66 "data/maps/Array/scripts.pory"
	waitmovement 0
# 67 "data/maps/Array/scripts.pory"
	delay 60
	goto Array_Kidnapping_10

Array_Kidnapping_14:
# 70 "data/maps/Array/scripts.pory"
	applymovement 2, Array_Kidnapping_Movement_10
# 71 "data/maps/Array/scripts.pory"
	applymovement 3, Array_Kidnapping_Movement_11
# 72 "data/maps/Array/scripts.pory"
	waitmovement 0
# 73 "data/maps/Array/scripts.pory"
	delay 60
	goto Array_Kidnapping_10


Array_HomeSign::
# 83 "data/maps/Array/scripts.pory"
	lockall
# 84 "data/maps/Array/scripts.pory"
	msgbox Array_HomeSign_Text_0
# 85 "data/maps/Array/scripts.pory"
	releaseall
	end


Array_MartClosed::
# 90 "data/maps/Array/scripts.pory"
	lockall
# 91 "data/maps/Array/scripts.pory"
	msgbox Array_MartClosed_Text_0
# 92 "data/maps/Array/scripts.pory"
	releaseall
	end


Array_Dave::
# 97 "data/maps/Array/scripts.pory"
	lock
# 98 "data/maps/Array/scripts.pory"
	opendoor 17, 8
# 99 "data/maps/Array/scripts.pory"
	waitdooranim
# 100 "data/maps/Array/scripts.pory"
	clearflag FLAG_DAVE_GLORRAY
# 101 "data/maps/Array/scripts.pory"
	addobject 4
# 102 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Dave_Movement_0
# 103 "data/maps/Array/scripts.pory"
	waitmovement 0
# 104 "data/maps/Array/scripts.pory"
	closedoor 17, 8
# 105 "data/maps/Array/scripts.pory"
	waitdooranim
# 106 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Dave_Movement_1
# 107 "data/maps/Array/scripts.pory"
	waitmovement 0
# 108 "data/maps/Array/scripts.pory"
	delay 40
# 109 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Dave_Movement_2
# 110 "data/maps/Array/scripts.pory"
	waitmovement 0
# 111 "data/maps/Array/scripts.pory"
	delay 20
# 112 "data/maps/Array/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Kidnapping_Movement_0
# 114 "data/maps/Array/scripts.pory"
	waitmovement 0
# 115 "data/maps/Array/scripts.pory"
	delay 40
# 116 "data/maps/Array/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 117 "data/maps/Array/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq Array_Dave_2
# 122 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Dave_Movement_4
# 123 "data/maps/Array/scripts.pory"
	waitmovement 0
Array_Dave_1:
# 125 "data/maps/Array/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Array_Dave_Movement_5
# 126 "data/maps/Array/scripts.pory"
	waitmovement 0
# 127 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 128 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_1
# 129 "data/maps/Array/scripts.pory"
	closemessage
# 130 "data/maps/Array/scripts.pory"
	hidenamebox
# 131 "data/maps/Array/scripts.pory"
	delay 20
# 132 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 133 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_2
# 134 "data/maps/Array/scripts.pory"
	closemessage
# 135 "data/maps/Array/scripts.pory"
	hidenamebox
# 136 "data/maps/Array/scripts.pory"
	delay 20
# 137 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 138 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_3
# 139 "data/maps/Array/scripts.pory"
	closemessage
# 140 "data/maps/Array/scripts.pory"
	hidenamebox
# 141 "data/maps/Array/scripts.pory"
	delay 20
# 142 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 143 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_4
# 144 "data/maps/Array/scripts.pory"
	hidenamebox
# 145 "data/maps/Array/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 146 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_5
# 147 "data/maps/Array/scripts.pory"
	waitfanfare
# 148 "data/maps/Array/scripts.pory"
	setflag FLAG_BADGE06_GET
# 149 "data/maps/Array/scripts.pory"
	closemessage
# 150 "data/maps/Array/scripts.pory"
	delay 20
# 151 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 152 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_6
# 153 "data/maps/Array/scripts.pory"
	closemessage
# 154 "data/maps/Array/scripts.pory"
	hidenamebox
# 155 "data/maps/Array/scripts.pory"
	delay 20
# 156 "data/maps/Array/scripts.pory"
	namebox Array_Dave_Text_0
# 157 "data/maps/Array/scripts.pory"
	msgbox Array_Dave_Text_7
# 158 "data/maps/Array/scripts.pory"
	closemessage
# 159 "data/maps/Array/scripts.pory"
	hidenamebox
# 160 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Kidnapping_Movement_2
# 161 "data/maps/Array/scripts.pory"
	waitmovement 0
# 162 "data/maps/Array/scripts.pory"
	removeobject 4
# 163 "data/maps/Array/scripts.pory"
	setflag FLAG_DAVE_GLORRAY
# 164 "data/maps/Array/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 5
# 165 "data/maps/Array/scripts.pory"
	setflag FLAG_VISITED_GLORRAY
# 166 "data/maps/Array/scripts.pory"
	release
	end

Array_Dave_2:
# 118 "data/maps/Array/scripts.pory"
	applymovement 4, Array_Dave_Movement_3
# 119 "data/maps/Array/scripts.pory"
	waitmovement 0
	goto Array_Dave_1


# 18 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_0:
# 18 "data/maps/Array/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_1:
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_up
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_left
# 23 "data/maps/Array/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_2:
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
# 27 "data/maps/Array/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_3:
# 31 "data/maps/Array/scripts.pory"
	walk_down
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
# 31 "data/maps/Array/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_4:
# 35 "data/maps/Array/scripts.pory"
	walk_down
# 35 "data/maps/Array/scripts.pory"
	walk_down
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
# 35 "data/maps/Array/scripts.pory"
	walk_left
	step_end

# 52 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_5:
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	walk_left
# 52 "data/maps/Array/scripts.pory"
	face_up
	step_end

# 53 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_6:
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_left
# 53 "data/maps/Array/scripts.pory"
	walk_up
# 53 "data/maps/Array/scripts.pory"
	walk_up
# 53 "data/maps/Array/scripts.pory"
	face_right
	step_end

# 58 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_7:
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_up
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	walk_left
# 58 "data/maps/Array/scripts.pory"
	face_down
	step_end

# 64 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_8:
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	walk_left
# 64 "data/maps/Array/scripts.pory"
	face_down
	step_end

# 65 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_9:
# 65 "data/maps/Array/scripts.pory"
	walk_down
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	walk_left
# 65 "data/maps/Array/scripts.pory"
	face_up
	step_end

# 70 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_10:
# 70 "data/maps/Array/scripts.pory"
	walk_down
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	walk_left
# 70 "data/maps/Array/scripts.pory"
	face_down
	step_end

# 71 "data/maps/Array/scripts.pory"
Array_Kidnapping_Movement_11:
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_left
# 71 "data/maps/Array/scripts.pory"
	walk_down
# 71 "data/maps/Array/scripts.pory"
	face_right
	step_end

# 102 "data/maps/Array/scripts.pory"
Array_Dave_Movement_0:
# 102 "data/maps/Array/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/Array/scripts.pory"
Array_Dave_Movement_1:
# 106 "data/maps/Array/scripts.pory"
	walk_left
# 106 "data/maps/Array/scripts.pory"
	walk_left
# 106 "data/maps/Array/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/Array/scripts.pory"
Array_Dave_Movement_2:
# 109 "data/maps/Array/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Array/scripts.pory"
Array_Dave_Movement_3:
# 118 "data/maps/Array/scripts.pory"
	walk_right
# 118 "data/maps/Array/scripts.pory"
	walk_right
# 118 "data/maps/Array/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/Array/scripts.pory"
Array_Dave_Movement_4:
# 122 "data/maps/Array/scripts.pory"
	walk_right
# 122 "data/maps/Array/scripts.pory"
	walk_right
# 122 "data/maps/Array/scripts.pory"
	walk_right
# 122 "data/maps/Array/scripts.pory"
	walk_down
# 122 "data/maps/Array/scripts.pory"
	face_right
	step_end

# 125 "data/maps/Array/scripts.pory"
Array_Dave_Movement_5:
# 125 "data/maps/Array/scripts.pory"
	face_left
	step_end

Array_Kidnapping_Text_0:
# 13 "data/maps/Array/scripts.pory"
	.string "STOP IT RIGHT THERE!$"

Array_Kidnapping_Text_1:
# 38 "data/maps/Array/scripts.pory"
	.string "What are you doing here? Are you one of\n"
	.string "those outlaws that come here and\l"
	.string "pillage what remains of this village?$"

Array_Kidnapping_Text_2:
# 39 "data/maps/Array/scripts.pory"
	.string "...$"

Array_Kidnapping_Text_3:
# 40 "data/maps/Array/scripts.pory"
	.string "You say you used to live there? Then\n"
	.string "why come back now and not sooner? I\l"
	.string "don't believe you...$"

Array_Kidnapping_Text_4:
# 45 "data/maps/Array/scripts.pory"
	.string "Boys, seize that punk!$"

Array_Kidnapping_Text_5:
# 48 "data/maps/Array/scripts.pory"
	.string "SIR! YES SIR!$"

Array_HomeSign_Text_0:
# 84 "data/maps/Array/scripts.pory"
	.string "{PLAYER}'s home$"

Array_MartClosed_Text_0:
# 91 "data/maps/Array/scripts.pory"
	.string "The door appears to be stuck. It can't\n"
	.string "be opened.$"

Array_Dave_Text_0:
# 127 "data/maps/Array/scripts.pory"
	.string "Dave$"

Array_Dave_Text_1:
# 128 "data/maps/Array/scripts.pory"
	.string "Hey, {PLAYER}! Remember me? Dave! I\n"
	.string "helped you bring Corinna from the after\l"
	.string "life!$"

Array_Dave_Text_2:
# 133 "data/maps/Array/scripts.pory"
	.string "...Uh, have you been seeing weird\n"
	.string "things? ...No? Good. Means that Corinna\l"
	.string "wasn't that angry after all!$"

Array_Dave_Text_3:
# 138 "data/maps/Array/scripts.pory"
	.string "One thing about me, I love urbex. And\n"
	.string "this town... Wow! It's like it's been\l"
	.string "preserved from 20 years ago! And listen\l"
	.string "to this: I've been appointed to a super\l"
	.string "secret project. I shouldn't tell you\l"
	.string "about that, but I'm so excited! I'll be\l"
	.string "part of an exploration in The Ironair!\l"
	.string "You must know Vikkie, right? She's the\l"
	.string "one that hired me! The team I'm a part\l"
	.string "of will extract some sapphires and use\l"
	.string "them to create a special serum! Though\l"
	.string "I don't know what its purpose is really\l"
	.string "about, I've just been told to create\l"
	.string "it... But the money is good!$"

Array_Dave_Text_4:
# 143 "data/maps/Array/scripts.pory"
	.string "What I'm trying to say, {PLAYER}, is\n"
	.string "that I could never have landed this gig\l"
	.string "without you. You gave me back my\l"
	.string "confidence, back in Glasville. So, I want\l"
	.string "to gift you this.$"

Array_Dave_Text_5:
# 146 "data/maps/Array/scripts.pory"
	.string "You just received the Balance Emblem!$"

Array_Dave_Text_6:
# 152 "data/maps/Array/scripts.pory"
	.string "I just found it in that abandoned gym.\n"
	.string "And you're still on that challenge\l"
	.string "right? It'll be more use to you rather\l"
	.string "than me.$"

Array_Dave_Text_7:
# 157 "data/maps/Array/scripts.pory"
	.string "{PLAYER}, it's been great seeing you\n"
	.string "again. Keep it up!$"
