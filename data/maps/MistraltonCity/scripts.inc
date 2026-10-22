# 1 "data/maps/MistraltonCity/scripts.pory"

# 2 "data/maps/MistraltonCity/scripts.pory"
MistraltonCity_MapScripts::
# 3 "data/maps/MistraltonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MistraltonCity_OnFrame
# 4 "data/maps/MistraltonCity/scripts.pory"
	.byte 0
# 5 "data/maps/MistraltonCity/scripts.pory"

# 6 "data/maps/MistraltonCity/scripts.pory"
MistraltonCity_OnFrame:
# 7 "data/maps/MistraltonCity/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 50, MistraltonCity_Welcome
# 8 "data/maps/MistraltonCity/scripts.pory"
    .2byte 0

MistraltonCity_Welcome::
# 12 "data/maps/MistraltonCity/scripts.pory"
	lock
# 13 "data/maps/MistraltonCity/scripts.pory"
	applymovement 18, MistraltonCity_Welcome_Movement_0
# 14 "data/maps/MistraltonCity/scripts.pory"
	waitmovement 0
# 15 "data/maps/MistraltonCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MistraltonCity_Welcome_Movement_1
# 16 "data/maps/MistraltonCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/MistraltonCity/scripts.pory"
	namebox MistraltonCity_Welcome_Text_0
# 18 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Welcome_Text_1
# 19 "data/maps/MistraltonCity/scripts.pory"
	hidenamebox
# 20 "data/maps/MistraltonCity/scripts.pory"
	closemessage
# 21 "data/maps/MistraltonCity/scripts.pory"
	applymovement 18, MistraltonCity_Welcome_Movement_2
# 22 "data/maps/MistraltonCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/MistraltonCity/scripts.pory"
	removeobject 18
# 24 "data/maps/MistraltonCity/scripts.pory"
	setflag FLAG_SAM_MISTRALTON
# 25 "data/maps/MistraltonCity/scripts.pory"
	setvar VAR_MAIN_STORY, 51
# 26 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Mechanic::
# 31 "data/maps/MistraltonCity/scripts.pory"
	lock
# 32 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 33 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Mechanic_Text_0
# 34 "data/maps/MistraltonCity/scripts.pory"
	closemessage
# 35 "data/maps/MistraltonCity/scripts.pory"
	turnobject 5, DIR_NORTH
# 36 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Policeman::
# 41 "data/maps/MistraltonCity/scripts.pory"
	lock
# 42 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 43 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Policeman_Text_0
# 44 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_LostGirl::
# 49 "data/maps/MistraltonCity/scripts.pory"
	lock
# 50 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 51 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_LostGirl_Text_0
# 52 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Artist::
# 57 "data/maps/MistraltonCity/scripts.pory"
	lock
# 58 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 59 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Artist_Text_0
# 60 "data/maps/MistraltonCity/scripts.pory"
	closemessage
# 61 "data/maps/MistraltonCity/scripts.pory"
	turnobject 2, DIR_NORTH
# 62 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Scared::
# 67 "data/maps/MistraltonCity/scripts.pory"
	lock
# 68 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 69 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Scared_Text_0
# 70 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Lookout::
# 75 "data/maps/MistraltonCity/scripts.pory"
	lock
# 76 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 77 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Lookout_Text_0
# 78 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Challenger::
# 83 "data/maps/MistraltonCity/scripts.pory"
	lock
# 84 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 85 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Challenger_Text_0
# 86 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Hiker::
# 91 "data/maps/MistraltonCity/scripts.pory"
	lock
# 92 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 93 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Hiker_Text_0
# 94 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Psychic::
# 99 "data/maps/MistraltonCity/scripts.pory"
	lock
# 100 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 101 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Psychic_Text_0
# 102 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Woman::
# 107 "data/maps/MistraltonCity/scripts.pory"
	lock
# 108 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 109 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Woman_Text_0
# 110 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_Picknicker::
# 115 "data/maps/MistraltonCity/scripts.pory"
	lock
# 116 "data/maps/MistraltonCity/scripts.pory"
	faceplayer
# 117 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_Picknicker_Text_0
# 118 "data/maps/MistraltonCity/scripts.pory"
	release
	end


MistraltonCity_TownSign::
# 123 "data/maps/MistraltonCity/scripts.pory"
	lockall
# 124 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_TownSign_Text_0
# 125 "data/maps/MistraltonCity/scripts.pory"
	releaseall
	end


MistraltonCity_CargoSign::
# 130 "data/maps/MistraltonCity/scripts.pory"
	lockall
