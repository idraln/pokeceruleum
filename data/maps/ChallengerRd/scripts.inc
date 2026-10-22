# 1 "data/maps/ChallengerRd/scripts.pory"

# 2 "data/maps/ChallengerRd/scripts.pory"
ChallengerRd_MapScripts::
# 3 "data/maps/ChallengerRd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChallengerRd_OnFrame
# 4 "data/maps/ChallengerRd/scripts.pory"
	.byte 0
# 5 "data/maps/ChallengerRd/scripts.pory"

# 6 "data/maps/ChallengerRd/scripts.pory"
ChallengerRd_OnFrame:
# 7 "data/maps/ChallengerRd/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 41, ChallengerRd_Welcome
# 8 "data/maps/ChallengerRd/scripts.pory"
    .2byte 0

ChallengerRd_Welcome::
# 12 "data/maps/ChallengerRd/scripts.pory"
	lock
# 13 "data/maps/ChallengerRd/scripts.pory"
	namebox ChallengerRd_Welcome_Text_0
# 14 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Welcome_Text_1
# 15 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 16 "data/maps/ChallengerRd/scripts.pory"
	hidenamebox
# 17 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 18 "data/maps/ChallengerRd/scripts.pory"
	turnobject 1, DIR_SOUTH
# 19 "data/maps/ChallengerRd/scripts.pory"
	delay 40
# 20 "data/maps/ChallengerRd/scripts.pory"
	turnobject 1, DIR_NORTH
# 21 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 22 "data/maps/ChallengerRd/scripts.pory"
	namebox ChallengerRd_Welcome_Text_0
# 23 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Welcome_Text_2
# 24 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 25 "data/maps/ChallengerRd/scripts.pory"
	hidenamebox
# 26 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 27 "data/maps/ChallengerRd/scripts.pory"
	turnobject 1, DIR_WEST
# 28 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 29 "data/maps/ChallengerRd/scripts.pory"
	namebox ChallengerRd_Welcome_Text_0
# 30 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Welcome_Text_3
# 31 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 32 "data/maps/ChallengerRd/scripts.pory"
	hidenamebox
# 33 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 34 "data/maps/ChallengerRd/scripts.pory"
	turnobject 1, DIR_EAST
# 35 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 36 "data/maps/ChallengerRd/scripts.pory"
	namebox ChallengerRd_Welcome_Text_0
# 37 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Welcome_Text_4
# 38 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 39 "data/maps/ChallengerRd/scripts.pory"
	hidenamebox
# 40 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 41 "data/maps/ChallengerRd/scripts.pory"
	turnobject 1, DIR_NORTH
# 42 "data/maps/ChallengerRd/scripts.pory"
	delay 20
# 43 "data/maps/ChallengerRd/scripts.pory"
	namebox ChallengerRd_Welcome_Text_0
# 44 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Welcome_Text_5
# 45 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 46 "data/maps/ChallengerRd/scripts.pory"
	hidenamebox
# 47 "data/maps/ChallengerRd/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ChallengerRd_Welcome_Movement_0
# 48 "data/maps/ChallengerRd/scripts.pory"
	applymovement 1, ChallengerRd_Welcome_Movement_1
# 49 "data/maps/ChallengerRd/scripts.pory"
	waitmovement 0
# 50 "data/maps/ChallengerRd/scripts.pory"
	removeobject 1
# 51 "data/maps/ChallengerRd/scripts.pory"
	playse SE_EXIT
# 52 "data/maps/ChallengerRd/scripts.pory"
	setflag FLAG_BERNARD_CHALL
# 53 "data/maps/ChallengerRd/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 54 "data/maps/ChallengerRd/scripts.pory"
	setvar VAR_CHALL_SWITCH_1, 0
# 55 "data/maps/ChallengerRd/scripts.pory"
	setvar VAR_MAIN_STORY, 42
# 56 "data/maps/ChallengerRd/scripts.pory"
	release
	end


ChallengerRd_Gregory::
# 61 "data/maps/ChallengerRd/scripts.pory"
	trainerbattle_single TRAINER_CHALL_1, Gregory1, Gregory2
# 62 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Gregory_Text_0
# 63 "data/maps/ChallengerRd/scripts.pory"
	closemessage
	end


