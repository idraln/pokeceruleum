# 1 "data/maps/MistraltonCity_PC/scripts.pory"

# 2 "data/maps/MistraltonCity_PC/scripts.pory"
MistraltonCity_PC_MapScripts::
# 3 "data/maps/MistraltonCity_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MistraltonCity_PC_OnTransition
# 4 "data/maps/MistraltonCity_PC/scripts.pory"
    .byte 0

MistraltonCity_PC_OnTransition::
# 8 "data/maps/MistraltonCity_PC/scripts.pory"
	setrespawn HEAL_LOCATION_MISTRALTON_CITY
	end


MistraltonCity_PC_Nurse::
# 13 "data/maps/MistraltonCity_PC/scripts.pory"
	lock
# 14 "data/maps/MistraltonCity_PC/scripts.pory"
	faceplayer
# 15 "data/maps/MistraltonCity_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/MistraltonCity_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MistraltonCity_PC_Nurse_1
# 37 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Nurse_Text_4
# 38 "data/maps/MistraltonCity_PC/scripts.pory"
	release
	end

MistraltonCity_PC_Nurse_1:
# 18 "data/maps/MistraltonCity_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Nurse_Text_1
# 20 "data/maps/MistraltonCity_PC/scripts.pory"
	hidefollower 0
# 21 "data/maps/MistraltonCity_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/MistraltonCity_PC/scripts.pory"
	waitmovement 0
# 23 "data/maps/MistraltonCity_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/MistraltonCity_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/MistraltonCity_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/MistraltonCity_PC/scripts.pory"
	waitmovement 0
# 27 "data/maps/MistraltonCity_PC/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Nurse_Text_2
# 29 "data/maps/MistraltonCity_PC/scripts.pory"
	waitmessage
# 30 "data/maps/MistraltonCity_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/MistraltonCity_PC/scripts.pory"
	waitmovement 0
# 32 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Nurse_Text_3
# 33 "data/maps/MistraltonCity_PC/scripts.pory"
	release
	end


MistraltonCity_PC_Man::
# 44 "data/maps/MistraltonCity_PC/scripts.pory"
	lock
# 45 "data/maps/MistraltonCity_PC/scripts.pory"
	faceplayer
# 46 "data/maps/MistraltonCity_PC/scripts.pory"
	msgbox MistraltonCity_PC_Man_Text_0
# 47 "data/maps/MistraltonCity_PC/scripts.pory"
	release
	end


MistraltonCity_PC_Nurse_Text_0:
# 16 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "Hey there, welcome to Mistralton City's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

MistraltonCity_PC_Nurse_Text_1:
# 19 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

MistraltonCity_PC_Nurse_Text_2:
# 28 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

MistraltonCity_PC_Nurse_Text_3:
# 32 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "We hope to see you soon!$"

MistraltonCity_PC_Nurse_Text_4:
# 37 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "No worries! Come back soon!$"

MistraltonCity_PC_Man_Text_0:
# 46 "data/maps/MistraltonCity_PC/scripts.pory"
	.string "Man... Oh, man...$"
