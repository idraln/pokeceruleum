# 1 "data/maps/SapphireCity_Shop1F/scripts.pory"

# 2 "data/maps/SapphireCity_Shop1F/scripts.pory"
SapphireCity_Shop1F_MapScripts::
# 3 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.byte 0

SapphireCity_Shop1F_Girl::
# 7 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop1F/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_Girl_Text_0
# 10 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_MusicMan::
# 15 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 16 "data/maps/SapphireCity_Shop1F/scripts.pory"
	faceplayer
# 17 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_MusicMan_Text_0
# 18 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_Beauty::
# 23 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 24 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_Beauty_Text_0
# 25 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_Nerd::
# 30 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 31 "data/maps/SapphireCity_Shop1F/scripts.pory"
	faceplayer
# 32 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_Nerd_Text_0
# 33 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_FlowerLady::
# 38 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 39 "data/maps/SapphireCity_Shop1F/scripts.pory"
	faceplayer
# 40 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_FlowerLady_Text_0
# 41 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_AngryCustomer::
# 46 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 47 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_AngryCustomer_Text_0
# 48 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_AngryCustomer_Text_1
# 49 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_AngryCustomer_Text_2
# 50 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end


SapphireCity_Shop1F_Mart::
# 55 "data/maps/SapphireCity_Shop1F/scripts.pory"
	lock
# 56 "data/maps/SapphireCity_Shop1F/scripts.pory"
	faceplayer
# 57 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_Mart_Text_0
# 58 "data/maps/SapphireCity_Shop1F/scripts.pory"
	waitmessage
# 59 "data/maps/SapphireCity_Shop1F/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq SapphireCity_Shop1F_Mart_2
# 62 "data/maps/SapphireCity_Shop1F/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq SapphireCity_Shop1F_Mart_3
# 65 "data/maps/SapphireCity_Shop1F/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq SapphireCity_Shop1F_Mart_4
# 69 "data/maps/SapphireCity_Shop1F/scripts.pory"
	pokemart MartFinal
SapphireCity_Shop1F_Mart_1:
# 71 "data/maps/SapphireCity_Shop1F/scripts.pory"
	msgbox SapphireCity_Shop1F_Mart_Text_1
# 72 "data/maps/SapphireCity_Shop1F/scripts.pory"
	release
	end

SapphireCity_Shop1F_Mart_2:
# 60 "data/maps/SapphireCity_Shop1F/scripts.pory"
	pokemart MartUntil1stBadge
	goto SapphireCity_Shop1F_Mart_1

SapphireCity_Shop1F_Mart_3:
# 63 "data/maps/SapphireCity_Shop1F/scripts.pory"
	pokemart MartUntil4thBadge
	goto SapphireCity_Shop1F_Mart_1

SapphireCity_Shop1F_Mart_4:
# 66 "data/maps/SapphireCity_Shop1F/scripts.pory"
	pokemart MartUntil6thBadge
	goto SapphireCity_Shop1F_Mart_1


	.align 2
# 76 "data/maps/SapphireCity_Shop1F/scripts.pory"
MartUntil1stBadge:
# 77 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POTION
# 78 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 79 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 80 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 81 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 82 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 85 "data/maps/SapphireCity_Shop1F/scripts.pory"
MartUntil4thBadge:
# 86 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 87 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POTION
# 88 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 89 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 90 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 91 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 92 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 93 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 94 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 97 "data/maps/SapphireCity_Shop1F/scripts.pory"
MartUntil6thBadge:
# 98 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 99 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 100 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POTION
# 101 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 102 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ETHER
# 103 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 104 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 105 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 106 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 107 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 108 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 111 "data/maps/SapphireCity_Shop1F/scripts.pory"
MartFinal:
# 112 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_REVIVE
# 113 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 114 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 115 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ETHER
# 116 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 117 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 118 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 119 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POTION
# 120 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 121 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 122 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 123 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 124 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 125 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 126 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

SapphireCity_Shop1F_Girl_Text_0:
# 9 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Do you know by any chance where the\n"
	.string "milk is?... You don't work here? Sorry.$"

SapphireCity_Shop1F_MusicMan_Text_0:
# 17 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Noooo! They removed my favorite brand\n"
	.string "of peanut butter from the shelves! This\l"
	.string "is a disaster!$"

SapphireCity_Shop1F_Beauty_Text_0:
# 24 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Hmmm... Should I take it? Or that? Hmmm...$"

SapphireCity_Shop1F_Nerd_Text_0:
# 32 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "That's weird, I don't see any TCGs for\n"
	.string "sale here. Isn't this a supermarket?$"

SapphireCity_Shop1F_FlowerLady_Text_0:
# 40 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "They don't have any crushed dandelions\n"
	.string "left in Cruzeira, so I hoped they would\l"
	.string "have some here. But, no luck.$"

SapphireCity_Shop1F_AngryCustomer_Text_0:
# 47 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "What do you mean I can't return this\n"
	.string "item? I still have the ticket, see?$"

SapphireCity_Shop1F_AngryCustomer_Text_1:
# 48 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "...$"

SapphireCity_Shop1F_AngryCustomer_Text_2:
# 49 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Yeah I opened it, big deal! It doesn't\n"
	.string "prove that I had some!$"

SapphireCity_Shop1F_Mart_Text_0:
# 57 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Hello, and welcome to Sapphire City's\n"
	.string "supermarket! How can I help you today?$"

SapphireCity_Shop1F_Mart_Text_1:
# 71 "data/maps/SapphireCity_Shop1F/scripts.pory"
	.string "Thank you for shopping with us! We'll\n"
	.string "hope to see you very soon!$"
