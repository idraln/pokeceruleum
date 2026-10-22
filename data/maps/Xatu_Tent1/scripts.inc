# 1 "data/maps/Xatu_Tent1/scripts.pory"

# 2 "data/maps/Xatu_Tent1/scripts.pory"
Xatu_Tent1_MapScripts::
# 3 "data/maps/Xatu_Tent1/scripts.pory"
	.byte 0

Xatu_Tent1_TM::
# 7 "data/maps/Xatu_Tent1/scripts.pory"
	lock
# 8 "data/maps/Xatu_Tent1/scripts.pory"
	removeobject 1
# 9 "data/maps/Xatu_Tent1/scripts.pory"
	setflag FLAG_HERRON_TM
# 10 "data/maps/Xatu_Tent1/scripts.pory"
	giveitem ITEM_TM31
# 11 "data/maps/Xatu_Tent1/scripts.pory"
	release
	end

