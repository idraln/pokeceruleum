# 1 "data/maps/GlorrayRetro_PMart/scripts.pory"

# 2 "data/maps/GlorrayRetro_PMart/scripts.pory"
GlorrayRetro_PMart_MapScripts::
# 3 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.byte 0

GlorrayRetro_PMart_Clerk::
# 7 "data/maps/GlorrayRetro_PMart/scripts.pory"
	lock
# 8 "data/maps/GlorrayRetro_PMart/scripts.pory"
	faceplayer
# 9 "data/maps/GlorrayRetro_PMart/scripts.pory"
	msgbox GlorrayRetro_PMart_Clerk_Text_0
# 10 "data/maps/GlorrayRetro_PMart/scripts.pory"
	waitmessage
# 11 "data/maps/GlorrayRetro_PMart/scripts.pory"
	pokemart Glorray_PMart_Items
# 12 "data/maps/GlorrayRetro_PMart/scripts.pory"
	msgbox GlorrayRetro_PMart_Clerk_Text_1
# 13 "data/maps/GlorrayRetro_PMart/scripts.pory"
	release
	end


GlorrayRetro_PMart_Woman::
# 18 "data/maps/GlorrayRetro_PMart/scripts.pory"
	lock
# 19 "data/maps/GlorrayRetro_PMart/scripts.pory"
	faceplayer
# 20 "data/maps/GlorrayRetro_PMart/scripts.pory"
	msgbox GlorrayRetro_PMart_Woman_Text_0
# 21 "data/maps/GlorrayRetro_PMart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/GlorrayRetro_PMart/scripts.pory"
Glorray_PMart_Items:
# 26 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 30 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

GlorrayRetro_PMart_Clerk_Text_0:
# 9 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.string "Hello, and welcome to Glorray's mart!\n"
	.string "How can I help you today?$"

GlorrayRetro_PMart_Clerk_Text_1:
# 12 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

GlorrayRetro_PMart_Woman_Text_0:
# 20 "data/maps/GlorrayRetro_PMart/scripts.pory"
	.string "My sweet Furret needs the very best.\n"
	.string "That's why I only buy organic,\l"
	.string "local-made Potions.$"
