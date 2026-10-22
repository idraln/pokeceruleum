# 1 "data/maps/ChallengerRd3/scripts.pory"

# 2 "data/maps/ChallengerRd3/scripts.pory"
ChallengerRd3_MapScripts::
# 3 "data/maps/ChallengerRd3/scripts.pory"
	.byte 0

ChallengerRd3_Item::
# 7 "data/maps/ChallengerRd3/scripts.pory"
	lock
# 8 "data/maps/ChallengerRd3/scripts.pory"
	removeobject 1
# 9 "data/maps/ChallengerRd3/scripts.pory"
	giveitem ITEM_TM03
# 10 "data/maps/ChallengerRd3/scripts.pory"
	setflag FLAG_ITEM_CHALLENGER_ROAD_3
# 11 "data/maps/ChallengerRd3/scripts.pory"
	release
	end

