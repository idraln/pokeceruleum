# 1 "data/maps/CouncilHQ_Ice/scripts.pory"

# 2 "data/maps/CouncilHQ_Ice/scripts.pory"
CouncilHQ_Ice_MapScripts::
# 3 "data/maps/CouncilHQ_Ice/scripts.pory"
	.byte 0

CouncilHQ_Ice_Battle::
# 7 "data/maps/CouncilHQ_Ice/scripts.pory"
	lock
# 8 "data/maps/CouncilHQ_Ice/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/CouncilHQ_Ice/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CouncilHQ_Ice_Battle_2
# 13 "data/maps/CouncilHQ_Ice/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq CouncilHQ_Ice_Battle_3
CouncilHQ_Ice_Battle_1:
# 17 "data/maps/CouncilHQ_Ice/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 18 "data/maps/CouncilHQ_Ice/scripts.pory"
	namebox CouncilHQ_Ice_Battle_Text_0
# 19 "data/maps/CouncilHQ_Ice/scripts.pory"
	msgbox CouncilHQ_Ice_Battle_Text_1
# 20 "data/maps/CouncilHQ_Ice/scripts.pory"
	closemessage
# 21 "data/maps/CouncilHQ_Ice/scripts.pory"
	hidenamebox
# 22 "data/maps/CouncilHQ_Ice/scripts.pory"
	delay 20
# 23 "data/maps/CouncilHQ_Ice/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 24 "data/maps/CouncilHQ_Ice/scripts.pory"
	compare VAR_MAIN_STORY, 56
	goto_if_lt CouncilHQ_Ice_Battle_7
# 28 "data/maps/CouncilHQ_Ice/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_ICE_2, Colleen2
CouncilHQ_Ice_Battle_6:
# 30 "data/maps/CouncilHQ_Ice/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq CouncilHQ_Ice_Battle_10
# 50 "data/maps/CouncilHQ_Ice/scripts.pory"
	namebox CouncilHQ_Ice_Battle_Text_0
# 51 "data/maps/CouncilHQ_Ice/scripts.pory"
	msgbox CouncilHQ_Ice_Battle_Text_3
# 52 "data/maps/CouncilHQ_Ice/scripts.pory"
	hidenamebox
# 53 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_ICE, 1
# 54 "data/maps/CouncilHQ_Ice/scripts.pory"
	setflag FLAG_COUNCIL_ICE
# 55 "data/maps/CouncilHQ_Ice/scripts.pory"
	releaseall
	end

CouncilHQ_Ice_Battle_2:
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Ice_Battle_Movement_0
# 11 "data/maps/CouncilHQ_Ice/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Ice_Battle_1

CouncilHQ_Ice_Battle_3:
# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_Ice_Battle_Movement_1
# 15 "data/maps/CouncilHQ_Ice/scripts.pory"
	waitmovement 0
	goto CouncilHQ_Ice_Battle_1

CouncilHQ_Ice_Battle_7:
# 25 "data/maps/CouncilHQ_Ice/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_ICE, Colleen2
	goto CouncilHQ_Ice_Battle_6

CouncilHQ_Ice_Battle_10:
# 31 "data/maps/CouncilHQ_Ice/scripts.pory"
	namebox CouncilHQ_Ice_Battle_Text_0
# 32 "data/maps/CouncilHQ_Ice/scripts.pory"
	msgbox CouncilHQ_Ice_Battle_Text_2
# 33 "data/maps/CouncilHQ_Ice/scripts.pory"
	closemessage
# 34 "data/maps/CouncilHQ_Ice/scripts.pory"
	hidenamebox
# 35 "data/maps/CouncilHQ_Ice/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 37 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 38 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 39 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 40 "data/maps/CouncilHQ_Ice/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 41 "data/maps/CouncilHQ_Ice/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 42 "data/maps/CouncilHQ_Ice/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 43 "data/maps/CouncilHQ_Ice/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 44 "data/maps/CouncilHQ_Ice/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 45 "data/maps/CouncilHQ_Ice/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 46 "data/maps/CouncilHQ_Ice/scripts.pory"
	releaseall
	end


CouncilHQ_Ice_Colleen::
# 61 "data/maps/CouncilHQ_Ice/scripts.pory"
	lock
# 62 "data/maps/CouncilHQ_Ice/scripts.pory"
	faceplayer
# 63 "data/maps/CouncilHQ_Ice/scripts.pory"
	namebox CouncilHQ_Ice_Battle_Text_0
# 64 "data/maps/CouncilHQ_Ice/scripts.pory"
	msgbox CouncilHQ_Ice_Colleen_Text_0
# 65 "data/maps/CouncilHQ_Ice/scripts.pory"
	hidenamebox
# 66 "data/maps/CouncilHQ_Ice/scripts.pory"
	release
	end


# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
CouncilHQ_Ice_Battle_Movement_0:
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_left
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_left
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_down
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_down
# 10 "data/maps/CouncilHQ_Ice/scripts.pory"
	face_left
	step_end

# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
CouncilHQ_Ice_Battle_Movement_1:
# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_left
# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_left
# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
	walk_down
# 14 "data/maps/CouncilHQ_Ice/scripts.pory"
	face_left
	step_end

CouncilHQ_Ice_Battle_Text_0:
# 18 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "Colleen$"

CouncilHQ_Ice_Battle_Text_1:
# 19 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "{PLAYER}! Thank you again for what\n"
	.string "you've done for Thura. But I have a role\l"
	.string "to fulfill... Let's do it!$"

CouncilHQ_Ice_Battle_Text_2:
# 32 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "Watch out! You're gonna catch a cold!$"

CouncilHQ_Ice_Battle_Text_3:
# 51 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "I need to tweak the AC and crank it a\n"
	.string "bit more...$"

CouncilHQ_Ice_Colleen_Text_0:
# 64 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "Now, where is that remote? What a dumb\n"
	.string "idea it was to put the AC all the way up\l"
	.string "here...$"

Colleen2::
# 70 "data/maps/CouncilHQ_Ice/scripts.pory"
	.string "Really? The cold didn't affect you?$"
