# 1 "data/maps/CouncilHQ_Lobby/scripts.pory"

# 2 "data/maps/CouncilHQ_Lobby/scripts.pory"
CouncilHQ_Lobby_MapScripts::
# 3 "data/maps/CouncilHQ_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CouncilHQ_Lobby_OnTransition
# 4 "data/maps/CouncilHQ_Lobby/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, CouncilHQ_Lobby_OnLoad
# 5 "data/maps/CouncilHQ_Lobby/scripts.pory"
    .byte 0

CouncilHQ_Lobby_OnTransition::
# 9 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setrespawn HEAL_LOCATION_COUNCIL_HQ
	end


CouncilHQ_Lobby_OnLoad::
# 14 "data/maps/CouncilHQ_Lobby/scripts.pory"
	goto_if_set FLAG_COUNCIL_EMP, CouncilHQ_Lobby_OnLoad_1
	return

CouncilHQ_Lobby_OnLoad_1:
# 15 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setobjectxyperm 3, 9, 2
	return


CouncilHQ_Lobby_Nurse::
# 20 "data/maps/CouncilHQ_Lobby/scripts.pory"
	lock
# 21 "data/maps/CouncilHQ_Lobby/scripts.pory"
	faceplayer
# 22 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 23 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Nurse_Text_0, MSGBOX_YESNO
# 24 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CouncilHQ_Lobby_Nurse_1
# 44 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Nurse_Text_4
# 45 "data/maps/CouncilHQ_Lobby/scripts.pory"
	release
	end

CouncilHQ_Lobby_Nurse_1:
# 25 "data/maps/CouncilHQ_Lobby/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 26 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Nurse_Text_1
# 27 "data/maps/CouncilHQ_Lobby/scripts.pory"
	hidefollower 0
# 28 "data/maps/CouncilHQ_Lobby/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 29 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmovement 0
# 30 "data/maps/CouncilHQ_Lobby/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 31 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 32 "data/maps/CouncilHQ_Lobby/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 33 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmovement 0
# 34 "data/maps/CouncilHQ_Lobby/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Nurse_Text_2
# 36 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmessage
# 37 "data/maps/CouncilHQ_Lobby/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 38 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmovement 0
# 39 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Nurse_Text_3
# 40 "data/maps/CouncilHQ_Lobby/scripts.pory"
	release
	end


CouncilHQ_Lobby_Clerk::
# 51 "data/maps/CouncilHQ_Lobby/scripts.pory"
	lock
# 52 "data/maps/CouncilHQ_Lobby/scripts.pory"
	faceplayer
# 53 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Clerk_Text_0
# 54 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmessage
# 55 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmessage
# 56 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_SHOP_UPDATE, 0
	goto_if_eq CouncilHQ_Lobby_Clerk_2
# 59 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_SHOP_UPDATE, 2
	goto_if_eq CouncilHQ_Lobby_Clerk_3
# 62 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_SHOP_UPDATE, 4
	goto_if_eq CouncilHQ_Lobby_Clerk_4
# 66 "data/maps/CouncilHQ_Lobby/scripts.pory"
	pokemart MartFinal
CouncilHQ_Lobby_Clerk_1:
# 68 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Clerk_Text_1
# 69 "data/maps/CouncilHQ_Lobby/scripts.pory"
	release
	end

CouncilHQ_Lobby_Clerk_2:
# 57 "data/maps/CouncilHQ_Lobby/scripts.pory"
	pokemart MartUntil1stBadge
	goto CouncilHQ_Lobby_Clerk_1

CouncilHQ_Lobby_Clerk_3:
# 60 "data/maps/CouncilHQ_Lobby/scripts.pory"
	pokemart MartUntil4thBadge
	goto CouncilHQ_Lobby_Clerk_1

CouncilHQ_Lobby_Clerk_4:
# 63 "data/maps/CouncilHQ_Lobby/scripts.pory"
	pokemart MartUntil6thBadge
	goto CouncilHQ_Lobby_Clerk_1


CouncilHQ_Lobby_Employee::
# 74 "data/maps/CouncilHQ_Lobby/scripts.pory"
	lock
# 75 "data/maps/CouncilHQ_Lobby/scripts.pory"
	faceplayer
# 76 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_COUNCIL_TRIES, 1
	goto_if_eq CouncilHQ_Lobby_Employee_2
# 82 "data/maps/CouncilHQ_Lobby/scripts.pory"
	namebox CouncilHQ_Lobby_Employee_Text_0
# 83 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Employee_Text_2, MSGBOX_YESNO
# 84 "data/maps/CouncilHQ_Lobby/scripts.pory"
	hidenamebox
# 85 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CouncilHQ_Lobby_Employee_5
# 108 "data/maps/CouncilHQ_Lobby/scripts.pory"
	namebox CouncilHQ_Lobby_Employee_Text_0
# 109 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Employee_Text_4
# 110 "data/maps/CouncilHQ_Lobby/scripts.pory"
	hidenamebox
