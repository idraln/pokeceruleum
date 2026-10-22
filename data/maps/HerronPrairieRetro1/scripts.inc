# 1 "data/maps/HerronPrairieRetro1/scripts.pory"

# 2 "data/maps/HerronPrairieRetro1/scripts.pory"
HerronPrairieRetro1_MapScripts::
# 3 "data/maps/HerronPrairieRetro1/scripts.pory"
	.byte 0

HerronPrairieRetro1_Teddy::
# 7 "data/maps/HerronPrairieRetro1/scripts.pory"
	trainerbattle_single TRAINER_RETRO_1, Teddy1, Teddy2
# 8 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Teddy_Text_0
# 9 "data/maps/HerronPrairieRetro1/scripts.pory"
	closemessage
	end


HerronPrairieRetro1_Nora::
# 24 "data/maps/HerronPrairieRetro1/scripts.pory"
	trainerbattle_single TRAINER_RETRO_2, Nora1, Nora2
# 25 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Nora_Text_0
# 26 "data/maps/HerronPrairieRetro1/scripts.pory"
	closemessage
	end


HerronPrairieRetro1_Fred::
# 41 "data/maps/HerronPrairieRetro1/scripts.pory"
	trainerbattle_single TRAINER_RETRO_3, Fred1, Fred2
# 42 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Fred_Text_0
# 43 "data/maps/HerronPrairieRetro1/scripts.pory"
	closemessage
	end


HerronPrairieRetro1_Carly::
# 58 "data/maps/HerronPrairieRetro1/scripts.pory"
	trainerbattle_single TRAINER_RETRO_4, Carly1, Carly2
# 59 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Carly_Text_0
# 60 "data/maps/HerronPrairieRetro1/scripts.pory"
	closemessage
	end


HerronPrairieRetro1_Man::
# 75 "data/maps/HerronPrairieRetro1/scripts.pory"
	goto_if_set FLAG_BERRY_RETRO, HerronPrairieRetro1_Man_1
# 83 "data/maps/HerronPrairieRetro1/scripts.pory"
	lock
# 84 "data/maps/HerronPrairieRetro1/scripts.pory"
	faceplayer
# 85 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Man_Text_1
# 86 "data/maps/HerronPrairieRetro1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 87 "data/maps/HerronPrairieRetro1/scripts.pory"
	setflag FLAG_BERRY_RETRO
# 88 "data/maps/HerronPrairieRetro1/scripts.pory"
	release
	end

HerronPrairieRetro1_Man_1:
# 76 "data/maps/HerronPrairieRetro1/scripts.pory"
	lock
# 77 "data/maps/HerronPrairieRetro1/scripts.pory"
	faceplayer
# 78 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Man_Text_0
# 79 "data/maps/HerronPrairieRetro1/scripts.pory"
	release
	end


HerronPrairieRetro1_Woman::
# 94 "data/maps/HerronPrairieRetro1/scripts.pory"
	goto_if_set FLAG_BERRY2_RETRO, HerronPrairieRetro1_Woman_1
# 102 "data/maps/HerronPrairieRetro1/scripts.pory"
	lock
# 103 "data/maps/HerronPrairieRetro1/scripts.pory"
	faceplayer
# 104 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Woman_Text_1
# 105 "data/maps/HerronPrairieRetro1/scripts.pory"
	giveitem ITEM_CHERI_BERRY
# 106 "data/maps/HerronPrairieRetro1/scripts.pory"
	setflag FLAG_BERRY2_RETRO
# 107 "data/maps/HerronPrairieRetro1/scripts.pory"
	release
	end

HerronPrairieRetro1_Woman_1:
# 95 "data/maps/HerronPrairieRetro1/scripts.pory"
	lock
# 96 "data/maps/HerronPrairieRetro1/scripts.pory"
	faceplayer
# 97 "data/maps/HerronPrairieRetro1/scripts.pory"
	msgbox HerronPrairieRetro1_Woman_Text_0
# 98 "data/maps/HerronPrairieRetro1/scripts.pory"
	release
	end


HerronPrairieRetro1_Teddy_Text_0:
# 8 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Your Pokémon looks so cool!$"

HerronPrairieRetro1_Nora_Text_0:
# 25 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Spring is my favourite moment of the\n"
	.string "year. Seeing flowers and Pokémons\l"
	.string "regain life is an amazing sight.$"

HerronPrairieRetro1_Fred_Text_0:
# 42 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Yanma can't be beaten! Your win is an\n"
	.string "anomaly!$"

HerronPrairieRetro1_Carly_Text_0:
# 59 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "What's in that cave? I'm dying to see\n"
	.string "what's in there...$"

HerronPrairieRetro1_Man_Text_0:
# 78 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "With my sis, we're trying to grow\n"
	.string "berries. The soil doesn't look too good,\l"
	.string "but it should work.$"

HerronPrairieRetro1_Man_Text_1:
# 85 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "With my sis, we're trying to grow\n"
	.string "berries. The soil doesn't look too good,\l"
	.string "but it should work. Here, take this\l"
	.string "berry.$"

HerronPrairieRetro1_Woman_Text_0:
# 97 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "With my bro, we're trying to grow berries\n"
	.string "in here. Fortunately, it should rain in a\l"
	.string "day or two.$"

HerronPrairieRetro1_Woman_Text_1:
# 104 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "With my bro, we're trying to grow berries\n"
	.string "in here. Fortunately, it should rain in a\l"
	.string "day or two. Take this berry!$"

Teddy1::
# 13 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "{PLAYER}! You finally have your own\n"
	.string "Pokémon! Show it to me!$"

Teddy2::
# 17 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Wow, very cool!$"

Nora1::
# 30 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Ah, the smell of spring! The weather is\n"
	.string "getting warmer!$"

Nora2::
# 34 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Very warm indeed!$"

Fred1::
# 47 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Yanma is the best Pokémon of all time!$"

Fred2::
# 51 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Huh? How is it possible?$"

Carly1::
# 64 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "I wanted to visit Xatu's cave, but the\n"
	.string "old man didn't let me in.$"

Carly2::
# 68 "data/maps/HerronPrairieRetro1/scripts.pory"
	.string "Will you try your luck?$"
