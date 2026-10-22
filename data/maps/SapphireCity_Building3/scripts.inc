# 1 "data/maps/SapphireCity_Building3/scripts.pory"

# 2 "data/maps/SapphireCity_Building3/scripts.pory"
SapphireCity_Building3_MapScripts::
# 3 "data/maps/SapphireCity_Building3/scripts.pory"
	.byte 0

SapphireCity_Building3_Girl::
# 7 "data/maps/SapphireCity_Building3/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Girl_Text_0
# 9 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Girl_Text_0
# 10 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Girl_Text_1
# 11 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Girl_Text_0
# 12 "data/maps/SapphireCity_Building3/scripts.pory"
	faceplayer
# 13 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Girl_Text_2
# 14 "data/maps/SapphireCity_Building3/scripts.pory"
	release
	end


SapphireCity_Building3_Dishes::
# 19 "data/maps/SapphireCity_Building3/scripts.pory"
	lock
# 20 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Dishes_Text_0
# 21 "data/maps/SapphireCity_Building3/scripts.pory"
	release
	end


SapphireCity_Building3_Drowsy::
# 26 "data/maps/SapphireCity_Building3/scripts.pory"
	lock
# 27 "data/maps/SapphireCity_Building3/scripts.pory"
	goto_if_set FLAG_DROWSY_SAPPHIRE, SapphireCity_Building3_Drowsy_1
# 33 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Drowsy_Text_1
# 34 "data/maps/SapphireCity_Building3/scripts.pory"
	faceplayer
# 35 "data/maps/SapphireCity_Building3/scripts.pory"
	applymovement 2, SCB3_Drowsy
# 36 "data/maps/SapphireCity_Building3/scripts.pory"
	waitmovement 0
# 37 "data/maps/SapphireCity_Building3/scripts.pory"
	delay 10
# 38 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Drowsy_Text_2
# 39 "data/maps/SapphireCity_Building3/scripts.pory"
	trainerbattle_no_intro TRAINER_SAPPHIRE_DROWSY, SCB3_Drowsy_Defeat
# 40 "data/maps/SapphireCity_Building3/scripts.pory"
	setflag FLAG_DROWSY_SAPPHIRE
# 41 "data/maps/SapphireCity_Building3/scripts.pory"
	release
	end

SapphireCity_Building3_Drowsy_1:
# 28 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Drowsy_Text_0
# 29 "data/maps/SapphireCity_Building3/scripts.pory"
	release
	end


SapphireCity_Building3_Beauty::
# 47 "data/maps/SapphireCity_Building3/scripts.pory"
	lock
# 48 "data/maps/SapphireCity_Building3/scripts.pory"
	faceplayer
# 49 "data/maps/SapphireCity_Building3/scripts.pory"
	msgbox SapphireCity_Building3_Beauty_Text_0
# 50 "data/maps/SapphireCity_Building3/scripts.pory"
	release
	end


# 54 "data/maps/SapphireCity_Building3/scripts.pory"
SCB3_Drowsy:
# 55 "data/maps/SapphireCity_Building3/scripts.pory"
	emote_double_exclamation_mark
	step_end

SapphireCity_Building3_Girl_Text_0:
# 8 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "...$"

SapphireCity_Building3_Girl_Text_1:
# 10 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "...What do you mean you won't go? You\n"
	.string "know how much it's important to me! UGH!$"

SapphireCity_Building3_Girl_Text_2:
# 13 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "Uh, excuse me? Can I help you? Don't you\n"
	.string "know it's very impolite to listen to\l"
	.string "other people's conversations on the\l"
	.string "telephone?$"

SapphireCity_Building3_Dishes_Text_0:
# 20 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "Always me. Always John, on dish duty. In\n"
	.string "the restaurant, and now at home. Why?$"

SapphireCity_Building3_Drowsy_Text_0:
# 28 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "...uuuuh...\n"
	.string "...sleep...$"

SapphireCity_Building3_Drowsy_Text_1:
# 33 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "Bed... Not now... But sleep... Bed...$"

SapphireCity_Building3_Drowsy_Text_2:
# 38 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "AH!! For Arceus' sake, you scared me so\n"
	.string "bad! You'll pay for that!$"

SapphireCity_Building3_Beauty_Text_0:
# 49 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "Howdy! I feel great today. I don't know\n"
	.string "why, but I feel great. Someone entering\l"
	.string "my home without my permission isn't\l"
	.string "even bothering me!... Yes, I'm talking\l"
	.string "about you.$"

SCB3_Drowsy_Defeat::
# 58 "data/maps/SapphireCity_Building3/scripts.pory"
	.string "...mbllost?....mmmh...$"
