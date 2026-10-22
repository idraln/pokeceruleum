# 1 "data/maps/Rocheval_PokemonCenter/scripts.pory"

# 2 "data/maps/Rocheval_PokemonCenter/scripts.pory"
Rocheval_PokemonCenter_MapScripts::
# 3 "data/maps/Rocheval_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Rocheval_PokemonCenter_OnTransition
# 4 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.byte 0

Rocheval_PokemonCenter_OnTransition::
# 8 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ROCHEVAL
	end


Rocheval_PC_Boy::
# 13 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	lock
# 14 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	faceplayer
# 15 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Boy_Text_0
# 16 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	release
	end


Rocheval_PC_Old::
# 21 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	faceplayer
# 23 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Old_Text_0
# 24 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	release
	end


Rocheval_PC_Nurse::
# 29 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Rocheval_PC_Nurse_1
# 60 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	lock
# 61 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	faceplayer
# 62 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_5
# 63 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	release
	end

Rocheval_PC_Nurse_1:
# 30 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	lock
# 31 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	faceplayer
# 32 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 0
# 33 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_0, MSGBOX_YESNO
# 34 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rocheval_PC_Nurse_4
# 54 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_4
# 55 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	release
	end

Rocheval_PC_Nurse_4:
# 35 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 36 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_1
# 37 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	hidefollower 0
# 38 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 39 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	waitmovement 0
# 40 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 41 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 42 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 43 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	waitmovement 0
# 44 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 45 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_2
# 46 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	waitmessage
# 47 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 48 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	waitmovement 0
# 49 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	msgbox Rocheval_PC_Nurse_Text_3
# 50 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	release
	end


# 68 "data/maps/Rocheval_PokemonCenter/scripts.pory"
PkmnCenter_NurseTurn:
# 69 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	walk_in_place_faster_left
# 70 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	step_end

# 73 "data/maps/Rocheval_PokemonCenter/scripts.pory"
PkmnCenter_NurseReTurn:
# 74 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	walk_in_place_faster_down
# 75 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	step_end

# 78 "data/maps/Rocheval_PokemonCenter/scripts.pory"
PkmnCenter_NurseBow:
# 79 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	nurse_joy_bow
# 80 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	delay_4
# 81 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	step_end

Rocheval_PC_Boy_Text_0:
# 15 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "I just began playing this game, Pizza\n"
	.string "Tower. Man is it good! I love pizzas.$"

Rocheval_PC_Old_Text_0:
# 23 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "I settled in this town with my wife,\n"
	.string "something like 20 years ago. She's long\l"
	.string "gone now, so I stay here and try to\l"
	.string "chit-chat with the tourists.$"

Rocheval_PC_Nurse_Text_0:
# 33 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "Hey there, welcome to Rocheval's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

Rocheval_PC_Nurse_Text_1:
# 36 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Rocheval_PC_Nurse_Text_2:
# 45 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Rocheval_PC_Nurse_Text_3:
# 49 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "We hope to see you soon!$"

Rocheval_PC_Nurse_Text_4:
# 54 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "No worries! Come back soon!$"

Rocheval_PC_Nurse_Text_5:
# 62 "data/maps/Rocheval_PokemonCenter/scripts.pory"
	.string "Hi! Welcome to Rocheval's Pokémon\n"
	.string "Center. Do you want to heal your\l"
	.string "Pokémons? Well, you need some in the\l"
	.string "first place! Come back later.\n"
	.string "See you!$"
