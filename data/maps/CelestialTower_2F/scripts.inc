# 1 "data/maps/CelestialTower_2F/scripts.pory"

# 2 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_MapScripts::
# 3 "data/maps/CelestialTower_2F/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CelestialTower_2F_OnTransition
# 4 "data/maps/CelestialTower_2F/scripts.pory"
	.byte 0

CelestialTower_2F_OnTransition::
# 8 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_MAIN_STORY, 55
	goto_if_eq CelestialTower_2F_OnTransition_1
	return

CelestialTower_2F_OnTransition_1:
# 9 "data/maps/CelestialTower_2F/scripts.pory"
	setobjectxyperm 1, 17, 3
# 10 "data/maps/CelestialTower_2F/scripts.pory"
	turnobject 1, DIR_EAST
	return


CelestialTower_2F_Vikkie::
# 15 "data/maps/CelestialTower_2F/scripts.pory"
	lock
# 16 "data/maps/CelestialTower_2F/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/CelestialTower_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 18 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CelestialTower_2F_Vikkie_2
# 22 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq CelestialTower_2F_Vikkie_3
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_2
# 28 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
CelestialTower_2F_Vikkie_1:
# 30 "data/maps/CelestialTower_2F/scripts.pory"
	delay 40
# 31 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_Vikkie_Text_0
# 32 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_Vikkie_Text_1
# 33 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 34 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 35 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_Vikkie_Movement_3
# 36 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_3
# 37 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 39 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_Vikkie_Movement_4
# 40 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/CelestialTower_2F/scripts.pory"
	playse SE_PIN
# 42 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_Vikkie_Text_0
# 43 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_Vikkie_Text_2
# 44 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 45 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 46 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_Vikkie_Movement_5
# 47 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_6
# 48 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 50 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_Vikkie_Text_0
# 51 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_Vikkie_Text_3
# 52 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 53 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_Vikkie_Movement_7
# 55 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CelestialTower_2F_Vikkie_8
# 59 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq CelestialTower_2F_Vikkie_9
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_10
# 65 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
CelestialTower_2F_Vikkie_7:
# 67 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 68 "data/maps/CelestialTower_2F/scripts.pory"
	special RemoveCameraObject
# 69 "data/maps/CelestialTower_2F/scripts.pory"
	setvar VAR_MAIN_STORY, 55
# 70 "data/maps/CelestialTower_2F/scripts.pory"
	release
	end

CelestialTower_2F_Vikkie_2:
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_0
# 20 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_Vikkie_1

CelestialTower_2F_Vikkie_3:
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_1
# 24 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_Vikkie_1

CelestialTower_2F_Vikkie_8:
# 56 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_8
# 57 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_Vikkie_7

CelestialTower_2F_Vikkie_9:
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CelestialTower_2F_Vikkie_Movement_9
# 61 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_Vikkie_7


CelestialTower_2F_VikkieFight::
# 75 "data/maps/CelestialTower_2F/scripts.pory"
	lock
# 76 "data/maps/CelestialTower_2F/scripts.pory"
	faceplayer
# 77 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_Vikkie_Text_0
# 78 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_VikkieFight_Text_0
# 79 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 80 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 81 "data/maps/CelestialTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_VIKKIE_FINAL, VikkieLast1
# 82 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 83 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_Vikkie_Text_0
# 84 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_VikkieFight_Text_1
# 85 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 86 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 87 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 88 "data/maps/CelestialTower_2F/scripts.pory"
	clearflag FLAG_COPS_CELESTIAL
# 89 "data/maps/CelestialTower_2F/scripts.pory"
	addobject 2
# 90 "data/maps/CelestialTower_2F/scripts.pory"
	addobject 3
# 91 "data/maps/CelestialTower_2F/scripts.pory"
	addobject 4
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_0
# 93 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/CelestialTower_2F/scripts.pory"
	delay 20
# 95 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_1
# 96 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_VikkieFight_Text_2
# 98 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_VikkieFight_Text_3
# 99 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 100 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 101 "data/maps/CelestialTower_2F/scripts.pory"
	turnobject 4, DIR_EAST
