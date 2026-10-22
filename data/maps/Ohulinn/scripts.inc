# 1 "data/maps/Ohulinn/scripts.pory"

# 2 "data/maps/Ohulinn/scripts.pory"
Ohulinn_MapScripts::
# 3 "data/maps/Ohulinn/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ohulinn_OnTransition
# 4 "data/maps/Ohulinn/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Ohulinn_OnFrame
# 5 "data/maps/Ohulinn/scripts.pory"
	.byte 0
# 6 "data/maps/Ohulinn/scripts.pory"

# 7 "data/maps/Ohulinn/scripts.pory"
Ohulinn_OnFrame:
# 8 "data/maps/Ohulinn/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 15, Ohulinn_UnknownCaller
# 9 "data/maps/Ohulinn/scripts.pory"
    .2byte 0

Ohulinn_OnTransition::
# 13 "data/maps/Ohulinn/scripts.pory"
	setflag FLAG_VISITED_OHULINN
	return


Ohulinn_UnknownCaller::
# 17 "data/maps/Ohulinn/scripts.pory"
	lockall
# 18 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 19 "data/maps/Ohulinn/scripts.pory"
	pokenavcall OhulinnCall
# 20 "data/maps/Ohulinn/scripts.pory"
	waitmessage
# 21 "data/maps/Ohulinn/scripts.pory"
	setvar VAR_MAIN_STORY, 16
# 22 "data/maps/Ohulinn/scripts.pory"
	setflag FLAG_PARTY_GOERS
# 23 "data/maps/Ohulinn/scripts.pory"
	setflag FLAG_BLACKSTONE_NPC
# 24 "data/maps/Ohulinn/scripts.pory"
	clearflag FLAG_BLACKSTONE_TRAINERS
# 25 "data/maps/Ohulinn/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/Ohulinn/scripts.pory"
	setvar VAR_LOST_BOY_1, 0
# 27 "data/maps/Ohulinn/scripts.pory"
	setvar VAR_LOST_BOY_2, 0
# 28 "data/maps/Ohulinn/scripts.pory"
	releaseall
	end


Ohulinn_Man::
# 33 "data/maps/Ohulinn/scripts.pory"
	lock
# 34 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 35 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Man_Text_0
# 36 "data/maps/Ohulinn/scripts.pory"
	release
	end


Ohulinn_Woman::
# 41 "data/maps/Ohulinn/scripts.pory"
	lock
# 42 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 43 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Woman_Text_0
# 44 "data/maps/Ohulinn/scripts.pory"
	release
	end


Ohulinn_Old::
# 49 "data/maps/Ohulinn/scripts.pory"
	lock
# 50 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 51 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Old_Text_0
# 52 "data/maps/Ohulinn/scripts.pory"
	turnobject 4, DIR_EAST
# 53 "data/maps/Ohulinn/scripts.pory"
	release
	end


Ohulinn_Boy::
# 58 "data/maps/Ohulinn/scripts.pory"
	goto_if_set FLAG_OHULINN_HEADBUTT, Ohulinn_Boy_1
# 66 "data/maps/Ohulinn/scripts.pory"
	lock
# 67 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 68 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Boy_Text_1
# 69 "data/maps/Ohulinn/scripts.pory"
	giveitem ITEM_TM02
# 70 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Boy_Text_2
# 71 "data/maps/Ohulinn/scripts.pory"
	setflag FLAG_OHULINN_HEADBUTT
# 72 "data/maps/Ohulinn/scripts.pory"
	release
	end

Ohulinn_Boy_1:
# 59 "data/maps/Ohulinn/scripts.pory"
	lock
# 60 "data/maps/Ohulinn/scripts.pory"
	faceplayer
# 61 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Boy_Text_0
# 62 "data/maps/Ohulinn/scripts.pory"
	release
	end


Ohulinn_Sign::
# 78 "data/maps/Ohulinn/scripts.pory"
	lockall
# 79 "data/maps/Ohulinn/scripts.pory"
	msgbox Ohulinn_Sign_Text_0
# 80 "data/maps/Ohulinn/scripts.pory"
	releaseall
	end


Ohulinn_Man_Text_0:
# 35 "data/maps/Ohulinn/scripts.pory"
	.string "Welcome to Ohulinn! Don't get weirded\n"
	.string "out by the wind, it's usually stronger\l"
	.string "than that.$"

Ohulinn_Woman_Text_0:
# 43 "data/maps/Ohulinn/scripts.pory"
	.string "I came here thinking I could go and dive\n"
	.string "to witness the depths of Ohulinn, but\l"
	.string "the currents are too strong...$"

Ohulinn_Old_Text_0:
# 51 "data/maps/Ohulinn/scripts.pory"
	.string "Hmmm... The wind hitting my face makes\n"
	.string "me feel young again. Vigorous, even.$"

Ohulinn_Boy_Text_0:
# 61 "data/maps/Ohulinn/scripts.pory"
	.string "Hey! Found any surprises yet?$"

Ohulinn_Boy_Text_1:
# 68 "data/maps/Ohulinn/scripts.pory"
	.string "You can Headbutt trees like these\n"
	.string "ones! Well, not you, but your Pokémons.\l"
	.string "Try this!$"

Ohulinn_Boy_Text_2:
# 70 "data/maps/Ohulinn/scripts.pory"
	.string "When you stand in front of a tree, make\n"
	.string "your Pokémon Headbutt it, and you'll\l"
	.string "get a surprise!$"

Ohulinn_Sign_Text_0:
# 79 "data/maps/Ohulinn/scripts.pory"
	.string "Ohulinn\n"
	.string "Where the wind never sets.$"

OhulinnCall::
# 84 "data/maps/Ohulinn/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "...Hi. {PLAYER}, is that right?\p"
	.string "… … … … … …\p"
	.string "I know what happened to you.\n"
	.string "And to your Xatu.\p"
	.string "… … … … … …\p"
	.string "Meet me in Vikkelson.\n"
	.string "Northeast of Sapphire City.\l"
	.string "Come to the mansion.\l"
	.string "Center of the city.\l"
	.string "You can't miss it.\l"
	.string "Don't tell anyone I called.\p"
	.string "… … … … … …\n… … … … … Click!$"
