# 1 "data/maps/Ohulinn_House2/scripts.pory"

# 2 "data/maps/Ohulinn_House2/scripts.pory"
Ohulinn_House2_MapScripts::
# 3 "data/maps/Ohulinn_House2/scripts.pory"
	.byte 0

Ohulinn_House2_Old::
# 7 "data/maps/Ohulinn_House2/scripts.pory"
	lock
# 8 "data/maps/Ohulinn_House2/scripts.pory"
	faceplayer
# 9 "data/maps/Ohulinn_House2/scripts.pory"
	msgbox Ohulinn_House2_Old_Text_0
# 10 "data/maps/Ohulinn_House2/scripts.pory"
	turnobject 1, DIR_NORTH
# 11 "data/maps/Ohulinn_House2/scripts.pory"
	release
	end


Ohulinn_House2_Old_Text_0:
# 9 "data/maps/Ohulinn_House2/scripts.pory"
	.string "What a beautiful day... Cherish every\n"
	.string "moment you live, young one. Life'll be\l"
	.string "over way sooner than you would expect.$"