ChallengerRd_Hubert::
# 78 "data/maps/ChallengerRd/scripts.pory"
	trainerbattle_single TRAINER_CHALL_2, Hubert1, Hubert2
# 79 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Hubert_Text_0
# 80 "data/maps/ChallengerRd/scripts.pory"
	closemessage
	end


ChallengerRd_Maisie::
# 95 "data/maps/ChallengerRd/scripts.pory"
	trainerbattle_single TRAINER_CHALL_3, Maisie1, Maisie2
# 96 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Maisie_Text_0
# 97 "data/maps/ChallengerRd/scripts.pory"
	closemessage
	end


ChallengerRd_Tamara::
# 112 "data/maps/ChallengerRd/scripts.pory"
	trainerbattle_single TRAINER_CHALL_4, Tamara1, Tamara2
# 113 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Tamara_Text_0
# 114 "data/maps/ChallengerRd/scripts.pory"
	closemessage
	end


ChallengerRd_Claudie::
# 129 "data/maps/ChallengerRd/scripts.pory"
	trainerbattle_single TRAINER_CHALL_5, Claudie1, Claudie2
# 130 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Claudie_Text_0
# 131 "data/maps/ChallengerRd/scripts.pory"
	closemessage
	end


ChallengerRd_Nurse::
# 146 "data/maps/ChallengerRd/scripts.pory"
	lock
# 147 "data/maps/ChallengerRd/scripts.pory"
	faceplayer
# 148 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Nurse_Text_0, MSGBOX_YESNO
# 149 "data/maps/ChallengerRd/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChallengerRd_Nurse_2
# 160 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Nurse_Text_3
ChallengerRd_Nurse_1:
# 162 "data/maps/ChallengerRd/scripts.pory"
	release
	end

ChallengerRd_Nurse_2:
# 150 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Nurse_Text_1
# 151 "data/maps/ChallengerRd/scripts.pory"
	closemessage
# 152 "data/maps/ChallengerRd/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/ChallengerRd/scripts.pory"
	special HealPlayerParty
# 154 "data/maps/ChallengerRd/scripts.pory"
	playfanfare MUS_HEAL
# 155 "data/maps/ChallengerRd/scripts.pory"
	waitfanfare
# 156 "data/maps/ChallengerRd/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 157 "data/maps/ChallengerRd/scripts.pory"
	msgbox ChallengerRd_Nurse_Text_2
	goto ChallengerRd_Nurse_1


ChallengerRd_Item::
# 167 "data/maps/ChallengerRd/scripts.pory"
	lock
# 168 "data/maps/ChallengerRd/scripts.pory"
	removeobject 8
# 169 "data/maps/ChallengerRd/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 170 "data/maps/ChallengerRd/scripts.pory"
	setflag FLAG_ITEM_CHALL_1
# 171 "data/maps/ChallengerRd/scripts.pory"
	release
	end


ChallengerRd_Item2::
# 176 "data/maps/ChallengerRd/scripts.pory"
	lock
# 177 "data/maps/ChallengerRd/scripts.pory"
	removeobject 9
# 178 "data/maps/ChallengerRd/scripts.pory"
	giveitem ITEM_TM25
# 179 "data/maps/ChallengerRd/scripts.pory"
	setflag FLAG_ITEM_CHALL_2
# 180 "data/maps/ChallengerRd/scripts.pory"
	release
	end


# 47 "data/maps/ChallengerRd/scripts.pory"
ChallengerRd_Welcome_Movement_0:
# 47 "data/maps/ChallengerRd/scripts.pory"
	walk_left
# 47 "data/maps/ChallengerRd/scripts.pory"
	face_right
	step_end

# 48 "data/maps/ChallengerRd/scripts.pory"
ChallengerRd_Welcome_Movement_1:
# 48 "data/maps/ChallengerRd/scripts.pory"
	walk_up
# 48 "data/maps/ChallengerRd/scripts.pory"
	walk_up
	step_end

ChallengerRd_Welcome_Text_0:
# 13 "data/maps/ChallengerRd/scripts.pory"
	.string "Bernard$"

ChallengerRd_Welcome_Text_1:
# 14 "data/maps/ChallengerRd/scripts.pory"
	.string "{PLAYER}, welcome once again to\n"
	.string "Challenger Road! The ultimate test\l"
	.string "before facing the Council, and the\l"
	.string "Pres- oh...$"

