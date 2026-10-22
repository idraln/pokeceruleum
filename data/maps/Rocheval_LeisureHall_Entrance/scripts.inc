# 1 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"

# 2 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
Rocheval_LeisureHall_Entrance_MapScripts::
# 3 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_LeisureHallEntrance_OnFrame
# 4 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.byte 0
# 5 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"

# 6 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
    Rocheval_LeisureHallEntrance_OnFrame:
# 7 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 6, Rocheval_LeisureHallEntrance_Prize
# 8 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
   .2byte 0

Rocheval_LeisureHallEntrance_Prize::
# 12 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 6
	goto_if_eq Rocheval_LeisureHallEntrance_Prize_2
Rocheval_LeisureHallEntrance_Prize_1:
# 43 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	release
	end

Rocheval_LeisureHallEntrance_Prize_2:
# 13 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	delay 1
# 14 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lock
# 15 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RLHENorth
# 16 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Prize_Text_0
# 17 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 18 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 1
	goto_if_eq Rocheval_LeisureHallEntrance_Prize_4
# 24 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 2
	goto_if_eq Rocheval_LeisureHallEntrance_Prize_5
# 33 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 3
	goto_if_eq Rocheval_LeisureHallEntrance_Prize_6
	goto Rocheval_LeisureHallEntrance_Prize_1

Rocheval_LeisureHallEntrance_Prize_4:
# 19 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	giveitem ITEM_POTION, 1
# 20 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 21 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_CONTEST
# 22 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	call Rocheval_LeisureHallEntrance_Sam
	goto Rocheval_LeisureHallEntrance_Prize_1

Rocheval_LeisureHallEntrance_Prize_5:
# 25 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	addmoney 1000
# 26 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 27 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Prize_Text_1
# 28 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitfanfare
# 29 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 30 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_CONTEST
# 31 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	call Rocheval_LeisureHallEntrance_Sam
	goto Rocheval_LeisureHallEntrance_Prize_1

Rocheval_LeisureHallEntrance_Prize_6:
# 34 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	addmoney 2000
# 35 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 36 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Prize_Text_2
# 37 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitfanfare
# 38 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 39 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_CONTEST
# 40 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	call Rocheval_LeisureHallEntrance_Sam
	goto Rocheval_LeisureHallEntrance_Prize_1


Rocheval_LeisureHallEntrance_Sam::
# 48 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lock
# 49 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	addobject 1
# 50 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement 1, SamWinner
# 51 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 52 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RLHEEast
# 53 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 1
	goto_if_eq Rocheval_LeisureHallEntrance_Sam_1
# 75 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 2
	goto_if_eq Rocheval_LeisureHallEntrance_Sam_2
# 93 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_TRAINER_CONTEST_PRIZE, 3
	goto_if_eq Rocheval_LeisureHallEntrance_Sam_3
	return

Rocheval_LeisureHallEntrance_Sam_1:
# 54 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	namebox Rocheval_LeisureHallEntrance_Sam_Text_0
# 55 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_1
# 56 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	hidenamebox
# 57 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_2
# 58 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	namebox Rocheval_LeisureHallEntrance_Sam_Text_0
# 59 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_3
# 60 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 61 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	hidenamebox
# 62 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement 1, SamLeavingToHall
# 63 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_LeisureHallEntrance_Sam_Movement_0
# 64 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 65 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	delay 60
# 66 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	removeobject 1
# 67 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playse SE_EXIT
# 68 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setvar VAR_MAIN_STORY, 7
# 69 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 70 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_BOAT
# 71 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_TOWN_HALL
# 72 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	release
	end

Rocheval_LeisureHallEntrance_Sam_2:
# 76 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	namebox Rocheval_LeisureHallEntrance_Sam_Text_0
# 77 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_4
# 78 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 79 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	hidenamebox
# 80 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement 1, SamLeavingToHall
# 81 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_LeisureHallEntrance_Sam_Movement_0
# 82 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 83 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	delay 60
# 84 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	removeobject 1
# 85 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setvar VAR_MAIN_STORY, 7
# 87 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 88 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_BOAT
# 89 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_TOWN_HALL
# 90 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	release
	end

