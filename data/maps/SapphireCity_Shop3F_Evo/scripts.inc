# 1 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"

# 2 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
SapphireCity_Shop3F_Evo_MapScripts::
# 3 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.byte 0

SapphireCity_Shop3F_Evo_Clerk_1::
# 7 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_Evo_Clerk_1_2
# 16 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_2
SapphireCity_Shop3F_Evo_Clerk_1_1:
# 18 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	release
	end

SapphireCity_Shop3F_Evo_Clerk_1_2:
# 10 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_0
# 11 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	waitmessage
# 12 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	pokemart MartTMEvo1
# 13 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_1
	goto SapphireCity_Shop3F_Evo_Clerk_1_1


	.align 2
# 22 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
MartTMEvo1:
# 23 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_WATER_STONE
# 24 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 25 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 26 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 27 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_MOON_STONE
# 28 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_SUN_STONE
# 29 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_ICE_STONE
# 30 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 31 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_NONE

SapphireCity_Shop3F_Evo_Clerk_2::
# 35 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	lock
# 36 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	faceplayer
# 37 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_Evo_Clerk_2_2
# 44 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_2
SapphireCity_Shop3F_Evo_Clerk_2_1:
# 46 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	release
	end

SapphireCity_Shop3F_Evo_Clerk_2_2:
# 38 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_0
# 39 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	waitmessage
# 40 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	pokemart MartTMEvo2
# 41 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	msgbox SapphireCity_Shop3F_Evo_Clerk_1_Text_1
	goto SapphireCity_Shop3F_Evo_Clerk_2_1


	.align 2
# 50 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
MartTMEvo2:
# 51 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_METAL_COAT
# 52 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 53 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 54 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_NONE

SapphireCity_Shop3F_Evo_Clerk_1_Text_0:
# 10 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.string "Hello, and welcome to the Evolution\n"
	.string "Department! How can I help you today?$"

SapphireCity_Shop3F_Evo_Clerk_1_Text_1:
# 13 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.string "Thank you for shopping with us! We'll\n"
	.string "hope to see you very soon!$"

SapphireCity_Shop3F_Evo_Clerk_1_Text_2:
# 16 "data/maps/SapphireCity_Shop3F_Evo/scripts.pory"
	.string "Hello there! Unfortunately, our\n"
	.string "department is still under construction.\l"
	.string "Come back later!$"
