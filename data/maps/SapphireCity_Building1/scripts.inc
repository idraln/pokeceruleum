# 1 "data/maps/SapphireCity_Building1/scripts.pory"

# 2 "data/maps/SapphireCity_Building1/scripts.pory"
SapphireCity_Building1_MapScripts::
# 3 "data/maps/SapphireCity_Building1/scripts.pory"
	.byte 0

SapphireCity_Building1_Boy::
# 7 "data/maps/SapphireCity_Building1/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building1/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Building1/scripts.pory"
	msgbox SapphireCity_Building1_Boy_Text_0
# 10 "data/maps/SapphireCity_Building1/scripts.pory"
	turnobject 1, DIR_NORTH
# 11 "data/maps/SapphireCity_Building1/scripts.pory"
	release
	end


SapphireCity_Building1_Gamer::
# 16 "data/maps/SapphireCity_Building1/scripts.pory"
	lock
# 17 "data/maps/SapphireCity_Building1/scripts.pory"
	faceplayer
# 18 "data/maps/SapphireCity_Building1/scripts.pory"
	msgbox SapphireCity_Building1_Gamer_Text_0
# 19 "data/maps/SapphireCity_Building1/scripts.pory"
	release
	end


SapphireCity_Building1_Grandma::
# 24 "data/maps/SapphireCity_Building1/scripts.pory"
	lock
# 25 "data/maps/SapphireCity_Building1/scripts.pory"
	faceplayer
# 26 "data/maps/SapphireCity_Building1/scripts.pory"
	msgbox SapphireCity_Building1_Grandma_Text_0
# 27 "data/maps/SapphireCity_Building1/scripts.pory"
	release
	end


SapphireCity_Building1_Boy_Text_0:
# 9 "data/maps/SapphireCity_Building1/scripts.pory"
	.string "I'm watching PokéSurvivor! I can't wait\n"
	.string "for the 50th season!!$"

SapphireCity_Building1_Gamer_Text_0:
# 18 "data/maps/SapphireCity_Building1/scripts.pory"
	.string "I'm currently playing the game you're\n"
	.string "playing right now. How's that for a\l"
	.string "broken 4th wall, huh?$"

SapphireCity_Building1_Grandma_Text_0:
# 26 "data/maps/SapphireCity_Building1/scripts.pory"
	.string "My husband went out to buy some milk,\n"
	.string "but he hasn't come back yet. He's\l"
	.string "probably lost, again.$"
