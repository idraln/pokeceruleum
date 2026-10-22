# 1 "data/maps/Glasville_PC/scripts.pory"

# 2 "data/maps/Glasville_PC/scripts.pory"
Glasville_PC_MapScripts::
# 3 "data/maps/Glasville_PC/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Glasville_PC_OnTransition
# 4 "data/maps/Glasville_PC/scripts.pory"
    .byte 0

Glasville_PC_OnTransition::
# 8 "data/maps/Glasville_PC/scripts.pory"
	setrespawn HEAL_LOCATION_GLASVILLE
	end


Glasville_PC_Nurse::
# 14 "data/maps/Glasville_PC/scripts.pory"
	lock
# 15 "data/maps/Glasville_PC/scripts.pory"
	faceplayer
# 16 "data/maps/Glasville_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/Glasville_PC/scripts.pory"
	msgbox Glasville_PC_Nurse_Text_0, MSGBOX_YESNO
# 18 "data/maps/Glasville_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Glasville_PC_Nurse_1
# 38 "data/maps/Glasville_PC/scripts.pory"
	msgbox Glasville_PC_Nurse_Text_4
# 39 "data/maps/Glasville_PC/scripts.pory"
	release
	end

Glasville_PC_Nurse_1:
# 19 "data/maps/Glasville_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/Glasville_PC/scripts.pory"
	msgbox Glasville_PC_Nurse_Text_1
# 21 "data/maps/Glasville_PC/scripts.pory"
	hidefollower 0
# 22 "data/maps/Glasville_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 23 "data/maps/Glasville_PC/scripts.pory"
	waitmovement 0
# 24 "data/maps/Glasville_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Glasville_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 26 "data/maps/Glasville_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 27 "data/maps/Glasville_PC/scripts.pory"
	waitmovement 0
# 28 "data/maps/Glasville_PC/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/Glasville_PC/scripts.pory"
	msgbox Glasville_PC_Nurse_Text_2
# 30 "data/maps/Glasville_PC/scripts.pory"
	waitmessage
# 31 "data/maps/Glasville_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 32 "data/maps/Glasville_PC/scripts.pory"
	waitmovement 0
# 33 "data/maps/Glasville_PC/scripts.pory"
	msgbox Glasville_PC_Nurse_Text_3
# 34 "data/maps/Glasville_PC/scripts.pory"
	release
	end


Glasville_PC_Nurse_Text_0:
# 17 "data/maps/Glasville_PC/scripts.pory"
	.string "Hey there, welcome to Glasville's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

Glasville_PC_Nurse_Text_1:
# 20 "data/maps/Glasville_PC/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Glasville_PC_Nurse_Text_2:
# 29 "data/maps/Glasville_PC/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Glasville_PC_Nurse_Text_3:
# 33 "data/maps/Glasville_PC/scripts.pory"
	.string "We hope to see you soon!$"

Glasville_PC_Nurse_Text_4:
# 38 "data/maps/Glasville_PC/scripts.pory"
	.string "No worries! Come back soon!$"
