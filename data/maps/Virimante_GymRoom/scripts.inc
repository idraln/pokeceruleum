# 1 "data/maps/Virimante_GymRoom/scripts.pory"

# 2 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_MapScripts::
# 3 "data/maps/Virimante_GymRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Virimante_GymRoom_OnFrame
# 4 "data/maps/Virimante_GymRoom/scripts.pory"
	.byte 0
# 5 "data/maps/Virimante_GymRoom/scripts.pory"

# 6 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_OnFrame:
# 7 "data/maps/Virimante_GymRoom/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 30, Virimante_GymRoom_Arrival
# 8 "data/maps/Virimante_GymRoom/scripts.pory"
    .2byte 0

Virimante_GymRoom_Arrival::
# 12 "data/maps/Virimante_GymRoom/scripts.pory"
	lock
# 13 "data/maps/Virimante_GymRoom/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Virimante_GymRoom_Arrival_Movement_0
# 15 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 16 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 17 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_GymRoom_Arrival_Movement_1
# 18 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_2
# 19 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 20 "data/maps/Virimante_GymRoom/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 21 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 22 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_1
# 23 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 24 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 25 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 26 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_3
# 27 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 28 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 29 "data/maps/Virimante_GymRoom/scripts.pory"
	playse SE_PIN
# 30 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_4
# 31 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 33 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_5
# 34 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Virimante_GymRoom_Arrival_Movement_6
# 35 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/Virimante_GymRoom/scripts.pory"
	special RemoveCameraObject
# 37 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 38 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_3
# 39 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 40 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 41 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 42 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_7
# 43 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 44 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 45 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 46 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_4
# 47 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 48 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 49 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 50 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_3
# 51 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 53 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 54 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_5
# 55 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 56 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 57 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 58 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_7
# 59 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 61 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 62 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_6
# 63 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 64 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 65 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 66 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_3
# 67 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 69 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 70 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_7
# 71 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 72 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 73 "data/maps/Virimante_GymRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/Virimante_GymRoom/scripts.pory"
	playfanfare MUS_HEAL
# 75 "data/maps/Virimante_GymRoom/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/Virimante_GymRoom/scripts.pory"
	waitfanfare
# 77 "data/maps/Virimante_GymRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 79 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_2
# 80 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 82 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_8
# 83 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 84 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 85 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 86 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_6
# 87 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_8
# 88 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 89 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 90 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 91 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_9
# 92 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 93 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 94 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 95 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_9
# 96 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 98 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 99 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_10
# 100 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 101 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 102 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 103 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_10
# 104 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 105 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 106 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 107 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_11
# 108 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 109 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 110 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 111 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 112 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_12
# 113 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 114 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 115 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 116 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_9
# 117 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 118 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 119 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 120 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_13
# 121 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 122 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 123 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 124 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_10
# 125 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 126 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 127 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 128 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_14
# 129 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 130 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 131 "data/maps/Virimante_GymRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_KAM_VIRIMANTE, Kam1
# 132 "data/maps/Virimante_GymRoom/scripts.pory"
	turnobject 2, DIR_EAST
# 133 "data/maps/Virimante_GymRoom/scripts.pory"
	turnobject 1, DIR_WEST
