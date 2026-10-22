# 1 "data/maps/UltramarineChannel/scripts.pory"

# 2 "data/maps/UltramarineChannel/scripts.pory"
UltramarineChannel_MapScripts::
# 3 "data/maps/UltramarineChannel/scripts.pory"
	.byte 0

UltramarineChannel_Kleo::
# 7 "data/maps/UltramarineChannel/scripts.pory"
	trainerbattle_single TRAINER_ULTRAMARINE_1, Kleo1, Kleo2
# 8 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_Kleo_Text_0
# 9 "data/maps/UltramarineChannel/scripts.pory"
	closemessage
	end


UltramarineChannel_Timeo::
# 24 "data/maps/UltramarineChannel/scripts.pory"
	lock
# 25 "data/maps/UltramarineChannel/scripts.pory"
	faceplayer
# 26 "data/maps/UltramarineChannel/scripts.pory"
	compare VAR_LOST_KID, 1
	goto_if_eq UltramarineChannel_Timeo_5
UltramarineChannel_Timeo_4:
# 31 "data/maps/UltramarineChannel/scripts.pory"
	goto_if_set FLAG_QUEST_MOTHER, UltramarineChannel_Timeo_2
# 49 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_Timeo_Text_1
# 50 "data/maps/UltramarineChannel/scripts.pory"
	release
	end

UltramarineChannel_Timeo_1:
# 27 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_Timeo_Text_0
# 28 "data/maps/UltramarineChannel/scripts.pory"
	release
	end

UltramarineChannel_Timeo_2:
# 32 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_Timeo_Text_1
# 33 "data/maps/UltramarineChannel/scripts.pory"
	closemessage
# 34 "data/maps/UltramarineChannel/scripts.pory"
	delay 20
# 35 "data/maps/UltramarineChannel/scripts.pory"
	applymovement 2, UltramarineChannel_Timeo_Movement_0
# 36 "data/maps/UltramarineChannel/scripts.pory"
	waitmovement 0
# 37 "data/maps/UltramarineChannel/scripts.pory"
	playse SE_PIN
# 38 "data/maps/UltramarineChannel/scripts.pory"
	delay 40
# 39 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_Timeo_Text_2
# 40 "data/maps/UltramarineChannel/scripts.pory"
	setfollowernpc 2, FNPC_LEAVE_ROUTE, 0, 0
# 41 "data/maps/UltramarineChannel/scripts.pory"
	setvar VAR_LOST_KID, 1
# 42 "data/maps/UltramarineChannel/scripts.pory"
	setflag FLAG_LOST_KID_ULTRAMARINE
# 43 "data/maps/UltramarineChannel/scripts.pory"
	setflag FLAG_CANT_FLY
# 44 "data/maps/UltramarineChannel/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 45 "data/maps/UltramarineChannel/scripts.pory"
	release
	end

UltramarineChannel_Timeo_5:
# 26 "data/maps/UltramarineChannel/scripts.pory"
	goto_if_set FLAG_QUEST_MOTHER, UltramarineChannel_Timeo_1
	goto UltramarineChannel_Timeo_4


UltramarineChannel_LostKidQuest::
# 56 "data/maps/UltramarineChannel/scripts.pory"
	lock
# 57 "data/maps/UltramarineChannel/scripts.pory"
	msgbox UltramarineChannel_LostKidQuest_Text_0
# 58 "data/maps/UltramarineChannel/scripts.pory"
	closemessage
# 59 "data/maps/UltramarineChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UltramarineChannel_LostKidQuest_Movement_0
# 60 "data/maps/UltramarineChannel/scripts.pory"
	waitmovement 0
# 61 "data/maps/UltramarineChannel/scripts.pory"
	release
	end


# 35 "data/maps/UltramarineChannel/scripts.pory"
UltramarineChannel_Timeo_Movement_0:
# 35 "data/maps/UltramarineChannel/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data/maps/UltramarineChannel/scripts.pory"
UltramarineChannel_LostKidQuest_Movement_0:
# 59 "data/maps/UltramarineChannel/scripts.pory"
	walk_up
# 59 "data/maps/UltramarineChannel/scripts.pory"
	walk_up
	step_end

UltramarineChannel_Kleo_Text_0:
# 8 "data/maps/UltramarineChannel/scripts.pory"
	.string "Screw it! I'm going for it, even it means\n"
	.string "that I drown. You only live once!$"

UltramarineChannel_Timeo_Text_0:
# 27 "data/maps/UltramarineChannel/scripts.pory"
	.string "I can't wait to see my mum!$"

UltramarineChannel_Timeo_Text_1:
# 32 "data/maps/UltramarineChannel/scripts.pory"
	.string "I'm lost... Please help me...$"

UltramarineChannel_Timeo_Text_2:
# 39 "data/maps/UltramarineChannel/scripts.pory"
	.string "Oh? You know my mum? Please, take me\n"
	.string "back to her! I'll grab on your Pokémon!$"

UltramarineChannel_LostKidQuest_Text_0:
# 57 "data/maps/UltramarineChannel/scripts.pory"
	.string "No! My mum isn't that way! She's in Cali!$"

Kleo1::
# 13 "data/maps/UltramarineChannel/scripts.pory"
	.string "I need to go back to Cali, but these\n"
	.string "currents scare me shitless. What should\l"
	.string "I do?$"

Kleo2::
# 17 "data/maps/UltramarineChannel/scripts.pory"
	.string "I guess I don't have choice now...$"
