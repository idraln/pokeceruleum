# 1 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"

# 2 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
SapphireCity_Shop3F_Attack_MapScripts::
# 3 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.byte 0

SapphireCity_Shop3F_Attack_Clerk_1::
# 7 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_Attack_Clerk_1_2
# 16 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_1_Text_2
SapphireCity_Shop3F_Attack_Clerk_1_1:
# 18 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	release
	end

SapphireCity_Shop3F_Attack_Clerk_1_2:
# 10 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_1_Text_0
# 11 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	waitmessage
# 12 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	pokemart MartBattleItems
# 13 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_1_Text_1
	goto SapphireCity_Shop3F_Attack_Clerk_1_1


	.align 2
# 22 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
MartBattleItems:
# 23 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_ATTACK
# 24 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_DEFEND
# 25 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 26 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 27 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_SPEED
# 28 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 29 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 30 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

SapphireCity_Shop3F_Attack_Clerk_2::
# 34 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	lock
# 35 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	faceplayer
# 36 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_Attack_Clerk_2_2
# 43 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_1_Text_2
SapphireCity_Shop3F_Attack_Clerk_2_1:
# 45 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	release
	end

SapphireCity_Shop3F_Attack_Clerk_2_2:
# 37 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_2_Text_0
# 38 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	waitmessage
# 39 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	pokemart MartVitaminItems
# 40 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Clerk_1_Text_1
	goto SapphireCity_Shop3F_Attack_Clerk_2_1


	.align 2
# 49 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
MartVitaminItems:
# 50 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_CARBOS
# 51 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_IRON
# 52 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_PROTEIN
# 53 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_CALCIUM
# 54 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_ZINC
# 55 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

SapphireCity_Shop3F_Attack_Boy::
# 59 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	lock
# 60 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	faceplayer
# 61 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	msgbox SapphireCity_Shop3F_Attack_Boy_Text_0
# 62 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	turnobject 3, DIR_NORTH
# 63 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	release
	end


SapphireCity_Shop3F_Attack_Clerk_1_Text_0:
# 10 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.string "Hello, and welcome to the Battle\n"
	.string "Department! How can I help you today?$"

SapphireCity_Shop3F_Attack_Clerk_1_Text_1:
# 13 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.string "Thank you for shopping with us! We'll\n"
	.string "hope to see you very soon!$"

SapphireCity_Shop3F_Attack_Clerk_1_Text_2:
# 16 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.string "Hello there! Unfortunately, our\n"
	.string "department is still under construction.\l"
	.string "Come back later!$"

SapphireCity_Shop3F_Attack_Clerk_2_Text_0:
# 37 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.string "Hello, and welcome to the Growth\n"
	.string "Department! How can I help you today?$"

SapphireCity_Shop3F_Attack_Boy_Text_0:
# 61 "data/maps/SapphireCity_Shop3F_Attack/scripts.pory"
	.string "Do you think that's a real Dire Hit? Do\n"
	.string "you think that if a Wurmple would be\l"
	.string "able to eat it?$"
