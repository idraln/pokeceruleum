# 1 "data/maps/Frux_PC/scripts.pory"

# 2 "data/maps/Frux_PC/scripts.pory"
Frux_PC_MapScripts::
# 3 "data/maps/Frux_PC/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Frux_PC_OnTransition
# 4 "data/maps/Frux_PC/scripts.pory"
    .byte 0

Frux_PC_OnTransition::
# 8 "data/maps/Frux_PC/scripts.pory"
	setrespawn HEAL_LOCATION_FRUX
	end


Frux_PC_Nurse::
# 13 "data/maps/Frux_PC/scripts.pory"
	lock
# 14 "data/maps/Frux_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Frux_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Frux_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Frux_PC_Nurse_1
# 37 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Nurse_Text_4
# 38 "data/maps/Frux_PC/scripts.pory"
	release
	end

Frux_PC_Nurse_1:
# 18 "data/maps/Frux_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Nurse_Text_1
# 20 "data/maps/Frux_PC/scripts.pory"
	hidefollower 0
# 21 "data/maps/Frux_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/Frux_PC/scripts.pory"
	waitmovement 0
# 23 "data/maps/Frux_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/Frux_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Frux_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/Frux_PC/scripts.pory"
	waitmovement 0
# 27 "data/maps/Frux_PC/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Nurse_Text_2
# 29 "data/maps/Frux_PC/scripts.pory"
	waitmessage
# 30 "data/maps/Frux_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/Frux_PC/scripts.pory"
	waitmovement 0
# 32 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Nurse_Text_3
# 33 "data/maps/Frux_PC/scripts.pory"
	release
	end


Frux_PC_Worker::
# 44 "data/maps/Frux_PC/scripts.pory"
	lock
# 45 "data/maps/Frux_PC/scripts.pory"
	faceplayer
# 46 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Worker_Text_0
# 47 "data/maps/Frux_PC/scripts.pory"
	release
	end


Frux_PC_Camper::
# 52 "data/maps/Frux_PC/scripts.pory"
	lock
# 53 "data/maps/Frux_PC/scripts.pory"
	faceplayer
# 54 "data/maps/Frux_PC/scripts.pory"
	msgbox Frux_PC_Camper_Text_0
# 55 "data/maps/Frux_PC/scripts.pory"
	turnobject 3, DIR_NORTH
# 56 "data/maps/Frux_PC/scripts.pory"
	release
	end


Frux_PC_Nurse_Text_0:
# 16 "data/maps/Frux_PC/scripts.pory"
	.string "Oi oi, welcome to Frux's Pokémon Center!\n"
	.string "Would you like to heal your party?$"

Frux_PC_Nurse_Text_1:
# 19 "data/maps/Frux_PC/scripts.pory"
	.string "Nice. Gimme your Pokémons.$"

Frux_PC_Nurse_Text_2:
# 28 "data/maps/Frux_PC/scripts.pory"
	.string "There! Your Pokémons are fully healed!$"

Frux_PC_Nurse_Text_3:
# 32 "data/maps/Frux_PC/scripts.pory"
	.string "Come back soon!$"

Frux_PC_Nurse_Text_4:
# 37 "data/maps/Frux_PC/scripts.pory"
	.string "It's okay, see ya soon!$"

Frux_PC_Worker_Text_0:
# 46 "data/maps/Frux_PC/scripts.pory"
	.string "Did you know that, deep in the Ironair,\n"
	.string "there's a cave filled with sapphires?\l"
	.string "Some of them are ten foot tall! I've\l"
	.string "never seen them myself, but that's what\l"
	.string "I've been told.$"

Frux_PC_Camper_Text_0:
# 54 "data/maps/Frux_PC/scripts.pory"
	.string "Pokémon Centers are great to heal your\n"
	.string "party, but there's also plenty of books\l"
	.string "to learn about the place you're in! I've\l"
	.string "already learned so much!$"
