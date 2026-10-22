# 1 "data/maps/PetalPass/scripts.pory"

# 2 "data/maps/PetalPass/scripts.pory"
PetalPass_MapScripts::
# 3 "data/maps/PetalPass/scripts.pory"
	.byte 0

PetalPass_Theo::
# 7 "data/maps/PetalPass/scripts.pory"
	trainerbattle_single TRAINER_PETAL_1, Theo1, Theo2
# 8 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_Theo_Text_0
# 9 "data/maps/PetalPass/scripts.pory"
	closemessage
	end


PetalPass_Clara::
# 14 "data/maps/PetalPass/scripts.pory"
	trainerbattle_single TRAINER_PETAL_2, Clara1, Clara2
# 15 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_Clara_Text_0
# 16 "data/maps/PetalPass/scripts.pory"
	closemessage
	end


PetalPass_Girl::
# 21 "data/maps/PetalPass/scripts.pory"
	lock
# 22 "data/maps/PetalPass/scripts.pory"
	faceplayer
# 23 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_Girl_Text_0
# 24 "data/maps/PetalPass/scripts.pory"
	release
	end


PetalPass_Student::
# 29 "data/maps/PetalPass/scripts.pory"
	lock
# 30 "data/maps/PetalPass/scripts.pory"
	faceplayer
# 31 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_Student_Text_0
# 32 "data/maps/PetalPass/scripts.pory"
	release
	end


PetalPass_LittleLad::
# 37 "data/maps/PetalPass/scripts.pory"
	lock
# 38 "data/maps/PetalPass/scripts.pory"
	faceplayer
# 39 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_LittleLad_Text_0
# 40 "data/maps/PetalPass/scripts.pory"
	release
	end


PetalPass_Signpost::
# 45 "data/maps/PetalPass/scripts.pory"
	lock
# 46 "data/maps/PetalPass/scripts.pory"
	faceplayer
# 47 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_Signpost_Text_0
# 48 "data/maps/PetalPass/scripts.pory"
	release
	end


PetalPass_Item::
# 53 "data/maps/PetalPass/scripts.pory"
	lock
# 54 "data/maps/PetalPass/scripts.pory"
	removeobject 7
# 55 "data/maps/PetalPass/scripts.pory"
	giveitem ITEM_TM19
# 56 "data/maps/PetalPass/scripts.pory"
	setflag FLAG_ITEM_PETAL
# 57 "data/maps/PetalPass/scripts.pory"
	release
	end


PetalPass_CantPass::
# 62 "data/maps/PetalPass/scripts.pory"
	compare VAR_MAIN_STORY, 10
	goto_if_lt PetalPass_CantPass_1
	end

PetalPass_CantPass_1:
# 63 "data/maps/PetalPass/scripts.pory"
	lock
# 64 "data/maps/PetalPass/scripts.pory"
	turnobject 6, DIR_NORTH
# 65 "data/maps/PetalPass/scripts.pory"
	msgbox PetalPass_CantPass_Text_0
# 66 "data/maps/PetalPass/scripts.pory"
	closemessage
# 67 "data/maps/PetalPass/scripts.pory"
	turnobject 6, DIR_EAST
# 68 "data/maps/PetalPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PP_CantPass
# 69 "data/maps/PetalPass/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalPass/scripts.pory"
	release
	end


# 119 "data/maps/PetalPass/scripts.pory"
PP_CantPass:
# 120 "data/maps/PetalPass/scripts.pory"
	walk_up
	step_end

PetalPass_Theo_Text_0:
# 8 "data/maps/PetalPass/scripts.pory"
	.string "I'm only at the beginning of my training.\n"
	.string "My objective is to become as strong as\l"
	.string "Koga!$"

PetalPass_Clara_Text_0:
# 15 "data/maps/PetalPass/scripts.pory"
	.string "I've almost gathered every single\n"
	.string "flower species of this road!$"

PetalPass_Girl_Text_0:
# 23 "data/maps/PetalPass/scripts.pory"
	.string "This route is my happy place. I stay\n"
	.string "here for hours watching the cute\l"
	.string "Goldeens swim.$"

PetalPass_Student_Text_0:
# 31 "data/maps/PetalPass/scripts.pory"
	.string "See this kind of sediment deposit?\n"
	.string "Where can that come from? The rocks\l"
	.string "here look like they leak fluid that\l"
	.string "explains the deposit.$"

PetalPass_LittleLad_Text_0:
# 39 "data/maps/PetalPass/scripts.pory"
	.string "I'm late for lunch! My mum is gonna kill\n"
	.string "me!!$"

PetalPass_Signpost_Text_0:
# 47 "data/maps/PetalPass/scripts.pory"
	.string "{UP_ARROW} Sapphire City\n"
	.string "{DOWN_ARROW} Cruzeira$"

PetalPass_CantPass_Text_0:
# 65 "data/maps/PetalPass/scripts.pory"
	.string "Please, don't go further! I'm almost\n"
	.string "done picking flowers! It's for an\l"
	.string "important project, just give me a few\l"
	.string "minutes!$"

Theo1::
# 103 "data/maps/PetalPass/scripts.pory"
	.string "Haha! Get ready to taste my newly\n"
	.string "acquired skills!$"

Theo2::
# 107 "data/maps/PetalPass/scripts.pory"
	.string "Well, I still have to practice my moves.$"

Clara1::
# 111 "data/maps/PetalPass/scripts.pory"
	.string "I just got accepted into Cruzeira's\n"
	.string "Botanic School! You'll be a perfect\l"
	.string "first subject of study!$"

Clara2::
# 115 "data/maps/PetalPass/scripts.pory"
	.string "Ah, very interesting! How did you do\n"
	.string "that?$"