# 102 "data/maps/CelestialTower_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 103 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq CelestialTower_2F_VikkieFight_2
# 108 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CelestialTower_2F_VikkieFight_3
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_5
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_6
# 116 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
CelestialTower_2F_VikkieFight_1:
# 118 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_VikkieFight_Text_4
# 119 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_VikkieFight_Text_5
# 120 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 121 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 122 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq CelestialTower_2F_VikkieFight_8
# 128 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CelestialTower_2F_VikkieFight_9
# 136 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_7
# 137 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_VikkieFight_Movement_7
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_13
# 139 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
CelestialTower_2F_VikkieFight_7:
# 141 "data/maps/CelestialTower_2F/scripts.pory"
	removeobject 2
# 142 "data/maps/CelestialTower_2F/scripts.pory"
	removeobject 3
# 143 "data/maps/CelestialTower_2F/scripts.pory"
	removeobject 1
# 144 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq CelestialTower_2F_VikkieFight_14
# 150 "data/maps/CelestialTower_2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CelestialTower_2F_VikkieFight_15
# 157 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_18
# 158 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 159 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CelestialTower_2F_VikkieFight_Movement_17
# 160 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
CelestialTower_2F_VikkieFight_13:
# 162 "data/maps/CelestialTower_2F/scripts.pory"
	namebox CelestialTower_2F_VikkieFight_Text_2
# 163 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_VikkieFight_Text_6
# 164 "data/maps/CelestialTower_2F/scripts.pory"
	hidenamebox
# 165 "data/maps/CelestialTower_2F/scripts.pory"
	closemessage
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_19
# 167 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 168 "data/maps/CelestialTower_2F/scripts.pory"
	removeobject 4
# 169 "data/maps/CelestialTower_2F/scripts.pory"
	setflag FLAG_COPS_CELESTIAL
# 170 "data/maps/CelestialTower_2F/scripts.pory"
	setflag FLAG_VIKKIE_CELESTIAL
# 171 "data/maps/CelestialTower_2F/scripts.pory"
	setflag FLAG_SAM_CARGO
# 172 "data/maps/CelestialTower_2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 173 "data/maps/CelestialTower_2F/scripts.pory"
	setvar VAR_MAIN_STORY, 56
# 174 "data/maps/CelestialTower_2F/scripts.pory"
	completequest QUEST_VIKKIE
# 175 "data/maps/CelestialTower_2F/scripts.pory"
	setflag FLAG_QUEST_VIKKIE_COMPLETE
# 176 "data/maps/CelestialTower_2F/scripts.pory"
	release
	end

CelestialTower_2F_VikkieFight_2:
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_2
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_3
# 106 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_1

CelestialTower_2F_VikkieFight_3:
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_4
# 110 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_3
# 111 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_1

CelestialTower_2F_VikkieFight_8:
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_7
# 124 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_VikkieFight_Movement_7
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_8
# 126 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_7

CelestialTower_2F_VikkieFight_9:
# 129 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_9
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 3, CelestialTower_2F_VikkieFight_Movement_10
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 1, CelestialTower_2F_VikkieFight_Movement_11
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 2, CelestialTower_2F_VikkieFight_Movement_12
# 133 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_7

CelestialTower_2F_VikkieFight_14:
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_14
# 146 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 147 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CelestialTower_2F_VikkieFight_Movement_15
# 148 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_13

CelestialTower_2F_VikkieFight_15:
# 151 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement 4, CelestialTower_2F_VikkieFight_Movement_16
# 152 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
# 153 "data/maps/CelestialTower_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CelestialTower_2F_VikkieFight_Movement_17
# 154 "data/maps/CelestialTower_2F/scripts.pory"
	waitmovement 0
	goto CelestialTower_2F_VikkieFight_13


CelestialTower_2F_Tombstone::
# 185 "data/maps/CelestialTower_2F/scripts.pory"
	lockall
# 186 "data/maps/CelestialTower_2F/scripts.pory"
	msgbox CelestialTower_2F_Tombstone_Text_0
# 187 "data/maps/CelestialTower_2F/scripts.pory"
	releaseall
	end


# 19 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_0:
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 19 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 23 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_1:
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 23 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_2:
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 27 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
	step_end

# 35 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_3:
# 35 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 35 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 35 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 39 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_4:
# 39 "data/maps/CelestialTower_2F/scripts.pory"
	emote_exclamation_mark
# 39 "data/maps/CelestialTower_2F/scripts.pory"
	jump_in_place_left
# 39 "data/maps/CelestialTower_2F/scripts.pory"
	jump_in_place_left
	step_end

# 46 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_5:
# 46 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 46 "data/maps/CelestialTower_2F/scripts.pory"
	face_left
	step_end

