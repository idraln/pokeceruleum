# 1 "data/maps/SapphireCity_Shop2F/scripts.pory"

# 2 "data/maps/SapphireCity_Shop2F/scripts.pory"
SapphireCity_Shop2F_MapScripts::
# 3 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.byte 0

SapphireCity_Shop2F_ShyNerd::
# 7 "data/maps/SapphireCity_Shop2F/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_ShyNerd_Text_0
# 9 "data/maps/SapphireCity_Shop2F/scripts.pory"
	release
	end


SapphireCity_Shop2F_Dad::
# 14 "data/maps/SapphireCity_Shop2F/scripts.pory"
	lock
# 15 "data/maps/SapphireCity_Shop2F/scripts.pory"
	faceplayer
# 16 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_Dad_Text_0
# 17 "data/maps/SapphireCity_Shop2F/scripts.pory"
	closemessage
# 18 "data/maps/SapphireCity_Shop2F/scripts.pory"
	delay 20
# 19 "data/maps/SapphireCity_Shop2F/scripts.pory"
	applymovement 4, SapphireCity_Shop2F_Dad_Movement_0
# 20 "data/maps/SapphireCity_Shop2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_Dad_Text_1
# 22 "data/maps/SapphireCity_Shop2F/scripts.pory"
	release
	end


SapphireCity_Shop2F_KidG::
# 27 "data/maps/SapphireCity_Shop2F/scripts.pory"
	lock
# 28 "data/maps/SapphireCity_Shop2F/scripts.pory"
	faceplayer
# 29 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_KidG_Text_0
# 30 "data/maps/SapphireCity_Shop2F/scripts.pory"
	release
	end


SapphireCity_Shop2F_KidB::
# 35 "data/maps/SapphireCity_Shop2F/scripts.pory"
	lock
# 36 "data/maps/SapphireCity_Shop2F/scripts.pory"
	faceplayer
# 37 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_KidB_Text_0
# 38 "data/maps/SapphireCity_Shop2F/scripts.pory"
	release
	end


SapphireCity_Shop2F_Tired::
# 43 "data/maps/SapphireCity_Shop2F/scripts.pory"
	lock
# 44 "data/maps/SapphireCity_Shop2F/scripts.pory"
	faceplayer
# 45 "data/maps/SapphireCity_Shop2F/scripts.pory"
	msgbox SapphireCity_Shop2F_Tired_Text_0
# 46 "data/maps/SapphireCity_Shop2F/scripts.pory"
	release
	end


# 19 "data/maps/SapphireCity_Shop2F/scripts.pory"
SapphireCity_Shop2F_Dad_Movement_0:
# 19 "data/maps/SapphireCity_Shop2F/scripts.pory"
	jump_in_place_right
# 19 "data/maps/SapphireCity_Shop2F/scripts.pory"
	jump_in_place_right
	step_end

SapphireCity_Shop2F_ShyNerd_Text_0:
# 8 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "I'm dying to go there and play with the\n"
	.string "others, but I'm too shy to speak to\l"
	.string "people.$"

SapphireCity_Shop2F_Dad_Text_0:
# 16 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "Hell, how exhausting it is to have twins!\n"
	.string "This one's been running non-stop for\l"
	.string "over 10 minutes, and the other one\l"
	.string "keeps leaning over the ledge.$"

SapphireCity_Shop2F_Dad_Text_1:
# 21 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "KEVIN! Come back here! You'll hurt\n"
	.string "yourself!$"

SapphireCity_Shop2F_KidG_Text_0:
# 29 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "Haha! Hahahah! Hahaha!$"

SapphireCity_Shop2F_KidB_Text_0:
# 37 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "Everyone is so small from up here! This\n"
	.string "is so fun!$"

SapphireCity_Shop2F_Tired_Text_0:
# 45 "data/maps/SapphireCity_Shop2F/scripts.pory"
	.string "Man, I only went up a flight of stairs,\n"
	.string "and I'm already out of breath. I really\l"
	.string "need to work out more.$"
