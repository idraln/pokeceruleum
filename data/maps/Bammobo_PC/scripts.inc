# 1 "data/maps/Bammobo_PC/scripts.pory"

# 2 "data/maps/Bammobo_PC/scripts.pory"
Bammobo_PC_MapScripts::
# 3 "data/maps/Bammobo_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Bammobo_PC_OnTransition
# 4 "data/maps/Bammobo_PC/scripts.pory"
    .byte 0

Bammobo_PC_OnTransition::
# 8 "data/maps/Bammobo_PC/scripts.pory"
	setrespawn HEAL_LOCATION_BAMMOBO
	end


Bammobo_PC_Nurse::
# 13 "data/maps/Bammobo_PC/scripts.pory"
	lock
# 14 "data/maps/Bammobo_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Bammobo_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Bammobo_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Bammobo_PC_Nurse_1
# 37 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Nurse_Text_4
# 38 "data/maps/Bammobo_PC/scripts.pory"
	release
	end

Bammobo_PC_Nurse_1:
# 18 "data/maps/Bammobo_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Nurse_Text_1
# 20 "data/maps/Bammobo_PC/scripts.pory"
	hidefollower 0
# 21 "data/maps/Bammobo_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/Bammobo_PC/scripts.pory"
	waitmovement 0
# 23 "data/maps/Bammobo_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/Bammobo_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Bammobo_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/Bammobo_PC/scripts.pory"
	waitmovement 0
# 27 "data/maps/Bammobo_PC/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Nurse_Text_2
# 29 "data/maps/Bammobo_PC/scripts.pory"
	waitmessage
# 30 "data/maps/Bammobo_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/Bammobo_PC/scripts.pory"
	waitmovement 0
# 32 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Nurse_Text_3
# 33 "data/maps/Bammobo_PC/scripts.pory"
	release
	end


Bammobo_PC_Picnicker::
# 44 "data/maps/Bammobo_PC/scripts.pory"
	lock
# 45 "data/maps/Bammobo_PC/scripts.pory"
	faceplayer
# 46 "data/maps/Bammobo_PC/scripts.pory"
	msgbox Bammobo_PC_Picnicker_Text_0
# 47 "data/maps/Bammobo_PC/scripts.pory"
	release
	end


Bammobo_PC_Nurse_Text_0:
# 16 "data/maps/Bammobo_PC/scripts.pory"
	.string "Hello dear, and welcome to Bammobo's\n"
	.string "Pokémon Center. Would you like me to\l"
	.string "heal your party?$"

Bammobo_PC_Nurse_Text_1:
# 19 "data/maps/Bammobo_PC/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Bammobo_PC_Nurse_Text_2:
# 28 "data/maps/Bammobo_PC/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed.$"

Bammobo_PC_Nurse_Text_3:
# 32 "data/maps/Bammobo_PC/scripts.pory"
	.string "We hope to see you soon.$"

Bammobo_PC_Nurse_Text_4:
# 37 "data/maps/Bammobo_PC/scripts.pory"
	.string "Do not hesitate. see you soon, I hope.$"

Bammobo_PC_Picnicker_Text_0:
# 46 "data/maps/Bammobo_PC/scripts.pory"
	.string "Bammobo used to be a safe haven for\n"
	.string "campers, rangers, and many more people.\l"
	.string "But since the Fandango Band has\l"
	.string "established their quarters in that\l"
	.string "place they call Virimante, it's not been\l"
	.string "the same...$"
