# 1 "data/maps/PkmnLeagueHQ/scripts.pory"

# 2 "data/maps/PkmnLeagueHQ/scripts.pory"
PkmnLeagueHQ_MapScripts::
# 3 "data/maps/PkmnLeagueHQ/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, PkmnLeagueHQ_OnTransition
# 4 "data/maps/PkmnLeagueHQ/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, PkmnLeagueHQ_OnFrame
# 5 "data/maps/PkmnLeagueHQ/scripts.pory"
	.byte 0
# 6 "data/maps/PkmnLeagueHQ/scripts.pory"

# 7 "data/maps/PkmnLeagueHQ/scripts.pory"
PkmnLeagueHQ_OnFrame:
# 8 "data/maps/PkmnLeagueHQ/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 9, PkmnLeagueHQ_Arrival
# 9 "data/maps/PkmnLeagueHQ/scripts.pory"
    .2byte 0

PkmnLeagueHQ_OnTransition::
# 13 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_VISITED_LEAGUE_HQ
	return


PkmnLeagueHQ_Arrival::
# 17 "data/maps/PkmnLeagueHQ/scripts.pory"
	lockall
# 18 "data/maps/PkmnLeagueHQ/scripts.pory"
	faceplayer
# 19 "data/maps/PkmnLeagueHQ/scripts.pory"
	pokenavcall PKMNLSam
# 20 "data/maps/PkmnLeagueHQ/scripts.pory"
	waitmessage
# 21 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_SAM_SAPPHIRE
# 22 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_PP_STUDENT
# 23 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_LAILA_STORMING
# 24 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_LAILA_GRANDMA
# 25 "data/maps/PkmnLeagueHQ/scripts.pory"
	setflag FLAG_GRUNT_CRUZEIRA
# 26 "data/maps/PkmnLeagueHQ/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PkmnLeagueHQ/scripts.pory"
	setvar VAR_MAIN_STORY, 10
# 28 "data/maps/PkmnLeagueHQ/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 2
# 29 "data/maps/PkmnLeagueHQ/scripts.pory"
	releaseall
	end


PkmnLeagueHQ_Sign::
# 34 "data/maps/PkmnLeagueHQ/scripts.pory"
	lockall
# 35 "data/maps/PkmnLeagueHQ/scripts.pory"
	msgbox PkmnLeagueHQ_Sign_Text_0
# 36 "data/maps/PkmnLeagueHQ/scripts.pory"
	releaseall
	end


PkmnLeagueHQ_Sign_Text_0:
# 35 "data/maps/PkmnLeagueHQ/scripts.pory"
	.string "Pokémon League Headquarters$"

PKMNLSam::
# 40 "data/maps/PkmnLeagueHQ/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Hiya, {PLAYER}, it's me, Sam!\n"
	.string "So, did you see the guys at\p"
	.string "the Pokémon League?\p"
	.string "… … … … … …\p"
	.string "You did? And what did they tell\n"
	.string "you?\p"
	.string "… … … … … …\p"
	.string "Oh wow... I'm sorry to hear dude.\n"
	.string "Well, how about we take on\l"
	.string "the Council Challenge together, at\l"
	.string "the same time? So we can see\l"
	.string "who's really the greatest trainer!\p"
	.string "… … … … … …\p"
	.string "Nah, I know you're the best, I'm\n"
	.string "just messing with you. Last one\l"
	.string "to Cruzeira is a big stinker!\p"
	.string "… … … … … …\n… … … … … Click!$"
