# 1 "data/maps/Glasville_HouseC/scripts.pory"

# 2 "data/maps/Glasville_HouseC/scripts.pory"
Glasville_HouseC_MapScripts::
# 3 "data/maps/Glasville_HouseC/scripts.pory"
	.byte 0

Glasville_HouseC_Pokeball::
# 7 "data/maps/Glasville_HouseC/scripts.pory"
	lock
# 8 "data/maps/Glasville_HouseC/scripts.pory"
	removeobject 1
# 9 "data/maps/Glasville_HouseC/scripts.pory"
	setflag FLAG_POKEMON_GLASVILLE
# 10 "data/maps/Glasville_HouseC/scripts.pory"
	givemon SPECIES_ABSOL, 25, ITEM_ABSOLITE
# 11 "data/maps/Glasville_HouseC/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Glasville_HouseC_Pokeball_2
# 16 "data/maps/Glasville_HouseC/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Glasville_HouseC_Pokeball_3
Glasville_HouseC_Pokeball_1:
# 21 "data/maps/Glasville_HouseC/scripts.pory"
	completequest QUEST_EMPTY_HOUSE
# 22 "data/maps/Glasville_HouseC/scripts.pory"
	setvar VAR_HOUSE_GLASVILLE, 3
# 23 "data/maps/Glasville_HouseC/scripts.pory"
	release
	end

Glasville_HouseC_Pokeball_2:
# 12 "data/maps/Glasville_HouseC/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 13 "data/maps/Glasville_HouseC/scripts.pory"
	msgbox Glasville_HouseC_Pokeball_Text_0
# 14 "data/maps/Glasville_HouseC/scripts.pory"
	call NicknamePokemon
	goto Glasville_HouseC_Pokeball_1

Glasville_HouseC_Pokeball_3:
# 17 "data/maps/Glasville_HouseC/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 18 "data/maps/Glasville_HouseC/scripts.pory"
	msgbox Glasville_HouseC_Pokeball_Text_0
# 19 "data/maps/Glasville_HouseC/scripts.pory"
	call NicknameBoxmon
	goto Glasville_HouseC_Pokeball_1


Glasville_HouseC_Pokeball_Text_0:
# 13 "data/maps/Glasville_HouseC/scripts.pory"
	.string "You just received an Absol!$"
