# 1 "data/maps/PassaquaWyS/scripts.pory"

# 2 "data/maps/PassaquaWyS/scripts.pory"
PassaquaWyS_MapScripts::
# 3 "data/maps/PassaquaWyS/scripts.pory"
	.byte 0

PassaquaWyS_Heidi::
# 7 "data/maps/PassaquaWyS/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_5, Heidi1, Heidi2
# 8 "data/maps/PassaquaWyS/scripts.pory"
	msgbox PassaquaWyS_Heidi_Text_0
# 9 "data/maps/PassaquaWyS/scripts.pory"
	closemessage
	end


PassaquaWyS_Bruno::
# 22 "data/maps/PassaquaWyS/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_6, Bruno1, Bruno2
# 23 "data/maps/PassaquaWyS/scripts.pory"
	msgbox PassaquaWyS_Bruno_Text_0
# 24 "data/maps/PassaquaWyS/scripts.pory"
	closemessage
	end


PassaquaWyS_Diana::
# 37 "data/maps/PassaquaWyS/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_7, Diana1, Diana2
# 38 "data/maps/PassaquaWyS/scripts.pory"
	msgbox PassaquaWyS_Diana_Text_0
# 39 "data/maps/PassaquaWyS/scripts.pory"
	closemessage
	end


PassaquaWyS_Girl::
# 52 "data/maps/PassaquaWyS/scripts.pory"
	lock
# 53 "data/maps/PassaquaWyS/scripts.pory"
	faceplayer
# 54 "data/maps/PassaquaWyS/scripts.pory"
	msgbox PassaquaWyS_Girl_Text_0
# 55 "data/maps/PassaquaWyS/scripts.pory"
	release
	end


PassaquaWyS_Item::
# 60 "data/maps/PassaquaWyS/scripts.pory"
	lock
# 61 "data/maps/PassaquaWyS/scripts.pory"
	removeobject 5
# 62 "data/maps/PassaquaWyS/scripts.pory"
	giveitem ITEM_TM36
# 63 "data/maps/PassaquaWyS/scripts.pory"
	setflag FLAG_ITEM_PASS_3
# 64 "data/maps/PassaquaWyS/scripts.pory"
	release
	end


PassaquaWyS_Heidi_Text_0:
# 8 "data/maps/PassaquaWyS/scripts.pory"
	.string "In my young days, I used to be one of\n"
	.string "the fastest cyclist of all Thura.$"

PassaquaWyS_Bruno_Text_0:
# 23 "data/maps/PassaquaWyS/scripts.pory"
	.string "It's a true blessing working with André.\n"
	.string "Last time, he bought us all pizza, out of\l"
	.string "nowhere! For no reason! How nice!$"

PassaquaWyS_Diana_Text_0:
# 38 "data/maps/PassaquaWyS/scripts.pory"
	.string "I've been raising Pokémons for over a\n"
	.string "year now. We breeders are essential! If\l"
	.string "not us, who's gonna care for all these\l"
	.string "cute babies?$"

PassaquaWyS_Girl_Text_0:
# 54 "data/maps/PassaquaWyS/scripts.pory"
	.string "My father owns the power plant in\n"
	.string "Passwacan! But I'm too afraid of\l"
	.string "electricity so I don't go see him when\l"
	.string "he works. I prefer nature and cute\l"
	.string "flowers!$"

Heidi1::
# 13 "data/maps/PassaquaWyS/scripts.pory"
	.string "Have you walked your steps today?$"

Heidi2::
# 17 "data/maps/PassaquaWyS/scripts.pory"
	.string "I see, more than enough!$"

Bruno1::
# 28 "data/maps/PassaquaWyS/scripts.pory"
	.string "Long day of work ahead, let's have some\n"
	.string "fun!$"

Bruno2::
# 32 "data/maps/PassaquaWyS/scripts.pory"
	.string "Haha, thank you!$"

Diana1::
# 43 "data/maps/PassaquaWyS/scripts.pory"
	.string "Meet my babies, please!$"

Diana2::
# 47 "data/maps/PassaquaWyS/scripts.pory"
	.string "What, don't you like them?$"