# 134 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_11
# 135 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 137 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 138 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_15
# 139 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 140 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 141 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 142 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_7
# 143 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 144 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 145 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 146 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_16
# 147 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 148 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 149 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 150 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_3
# 151 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 152 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 153 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 154 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_17
# 155 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 156 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 157 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 158 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_12
# 159 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 160 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 161 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 162 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_18
# 163 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 164 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 165 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 166 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_13
# 167 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 169 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_14
# 170 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 172 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 173 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_19
# 174 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 175 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 176 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_12
# 177 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 178 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 179 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 180 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_20
# 181 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 182 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 183 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_15
# 185 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 186 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 187 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 188 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_21
# 189 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 190 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 191 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_12
# 192 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 193 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 194 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 195 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_22
# 196 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 197 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 198 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 199 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_14
# 200 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 201 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 202 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 203 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_23
# 204 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 205 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 206 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_12
# 207 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 208 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 209 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 210 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_24
# 211 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 212 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 213 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 214 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_13
# 215 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 216 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 217 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 218 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_25
# 219 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 220 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 221 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 222 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_12
# 223 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 224 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 225 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 226 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_26
# 227 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 228 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 229 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 230 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_7
# 231 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 232 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 233 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_3
# 234 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 235 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 236 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_27
# 237 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 238 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 239 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 240 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_16
# 241 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 242 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 243 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 244 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_28
# 245 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 246 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 247 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 248 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_14
# 249 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 250 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 251 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 252 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_29
# 253 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 254 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 255 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 256 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_17
# 257 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 258 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_GymRoom_Arrival_Movement_14
# 259 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 260 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 261 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 262 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_30
# 263 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 264 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 265 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 266 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_GymRoom_Arrival_Movement_16
# 267 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_18
# 268 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 269 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 270 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_2
# 271 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_31
# 272 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 273 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 274 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_19
# 275 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 2, Virimante_GymRoom_Arrival_Movement_20
# 276 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 277 "data/maps/Virimante_GymRoom/scripts.pory"
	removeobject 2
# 278 "data/maps/Virimante_GymRoom/scripts.pory"
	playse SE_EXIT
# 279 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 40
# 280 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_5
# 281 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 282 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 283 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_32
# 284 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 285 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 286 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 287 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_7
# 288 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 289 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 290 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 291 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_33
# 292 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 293 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 294 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 295 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_3
# 296 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 297 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 298 "data/maps/Virimante_GymRoom/scripts.pory"
	namebox Virimante_GymRoom_Arrival_Text_0
# 299 "data/maps/Virimante_GymRoom/scripts.pory"
	msgbox Virimante_GymRoom_Arrival_Text_34
# 300 "data/maps/Virimante_GymRoom/scripts.pory"
	closemessage
# 301 "data/maps/Virimante_GymRoom/scripts.pory"
	hidenamebox
# 302 "data/maps/Virimante_GymRoom/scripts.pory"
	delay 20
# 303 "data/maps/Virimante_GymRoom/scripts.pory"
	applymovement 1, Virimante_GymRoom_Arrival_Movement_21
# 304 "data/maps/Virimante_GymRoom/scripts.pory"
	waitmovement 0
# 305 "data/maps/Virimante_GymRoom/scripts.pory"
	removeobject 1
# 306 "data/maps/Virimante_GymRoom/scripts.pory"
	playse SE_EXIT
# 307 "data/maps/Virimante_GymRoom/scripts.pory"
	fadeoutbgm 1
# 308 "data/maps/Virimante_GymRoom/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
# 309 "data/maps/Virimante_GymRoom/scripts.pory"
	setflag FLAG_BRUCE_VIRIMANTE
# 310 "data/maps/Virimante_GymRoom/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 311 "data/maps/Virimante_GymRoom/scripts.pory"
	clearflag FLAG_KAM_VIRIMANTE
# 312 "data/maps/Virimante_GymRoom/scripts.pory"
	setvar VAR_MAIN_STORY, 31
# 313 "data/maps/Virimante_GymRoom/scripts.pory"
	completequest QUEST_FANDANGO
# 314 "data/maps/Virimante_GymRoom/scripts.pory"
	setflag FLAG_FANDANGO_QUEST_COMPLETE
# 315 "data/maps/Virimante_GymRoom/scripts.pory"
	release
	end


# 14 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_0:
# 14 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_fast_down
# 14 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_fast_right
# 14 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_fast_right
	step_end

# 17 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_1:
# 17 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 17 "data/maps/Virimante_GymRoom/scripts.pory"
	face_right
	step_end

# 18 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_2:
# 18 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_in_place_left
	step_end

