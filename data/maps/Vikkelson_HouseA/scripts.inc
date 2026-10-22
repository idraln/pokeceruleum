# 1 "data/maps/Vikkelson_HouseA/scripts.pory"

# 2 "data/maps/Vikkelson_HouseA/scripts.pory"
Vikkelson_HouseA_MapScripts::
# 3 "data/maps/Vikkelson_HouseA/scripts.pory"
	.byte 0

Vikkelson_HouseA_Owner::
# 7 "data/maps/Vikkelson_HouseA/scripts.pory"
	lock
# 8 "data/maps/Vikkelson_HouseA/scripts.pory"
	faceplayer
# 9 "data/maps/Vikkelson_HouseA/scripts.pory"
	msgbox Vikkelson_HouseA_Owner_Text_0
# 10 "data/maps/Vikkelson_HouseA/scripts.pory"
	release
	end


Vikkelson_HouseA_Owner_Text_0:
# 9 "data/maps/Vikkelson_HouseA/scripts.pory"
	.string "Hi sweetie! Unfortunately, I don't have\n"
	.string "any more room for you to sleep. Sorry!$"
