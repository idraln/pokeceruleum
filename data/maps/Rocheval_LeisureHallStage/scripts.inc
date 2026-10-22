# 1 "data/maps/Rocheval_LeisureHallStage/scripts.pory"

# 2 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_MapScripts::
# 3 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_LeisureHallStage_OnFrame
# 4 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.byte 0
# 5 "data/maps/Rocheval_LeisureHallStage/scripts.pory"

# 6 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_OnFrame:
# 7 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Rocheval_LeisureHallStage_Arrival
# 8 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
    .2byte 0

Rocheval_LeisureHallStage_Arrival::
# 12 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	lockall
# 13 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerEnteringStage
# 14 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 15 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPanningToAnimator
# 17 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 18 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 20
# 19 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorPresenting
# 20 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AnimatorPresenting
# 21 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 22 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 23 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_1
# 24 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 25 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 28 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorPresenting2
# 29 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AnimatorPresenting2
# 30 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 31 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 32 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_2
# 33 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 34 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 35 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 9, Rocheval_LeisureHallStage_Arrival_Movement_0
# 36 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 8, Rocheval_LeisureHallStage_Arrival_Movement_1
# 37 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 12, Rocheval_LeisureHallStage_Arrival_Movement_2
# 38 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 10, Rocheval_LeisureHallStage_Arrival_Movement_3
# 39 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 40 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 41 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorPresenting3
# 42 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AnimatorPresenting3
# 43 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 44 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 45 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_3
# 46 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 47 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 48 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorFacingPlayer
# 49 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AnimatorFacingPlayer
# 50 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 51 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPanningToPlayer
# 52 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 53 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 54 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_4
# 55 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 56 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 57 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 9, Rocheval_LeisureHallStage_Arrival_Movement_0
# 58 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 8, Rocheval_LeisureHallStage_Arrival_Movement_1
# 59 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 12, Rocheval_LeisureHallStage_Arrival_Movement_2
# 60 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 10, Rocheval_LeisureHallStage_Arrival_Movement_3
# 61 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 62 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 63 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 20
# 64 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 65 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_5
# 66 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 67 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 68 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraPanningFromPlayerToFoe
# 69 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 70 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	clearflag FLAG_TRAINER_CONTEST1
# 71 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	addobject 5
# 72 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_EXIT
# 73 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, NPCEntrance
# 74 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 5, NPCEntrance
# 75 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 76 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorFacingFoe
# 77 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 78 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 20
# 79 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 80 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_6
# 81 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 82 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 83 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 9, Rocheval_LeisureHallStage_Arrival_Movement_0
# 84 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 8, Rocheval_LeisureHallStage_Arrival_Movement_1
# 85 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 12, Rocheval_LeisureHallStage_Arrival_Movement_2
# 86 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 10, Rocheval_LeisureHallStage_Arrival_Movement_3
# 87 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 88 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 89 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToAnimator
# 90 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 91 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 92 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_Arrival_Text_7
# 93 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 94 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 95 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, AnimatorLeavingStage
# 96 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraBackToPlayer
# 97 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 98 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TEMP_0, 1
# 99 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special RemoveCameraObject
# 100 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFacing1stTrainer
# 101 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 5, FoeFacingPlayer
# 102 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 103 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_LAST_TALKED, 5
# 104 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 105 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_8
# 106 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Joseph1
# 107 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 108 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 109 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	trainerbattle_no_intro TRAINER_JOSEPH_CONTEST, Joseph2
# 110 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	goto Rocheval_LeisureHallStage_AfterJoseph
	return