# 47 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_6:
# 47 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_7:
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
# 54 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_right
	step_end

# 56 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_8:
# 56 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 56 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 56 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 56 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_9:
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 60 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
	step_end

# 64 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_Vikkie_Movement_10:
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 64 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_0:
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 92 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_1:
# 95 "data/maps/CelestialTower_2F/scripts.pory"
	jump_in_place_left
# 95 "data/maps/CelestialTower_2F/scripts.pory"
	jump_in_place_left
	step_end

# 104 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_2:
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 104 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 105 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_3:
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 105 "data/maps/CelestialTower_2F/scripts.pory"
	face_up
	step_end

# 109 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_4:
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 109 "data/maps/CelestialTower_2F/scripts.pory"
	face_down
	step_end

# 114 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_5:
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 114 "data/maps/CelestialTower_2F/scripts.pory"
	face_down
	step_end

# 115 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_6:
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 115 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 123 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_7:
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 123 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_8:
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 125 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 129 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_9:
# 129 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
# 129 "data/maps/CelestialTower_2F/scripts.pory"
	face_down
	step_end

# 130 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_10:
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 130 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 131 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_11:
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 131 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_12:
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 132 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 138 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_13:
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_down
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
# 138 "data/maps/CelestialTower_2F/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_14:
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 145 "data/maps/CelestialTower_2F/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_15:
# 147 "data/maps/CelestialTower_2F/scripts.pory"
	face_down
	step_end

# 151 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_16:
# 151 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 151 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_17:
# 153 "data/maps/CelestialTower_2F/scripts.pory"
	face_left
	step_end

# 157 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_18:
# 157 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 157 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
# 157 "data/maps/CelestialTower_2F/scripts.pory"
	walk_right
	step_end

# 166 "data/maps/CelestialTower_2F/scripts.pory"
CelestialTower_2F_VikkieFight_Movement_19:
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
# 166 "data/maps/CelestialTower_2F/scripts.pory"
	walk_fast_left
	step_end

CelestialTower_2F_Vikkie_Text_0:
# 31 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Vikkie$"

CelestialTower_2F_Vikkie_Text_1:
# 32 "data/maps/CelestialTower_2F/scripts.pory"
	.string "...Haha, nice. Antoher gold necklace.$"

CelestialTower_2F_Vikkie_Text_2:
# 43 "data/maps/CelestialTower_2F/scripts.pory"
	.string "AAAH! WHAT ARE YOU DOING HERE?$"

CelestialTower_2F_Vikkie_Text_3:
# 51 "data/maps/CelestialTower_2F/scripts.pory"
	.string "LEAVE ME ALONE! YOU WON'T CATCH ME!$"

CelestialTower_2F_VikkieFight_Text_0:
# 78 "data/maps/CelestialTower_2F/scripts.pory"
	.string "So you won't leave me alone? {PLAYER},\n"
	.string "you do not realise what you're about to\l"
	.string "do...$"

CelestialTower_2F_VikkieFight_Text_1:
# 84 "data/maps/CelestialTower_2F/scripts.pory"
	.string "...I give up. You got me,\n"
	.string "congratulations.$"

CelestialTower_2F_VikkieFight_Text_2:
# 97 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Sam$"

CelestialTower_2F_VikkieFight_Text_3:
# 98 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Quick guys! She's here!$"

CelestialTower_2F_VikkieFight_Text_4:
# 118 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Cop$"

CelestialTower_2F_VikkieFight_Text_5:
# 119 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Miss Victoria Lafont, you're under\n"
	.string "arrest for crimes against peace,\l"
	.string "burglary, and multiple counts of grave\l"
	.string "desecration. Resistance will be futile.\l"
	.string "Follow us.$"

CelestialTower_2F_VikkieFight_Text_6:
# 163 "data/maps/CelestialTower_2F/scripts.pory"
	.string "Nice, {PLAYER}! Justice is finally\n"
	.string "served! Great work. Now, if you'll excuse\l"
	.string "me, I've got a sandwich to devour.$"

CelestialTower_2F_Tombstone_Text_0:
# 186 "data/maps/CelestialTower_2F/scripts.pory"
	.string "This tombstone looks like it's been\n"
	.string "looted...$"

VikkieLast1::
# 180 "data/maps/CelestialTower_2F/scripts.pory"
	.string "...$"
