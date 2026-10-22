# 1 "data/maps/GlorrayRetro_PC/scripts.pory"

# 2 "data/maps/GlorrayRetro_PC/scripts.pory"
GlorrayRetro_PC_MapScripts::
# 3 "data/maps/GlorrayRetro_PC/scripts.pory"
	.byte 0

GlorrayRetro_PC_Nurse::
# 7 "data/maps/GlorrayRetro_PC/scripts.pory"
	lock
# 8 "data/maps/GlorrayRetro_PC/scripts.pory"
	faceplayer
# 9 "data/maps/GlorrayRetro_PC/scripts.pory"
	setvar VAR_0x8004, 0
# 10 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Nurse_Text_0, MSGBOX_YESNO
# 11 "data/maps/GlorrayRetro_PC/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GlorrayRetro_PC_Nurse_1
# 31 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Nurse_Text_4
# 32 "data/maps/GlorrayRetro_PC/scripts.pory"
	release
	end

GlorrayRetro_PC_Nurse_1:
# 12 "data/maps/GlorrayRetro_PC/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 13 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Nurse_Text_1
# 14 "data/maps/GlorrayRetro_PC/scripts.pory"
	hidefollower 0
# 15 "data/maps/GlorrayRetro_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseTurn
# 16 "data/maps/GlorrayRetro_PC/scripts.pory"
	waitmovement 0
# 17 "data/maps/GlorrayRetro_PC/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 18 "data/maps/GlorrayRetro_PC/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 19 "data/maps/GlorrayRetro_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseReTurn
# 20 "data/maps/GlorrayRetro_PC/scripts.pory"
	waitmovement 0
# 21 "data/maps/GlorrayRetro_PC/scripts.pory"
	special HealPlayerParty
# 22 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Nurse_Text_2
# 23 "data/maps/GlorrayRetro_PC/scripts.pory"
	waitmessage
# 24 "data/maps/GlorrayRetro_PC/scripts.pory"
	applymovement 1, PkmnCenter_NurseBow
# 25 "data/maps/GlorrayRetro_PC/scripts.pory"
	waitmovement 0
# 26 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Nurse_Text_3
# 27 "data/maps/GlorrayRetro_PC/scripts.pory"
	release
	end


GlorrayRetro_PC_Kid::
# 38 "data/maps/GlorrayRetro_PC/scripts.pory"
	lock
# 39 "data/maps/GlorrayRetro_PC/scripts.pory"
	faceplayer
# 40 "data/maps/GlorrayRetro_PC/scripts.pory"
	msgbox GlorrayRetro_PC_Kid_Text_0
# 41 "data/maps/GlorrayRetro_PC/scripts.pory"
	release
	end


GlorrayRetro_PC_Nurse_Text_0:
# 10 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "Hi {PLAYER}! You finally have your own\n"
	.string "Pokémon, congratulations! Would you\l"
	.string "like me to heal your party?$"

GlorrayRetro_PC_Nurse_Text_1:
# 13 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "You got it!$"

GlorrayRetro_PC_Nurse_Text_2:
# 22 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "Here you go, fully healed!$"

GlorrayRetro_PC_Nurse_Text_3:
# 26 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "I hope to see you soon! Take care.$"

GlorrayRetro_PC_Nurse_Text_4:
# 31 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "No worries! Hope you come back soon!\n"
	.string "Take care.$"

GlorrayRetro_PC_Kid_Text_0:
# 40 "data/maps/GlorrayRetro_PC/scripts.pory"
	.string "Isn't that awesome that Pokémon\n"
	.string "Centers are free to use? At school, I\l"
	.string "read about a country where going to the\l"
	.string "hospital can costs thousands of\l"
	.string "Pokédollars! Haha! How dumb is that?$"