Rocheval_LeisureHallStage_AfterJoseph::
# 114 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq Rocheval_LeisureHallStage_AfterJoseph_1
# 129 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 130 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 131 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterJoseph_Text_1
# 132 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 133 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 134 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 5, NPCLeave
# 135 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 136 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	removeobject 5
# 137 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setflag FLAG_TRAINER_CONTEST1
# 140 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 20
# 141 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGettingHealed
# 142 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 143 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterJoseph_Text_2
# 144 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 145 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 60
# 147 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	clearflag FLAG_TRAINER_CONTEST2
# 148 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	addobject 6
# 149 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 150 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 151 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterJoseph_Text_3
# 152 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 153 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 154 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 30
# 155 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 157 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterJoseph_Text_4
# 158 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 159 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 160 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFacing1stTrainer
# 161 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 6, FoeFacingPlayer
# 162 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 163 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINERBATTLE, 0
# 164 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 165 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 166 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_AfterJoseph_Text_5
# 167 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Gina1
# 168 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 169 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 170 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	trainerbattle_no_intro TRAINER_GINA_CONTEST, Gina2
# 171 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	goto Rocheval_LeisureHallStage_AfterGina
	return

Rocheval_LeisureHallStage_AfterJoseph_1:
# 115 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 116 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 117 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 118 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterJoseph_Text_0
# 119 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 120 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 121 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_MAIN_STORY, 6
# 122 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINER_CONTEST_PRIZE, 1
# 123 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	releaseall
# 124 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	warpsilent MAP_ROCHEVAL_LEISURE_HALL_ENTRANCE, 3, 10
# 125 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitstate
	end


Rocheval_LeisureHallStage_AfterGina::
# 176 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq Rocheval_LeisureHallStage_AfterGina_1
# 191 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 192 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 193 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_1
# 194 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 195 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 196 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 6, NPCLeave
# 197 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 198 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	removeobject 6
# 199 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_EXIT
# 201 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 20
# 202 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 203 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_2
# 204 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 205 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 206 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 9, Rocheval_LeisureHallStage_Arrival_Movement_0
# 207 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 8, Rocheval_LeisureHallStage_Arrival_Movement_1
# 208 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 12, Rocheval_LeisureHallStage_Arrival_Movement_2
# 209 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 10, Rocheval_LeisureHallStage_Arrival_Movement_3
# 210 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 211 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 213 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setflag FLAG_TRAINER_CONTEST2
# 214 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerGettingHealed
# 215 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 216 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_3
# 217 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 218 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 60
# 220 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	clearflag FLAG_TRAINER_CONTEST3
# 221 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	addobject 7
# 222 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 223 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 224 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_4
# 225 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 226 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 227 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 30
# 228 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 229 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 230 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_5
# 231 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 232 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 233 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFacing1stTrainer
# 234 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 7, FoeFacingPlayer
# 235 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 236 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINERBATTLE, 0
# 237 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_LAST_TALKED, 7
# 238 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 239 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_AfterGina_Text_6
# 240 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Sam3
# 241 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 242 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 243 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_CONTEST, Sam4
# 244 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	goto Rocheval_LeisureHallStage_End
	return

Rocheval_LeisureHallStage_AfterGina_1:
# 177 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 178 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 179 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 180 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_AfterGina_Text_0
# 181 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 182 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 183 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_MAIN_STORY, 6
# 184 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINER_CONTEST_PRIZE, 1
# 185 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	releaseall
# 186 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	warpsilent MAP_ROCHEVAL_LEISURE_HALL_ENTRANCE, 3, 10
# 187 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitstate
	end


Rocheval_LeisureHallStage_End::
# 249 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_MAIN_STORY, 6
# 250 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq Rocheval_LeisureHallStage_End_1
# 271 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 272 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINERBATTLE, 0
# 273 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINER_CONTEST_PRIZE, 3
# 274 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, PlayerWinsAnimator
# 275 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 276 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 277 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_End_Text_1
# 278 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 279 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 280 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 282 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWins
# 283 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 284 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 30
# 285 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	releaseall
# 286 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	warpsilent MAP_ROCHEVAL_LEISURE_HALL_ENTRANCE, 3, 10
# 287 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitstate
	end

Rocheval_LeisureHallStage_End_1:
# 251 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	special HealPlayerParty
# 252 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINERBATTLE, 0
# 253 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	setvar VAR_TRAINER_CONTEST_PRIZE, 2
# 254 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 1, SamWinsAnimator
# 255 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 256 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	namebox Rocheval_LeisureHallStage_Arrival_Text_0
# 257 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	msgbox Rocheval_LeisureHallStage_End_Text_0
# 258 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	closemessage
# 259 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	hidenamebox
# 260 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	playse SE_APPLAUSE
# 262 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	applymovement 7, SamWins
# 263 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitmovement 0
# 264 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay 30
# 265 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	releaseall
# 266 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	warpsilent MAP_ROCHEVAL_LEISURE_HALL_ENTRANCE, 3, 10
# 267 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	waitstate
	end


