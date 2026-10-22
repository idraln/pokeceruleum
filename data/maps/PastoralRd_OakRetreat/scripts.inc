# 1 "data/maps/PastoralRd_OakRetreat/scripts.pory"

# 2 "data/maps/PastoralRd_OakRetreat/scripts.pory"
PastoralRd_OakRetreat_MapScripts::
# 3 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.byte 0

PastoralRd_OakRetreat_Isaiah::
# 7 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	trainerbattle_single TRAINER_OAKRETREAT, Isaiah1, Isaiah2
# 8 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	msgbox PastoralRd_OakRetreat_Isaiah_Text_0
# 9 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	closemessage
	end


PastoralRd_OakRetreat_Scientist::
# 22 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	lock
# 23 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	faceplayer
# 24 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	msgbox PastoralRd_OakRetreat_Scientist_Text_0
# 25 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	closemessage
# 26 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	turnobject 2, DIR_NORTH
# 27 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	delay 20
# 28 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	msgbox PastoralRd_OakRetreat_Scientist_Text_1
# 29 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	release
	end


PastoralRd_OakRetreat_BugCatcher::
# 34 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	lock
# 35 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	faceplayer
# 36 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	msgbox PastoralRd_OakRetreat_BugCatcher_Text_0
# 37 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	release
	end


PastoralRd_OakRetreat_Item::
# 42 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	lock
# 43 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	removeobject 4
# 44 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	giveitem ITEM_TM47
# 45 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	setflag FLAG_ITEM_RETREAT
# 46 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	release
	end


PastoralRd_OakRetreat_Isaiah_Text_0:
# 8 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "This place is literally heaven on earth!$"

PastoralRd_OakRetreat_Scientist_Text_0:
# 24 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "See this species right in front of me?$"

PastoralRd_OakRetreat_Scientist_Text_1:
# 28 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "It's endemic to this cave. That means,\n"
	.string "we can only find this specific kind of\l"
	.string "flower right here, and nowhere else.\l"
	.string "Fascinating, isn't it?$"

PastoralRd_OakRetreat_BugCatcher_Text_0:
# 36 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "I'm overwhelmed! There's so much to look\n"
	.string "at!$"

Isaiah1::
# 13 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "Check this out! Freshly caught!$"

Isaiah2::
# 17 "data/maps/PastoralRd_OakRetreat/scripts.pory"
	.string "Wooo! They're so cool!$"
