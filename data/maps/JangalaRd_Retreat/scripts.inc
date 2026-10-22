# 1 "data/maps/JangalaRd_Retreat/scripts.pory"

# 2 "data/maps/JangalaRd_Retreat/scripts.pory"
JangalaRd_Retreat_MapScripts::
# 3 "data/maps/JangalaRd_Retreat/scripts.pory"
	.byte 0

JangalaRd_Retreat_Owner::
# 7 "data/maps/JangalaRd_Retreat/scripts.pory"
	lock
# 8 "data/maps/JangalaRd_Retreat/scripts.pory"
	faceplayer
# 9 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Owner_Text_0, MSGBOX_YESNO
# 10 "data/maps/JangalaRd_Retreat/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JangalaRd_Retreat_Owner_2
# 21 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Owner_Text_3
JangalaRd_Retreat_Owner_1:
# 23 "data/maps/JangalaRd_Retreat/scripts.pory"
	release
	end

JangalaRd_Retreat_Owner_2:
# 11 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Owner_Text_1
# 12 "data/maps/JangalaRd_Retreat/scripts.pory"
	closemessage
# 13 "data/maps/JangalaRd_Retreat/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/JangalaRd_Retreat/scripts.pory"
	special HealPlayerParty
# 15 "data/maps/JangalaRd_Retreat/scripts.pory"
	playfanfare MUS_HEAL
# 16 "data/maps/JangalaRd_Retreat/scripts.pory"
	waitfanfare
# 17 "data/maps/JangalaRd_Retreat/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Owner_Text_2
	goto JangalaRd_Retreat_Owner_1


JangalaRd_Retreat_Lass::
# 28 "data/maps/JangalaRd_Retreat/scripts.pory"
	lock
# 29 "data/maps/JangalaRd_Retreat/scripts.pory"
	faceplayer
# 30 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Lass_Text_0
# 31 "data/maps/JangalaRd_Retreat/scripts.pory"
	release
	end


JangalaRd_Retreat_Hiker::
# 36 "data/maps/JangalaRd_Retreat/scripts.pory"
	lock
# 37 "data/maps/JangalaRd_Retreat/scripts.pory"
	faceplayer
# 38 "data/maps/JangalaRd_Retreat/scripts.pory"
	msgbox JangalaRd_Retreat_Hiker_Text_0
# 39 "data/maps/JangalaRd_Retreat/scripts.pory"
	release
	end


JangalaRd_Retreat_Owner_Text_0:
# 9 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "Hello, dear. Welcome in. Do you want me\n"
	.string "to rest your weary Pokémons?$"

JangalaRd_Retreat_Owner_Text_1:
# 11 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "Very well, then.$"

JangalaRd_Retreat_Owner_Text_2:
# 18 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "Don't hesitate.$"

JangalaRd_Retreat_Owner_Text_3:
# 21 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "It's okay. If you change your mind, come\n"
	.string "see me again.$"

JangalaRd_Retreat_Lass_Text_0:
# 30 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "Wow! Beautiful road, but how the hell is\n"
	.string "it that hot and humid? Do you think it's\l"
	.string "because of the volcano in the north?$"

JangalaRd_Retreat_Hiker_Text_0:
# 38 "data/maps/JangalaRd_Retreat/scripts.pory"
	.string "Thank you, centuries of progress and\n"
	.string "inventions, for bringing us air\l"
	.string "conditioning. I couldn't imagine living\l"
	.string "here a hundred years ago.$"
