# 1 "data/maps/Passwacan_Mart/scripts.pory"

# 2 "data/maps/Passwacan_Mart/scripts.pory"
Passwacan_Mart_MapScripts::
# 3 "data/maps/Passwacan_Mart/scripts.pory"
	.byte 0

Passwacan_Mart_Clerk::
# 7 "data/maps/Passwacan_Mart/scripts.pory"
	lock
# 8 "data/maps/Passwacan_Mart/scripts.pory"
	faceplayer
# 9 "data/maps/Passwacan_Mart/scripts.pory"
	msgbox Passwacan_Mart_Clerk_Text_0
# 10 "data/maps/Passwacan_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/Passwacan_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Passwacan_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq Passwacan_Mart_Clerk_2
# 15 "data/maps/Passwacan_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq Passwacan_Mart_Clerk_3
# 18 "data/maps/Passwacan_Mart/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq Passwacan_Mart_Clerk_4
# 22 "data/maps/Passwacan_Mart/scripts.pory"
	pokemart MartFinal
Passwacan_Mart_Clerk_1:
# 24 "data/maps/Passwacan_Mart/scripts.pory"
	msgbox Passwacan_Mart_Clerk_Text_1
# 25 "data/maps/Passwacan_Mart/scripts.pory"
	release
	end

Passwacan_Mart_Clerk_2:
# 13 "data/maps/Passwacan_Mart/scripts.pory"
	pokemart MartUntil1stBadge
	goto Passwacan_Mart_Clerk_1

Passwacan_Mart_Clerk_3:
# 16 "data/maps/Passwacan_Mart/scripts.pory"
	pokemart MartUntil4thBadge
	goto Passwacan_Mart_Clerk_1

Passwacan_Mart_Clerk_4:
# 19 "data/maps/Passwacan_Mart/scripts.pory"
	pokemart MartUntil6thBadge
	goto Passwacan_Mart_Clerk_1


Passwacan_Mart_Customer::
# 30 "data/maps/Passwacan_Mart/scripts.pory"
	lock
# 31 "data/maps/Passwacan_Mart/scripts.pory"
	faceplayer
# 32 "data/maps/Passwacan_Mart/scripts.pory"
	msgbox Passwacan_Mart_Customer_Text_0
# 33 "data/maps/Passwacan_Mart/scripts.pory"
	release
	end


Passwacan_Mart_Clerk_Text_0:
# 9 "data/maps/Passwacan_Mart/scripts.pory"
	.string "Hello, and welcome to Passwacan's mart!\n"
	.string "How can I help you today?$"

Passwacan_Mart_Clerk_Text_1:
# 24 "data/maps/Passwacan_Mart/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

Passwacan_Mart_Customer_Text_0:
# 32 "data/maps/Passwacan_Mart/scripts.pory"
	.string "I never understood the difference\n"
	.string "between Poké Balls and Ultra Balls. They\l"
	.string "say Ultra Balls are supposed to be more\l"
	.string "effective, but I once caught a\l"
	.string "legendary Pokémon with a Poké Ball. I\l"
	.string "swear.$"
