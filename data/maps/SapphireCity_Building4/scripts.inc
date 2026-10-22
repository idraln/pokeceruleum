# 1 "data/maps/SapphireCity_Building4/scripts.pory"

# 2 "data/maps/SapphireCity_Building4/scripts.pory"
SapphireCity_Building4_MapScripts::
# 3 "data/maps/SapphireCity_Building4/scripts.pory"
	.byte 0

SapphireCity_Building4_Lover1::
# 7 "data/maps/SapphireCity_Building4/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building4/scripts.pory"
	compare VAR_SAPPHIRE_LOVERS, 0
	goto_if_eq SapphireCity_Building4_Lover1_2
# 18 "data/maps/SapphireCity_Building4/scripts.pory"
	compare VAR_SAPPHIRE_LOVERS, 1
	goto_if_eq SapphireCity_Building4_Lover1_3
# 22 "data/maps/SapphireCity_Building4/scripts.pory"
	compare VAR_SAPPHIRE_LOVERS, 2
	goto_if_eq SapphireCity_Building4_Lover1_4
# 32 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_5
SapphireCity_Building4_Lover1_1:
# 34 "data/maps/SapphireCity_Building4/scripts.pory"
	release
	end

SapphireCity_Building4_Lover1_2:
# 9 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_0
# 10 "data/maps/SapphireCity_Building4/scripts.pory"
	faceplayer
# 11 "data/maps/SapphireCity_Building4/scripts.pory"
	applymovement 1, SapphireCity_Building4_Lover1_Movement_0
# 12 "data/maps/SapphireCity_Building4/scripts.pory"
	waitmovement 0
# 13 "data/maps/SapphireCity_Building4/scripts.pory"
	playse SE_PIN
# 14 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_1
# 15 "data/maps/SapphireCity_Building4/scripts.pory"
	startquest QUEST_LOVE
# 16 "data/maps/SapphireCity_Building4/scripts.pory"
	setvar VAR_SAPPHIRE_LOVERS, 1
	goto SapphireCity_Building4_Lover1_1

SapphireCity_Building4_Lover1_3:
# 19 "data/maps/SapphireCity_Building4/scripts.pory"
	faceplayer
# 20 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_2
	goto SapphireCity_Building4_Lover1_1

SapphireCity_Building4_Lover1_4:
# 23 "data/maps/SapphireCity_Building4/scripts.pory"
	faceplayer
# 24 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_3
# 25 "data/maps/SapphireCity_Building4/scripts.pory"
	giveitem ITEM_CHARCOAL
# 26 "data/maps/SapphireCity_Building4/scripts.pory"
	setvar VAR_SAPPHIRE_LOVERS, 3
# 27 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover1_Text_4
# 28 "data/maps/SapphireCity_Building4/scripts.pory"
	completequest QUEST_LOVE
# 29 "data/maps/SapphireCity_Building4/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto SapphireCity_Building4_Lover1_1


SapphireCity_Building4_Lover2::
# 39 "data/maps/SapphireCity_Building4/scripts.pory"
	lock
# 40 "data/maps/SapphireCity_Building4/scripts.pory"
	msgbox SapphireCity_Building4_Lover2_Text_0
# 41 "data/maps/SapphireCity_Building4/scripts.pory"
	release
	end


SapphireCity_Building4_Item::
# 46 "data/maps/SapphireCity_Building4/scripts.pory"
	lock
# 47 "data/maps/SapphireCity_Building4/scripts.pory"
	removeobject 2
# 48 "data/maps/SapphireCity_Building4/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 49 "data/maps/SapphireCity_Building4/scripts.pory"
	setflag FLAG_ITEM_SAPPHIRE_B4
# 50 "data/maps/SapphireCity_Building4/scripts.pory"
	release
	end


# 11 "data/maps/SapphireCity_Building4/scripts.pory"
SapphireCity_Building4_Lover1_Movement_0:
# 11 "data/maps/SapphireCity_Building4/scripts.pory"
	emote_exclamation_mark
	step_end

SapphireCity_Building4_Lover1_Text_0:
# 9 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "...Where is he? He told me he would be\n"
	.string "here after work. I'm already stressed\l"
	.string "out as is...$"

SapphireCity_Building4_Lover1_Text_1:
# 14 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "Oh! Uhm, did you happen to find a guy\n"
	.string "around the block? I have a date with\l"
	.string "him and he doesn't answer the phone...\l"
	.string "He's also a scientist, he's dressed up in\l"
	.string "a labcoat.$"

SapphireCity_Building4_Lover1_Text_2:
# 20 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "Have you told him yet? Please... I'll\n"
	.string "reward you.$"

SapphireCity_Building4_Lover1_Text_3:
# 24 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "Thank you so much! Have this.$"

SapphireCity_Building4_Lover1_Text_4:
# 27 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "Now, if you'll excuse us...$"

SapphireCity_Building4_Lover1_Text_5:
# 32 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "Thank you again! It's time to leave us\n"
	.string "alone now.$"

SapphireCity_Building4_Lover2_Text_0:
# 40 "data/maps/SapphireCity_Building4/scripts.pory"
	.string "God, you're as beautiful as the photos\n"
	.string "you shared...$"
