# 1 "data/maps/PassaquaWy/scripts.pory"

# 2 "data/maps/PassaquaWy/scripts.pory"
PassaquaWy_MapScripts::
# 3 "data/maps/PassaquaWy/scripts.pory"
	.byte 0

PassaquaWy_ShowNameLocation::
# 7 "data/maps/PassaquaWy/scripts.pory"
	special ShowMapNamePopup
# 8 "data/maps/PassaquaWy/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


PassaquaWy_VarTemp1::
# 12 "data/maps/PassaquaWy/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


PassaquaWy_Bonnie::
# 16 "data/maps/PassaquaWy/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_1, Bonnie1, Bonnie2
# 17 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Bonnie_Text_0
# 18 "data/maps/PassaquaWy/scripts.pory"
	closemessage
	end


PassaquaWy_Josephine::
# 31 "data/maps/PassaquaWy/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_2, Josephine1, Josephine2
# 32 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Josephine_Text_0
# 33 "data/maps/PassaquaWy/scripts.pory"
	closemessage
	end


PassaquaWy_Luke::
# 46 "data/maps/PassaquaWy/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_3, Luke1, Luke2
# 47 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Luke_Text_0
# 48 "data/maps/PassaquaWy/scripts.pory"
	closemessage
	end


PassaquaWy_Noemie::
# 61 "data/maps/PassaquaWy/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_4, Noemie1, Noemie2
# 62 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Noemie_Text_0
# 63 "data/maps/PassaquaWy/scripts.pory"
	closemessage
	end


PassaquaWy_Woman::
# 76 "data/maps/PassaquaWy/scripts.pory"
	lock
# 77 "data/maps/PassaquaWy/scripts.pory"
	faceplayer
# 78 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Woman_Text_0
# 79 "data/maps/PassaquaWy/scripts.pory"
	release
	end


PassaquaWy_Man::
# 84 "data/maps/PassaquaWy/scripts.pory"
	lock
# 85 "data/maps/PassaquaWy/scripts.pory"
	faceplayer
# 86 "data/maps/PassaquaWy/scripts.pory"
	msgbox PassaquaWy_Man_Text_0
# 87 "data/maps/PassaquaWy/scripts.pory"
	release
	end


PassaquaWy_Item1::
# 92 "data/maps/PassaquaWy/scripts.pory"
	lock
# 93 "data/maps/PassaquaWy/scripts.pory"
	removeobject 7
# 94 "data/maps/PassaquaWy/scripts.pory"
	giveitem ITEM_CARBOS
# 95 "data/maps/PassaquaWy/scripts.pory"
	setflag FLAG_ITEM_PASS_1
# 96 "data/maps/PassaquaWy/scripts.pory"
	release
	end


PassaquaWy_Item2::
# 101 "data/maps/PassaquaWy/scripts.pory"
	lock
# 102 "data/maps/PassaquaWy/scripts.pory"
	removeobject 8
# 103 "data/maps/PassaquaWy/scripts.pory"
	giveitem ITEM_NEST_BALL
# 104 "data/maps/PassaquaWy/scripts.pory"
	setflag FLAG_ITEM_PASS_2
# 105 "data/maps/PassaquaWy/scripts.pory"
	release
	end


PassaquaWy_Bonnie_Text_0:
# 17 "data/maps/PassaquaWy/scripts.pory"
	.string "This part of Thura is getting\n"
	.string "interesting. Not too hard, like\l"
	.string "Challenger Road, but not too soft. I can\l"
	.string "train here for hours.$"

PassaquaWy_Josephine_Text_0:
# 32 "data/maps/PassaquaWy/scripts.pory"
	.string "This zip line is going to be twice as\n"
	.string "long as the one on Jangala Road. Can't\l"
	.string "wait!$"

PassaquaWy_Luke_Text_0:
# 47 "data/maps/PassaquaWy/scripts.pory"
	.string "I wonder if there's any Bug/Psychic\n"
	.string "Pokémons out there, especially in\l"
	.string "Bois-Esprit. But I'm too afraid to go\l"
	.string "there...$"

PassaquaWy_Noemie_Text_0:
# 62 "data/maps/PassaquaWy/scripts.pory"
	.string "Is the rain ever going to stop? I don't\n"
	.string "want to go camp anywhere else.$"

PassaquaWy_Woman_Text_0:
# 78 "data/maps/PassaquaWy/scripts.pory"
	.string "Do you think jumping from this height\n"
	.string "would hurt? I saw some high diving on\l"
	.string "the telly and wanted to try it.$"

PassaquaWy_Man_Text_0:
# 86 "data/maps/PassaquaWy/scripts.pory"
	.string "After a long day of work at the plant, I\n"
	.string "like to come here and feel the wind\l"
	.string "caress my cheeks. The ones on my face.$"

Bonnie1::
# 22 "data/maps/PassaquaWy/scripts.pory"
	.string "You're only wearing a shirt? With this\n"
	.string "rain? You must be drenched!$"

Bonnie2::
# 26 "data/maps/PassaquaWy/scripts.pory"
	.string "You sure know how to stay dry!$"

Josephine1::
# 37 "data/maps/PassaquaWy/scripts.pory"
	.string "The zip line isn't ready yet. In the\n"
	.string "meantime, let's fight!$"

Josephine2::
# 41 "data/maps/PassaquaWy/scripts.pory"
	.string "Inspiring!$"

Luke1::
# 52 "data/maps/PassaquaWy/scripts.pory"
	.string "Look at my bugs! Look!$"

Luke2::
# 56 "data/maps/PassaquaWy/scripts.pory"
	.string "Hey, not cool! You almost squished\n"
	.string "them!$"

Noemie1::
# 67 "data/maps/PassaquaWy/scripts.pory"
	.string "Lush vegetation, like my fighting style!$"

Noemie2::
# 71 "data/maps/PassaquaWy/scripts.pory"
	.string "You're like a fire that scorched my\n"
	.string "style...$"
