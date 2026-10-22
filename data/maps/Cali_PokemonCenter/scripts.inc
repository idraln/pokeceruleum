# 1 "data/maps/Cali_PokemonCenter/scripts.pory"

# 2 "data/maps/Cali_PokemonCenter/scripts.pory"
Cali_PokemonCenter_MapScripts::
# 3 "data/maps/Cali_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Cali_PokemonCenter_OnTransition
# 4 "data/maps/Cali_PokemonCenter/scripts.pory"
	.byte 0

Cali_PokemonCenter_OnTransition::
# 9 "data/maps/Cali_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CALI
	end


Cali_PokemonCenter_Nurse::
# 14 "data/maps/Cali_PokemonCenter/scripts.pory"
	lock
# 15 "data/maps/Cali_PokemonCenter/scripts.pory"
	faceplayer
# 16 "data/maps/Cali_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/Cali_PokemonCenter/scripts.pory"
	msgbox Cali_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
# 18 "data/maps/Cali_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Cali_PokemonCenter_Nurse_1
# 38 "data/maps/Cali_PokemonCenter/scripts.pory"
	msgbox Cali_PokemonCenter_Nurse_Text_4
# 39 "data/maps/Cali_PokemonCenter/scripts.pory"
	release
	end

Cali_PokemonCenter_Nurse_1:
# 19 "data/maps/Cali_PokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/Cali_PokemonCenter/scripts.pory"
	msgbox Cali_PokemonCenter_Nurse_Text_1
# 21 "data/maps/Cali_PokemonCenter/scripts.pory"
	hidefollower 0
# 22 "data/maps/Cali_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 23 "data/maps/Cali_PokemonCenter/scripts.pory"
	waitmovement 0
# 24 "data/maps/Cali_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Cali_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 26 "data/maps/Cali_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 27 "data/maps/Cali_PokemonCenter/scripts.pory"
	waitmovement 0
# 28 "data/maps/Cali_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/Cali_PokemonCenter/scripts.pory"
	msgbox Cali_PokemonCenter_Nurse_Text_2
# 30 "data/maps/Cali_PokemonCenter/scripts.pory"
	waitmessage
# 31 "data/maps/Cali_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 32 "data/maps/Cali_PokemonCenter/scripts.pory"
	waitmovement 0
# 33 "data/maps/Cali_PokemonCenter/scripts.pory"
	msgbox Cali_PokemonCenter_Nurse_Text_3
# 34 "data/maps/Cali_PokemonCenter/scripts.pory"
	release
	end


Cali_PokemonCenter_Nurse_Text_0:
# 17 "data/maps/Cali_PokemonCenter/scripts.pory"
	.string "Hey there, welcome to Cali's Pokémon\n"
	.string "Center! How's it going? Would you like\l"
	.string "to heal your party?$"

Cali_PokemonCenter_Nurse_Text_1:
# 20 "data/maps/Cali_PokemonCenter/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Cali_PokemonCenter_Nurse_Text_2:
# 29 "data/maps/Cali_PokemonCenter/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Cali_PokemonCenter_Nurse_Text_3:
# 33 "data/maps/Cali_PokemonCenter/scripts.pory"
	.string "We hope to see you soon!$"

Cali_PokemonCenter_Nurse_Text_4:
# 38 "data/maps/Cali_PokemonCenter/scripts.pory"
	.string "No worries! Come back soon!$"