# 292 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
PlayerEnteringStage:
# 293 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 294 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 294 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 294 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 295 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 295 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 295 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 296 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_left
	step_end

# 299 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
CameraPanningToAnimator:
# 300 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_left
# 300 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_left
# 300 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_left
# 300 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_left
# 301 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_up
# 301 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_up
# 301 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_up
# 301 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_fast_up
	step_end

# 304 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorPresenting:
# 305 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 305 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 306 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 306 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 307 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 310 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorPresenting2:
# 311 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 311 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 311 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 311 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 311 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 312 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 313 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 316 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorPresenting3:
# 317 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 318 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 318 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 319 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 322 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorFacingPlayer:
# 323 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 323 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 324 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_right
	step_end

# 327 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
CameraPanningToPlayer:
# 328 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 328 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 328 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
	step_end

# 331 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
CameraPanningFromPlayerToFoe:
# 332 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_diag_southwest
# 332 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_diag_southwest
# 332 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_diag_southwest
# 332 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_diag_southwest
	step_end

# 335 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorFacingFoe:
# 336 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_left
	step_end

# 339 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
CameraBackToAnimator:
# 340 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 340 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 340 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 340 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
	step_end

# 343 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
AnimatorLeavingStage:
# 344 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 345 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 345 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 345 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 345 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 346 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_down
	step_end

# 349 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
CameraBackToPlayer:
# 350 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 350 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 350 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
PlayerFacing1stTrainer:
# 354 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
	step_end

# 357 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
FoeFacingPlayer:
# 358 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
	step_end

# 361 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
PlayerGettingHealed:
# 362 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 363 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_right
	step_end

# 366 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
NPCEntrance:
# 367 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 368 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 368 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 368 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 369 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 369 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 369 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_up
# 370 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_right
	step_end

# 373 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
NPCLeave:
# 374 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 374 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 374 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 375 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 375 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 376 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
	step_end

# 379 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
SamWinsAnimator:
# 380 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 380 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 380 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 381 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 382 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 383 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 386 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
SamWins:
# 387 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 387 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_right
# 388 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 391 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
PlayerWinsAnimator:
# 392 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 392 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 392 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 392 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_down
# 393 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 396 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
PlayerWins:
# 397 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 397 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_left
# 398 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_up
	step_end

# 35 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_Arrival_Movement_0:
# 35 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	jump_in_place_down
# 35 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	jump_in_place_down
	step_end

# 36 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_Arrival_Movement_1:
# 36 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_right
# 36 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay_16
# 36 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_down
	step_end

# 37 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_Arrival_Movement_2:
# 37 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_left
# 37 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	delay_16
# 37 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	face_down
	step_end

# 38 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
Rocheval_LeisureHallStage_Arrival_Movement_3:
# 38 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	walk_in_place_down
	step_end

Rocheval_LeisureHallStage_Arrival_Text_0:
# 22 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Host$"

Rocheval_LeisureHallStage_Arrival_Text_1:
# 23 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Ladies and gentlemen, welcome to one of\n"
	.string "Rocheval's numerous prides, the Trainer\l"
	.string "Contest!$"

Rocheval_LeisureHallStage_Arrival_Text_2:
# 32 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "In this edition, we have a lot of\n"
	.string "exciting trainers, waiting to give their\l"
	.string "everything out, for you to enjoy! So,\l"
	.string "make some noise!$"

Rocheval_LeisureHallStage_Arrival_Text_3:
# 45 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Now, allow me introduce the\n"
	.string "contestants to the first match.$"

Rocheval_LeisureHallStage_Arrival_Text_4:
# 54 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Let's start with {PLAYER}, and they're\n"
	.string "already here! In a hurry? Hah. Well, they\l"
	.string "sure do look like they will crush their\l"
	.string "opponents! Give them some applause!$"