# 26 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_3:
# 26 "data/maps/Virimante_GymRoom/scripts.pory"
	face_left
	step_end

# 30 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_4:
# 30 "data/maps/Virimante_GymRoom/scripts.pory"
	emote_exclamation_mark
	step_end

# 33 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_5:
# 33 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_6:
# 34 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_left
# 34 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_left
	step_end

# 42 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_7:
# 42 "data/maps/Virimante_GymRoom/scripts.pory"
	face_down
	step_end

# 87 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_8:
# 87 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_up
# 87 "data/maps/Virimante_GymRoom/scripts.pory"
	face_down
	step_end

# 95 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_9:
# 95 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_10:
# 103 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_up
# 103 "data/maps/Virimante_GymRoom/scripts.pory"
	face_left
	step_end

# 134 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_11:
# 134 "data/maps/Virimante_GymRoom/scripts.pory"
	jump_in_place_down
	step_end

# 158 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_12:
# 158 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_in_place_down
	step_end

# 166 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_13:
# 166 "data/maps/Virimante_GymRoom/scripts.pory"
	emote_question_mark
	step_end

# 169 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_14:
# 169 "data/maps/Virimante_GymRoom/scripts.pory"
	face_up
	step_end

# 184 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_15:
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	face_left
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	delay_16
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	face_up
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	delay_16
# 184 "data/maps/Virimante_GymRoom/scripts.pory"
	face_left
	step_end

# 240 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_16:
# 240 "data/maps/Virimante_GymRoom/scripts.pory"
	face_right
	step_end

# 256 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_17:
# 256 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_left
# 256 "data/maps/Virimante_GymRoom/scripts.pory"
	face_down
	step_end

# 267 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_18:
# 267 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_right
# 267 "data/maps/Virimante_GymRoom/scripts.pory"
	face_down
	step_end

# 274 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_19:
# 274 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_right
# 274 "data/maps/Virimante_GymRoom/scripts.pory"
	face_left
	step_end

# 275 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_20:
# 275 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 275 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 275 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 275 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/Virimante_GymRoom/scripts.pory"
Virimante_GymRoom_Arrival_Movement_21:
# 303 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 303 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
# 303 "data/maps/Virimante_GymRoom/scripts.pory"
	walk_down
	step_end

Virimante_GymRoom_Arrival_Text_0:
# 21 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "K.A.M.$"

Virimante_GymRoom_Arrival_Text_1:
# 22 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "You're very weak. I'm actually ashamed\n"
	.string "my guys struggled to take on your gym a\l"
	.string "few weeks ago! I should've done it\l"
	.string "myself! As I always do!$"

Virimante_GymRoom_Arrival_Text_2:
# 37 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Bruce$"

Virimante_GymRoom_Arrival_Text_3:
# 38 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "{PLAYER}! You're finally here!$"

Virimante_GymRoom_Arrival_Text_4:
# 46 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...I got my ass handed to me. Brutally. It\n"
	.string "took less than 2 minutes.$"

Virimante_GymRoom_Arrival_Text_5:
# 54 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "I FAILED DIANCIE!!$"

Virimante_GymRoom_Arrival_Text_6:
# 62 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Please, defeat them... You're the only\n"
	.string "hope left.$"

Virimante_GymRoom_Arrival_Text_7:
# 70 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Let me heal your Pokémons first...$"

Virimante_GymRoom_Arrival_Text_8:
# 82 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "What's going on here?$"

Virimante_GymRoom_Arrival_Text_9:
# 91 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Ahhhh... You must be {PLAYER}. I heard\n"
	.string "so much about you! You know Barbara\l"
	.string "actually lost sleep over you? She's one\l"
	.string "of my best grunts, so you must be very\l"
	.string "strong. But!$"

Virimante_GymRoom_Arrival_Text_10:
# 99 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...You're in my space, and I don't like\n"
	.string "intruders. Unless!$"

