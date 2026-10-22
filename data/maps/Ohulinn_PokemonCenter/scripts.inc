# 1 "data/maps/Ohulinn_PokemonCenter/scripts.pory"

# 2 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
Ohulinn_PokemonCenter_MapScripts::
# 3 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Ohulinn_PokemonCenter_OnTransition
# 4 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.byte 0

Ohulinn_PokemonCenter_OnTransition::
# 8 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_OHULINN
	end


Ohulinn_PokemonCenter_Nurse::
# 13 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	lock
# 14 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	faceplayer
# 15 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ohulinn_PokemonCenter_Nurse_1
# 37 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Nurse_Text_4
# 38 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	release
	end

Ohulinn_PokemonCenter_Nurse_1:
# 18 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Nurse_Text_1
# 20 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	hidefollower 0
# 21 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 22 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 26 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Nurse_Text_2
# 29 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	waitmessage
# 30 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 31 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	waitmovement 0
# 32 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Nurse_Text_3
# 33 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	release
	end


Ohulinn_PokemonCenter_Boy::
# 44 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	faceplayer
# 46 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Boy_Text_0
# 47 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	release
	end


Ohulinn_PokemonCenter_Woman::
# 52 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	lock
# 53 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	faceplayer
# 54 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	msgbox Ohulinn_PokemonCenter_Woman_Text_0
# 55 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	release
	end


Ohulinn_PokemonCenter_Nurse_Text_0:
# 16 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "Hey there, welcome to Ohulinn's Pokémon\n"
	.string "Center! How's it going? Would you like\l"
	.string "to heal your party?$"

Ohulinn_PokemonCenter_Nurse_Text_1:
# 19 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

Ohulinn_PokemonCenter_Nurse_Text_2:
# 28 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

Ohulinn_PokemonCenter_Nurse_Text_3:
# 32 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "We hope to see you soon!$"

Ohulinn_PokemonCenter_Nurse_Text_4:
# 37 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "No worries! Come back soon!$"

Ohulinn_PokemonCenter_Boy_Text_0:
# 46 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "Oof, the wind got me completely\n"
	.string "exhausted! Walking in here feels like a\l"
	.string "Mudsdale is holding you back!$"

Ohulinn_PokemonCenter_Woman_Text_0:
# 54 "data/maps/Ohulinn_PokemonCenter/scripts.pory"
	.string "You should take a dip in the ocean east\n"
	.string "of here. With the wind, you'll feel\l"
	.string "rocked by the currents! And get this:\l"
	.string "it's not even dangerous! No one has\l"
	.string "ever died because of these currents.\l"
	.string "Well, not yet at least.$"