Rocheval_LeisureHallStage_Arrival_Text_5:
# 65 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Next, we'll welcome Joseph!$"

Rocheval_LeisureHallStage_Arrival_Text_6:
# 80 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "He just began his trainer career, and\n"
	.string "he's ready to give it all! Make some\l"
	.string "noise for Joseph!$"

Rocheval_LeisureHallStage_Arrival_Text_7:
# 92 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Now that the introductions are done,\n"
	.string "let the show begin! Contestants,\l"
	.string "entertain us!$"

Rocheval_LeisureHallStage_Arrival_Text_8:
# 105 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Joseph$"

Rocheval_LeisureHallStage_AfterJoseph_Text_0:
# 118 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "What a great fight! Well done to you\n"
	.string "both! Unfortunately, this is the end\l"
	.string "for {PLAYER}. Thanks for\l"
	.string "participating!$"

Rocheval_LeisureHallStage_AfterJoseph_Text_1:
# 131 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "What a great fight! Well done to you\n"
	.string "both! {PLAYER} is advancing to the\l"
	.string "semi-finals!$"

Rocheval_LeisureHallStage_AfterJoseph_Text_2:
# 143 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "You're doing great! Here, let me heal\n"
	.string "your Pokémons.$"

Rocheval_LeisureHallStage_AfterJoseph_Text_3:
# 151 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Wow! Gina just annihilated Marco! His\n"
	.string "Magnemite couldn't do anything. Gina\l"
	.string "advances to the next round!$"

Rocheval_LeisureHallStage_AfterJoseph_Text_4:
# 157 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Next up, we have {PLAYER} against\n"
	.string "Gina! Have at it, young ones!$"

Rocheval_LeisureHallStage_AfterJoseph_Text_5:
# 166 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Gina$"

Rocheval_LeisureHallStage_AfterGina_Text_0:
# 180 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "How sad for {PLAYER}! Don't worry,\n"
	.string "there's always next time!$"

Rocheval_LeisureHallStage_AfterGina_Text_1:
# 193 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "How sad for Gina! Don't worry little girl,\n"
	.string "there's always next time!$"

Rocheval_LeisureHallStage_AfterGina_Text_2:
# 203 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Congratulations {PLAYER}, you're our\n"
	.string "first finalist! A round of applause for\l"
	.string "them!$"

Rocheval_LeisureHallStage_AfterGina_Text_3:
# 216 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "You're almost there! Here, let me heal\n"
	.string "your Pokémons.$"

Rocheval_LeisureHallStage_AfterGina_Text_4:
# 224 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "We have our second and last finalist!$"

Rocheval_LeisureHallStage_AfterGina_Text_5:
# 230 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "It is already time for the final! It's\n"
	.string "{PLAYER} against Sam! And it appears\l"
	.string "that they already know each other...\l"
	.string "How exciting! Lads, battle!$"

Rocheval_LeisureHallStage_AfterGina_Text_6:
# 239 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Sam$"

Rocheval_LeisureHallStage_End_Text_0:
# 257 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Everyone, your new Trainer Contest\n"
	.string "winner, Sam!! Give them some noise!$"

Rocheval_LeisureHallStage_End_Text_1:
# 277 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Everyone, your new Trainer Contest\n"
	.string "winner, {PLAYER}!! Give them some\l"
	.string "noise!$"

Joseph1::
# 400 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "I practiced every night after school! I\n"
	.string "simply cannot lose!$"

Joseph2::
# 404 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Ah. Despite my hard work, I lost.$"

Gina1::
# 408 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "I'm so happy! I finally entered the\n"
	.string "contest! Yay!!$"

Gina2::
# 412 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "It's already over? Oh...$"

Sam3::
# 416 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "{PLAYER}, I managed to go through\n"
	.string "every round! Whatever happens, we'll\l"
	.string "get the prize money! Let's have fun now,\l"
	.string "shall we?$"

Sam4::
# 420 "data/maps/Rocheval_LeisureHallStage/scripts.pory"
	.string "Oh man, I can't believe I went this far!\n"
	.string "Congratulations {PLAYER}, you're\l"
	.string "truly something else.$"
