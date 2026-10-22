# 1 "data/maps/CapeEast/scripts.pory"

# 2 "data/maps/CapeEast/scripts.pory"
CapeEast_MapScripts::
# 3 "data/maps/CapeEast/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CapeEast_OnFrame
# 4 "data/maps/CapeEast/scripts.pory"
	.byte 0
# 5 "data/maps/CapeEast/scripts.pory"

# 6 "data/maps/CapeEast/scripts.pory"
CapeEast_OnFrame:
# 7 "data/maps/CapeEast/scripts.pory"
    map_script_2 VAR_FOLLOWING_SAM, 0, CapeEast_FollowingSam
# 8 "data/maps/CapeEast/scripts.pory"
    .2byte 0

CapeEast_FollowingSam::
# 12 "data/maps/CapeEast/scripts.pory"
	lockall
# 14 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_FollowingSam_Text_0
# 15 "data/maps/CapeEast/scripts.pory"
	closemessage
# 16 "data/maps/CapeEast/scripts.pory"
	applymovement 4, SamShowingTheWay1
# 17 "data/maps/CapeEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowingSam1
# 18 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 19 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_FollowingSam_Text_1
# 20 "data/maps/CapeEast/scripts.pory"
	closemessage
# 21 "data/maps/CapeEast/scripts.pory"
	applymovement 4, SamShowingTheWay2
# 22 "data/maps/CapeEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowingSam2
# 23 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 24 "data/maps/CapeEast/scripts.pory"
	namebox CapeEast_FollowingSam_Text_2
# 25 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_FollowingSam_Text_3
# 26 "data/maps/CapeEast/scripts.pory"
	closemessage
# 27 "data/maps/CapeEast/scripts.pory"
	hidenamebox
# 28 "data/maps/CapeEast/scripts.pory"
	applymovement 4, SamShowingTheWay3
# 29 "data/maps/CapeEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFollowingSam3
# 30 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 31 "data/maps/CapeEast/scripts.pory"
	namebox CapeEast_FollowingSam_Text_2
# 32 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_FollowingSam_Text_4
# 33 "data/maps/CapeEast/scripts.pory"
	closemessage
# 34 "data/maps/CapeEast/scripts.pory"
	hidenamebox
# 35 "data/maps/CapeEast/scripts.pory"
	applymovement 4, SamLeavingToHouse
# 36 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 37 "data/maps/CapeEast/scripts.pory"
	setvar VAR_FOLLOWING_SAM, 1
# 38 "data/maps/CapeEast/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 0
# 39 "data/maps/CapeEast/scripts.pory"
	setflag FLAG_SAM_CAPE_EAST
# 40 "data/maps/CapeEast/scripts.pory"
	setflag FLAG_SAM_CONTEST
# 41 "data/maps/CapeEast/scripts.pory"
	setflag FLAG_SAM_TOWN_HALL
# 42 "data/maps/CapeEast/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 43 "data/maps/CapeEast/scripts.pory"
	releaseall
	end


CapeEast_CantGoBackToHouse::
# 48 "data/maps/CapeEast/scripts.pory"
	compare VAR_BLOCKED_ROAD, 0
	goto_if_eq CapeEast_CantGoBackToHouse_1
# 58 "data/maps/CapeEast/scripts.pory"
	release
	end

CapeEast_CantGoBackToHouse_1:
# 49 "data/maps/CapeEast/scripts.pory"
	lock
# 50 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_CantGoBackToHouse_Text_0
# 51 "data/maps/CapeEast/scripts.pory"
	closemessage
# 52 "data/maps/CapeEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBackingUp
# 53 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 54 "data/maps/CapeEast/scripts.pory"
	release
	end


CapeEast_Boy::
# 64 "data/maps/CapeEast/scripts.pory"
	lock
# 65 "data/maps/CapeEast/scripts.pory"
	faceplayer
# 66 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_Boy_Text_0
# 67 "data/maps/CapeEast/scripts.pory"
	release
	end


CapeEast_Fisherman::
# 72 "data/maps/CapeEast/scripts.pory"
	lock
# 73 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_Fisherman_Text_0
# 74 "data/maps/CapeEast/scripts.pory"
	faceplayer
# 75 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_Fisherman_Text_1
# 76 "data/maps/CapeEast/scripts.pory"
	applymovement 2, CapeEastFisherman
# 77 "data/maps/CapeEast/scripts.pory"
	waitmovement 0
# 78 "data/maps/CapeEast/scripts.pory"
	release
	end


CapeEast_Girl::
# 83 "data/maps/CapeEast/scripts.pory"
	lock