CouncilHQ_Lobby_Employee_1:
# 113 "data/maps/CouncilHQ_Lobby/scripts.pory"
	release
	end

CouncilHQ_Lobby_Employee_2:
# 77 "data/maps/CouncilHQ_Lobby/scripts.pory"
	namebox CouncilHQ_Lobby_Employee_Text_0
# 78 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Employee_Text_1
# 79 "data/maps/CouncilHQ_Lobby/scripts.pory"
	hidenamebox
	goto CouncilHQ_Lobby_Employee_1

CouncilHQ_Lobby_Employee_5:
# 86 "data/maps/CouncilHQ_Lobby/scripts.pory"
	closemessage
# 87 "data/maps/CouncilHQ_Lobby/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 88 "data/maps/CouncilHQ_Lobby/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq CouncilHQ_Lobby_Employee_9
# 94 "data/maps/CouncilHQ_Lobby/scripts.pory"
	applymovement 3, CouncilHQ_Lobby_Employee_Movement_1
# 95 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmovement 0
# 96 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setobjectxyperm 3, 7, 2
CouncilHQ_Lobby_Employee_8:
# 98 "data/maps/CouncilHQ_Lobby/scripts.pory"
	delay 40
# 99 "data/maps/CouncilHQ_Lobby/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 100 "data/maps/CouncilHQ_Lobby/scripts.pory"
	namebox CouncilHQ_Lobby_Employee_Text_0
# 101 "data/maps/CouncilHQ_Lobby/scripts.pory"
	msgbox CouncilHQ_Lobby_Employee_Text_3
# 102 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitfanfare
# 103 "data/maps/CouncilHQ_Lobby/scripts.pory"
	hidenamebox
# 104 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setvar VAR_COUNCIL_TRIES, 1
# 105 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setflag FLAG_COUNCIL_EMP
	goto CouncilHQ_Lobby_Employee_1

CouncilHQ_Lobby_Employee_9:
# 89 "data/maps/CouncilHQ_Lobby/scripts.pory"
	applymovement 3, CouncilHQ_Lobby_Employee_Movement_0
# 90 "data/maps/CouncilHQ_Lobby/scripts.pory"
	waitmovement 0
# 91 "data/maps/CouncilHQ_Lobby/scripts.pory"
	setobjectxyperm 3, 9, 2
	goto CouncilHQ_Lobby_Employee_8


# 89 "data/maps/CouncilHQ_Lobby/scripts.pory"
CouncilHQ_Lobby_Employee_Movement_0:
# 89 "data/maps/CouncilHQ_Lobby/scripts.pory"
	walk_right
# 89 "data/maps/CouncilHQ_Lobby/scripts.pory"
	face_left
	step_end

# 94 "data/maps/CouncilHQ_Lobby/scripts.pory"
CouncilHQ_Lobby_Employee_Movement_1:
# 94 "data/maps/CouncilHQ_Lobby/scripts.pory"
	walk_left
# 94 "data/maps/CouncilHQ_Lobby/scripts.pory"
	face_right
	step_end

CouncilHQ_Lobby_Nurse_Text_0:
# 23 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Hi there! Congratulations, you've\n"
	.string "reached the headquarters of the\l"
	.string "Council! Would you like me to heal your\l"
	.string "party?$"

CouncilHQ_Lobby_Nurse_Text_1:
# 26 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Okay! Give me your Pokémons.$"

CouncilHQ_Lobby_Nurse_Text_2:
# 35 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

CouncilHQ_Lobby_Nurse_Text_3:
# 39 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "We hope to see you soon!$"

CouncilHQ_Lobby_Nurse_Text_4:
# 44 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Okay, we hope you come back soon! Good\n"
	.string "luck!$"

CouncilHQ_Lobby_Clerk_Text_0:
# 53 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Hello, and welcome to the Council's\n"
	.string "mart! How can I help you today?$"

CouncilHQ_Lobby_Clerk_Text_1:
# 68 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Thanks for shopping with us! We hope\n"
	.string "you come back soon!$"

CouncilHQ_Lobby_Employee_Text_0:
# 77 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Bernard$"

CouncilHQ_Lobby_Employee_Text_1:
# 78 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Time to face the Council, {PLAYER}!$"

CouncilHQ_Lobby_Employee_Text_2:
# 83 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "Congratulations, {PLAYER}! As\n"
	.string "expected, you went through Challenger\l"
	.string "Road in the blink of an eye! Now comes\l"
	.string "the time for your final challenge. Are\l"
	.string "you ready?$"

CouncilHQ_Lobby_Employee_Text_3:
# 101 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "There it is! The path to victory! Do not\n"
	.string "wait any longer, go!$"

CouncilHQ_Lobby_Employee_Text_4:
# 109 "data/maps/CouncilHQ_Lobby/scripts.pory"
	.string "It's okay! Take all the time you need,\n"
	.string "maybe stock up on some heals! You'll\l"
	.string "definitely need some, but you already\l"
	.string "know that.$"
