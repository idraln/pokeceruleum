# 1 "data/maps/SapphireCity_Building6/scripts.pory"

# 2 "data/maps/SapphireCity_Building6/scripts.pory"
SapphireCity_Building6_MapScripts::
# 3 "data/maps/SapphireCity_Building6/scripts.pory"
	.byte 0

SapphireCity_Building6_Girl::
# 7 "data/maps/SapphireCity_Building6/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building6/scripts.pory"
	msgbox SapphireCity_Building6_Girl_Text_0
# 9 "data/maps/SapphireCity_Building6/scripts.pory"
	release
	end


SapphireCity_Building6_Old::
# 14 "data/maps/SapphireCity_Building6/scripts.pory"
	lock
# 15 "data/maps/SapphireCity_Building6/scripts.pory"
	msgbox SapphireCity_Building6_Old_Text_0
# 16 "data/maps/SapphireCity_Building6/scripts.pory"
	release
	end


SapphireCity_Building6_Boy::
# 21 "data/maps/SapphireCity_Building6/scripts.pory"
	lock
# 22 "data/maps/SapphireCity_Building6/scripts.pory"
	faceplayer
# 23 "data/maps/SapphireCity_Building6/scripts.pory"
	msgbox SapphireCity_Building6_Boy_Text_0
# 24 "data/maps/SapphireCity_Building6/scripts.pory"
	release
	end


SapphireCity_Building6_Girl_Text_0:
# 8 "data/maps/SapphireCity_Building6/scripts.pory"
	.string "I'm working until 11pm today??? What\n"
	.string "the hell?$"

SapphireCity_Building6_Old_Text_0:
# 15 "data/maps/SapphireCity_Building6/scripts.pory"
	.string "...Zzzz...Zzzz...$"

SapphireCity_Building6_Boy_Text_0:
# 23 "data/maps/SapphireCity_Building6/scripts.pory"
	.string "I'm hiding because I don't want to go to\n"
	.string "school! Go away, you'll blow my cover!$"
