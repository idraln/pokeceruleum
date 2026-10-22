# 1 "data/maps/XatusNestRetro/scripts.pory"

# 2 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_MapScripts::
# 3 "data/maps/XatusNestRetro/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, XatusNestRetro_OnFrame
# 4 "data/maps/XatusNestRetro/scripts.pory"
	.byte 0
# 5 "data/maps/XatusNestRetro/scripts.pory"

# 6 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_OnFrame:
# 7 "data/maps/XatusNestRetro/scripts.pory"
    map_script_2 VAR_SIDE_STORY_RETRO, 2, XatusNestRetro_Arrival
# 8 "data/maps/XatusNestRetro/scripts.pory"
    .2byte 0

XatusNestRetro_Arrival::
# 12 "data/maps/XatusNestRetro/scripts.pory"
	lock
# 13 "data/maps/XatusNestRetro/scripts.pory"
	setrespawn HEAL_LOCATION_GLORRAY_RETRO
# 14 "data/maps/XatusNestRetro/scripts.pory"
	clearflag FLAG_SYS_POKENAV_GET
# 15 "data/maps/XatusNestRetro/scripts.pory"
	clearflag FLAG_DEXNAV_GET
# 16 "data/maps/XatusNestRetro/scripts.pory"
	setvar VAR_LEVELS, 12
# 17 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 18 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_1
# 19 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 20 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 21 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_0
# 22 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 23 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 24 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 25 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_2
# 26 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 27 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 28 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_1
# 29 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_2
# 30 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 31 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 32 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 33 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_3
# 34 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 35 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 36 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 37 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_4
# 38 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 39 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 40 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 41 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_5
# 42 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 43 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 44 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 45 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_3
# 46 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_4
# 47 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 48 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 49 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 50 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_6
# 51 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 52 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 53 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 54 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_5
# 55 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_5
# 56 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 57 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 58 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 59 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_7
# 60 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 61 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 62 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 63 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_6
# 64 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 65 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 66 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_8
# 67 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 68 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 69 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 70 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 71 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_9
# 72 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 73 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 74 "data/maps/XatusNestRetro/scripts.pory"
	clearflag FLAG_GRANDMA_NEST
# 75 "data/maps/XatusNestRetro/scripts.pory"
	addobject 1
# 76 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_7
# 77 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_8
# 78 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 79 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 80 "data/maps/XatusNestRetro/scripts.pory"
	playse SE_PIN
# 81 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_9
# 82 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 83 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 84 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_10
# 85 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 86 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 87 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 88 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_10
# 89 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_8
# 90 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 91 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_11
# 92 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_11
# 93 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 94 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 95 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 96 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_12
# 97 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 98 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 99 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 100 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_12
# 101 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 102 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 103 "data/maps/XatusNestRetro/scripts.pory"
	removeobject 3
# 104 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 105 "data/maps/XatusNestRetro/scripts.pory"
	setflag FLAG_EGG_NEST
# 106 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_13
# 107 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 108 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_0
# 109 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 110 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 111 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 112 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_13
# 113 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 114 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 115 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 116 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_14
# 117 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 118 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 119 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_14
# 120 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 121 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 122 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 123 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_15
# 124 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 125 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_16
# 126 "data/maps/XatusNestRetro/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNestRetro_Arrival_Movement_17
# 127 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 128 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 129 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_15
# 130 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 131 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 132 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 133 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 134 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_16
# 135 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 136 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 137 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 138 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 139 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_17
# 140 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 141 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 142 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_18
# 143 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 144 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 145 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_0
# 146 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_18
# 147 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 148 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 149 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 2, XatusNestRetro_Arrival_Movement_19
# 150 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_20
# 151 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 152 "data/maps/XatusNestRetro/scripts.pory"
	delay 60
# 153 "data/maps/XatusNestRetro/scripts.pory"
	removeobject 2
# 154 "data/maps/XatusNestRetro/scripts.pory"
	setflag FLAG_BRO_NEST
# 155 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 156 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_21
# 157 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 158 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 159 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_19
# 160 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 161 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 162 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 163 "data/maps/XatusNestRetro/scripts.pory"
	playse SE_PIN
# 164 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_9
# 165 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 166 "data/maps/XatusNestRetro/scripts.pory"
	delay 40
# 167 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 168 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_20
# 169 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 170 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 171 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 172 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 173 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_21
# 174 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 175 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 176 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 177 "data/maps/XatusNestRetro/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 178 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_22
# 179 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 180 "data/maps/XatusNestRetro/scripts.pory"
	delay 20
# 181 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 182 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_23
# 183 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 184 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 185 "data/maps/XatusNestRetro/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 186 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Arrival_Text_11
# 187 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Arrival_Text_24
# 188 "data/maps/XatusNestRetro/scripts.pory"
	closemessage
# 189 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 190 "data/maps/XatusNestRetro/scripts.pory"
	applymovement 1, XatusNestRetro_Arrival_Movement_22
# 191 "data/maps/XatusNestRetro/scripts.pory"
	waitmovement 0
# 192 "data/maps/XatusNestRetro/scripts.pory"
	removeobject 1
