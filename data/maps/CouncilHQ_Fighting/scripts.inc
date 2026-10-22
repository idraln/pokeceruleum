# 1 "data/maps/CouncilHQ_Fighting/scripts.pory"

# 2 "data/maps/CouncilHQ_Fighting/scripts.pory"
CouncilHQ_Fighting_MapScripts::
# 3 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.byte 0

CouncilHQ_Fighting_Battle::
# 7 "data/maps/CouncilHQ_Fighting/scripts.pory"
	lock
# 8 "data/maps/CouncilHQ_Fighting/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/CouncilHQ_Fighting/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CouncilHQ_Fighting_Battle_2
# 13 "data/maps/CouncilHQ_Fighting/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq CouncilHQ_Fighting_Battle_3
CouncilHQ_Fighting_Battle_1:
# 17 "data/maps/CouncilHQ_Fighting/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 18 "data/maps/CouncilHQ_Fighting/scripts.pory"
	namebox CouncilHQ_Fighting_Battle_Text_0
# 19 "data/maps/CouncilHQ_Fighting/scripts.pory"
	msgbox CouncilHQ_Fighting_Battle_Text_1
# 20 "data/maps/CouncilHQ_Fighting/scripts.pory"
	closemessage
# 21 "data/maps/CouncilHQ_Fighting/scripts.pory"
	hidenamebox
# 22 "data/maps/CouncilHQ_Fighting/scripts.pory"
	delay 20
# 23 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 24 "data/maps/CouncilHQ_Fighting/scripts.pory"
	compare VAR_MAIN_STORY, 56
	goto_if_lt CouncilHQ_Fighting_Battle_7
# 28 "data/maps/CouncilHQ_Fighting/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_FIGHT_2, Martin2
CouncilHQ_Fighting_Battle_6:
# 30 "data/maps/CouncilHQ_Fighting/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq CouncilHQ_Fighting_Battle_10
# 50 "data/maps/CouncilHQ_Fighting/scripts.pory"
	namebox CouncilHQ_Fighting_Battle_Text_0
# 51 "data/maps/CouncilHQ_Fighting/scripts.pory"
	msgbox CouncilHQ_Fighting_Battle_Text_3
# 52 "data/maps/CouncilHQ_Fighting/scripts.pory"
	hidenamebox
# 53 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 1
# 54 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setflag FLAG_COUNCIL_FIGHT
# 55 "data/maps/CouncilHQ_Fighting/scripts.pory"
	releaseall
	end

CouncilHQ_Fighting_Battle_2:
# 10 "data/maps/CouncilHQ_Fighting/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Fighting_Battle_Movement_0
# 11 "data/maps/CouncilHQ_Fighting/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Fighting_Battle_1

CouncilHQ_Fighting_Battle_3:
# 14 "data/maps/CouncilHQ_Fighting/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Fighting_Battle_Movement_1
# 15 "data/maps/CouncilHQ_Fighting/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Fighting_Battle_1

CouncilHQ_Fighting_Battle_7:
# 25 "data/maps/CouncilHQ_Fighting/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_FIGHT, Martin2
	goto CouncilHQ_Fighting_Battle_6

CouncilHQ_Fighting_Battle_10:
# 31 "data/maps/CouncilHQ_Fighting/scripts.pory"
	namebox CouncilHQ_Fighting_Battle_Text_0
# 32 "data/maps/CouncilHQ_Fighting/scripts.pory"
	msgbox CouncilHQ_Fighting_Battle_Text_2
# 33 "data/maps/CouncilHQ_Fighting/scripts.pory"
	closemessage
# 34 "data/maps/CouncilHQ_Fighting/scripts.pory"
	hidenamebox
# 35 "data/maps/CouncilHQ_Fighting/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 37 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 38 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 39 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 40 "data/maps/CouncilHQ_Fighting/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 41 "data/maps/CouncilHQ_Fighting/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 42 "data/maps/CouncilHQ_Fighting/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 43 "data/maps/CouncilHQ_Fighting/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 44 "data/maps/CouncilHQ_Fighting/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 45 "data/maps/CouncilHQ_Fighting/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 46 "data/maps/CouncilHQ_Fighting/scripts.pory"
	releaseall
	end


CouncilHQ_Fighting_Martin::
# 61 "data/maps/CouncilHQ_Fighting/scripts.pory"
	lock
# 62 "data/maps/CouncilHQ_Fighting/scripts.pory"
	faceplayer
# 63 "data/maps/CouncilHQ_Fighting/scripts.pory"
	namebox CouncilHQ_Fighting_Battle_Text_0
# 64 "data/maps/CouncilHQ_Fighting/scripts.pory"
	msgbox CouncilHQ_Fighting_Martin_Text_0
# 65 "data/maps/CouncilHQ_Fighting/scripts.pory"
	hidenamebox
# 66 "data/maps/CouncilHQ_Fighting/scripts.pory"
	release
	end


# 10 "data/maps/CouncilHQ_Fighting/scripts.pory"
CouncilHQ_Fighting_Battle_Movement_0:
# 10 "data/maps/CouncilHQ_Fighting/scripts.pory"
	walk_right
	step_end

# 14 "data/maps/CouncilHQ_Fighting/scripts.pory"
CouncilHQ_Fighting_Battle_Movement_1:
# 14 "data/maps/CouncilHQ_Fighting/scripts.pory"
	walk_right
# 14 "data/maps/CouncilHQ_Fighting/scripts.pory"
	walk_up
# 14 "data/maps/CouncilHQ_Fighting/scripts.pory"
	face_right
	step_end

CouncilHQ_Fighting_Battle_Text_0:
# 18 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "Joao$"

CouncilHQ_Fighting_Battle_Text_1:
# 19 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "...I'm so glad to see you back again,\n"
	.string "{PLAYER}. You've truly become a role\l"
	.string "model for me... Let me show you what I've\l"
	.string "learned from you.$"

CouncilHQ_Fighting_Battle_Text_2:
# 32 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "...I'm sorry, {PLAYER}. You'll have to\n"
	.string "come back and try again.$"

CouncilHQ_Fighting_Battle_Text_3:
# 51 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "Very impressive indeed.$"

CouncilHQ_Fighting_Martin_Text_0:
# 64 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "I need to practice, {PLAYER}. Go and\n"
	.string "face the others. I'll be worth one day, I\l"
	.string "promise you.$"

Martin2::
# 70 "data/maps/CouncilHQ_Fighting/scripts.pory"
	.string "...You're even stronger than before...\n"
	.string "Impressive.$"
