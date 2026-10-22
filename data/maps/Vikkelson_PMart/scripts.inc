# 1 "data/maps/Vikkelson_PMart/scripts.pory"

# 2 "data/maps/Vikkelson_PMart/scripts.pory"
Vikkelson_PMart_MapScripts::
# 3 "data/maps/Vikkelson_PMart/scripts.pory"
	.byte 0

Vikkelson_PMart_Clerk::
# 7 "data/maps/Vikkelson_PMart/scripts.pory"
	lock
# 8 "data/maps/Vikkelson_PMart/scripts.pory"
	faceplayer
# 9 "data/maps/Vikkelson_PMart/scripts.pory"
	msgbox Vikkelson_PMart_Clerk_Text_0
# 10 "data/maps/Vikkelson_PMart/scripts.pory"
	waitmessage
# 11 "data/maps/Vikkelson_PMart/scripts.pory"
	waitmessage
# 12 "data/maps/Vikkelson_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Vikkelson_PMart_Clerk_2
# 15 "data/maps/Vikkelson_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Vikkelson_PMart_Clerk_3
# 18 "data/maps/Vikkelson_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Vikkelson_PMart_Clerk_4
# 22 "data/maps/Vikkelson_PMart/scripts.pory"
	pokemart MartFinal
Vikkelson_PMart_Clerk_1:
# 24 "data/maps/Vikkelson_PMart/scripts.pory"
	msgbox Vikkelson_PMart_Clerk_Text_1
# 25 "data/maps/Vikkelson_PMart/scripts.pory"
	release
	end

Vikkelson_PMart_Clerk_2:
# 13 "data/maps/Vikkelson_PMart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Vikkelson_PMart_Clerk_1

Vikkelson_PMart_Clerk_3:
# 16 "data/maps/Vikkelson_PMart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Vikkelson_PMart_Clerk_1

Vikkelson_PMart_Clerk_4:
# 19 "data/maps/Vikkelson_PMart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Vikkelson_PMart_Clerk_1


Vikkelson_PMart_Woman::
# 30 "data/maps/Vikkelson_PMart/scripts.pory"
	lock
# 31 "data/maps/Vikkelson_PMart/scripts.pory"
	msgbox Vikkelson_PMart_Woman_Text_0
# 32 "data/maps/Vikkelson_PMart/scripts.pory"
	release
	end


Vikkelson_PMart_Man::
# 37 "data/maps/Vikkelson_PMart/scripts.pory"
	lock
# 38 "data/maps/Vikkelson_PMart/scripts.pory"
	faceplayer
# 39 "data/maps/Vikkelson_PMart/scripts.pory"
	msgbox Vikkelson_PMart_Man_Text_0
# 40 "data/maps/Vikkelson_PMart/scripts.pory"
	release
	end


	.align 2
# 44 "data/maps/Vikkelson_PMart/scripts.pory"
Vikkelson_PMart_Items:
# 45 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 46 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 47 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 49 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 50 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/Vikkelson_PMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

Vikkelson_PMart_Clerk_Text_0:
# 9 "data/maps/Vikkelson_PMart/scripts.pory"
	.string "Hello, and welcome to Vikkelson's mart!\n"
	.string "How can I help you today? We don't have\l"
	.string "any beers left. Sorry.$"

Vikkelson_PMart_Clerk_Text_1:
# 24 "data/maps/Vikkelson_PMart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

Vikkelson_PMart_Woman_Text_0:
# 31 "data/maps/Vikkelson_PMart/scripts.pory"
	.string "Hmmm... No roots left? Not even organic\n"
	.string "berries?... Wait, is this the Sapphire\l"
	.string "supermarket?$"

Vikkelson_PMart_Man_Text_0:
# 39 "data/maps/Vikkelson_PMart/scripts.pory"
	.string "Haha, I won big bucks at the nightclub!\n"
	.string "I'm gonna treat my Crustle sooo good.$"
