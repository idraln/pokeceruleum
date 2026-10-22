# 1 "data/maps/CelestialTower/scripts.pory"

# 2 "data/maps/CelestialTower/scripts.pory"
CelestialTower_MapScripts::
# 3 "data/maps/CelestialTower/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CelestialTower_OnTransition
# 4 "data/maps/CelestialTower/scripts.pory"
	.byte 0

CelestialTower_OnTransition::
# 8 "data/maps/CelestialTower/scripts.pory"
	compare VAR_MAIN_STORY, 53
	goto_if_gt CelestialTower_OnTransition_1
	return

CelestialTower_OnTransition_1:
# 9 "data/maps/CelestialTower/scripts.pory"
	setobjectxyperm 2, 21, 9
# 10 "data/maps/CelestialTower/scripts.pory"
	setobjectxyperm 3, 21, 12
# 11 "data/maps/CelestialTower/scripts.pory"
	turnobject 2, DIR_WEST
# 12 "data/maps/CelestialTower/scripts.pory"
	turnobject 3, DIR_WEST
	return


CelestialTower_Dora::
# 17 "data/maps/CelestialTower/scripts.pory"
	trainerbattle_single TRAINER_CELESTIAL_1, Dora1, Dora2
# 18 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Dora_Text_0
# 19 "data/maps/CelestialTower/scripts.pory"
	closemessage
	end


CelestialTower_Kira::
# 32 "data/maps/CelestialTower/scripts.pory"
	trainerbattle_single TRAINER_CELESTIAL_2, Kira1, Kira2
# 33 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Kira_Text_0
# 34 "data/maps/CelestialTower/scripts.pory"
	closemessage
	end


CelestialTower_Nerd::
# 47 "data/maps/CelestialTower/scripts.pory"
	lock
# 48 "data/maps/CelestialTower/scripts.pory"
	faceplayer
# 49 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Nerd_Text_0
# 50 "data/maps/CelestialTower/scripts.pory"
	closemessage
# 51 "data/maps/CelestialTower/scripts.pory"
	turnobject 5, DIR_NORTH
# 52 "data/maps/CelestialTower/scripts.pory"
	release
	end


CelestialTower_Item1::
# 57 "data/maps/CelestialTower/scripts.pory"
	lock
# 58 "data/maps/CelestialTower/scripts.pory"
	removeobject 6
# 59 "data/maps/CelestialTower/scripts.pory"
	setflag FLAG_CELESTIAL_ITEM_1
# 60 "data/maps/CelestialTower/scripts.pory"
	giveitem ITEM_SPELL_TAG
# 61 "data/maps/CelestialTower/scripts.pory"
	release
	end


CelestialTower_Item2::
# 66 "data/maps/CelestialTower/scripts.pory"
	lock
# 67 "data/maps/CelestialTower/scripts.pory"
	removeobject 7
# 68 "data/maps/CelestialTower/scripts.pory"
	setflag FLAG_CELESTIAL_ITEM_2
# 69 "data/maps/CelestialTower/scripts.pory"
	giveitem ITEM_WEAKNESS_POLICY
# 70 "data/maps/CelestialTower/scripts.pory"
	release
	end


CelestialTower_Couple::
# 75 "data/maps/CelestialTower/scripts.pory"
	lock
# 76 "data/maps/CelestialTower/scripts.pory"
	faceplayer
# 77 "data/maps/CelestialTower/scripts.pory"
	compare VAR_MAIN_STORY, 53
	goto_if_gt CelestialTower_Couple_1
# 83 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_1
# 84 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_2
# 85 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_3
# 86 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_2
# 87 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_4
# 88 "data/maps/CelestialTower/scripts.pory"
	trainerbattle_no_intro TRAINER_CELESTIAL_3, DanSix1
# 89 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_5
# 90 "data/maps/CelestialTower/scripts.pory"
	closemessage
# 91 "data/maps/CelestialTower/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 92 "data/maps/CelestialTower/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq CelestialTower_Couple_5
CelestialTower_Couple_4:
# 96 "data/maps/CelestialTower/scripts.pory"
	applymovement 2, CelestialTower_Couple_Movement_1
# 97 "data/maps/CelestialTower/scripts.pory"
	applymovement 3, CelestialTower_Couple_Movement_2
# 98 "data/maps/CelestialTower/scripts.pory"
	waitmovement 0
# 99 "data/maps/CelestialTower/scripts.pory"
	setobjectxyperm 2, 21, 9
