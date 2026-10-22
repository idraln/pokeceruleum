# 1 "data/maps/Oparque_Hut/scripts.pory"

# 2 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_MapScripts::
# 3 "data/maps/Oparque_Hut/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Oparque_Hut_OnFrame
# 4 "data/maps/Oparque_Hut/scripts.pory"
	.byte 0
# 5 "data/maps/Oparque_Hut/scripts.pory"

# 6 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_OnFrame:
# 7 "data/maps/Oparque_Hut/scripts.pory"
    map_script_2 VAR_SIDE_STORY_BRO, 1, Oparque_Hut_Arrival
# 8 "data/maps/Oparque_Hut/scripts.pory"
    .2byte 0

Oparque_Hut_Arrival::
# 12 "data/maps/Oparque_Hut/scripts.pory"
	lock
# 13 "data/maps/Oparque_Hut/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 14 "data/maps/Oparque_Hut/scripts.pory"
	special SpawnCameraObject
# 15 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Oparque_Hut_Arrival_Movement_0
# 16 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 17 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_1
# 18 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 19 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 20 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_1
# 21 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 22 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 23 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 24 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 1, Oparque_Hut_Arrival_Movement_2
# 25 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 26 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 27 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_3
# 28 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 29 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 30 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 31 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_1
# 32 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 33 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 34 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_4
# 35 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 36 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 37 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 38 "data/maps/Oparque_Hut/scripts.pory"
	playse SE_PIN
# 39 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 1, Oparque_Hut_Arrival_Movement_3
# 40 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 41 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 42 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 43 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_5
# 44 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 45 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 46 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 47 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_4
# 48 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 49 "data/maps/Oparque_Hut/scripts.pory"
	fadeoutbgm 1
# 50 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 51 "data/maps/Oparque_Hut/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 52 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 53 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_6
# 54 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 55 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 56 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 57 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_5
# 58 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Oparque_Hut_Arrival_Movement_6
# 59 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 60 "data/maps/Oparque_Hut/scripts.pory"
	special RemoveCameraObject
# 61 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_Arrival_Movement_7
# 62 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 63 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 64 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_7
# 65 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 66 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 67 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 68 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_8
# 69 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 70 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 71 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_8
# 72 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 73 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 74 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 75 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 76 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_Arrival_Text_9
# 77 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 78 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 79 "data/maps/Oparque_Hut/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 80 "data/maps/Oparque_Hut/scripts.pory"
	trainerbattle_no_intro TRAINER_BRO_OPARQUE, BroOparque1
# 81 "data/maps/Oparque_Hut/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq Oparque_Hut_Arrival_1
# 85 "data/maps/Oparque_Hut/scripts.pory"
	goto Oparque_Hut_AfterFight
	return

Oparque_Hut_Arrival_1:
# 82 "data/maps/Oparque_Hut/scripts.pory"
	goto Oparque_Hut_AfterFight
	return


Oparque_Hut_AfterFight::
# 91 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 92 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_0
# 93 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 94 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 95 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 96 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 97 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_1
# 98 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 99 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 100 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 101 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_AfterFight_Movement_0
# 102 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 103 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 104 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 105 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_2
# 106 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 107 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 108 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 109 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_7
# 110 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_Arrival_Movement_7
# 111 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 112 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_0
# 113 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_3
# 114 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 115 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 116 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 2, Oparque_Hut_Arrival_Movement_4
# 117 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 118 "data/maps/Oparque_Hut/scripts.pory"
	removeobject 2
# 119 "data/maps/Oparque_Hut/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 121 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_AfterFight_Movement_1
# 122 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 123 "data/maps/Oparque_Hut/scripts.pory"
	delay 60
# 124 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 125 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_4
# 126 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 127 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 128 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 129 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_Arrival_Movement_0
# 130 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 131 "data/maps/Oparque_Hut/scripts.pory"
	delay 60
