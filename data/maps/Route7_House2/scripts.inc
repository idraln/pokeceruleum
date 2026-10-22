# 1 "data/maps/Route7_House2/scripts.pory"

# 2 "data/maps/Route7_House2/scripts.pory"
Route7_House2_MapScripts::
# 3 "data/maps/Route7_House2/scripts.pory"
	.byte 0

Route7_House2_Item::
# 7 "data/maps/Route7_House2/scripts.pory"
	lock
# 8 "data/maps/Route7_House2/scripts.pory"
	removeobject 1
# 9 "data/maps/Route7_House2/scripts.pory"
	setflag FLAG_ITEM_GUARD
# 10 "data/maps/Route7_House2/scripts.pory"
	giveitem ITEM_TEA
# 11 "data/maps/Route7_House2/scripts.pory"
	release
	end

