# 1 "data/maps/MistraltonCity_House2/scripts.pory"

# 2 "data/maps/MistraltonCity_House2/scripts.pory"
MistraltonCity_House2_MapScripts::
# 3 "data/maps/MistraltonCity_House2/scripts.pory"
	.byte 0

MistraltonCity_House2_Maniac::
# 7 "data/maps/MistraltonCity_House2/scripts.pory"
	lock
# 8 "data/maps/MistraltonCity_House2/scripts.pory"
	faceplayer
# 9 "data/maps/MistraltonCity_House2/scripts.pory"
	msgbox MistraltonCity_House2_Maniac_Text_0
# 10 "data/maps/MistraltonCity_House2/scripts.pory"
	closemessage
# 11 "data/maps/MistraltonCity_House2/scripts.pory"
	turnobject 1, DIR_NORTH
# 12 "data/maps/MistraltonCity_House2/scripts.pory"
	release
	end


MistraltonCity_House2_TV::
# 17 "data/maps/MistraltonCity_House2/scripts.pory"
	lock
# 18 "data/maps/MistraltonCity_House2/scripts.pory"
	applymovement 1, MistraltonCity_House2_TV_Movement_0
# 19 "data/maps/MistraltonCity_House2/scripts.pory"
	waitmovement 0
# 20 "data/maps/MistraltonCity_House2/scripts.pory"
	msgbox MistraltonCity_House2_TV_Text_0
# 21 "data/maps/MistraltonCity_House2/scripts.pory"
	closemessage
# 22 "data/maps/MistraltonCity_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MistraltonCity_House2_TV_Movement_1
# 23 "data/maps/MistraltonCity_House2/scripts.pory"
	waitmovement 0
# 24 "data/maps/MistraltonCity_House2/scripts.pory"
	release
	end


# 18 "data/maps/MistraltonCity_House2/scripts.pory"
MistraltonCity_House2_TV_Movement_0:
# 18 "data/maps/MistraltonCity_House2/scripts.pory"
	jump_in_place_up
# 18 "data/maps/MistraltonCity_House2/scripts.pory"
	jump_in_place_up
	step_end

# 22 "data/maps/MistraltonCity_House2/scripts.pory"
MistraltonCity_House2_TV_Movement_1:
# 22 "data/maps/MistraltonCity_House2/scripts.pory"
	walk_right
	step_end

MistraltonCity_House2_Maniac_Text_0:
# 9 "data/maps/MistraltonCity_House2/scripts.pory"
	.string "I'm watching Prof. Oak's TV Show... I'm\n"
	.string "learning so much...$"

MistraltonCity_House2_TV_Text_0:
# 20 "data/maps/MistraltonCity_House2/scripts.pory"
	.string "Hey! I can't see a thing, MOVE!$"
