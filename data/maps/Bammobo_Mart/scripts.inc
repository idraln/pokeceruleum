# 1 "data/maps/Bammobo_Mart/scripts.pory"

# 2 "data/maps/Bammobo_Mart/scripts.pory"
Bammobo_Mart_MapScripts::
# 3 "data/maps/Bammobo_Mart/scripts.pory"
	.byte 0

Bammobo_Mart_Clerk::
# 7 "data/maps/Bammobo_Mart/scripts.pory"
	lock
# 8 "data/maps/Bammobo_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/Bammobo_Mart/scripts.pory"
	msgbox Bammobo_Mart_Clerk_Text_0
# 10 "data/maps/Bammobo_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/Bammobo_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Bammobo_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Bammobo_Mart_Clerk_2
# 15 "data/maps/Bammobo_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Bammobo_Mart_Clerk_3
# 18 "data/maps/Bammobo_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Bammobo_Mart_Clerk_4
# 22 "data/maps/Bammobo_Mart/scripts.pory"
	pokemart MartFinal
Bammobo_Mart_Clerk_1:
# 24 "data/maps/Bammobo_Mart/scripts.pory"
	msgbox Bammobo_Mart_Clerk_Text_1
# 25 "data/maps/Bammobo_Mart/scripts.pory"
	release
	end

Bammobo_Mart_Clerk_2:
# 13 "data/maps/Bammobo_Mart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Bammobo_Mart_Clerk_1

Bammobo_Mart_Clerk_3:
# 16 "data/maps/Bammobo_Mart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Bammobo_Mart_Clerk_1

Bammobo_Mart_Clerk_4:
# 19 "data/maps/Bammobo_Mart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Bammobo_Mart_Clerk_1


Bammobo_Mart_Customer::
# 30 "data/maps/Bammobo_Mart/scripts.pory"
	lock
# 31 "data/maps/Bammobo_Mart/scripts.pory"
	faceplayer
# 32 "data/maps/Bammobo_Mart/scripts.pory"
	msgbox Bammobo_Mart_Customer_Text_0
# 33 "data/maps/Bammobo_Mart/scripts.pory"
	release
	end


Bammobo_Mart_Clerk_Text_0:
# 9 "data/maps/Bammobo_Mart/scripts.pory"
	.string "Hello, and welcome to Bammobo's mart!\n"
	.string "How can I help you today?$"

Bammobo_Mart_Clerk_Text_1:
# 24 "data/maps/Bammobo_Mart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

Bammobo_Mart_Customer_Text_0:
# 32 "data/maps/Bammobo_Mart/scripts.pory"
	.string "We live in a world filled with fabulous\n"
	.string "Pokémon, but noone will tell you about\l"
	.string "freaking mosquitoes! I've literally\l"
	.string "been assaulted on Jangala Road!$"