# 132 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 1, Oparque_Hut_AfterFight_Movement_2
# 133 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 134 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 135 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_5
# 136 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 137 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 138 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 139 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_6
# 140 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 141 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 142 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 143 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_7, MSGBOX_YESNO
# 144 "data/maps/Oparque_Hut/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Oparque_Hut_AfterFight_2
# 163 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 164 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_10
# 165 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 166 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_6
# 167 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 168 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_11
# 169 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 170 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 171 "data/maps/Oparque_Hut/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_Arrival_Movement_3
# 173 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 174 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 175 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 176 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_12
# 177 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 178 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 179 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 1, Oparque_Hut_AfterFight_Movement_3
# 180 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 181 "data/maps/Oparque_Hut/scripts.pory"
	removeobject 1
# 182 "data/maps/Oparque_Hut/scripts.pory"
	playse SE_EXIT
# 183 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 184 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_AfterFight_Movement_1
# 185 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
Oparque_Hut_AfterFight_1:
# 187 "data/maps/Oparque_Hut/scripts.pory"
	setflag FLAG_SAM_KIDNAPPED
# 188 "data/maps/Oparque_Hut/scripts.pory"
	setvar VAR_SIDE_STORY_BRO, 2
# 189 "data/maps/Oparque_Hut/scripts.pory"
	completequest QUEST_SAM
# 190 "data/maps/Oparque_Hut/scripts.pory"
	setflag FLAG_QUEST_SAM_COMPLETE
# 191 "data/maps/Oparque_Hut/scripts.pory"
	release
	end

Oparque_Hut_AfterFight_2:
# 145 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 146 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_8
# 147 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 148 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 149 "data/maps/Oparque_Hut/scripts.pory"
	delay 20
# 150 "data/maps/Oparque_Hut/scripts.pory"
	namebox Oparque_Hut_Arrival_Text_2
# 151 "data/maps/Oparque_Hut/scripts.pory"
	msgbox Oparque_Hut_AfterFight_Text_9
# 152 "data/maps/Oparque_Hut/scripts.pory"
	closemessage
# 153 "data/maps/Oparque_Hut/scripts.pory"
	hidenamebox
# 154 "data/maps/Oparque_Hut/scripts.pory"
	applymovement 1, Oparque_Hut_AfterFight_Movement_3
# 155 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
# 156 "data/maps/Oparque_Hut/scripts.pory"
	removeobject 1
# 157 "data/maps/Oparque_Hut/scripts.pory"
	playse SE_EXIT
# 158 "data/maps/Oparque_Hut/scripts.pory"
	delay 40
# 159 "data/maps/Oparque_Hut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Oparque_Hut_AfterFight_Movement_1
# 160 "data/maps/Oparque_Hut/scripts.pory"
	waitmovement 0
	goto Oparque_Hut_AfterFight_1


# 15 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_0:
# 15 "data/maps/Oparque_Hut/scripts.pory"
	walk_right
# 15 "data/maps/Oparque_Hut/scripts.pory"
	walk_up
# 15 "data/maps/Oparque_Hut/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_1:
# 17 "data/maps/Oparque_Hut/scripts.pory"
	walk_in_place_up
	step_end

# 24 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_2:
# 24 "data/maps/Oparque_Hut/scripts.pory"
	walk_in_place_down
	step_end

# 39 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_3:
# 39 "data/maps/Oparque_Hut/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_4:
# 47 "data/maps/Oparque_Hut/scripts.pory"
	face_down
	step_end

# 57 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_5:
# 57 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 57 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 57 "data/maps/Oparque_Hut/scripts.pory"
	face_left
	step_end

# 58 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_6:
# 58 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 58 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 58 "data/maps/Oparque_Hut/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_7:
# 61 "data/maps/Oparque_Hut/scripts.pory"
	face_right
	step_end

# 68 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_Arrival_Movement_8:
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_up
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_left
# 68 "data/maps/Oparque_Hut/scripts.pory"
	face_down
