# 1 "data/maps/CouncilHQ_President/scripts.pory"

# 2 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_MapScripts::
# 3 "data/maps/CouncilHQ_President/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CouncilHQ_President_OnFrame
# 4 "data/maps/CouncilHQ_President/scripts.pory"
	.byte 0
# 5 "data/maps/CouncilHQ_President/scripts.pory"

# 6 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_OnFrame:
# 7 "data/maps/CouncilHQ_President/scripts.pory"
    map_script_2 VAR_HALL_OF_FAME, 0, CouncilHQ_President_End
# 8 "data/maps/CouncilHQ_President/scripts.pory"
    .2byte 0

CouncilHQ_President_End::
# 12 "data/maps/CouncilHQ_President/scripts.pory"
	lock
# 13 "data/maps/CouncilHQ_President/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_eq CouncilHQ_President_End_1
# 62 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_President_End_Movement_4
# 64 "data/maps/CouncilHQ_President/scripts.pory"
	waitmovement 0
# 65 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 66 "data/maps/CouncilHQ_President/scripts.pory"
	special SetChampionSaveWarp
# 67 "data/maps/CouncilHQ_President/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 68 "data/maps/CouncilHQ_President/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 69 "data/maps/CouncilHQ_President/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 70 "data/maps/CouncilHQ_President/scripts.pory"
	delay 40
# 71 "data/maps/CouncilHQ_President/scripts.pory"
	setrespawn HEAL_LOCATION_SAPPHIRE_CITY
# 72 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_TEMP_0, 1
# 73 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 74 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 75 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 76 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 77 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 78 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_HALL_OF_FAME, 1
# 79 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 80 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 81 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 82 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 83 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_PRESIDENT, 1
# 84 "data/maps/CouncilHQ_President/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 85 "data/maps/CouncilHQ_President/scripts.pory"
	special GameClear
# 86 "data/maps/CouncilHQ_President/scripts.pory"
	waitstate
# 87 "data/maps/CouncilHQ_President/scripts.pory"
	release
	end

CouncilHQ_President_End_1:
# 14 "data/maps/CouncilHQ_President/scripts.pory"
	namebox CouncilHQ_President_End_Text_0
# 15 "data/maps/CouncilHQ_President/scripts.pory"
	msgbox CouncilHQ_President_End_Text_1
# 16 "data/maps/CouncilHQ_President/scripts.pory"
	closemessage
# 17 "data/maps/CouncilHQ_President/scripts.pory"
	hidenamebox
# 18 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	applymovement 1, CouncilHQ_President_End_Movement_0
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_President_End_Movement_1
# 21 "data/maps/CouncilHQ_President/scripts.pory"
	waitmovement 0
# 22 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 23 "data/maps/CouncilHQ_President/scripts.pory"
	namebox CouncilHQ_President_End_Text_0
# 24 "data/maps/CouncilHQ_President/scripts.pory"
	msgbox CouncilHQ_President_End_Text_2
# 25 "data/maps/CouncilHQ_President/scripts.pory"
	closemessage
# 26 "data/maps/CouncilHQ_President/scripts.pory"
	hidenamebox
# 27 "data/maps/CouncilHQ_President/scripts.pory"
	applymovement 1, CouncilHQ_President_End_Movement_2
# 28 "data/maps/CouncilHQ_President/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_President_End_Movement_3
# 29 "data/maps/CouncilHQ_President/scripts.pory"
	waitmovement 0
# 30 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 31 "data/maps/CouncilHQ_President/scripts.pory"
	msgbox CouncilHQ_President_End_Text_3
# 32 "data/maps/CouncilHQ_President/scripts.pory"
	closemessage
# 33 "data/maps/CouncilHQ_President/scripts.pory"
	delay 20
# 34 "data/maps/CouncilHQ_President/scripts.pory"
	special SetChampionSaveWarp
# 35 "data/maps/CouncilHQ_President/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 36 "data/maps/CouncilHQ_President/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 37 "data/maps/CouncilHQ_President/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 38 "data/maps/CouncilHQ_President/scripts.pory"
	delay 40
# 39 "data/maps/CouncilHQ_President/scripts.pory"
	setrespawn HEAL_LOCATION_SAPPHIRE_CITY
# 40 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_TEMP_0, 1
# 41 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 42 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 43 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 44 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 45 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 46 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_HALL_OF_FAME, 1
# 47 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 48 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 49 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 50 "data/maps/CouncilHQ_President/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 51 "data/maps/CouncilHQ_President/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_eq CouncilHQ_President_End_5
CouncilHQ_President_End_4:
# 54 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_PRESIDENT, 1
# 55 "data/maps/CouncilHQ_President/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 56 "data/maps/CouncilHQ_President/scripts.pory"
	special GameClear
# 57 "data/maps/CouncilHQ_President/scripts.pory"
	waitstate
# 58 "data/maps/CouncilHQ_President/scripts.pory"
	release
	end

CouncilHQ_President_End_5:
# 52 "data/maps/CouncilHQ_President/scripts.pory"
	setvar VAR_MAIN_STORY, 43
	goto CouncilHQ_President_End_4


# 19 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_End_Movement_0:
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 19 "data/maps/CouncilHQ_President/scripts.pory"
	face_down
	step_end

# 20 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_End_Movement_1:
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 20 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_End_Movement_2:
# 27 "data/maps/CouncilHQ_President/scripts.pory"
	walk_left
# 27 "data/maps/CouncilHQ_President/scripts.pory"
	face_right
	step_end

# 28 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_End_Movement_3:
# 28 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/CouncilHQ_President/scripts.pory"
CouncilHQ_President_End_Movement_4:
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
# 63 "data/maps/CouncilHQ_President/scripts.pory"
	walk_up
	step_end

CouncilHQ_President_End_Text_0:
# 14 "data/maps/CouncilHQ_President/scripts.pory"
	.string "Bernard$"

CouncilHQ_President_End_Text_1:
# 15 "data/maps/CouncilHQ_President/scripts.pory"
	.string "Only a few steps left before you become\n"
	.string "the President. Follow me.$"

CouncilHQ_President_End_Text_2:
# 24 "data/maps/CouncilHQ_President/scripts.pory"
	.string "There we are. Please, walk in.$"

CouncilHQ_President_End_Text_3:
# 31 "data/maps/CouncilHQ_President/scripts.pory"
	.string "...$"
