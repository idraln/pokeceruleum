# 1 "data/maps/CouncilHQ/scripts.pory"

# 2 "data/maps/CouncilHQ/scripts.pory"
CouncilHQ_MapScripts::
# 3 "data/maps/CouncilHQ/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, CouncilHQ_OnTransition
# 4 "data/maps/CouncilHQ/scripts.pory"
	.byte 0

CouncilHQ_OnTransition::
# 8 "data/maps/CouncilHQ/scripts.pory"
	setflag FLAG_VISITED_COUNCIL_HQ
	return

