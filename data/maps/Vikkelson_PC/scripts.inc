# 1 "data/maps/Vikkelson_PC/scripts.pory"

# 2 "data/maps/Vikkelson_PC/scripts.pory"
Vikkelson_PC_MapScripts::
# 3 "data/maps/Vikkelson_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Vikkelson_PC_OnTransition
# 4 "data/maps/Vikkelson_PC/scripts.pory"
    .byte 0

Vikkelson_PC_OnTransition::
# 8 "data/maps/Vikkelson_PC/scripts.pory"
	setrespawn HEAL_LOCATION_VIKKELSON
	end


Vikkelson_PC_Nurse::
# 14 "data/maps/Vikkelson_PC/scripts.pory"
	lock
# 15 "data/maps/Vikkelson_PC/scripts.pory"
	faceplayer
# 16 "data/maps/Vikkelson_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Nurse_Text_0, MSGBOX_YESNO
# 18 "data/maps/Vikkelson_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Vikkelson_PC_Nurse_1
# 38 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Nurse_Text_4
# 39 "data/maps/Vikkelson_PC/scripts.pory"
	release
	end

Vikkelson_PC_Nurse_1:
# 19 "data/maps/Vikkelson_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Nurse_Text_1
# 21 "data/maps/Vikkelson_PC/scripts.pory"
	hidefollower 0
# 22 "data/maps/Vikkelson_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 23 "data/maps/Vikkelson_PC/scripts.pory"
	waitmovement 0
# 24 "data/maps/Vikkelson_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Vikkelson_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 26 "data/maps/Vikkelson_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 27 "data/maps/Vikkelson_PC/scripts.pory"
	waitmovement 0
# 28 "data/maps/Vikkelson_PC/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Nurse_Text_2
# 30 "data/maps/Vikkelson_PC/scripts.pory"
	waitmessage
# 31 "data/maps/Vikkelson_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 32 "data/maps/Vikkelson_PC/scripts.pory"
	waitmovement 0
# 33 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Nurse_Text_3
# 34 "data/maps/Vikkelson_PC/scripts.pory"
	release
	end


Vikkelson_PC_Man::
# 45 "data/maps/Vikkelson_PC/scripts.pory"
	lock
# 46 "data/maps/Vikkelson_PC/scripts.pory"
	faceplayer
# 47 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Man_Text_0
# 48 "data/maps/Vikkelson_PC/scripts.pory"
	turnobject 2, DIR_WEST
# 49 "data/maps/Vikkelson_PC/scripts.pory"
	release
	end


Vikkelson_PC_Woman::
# 54 "data/maps/Vikkelson_PC/scripts.pory"
	lock
# 55 "data/maps/Vikkelson_PC/scripts.pory"
	faceplayer
# 56 "data/maps/Vikkelson_PC/scripts.pory"
	msgbox Vikkelson_PC_Woman_Text_0
# 57 "data/maps/Vikkelson_PC/scripts.pory"
	release
	end


Vikkelson_PC_Nurse_Text_0:
# 17 "data/maps/Vikkelson_PC/scripts.pory"
	.string "Hey there, welcome to Vikkelson's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

Vikkelson_PC_Nurse_Text_1:
# 20 "data/maps/Vikkelson_PC/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Vikkelson_PC_Nurse_Text_2:
# 29 "data/maps/Vikkelson_PC/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Vikkelson_PC_Nurse_Text_3:
# 33 "data/maps/Vikkelson_PC/scripts.pory"
	.string "We hope to see you soon!$"

Vikkelson_PC_Nurse_Text_4:
# 38 "data/maps/Vikkelson_PC/scripts.pory"
	.string "No worries! Come back soon!$"

Vikkelson_PC_Man_Text_0:
# 47 "data/maps/Vikkelson_PC/scripts.pory"
	.string "Step back, I think I'm gonna be sick... I\n"
	.string "know this place only heals Pokémons,\l"
	.string "but what about my drunk ass?$"

Vikkelson_PC_Woman_Text_0:
# 56 "data/maps/Vikkelson_PC/scripts.pory"
	.string "There's only one place that's missing in\n"
	.string "Vikkelson: Pokémon fights. What if I\l"
	.string "want to train my beautiful Azumarill AND\l"
	.string "have great fun, both at the same time?$"
