# 1 "data/maps/SapphireCity_Building2/scripts.pory"

# 2 "data/maps/SapphireCity_Building2/scripts.pory"
SapphireCity_Building2_MapScripts::
# 3 "data/maps/SapphireCity_Building2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SapphireCity_Building2_OnFrame
# 4 "data/maps/SapphireCity_Building2/scripts.pory"
	.byte 0
# 5 "data/maps/SapphireCity_Building2/scripts.pory"

# 6 "data/maps/SapphireCity_Building2/scripts.pory"
SapphireCity_Building2_OnFrame:
# 7 "data/maps/SapphireCity_Building2/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 40, SapphireCity_Building2_Call
# 8 "data/maps/SapphireCity_Building2/scripts.pory"
    .2byte 0

SapphireCity_Building2_Call::
# 12 "data/maps/SapphireCity_Building2/scripts.pory"
	lockall
# 13 "data/maps/SapphireCity_Building2/scripts.pory"
	delay 40
# 14 "data/maps/SapphireCity_Building2/scripts.pory"
	pokenavcall BernardCall
# 15 "data/maps/SapphireCity_Building2/scripts.pory"
	waitmessage
# 16 "data/maps/SapphireCity_Building2/scripts.pory"
	clearflag FLAG_BRUCE_GUARDING_DIANCIE
# 17 "data/maps/SapphireCity_Building2/scripts.pory"
	setflag FLAG_DIANCIE
# 18 "data/maps/SapphireCity_Building2/scripts.pory"
	clearflag FLAG_DIANCIE_POST
# 19 "data/maps/SapphireCity_Building2/scripts.pory"
	setvar VAR_MAIN_STORY, 41
# 20 "data/maps/SapphireCity_Building2/scripts.pory"
	completequest QUEST_FIND_XATU
# 21 "data/maps/SapphireCity_Building2/scripts.pory"
	startquest QUEST_PRESIDENT
# 22 "data/maps/SapphireCity_Building2/scripts.pory"
	releaseall
	end


SapphireCity_Building2_Sam_1st::
# 43 "data/maps/SapphireCity_Building2/scripts.pory"
	lock
# 44 "data/maps/SapphireCity_Building2/scripts.pory"
	faceplayer
# 45 "data/maps/SapphireCity_Building2/scripts.pory"
	namebox SapphireCity_Building2_Sam_1st_Text_0
# 46 "data/maps/SapphireCity_Building2/scripts.pory"
	msgbox SapphireCity_Building2_Sam_1st_Text_1
# 47 "data/maps/SapphireCity_Building2/scripts.pory"
	hidenamebox
# 48 "data/maps/SapphireCity_Building2/scripts.pory"
	release
	end


SapphireCity_Building2_Man::
# 53 "data/maps/SapphireCity_Building2/scripts.pory"
	lock
# 54 "data/maps/SapphireCity_Building2/scripts.pory"
	faceplayer
# 55 "data/maps/SapphireCity_Building2/scripts.pory"
	msgbox SapphireCity_Building2_Man_Text_0
# 56 "data/maps/SapphireCity_Building2/scripts.pory"
	release
	end


# 60 "data/maps/SapphireCity_Building2/scripts.pory"
SCB2_Sam_Sud:
# 61 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_down
# 61 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_down
# 62 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 62 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 62 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 63 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_up
# 64 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 64 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
	step_end

# 67 "data/maps/SapphireCity_Building2/scripts.pory"
SCB2_Sam_Nord:
# 68 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_up
# 69 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 69 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 69 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 70 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_down
# 71 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
# 71 "data/maps/SapphireCity_Building2/scripts.pory"
	walk_fast_left
	step_end

SapphireCity_Building2_Sam_1st_Text_0:
# 45 "data/maps/SapphireCity_Building2/scripts.pory"
	.string "Sam$"

SapphireCity_Building2_Sam_1st_Text_1:
# 46 "data/maps/SapphireCity_Building2/scripts.pory"
	.string "Hey {PLAYER}, did you go to the\n"
	.string "Pokémon League yet?$"

SapphireCity_Building2_Man_Text_0:
# 55 "data/maps/SapphireCity_Building2/scripts.pory"
	.string "You smell that? I've cooked a slice of\n"
	.string "Magikarp with some Cheri Berries. I'm\l"
	.string "about to feast on that thing!$"

BernardCall::
# 26 "data/maps/SapphireCity_Building2/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Bernard: Hey, {PLAYER}.\p"
	.string "… … … … … …\p"
	.string "Just wanted to thank you for\n"
	.string "bringing peace back in Thura.\l"
	.string "You should come to the Pokémon\l"
	.string "League now, face the Council\l"
	.string "and become the new President.\l"
	.string "… … … … … …\p"
	.string "Believe me, that's what he\n"
	.string "would've wanted... I'll wait\l"
	.string "for you.\l"
	.string "… … … … … …\n… … … … … Click!$"
