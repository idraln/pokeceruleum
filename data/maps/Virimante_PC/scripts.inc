# 1 "data/maps/Virimante_PC/scripts.pory"

# 2 "data/maps/Virimante_PC/scripts.pory"
Virimante_PC_MapScripts::
# 3 "data/maps/Virimante_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Virimante_PC_OnTransition
# 4 "data/maps/Virimante_PC/scripts.pory"
    .byte 0

Virimante_PC_OnTransition::
# 8 "data/maps/Virimante_PC/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIMANTE
	end


Virimante_PC_Nurse::
# 13 "data/maps/Virimante_PC/scripts.pory"
	lock
# 14 "data/maps/Virimante_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Virimante_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Virimante_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Virimante_PC_Nurse_1
# 44 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_5
# 45 "data/maps/Virimante_PC/scripts.pory"
	release
	end

Virimante_PC_Nurse_1:
# 18 "data/maps/Virimante_PC/scripts.pory"
	checkmoney 50
# 19 "data/maps/Virimante_PC/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Virimante_PC_Nurse_4
# 38 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_4
# 39 "data/maps/Virimante_PC/scripts.pory"
	release
	end

Virimante_PC_Nurse_4:
# 20 "data/maps/Virimante_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 21 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_1
# 22 "data/maps/Virimante_PC/scripts.pory"
	hidefollower 0
# 23 "data/maps/Virimante_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 24 "data/maps/Virimante_PC/scripts.pory"
	waitmovement 0
# 25 "data/maps/Virimante_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 26 "data/maps/Virimante_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 27 "data/maps/Virimante_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 28 "data/maps/Virimante_PC/scripts.pory"
	waitmovement 0
# 29 "data/maps/Virimante_PC/scripts.pory"
	special HealPlayerParty
# 30 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_2
# 31 "data/maps/Virimante_PC/scripts.pory"
	waitmessage
# 32 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_Nurse_Text_3
# 33 "data/maps/Virimante_PC/scripts.pory"
	removemoney 50
# 34 "data/maps/Virimante_PC/scripts.pory"
	release
	end


Virimante_PC_GruntM::
# 51 "data/maps/Virimante_PC/scripts.pory"
	lock
# 52 "data/maps/Virimante_PC/scripts.pory"
	faceplayer
# 53 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_GruntM_Text_0
# 54 "data/maps/Virimante_PC/scripts.pory"
	closemessage
# 55 "data/maps/Virimante_PC/scripts.pory"
	delay 20
# 56 "data/maps/Virimante_PC/scripts.pory"
	turnobject 2, DIR_NORTH
# 57 "data/maps/Virimante_PC/scripts.pory"
	delay 20
# 58 "data/maps/Virimante_PC/scripts.pory"
	msgbox Virimante_PC_GruntM_Text_1
# 59 "data/maps/Virimante_PC/scripts.pory"
	release
	end


Virimante_PC_Nurse_Text_0:
# 16 "data/maps/Virimante_PC/scripts.pory"
	.string "Oi! I bet you want to heal your\n"
	.string "Pokémons, eh? Well, it's ¥50. Deal?$"

Virimante_PC_Nurse_Text_1:
# 21 "data/maps/Virimante_PC/scripts.pory"
	.string "Haha! That's what I thought. Give me\n"
	.string "your Pokémons! Don't worry, I won't\l"
	.string "steal them.$"

Virimante_PC_Nurse_Text_2:
# 30 "data/maps/Virimante_PC/scripts.pory"
	.string "And voilà!$"

Virimante_PC_Nurse_Text_3:
# 32 "data/maps/Virimante_PC/scripts.pory"
	.string "Come back soon, very soon I hope! Haha!$"

Virimante_PC_Nurse_Text_4:
# 38 "data/maps/Virimante_PC/scripts.pory"
	.string "You liar! You don't have enough money!\n"
	.string "Go away!$"

Virimante_PC_Nurse_Text_5:
# 44 "data/maps/Virimante_PC/scripts.pory"
	.string "Then go away! I don't need your money!$"

Virimante_PC_GruntM_Text_0:
# 53 "data/maps/Virimante_PC/scripts.pory"
	.string "This bitch won't heal my Pokémons!$"

Virimante_PC_GruntM_Text_1:
# 58 "data/maps/Virimante_PC/scripts.pory"
	.string "We're supposed to be on the same team!\n"
	.string "How am I gonna steal a Gym with fainted\l"
	.string "Pokémons? Bitch!$"
