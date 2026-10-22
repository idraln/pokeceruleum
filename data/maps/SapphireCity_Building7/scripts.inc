# 1 "data/maps/SapphireCity_Building7/scripts.pory"

# 2 "data/maps/SapphireCity_Building7/scripts.pory"
SapphireCity_Building7_MapScripts::
# 3 "data/maps/SapphireCity_Building7/scripts.pory"
	.byte 0

SapphireCity_Building7_Creep::
# 7 "data/maps/SapphireCity_Building7/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building7/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Building7/scripts.pory"
	msgbox SapphireCity_Building7_Creep_Text_0
# 10 "data/maps/SapphireCity_Building7/scripts.pory"
	release
	end


SapphireCity_Building7_Beauty::
# 15 "data/maps/SapphireCity_Building7/scripts.pory"
	lock
# 16 "data/maps/SapphireCity_Building7/scripts.pory"
	faceplayer
# 17 "data/maps/SapphireCity_Building7/scripts.pory"
	msgbox SapphireCity_Building7_Beauty_Text_0
# 18 "data/maps/SapphireCity_Building7/scripts.pory"
	release
	end


SapphireCity_Building7_Old::
# 23 "data/maps/SapphireCity_Building7/scripts.pory"
	lock
# 24 "data/maps/SapphireCity_Building7/scripts.pory"
	faceplayer
# 25 "data/maps/SapphireCity_Building7/scripts.pory"
	msgbox SapphireCity_Building7_Old_Text_0
# 26 "data/maps/SapphireCity_Building7/scripts.pory"
	turnobject 2, DIR_NORTH
# 27 "data/maps/SapphireCity_Building7/scripts.pory"
	release
	end


SapphireCity_Building7_Woman::
# 32 "data/maps/SapphireCity_Building7/scripts.pory"
	lock
# 33 "data/maps/SapphireCity_Building7/scripts.pory"
	msgbox SapphireCity_Building7_Woman_Text_0
# 34 "data/maps/SapphireCity_Building7/scripts.pory"
	release
	end


SapphireCity_Building7_Creep_Text_0:
# 9 "data/maps/SapphireCity_Building7/scripts.pory"
	.string "Haha, jackpot! You see the babe by the\n"
	.string "table? She's my roommate! I can totally\l"
	.string "see ourselves having a thing.$"

SapphireCity_Building7_Beauty_Text_0:
# 17 "data/maps/SapphireCity_Building7/scripts.pory"
	.string "I knew I should've limited my ad to\n"
	.string "'girls only'. Now I'm having to deal with\l"
	.string "this tool!$"

SapphireCity_Building7_Old_Text_0:
# 25 "data/maps/SapphireCity_Building7/scripts.pory"
	.string "Shoo kid, I'm watching the 13226th\n"
	.string "episode of The Young and the Restless!$"

SapphireCity_Building7_Woman_Text_0:
# 33 "data/maps/SapphireCity_Building7/scripts.pory"
	.string "...So, if I buy canned food instead of\n"
	.string "fresh vegetables this month, I can\l"
	.string "afford pay to rent, and barely be\l"
	.string "overdraft. Yeah... What a life...$"
