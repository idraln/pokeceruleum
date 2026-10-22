# 1 "data/maps/SapphireCity_PokemonCenter/scripts.pory"

# 2 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
SapphireCity_PokemonCenter_MapScripts::
# 3 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SapphireCity_PokemonCenter_OnTransition
# 4 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
    .byte 0

SapphireCity_PokemonCenter_OnTransition::
# 8 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SAPPHIRE_CITY
	end


SapphireCity_PokemonCenter_Nurse::
# 14 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	lock
# 15 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	faceplayer
# 16 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Nurse_Text_0, MSGBOX_YESNO
# 18 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_PokemonCenter_Nurse_1
# 38 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Nurse_Text_4
# 39 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	release
	end

SapphireCity_PokemonCenter_Nurse_1:
# 19 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Nurse_Text_1
# 21 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	hidefollower 0
# 22 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 23 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 24 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 26 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 27 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 28 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Nurse_Text_2
# 30 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	waitmessage
# 31 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 32 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 33 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Nurse_Text_3
# 34 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	release
	end


SapphireCity_PokemonCenter_Gamer::
# 45 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	lock
# 46 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	faceplayer
# 47 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	msgbox SapphireCity_PokemonCenter_Gamer_Text_0
# 48 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	release
	end


SapphireCity_PokemonCenter_Nurse_Text_0:
# 17 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "Hey there, welcome to Sapphire City's\n"
	.string "Pokémon Center! How's it going? Would\l"
	.string "you like to heal your party?$"

SapphireCity_PokemonCenter_Nurse_Text_1:
# 20 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

SapphireCity_PokemonCenter_Nurse_Text_2:
# 29 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

SapphireCity_PokemonCenter_Nurse_Text_3:
# 33 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "We hope to see you soon!$"

SapphireCity_PokemonCenter_Nurse_Text_4:
# 38 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "No worries! Come back soon!$"

SapphireCity_PokemonCenter_Gamer_Text_0:
# 47 "data/maps/SapphireCity_PokemonCenter/scripts.pory"
	.string "I got this game at the Gaming Center in\n"
	.string "the supermarket! You should check'em\l"
	.string "out, real nice people.$"
