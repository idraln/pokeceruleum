# 1 "data/maps/Council_MainRoom/scripts.pory"

# 2 "data/maps/Council_MainRoom/scripts.pory"
Council_MainRoom_MapScripts::
# 3 "data/maps/Council_MainRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Council_MainRoom_OnFrame
# 4 "data/maps/Council_MainRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, Council_MainRoom_OnLoad
# 5 "data/maps/Council_MainRoom/scripts.pory"
	.byte 0
# 6 "data/maps/Council_MainRoom/scripts.pory"

# 7 "data/maps/Council_MainRoom/scripts.pory"
Council_MainRoom_OnFrame:
# 8 "data/maps/Council_MainRoom/scripts.pory"
    map_script_2 VAR_COUNCIL_TRIES, 1, Council_MainRoom_Arrival
# 9 "data/maps/Council_MainRoom/scripts.pory"
    .2byte 0

Council_MainRoom_OnLoad::
# 13 "data/maps/Council_MainRoom/scripts.pory"
	goto_if_set FLAG_COUNCIL_ICE, Council_MainRoom_OnLoad_4
Council_MainRoom_OnLoad_1:
# 21 "data/maps/Council_MainRoom/scripts.pory"
	compare VAR_COUNCIL_TRIES, 2
	goto_if_eq Council_MainRoom_OnLoad_10
	return

Council_MainRoom_OnLoad_2:
# 14 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 12, 1, METATILE_Rooftop_LUp, TRUE
# 15 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 12, 2, METATILE_Rooftop_LDown, TRUE
# 16 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 13, 1, METATILE_Rooftop_CUp, TRUE
# 17 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 13, 2, METATILE_Rooftop_CDown, FALSE
# 18 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 14, 1, METATILE_Rooftop_RUp, TRUE
# 19 "data/maps/Council_MainRoom/scripts.pory"
	setmetatile 14, 2, METATILE_Rooftop_RDown, TRUE
	goto Council_MainRoom_OnLoad_1

Council_MainRoom_OnLoad_3:
# 13 "data/maps/Council_MainRoom/scripts.pory"
	goto_if_set FLAG_COUNCIL_FIRE, Council_MainRoom_OnLoad_7
	goto Council_MainRoom_OnLoad_1

Council_MainRoom_OnLoad_4:
# 13 "data/maps/Council_MainRoom/scripts.pory"
	goto_if_set FLAG_COUNCIL_ROCK, Council_MainRoom_OnLoad_3
	goto Council_MainRoom_OnLoad_1

Council_MainRoom_OnLoad_7:
# 13 "data/maps/Council_MainRoom/scripts.pory"
	goto_if_set FLAG_COUNCIL_FIGHT, Council_MainRoom_OnLoad_2
	goto Council_MainRoom_OnLoad_1

Council_MainRoom_OnLoad_10:
# 22 "data/maps/Council_MainRoom/scripts.pory"
	setobjectxyperm 1, 13, 13
	return


Council_MainRoom_Arrival::
# 27 "data/maps/Council_MainRoom/scripts.pory"
	lock
# 28 "data/maps/Council_MainRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Council_MainRoom_Arrival_Movement_0
# 29 "data/maps/Council_MainRoom/scripts.pory"
	waitmovement 0
# 30 "data/maps/Council_MainRoom/scripts.pory"
	applymovement 1, Council_MainRoom_Arrival_Movement_1
# 31 "data/maps/Council_MainRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/Council_MainRoom/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 2
# 33 "data/maps/Council_MainRoom/scripts.pory"
	release
	end


Council_MainRoom_Employee::
# 38 "data/maps/Council_MainRoom/scripts.pory"
	lock
# 39 "data/maps/Council_MainRoom/scripts.pory"
	faceplayer
# 40 "data/maps/Council_MainRoom/scripts.pory"
	namebox Council_MainRoom_Employee_Text_0
# 41 "data/maps/Council_MainRoom/scripts.pory"
	msgbox Council_MainRoom_Employee_Text_1
# 42 "data/maps/Council_MainRoom/scripts.pory"
	closemessage
# 43 "data/maps/Council_MainRoom/scripts.pory"
	hidenamebox
# 44 "data/maps/Council_MainRoom/scripts.pory"
	turnobject 1, DIR_NORTH
# 45 "data/maps/Council_MainRoom/scripts.pory"
	release
	end


# 28 "data/maps/Council_MainRoom/scripts.pory"
Council_MainRoom_Arrival_Movement_0:
# 28 "data/maps/Council_MainRoom/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/Council_MainRoom/scripts.pory"
Council_MainRoom_Arrival_Movement_1:
# 30 "data/maps/Council_MainRoom/scripts.pory"
	walk_left
# 30 "data/maps/Council_MainRoom/scripts.pory"
	face_up
	step_end

Council_MainRoom_Employee_Text_0:
# 40 "data/maps/Council_MainRoom/scripts.pory"
	.string "Bernard$"

Council_MainRoom_Employee_Text_1:
# 41 "data/maps/Council_MainRoom/scripts.pory"
	.string "No, {PLAYER}! Now is not the time to\n"
	.string "go back!$"
