# 1 "data/maps/Frux_House1/scripts.pory"

# 2 "data/maps/Frux_House1/scripts.pory"
Frux_House1_MapScripts::
# 3 "data/maps/Frux_House1/scripts.pory"
	.byte 0

Frux_House1_Worker::
# 7 "data/maps/Frux_House1/scripts.pory"
	lock
# 8 "data/maps/Frux_House1/scripts.pory"
	faceplayer
# 9 "data/maps/Frux_House1/scripts.pory"
	msgbox Frux_House1_Worker_Text_0
# 10 "data/maps/Frux_House1/scripts.pory"
	waitmessage
# 11 "data/maps/Frux_House1/scripts.pory"
	pokemart FruxHouse1
# 12 "data/maps/Frux_House1/scripts.pory"
	msgbox Frux_House1_Worker_Text_1
# 13 "data/maps/Frux_House1/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/Frux_House1/scripts.pory"
FruxHouse1:
# 18 "data/maps/Frux_House1/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 19 "data/maps/Frux_House1/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 20 "data/maps/Frux_House1/scripts.pory"
	.2byte ITEM_MOON_STONE
# 21 "data/maps/Frux_House1/scripts.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

Frux_House1_Worker_Text_0:
# 9 "data/maps/Frux_House1/scripts.pory"
	.string "I've got my hands on loads of hidden\n"
	.string "treasures in the Ironair. Wanna take a\l"
	.string "look?$"

Frux_House1_Worker_Text_1:
# 12 "data/maps/Frux_House1/scripts.pory"
	.string "Come back when you need something\n"
	.string "else.$"
