# 1 "data/maps/Cruzeira_PokemonCenter/scripts.pory"

# 2 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
Cruzeira_PokemonCenter_MapScripts::
# 3 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Cruzeira_PokemonCenter_OnTransition
# 4 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.byte 0

Cruzeira_PokemonCenter_OnTransition::
# 8 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CRUZEIRA
	end


Cruzeira_PokemonCenter_Nurse::
# 13 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	lock
# 14 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	faceplayer
# 15 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Cruzeira_PokemonCenter_Nurse_1
# 37 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Nurse_Text_4
# 38 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	release
	end

Cruzeira_PokemonCenter_Nurse_1:
# 18 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Nurse_Text_1
# 20 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	hidefollower 0
# 21 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Nurse_Text_2
# 29 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitmessage
# 30 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitmovement 0
# 32 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Nurse_Text_3
# 33 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	release
	end


Cruzeira_PokemonCenter_Boy::
# 44 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	faceplayer
# 46 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Boy_Text_0
# 47 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	turnobject 3, DIR_NORTH
# 48 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	release
	end


Cruzeira_PokemonCenter_Woofies::
# 53 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	lock
# 54 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	faceplayer
# 55 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 56 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	waitmoncry
# 57 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	msgbox Cruzeira_PokemonCenter_Woofies_Text_0
# 58 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	turnobject 2, DIR_SOUTH
# 59 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	release
	end


Cruzeira_PokemonCenter_Nurse_Text_0:
# 16 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "Hey there, welcome to Cruzeira's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

Cruzeira_PokemonCenter_Nurse_Text_1:
# 19 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Cruzeira_PokemonCenter_Nurse_Text_2:
# 28 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Cruzeira_PokemonCenter_Nurse_Text_3:
# 32 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "We hope to see you soon!$"

Cruzeira_PokemonCenter_Nurse_Text_4:
# 37 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "No worries! Come back soon!$"

Cruzeira_PokemonCenter_Boy_Text_0:
# 46 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "Woofies sat on my porch one day, and we\n"
	.string "instantly became best friends! Now, he\l"
	.string "can be a bit too protective.$"

Cruzeira_PokemonCenter_Woofies_Text_0:
# 57 "data/maps/Cruzeira_PokemonCenter/scripts.pory"
	.string "Grrrr... GRRRRR....$"
