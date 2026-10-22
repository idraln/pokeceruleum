# 1 "data/maps/Bammobo_Center/scripts.pory"

# 2 "data/maps/Bammobo_Center/scripts.pory"
Bammobo_Center_MapScripts::
# 3 "data/maps/Bammobo_Center/scripts.pory"
	.byte 0

Bammobo_Center_Owner::
# 7 "data/maps/Bammobo_Center/scripts.pory"
	lock
# 8 "data/maps/Bammobo_Center/scripts.pory"
	faceplayer
# 9 "data/maps/Bammobo_Center/scripts.pory"
	msgbox Bammobo_Center_Owner_Text_0
# 10 "data/maps/Bammobo_Center/scripts.pory"
	waitmessage
# 11 "data/maps/Bammobo_Center/scripts.pory"
	pokemart Bammobo_Center_Items
# 12 "data/maps/Bammobo_Center/scripts.pory"
	msgbox Bammobo_Center_Owner_Text_1
# 13 "data/maps/Bammobo_Center/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/Bammobo_Center/scripts.pory"
Bammobo_Center_Items:
# 18 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 19 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_LEMONADE
# 20 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 21 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 22 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 23 "data/maps/Bammobo_Center/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE

Bammobo_Center_Camper::
# 27 "data/maps/Bammobo_Center/scripts.pory"
	lock
# 28 "data/maps/Bammobo_Center/scripts.pory"
	faceplayer
# 29 "data/maps/Bammobo_Center/scripts.pory"
	msgbox Bammobo_Center_Camper_Text_0
# 30 "data/maps/Bammobo_Center/scripts.pory"
	release
	end


Bammobo_Center_Man::
# 35 "data/maps/Bammobo_Center/scripts.pory"
	lock
# 36 "data/maps/Bammobo_Center/scripts.pory"
	faceplayer
# 37 "data/maps/Bammobo_Center/scripts.pory"
	msgbox Bammobo_Center_Man_Text_0
# 38 "data/maps/Bammobo_Center/scripts.pory"
	release
	end


Bammobo_Center_Owner_Text_0:
# 9 "data/maps/Bammobo_Center/scripts.pory"
	.string "Hello, dear. Would you like to buy a\n"
	.string "refreshment?$"

Bammobo_Center_Owner_Text_1:
# 12 "data/maps/Bammobo_Center/scripts.pory"
	.string "Thank you, dear. I hope you well on your\n"
	.string "journey.$"

Bammobo_Center_Camper_Text_0:
# 29 "data/maps/Bammobo_Center/scripts.pory"
	.string "I have to warn you: if you need to go to\n"
	.string "Passwacan, you might need a mask to\l"
	.string "protect you from the landfill's musty\l"
	.string "odor. It really stings the eyes.$"

Bammobo_Center_Man_Text_0:
# 37 "data/maps/Bammobo_Center/scripts.pory"
	.string "The forest south from here is home to\n"
	.string "some of the rarest Pokémon in Thura.\l"
	.string "You should check it out!$"