# 68 "data/maps/Oparque_Hut/scripts.pory"
	delay_16
# 68 "data/maps/Oparque_Hut/scripts.pory"
	delay_16
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_left
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 68 "data/maps/Oparque_Hut/scripts.pory"
	face_right
# 68 "data/maps/Oparque_Hut/scripts.pory"
	delay_16
# 68 "data/maps/Oparque_Hut/scripts.pory"
	delay_16
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_up
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_right
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_right
# 68 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
# 68 "data/maps/Oparque_Hut/scripts.pory"
	face_left
	step_end

# 101 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_AfterFight_Movement_0:
# 101 "data/maps/Oparque_Hut/scripts.pory"
	walk_up
# 101 "data/maps/Oparque_Hut/scripts.pory"
	walk_left
# 101 "data/maps/Oparque_Hut/scripts.pory"
	walk_left
# 101 "data/maps/Oparque_Hut/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_AfterFight_Movement_1:
# 121 "data/maps/Oparque_Hut/scripts.pory"
	face_left
	step_end

# 132 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_AfterFight_Movement_2:
# 132 "data/maps/Oparque_Hut/scripts.pory"
	jump_in_place_down
# 132 "data/maps/Oparque_Hut/scripts.pory"
	jump_in_place_down
# 132 "data/maps/Oparque_Hut/scripts.pory"
	jump_in_place_down
	step_end

# 154 "data/maps/Oparque_Hut/scripts.pory"
Oparque_Hut_AfterFight_Movement_3:
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_right
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_down
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_down
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_down
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_left
# 154 "data/maps/Oparque_Hut/scripts.pory"
	walk_fast_left
# 154 "data/maps/Oparque_Hut/scripts.pory"
	face_down
	step_end

Oparque_Hut_Arrival_Text_0:
# 19 "data/maps/Oparque_Hut/scripts.pory"
	.string "???$"

Oparque_Hut_Arrival_Text_1:
# 20 "data/maps/Oparque_Hut/scripts.pory"
	.string "I said shut up! Shut up! I've already\n"
	.string "tied you, do you also want me to gag\l"
	.string "you? Is that what you want?$"

Oparque_Hut_Arrival_Text_2:
# 26 "data/maps/Oparque_Hut/scripts.pory"
	.string "Sam$"

Oparque_Hut_Arrival_Text_3:
# 27 "data/maps/Oparque_Hut/scripts.pory"
	.string "I don't care! My best pal will come soon\n"
	.string "enough and free me!$"

Oparque_Hut_Arrival_Text_4:
# 34 "data/maps/Oparque_Hut/scripts.pory"
	.string "Oh yeah? We've been waiting for hours!\n"
	.string "I'm starting to think that you're\l"
	.string "nothing but a sneaky liar... Have you\l"
	.string "ever thought of becoming food for the\l"
	.string "Sharpedos?$"

Oparque_Hut_Arrival_Text_5:
# 43 "data/maps/Oparque_Hut/scripts.pory"
	.string "Haha! I told you! {PLAYER}, help me!$"

Oparque_Hut_Arrival_Text_6:
# 53 "data/maps/Oparque_Hut/scripts.pory"
	.string "...You're here.$"

Oparque_Hut_Arrival_Text_7:
# 64 "data/maps/Oparque_Hut/scripts.pory"
	.string "...I can't believe it. {PLAYER}, you're\n"
	.string "actually here. You're alive...$"

Oparque_Hut_Arrival_Text_8:
# 71 "data/maps/Oparque_Hut/scripts.pory"
	.string "...It's been so long. Yet, you haven't\n"
	.string "changed a bit, haven't you?$"

Oparque_Hut_Arrival_Text_9:
# 76 "data/maps/Oparque_Hut/scripts.pory"
	.string "...You don't recognise me, do you? Don't\n"
	.string "worry. You'll soon figure it out. In the\l"
	.string "meantime, if you want to free your\l"
	.string "little friend, you'll have to face me\l"
	.string "first. Bring it on, show me how you\l"
	.string "bounced back.$"

