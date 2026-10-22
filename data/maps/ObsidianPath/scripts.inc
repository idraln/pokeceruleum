# 1 "data/maps/ObsidianPath/scripts.pory"

# 2 "data/maps/ObsidianPath/scripts.pory"
ObsidianPath_MapScripts::
# 3 "data/maps/ObsidianPath/scripts.pory"
	.byte 0

ObsidianPath_LostHiker::
# 7 "data/maps/ObsidianPath/scripts.pory"
	lock
# 8 "data/maps/ObsidianPath/scripts.pory"
	faceplayer
# 9 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_LostHiker_Text_0, MSGBOX_YESNO
# 10 "data/maps/ObsidianPath/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ObsidianPath_LostHiker_2
# 21 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_LostHiker_Text_3
ObsidianPath_LostHiker_1:
# 23 "data/maps/ObsidianPath/scripts.pory"
	release
	end

ObsidianPath_LostHiker_2:
# 11 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_LostHiker_Text_1
# 12 "data/maps/ObsidianPath/scripts.pory"
	closemessage
# 13 "data/maps/ObsidianPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/ObsidianPath/scripts.pory"
	special HealPlayerParty
# 15 "data/maps/ObsidianPath/scripts.pory"
	playfanfare MUS_HEAL
# 16 "data/maps/ObsidianPath/scripts.pory"
	waitfanfare
# 17 "data/maps/ObsidianPath/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_LostHiker_Text_2
	goto ObsidianPath_LostHiker_1


ObsidianPath_Item::
# 28 "data/maps/ObsidianPath/scripts.pory"
	lock
# 29 "data/maps/ObsidianPath/scripts.pory"
	removeobject 3
# 30 "data/maps/ObsidianPath/scripts.pory"
	giveitem ITEM_TM30
# 31 "data/maps/ObsidianPath/scripts.pory"
	setflag FLAG_ITEM_OBSIDIAN_1
# 32 "data/maps/ObsidianPath/scripts.pory"
	release
	end


ObsidianPath_Joanne::
# 37 "data/maps/ObsidianPath/scripts.pory"
	trainerbattle_single TRAINER_OBSIDIAN_1, Joanne1, Joanne2
# 38 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_Joanne_Text_0
# 39 "data/maps/ObsidianPath/scripts.pory"
	release
	end


ObsidianPath_Julian::
# 54 "data/maps/ObsidianPath/scripts.pory"
	trainerbattle_single TRAINER_OBSIDIAN_2, Julian1, Julian2
# 55 "data/maps/ObsidianPath/scripts.pory"
	msgbox ObsidianPath_Julian_Text_0
# 56 "data/maps/ObsidianPath/scripts.pory"
	release
	end


ObsidianPath_LostHiker_Text_0:
# 9 "data/maps/ObsidianPath/scripts.pory"
	.string "That's one hell of a hike, eh? Want to\n"
	.string "rest with me? We'll settle a bivouac.$"

ObsidianPath_LostHiker_Text_1:
# 11 "data/maps/ObsidianPath/scripts.pory"
	.string "Wise choice, kid. Here, let me heal your\n"
	.string "party.$"

ObsidianPath_LostHiker_Text_2:
# 18 "data/maps/ObsidianPath/scripts.pory"
	.string "See? Nothing more soothing than a camp\n"
	.string "in a moist, scary cave.$"

ObsidianPath_LostHiker_Text_3:
# 21 "data/maps/ObsidianPath/scripts.pory"
	.string "Heh, it's up to you, kiddo. If you ever\n"
	.string "change your mind, I'll be right here.$"

ObsidianPath_Joanne_Text_0:
# 38 "data/maps/ObsidianPath/scripts.pory"
	.string "Leave me alone! Leave me alone!$"

ObsidianPath_Julian_Text_0:
# 55 "data/maps/ObsidianPath/scripts.pory"
	.string "Woah, this place sure is scary! But is\n"
	.string "there any bug Pokémon in here? I might\l"
	.string "stay a little longer, actually.$"

Joanne1::
# 43 "data/maps/ObsidianPath/scripts.pory"
	.string "Leave me alone!$"

Joanne2::
# 47 "data/maps/ObsidianPath/scripts.pory"
	.string "Leave... Me...$"

Julian1::
# 60 "data/maps/ObsidianPath/scripts.pory"
	.string "This is not the retreat, is it?$"

Julian2::
# 64 "data/maps/ObsidianPath/scripts.pory"
	.string "That's what I thought...$"
