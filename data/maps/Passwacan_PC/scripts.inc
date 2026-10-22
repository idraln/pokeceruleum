# 1 "data/maps/Passwacan_PC/scripts.pory"

# 2 "data/maps/Passwacan_PC/scripts.pory"
Passwacan_PC_MapScripts::
# 3 "data/maps/Passwacan_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Passwacan_PC_OnTransition
# 4 "data/maps/Passwacan_PC/scripts.pory"
    .byte 0

Passwacan_PC_OnTransition::
# 8 "data/maps/Passwacan_PC/scripts.pory"
	setrespawn HEAL_LOCATION_PASSWACAN
	end


Passwacan_PC_Nurse::
# 13 "data/maps/Passwacan_PC/scripts.pory"
	lock
# 14 "data/maps/Passwacan_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Passwacan_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Passwacan_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_PC_Nurse_1
# 37 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Nurse_Text_4
# 38 "data/maps/Passwacan_PC/scripts.pory"
	release
	end

Passwacan_PC_Nurse_1:
# 18 "data/maps/Passwacan_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Nurse_Text_1
# 20 "data/maps/Passwacan_PC/scripts.pory"
	hidefollower 0
# 21 "data/maps/Passwacan_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/Passwacan_PC/scripts.pory"
	waitmovement 0
# 23 "data/maps/Passwacan_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/Passwacan_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Passwacan_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/Passwacan_PC/scripts.pory"
	waitmovement 0
# 27 "data/maps/Passwacan_PC/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Nurse_Text_2
# 29 "data/maps/Passwacan_PC/scripts.pory"
	waitmessage
# 30 "data/maps/Passwacan_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/Passwacan_PC/scripts.pory"
	waitmovement 0
# 32 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Nurse_Text_3
# 33 "data/maps/Passwacan_PC/scripts.pory"
	release
	end


Passwacan_PC_Kid::
# 44 "data/maps/Passwacan_PC/scripts.pory"
	lock
# 45 "data/maps/Passwacan_PC/scripts.pory"
	faceplayer
# 46 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Kid_Text_0
# 47 "data/maps/Passwacan_PC/scripts.pory"
	turnobject 2, DIR_EAST
# 48 "data/maps/Passwacan_PC/scripts.pory"
	release
	end


Passwacan_PC_Zigzagoon::
# 53 "data/maps/Passwacan_PC/scripts.pory"
	lock
# 54 "data/maps/Passwacan_PC/scripts.pory"
	faceplayer
# 55 "data/maps/Passwacan_PC/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 56 "data/maps/Passwacan_PC/scripts.pory"
	msgbox Passwacan_PC_Zigzagoon_Text_0
# 57 "data/maps/Passwacan_PC/scripts.pory"
	release
	end


Passwacan_PC_Nurse_Text_0:
# 16 "data/maps/Passwacan_PC/scripts.pory"
	.string "Hi there, welcome to Passwacan's\n"
	.string "Pokémon Center! Would you like me to\l"
	.string "heal your party?$"

Passwacan_PC_Nurse_Text_1:
# 19 "data/maps/Passwacan_PC/scripts.pory"
	.string "Okay! Give me your Pokémons.$"

Passwacan_PC_Nurse_Text_2:
# 28 "data/maps/Passwacan_PC/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Passwacan_PC_Nurse_Text_3:
# 32 "data/maps/Passwacan_PC/scripts.pory"
	.string "We hope to see you soon!$"

Passwacan_PC_Nurse_Text_4:
# 37 "data/maps/Passwacan_PC/scripts.pory"
	.string "Okay, we hope you come back soon!$"

Passwacan_PC_Kid_Text_0:
# 46 "data/maps/Passwacan_PC/scripts.pory"
	.string "Look at that Zigzagoon I found on\n"
	.string "Passaqua Way! Its leg was broken, and\l"
	.string "the kind nurse got it back on its feet\l"
	.string "right away!$"

Passwacan_PC_Zigzagoon_Text_0:
# 56 "data/maps/Passwacan_PC/scripts.pory"
	.string "Zig! Zig!$"
