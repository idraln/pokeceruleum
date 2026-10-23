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
	goto_if_set FLAG_ANGRY_SAPPHIRE_CASHIER, SapphireCity_Shop3F_MeanClerk_5
SapphireCity_Shop3F_MeanClerk_4:
# 41 "data/maps/SapphireCity_Shop3F/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_CASHIER, SapphireCity_Shop3F_MeanClerk_2
# 71 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_8
# 72 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmessage
# 73 "data/maps/SapphireCity_Shop3F/scripts.pory"
	pokemart SCS_Mart3F
# 74 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_9
# 75 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end

SapphireCity_Shop3F_MeanClerk_1:
# 34 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_0
# 35 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmessage
# 36 "data/maps/SapphireCity_Shop3F/scripts.pory"
	pokemart SCS_Mart3F
# 37 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_1
# 38 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end

SapphireCity_Shop3F_MeanClerk_2:
# 42 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_2
# 43 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_3
# 44 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_4
# 45 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_3
# 46 "data/maps/SapphireCity_Shop3F/scripts.pory"
	closemessage
# 47 "data/maps/SapphireCity_Shop3F/scripts.pory"
	delay 20
# 48 "data/maps/SapphireCity_Shop3F/scripts.pory"
	applymovement 5, SapphireCity_Shop3F_MeanClerk_Movement_0
# 49 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SapphireCity_Shop3F/scripts.pory"
	delay 40
# 51 "data/maps/SapphireCity_Shop3F/scripts.pory"
	applymovement 5, SapphireCity_Shop3F_MeanClerk_Movement_1
# 52 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SapphireCity_Shop3F/scripts.pory"
	turnobject 4, DIR_EAST
# 54 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_5
# 55 "data/maps/SapphireCity_Shop3F/scripts.pory"
	closemessage
# 56 "data/maps/SapphireCity_Shop3F/scripts.pory"
	delay 20
# 57 "data/maps/SapphireCity_Shop3F/scripts.pory"
	applymovement 5, SapphireCity_Shop3F_MeanClerk_Movement_2
# 58 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SapphireCity_Shop3F/scripts.pory"
	setflag FLAG_ANGRY_SAPPHIRE_CASHIER
# 60 "data/maps/SapphireCity_Shop3F/scripts.pory"
	delay 20
# 61 "data/maps/SapphireCity_Shop3F/scripts.pory"
	turnobject 4, DIR_SOUTH
# 62 "data/maps/SapphireCity_Shop3F/scripts.pory"
	delay 20
# 63 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_6
# 64 "data/maps/SapphireCity_Shop3F/scripts.pory"
	waitmessage
# 65 "data/maps/SapphireCity_Shop3F/scripts.pory"
	pokemart SCS_Mart3F
# 66 "data/maps/SapphireCity_Shop3F/scripts.pory"
	msgbox SapphireCity_Shop3F_MeanClerk_Text_7
# 67 "data/maps/SapphireCity_Shop3F/scripts.pory"
	release
	end

SapphireCity_Shop3F_MeanClerk_5:
# 33 "data/maps/SapphireCity_Shop3F/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_CASHIER, SapphireCity_Shop3F_MeanClerk_1
	goto SapphireCity_Shop3F_MeanClerk_4


	.align 2
# 80 "data/maps/SapphireCity_Shop3F/scripts.pory"
SCS_Mart3F:
# 81 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 82 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 83 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 84 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 85 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 86 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_NONE

# 48 "data/maps/SapphireCity_Shop3F/scripts.pory"
SapphireCity_Shop3F_MeanClerk_Movement_0:
# 48 "data/maps/SapphireCity_Shop3F/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/SapphireCity_Shop3F/scripts.pory"
	face_down
	step_end

# 51 "data/maps/SapphireCity_Shop3F/scripts.pory"
SapphireCity_Shop3F_MeanClerk_Movement_1:
# 51 "data/maps/SapphireCity_Shop3F/scripts.pory"
	walk_down
# 51 "data/maps/SapphireCity_Shop3F/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/SapphireCity_Shop3F/scripts.pory"
SapphireCity_Shop3F_MeanClerk_Movement_2:
# 57 "data/maps/SapphireCity_Shop3F/scripts.pory"
	walk_right
# 57 "data/maps/SapphireCity_Shop3F/scripts.pory"
	walk_up
	step_end

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
	.string "Oh look! It's my favourite person on\n"
	.string "Thura! NOT!! What do you want?$"

SapphireCity_Shop3F_MeanClerk_Text_1:
# 37 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Leave me alone, now!$"

SapphireCity_Shop3F_MeanClerk_Text_2:
# 42 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Sup. What do...\n"
	.string "Hey! You're the asshole that\l"
	.string "interrupted my lunch break!$"

SapphireCity_Shop3F_MeanClerk_Text_3:
# 43 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "...$"

SapphireCity_Shop3F_MeanClerk_Text_4:
# 44 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Yeah, well, suddenly, I don't want to\n"
	.string "sell you anything! How's that for a\l"
	.string "customer service? You moron. Go away.$"

SapphireCity_Shop3F_MeanClerk_Text_5:
# 54 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "What am I hearing now? You're refusing\n"
	.string "to serve a customer? You're on your\l"
	.string "last straw, Ben! Quit acting like a\l"
	.string "spoiled child, or else you'll have to look\l"
	.string "for a job somewhere else!$"

SapphireCity_Shop3F_MeanClerk_Text_6:
# 63 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "UGH! I bet you enjoyed what you just\n"
	.string "saw, huh? What do you want more from\l"
	.string "me?$"

SapphireCity_Shop3F_MeanClerk_Text_7:
# 66 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Great! Don't ever come back!$"

SapphireCity_Shop3F_MeanClerk_Text_8:
# 71 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Sup. What do you want?$"

SapphireCity_Shop3F_MeanClerk_Text_9:
# 74 "data/maps/SapphireCity_Shop3F/scripts.pory"
	.string "Alright, thanks for coming, or whatever.$"
