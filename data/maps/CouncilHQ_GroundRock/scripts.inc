# 1 "data/maps/CouncilHQ_GroundRock/scripts.pory"

# 2 "data/maps/CouncilHQ_GroundRock/scripts.pory"
CouncilHQ_GroundRock_MapScripts::
# 3 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.byte 0

CouncilHQ_GroundRock_Battle::
# 6 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	lock
# 7 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 8 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq CouncilHQ_GroundRock_Battle_2
# 12 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq CouncilHQ_GroundRock_Battle_3
CouncilHQ_GroundRock_Battle_1:
# 16 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 17 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	namebox CouncilHQ_GroundRock_Battle_Text_0
# 18 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	msgbox CouncilHQ_GroundRock_Battle_Text_1
# 19 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	closemessage
# 20 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	hidenamebox
# 21 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	delay 20
# 22 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 23 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	compare VAR_MAIN_STORY, 56
	goto_if_lt CouncilHQ_GroundRock_Battle_7
# 27 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_ROCK_2, Gary2
CouncilHQ_GroundRock_Battle_6:
# 29 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq CouncilHQ_GroundRock_Battle_10
# 49 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	namebox CouncilHQ_GroundRock_Battle_Text_0
# 50 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	msgbox CouncilHQ_GroundRock_Battle_Text_3
# 51 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	hidenamebox
# 52 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 1
# 53 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setflag FLAG_COUNCIL_ROCK
# 54 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	releaseall
	end

CouncilHQ_GroundRock_Battle_2:
# 9 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_GroundRock_Battle_Movement_0
# 10 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	waitmovement 0
	goto CouncilHQ_GroundRock_Battle_1

CouncilHQ_GroundRock_Battle_3:
# 13 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CouncilHQ_GroundRock_Battle_Movement_1
# 14 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	waitmovement 0
	goto CouncilHQ_GroundRock_Battle_1

CouncilHQ_GroundRock_Battle_7:
# 24 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	trainerbattle_no_intro TRAINER_COUNCIL_ROCK, Gary2
	goto CouncilHQ_GroundRock_Battle_6

CouncilHQ_GroundRock_Battle_10:
# 30 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	namebox CouncilHQ_GroundRock_Battle_Text_0
# 31 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	msgbox CouncilHQ_GroundRock_Battle_Text_2
# 32 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	closemessage
# 33 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	hidenamebox
# 34 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 36 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_FIGHT, 0
# 37 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_ICE, 0
# 38 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_FIRE, 0
# 39 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	setvar VAR_COUNCIL_ROCK, 0
# 40 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	clearflag FLAG_COUNCIL_ICE
# 41 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	clearflag FLAG_COUNCIL_ROCK
# 42 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	clearflag FLAG_COUNCIL_FIRE
# 43 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	clearflag FLAG_COUNCIL_FIGHT
# 44 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	warpsilent MAP_COUNCIL_HQ_LOBBY, 3, 11
# 45 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	releaseall
	end


CouncilHQ_GroundRock_AfterCombat::
	return


CouncilHQ_GroundRock_Gary::
# 64 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	lock
# 65 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	faceplayer
# 66 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	namebox CouncilHQ_GroundRock_Battle_Text_0
# 67 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	msgbox CouncilHQ_GroundRock_Gary_Text_0
# 68 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	hidenamebox
# 69 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	release
	end


# 9 "data/maps/CouncilHQ_GroundRock/scripts.pory"
CouncilHQ_GroundRock_Battle_Movement_0:
# 9 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	walk_right
	step_end

# 13 "data/maps/CouncilHQ_GroundRock/scripts.pory"
CouncilHQ_GroundRock_Battle_Movement_1:
# 13 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	walk_right
# 13 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	walk_up
# 13 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	face_right
	step_end

CouncilHQ_GroundRock_Battle_Text_0:
# 17 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "Gary$"

CouncilHQ_GroundRock_Battle_Text_1:
# 18 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "I can't see a thing! I forgot my\n"
	.string "goggles! Whatever, let's do it! I won't\l"
	.string "be bothered by my carelessness!$"

CouncilHQ_GroundRock_Battle_Text_2:
# 31 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "Is the fight over? My eyes burn!$"

CouncilHQ_GroundRock_Battle_Text_3:
# 50 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "Great job! Now go, because I'm eating\n"
	.string "sand everytime I open my mouth.$"

CouncilHQ_GroundRock_Gary_Text_0:
# 67 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "{PLAYER}? It was you the whole time?\n"
	.string "No wonder I lost!!$"

Gary2::
# 73 "data/maps/CouncilHQ_GroundRock/scripts.pory"
	.string "What? I've lost? Impossible!$"
