# 1 "data/maps/Oparque_PC/scripts.pory"

# 2 "data/maps/Oparque_PC/scripts.pory"
Oparque_PC_MapScripts::
# 3 "data/maps/Oparque_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Oparque_PC_OnTransition
# 4 "data/maps/Oparque_PC/scripts.pory"
    .byte 0

Oparque_PC_OnTransition::
# 8 "data/maps/Oparque_PC/scripts.pory"
	setrespawn HEAL_LOCATION_OPARQUE
	end


Oparque_PC_Nurse::
# 13 "data/maps/Oparque_PC/scripts.pory"
	lock
# 14 "data/maps/Oparque_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Oparque_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_0
# 17 "data/maps/Oparque_PC/scripts.pory"
	closemessage
# 18 "data/maps/Oparque_PC/scripts.pory"
	delay 20
# 19 "data/maps/Oparque_PC/scripts.pory"
	playse SE_PIN
# 20 "data/maps/Oparque_PC/scripts.pory"
	applymovement 1, Oparque_PC_Nurse_Movement_0
# 21 "data/maps/Oparque_PC/scripts.pory"
	delay 40
# 22 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_1, MSGBOX_YESNO
# 23 "data/maps/Oparque_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Oparque_PC_Nurse_1
# 43 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_5
# 44 "data/maps/Oparque_PC/scripts.pory"
	release
	end

Oparque_PC_Nurse_1:
# 24 "data/maps/Oparque_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 25 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_2
# 26 "data/maps/Oparque_PC/scripts.pory"
	hidefollower 0
# 27 "data/maps/Oparque_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 28 "data/maps/Oparque_PC/scripts.pory"
	waitmovement 0
# 29 "data/maps/Oparque_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 30 "data/maps/Oparque_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 31 "data/maps/Oparque_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 32 "data/maps/Oparque_PC/scripts.pory"
	waitmovement 0
# 33 "data/maps/Oparque_PC/scripts.pory"
	special HealPlayerParty
# 34 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_3
# 35 "data/maps/Oparque_PC/scripts.pory"
	waitmessage
# 36 "data/maps/Oparque_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 37 "data/maps/Oparque_PC/scripts.pory"
	waitmovement 0
# 38 "data/maps/Oparque_PC/scripts.pory"
	msgbox Oparque_PC_Nurse_Text_4
# 39 "data/maps/Oparque_PC/scripts.pory"
	release
	end


# 20 "data/maps/Oparque_PC/scripts.pory"
Oparque_PC_Nurse_Movement_0:
# 20 "data/maps/Oparque_PC/scripts.pory"
	emote_exclamation_mark
	step_end

Oparque_PC_Nurse_Text_0:
# 16 "data/maps/Oparque_PC/scripts.pory"
	.string "Zzzz...\n"
	.string "Zzzz...$"

Oparque_PC_Nurse_Text_1:
# 22 "data/maps/Oparque_PC/scripts.pory"
	.string "Huh? Sorry! I haven't seen a soul in\n"
	.string "here for so long, I just started to nap.\l"
	.string "Anyways, would you like me to heal your\l"
	.string "party?$"

Oparque_PC_Nurse_Text_2:
# 25 "data/maps/Oparque_PC/scripts.pory"
	.string "You got it.$"

Oparque_PC_Nurse_Text_3:
# 34 "data/maps/Oparque_PC/scripts.pory"
	.string "Here you go!$"

Oparque_PC_Nurse_Text_4:
# 38 "data/maps/Oparque_PC/scripts.pory"
	.string "Now if you'll excuse me, I've got a dream\n"
	.string "to finish.$"

Oparque_PC_Nurse_Text_5:
# 43 "data/maps/Oparque_PC/scripts.pory"
	.string "So you woke me up for nothing? Way to\n"
	.string "go, dude. Come back soon, but only if\l"
	.string "you actually need something from me.$"