# 100 "data/maps/CelestialTower/scripts.pory"
	setobjectxyperm 3, 21, 12
# 101 "data/maps/CelestialTower/scripts.pory"
	setvar VAR_MAIN_STORY, 54
# 102 "data/maps/CelestialTower/scripts.pory"
	setflag FLAG_COPS_CELESTIAL
# 103 "data/maps/CelestialTower/scripts.pory"
	clearflag FLAG_VIKKIE_CELESTIAL
# 104 "data/maps/CelestialTower/scripts.pory"
	release
	end

CelestialTower_Couple_1:
# 78 "data/maps/CelestialTower/scripts.pory"
	msgbox CelestialTower_Couple_Text_0
# 79 "data/maps/CelestialTower/scripts.pory"
	release
	end

CelestialTower_Couple_5:
# 93 "data/maps/CelestialTower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CelestialTower_Couple_Movement_0
# 94 "data/maps/CelestialTower/scripts.pory"
	waitmovement 0
	goto CelestialTower_Couple_4


# 93 "data/maps/CelestialTower/scripts.pory"
CelestialTower_Couple_Movement_0:
# 93 "data/maps/CelestialTower/scripts.pory"
	walk_left
# 93 "data/maps/CelestialTower/scripts.pory"
	face_right
	step_end

# 96 "data/maps/CelestialTower/scripts.pory"
CelestialTower_Couple_Movement_1:
# 96 "data/maps/CelestialTower/scripts.pory"
	walk_up
# 96 "data/maps/CelestialTower/scripts.pory"
	face_left
	step_end

# 97 "data/maps/CelestialTower/scripts.pory"
CelestialTower_Couple_Movement_2:
# 97 "data/maps/CelestialTower/scripts.pory"
	walk_down
# 97 "data/maps/CelestialTower/scripts.pory"
	face_left
	step_end

CelestialTower_Dora_Text_0:
# 18 "data/maps/CelestialTower/scripts.pory"
	.string "I can feel the spirits piercing through\n"
	.string "my body!$"

CelestialTower_Kira_Text_0:
# 33 "data/maps/CelestialTower/scripts.pory"
	.string "Aaaah!... Aaaah! I'm getting tired!$"

CelestialTower_Nerd_Text_0:
# 49 "data/maps/CelestialTower/scripts.pory"
	.string "Here lies my precious Seismitoad. I'll\n"
	.string "never have a friend like him...$"

CelestialTower_Couple_Text_0:
# 78 "data/maps/CelestialTower/scripts.pory"
	.string "You can go upstairs now, if you desire\n"
	.string "to.$"

CelestialTower_Couple_Text_1:
# 83 "data/maps/CelestialTower/scripts.pory"
	.string "...You look like a mighty trainer, am I\n"
	.string "mistaken? Why would you want to go\l"
	.string "upstairs?$"

CelestialTower_Couple_Text_2:
# 84 "data/maps/CelestialTower/scripts.pory"
	.string "...$"

CelestialTower_Couple_Text_3:
# 85 "data/maps/CelestialTower/scripts.pory"
	.string "...An outlaw, you say? There is indeed a\n"
	.string "woman praying upstairs, but I'm not\l"
	.string "aware of her intentions. I only know\l"
	.string "that she's one of the strongest\l"
	.string "trainers I've ever met.$"

CelestialTower_Couple_Text_4:
# 87 "data/maps/CelestialTower/scripts.pory"
	.string "...Very well, then. It seems that you\n"
	.string "won't change your mind. Before I let you\l"
	.string "go upstairs, we need to make sure you're\l"
	.string "as strong as you seem.$"

CelestialTower_Couple_Text_5:
# 89 "data/maps/CelestialTower/scripts.pory"
	.string "...We were not mistaken. Please, go on.$"

Dora1::
# 23 "data/maps/CelestialTower/scripts.pory"
	.string "The afterlife is calling me!$"

Dora2::
# 27 "data/maps/CelestialTower/scripts.pory"
	.string "Yes! I'm ascending!$"

Kira1::
# 38 "data/maps/CelestialTower/scripts.pory"
	.string "Aaaah!$"

Kira2::
# 42 "data/maps/CelestialTower/scripts.pory"
	.string "Aaaah!$"

DanSix1::
# 109 "data/maps/CelestialTower/scripts.pory"
	.string "That was admirable, well done.$"
