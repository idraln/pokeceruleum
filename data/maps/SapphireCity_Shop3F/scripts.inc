# 1 "data/maps/SapphireCity_Shop3F/scripts.pory"

# 2 "data/maps/SapphireCity_Shop3F/scripts.pory"
SapphireCity_Shop3F_MapScripts::
# 3 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.byte 0

SapphireCity_Shop3F_Old::
# 7 "data/maps/SapphireCity_Shop3F/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop3F/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_Old_Text_0
# 10 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end


SapphireCity_Shop3F_Girl::
# 15 "data/maps/SapphireCity_Shop3F/scripts.pory"
	lock
# 16 "data/maps/SapphireCity_Shop3F/scripts.pory"
	faceplayer
# 17 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_Girl_Text_0
# 18 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end


SapphireCity_Shop3F_Boy::
# 23 "data/maps/SapphireCity_Shop3F/scripts.pory"
	lock
# 24 "data/maps/SapphireCity_Shop3F/scripts.pory"
	faceplayer
# 25 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_Boy_Text_0
# 26 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end


SapphireCity_Shop3F_MeanClerk::
# 31 "data/maps/SapphireCity_Shop3F/scripts.pory"
	lock
# 32 "data/maps/SapphireCity_Shop3F/scripts.pory"
	faceplayer
# 33 "data/maps/SapphireCity_Shop3F/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_CASHIER, SapphireCity_Shop3F_MeanClerk_1
# 41 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_3
# 42 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmessage
# 43 "data/maps/SapphireCity_Shop3F/scripts.pory"
	pokemart SCS_Mart3F
# 44 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_4
# 45 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end

SapphireCity_Shop3F_MeanClerk_1:
# 34 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_0
# 35 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_1
# 36 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_2
# 37 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end


	.align 2
# 50 "data/maps/SapphireCity_Shop3F/scripts.pory"
SCS_Mart3F:
# 51 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 52 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 53 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 54 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 55 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 56 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_NONE

SapphireCity_Shop3F_Old_Text_0:
# 9 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Ha! I saw you coming! Very funny!... Very\n"
	.string "funny indeed... I drank too many\l"
	.string "Potions.$"

SapphireCity_Shop3F_Girl_Text_0:
# 17 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "I can't wait for the Evo Dept to open!\n"
	.string "My Cottonee is in dire need of a Sun\l"
	.string "Stone!$"

SapphireCity_Shop3F_Boy_Text_0:
# 25 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "What about clothes? Don't they sell\n"
	.string "them here?$"

SapphireCity_Shop3F_MeanClerk_Text_0:
# 34 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Sup. What do...\n"
	.string "Hey! You're the asshole that\l"
	.string "interrupted my lunch break!$"

SapphireCity_Shop3F_MeanClerk_Text_1:
# 35 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "...$"

SapphireCity_Shop3F_MeanClerk_Text_2:
# 36 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Yeah, well, suddenly, I don't want to\n"
	.string "sell you anything! How's that for a\l"
	.string "customer service? You moron. Go away.$"

SapphireCity_Shop3F_MeanClerk_Text_3:
# 41 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Sup. What do you want?$"

SapphireCity_Shop3F_MeanClerk_Text_4:
# 44 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Alright, thanks for coming, or whatever.$"
