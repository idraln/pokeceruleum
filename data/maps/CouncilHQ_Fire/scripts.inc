# 1 "data/maps/CouncilHQ_Fire/scripts.pory"

# 2 "data/maps/CouncilHQ_Fire/scripts.pory"
CouncilHQ_Fire_MapScripts::
# 3 "data/maps/CouncilHQ_Fire/scripts.pory"
	.byte 0

CouncilHQ_Fire_Battle::
# 6 "data/maps/CouncilHQ_Fire/scripts.pory"
	lock
# 7 "data/maps/CouncilHQ_Fire/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 8 "data/maps/CouncilHQ_Fire/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq CouncilHQ_Fire_Battle_2
# 12 "data/maps/CouncilHQ_Fire/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq CouncilHQ_Fire_Battle_3
# 16 "data/maps/CouncilHQ_Fire/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq CouncilHQ_Fire_Battle_4
CouncilHQ_Fire_Battle_1:
# 20 "data/maps/CouncilHQ_Fire/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 21 "data/maps/CouncilHQ_Fire/scripts.pory"
	namebox CouncilHQ_Fire_Battle_Text_0
# 22 "data/maps/CouncilHQ_Fire/scripts.pory"
	msgbox CouncilHQ_Fire_Battle_Text_1
# 23 "data/maps/CouncilHQ_Fire/scripts.pory"
	closemessage
# 24 "data/maps/CouncilHQ_Fire/scripts.pory"
	delay 20
# 25 "data/maps/CouncilHQ_Fire/scripts.pory"
	hidenamebox
# 26 "data/maps/CouncilHQ_Fire/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 27 "data/maps/CouncilHQ_Fire/scripts.pory"
	compare VAR_MAIN_STORY, 56
	goto_if_lt CouncilHQ_Fire_Battle_9
# 31 "data/maps/CouncilHQ_Fire/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_FIRE_2, Pomme2
CouncilHQ_Fire_Battle_8:
# 34 "data/maps/CouncilHQ_Fire/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq CouncilHQ_Fire_Battle_12
# 54 "data/maps/CouncilHQ_Fire/scripts.pory"
	namebox CouncilHQ_Fire_Battle_Text_0
# 55 "data/maps/CouncilHQ_Fire/scripts.pory"
	msgbox CouncilHQ_Fire_Battle_Text_3
# 56 "data/maps/CouncilHQ_Fire/scripts.pory"
	hidenamebox
# 57 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 1
# 58 "data/maps/CouncilHQ_Fire/scripts.pory"
	setflag FLAG_COUNCIL_FIRE
# 59 "data/maps/CouncilHQ_Fire/scripts.pory"
	releaseall
	end

CouncilHQ_Fire_Battle_2:
# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Fire_Battle_Movement_0
# 10 "data/maps/CouncilHQ_Fire/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Fire_Battle_1

CouncilHQ_Fire_Battle_3:
# 13 "data/maps/CouncilHQ_Fire/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Fire_Battle_Movement_1
# 14 "data/maps/CouncilHQ_Fire/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Fire_Battle_1

CouncilHQ_Fire_Battle_4:
# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Fire_Battle_Movement_2
# 18 "data/maps/CouncilHQ_Fire/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Fire_Battle_1

CouncilHQ_Fire_Battle_9:
# 28 "data/maps/CouncilHQ_Fire/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_FIRE, Pomme2
	goto CouncilHQ_Fire_Battle_8

CouncilHQ_Fire_Battle_12:
# 35 "data/maps/CouncilHQ_Fire/scripts.pory"
	namebox CouncilHQ_Fire_Battle_Text_0
# 36 "data/maps/CouncilHQ_Fire/scripts.pory"
	msgbox CouncilHQ_Fire_Battle_Text_2
# 37 "data/maps/CouncilHQ_Fire/scripts.pory"
	closemessage
# 38 "data/maps/CouncilHQ_Fire/scripts.pory"
	hidenamebox
# 39 "data/maps/CouncilHQ_Fire/scripts.pory"
	special HealPlayerParty
# 40 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 41 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 42 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 43 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 44 "data/maps/CouncilHQ_Fire/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 45 "data/maps/CouncilHQ_Fire/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 46 "data/maps/CouncilHQ_Fire/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 47 "data/maps/CouncilHQ_Fire/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 48 "data/maps/CouncilHQ_Fire/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 49 "data/maps/CouncilHQ_Fire/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 50 "data/maps/CouncilHQ_Fire/scripts.pory"
	releaseall
	end


CouncilHQ_Fire_Pomme::
# 65 "data/maps/CouncilHQ_Fire/scripts.pory"
	lock
# 66 "data/maps/CouncilHQ_Fire/scripts.pory"
	faceplayer
# 67 "data/maps/CouncilHQ_Fire/scripts.pory"
	namebox CouncilHQ_Fire_Battle_Text_0
# 68 "data/maps/CouncilHQ_Fire/scripts.pory"
	msgbox CouncilHQ_Fire_Pomme_Text_0
# 69 "data/maps/CouncilHQ_Fire/scripts.pory"
	hidenamebox
# 70 "data/maps/CouncilHQ_Fire/scripts.pory"
	release
	end


# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
CouncilHQ_Fire_Battle_Movement_0:
# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_down
# 9 "data/maps/CouncilHQ_Fire/scripts.pory"
	face_left
	step_end

# 13 "data/maps/CouncilHQ_Fire/scripts.pory"
CouncilHQ_Fire_Battle_Movement_1:
# 13 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
# 13 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
	step_end

# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
CouncilHQ_Fire_Battle_Movement_2:
# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_left
# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
	walk_up
# 17 "data/maps/CouncilHQ_Fire/scripts.pory"
	face_left
	step_end

CouncilHQ_Fire_Battle_Text_0:
# 21 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Pomme$"

CouncilHQ_Fire_Battle_Text_1:
# 22 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Hahaha! Did you miss me, {PLAYER}?...\n"
	.string "Because I sure did! Bring it on!$"

CouncilHQ_Fire_Battle_Text_2:
# 36 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Don't sweat it, {PLAYER}! You can try\n"
	.string "as many times as you want!$"

CouncilHQ_Fire_Battle_Text_3:
# 55 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Same as before! You're tough!$"

CouncilHQ_Fire_Pomme_Text_0:
# 68 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Is Brucey doing okay? It's been a hot\n"
	.string "minute since I've heard from him. Send\l"
	.string "him my salutations!$"

Pomme2::
# 74 "data/maps/CouncilHQ_Fire/scripts.pory"
	.string "Actually, I don't know if I missed you\n"
	.string "that much...$"