# 84 "data/maps/CapeEast/scripts.pory"
	faceplayer
# 85 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_Girl_Text_0
# 86 "data/maps/CapeEast/scripts.pory"
	applymovement 3, CapeEast_Girl_Movement_0
# 87 "data/maps/CapeEast/scripts.pory"
	release
	end


CapeEast_Tourist::
# 92 "data/maps/CapeEast/scripts.pory"
	lock
# 93 "data/maps/CapeEast/scripts.pory"
	faceplayer
# 94 "data/maps/CapeEast/scripts.pory"
	msgbox CapeEast_Tourist_Text_0
# 95 "data/maps/CapeEast/scripts.pory"
	release
	end


# 99 "data/maps/CapeEast/scripts.pory"
CapeEastFisherman:
# 100 "data/maps/CapeEast/scripts.pory"
	face_down
	step_end

# 103 "data/maps/CapeEast/scripts.pory"
PlayerFacesSam:
# 104 "data/maps/CapeEast/scripts.pory"
	face_left
	step_end

# 107 "data/maps/CapeEast/scripts.pory"
SamShowingTheWay1:
# 108 "data/maps/CapeEast/scripts.pory"
	walk_down
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 109 "data/maps/CapeEast/scripts.pory"
	walk_left
# 110 "data/maps/CapeEast/scripts.pory"
	face_player
	step_end

# 113 "data/maps/CapeEast/scripts.pory"
PlayerFollowingSam1:
# 114 "data/maps/CapeEast/scripts.pory"
	walk_down
# 114 "data/maps/CapeEast/scripts.pory"
	walk_down
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
# 115 "data/maps/CapeEast/scripts.pory"
	walk_left
	step_end

# 118 "data/maps/CapeEast/scripts.pory"
SamShowingTheWay2:
# 119 "data/maps/CapeEast/scripts.pory"
	walk_up
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 120 "data/maps/CapeEast/scripts.pory"
	walk_left
# 121 "data/maps/CapeEast/scripts.pory"
	face_player
	step_end

# 124 "data/maps/CapeEast/scripts.pory"
PlayerFollowingSam2:
# 125 "data/maps/CapeEast/scripts.pory"
	walk_left
# 126 "data/maps/CapeEast/scripts.pory"
	walk_up
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
# 127 "data/maps/CapeEast/scripts.pory"
	walk_left
	step_end

# 130 "data/maps/CapeEast/scripts.pory"
SamShowingTheWay3:
# 131 "data/maps/CapeEast/scripts.pory"
	walk_left
# 131 "data/maps/CapeEast/scripts.pory"
	walk_left
# 131 "data/maps/CapeEast/scripts.pory"
	walk_left
# 131 "data/maps/CapeEast/scripts.pory"
	walk_left
# 131 "data/maps/CapeEast/scripts.pory"
	walk_left
# 132 "data/maps/CapeEast/scripts.pory"
	walk_down
# 133 "data/maps/CapeEast/scripts.pory"
	walk_left
# 133 "data/maps/CapeEast/scripts.pory"
	walk_left
# 133 "data/maps/CapeEast/scripts.pory"
	walk_left
# 133 "data/maps/CapeEast/scripts.pory"
	walk_left
# 134 "data/maps/CapeEast/scripts.pory"
	walk_down
# 134 "data/maps/CapeEast/scripts.pory"
	walk_down
# 135 "data/maps/CapeEast/scripts.pory"
	walk_left
# 135 "data/maps/CapeEast/scripts.pory"
	walk_left
# 135 "data/maps/CapeEast/scripts.pory"
	walk_left
# 135 "data/maps/CapeEast/scripts.pory"
	walk_left
# 136 "data/maps/CapeEast/scripts.pory"
	face_player
	step_end

# 139 "data/maps/CapeEast/scripts.pory"
PlayerFollowingSam3:
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 140 "data/maps/CapeEast/scripts.pory"
	walk_left
# 141 "data/maps/CapeEast/scripts.pory"
	walk_down
# 142 "data/maps/CapeEast/scripts.pory"
	walk_left
# 142 "data/maps/CapeEast/scripts.pory"
	walk_left
# 142 "data/maps/CapeEast/scripts.pory"
	walk_left
# 142 "data/maps/CapeEast/scripts.pory"
	walk_left
# 143 "data/maps/CapeEast/scripts.pory"
	walk_down
# 143 "data/maps/CapeEast/scripts.pory"
	walk_down
# 144 "data/maps/CapeEast/scripts.pory"
	walk_left
# 144 "data/maps/CapeEast/scripts.pory"
	walk_left
