# 1 "data/maps/Oparque/scripts.pory"

# 2 "data/maps/Oparque/scripts.pory"
Oparque_MapScripts::
# 3 "data/maps/Oparque/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Oparque_OnTransition
# 4 "data/maps/Oparque/scripts.pory"
	.byte 0

Oparque_OnTransition::
# 8 "data/maps/Oparque/scripts.pory"
	setflag FLAG_VISITED_OPARQUE
	return


Oparque_Item::
# 12 "data/maps/Oparque/scripts.pory"
	lock
# 13 "data/maps/Oparque/scripts.pory"
	removeobject 1
# 14 "data/maps/Oparque/scripts.pory"
	giveitem ITEM_TM11
# 15 "data/maps/Oparque/scripts.pory"
	setflag FLAG_ITEM_OPARQUE_1
# 16 "data/maps/Oparque/scripts.pory"
	release
	end


Oparque_Sign::
# 21 "data/maps/Oparque/scripts.pory"
	lockall
# 22 "data/maps/Oparque/scripts.pory"
	msgbox Oparque_Sign_Text_0
# 23 "data/maps/Oparque/scripts.pory"
	releaseall
	end


Oparque_Sign_Text_0:
# 22 "data/maps/Oparque/scripts.pory"
	.string "Oparque$"
