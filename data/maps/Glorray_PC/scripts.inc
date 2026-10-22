# 1 "data/maps/Glorray_PC/scripts.pory"

# 2 "data/maps/Glorray_PC/scripts.pory"
Glorray_PC_MapScripts::
# 3 "data/maps/Glorray_PC/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Glorray_PC_OnTransition
# 4 "data/maps/Glorray_PC/scripts.pory"
    .byte 0

Glorray_PC_OnTransition::
# 8 "data/maps/Glorray_PC/scripts.pory"
	setrespawn HEAL_LOCATION_ARRAY
	end


Glorray_PC_Heal::
# 13 "data/maps/Glorray_PC/scripts.pory"
	lock
# 14 "data/maps/Glorray_PC/scripts.pory"
	faceplayer
# 15 "data/maps/Glorray_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/Glorray_PC/scripts.pory"
	msgbox Glorray_PC_Heal_Text_0, MSGBOX_YESNO
# 17 "data/maps/Glorray_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Glorray_PC_Heal_1
# 30 "data/maps/Glorray_PC/scripts.pory"
	msgbox Glorray_PC_Heal_Text_1
# 31 "data/maps/Glorray_PC/scripts.pory"
	release
	end

Glorray_PC_Heal_1:
# 18 "data/maps/Glorray_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/Glorray_PC/scripts.pory"
	hidefollower 0
# 20 "data/maps/Glorray_PC/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/Glorray_PC/scripts.pory"
	closemessage
# 22 "data/maps/Glorray_PC/scripts.pory"
	special HealPlayerParty
# 23 "data/maps/Glorray_PC/scripts.pory"
	playfanfare MUS_HEAL
# 24 "data/maps/Glorray_PC/scripts.pory"
	waitfanfare
# 25 "data/maps/Glorray_PC/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/Glorray_PC/scripts.pory"
	release
	end


Glorray_PC_Heal_Text_0:
# 16 "data/maps/Glorray_PC/scripts.pory"
	.string "The machine seems to work as it used to.\n"
	.string "Heal your party?$"

Glorray_PC_Heal_Text_1:
# 30 "data/maps/Glorray_PC/scripts.pory"
	.string "(Maybe another time.)$"