Oparque_Hut_AfterFight_Text_0:
# 92 "data/maps/Oparque_Hut/scripts.pory"
	.string "...Yeah, you're still the same.$"

Oparque_Hut_AfterFight_Text_1:
# 97 "data/maps/Oparque_Hut/scripts.pory"
	.string "...I guess it's time for me to leave,\n"
	.string "then. Don't worry though, we'll meet\l"
	.string "again. Very soon. My plan is almost\l"
	.string "complete.$"

Oparque_Hut_AfterFight_Text_2:
# 105 "data/maps/Oparque_Hut/scripts.pory"
	.string "...One last thing.$"

Oparque_Hut_AfterFight_Text_3:
# 113 "data/maps/Oparque_Hut/scripts.pory"
	.string "...Xatu is doing just fine.$"

Oparque_Hut_AfterFight_Text_4:
# 125 "data/maps/Oparque_Hut/scripts.pory"
	.string "{PLAYER}! Please, come untie me! I\n"
	.string "can't feel my hands!$"

Oparque_Hut_AfterFight_Text_5:
# 135 "data/maps/Oparque_Hut/scripts.pory"
	.string "{PLAYER}, I'm so sorry to have\n"
	.string "brought you into this... I thought I\l"
	.string "made a new friend, and you know how I\l"
	.string "be, I'm talking too much. I started\l"
	.string "talking about you, because you know,\l"
	.string "you're the most talented trainer I've\l"
	.string "ever met, and I figured everyone should\l"
	.string "know about you. Anyway, this guy,\l"
	.string "completely flipped after I told him\l"
	.string "about you, and started threatening me\l"
	.string "if I didn't make you come and see him. He\l"
	.string "started dressing up like this weird\l"
	.string "diver, and he punched me really hard in\l"
	.string "the stomach when I tried to leave... But\l"
	.string "you showed him, hah!$"

Oparque_Hut_AfterFight_Text_6:
# 139 "data/maps/Oparque_Hut/scripts.pory"
	.string "...$"

Oparque_Hut_AfterFight_Text_7:
# 143 "data/maps/Oparque_Hut/scripts.pory"
	.string "...Didn't he say Xatu before leaving,\n"
	.string "though? I haven't told him about Xatu.\l"
	.string "Do you guys know each other?$"

Oparque_Hut_AfterFight_Text_8:
# 146 "data/maps/Oparque_Hut/scripts.pory"
	.string "Oh? Well, you need to change friends.\n"
	.string "He's a big weirdo!$"

Oparque_Hut_AfterFight_Text_9:
# 151 "data/maps/Oparque_Hut/scripts.pory"
	.string "Anyways, now that you're here, we can\n"
	.string "actually chase the guy and deliver him\l"
	.string "to the authorities! Quick!!$"

Oparque_Hut_AfterFight_Text_10:
# 164 "data/maps/Oparque_Hut/scripts.pory"
	.string "You don't? That's weird, how would he\n"
	.string "know about Xatu then?$"

Oparque_Hut_AfterFight_Text_11:
# 168 "data/maps/Oparque_Hut/scripts.pory"
	.string "You know what, {PLAYER}? And, don't\n"
	.string "take this the wrong way, but he kinda\l"
	.string "reminded me of you. In the way he spoke,\l"
	.string "his manners...$"

Oparque_Hut_AfterFight_Text_12:
# 176 "data/maps/Oparque_Hut/scripts.pory"
	.string "No no no! I'm not saying that you act\n"
	.string "like an outlaw! Just that... It's weird,\l"
	.string "he seemed like he knew you... Very well.\l"
	.string "Anyway, my ears didn't fool me, he said\l"
	.string "something about Xatu... We need to\l"
	.string "chase the guy! Quick!$"

BroOparque1::
# 195 "data/maps/Oparque_Hut/scripts.pory"
	.string "...Impressive.$"
