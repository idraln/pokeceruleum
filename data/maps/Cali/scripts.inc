# 1 "data/maps/Cali/scripts.pory"

# 2 "data/maps/Cali/scripts.pory"
Cali_MapScripts::
# 3 "data/maps/Cali/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Cali_OnTransition
# 4 "data/maps/Cali/scripts.pory"
	.byte 0

Cali_OnTransition::
# 8 "data/maps/Cali/scripts.pory"
	setflag FLAG_VISITED_CALI
	return


Cali_Sailor::
# 12 "data/maps/Cali/scripts.pory"
	lock
# 13 "data/maps/Cali/scripts.pory"
	faceplayer
# 14 "data/maps/Cali/scripts.pory"
	msgbox Cali_Sailor_Text_0
# 15 "data/maps/Cali/scripts.pory"
	turnobject 1, DIR_WEST
# 16 "data/maps/Cali/scripts.pory"
	release
	end


Cali_Fisherman::
# 21 "data/maps/Cali/scripts.pory"
	lock
# 22 "data/maps/Cali/scripts.pory"
	faceplayer
# 23 "data/maps/Cali/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq Cali_Fisherman_2
# 27 "data/maps/Cali/scripts.pory"
	msgbox Cali_Fisherman_Text_1
Cali_Fisherman_1:
# 29 "data/maps/Cali/scripts.pory"
	turnobject 2, DIR_SOUTH
# 30 "data/maps/Cali/scripts.pory"
	release
	end

Cali_Fisherman_2:
# 24 "data/maps/Cali/scripts.pory"
	msgbox Cali_Fisherman_Text_0
	goto Cali_Fisherman_1


Cali_NoEnter::
# 35 "data/maps/Cali/scripts.pory"
	lock
# 36 "data/maps/Cali/scripts.pory"
	compare VAR_MAIN_STORY, 13
	goto_if_lt Cali_NoEnter_2
Cali_NoEnter_1:
# 42 "data/maps/Cali/scripts.pory"
	release
	end

Cali_NoEnter_2:
# 37 "data/maps/Cali/scripts.pory"
	msgbox Cali_NoEnter_Text_0
# 38 "data/maps/Cali/scripts.pory"
	closemessage
# 39 "data/maps/Cali/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Cali_NoEnter_Movement_0
# 40 "data/maps/Cali/scripts.pory"
	waitmovement 0
	goto Cali_NoEnter_1


Cali_Sign::
# 47 "data/maps/Cali/scripts.pory"
	lockall
# 48 "data/maps/Cali/scripts.pory"
	msgbox Cali_Sign_Text_0
# 49 "data/maps/Cali/scripts.pory"
	releaseall
	end


Cali_WorriedMother::
# 54 "data/maps/Cali/scripts.pory"
	lock
# 55 "data/maps/Cali/scripts.pory"
	faceplayer
# 56 "data/maps/Cali/scripts.pory"
	goto_if_set FLAG_QUEST_MOTHER, Cali_WorriedMother_1
# 86 "data/maps/Cali/scripts.pory"
	msgbox Cali_WorriedMother_Text_2
# 87 "data/maps/Cali/scripts.pory"
	startquest QUEST_MOTHER
# 88 "data/maps/Cali/scripts.pory"
	setflag FLAG_QUEST_MOTHER
# 89 "data/maps/Cali/scripts.pory"
	setvar VAR_LOST_KID, 0
# 90 "data/maps/Cali/scripts.pory"
	release
	end

Cali_WorriedMother_1:
# 57 "data/maps/Cali/scripts.pory"
	compare VAR_LOST_KID, 0
	goto_if_eq Cali_WorriedMother_4
# 63 "data/maps/Cali/scripts.pory"
	applymovement 3, Cali_WorriedMother_Movement_0
# 64 "data/maps/Cali/scripts.pory"
	waitmovement 0
# 65 "data/maps/Cali/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Cali/scripts.pory"
	delay 40
# 67 "data/maps/Cali/scripts.pory"
	msgbox Cali_WorriedMother_Text_1
# 68 "data/maps/Cali/scripts.pory"
	closemessage
# 69 "data/maps/Cali/scripts.pory"
	giveitem ITEM_BIG_NUGGET
# 70 "data/maps/Cali/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Cali/scripts.pory"
	removeobject 3
# 72 "data/maps/Cali/scripts.pory"
	removeobject 4
# 73 "data/maps/Cali/scripts.pory"
	setflag FLAG_WORRIED_MOTHER
# 74 "data/maps/Cali/scripts.pory"
	setflag FLAG_CALI_KID
