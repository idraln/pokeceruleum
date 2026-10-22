# 1 "data/maps/Ohulinn_Mart/scripts.pory"

# 2 "data/maps/Ohulinn_Mart/scripts.pory"
Ohulinn_Mart_MapScripts::
# 3 "data/maps/Ohulinn_Mart/scripts.pory"
	.byte 0

Ohulinn_Mart_Clerk::
# 7 "data/maps/Ohulinn_Mart/scripts.pory"
	lock
# 8 "data/maps/Ohulinn_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/Ohulinn_Mart/scripts.pory"
	msgbox Ohulinn_Mart_Clerk_Text_0
# 10 "data/maps/Ohulinn_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/Ohulinn_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Ohulinn_Mart_Clerk_2
# 14 "data/maps/Ohulinn_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Ohulinn_Mart_Clerk_3
# 17 "data/maps/Ohulinn_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Ohulinn_Mart_Clerk_4
# 21 "data/maps/Ohulinn_Mart/scripts.pory"
	pokemart MartFinal
Ohulinn_Mart_Clerk_1:
# 23 "data/maps/Ohulinn_Mart/scripts.pory"
	msgbox Ohulinn_Mart_Clerk_Text_1
# 24 "data/maps/Ohulinn_Mart/scripts.pory"
	release
	end

Ohulinn_Mart_Clerk_2:
# 12 "data/maps/Ohulinn_Mart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Ohulinn_Mart_Clerk_1

Ohulinn_Mart_Clerk_3:
# 15 "data/maps/Ohulinn_Mart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Ohulinn_Mart_Clerk_1

Ohulinn_Mart_Clerk_4:
# 18 "data/maps/Ohulinn_Mart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Ohulinn_Mart_Clerk_1


Ohulinn_Mart_Girl::
# 29 "data/maps/Ohulinn_Mart/scripts.pory"
	lock
# 30 "data/maps/Ohulinn_Mart/scripts.pory"
	faceplayer
# 31 "data/maps/Ohulinn_Mart/scripts.pory"
	msgbox Ohulinn_Mart_Girl_Text_0
# 32 "data/maps/Ohulinn_Mart/scripts.pory"
	release
	end


	.align 2
# 36 "data/maps/Ohulinn_Mart/scripts.pory"
Ohulinn_Mart_Items:
# 37 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 38 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 40 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 41 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 42 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 43 "data/maps/Ohulinn_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

Ohulinn_Mart_Clerk_Text_0:
# 9 "data/maps/Ohulinn_Mart/scripts.pory"
	.string "Hello, and welcome to Ohulinn's mart!\n"
	.string "How can I help you today?$"

Ohulinn_Mart_Clerk_Text_1:
# 23 "data/maps/Ohulinn_Mart/scripts.pory"
	.string "Thanks for shopping with us! Come back\n"
	.string "soon!$"

Ohulinn_Mart_Girl_Text_0:
# 31 "data/maps/Ohulinn_Mart/scripts.pory"
	.string "I want a Rage Candy Bar! I want ONE!! I\n"
	.string "don't care if it's bad for my teeth, I\l"
	.string "need one!!$"