# 193 "data/maps/XatusNestRetro/scripts.pory"
	setflag FLAG_GRANDMA_NEST
# 194 "data/maps/XatusNestRetro/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 3
# 195 "data/maps/XatusNestRetro/scripts.pory"
	release
	end


XatusNestRetro_Guardian::
# 200 "data/maps/XatusNestRetro/scripts.pory"
	lock
# 201 "data/maps/XatusNestRetro/scripts.pory"
	faceplayer
# 202 "data/maps/XatusNestRetro/scripts.pory"
	namebox XatusNestRetro_Guardian_Text_0
# 203 "data/maps/XatusNestRetro/scripts.pory"
	msgbox XatusNestRetro_Guardian_Text_1
# 204 "data/maps/XatusNestRetro/scripts.pory"
	hidenamebox
# 205 "data/maps/XatusNestRetro/scripts.pory"
	turnobject 4, DIR_SOUTH
# 206 "data/maps/XatusNestRetro/scripts.pory"
	release
	end


# 21 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_0:
# 21 "data/maps/XatusNestRetro/scripts.pory"
	face_right
	step_end

# 28 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_1:
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 28 "data/maps/XatusNestRetro/scripts.pory"
	face_left
	step_end

# 29 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_2:
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 29 "data/maps/XatusNestRetro/scripts.pory"
	face_right
	step_end

# 45 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_3:
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_right
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 45 "data/maps/XatusNestRetro/scripts.pory"
	face_left
	step_end

# 46 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_4:
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_right
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 46 "data/maps/XatusNestRetro/scripts.pory"
	face_right
	step_end

# 54 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_5:
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 54 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_6:
# 63 "data/maps/XatusNestRetro/scripts.pory"
	face_left
# 63 "data/maps/XatusNestRetro/scripts.pory"
	delay_16
# 63 "data/maps/XatusNestRetro/scripts.pory"
	delay_16
# 63 "data/maps/XatusNestRetro/scripts.pory"
	face_right
# 63 "data/maps/XatusNestRetro/scripts.pory"
	delay_16
# 63 "data/maps/XatusNestRetro/scripts.pory"
	delay_16
# 63 "data/maps/XatusNestRetro/scripts.pory"
	face_up
	step_end

# 76 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_7:
# 76 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 76 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_8:
# 77 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 77 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 77 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_9:
# 81 "data/maps/XatusNestRetro/scripts.pory"
	emote_exclamation_mark
	step_end

# 88 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_10:
# 88 "data/maps/XatusNestRetro/scripts.pory"
	walk_right
# 88 "data/maps/XatusNestRetro/scripts.pory"
	face_left
	step_end

# 91 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_11:
# 91 "data/maps/XatusNestRetro/scripts.pory"
	face_up
	step_end

# 100 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_12:
# 100 "data/maps/XatusNestRetro/scripts.pory"
	walk_right
# 100 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 100 "data/maps/XatusNestRetro/scripts.pory"
	walk_up
# 100 "data/maps/XatusNestRetro/scripts.pory"
	face_left
	step_end

# 106 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_13:
# 106 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 106 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 106 "data/maps/XatusNestRetro/scripts.pory"
	walk_left
	step_end

# 116 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_14:
# 116 "data/maps/XatusNestRetro/scripts.pory"
	jump_in_place_up
	step_end

# 123 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_15:
# 123 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_left
# 123 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_left
# 123 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
	step_end

# 125 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_16:
# 125 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_up
# 125 "data/maps/XatusNestRetro/scripts.pory"
	face_right
	step_end

# 126 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_17:
# 126 "data/maps/XatusNestRetro/scripts.pory"
	walk_left
# 126 "data/maps/XatusNestRetro/scripts.pory"
	face_right
	step_end

# 142 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_18:
# 142 "data/maps/XatusNestRetro/scripts.pory"
	face_left
	step_end

# 149 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_19:
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
# 149 "data/maps/XatusNestRetro/scripts.pory"
	walk_fast_down
	step_end

# 150 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_20:
# 150 "data/maps/XatusNestRetro/scripts.pory"
	face_down
	step_end

# 156 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_21:
# 156 "data/maps/XatusNestRetro/scripts.pory"
	walk_left
	step_end

# 190 "data/maps/XatusNestRetro/scripts.pory"
XatusNestRetro_Arrival_Movement_22:
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
# 190 "data/maps/XatusNestRetro/scripts.pory"
	walk_down
	step_end

XatusNestRetro_Arrival_Text_0:
# 17 "data/maps/XatusNestRetro/scripts.pory"
	.string "Ulrich$"

XatusNestRetro_Arrival_Text_1:
# 18 "data/maps/XatusNestRetro/scripts.pory"
	.string "Hey! I'm right here!$"

XatusNestRetro_Arrival_Text_2:
# 25 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Were you lost in your thoughts again?\n"
	.string "Dude. I'll never get you. Nevermind.\l"
	.string "Let's go, we might miss the laying.$"