# 75 "data/maps/Cali/scripts.pory"
	delay 20
# 76 "data/maps/Cali/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/Cali/scripts.pory"
	completequest QUEST_MOTHER
# 78 "data/maps/Cali/scripts.pory"
	setflag FLAG_QUEST_MOTHER_COMPLETE
# 79 "data/maps/Cali/scripts.pory"
	clearflag FLAG_CANT_FLY
# 80 "data/maps/Cali/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/Cali/scripts.pory"
	release
	end

Cali_WorriedMother_4:
# 58 "data/maps/Cali/scripts.pory"
	msgbox Cali_WorriedMother_Text_0
# 59 "data/maps/Cali/scripts.pory"
	release
	end


Cali_LostKid::
# 96 "data/maps/Cali/scripts.pory"
	compare VAR_LOST_KID, 1
	goto_if_eq Cali_LostKid_1
	end

Cali_LostKid_1:
# 97 "data/maps/Cali/scripts.pory"
	lock
# 98 "data/maps/Cali/scripts.pory"
	msgbox Cali_LostKid_Text_0
# 99 "data/maps/Cali/scripts.pory"
	closemessage
# 100 "data/maps/Cali/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Cali/scripts.pory"
	destroyfollowernpc
# 102 "data/maps/Cali/scripts.pory"
	clearflag FLAG_CALI_KID
# 103 "data/maps/Cali/scripts.pory"
	addobject 4
# 104 "data/maps/Cali/scripts.pory"
	delay 20
# 105 "data/maps/Cali/scripts.pory"
	turnobject 3, DIR_WEST
# 106 "data/maps/Cali/scripts.pory"
	setvar VAR_LOST_KID, 2
# 107 "data/maps/Cali/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 108 "data/maps/Cali/scripts.pory"
	release
	end


Cali_FoundKid::
# 117 "data/maps/Cali/scripts.pory"
	lock
# 118 "data/maps/Cali/scripts.pory"
	faceplayer
# 119 "data/maps/Cali/scripts.pory"
	msgbox Cali_FoundKid_Text_0
# 120 "data/maps/Cali/scripts.pory"
	closemessage
# 121 "data/maps/Cali/scripts.pory"
	turnobject 4, DIR_EAST
# 122 "data/maps/Cali/scripts.pory"
	release
	end


# 39 "data/maps/Cali/scripts.pory"
Cali_NoEnter_Movement_0:
# 39 "data/maps/Cali/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/Cali/scripts.pory"
Cali_WorriedMother_Movement_0:
# 63 "data/maps/Cali/scripts.pory"
	emote_exclamation_mark
	step_end

Cali_Sailor_Text_0:
# 14 "data/maps/Cali/scripts.pory"
	.string "How old do you think this wreck is? Do\n"
	.string "you reckon it could be from a hundred\l"
	.string "years ago?$"

Cali_Fisherman_Text_0:
# 24 "data/maps/Cali/scripts.pory"
	.string "Good news! Things are back to normal!\n"
	.string "It was just an empty phase! I think?$"

Cali_Fisherman_Text_1:
# 27 "data/maps/Cali/scripts.pory"
	.string "I don't understand... It's like all the\n"
	.string "fish have decided to go on holiday at\l"
	.string "the same time... I didn't catch a single\l"
	.string "one for almost a week now...$"

Cali_NoEnter_Text_0:
# 37 "data/maps/Cali/scripts.pory"
	.string "The door is closed.$"

Cali_Sign_Text_0:
# 48 "data/maps/Cali/scripts.pory"
	.string "Cali\n"
	.string "Also known as the Fishermen's Haven.$"

Cali_WorriedMother_Text_0:
# 58 "data/maps/Cali/scripts.pory"
	.string "Have you found my kid yet? Please! I\n"
	.string "fear he's going to drown!$"

Cali_WorriedMother_Text_1:
# 67 "data/maps/Cali/scripts.pory"
	.string "My kid! You found him! Thank you so\n"
	.string "much! Please, accept this gift!$"

Cali_WorriedMother_Text_2:
# 86 "data/maps/Cali/scripts.pory"
	.string "My child! My child! He's drifted away and\n"
	.string "I can't get to him! I don't have the\l"
	.string "emblems to Surf! Please, help me!$"

Cali_LostKid_Text_0:
# 98 "data/maps/Cali/scripts.pory"
	.string "MUMMY!!$"

Cali_FoundKid_Text_0:
# 119 "data/maps/Cali/scripts.pory"
	.string "Thank you so much!$"