ChallengerRd_Welcome_Text_2:
# 23 "data/maps/ChallengerRd/scripts.pory"
	.string "...Sorry about that. Force of habit. I'm\n"
	.string "still getting emotional... Anyway, you\l"
	.string "know the drill.$"

ChallengerRd_Welcome_Text_3:
# 30 "data/maps/ChallengerRd/scripts.pory"
	.string "On your right, a seemingly quiet path\n"
	.string "towards your goal. Nothing but\l"
	.string "trainers, and a short hike. Challenging,\l"
	.string "but not too much.$"

ChallengerRd_Welcome_Text_4:
# 37 "data/maps/ChallengerRd/scripts.pory"
	.string "And on your left, a scorching hot path!\n"
	.string "You'll need patience and a lot of water!$"

ChallengerRd_Welcome_Text_5:
# 44 "data/maps/ChallengerRd/scripts.pory"
	.string "Either way you choose, I'm certain\n"
	.string "you'll achieve your goal. Now go! And\l"
	.string "make me proud.$"

ChallengerRd_Gregory_Text_0:
# 62 "data/maps/ChallengerRd/scripts.pory"
	.string "I still can't decide which way to\n"
	.string "choose! The battle didn't help me!$"

ChallengerRd_Hubert_Text_0:
# 79 "data/maps/ChallengerRd/scripts.pory"
	.string "No, I'm not here to complete the\n"
	.string "challenge. I don't even have the badges\l"
	.string "required to be here! But don't tell\l"
	.string "anyone.$"

ChallengerRd_Maisie_Text_0:
# 96 "data/maps/ChallengerRd/scripts.pory"
	.string "I don't know how to swim, and I don't\n"
	.string "trust my Pokémon. It's too\l"
	.string "unpredictable. My dream ends right\l"
	.string "here, I guess...$"

ChallengerRd_Tamara_Text_0:
# 113 "data/maps/ChallengerRd/scripts.pory"
	.string "Practice is what makes you strong! Look\n"
	.string "at you!$"

ChallengerRd_Claudie_Text_0:
# 130 "data/maps/ChallengerRd/scripts.pory"
	.string "Sometimes, you need to sit down and\n"
	.string "reflect on what you've done to end up\l"
	.string "where you are.$"

ChallengerRd_Nurse_Text_0:
# 148 "data/maps/ChallengerRd/scripts.pory"
	.string "Hello there! Would you like me to heal\n"
	.string "your party?$"

ChallengerRd_Nurse_Text_1:
# 150 "data/maps/ChallengerRd/scripts.pory"
	.string "Gotcha. Just relax...$"

ChallengerRd_Nurse_Text_2:
# 157 "data/maps/ChallengerRd/scripts.pory"
	.string "Here you go, fully healed!$"

ChallengerRd_Nurse_Text_3:
# 160 "data/maps/ChallengerRd/scripts.pory"
	.string "Gotcha. Good luck!$"

Gregory1::
# 67 "data/maps/ChallengerRd/scripts.pory"
	.string "Which way to choose? Help me!$"

Gregory2::
# 71 "data/maps/ChallengerRd/scripts.pory"
	.string "Aaah, I don't know!$"

Hubert1::
# 84 "data/maps/ChallengerRd/scripts.pory"
	.string "Look at those galleries! Do you think a\n"
	.string "bunch of Excadrills digged'em?$"

Hubert2::
# 88 "data/maps/ChallengerRd/scripts.pory"
	.string "That may be the answer!$"

Maisie1::
# 101 "data/maps/ChallengerRd/scripts.pory"
	.string "Water? In a cave! Ugh! Let's fight!$"

Maisie2::
# 105 "data/maps/ChallengerRd/scripts.pory"
	.string "This is going from bad to worse...$"

Tamara1::
# 118 "data/maps/ChallengerRd/scripts.pory"
	.string "Come and play with me! The water's just\n"
	.string "fine!$"

Tamara2::
# 122 "data/maps/ChallengerRd/scripts.pory"
	.string "Oh, you're already done playing?$"

Claudie1::
# 135 "data/maps/ChallengerRd/scripts.pory"
	.string "Being up here makes me emotional. Join\n"
	.string "me in my self-introspection.$"

Claudie2::
# 139 "data/maps/ChallengerRd/scripts.pory"
	.string "I see what you've been through...$"
