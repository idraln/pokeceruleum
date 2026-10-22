# 1 "data/maps/Frux_Mart/scripts.pory"

# 2 "data/maps/Frux_Mart/scripts.pory"
Frux_Mart_MapScripts::
# 3 "data/maps/Frux_Mart/scripts.pory"
	.byte 0

Frux_Mart_Clerk::
# 7 "data/maps/Frux_Mart/scripts.pory"
	lock
# 8 "data/maps/Frux_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/Frux_Mart/scripts.pory"
	msgbox Frux_Mart_Clerk_Text_0
# 10 "data/maps/Frux_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/Frux_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Frux_Mart_Clerk_2
# 14 "data/maps/Frux_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Frux_Mart_Clerk_3
# 17 "data/maps/Frux_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Frux_Mart_Clerk_4
# 21 "data/maps/Frux_Mart/scripts.pory"
	pokemart MartFinal
Frux_Mart_Clerk_1:
# 23 "data/maps/Frux_Mart/scripts.pory"
	msgbox Frux_Mart_Clerk_Text_1
# 24 "data/maps/Frux_Mart/scripts.pory"
	release
	end

Frux_Mart_Clerk_2:
# 12 "data/maps/Frux_Mart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Frux_Mart_Clerk_1

Frux_Mart_Clerk_3:
# 15 "data/maps/Frux_Mart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Frux_Mart_Clerk_1

Frux_Mart_Clerk_4:
# 18 "data/maps/Frux_Mart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Frux_Mart_Clerk_1


Frux_Mart_Camper::
# 29 "data/maps/Frux_Mart/scripts.pory"
	lock
# 30 "data/maps/Frux_Mart/scripts.pory"
	faceplayer
# 31 "data/maps/Frux_Mart/scripts.pory"
	msgbox Frux_Mart_Camper_Text_0
# 32 "data/maps/Frux_Mart/scripts.pory"
	release
	end


	.align 2
# 36 "data/maps/Frux_Mart/scripts.pory"
Frux_Mart_Items:
# 37 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 38 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 40 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 41 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 42 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 43 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 44 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 45 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 46 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_IRON
# 47 "data/maps/Frux_Mart/scripts.pory"
	.2byte ITEM_IRON_BALL
	.2byte ITEM_NONE

Frux_Mart_Clerk_Text_0:
# 9 "data/maps/Frux_Mart/scripts.pory"
	.string "Hello, and welcome to Frux's mart! How\n"
	.string "can I help you today?$"

Frux_Mart_Clerk_Text_1:
# 23 "data/maps/Frux_Mart/scripts.pory"
	.string "Thanks for shopping with us! Come back\n"
	.string "soon!$"

Frux_Mart_Camper_Text_0:
# 31 "data/maps/Frux_Mart/scripts.pory"
	.string "Since the dorms are exclusively for the\n"
	.string "workers, I need to buy a tent. But they\l"
	.string "don't sell them here... Guess who's gonna\l"
	.string "sleep under the stars?$"
