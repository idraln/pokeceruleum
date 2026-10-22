# 1 "data/maps/AzurChannel/scripts.pory"

# 2 "data/maps/AzurChannel/scripts.pory"
AzurChannel_MapScripts::
# 3 "data/maps/AzurChannel/scripts.pory"
	.byte 0

AzurChannel_Olga::
# 7 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_1, Olga1, Olga2
# 8 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Olga_Text_0
# 9 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Bastian::
# 24 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_2, Bastian1, Bastian2
# 25 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Bastian_Text_0
# 26 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Ben::
# 41 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_3, Ben1, Ben2
# 42 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Ben_Text_0
# 43 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Cassidy::
# 58 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_4, Cassidy1, Cassidy2
# 59 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Cassidy_Text_0
# 60 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Amar::
# 75 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_5, Amar1, Amar2
# 76 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Amar_Text_0
# 77 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Lisa::
# 92 "data/maps/AzurChannel/scripts.pory"
	trainerbattle_single TRAINER_AZUR_6, Lisa1, Lisa2
# 93 "data/maps/AzurChannel/scripts.pory"
	msgbox AzurChannel_Lisa_Text_0
# 94 "data/maps/AzurChannel/scripts.pory"
	closemessage
	end


AzurChannel_Item::
# 109 "data/maps/AzurChannel/scripts.pory"
	lock
# 110 "data/maps/AzurChannel/scripts.pory"
	removeobject 7
# 111 "data/maps/AzurChannel/scripts.pory"
	giveitem ITEM_SEA_INCENSE
# 112 "data/maps/AzurChannel/scripts.pory"
	setflag FLAG_ITEM_AZUR_1
# 113 "data/maps/AzurChannel/scripts.pory"
	release
	end


AzurChannel_Olga_Text_0:
# 8 "data/maps/AzurChannel/scripts.pory"
	.string "See, I don't need no Pokémon to help me\n"
	.string "swim. Those thighs do it for me.$"

AzurChannel_Bastian_Text_0:
# 25 "data/maps/AzurChannel/scripts.pory"
	.string "Blue is the sky, and so is the sea.\n"
	.string "Except when it's night, then\l"
	.string "everything's black.$"

AzurChannel_Ben_Text_0:
# 42 "data/maps/AzurChannel/scripts.pory"
	.string "Me and my girlfriend are training for\n"
	.string "the next Triathlon. People often\l"
	.string "oversee the importance of training\l"
	.string "your swimming technique.$"

AzurChannel_Cassidy_Text_0:
# 59 "data/maps/AzurChannel/scripts.pory"
	.string "Me and my boyfriend are training for\n"
	.string "the next Triathlon. People often\l"
	.string "oversee the importance of training\l"
	.string "your swimming technique.$"

AzurChannel_Amar_Text_0:
# 76 "data/maps/AzurChannel/scripts.pory"
	.string "Swimming is the best way to forget all\n"
	.string "of your problems.$"

AzurChannel_Lisa_Text_0:
# 93 "data/maps/AzurChannel/scripts.pory"
	.string "Once, I saw a huge Pokémon, it was like\n"
	.string "an Orca but smaller and blue! It was the\l"
	.string "most beautiful sight!$"

Olga1::
# 13 "data/maps/AzurChannel/scripts.pory"
	.string "Hey! Why aren't you swimming?$"

Olga2::
# 17 "data/maps/AzurChannel/scripts.pory"
	.string "I guess it's an advantage when it comes\n"
	.string "to battles...$"

Bastian1::
# 30 "data/maps/AzurChannel/scripts.pory"
	.string "Guess what my favourite color is!$"

Bastian2::
# 34 "data/maps/AzurChannel/scripts.pory"
	.string "You got it! Blue!$"

Ben1::
# 47 "data/maps/AzurChannel/scripts.pory"
	.string "Do you have what it takes for the next\n"
	.string "Triathlon?$"

Ben2::
# 51 "data/maps/AzurChannel/scripts.pory"
	.string "Oh, you're more than ready!$"

Cassidy1::
# 64 "data/maps/AzurChannel/scripts.pory"
	.string "You wouldn't last a minute in a\n"
	.string "Triathlon!$"

Cassidy2::
# 68 "data/maps/AzurChannel/scripts.pory"
	.string "Ben, did you see that?$"

Amar1::
# 81 "data/maps/AzurChannel/scripts.pory"
	.string "Have you ever thought of letting go?$"

Amar2::
# 85 "data/maps/AzurChannel/scripts.pory"
	.string "No, and you shouldn't! Keep on fighting!$"

Lisa1::
# 98 "data/maps/AzurChannel/scripts.pory"
	.string "What's the best looking Pokémon you\n"
	.string "got? Show me!$"

Lisa2::
# 102 "data/maps/AzurChannel/scripts.pory"
	.string "Wow! What a cutie!!$"