# 144 "data/maps/CapeEast/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/CapeEast/scripts.pory"
SamLeavingToHouse:
# 148 "data/maps/CapeEast/scripts.pory"
	walk_up
# 149 "data/maps/CapeEast/scripts.pory"
	walk_right
# 149 "data/maps/CapeEast/scripts.pory"
	walk_right
# 149 "data/maps/CapeEast/scripts.pory"
	walk_right
# 149 "data/maps/CapeEast/scripts.pory"
	walk_right
# 149 "data/maps/CapeEast/scripts.pory"
	walk_right
# 150 "data/maps/CapeEast/scripts.pory"
	walk_up
# 151 "data/maps/CapeEast/scripts.pory"
	walk_right
# 151 "data/maps/CapeEast/scripts.pory"
	walk_right
# 151 "data/maps/CapeEast/scripts.pory"
	walk_right
# 151 "data/maps/CapeEast/scripts.pory"
	walk_right
# 151 "data/maps/CapeEast/scripts.pory"
	walk_right
	step_end

# 154 "data/maps/CapeEast/scripts.pory"
PlayerBackingUp:
# 155 "data/maps/CapeEast/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/CapeEast/scripts.pory"
GirlCapeEast:
# 159 "data/maps/CapeEast/scripts.pory"
	face_up
	step_end

# 86 "data/maps/CapeEast/scripts.pory"
CapeEast_Girl_Movement_0:
# 86 "data/maps/CapeEast/scripts.pory"
	face_up
	step_end

CapeEast_FollowingSam_Text_0:
# 14 "data/maps/CapeEast/scripts.pory"
	.string "Come on! What took you so long? Let's\n"
	.string "go!$"

CapeEast_FollowingSam_Text_1:
# 19 "data/maps/CapeEast/scripts.pory"
	.string "Oh, I just remembered, I haven't even\n"
	.string "introduced myself! My name is Sam! I'm a\l"
	.string "fisherman, just trying to make ends\l"
	.string "meet, you know? Work has been rough\l"
	.string "lately, there are not as many fish as\l"
	.string "there used to be. But I'm never gonna\l"
	.string "give up! That's the Sam way, as I like to\l"
	.string "call it. Anyway, let's keep on going.$"

CapeEast_FollowingSam_Text_2:
# 24 "data/maps/CapeEast/scripts.pory"
	.string "Sam$"

CapeEast_FollowingSam_Text_3:
# 25 "data/maps/CapeEast/scripts.pory"
	.string "Ha, thank goodness I'm with you! There\n"
	.string "are plenty Pokémons in those grass.\l"
	.string "Without any of your own, you would have\l"
	.string "been toast! Haha. But I guess you\l"
	.string "already know that, huh? Okay, I'll stop\l"
	.string "yapping, let's get to the Town Hall.$"

CapeEast_FollowingSam_Text_4:
# 32 "data/maps/CapeEast/scripts.pory"
	.string "Okay, here we are! Rocheval is right\n"
	.string "there. The Town Hall is the first\l"
	.string "building you'll see. Come back to my\l"
	.string "place when you sort everything out!$"

CapeEast_CantGoBackToHouse_Text_0:
# 50 "data/maps/CapeEast/scripts.pory"
	.string "(I can't go back to Sam's place without\n"
	.string "going to the Town Hall first, it's too\l"
	.string "dangerous.)$"

CapeEast_Boy_Text_0:
# 66 "data/maps/CapeEast/scripts.pory"
	.string "The air is so cool here! And it also\n"
	.string "tastes salty. Is it weird that I can\l"
	.string "taste air? Should I see a doctor?$"

CapeEast_Fisherman_Text_0:
# 73 "data/maps/CapeEast/scripts.pory"
	.string "...\n"
	.string "...Come on now, bite...$"

CapeEast_Fisherman_Text_1:
# 75 "data/maps/CapeEast/scripts.pory"
	.string "...Huh? Hey! Scram! You're scaring the\n"
	.string "fish!$"

CapeEast_Girl_Text_0:
# 85 "data/maps/CapeEast/scripts.pory"
	.string "I was told that if you Headbutt a tree\n"
	.string "like this one, a Pokémon will fall out of\l"
	.string "it. But so far, nothing has happened,\l"
	.string "and my head is starting to hurt.$"

CapeEast_Tourist_Text_0:
# 94 "data/maps/CapeEast/scripts.pory"
	.string "Oh man, I'm about to catch my very first\n"
	.string "Pokémon!! I'm so excited. I hope I\l"
	.string "manage to capture a good one, like a\l"
	.string "Kyogre or something.$"