Virimante_GymRoom_Arrival_Text_11:
# 107 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...You're here to join our Band?$"

Virimante_GymRoom_Arrival_Text_12:
# 112 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...No? You're here to... Stop us?$"

Virimante_GymRoom_Arrival_Text_13:
# 120 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...But why?$"

Virimante_GymRoom_Arrival_Text_14:
# 128 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "You know I can't let you do that, right?$"

Virimante_GymRoom_Arrival_Text_15:
# 138 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Enough is enough! Will you stop now?!$"

Virimante_GymRoom_Arrival_Text_16:
# 146 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Ugh... Okay, I guess. What do you want?\n"
	.string "Do you want us to stop taking over\l"
	.string "Gyms? If so, I'm afraid a fight isn't\l"
	.string "gonna be enough to convince me. But!$"

Virimante_GymRoom_Arrival_Text_17:
# 154 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...I'm always open to negotiate. What's\n"
	.string "on the table?$"

Virimante_GymRoom_Arrival_Text_18:
# 162 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "What happened to the President? Why\n"
	.string "did you that?$"

Virimante_GymRoom_Arrival_Text_19:
# 173 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...Huh? What are you talking about?$"

Virimante_GymRoom_Arrival_Text_20:
# 180 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Don't play dumb! We know it's you and\n"
	.string "your grunts! You did this so you could\l"
	.string "take over Thura!$"

Virimante_GymRoom_Arrival_Text_21:
# 188 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Uh, actually, no. I swear, it wasn't us.\n"
	.string "Although I wish it was. That was very\l"
	.string "cool.$"

Virimante_GymRoom_Arrival_Text_22:
# 195 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Cool you say? The President and\n"
	.string "{PLAYER} were on the rooftop when\l"
	.string "you guys collapsed the building!\l"
	.string "{PLAYER} almost died because of it!\l"
	.string "And Arceus knows where the President\l"
	.string "is!$"

Virimante_GymRoom_Arrival_Text_23:
# 203 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "I just told you, old man. It. Wasn't. US!!$"

Virimante_GymRoom_Arrival_Text_24:
# 210 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Oh yeah? And what about the Ironair?$"

Virimante_GymRoom_Arrival_Text_25:
# 218 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...What about it?$"

Virimante_GymRoom_Arrival_Text_26:
# 226 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "The explosion? The worker you knocked\n"
	.string "out? He still can't remember his name!$"

Virimante_GymRoom_Arrival_Text_27:
# 236 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Sorry for your guy, but once again. Not\n"
	.string "us.$"

Virimante_GymRoom_Arrival_Text_28:
# 244 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...I don't understand...$"

Virimante_GymRoom_Arrival_Text_29:
# 252 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...I...$"

Virimante_GymRoom_Arrival_Text_30:
# 262 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...Sorry, {PLAYER}. I wasted your time.\n"
	.string "I'll continue to investigate on my part.\l"
	.string "I'll let you know if I have something\l"
	.string "new... Sorry.$"

Virimante_GymRoom_Arrival_Text_31:
# 271 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...Excuse me.$"

Virimante_GymRoom_Arrival_Text_32:
# 283 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...What's up with him? We're outlaws, but\n"
	.string "we're not criminals. Although I have to\l"
	.string "concede, maybe taking over Gyms right\l"
	.string "after what happened at the League\l"
	.string "wasn't the wisest choice.$"

Virimante_GymRoom_Arrival_Text_33:
# 291 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...Either way. I think I'll go back to my\n"
	.string "home region, Hoenn. This game has gone\l"
	.string "long enough, it's just been a mess all\l"
	.string "along, plus, I'm getting bored. The\l"
	.string "Fandango Band is hereby disbanded!$"

Virimante_GymRoom_Arrival_Text_34:
# 299 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "Hasta la vista, baby.$"

Kam1::
# 319 "data/maps/Virimante_GymRoom/scripts.pory"
	.string "...I see! Barbara was right!$"