Rocheval_LeisureHallEntrance_Sam_3:
# 94 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	namebox Rocheval_LeisureHallEntrance_Sam_Text_0
# 95 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_5
# 96 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 97 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	hidenamebox
# 98 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement 1, SamLeavingToHall
# 99 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_LeisureHallEntrance_Sam_Movement_0
# 100 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 101 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	delay 60
# 102 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	removeobject 1
# 103 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playse SE_EXIT
# 104 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setvar VAR_MAIN_STORY, 7
# 105 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 106 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_BOAT
# 107 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	clearflag FLAG_SAM_TOWN_HALL
# 108 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	release
	end


Rocheval_LeisureHallEntrance_Hostess::
# 114 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 4
	goto_if_eq Rocheval_LeisureHallEntrance_Hostess_1
# 142 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 5
	goto_if_eq Rocheval_LeisureHallEntrance_Hostess_2
# 153 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 7
	goto_if_eq Rocheval_LeisureHallEntrance_Hostess_3
# 165 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 166 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSpeakingLeisure
# 167 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 168 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_6
# 169 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 170 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRejectedLeisure
# 171 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 172 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Hostess_1:
# 115 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 116 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSpeakingLeisure
# 117 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 118 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_0, MSGBOX_YESNO
# 119 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rocheval_LeisureHallEntrance_Hostess_8
# 134 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_3
# 135 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 136 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRejectedLeisure
# 137 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 138 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Hostess_2:
# 143 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 144 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSpeakingLeisure
# 145 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 146 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_4
# 147 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 148 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerAcceptedLeisure
# 149 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 150 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Hostess_3:
# 154 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 155 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSpeakingLeisure
# 156 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 157 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_5
# 158 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 159 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRejectedLeisure
# 160 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 161 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Hostess_8:
# 120 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_1
# 121 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Sam_Text_2
# 122 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Hostess_Text_2
# 123 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	closemessage
# 124 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setvar VAR_MAIN_STORY, 5
# 125 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_TRAINER_CONTEST1
# 126 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_TRAINER_CONTEST2
# 127 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	setflag FLAG_TRAINER_CONTEST3
# 128 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerAcceptedLeisure
# 129 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	waitmovement 0
# 130 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end


Rocheval_LeisureHallEntrance_Nurse::
# 178 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 179 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 180 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Nurse_Text_0
# 181 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end


Rocheval_LeisureHallEntrance_Trainer1::
# 186 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 7
	goto_if_eq Rocheval_LeisureHallEntrance_Trainer1_1
# 194 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 195 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 196 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Trainer1_Text_1
# 197 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Trainer1_1:
# 187 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 188 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 189 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Trainer1_Text_0
# 190 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end


Rocheval_LeisureHallEntrance_Trainer2::
# 203 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 7
	goto_if_eq Rocheval_LeisureHallEntrance_Trainer2_1
# 211 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 212 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 213 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Trainer2_Text_1
# 214 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Trainer2_1:
# 204 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 205 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 206 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Trainer2_Text_0
# 207 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end


Rocheval_LeisureHallEntrance_Toto::
# 220 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	compare VAR_MAIN_STORY, 7
	goto_if_eq Rocheval_LeisureHallEntrance_Toto_1
# 229 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 230 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 231 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_NORMAL
# 232 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Toto_Text_1
# 233 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end

Rocheval_LeisureHallEntrance_Toto_1:
# 221 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	lockall
# 222 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	faceplayer
# 223 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_FAINT
# 224 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	msgbox Rocheval_LeisureHallEntrance_Toto_Text_0
# 225 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	releaseall
	end


# 238 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
PlayerRejectedLeisure:
# 239 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
PlayerAcceptedLeisure:
# 243 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_up
	step_end

# 246 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
PlayerSpeakingLeisure:
# 247 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	face_right
	step_end

# 250 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
SamWinner:
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 251 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 252 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_left
# 252 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_left
# 252 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_left
# 253 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	face_left
	step_end

# 256 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
SamLeavingToHall:
# 257 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 257 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 257 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
# 257 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	walk_down
	step_end

# 260 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
RLHENorth:
# 261 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	face_up
	step_end

# 264 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
RLHEEast:
# 265 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	face_right
	step_end

# 63 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
Rocheval_LeisureHallEntrance_Sam_Movement_0:
# 63 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	face_down
	step_end

Rocheval_LeisureHallEntrance_Prize_Text_0:
# 16 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Thanks for participating! Here's your\n"
	.string "prize.$"

