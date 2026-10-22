# 1 "data/maps/Ohulinn_House1/scripts.pory"

# 2 "data/maps/Ohulinn_House1/scripts.pory"
Ohulinn_House1_MapScripts::
# 3 "data/maps/Ohulinn_House1/scripts.pory"
	.byte 0

Ohulinn_House1_Man::
# 7 "data/maps/Ohulinn_House1/scripts.pory"
	lock
# 8 "data/maps/Ohulinn_House1/scripts.pory"
	faceplayer
# 9 "data/maps/Ohulinn_House1/scripts.pory"
	msgbox Ohulinn_House1_Man_Text_0
# 10 "data/maps/Ohulinn_House1/scripts.pory"
	turnobject 1, DIR_NORTH
# 11 "data/maps/Ohulinn_House1/scripts.pory"
	release
	end


Ohulinn_House1_Man_Text_0:
# 9 "data/maps/Ohulinn_House1/scripts.pory"
	.string "How does he do that? I mean, why does\n"
	.string "he put the sugar first and then the\l"
	.string "water? I don't get those cooking shows.$"