# 131 "data/maps/MistraltonCity/scripts.pory"
	msgbox MistraltonCity_CargoSign_Text_0
# 132 "data/maps/MistraltonCity/scripts.pory"
	releaseall
	end


# 13 "data/maps/MistraltonCity/scripts.pory"
MistraltonCity_Welcome_Movement_0:
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_down
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_left
# 13 "data/maps/MistraltonCity/scripts.pory"
	walk_left
	step_end

# 15 "data/maps/MistraltonCity/scripts.pory"
MistraltonCity_Welcome_Movement_1:
# 15 "data/maps/MistraltonCity/scripts.pory"
	face_right
	step_end

# 21 "data/maps/MistraltonCity/scripts.pory"
MistraltonCity_Welcome_Movement_2:
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
# 21 "data/maps/MistraltonCity/scripts.pory"
	walk_right
	step_end

MistraltonCity_Welcome_Text_0:
# 17 "data/maps/MistraltonCity/scripts.pory"
	.string "Sam$"

MistraltonCity_Welcome_Text_1:
# 18 "data/maps/MistraltonCity/scripts.pory"
	.string "There you are, {PLAYER}! I just landed\n"
	.string "too, so I haven't had the time to\l"
	.string "properly investigate. And I think I'll\l"
	.string "try some local food before I get into\l"
	.string "the deed! Meet me at the Cargo Station,\l"
	.string "we'll grab something to eat and ask\l"
	.string "locals if they know anything about\l"
	.string "Vikkie.$"

MistraltonCity_Mechanic_Text_0:
# 33 "data/maps/MistraltonCity/scripts.pory"
	.string "I'm the best darn mechanic in all of\n"
	.string "Unova. Look at this helicopter, I built\l"
	.string "it with my bare hands.$"

MistraltonCity_Policeman_Text_0:
# 43 "data/maps/MistraltonCity/scripts.pory"
	.string "Be on the lookout! Always! I'm sensing a\n"
	.string "threat coming to town. I can smell it!$"

MistraltonCity_LostGirl_Text_0:
# 51 "data/maps/MistraltonCity/scripts.pory"
	.string "Every helicopter looks the same, how am\n"
	.string "I supposed to know which one's taking\l"
	.string "me back to Thura?$"

MistraltonCity_Artist_Text_0:
# 59 "data/maps/MistraltonCity/scripts.pory"
	.string "Look at all those vegetables! Those\n"
	.string "colours! How vibrant!$"

MistraltonCity_Scared_Text_0:
# 69 "data/maps/MistraltonCity/scripts.pory"
	.string "I'm hiding here because I'm too scared\n"
	.string "of helicopters.$"

MistraltonCity_Lookout_Text_0:
# 77 "data/maps/MistraltonCity/scripts.pory"
	.string "There isn't supposed to be anyone on\n"
	.string "the tarmac, but no one listens to me. If\l"
	.string "someone dies, that's not my problem.\l"
	.string "Nuh-uh.$"

MistraltonCity_Challenger_Text_0:
# 85 "data/maps/MistraltonCity/scripts.pory"
	.string "I came all the way from Nuvema Town to\n"
	.string "get my 6th badge, but apparently the\l"
	.string "gym closed? What?$"

MistraltonCity_Hiker_Text_0:
# 93 "data/maps/MistraltonCity/scripts.pory"
	.string "I'm sorry lad, but I can't let you enter\n"
	.string "Chargestone Cave. It's too dangerous\l"
	.string "right now.$"

MistraltonCity_Psychic_Text_0:
# 101 "data/maps/MistraltonCity/scripts.pory"
	.string "I heard that there's some rare\n"
	.string "Pokémons inside Celestial Tower, up\l"
	.string "north! I need to see them!$"

MistraltonCity_Woman_Text_0:
# 109 "data/maps/MistraltonCity/scripts.pory"
	.string "Welcome to Mistralton City! Nice place\n"
	.string "to live in, huh?$"

MistraltonCity_Picknicker_Text_0:
# 117 "data/maps/MistraltonCity/scripts.pory"
	.string "I call dibs on this spot! Yes, right here,\n"
	.string "on the puddle!$"

MistraltonCity_TownSign_Text_0:
# 124 "data/maps/MistraltonCity/scripts.pory"
	.string "Mistralton City\n"
	.string "Strewn with windblown leaves.$"

MistraltonCity_CargoSign_Text_0:
# 131 "data/maps/MistraltonCity/scripts.pory"
	.string "Mistralton Cargo Service\n"
	.string "Our slogan is 'Quick and Safe!'$"
