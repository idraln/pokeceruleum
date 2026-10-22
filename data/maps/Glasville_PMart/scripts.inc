# 1 "data/maps/Glasville_PMart/scripts.pory"

# 2 "data/maps/Glasville_PMart/scripts.pory"
Glasville_PMart_MapScripts::
# 3 "data/maps/Glasville_PMart/scripts.pory"
	.byte 0

Glasville_PMart_Clerk::
# 7 "data/maps/Glasville_PMart/scripts.pory"
	lock
# 8 "data/maps/Glasville_PMart/scripts.pory"
	faceplayer
# 9 "data/maps/Glasville_PMart/scripts.pory"
	msgbox Glasville_PMart_Clerk_Text_0
# 10 "data/maps/Glasville_PMart/scripts.pory"
	waitmessage
# 11 "data/maps/Glasville_PMart/scripts.pory"
	waitmessage
# 12 "data/maps/Glasville_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Glasville_PMart_Clerk_2
# 15 "data/maps/Glasville_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Glasville_PMart_Clerk_3
# 18 "data/maps/Glasville_PMart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Glasville_PMart_Clerk_4
# 22 "data/maps/Glasville_PMart/scripts.pory"
	pokemart MartFinal
Glasville_PMart_Clerk_1:
# 24 "data/maps/Glasville_PMart/scripts.pory"
	msgbox Glasville_PMart_Clerk_Text_1
# 25 "data/maps/Glasville_PMart/scripts.pory"
	release
	end

Glasville_PMart_Clerk_2:
# 13 "data/maps/Glasville_PMart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Glasville_PMart_Clerk_1

Glasville_PMart_Clerk_3:
# 16 "data/maps/Glasville_PMart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Glasville_PMart_Clerk_1

Glasville_PMart_Clerk_4:
# 19 "data/maps/Glasville_PMart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Glasville_PMart_Clerk_1


Glasville_PMart_Old::
# 30 "data/maps/Glasville_PMart/scripts.pory"
	lock
# 31 "data/maps/Glasville_PMart/scripts.pory"
	faceplayer
# 32 "data/maps/Glasville_PMart/scripts.pory"
	msgbox Glasville_PMart_Old_Text_0
# 33 "data/maps/Glasville_PMart/scripts.pory"
	release
	end


	.align 2
# 37 "data/maps/Glasville_PMart/scripts.pory"
Glasville_PMart_Items:
# 38 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 39 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 41 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 42 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 43 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_REPEL
# 44 "data/maps/Glasville_PMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

Glasville_PMart_Clerk_Text_0:
# 9 "data/maps/Glasville_PMart/scripts.pory"
	.string "Hello, and welcome to Glasville's mart!\n"
	.string "How can I help you today?$"

Glasville_PMart_Clerk_Text_1:
# 24 "data/maps/Glasville_PMart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

Glasville_PMart_Old_Text_0:
# 32 "data/maps/Glasville_PMart/scripts.pory"
	.string "Back in my days, there wasn't as much\n"
	.string "choice as there is today...$"
