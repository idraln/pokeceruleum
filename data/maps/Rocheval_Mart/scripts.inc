# 1 "data/maps/Rocheval_Mart/scripts.pory"

# 2 "data/maps/Rocheval_Mart/scripts.pory"
Rocheval_Mart_MapScripts::
# 3 "data/maps/Rocheval_Mart/scripts.pory"
	.byte 0

Rocheval_Mart_Clerk::
# 7 "data/maps/Rocheval_Mart/scripts.pory"
	compare VAR_ROCHEVAL_MART, 0
	goto_if_eq Rocheval_Mart_Clerk_1
# 21 "data/maps/Rocheval_Mart/scripts.pory"
	lock
# 22 "data/maps/Rocheval_Mart/scripts.pory"
	faceplayer
# 23 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_4
# 24 "data/maps/Rocheval_Mart/scripts.pory"
	waitmessage
# 25 "data/maps/Rocheval_Mart/scripts.pory"
	pokemart Rocheval_Mart_Items
# 26 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_3
# 27 "data/maps/Rocheval_Mart/scripts.pory"
	release
	end

Rocheval_Mart_Clerk_1:
# 8 "data/maps/Rocheval_Mart/scripts.pory"
	lock
# 9 "data/maps/Rocheval_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/Rocheval_Mart/scripts.pory"
	setvar VAR_ROCHEVAL_MART, 1
# 11 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_0
# 12 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_1
# 13 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_2
# 14 "data/maps/Rocheval_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/Rocheval_Mart/scripts.pory"
	pokemart Rocheval_Mart_Items
# 16 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Clerk_Text_3
# 17 "data/maps/Rocheval_Mart/scripts.pory"
	release
	end


Rocheval_Mart_Jerk::
# 33 "data/maps/Rocheval_Mart/scripts.pory"
	lock
# 34 "data/maps/Rocheval_Mart/scripts.pory"
	faceplayer
# 35 "data/maps/Rocheval_Mart/scripts.pory"
	msgbox Rocheval_Mart_Jerk_Text_0
# 36 "data/maps/Rocheval_Mart/scripts.pory"
	turnobject 2, DIR_WEST
# 37 "data/maps/Rocheval_Mart/scripts.pory"
	release
	end


	.align 2
# 41 "data/maps/Rocheval_Mart/scripts.pory"
Rocheval_Mart_Items:
# 42 "data/maps/Rocheval_Mart/scripts.pory"
	.2byte ITEM_POTION
# 43 "data/maps/Rocheval_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 44 "data/maps/Rocheval_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 45 "data/maps/Rocheval_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 46 "data/maps/Rocheval_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Rocheval_Mart_Clerk_Text_0:
# 11 "data/maps/Rocheval_Mart/scripts.pory"
	.string "Hi. Welcome. Just wait a bit, I think this\n"
	.string "punk is trying to steal something.$"

Rocheval_Mart_Clerk_Text_1:
# 12 "data/maps/Rocheval_Mart/scripts.pory"
	.string "...$"

Rocheval_Mart_Clerk_Text_2:
# 13 "data/maps/Rocheval_Mart/scripts.pory"
	.string "...Man, whatever. I'm not paid enough for\n"
	.string "this. Anyway. How can I help?$"

Rocheval_Mart_Clerk_Text_3:
# 16 "data/maps/Rocheval_Mart/scripts.pory"
	.string "Alright. Please come again, or don't. See\n"
	.string "ya around.$"

Rocheval_Mart_Clerk_Text_4:
# 23 "data/maps/Rocheval_Mart/scripts.pory"
	.string "Hi. How can I help?$"

Rocheval_Mart_Jerk_Text_0:
# 35 "data/maps/Rocheval_Mart/scripts.pory"
	.string "...Shhh... I'm trying to nick this\n"
	.string "chocolate bar. Piss off, you're gonna\l"
	.string "get me caught.$"
