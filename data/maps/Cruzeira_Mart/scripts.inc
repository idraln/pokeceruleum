# 1 "data/maps/Cruzeira_Mart/scripts.pory"

# 2 "data/maps/Cruzeira_Mart/scripts.pory"
Cruzeira_Mart_MapScripts::
# 3 "data/maps/Cruzeira_Mart/scripts.pory"
	.byte 0

Cruzeira_Mart_Clerk::
# 7 "data/maps/Cruzeira_Mart/scripts.pory"
	lock
# 8 "data/maps/Cruzeira_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/Cruzeira_Mart/scripts.pory"
	msgbox Cruzeira_Mart_Clerk_Text_0
# 10 "data/maps/Cruzeira_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/Cruzeira_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Cruzeira_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Cruzeira_Mart_Clerk_2
# 15 "data/maps/Cruzeira_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Cruzeira_Mart_Clerk_3
# 18 "data/maps/Cruzeira_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Cruzeira_Mart_Clerk_4
# 22 "data/maps/Cruzeira_Mart/scripts.pory"
	pokemart MartFinal
Cruzeira_Mart_Clerk_1:
# 24 "data/maps/Cruzeira_Mart/scripts.pory"
	msgbox Cruzeira_Mart_Clerk_Text_1
# 25 "data/maps/Cruzeira_Mart/scripts.pory"
	release
	end

Cruzeira_Mart_Clerk_2:
# 13 "data/maps/Cruzeira_Mart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Cruzeira_Mart_Clerk_1

Cruzeira_Mart_Clerk_3:
# 16 "data/maps/Cruzeira_Mart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Cruzeira_Mart_Clerk_1

Cruzeira_Mart_Clerk_4:
# 19 "data/maps/Cruzeira_Mart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Cruzeira_Mart_Clerk_1


Cruzeira_Mart_Woman::
# 30 "data/maps/Cruzeira_Mart/scripts.pory"
	lock
# 31 "data/maps/Cruzeira_Mart/scripts.pory"
	msgbox Cruzeira_Mart_Woman_Text_0
# 32 "data/maps/Cruzeira_Mart/scripts.pory"
	release
	end


	.align 2
# 36 "data/maps/Cruzeira_Mart/scripts.pory"
Cruzeira_Mart_Items:
# 37 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 38 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 40 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 41 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 42 "data/maps/Cruzeira_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Cruzeira_Mart_Clerk_Text_0:
# 9 "data/maps/Cruzeira_Mart/scripts.pory"
	.string "Hello, and welcome to Cruzeira's mart!\n"
	.string "How can I help you today?$"

Cruzeira_Mart_Clerk_Text_1:
# 24 "data/maps/Cruzeira_Mart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

Cruzeira_Mart_Woman_Text_0:
# 31 "data/maps/Cruzeira_Mart/scripts.pory"
	.string "Come on, no Energy Roots? I swear I saw\n"
	.string "them there last time I came...$"