Rocheval_LeisureHallEntrance_Prize_Text_1:
# 27 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "You received ¥1 000!$"

Rocheval_LeisureHallEntrance_Prize_Text_2:
# 36 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "You received ¥2 000!$"

Rocheval_LeisureHallEntrance_Sam_Text_0:
# 54 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Sam$"

Rocheval_LeisureHallEntrance_Sam_Text_1:
# 55 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Hey {PLAYER}! How did you do?$"

Rocheval_LeisureHallEntrance_Sam_Text_2:
# 57 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "...$"

Rocheval_LeisureHallEntrance_Sam_Text_3:
# 59 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "You lost? Well, it happens, don't sweat\n"
	.string "it! Once you get yourself together,\l"
	.string "meet me at the Town Hall, I have a\l"
	.string "surprise for you!$"

Rocheval_LeisureHallEntrance_Sam_Text_4:
# 77 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Hey {PLAYER}! I think I'm finally\n"
	.string "becoming a real trainer! Sorry for\l"
	.string "defeating you though. Anyway, meet me\l"
	.string "at the Town Hall, I have a surprise for\l"
	.string "you!$"

Rocheval_LeisureHallEntrance_Sam_Text_5:
# 95 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Hey {PLAYER}! You didn't lie, you\n"
	.string "really are a special trainer! The way\l"
	.string "you and your POKéMON battle... It feels\l"
	.string "like you know each other since forever!\l"
	.string "Anyway, meet me at the Town Hall, I have\l"
	.string "a surprise for you!$"

Rocheval_LeisureHallEntrance_Hostess_Text_0:
# 118 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Welcome to Rocheval's Leisure Hall! Do\n"
	.string "you want to register for the Trainer's\l"
	.string "Contest?$"

Rocheval_LeisureHallEntrance_Hostess_Text_1:
# 120 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Very well then, can I have your name\n"
	.string "please?$"

Rocheval_LeisureHallEntrance_Hostess_Text_2:
# 122 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "{PLAYER}, you're all set! Please\n"
	.string "proceed.$"

Rocheval_LeisureHallEntrance_Hostess_Text_3:
# 134 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Okay, come back when you feel ready! We\n"
	.string "hope to see you very soon.$"

Rocheval_LeisureHallEntrance_Hostess_Text_4:
# 146 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "{PLAYER}, everyone's waiting for you!$"

Rocheval_LeisureHallEntrance_Hostess_Text_5:
# 157 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Welcome to Rocheval's Leisure Hall! The\n"
	.string "next Trainer's Contest will take place\l"
	.string "in exactly 1 month.$"

Rocheval_LeisureHallEntrance_Hostess_Text_6:
# 168 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Welcome to Rocheval's Leisure Hall!\p"
	.string "You want to register for the Trainer's\n"
	.string "Contest? I'm afraid the registrations\l"
	.string "aren't open yet. Come back soon!$"

Rocheval_LeisureHallEntrance_Nurse_Text_0:
# 180 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Welcome to Rocheval's Leisure Hall! We\n"
	.string "hope you have a great time here.$"

Rocheval_LeisureHallEntrance_Trainer1_Text_0:
# 189 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Doesn't matter. Doesn't count. I wasn't\n"
	.string "that ready. Next time though. Next\l"
	.string "time...$"

Rocheval_LeisureHallEntrance_Trainer1_Text_1:
# 196 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "I've prepared and practiced every day\n"
	.string "for the past month. I've killed almost\l"
	.string "every Wingull on Cape East. I'm more\l"
	.string "than ready.$"

Rocheval_LeisureHallEntrance_Trainer2_Text_0:
# 206 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Oh... Toto doesn't look like he's doing so\n"
	.string "good...$"

Rocheval_LeisureHallEntrance_Trainer2_Text_1:
# 213 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "Oh man, I'm so excited! This is my first\n"
	.string "contest! I hope me and Toto will do\l"
	.string "good! Toto is the name of my Magnemite\l"
	.string "by the way.$"

Rocheval_LeisureHallEntrance_Toto_Text_0:
# 224 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "...bzzt...$"

Rocheval_LeisureHallEntrance_Toto_Text_1:
# 232 "data/maps/Rocheval_LeisureHall_Entrance/scripts.pory"
	.string "BZZZZT! BZZZZZT!$"
