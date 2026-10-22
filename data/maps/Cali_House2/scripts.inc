# 1 "data/maps/Cali_House2/scripts.pory"

# 2 "data/maps/Cali_House2/scripts.pory"
Cali_House2_MapScripts::
# 3 "data/maps/Cali_House2/scripts.pory"
	.byte 0

Cali_House2_Fisherman::
# 7 "data/maps/Cali_House2/scripts.pory"
	lock
# 8 "data/maps/Cali_House2/scripts.pory"
	faceplayer
# 9 "data/maps/Cali_House2/scripts.pory"
	msgbox Cali_House2_Fisherman_Text_0
# 10 "data/maps/Cali_House2/scripts.pory"
	turnobject 1, DIR_NORTH
# 11 "data/maps/Cali_House2/scripts.pory"
	release
	end


Cali_House2_Fisherman_Text_0:
# 9 "data/maps/Cali_House2/scripts.pory"
	.string "This one will do. It's a Finneon: not\n"
	.string "very tasty, not that big, but it's the\l"
	.string "only one I managed to catch. I caught\l"
	.string "it in Unova, since we can't catch\l"
	.string "anything here nowadays.$"