XatusNestRetro_Arrival_Text_3:
# 33 "data/maps/XatusNestRetro/scripts.pory"
	.string "...You know what the laying means,\n"
	.string "right? Xatu comes once a year and lays\l"
	.string "her eggs in the nest. That means we'll\l"
	.string "get a Pokémon! I'll finally become a\l"
	.string "trainer, about time... Every 18 year old\l"
	.string "in the region already has at least a\l"
	.string "Pokémon, and I'm the only idiot without\l"
	.string "one...$"

XatusNestRetro_Arrival_Text_4:
# 37 "data/maps/XatusNestRetro/scripts.pory"
	.string "...$"

XatusNestRetro_Arrival_Text_5:
# 41 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Still nothing? Aren't you excited?\n"
	.string "Whatever. Come on.$"

XatusNestRetro_Arrival_Text_6:
# 50 "data/maps/XatusNestRetro/scripts.pory"
	.string "...We're closing in! Brace yourself!$"

XatusNestRetro_Arrival_Text_7:
# 59 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Great. We missed the laying, because\n"
	.string "of your slow legs.$"

XatusNestRetro_Arrival_Text_8:
# 66 "data/maps/XatusNestRetro/scripts.pory"
	.string "...But... Only one egg? That's it?$"

XatusNestRetro_Arrival_Text_9:
# 71 "data/maps/XatusNestRetro/scripts.pory"
	.string "...There must be a problem. Maybe we\n"
	.string "came in a bit too early? Let's check the\l"
	.string "nest later.$"

XatusNestRetro_Arrival_Text_10:
# 84 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Grandma! There's something wrong in\n"
	.string "the nest.$"

XatusNestRetro_Arrival_Text_11:
# 95 "data/maps/XatusNestRetro/scripts.pory"
	.string "Grandma$"

XatusNestRetro_Arrival_Text_12:
# 96 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Indeed. Xatu has only provided us one\n"
	.string "egg, this year...$"

XatusNestRetro_Arrival_Text_13:
# 112 "data/maps/XatusNestRetro/scripts.pory"
	.string "{PLAYER}, I want you to have it.$"

XatusNestRetro_Arrival_Text_14:
# 119 "data/maps/XatusNestRetro/scripts.pory"
	.string "WHAT???$"

XatusNestRetro_Arrival_Text_15:
# 129 "data/maps/XatusNestRetro/scripts.pory"
	.string "You're giving the egg to {PLAYER}??\n"
	.string "I've been waiting all these years, only\l"
	.string "to wait another one?? HUH??$"

XatusNestRetro_Arrival_Text_16:
# 134 "data/maps/XatusNestRetro/scripts.pory"
	.string "...You're not ready. Another year\n"
	.string "learning about what it takes to become\l"
	.string "a trainer won't hurt you.$"

XatusNestRetro_Arrival_Text_17:
# 139 "data/maps/XatusNestRetro/scripts.pory"
	.string "This is BULLSHIT!! SCREW YOU!!$"

XatusNestRetro_Arrival_Text_18:
# 146 "data/maps/XatusNestRetro/scripts.pory"
	.string "SCREW YOU TOO!!$"

XatusNestRetro_Arrival_Text_19:
# 159 "data/maps/XatusNestRetro/scripts.pory"
	.string "He'll be fine. He always behaves... sort\n"
	.string "of.$"

XatusNestRetro_Arrival_Text_20:
# 168 "data/maps/XatusNestRetro/scripts.pory"
	.string "...Would you look at that! The egg has\n"
	.string "hatched. What a beautiful little Natu...$"

XatusNestRetro_Arrival_Text_21:
# 173 "data/maps/XatusNestRetro/scripts.pory"
	.string "Here, take it. You will have to honor it.\n"
	.string "You need to tie strong bonds with your\l"
	.string "new companion. You need to spend time\l"
	.string "with it, read about it, partake in\l"
	.string "battles with it. You need to give it\l"
	.string "love, and friendship.$"

XatusNestRetro_Arrival_Text_22:
# 178 "data/maps/XatusNestRetro/scripts.pory"
	.string "You just received a freshly hatched\n"
	.string "Natu!$"

XatusNestRetro_Arrival_Text_23:
# 182 "data/maps/XatusNestRetro/scripts.pory"
	.string "Please, take also those. You won't ever\n"
	.string "be an achieved trainer unless you\l"
	.string "surround yourself with several loving\l"
	.string "companions. Natu alone won't help you\l"
	.string "achieve your goals.$"

XatusNestRetro_Arrival_Text_24:
# 187 "data/maps/XatusNestRetro/scripts.pory"
	.string "Once you feel ready, come to the gym\n"
	.string "and try your skills against me. I won't\l"
	.string "be easy on you, so be well prepared.$"

XatusNestRetro_Guardian_Text_0:
# 202 "data/maps/XatusNestRetro/scripts.pory"
	.string "Guard$"

XatusNestRetro_Guardian_Text_1:
# 203 "data/maps/XatusNestRetro/scripts.pory"
	.string "Great to see you, {PLAYER}. I see\n"
	.string "you've finally got your own Pokémon? Be\l"
	.string "sure to give it plenty of love.$"
