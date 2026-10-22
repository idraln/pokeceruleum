# 1 "data/maps/VineGrotto_Fossil/scripts.pory"

# 2 "data/maps/VineGrotto_Fossil/scripts.pory"
VineGrotto_Fossil_MapScripts::
# 3 "data/maps/VineGrotto_Fossil/scripts.pory"
	.byte 0

VineGrotto_Fossil_Fossil::
# 7 "data/maps/VineGrotto_Fossil/scripts.pory"
	lock
# 8 "data/maps/VineGrotto_Fossil/scripts.pory"
	msgbox VineGrotto_Fossil_Fossil_Text_0, MSGBOX_YESNO
# 9 "data/maps/VineGrotto_Fossil/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VineGrotto_Fossil_Fossil_2
# 16 "data/maps/VineGrotto_Fossil/scripts.pory"
	msgbox VineGrotto_Fossil_Fossil_Text_1
VineGrotto_Fossil_Fossil_1:
# 18 "data/maps/VineGrotto_Fossil/scripts.pory"
	release
	end

VineGrotto_Fossil_Fossil_2:
# 10 "data/maps/VineGrotto_Fossil/scripts.pory"
	removeobject 1
# 11 "data/maps/VineGrotto_Fossil/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 12 "data/maps/VineGrotto_Fossil/scripts.pory"
	setflag FLAG_FOSSIL_VINE
# 13 "data/maps/VineGrotto_Fossil/scripts.pory"
	startquest QUEST_FOSSIL
	goto VineGrotto_Fossil_Fossil_1


VineGrotto_Fossil_Fossil_Text_0:
# 8 "data/maps/VineGrotto_Fossil/scripts.pory"
	.string "This looks like an old fossil. Take it?$"

VineGrotto_Fossil_Fossil_Text_1:
# 16 "data/maps/VineGrotto_Fossil/scripts.pory"
	.string "Decided against it.$"
