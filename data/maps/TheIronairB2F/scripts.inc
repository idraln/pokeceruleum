# 1 "data/maps/TheIronairB2F/scripts.pory"

# 2 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_MapScripts::
# 3 "data/maps/TheIronairB2F/scripts.pory"
	.byte 0

TheIronairB2F_TM::
# 7 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 8 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 15
# 9 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_ITEM_IRONAIR_B2F
# 10 "data/maps/TheIronairB2F/scripts.pory"
	giveitem ITEM_TM37
# 11 "data/maps/TheIronairB2F/scripts.pory"
	release
	end


TheIronairB2F_Vikkie::
# 16 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 17 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_0
# 18 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_VIKKIE_IRONAIR
# 19 "data/maps/TheIronairB2F/scripts.pory"
	addobject 1
# 20 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 21 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 22 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 23 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Vikkie_Movement_0
# 24 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 26 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Vikkie_Movement_1
# 27 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 29 "data/maps/TheIronairB2F/scripts.pory"
	playbgm MUS_LILYCOVE_MUSEUM, FALSE
# 30 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_Vikkie_Movement_2
# 31 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 33 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 34 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_2
# 35 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 36 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 37 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 38 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 39 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 40 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_3
# 41 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 42 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 43 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 44 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 1, DIR_EAST
# 45 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 46 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_4
# 47 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 48 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 49 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_Vikkie_Movement_3
# 50 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/TheIronairB2F/scripts.pory"
	fadeoutbgm 1
# 52 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_5
# 53 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_6
# 54 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 55 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 56 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 57 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_Vikkie_Movement_4
# 58 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 60 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_DAVE_IRONAIR
# 61 "data/maps/TheIronairB2F/scripts.pory"
	addobject 2
# 62 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 2, TheIronairB2F_Vikkie_Movement_5
# 63 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 65 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_8
# 66 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 67 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 68 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 69 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_WEST
# 70 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 71 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 72 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_9
# 73 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 74 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 75 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 76 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_EAST
# 77 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 78 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 79 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_10
# 80 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 81 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 82 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 83 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 2, TheIronairB2F_Vikkie_Movement_6
# 84 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 86 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 87 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_11
# 88 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 89 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 90 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 91 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_EAST
# 92 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 93 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 94 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_12
# 95 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 96 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 97 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 98 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Vikkie_Movement_0
# 99 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 101 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_SOUTH
# 102 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 103 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_7
# 104 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_13
# 105 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 106 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 107 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 108 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_Vikkie_Movement_7
# 109 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_WEST
# 111 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 112 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 113 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_14
# 114 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 115 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 116 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 117 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 1, DIR_NORTH
# 118 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 119 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 120 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_15
# 121 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 122 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 123 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 124 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_PERSIAN_IRONAIR
# 125 "data/maps/TheIronairB2F/scripts.pory"
	addobject 11
# 126 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 127 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 128 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
# 129 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Vikkie_Text_16
# 130 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 131 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 132 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 133 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 134 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 2, DIR_NORTH
# 135 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 136 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 11, TheIronairB2F_Vikkie_Movement_8
# 137 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 2, TheIronairB2F_Vikkie_Movement_9
# 139 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 140 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 2
# 141 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DAVE_IRONAIR
# 142 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 143 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 144 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 11
# 145 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_PERSIAN_IRONAIR
# 146 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 147 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_Vikkie_Movement_7
# 148 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 149 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 150 "data/maps/TheIronairB2F/scripts.pory"
	goto TheIronairB2F_VikkiesFight
	return


TheIronairB2F_VikkiesFight::
# 154 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 155 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_0
# 156 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 157 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 158 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 159 "data/maps/TheIronairB2F/scripts.pory"
	trainerbattle_no_intro TRAINER_VIKKIE_IRONAIR, Vikkie2
# 160 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq TheIronairB2F_VikkiesFight_1
# 188 "data/maps/TheIronairB2F/scripts.pory"
	special HealPlayerParty
# 189 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 190 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_VikkiesFight_Movement_0
# 191 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 192 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 1, DIR_EAST
# 193 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 194 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 195 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_3
# 196 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 197 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 198 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 1, TheIronairB2F_VikkiesFight_Movement_1
# 199 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 1
# 201 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_VIKKIE_IRONAIR
# 202 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 203 "data/maps/TheIronairB2F/scripts.pory"
	special SpawnCameraObject
# 204 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_5
# 205 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_4
# 206 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 207 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 208 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_VikkiesFight_Movement_2
# 209 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 210 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_VikkiesFight_Movement_3
# 211 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 212 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 213 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_6
# 214 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 215 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 216 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 217 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_VikkiesFight_Movement_4
# 218 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 219 "data/maps/TheIronairB2F/scripts.pory"
	special RemoveCameraObject
# 220 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 38
# 221 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_VikkiesFight_1:
# 161 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_1
# 162 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_1
# 163 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 164 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 165 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 166 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 168 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_2, MSGBOX_YESNO
# 169 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheIronairB2F_VikkiesFight_4
# 177 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 178 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_VIKKIE_IRONAIR
# 179 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DAVE_IRONAIR
# 180 "data/maps/TheIronairB2F/scripts.pory"
	setobjectxyperm 2, 14, 33
# 181 "data/maps/TheIronairB2F/scripts.pory"
	setobjectxyperm 1, 14, 33
# 182 "data/maps/TheIronairB2F/scripts.pory"
	special SetCB2WhiteOut
# 183 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_VikkiesFight_4:
# 170 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 171 "data/maps/TheIronairB2F/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 173 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data/maps/TheIronairB2F/scripts.pory"
	goto TheIronairB2F_VikkiesFight
	return


TheIronairB2F_Ulrich::
# 227 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_MAIN_STORY, 39
	goto_if_eq TheIronairB2F_Ulrich_1
# 236 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 237 "data/maps/TheIronairB2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 238 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 239 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_1
# 240 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 241 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 242 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 243 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 244 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 245 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 246 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_2
# 247 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 248 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 249 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 250 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Ulrich_Movement_0
# 251 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 252 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 253 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 254 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_3
# 255 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 256 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 257 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 258 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 259 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 260 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 261 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_4
# 262 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 263 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 264 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 265 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Ulrich_Movement_0
# 266 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 267 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 268 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 269 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_5
# 270 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 271 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 272 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 273 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 274 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 275 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 276 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_6
# 277 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 278 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 279 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 280 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Ulrich_Movement_0
# 281 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 282 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 283 "data/maps/TheIronairB2F/scripts.pory"
	goto TheIronairB2F_UlrichsFight
	return

TheIronairB2F_Ulrich_1:
# 228 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 229 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 230 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Ulrich_Text_0
# 231 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 232 "data/maps/TheIronairB2F/scripts.pory"
	release
	end


TheIronairB2F_UlrichsFight::
# 288 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 289 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_0
# 290 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 291 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 292 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 293 "data/maps/TheIronairB2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ULRICH_IRONAIR, Ulrich1
# 294 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq TheIronairB2F_UlrichsFight_1
# 317 "data/maps/TheIronairB2F/scripts.pory"
	special HealPlayerParty
# 318 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 319 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 320 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 321 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 322 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_2
# 323 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 324 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 325 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 326 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq TheIronairB2F_UlrichsFight_8
# 332 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_2
# 333 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_1
# 334 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_UlrichsFight_7:
# 336 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 337 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 338 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_3
# 339 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 340 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 341 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 342 "data/maps/TheIronairB2F/scripts.pory"
	special SpawnCameraObject
# 343 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq TheIronairB2F_UlrichsFight_12
# 348 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_UlrichsFight_Movement_4
# 349 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_UlrichsFight_11:
# 351 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_XATU_IRONAIR
# 352 "data/maps/TheIronairB2F/scripts.pory"
	addobject 10
# 353 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 354 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 355 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_5
# 356 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 357 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 358 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 359 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 360 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 361 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_4
# 362 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 363 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 364 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 365 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_NORTH
# 366 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 367 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 368 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_5
# 369 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 370 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 371 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_ORB
# 372 "data/maps/TheIronairB2F/scripts.pory"
	special DoOrbEffect
# 373 "data/maps/TheIronairB2F/scripts.pory"
	call ScreenShake
# 374 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 375 "data/maps/TheIronairB2F/scripts.pory"
	call ScreenShake
# 376 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 377 "data/maps/TheIronairB2F/scripts.pory"
	call ScreenShake
# 378 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 379 "data/maps/TheIronairB2F/scripts.pory"
	special FadeOutOrbEffect
# 380 "data/maps/TheIronairB2F/scripts.pory"
	waitstate
# 381 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 10
# 382 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_XATU_IRONAIR
# 383 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_XATU_CORRUPTED_IRONAIR
# 384 "data/maps/TheIronairB2F/scripts.pory"
	addobject 12
# 385 "data/maps/TheIronairB2F/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 386 "data/maps/TheIronairB2F/scripts.pory"
	doweather
# 387 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
# 388 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 389 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 390 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 391 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_6
# 392 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 393 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 394 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_6
# 395 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 396 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 397 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 398 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_7
# 399 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 400 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 401 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_7
# 402 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 403 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 404 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
# 405 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 406 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 407 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_UlrichsFight_Movement_8
# 408 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 409 "data/maps/TheIronairB2F/scripts.pory"
	special RemoveCameraObject
# 410 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 411 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 412 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq TheIronairB2F_UlrichsFight_16
# 418 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 4, TheIronairB2F_UlrichsFight_Movement_10
# 419 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 420 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_UlrichsFight_15:
# 422 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_UlrichsFight_Text_8
# 423 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_9
# 424 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 425 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 426 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 39
# 427 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_UlrichsFight_1:
# 295 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 296 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_UlrichsFight_Text_1
# 297 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 298 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 299 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 300 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 301 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 302 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_VikkiesFight_Text_2, MSGBOX_YESNO
# 303 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheIronairB2F_UlrichsFight_4
# 311 "data/maps/TheIronairB2F/scripts.pory"
	special SetCB2WhiteOut
# 312 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_UlrichsFight_4:
# 304 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 305 "data/maps/TheIronairB2F/scripts.pory"
	special HealPlayerParty
# 306 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 307 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 308 "data/maps/TheIronairB2F/scripts.pory"
	goto TheIronairB2F_UlrichsFight
	return

TheIronairB2F_UlrichsFight_8:
# 327 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_0
# 328 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_1
# 329 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_UlrichsFight_7

TheIronairB2F_UlrichsFight_12:
# 344 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_UlrichsFight_Movement_3
# 345 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_UlrichsFight_11

TheIronairB2F_UlrichsFight_16:
# 413 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 4, TheIronairB2F_UlrichsFight_Movement_2
# 414 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_9
# 415 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_UlrichsFight_15


TheIronairB2F_DontGo::
# 433 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 434 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 4, TheIronairB2F_VikkiesFight_Movement_3
# 435 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 436 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 437 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_UlrichsFight_Text_8
# 438 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_DontGo_Text_0
# 439 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 440 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 441 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_DontGo_Movement_0
# 442 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 443 "data/maps/TheIronairB2F/scripts.pory"
	release
	end


TheIronairB2F_President::
# 448 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_MAIN_STORY, 39
	goto_if_eq TheIronairB2F_President_1
# 458 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 459 "data/maps/TheIronairB2F/scripts.pory"
	faceplayer
# 460 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_UlrichsFight_Text_8
# 461 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_President_Text_1
# 462 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 463 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_President_1:
# 449 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 450 "data/maps/TheIronairB2F/scripts.pory"
	faceplayer
# 451 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_UlrichsFight_Text_8
# 452 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_President_Text_0
# 453 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 454 "data/maps/TheIronairB2F/scripts.pory"
	release
	end


TheIronairB2F_Xatu::
# 475 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 476 "data/maps/TheIronairB2F/scripts.pory"
	faceplayer
# 477 "data/maps/TheIronairB2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 478 "data/maps/TheIronairB2F/scripts.pory"
	setwildbattle SPECIES_LUGIA, 70
# 479 "data/maps/TheIronairB2F/scripts.pory"
	waitse
# 480 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
# 481 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 482 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 483 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 484 "data/maps/TheIronairB2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 485 "data/maps/TheIronairB2F/scripts.pory"
	waitstate
# 486 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 487 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_XATU, CRY_MODE_FAINT
# 488 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 489 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 490 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 491 "data/maps/TheIronairB2F/scripts.pory"
	setweather WEATHER_NONE
# 492 "data/maps/TheIronairB2F/scripts.pory"
	doweather
# 493 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 12
# 494 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_XATU_CORRUPTED_IRONAIR
# 495 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Xatu_11
TheIronairB2F_Xatu_9:
# 499 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq TheIronairB2F_Xatu_8
TheIronairB2F_Xatu_6:
# 503 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Xatu_5
TheIronairB2F_Xatu_1:
# 507 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 508 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 509 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_UlrichsFight_Movement_9
# 510 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 511 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 512 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_0
# 513 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 514 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 515 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 516 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Vikkie_Text_5
# 517 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_1
# 518 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 519 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 520 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 521 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_3
# 522 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Xatu_Movement_3
# 523 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 524 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 526 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_TEAM_IRONAIR
# 527 "data/maps/TheIronairB2F/scripts.pory"
	addobject 5
# 528 "data/maps/TheIronairB2F/scripts.pory"
	addobject 9
# 529 "data/maps/TheIronairB2F/scripts.pory"
	addobject 13
# 530 "data/maps/TheIronairB2F/scripts.pory"
	addobject 8
# 531 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_4
# 532 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 9, TheIronairB2F_Xatu_Movement_5
# 533 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 13, TheIronairB2F_Xatu_Movement_6
# 534 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 8, TheIronairB2F_Xatu_Movement_7
# 535 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 536 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 537 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 538 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 539 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 540 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_3
# 541 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 542 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 543 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 544 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_UlrichsFight_Movement_9
# 545 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 546 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 547 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_4
# 548 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 549 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 550 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 551 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_8
# 552 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 553 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_9
# 554 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 555 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 556 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_5
# 557 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 558 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 559 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 560 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 561 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 562 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 563 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_6
# 564 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 565 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 566 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 567 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Vikkie_Movement_0
# 568 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 13, TheIronairB2F_Vikkie_Movement_4
# 569 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 8, TheIronairB2F_Vikkie_Movement_4
# 570 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 571 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 572 "data/maps/TheIronairB2F/scripts.pory"
	special SpawnCameraObject
# 573 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_DontGo_Movement_0
# 574 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 575 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_NORTH
# 576 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 578 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 579 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_7
# 580 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 581 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 582 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 583 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_Xatu_Movement_9
# 584 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Xatu_Movement_9
# 585 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 586 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 587 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_NORTH
# 588 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 589 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 590 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_8
# 591 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 592 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 593 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 594 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_SOUTH
# 595 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 596 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 597 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_9
# 598 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 599 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 600 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_Xatu_Movement_10
# 601 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Xatu_Movement_10
# 602 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 4, TheIronairB2F_Vikkie_Movement_8
# 603 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 604 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 4
# 605 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DEATH
# 606 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 607 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_11
# 608 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 9, TheIronairB2F_Xatu_Movement_11
# 609 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 13, TheIronairB2F_Xatu_Movement_11
# 610 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 8, TheIronairB2F_Xatu_Movement_11
# 611 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_12
# 612 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 613 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 614 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 3, DIR_NORTH
# 615 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 616 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_VikkiesFight_Text_5
# 617 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_10
# 618 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 619 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 621 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 622 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 3, TheIronairB2F_Vikkie_Movement_8
# 623 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 624 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 3
# 625 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DEATH_2
# 626 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 627 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 8, TheIronairB2F_Xatu_Movement_13
# 628 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 629 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_11
# 630 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_12
# 631 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 632 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 633 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 634 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 8, DIR_NORTH
# 635 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 636 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_11
# 637 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_13
# 638 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 639 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 640 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 641 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_14
# 642 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 643 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 644 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 645 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_14
# 646 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 647 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 648 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 649 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_EAST
# 650 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 651 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_15
# 652 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 653 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 654 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 13, TheIronairB2F_Vikkie_Movement_6
# 655 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 9, TheIronairB2F_Vikkie_Movement_6
# 656 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 657 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 658 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_16
# 659 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 660 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 661 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 13, TheIronairB2F_Xatu_Movement_15
# 662 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 9, TheIronairB2F_Xatu_Movement_16
# 663 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 664 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 9
# 665 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 13
# 666 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 667 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 668 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 669 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 670 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_Xatu_Movement_17
# 671 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 672 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_3
# 673 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_3
# 674 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 675 "data/maps/TheIronairB2F/scripts.pory"
	delay 60
# 676 "data/maps/TheIronairB2F/scripts.pory"
	special RemoveCameraObject
# 677 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 678 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_17
# 679 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 680 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 681 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 682 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_DIANCIE
# 683 "data/maps/TheIronairB2F/scripts.pory"
	addobject 14
# 684 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 14, TheIronairB2F_Xatu_Movement_18
# 685 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 686 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 687 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Xatu_Movement_19
# 688 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_2
# 689 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 8, TheIronairB2F_UlrichsFight_Movement_2
# 690 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 691 "data/maps/TheIronairB2F/scripts.pory"
	special SpawnCameraObject
# 692 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, TheIronairB2F_Xatu_Movement_20
# 693 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 694 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 695 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_18
# 696 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 697 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 698 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 699 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 700 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 701 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 702 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 703 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 704 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_19
# 705 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 706 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 707 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 708 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_SOUTH
# 709 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 710 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_NORTH
# 711 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 712 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_20
# 713 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 714 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 715 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 716 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_SOUTH
# 717 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 718 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 719 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_21
# 720 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 721 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 722 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 723 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_21
# 724 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 725 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 726 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_NORTH
# 727 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 728 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_22
# 729 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 730 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 731 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 732 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 733 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 734 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 735 "data/maps/TheIronairB2F/scripts.pory"
	playse SE_PIN
# 736 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 5, TheIronairB2F_Vikkie_Movement_0
# 737 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 738 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 739 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 740 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_23
# 741 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 742 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 743 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 744 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_WEST
# 745 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 746 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 747 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 748 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 749 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Xatu_Text_24
# 750 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 751 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 752 "data/maps/TheIronairB2F/scripts.pory"
	turnobject 5, DIR_NORTH
# 753 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 754 "data/maps/TheIronairB2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 5
# 755 "data/maps/TheIronairB2F/scripts.pory"
	special RemoveCameraObject
# 756 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 40
# 757 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_NATU_EGG_LEAGUE
# 758 "data/maps/TheIronairB2F/scripts.pory"
	warpsilent MAP_SAPPHIRE_CITY_BUILDING2, 5, 37
# 759 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Xatu_2:
# 496 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_0
# 497 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Xatu_1

TheIronairB2F_Xatu_3:
# 500 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_1
# 501 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Xatu_1

TheIronairB2F_Xatu_4:
# 504 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_Xatu_Movement_2
# 505 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Xatu_1

TheIronairB2F_Xatu_5:
# 503 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq TheIronairB2F_Xatu_4
	goto TheIronairB2F_Xatu_1

TheIronairB2F_Xatu_8:
# 499 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq TheIronairB2F_Xatu_3
	goto TheIronairB2F_Xatu_6

TheIronairB2F_Xatu_11:
# 495 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq TheIronairB2F_Xatu_2
	goto TheIronairB2F_Xatu_9


TheIronairB2F_Diancie::
# 764 "data/maps/TheIronairB2F/scripts.pory"
	lock
# 765 "data/maps/TheIronairB2F/scripts.pory"
	faceplayer
# 766 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_DIANCIE_FIGHT, 1
	goto_if_eq TheIronairB2F_Diancie_1
# 873 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 874 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 875 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 876 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 877 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_9
# 878 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 879 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 880 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 881 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 882 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 883 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 884 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 885 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_10
# 886 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 887 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 888 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 889 "data/maps/TheIronairB2F/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 70, ITEM_DIANCITE
# 890 "data/maps/TheIronairB2F/scripts.pory"
	waitse
# 891 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 892 "data/maps/TheIronairB2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 893 "data/maps/TheIronairB2F/scripts.pory"
	waitstate
# 894 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 895 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 896 "data/maps/TheIronairB2F/scripts.pory"
	getcaughtmon SPECIES_DIANCIE
# 897 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TheIronairB2F_Diancie_7
# 978 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 979 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 980 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 981 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 982 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_12, MSGBOX_YESNO
# 983 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheIronairB2F_Diancie_30
# 1069 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1070 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1071 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 1072 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 1073 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 1074 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 1075 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 1076 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_13
# 1077 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1078 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1079 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_DIANCIE_FIGHT, 1
# 1080 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Diancie_1:
# 767 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 768 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 769 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 770 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 771 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_1, MSGBOX_YESNO
# 772 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheIronairB2F_Diancie_4
# 858 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 859 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 860 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 861 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 862 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 863 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 864 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 865 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_8
# 866 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 867 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 868 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Diancie_4:
# 773 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 774 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 775 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 776 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 777 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 778 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 779 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 780 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_2
# 781 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 782 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 783 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 784 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 785 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 16
# 786 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE
# 787 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 788 "data/maps/TheIronairB2F/scripts.pory"
	givemon SPECIES_DIANCIE, 70, ITEM_DIANCITE
# 789 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_DIANCIE
# 790 "data/maps/TheIronairB2F/scripts.pory"
	addobject 17
# 791 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 792 "data/maps/TheIronairB2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 793 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_17
TheIronairB2F_Diancie_15:
# 799 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_14
TheIronairB2F_Diancie_13:
# 806 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_2
# 807 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 808 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 809 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_10:
# 811 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 812 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_3
# 813 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 814 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 815 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 816 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_4
# 817 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 818 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 819 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 820 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_5
# 821 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 822 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 823 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 824 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 825 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_6
# 826 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 827 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 828 "data/maps/TheIronairB2F/scripts.pory"
	givemon SPECIES_MELTAN, 20
# 829 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 830 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 831 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_7
# 832 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 833 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 834 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_40
TheIronairB2F_Diancie_38:
# 838 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_37
TheIronairB2F_Diancie_36:
# 843 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_5
# 844 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_33:
# 846 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 17
# 847 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_DIANCIE
# 848 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_GUARDING_DIANCIE
# 849 "data/maps/TheIronairB2F/scripts.pory"
	completequest QUEST_DIANCIE
# 850 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE_QUEST_COMPLETE
# 851 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_LEFT_GYM
# 852 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 853 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 46
# 854 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Diancie_7:
# 898 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 899 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 900 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 901 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 902 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_11
# 903 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 904 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 905 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 906 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 16
# 907 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE
# 908 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 909 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_DIANCIE
# 910 "data/maps/TheIronairB2F/scripts.pory"
	addobject 17
# 911 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 912 "data/maps/TheIronairB2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 913 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_27
TheIronairB2F_Diancie_25:
# 919 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_24
TheIronairB2F_Diancie_23:
# 926 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_2
# 927 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 928 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 929 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_20:
# 931 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 932 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_3
# 933 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 934 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 935 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 936 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_4
# 937 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 938 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 939 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 940 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_5
# 941 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 942 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 943 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 944 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 945 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_6
# 946 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 947 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 948 "data/maps/TheIronairB2F/scripts.pory"
	givemon SPECIES_MELTAN, 20
# 949 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 950 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 951 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_7
# 952 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 953 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 954 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_50
TheIronairB2F_Diancie_48:
# 958 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_47
TheIronairB2F_Diancie_46:
# 963 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_5
# 964 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_43:
# 966 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 17
# 967 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_DIANCIE
# 968 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_GUARDING_DIANCIE
# 969 "data/maps/TheIronairB2F/scripts.pory"
	completequest QUEST_DIANCIE
# 970 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE_QUEST_COMPLETE
# 971 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_LEFT_GYM
# 972 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 973 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 46
# 974 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Diancie_11:
# 794 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_0
# 795 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 796 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_9
# 797 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_10

TheIronairB2F_Diancie_12:
# 800 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_1
# 801 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 802 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 803 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_10

TheIronairB2F_Diancie_14:
# 799 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_12
	goto TheIronairB2F_Diancie_13

TheIronairB2F_Diancie_17:
# 793 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_11
	goto TheIronairB2F_Diancie_15

TheIronairB2F_Diancie_21:
# 914 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_0
# 915 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 916 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_9
# 917 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_20

TheIronairB2F_Diancie_22:
# 920 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_1
# 921 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 922 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 923 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_20

TheIronairB2F_Diancie_24:
# 919 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_22
	goto TheIronairB2F_Diancie_23

TheIronairB2F_Diancie_27:
# 913 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_21
	goto TheIronairB2F_Diancie_25

TheIronairB2F_Diancie_30:
# 984 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 985 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 986 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 987 "data/maps/TheIronairB2F/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_NORMAL
# 988 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 989 "data/maps/TheIronairB2F/scripts.pory"
	waitmoncry
# 990 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Diancie_Text_0
# 991 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_2
# 992 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 993 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 994 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 995 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 996 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 16
# 997 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE
# 998 "data/maps/TheIronairB2F/scripts.pory"
	givemon SPECIES_DIANCIE, 70, ITEM_DIANCITE
# 999 "data/maps/TheIronairB2F/scripts.pory"
	delay 40
# 1000 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_DIANCIE
# 1001 "data/maps/TheIronairB2F/scripts.pory"
	addobject 17
# 1002 "data/maps/TheIronairB2F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1003 "data/maps/TheIronairB2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1004 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_60
TheIronairB2F_Diancie_58:
# 1010 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_57
TheIronairB2F_Diancie_56:
# 1017 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_2
# 1018 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 1019 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 1020 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_53:
# 1022 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 1023 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_3
# 1024 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1025 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1026 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 1027 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_4
# 1028 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1029 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 1030 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 1031 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_5
# 1032 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1033 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1034 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 1035 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 1036 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_6
# 1037 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1038 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1039 "data/maps/TheIronairB2F/scripts.pory"
	givemon SPECIES_MELTAN, 20
# 1040 "data/maps/TheIronairB2F/scripts.pory"
	delay 20
# 1041 "data/maps/TheIronairB2F/scripts.pory"
	namebox TheIronairB2F_Xatu_Text_2
# 1042 "data/maps/TheIronairB2F/scripts.pory"
	msgbox TheIronairB2F_Diancie_Text_7
# 1043 "data/maps/TheIronairB2F/scripts.pory"
	closemessage
# 1044 "data/maps/TheIronairB2F/scripts.pory"
	hidenamebox
# 1045 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq TheIronairB2F_Diancie_70
TheIronairB2F_Diancie_68:
# 1049 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq TheIronairB2F_Diancie_67
TheIronairB2F_Diancie_66:
# 1054 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_5
# 1055 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
TheIronairB2F_Diancie_63:
# 1057 "data/maps/TheIronairB2F/scripts.pory"
	removeobject 17
# 1058 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_DIANCIE
# 1059 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_BRUCE_GUARDING_DIANCIE
# 1060 "data/maps/TheIronairB2F/scripts.pory"
	clearflag FLAG_BRUCE_LEFT_GYM
# 1061 "data/maps/TheIronairB2F/scripts.pory"
	completequest QUEST_DIANCIE
# 1062 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_DIANCIE_QUEST_COMPLETE
# 1063 "data/maps/TheIronairB2F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 1064 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 46
# 1065 "data/maps/TheIronairB2F/scripts.pory"
	release
	end

TheIronairB2F_Diancie_34:
# 835 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_3
# 836 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_33

TheIronairB2F_Diancie_35:
# 839 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_4
# 840 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_33

TheIronairB2F_Diancie_37:
# 838 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_35
	goto TheIronairB2F_Diancie_36

TheIronairB2F_Diancie_40:
# 834 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_34
	goto TheIronairB2F_Diancie_38

TheIronairB2F_Diancie_44:
# 955 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_3
# 956 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_43

TheIronairB2F_Diancie_45:
# 959 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_4
# 960 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_43

TheIronairB2F_Diancie_47:
# 958 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_45
	goto TheIronairB2F_Diancie_46

TheIronairB2F_Diancie_50:
# 954 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_44
	goto TheIronairB2F_Diancie_48

TheIronairB2F_Diancie_54:
# 1005 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_0
# 1006 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 1007 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_9
# 1008 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_53

TheIronairB2F_Diancie_55:
# 1011 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_1
# 1012 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
# 1013 "data/maps/TheIronairB2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB2F_UlrichsFight_Movement_11
# 1014 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_53

TheIronairB2F_Diancie_57:
# 1010 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_55
	goto TheIronairB2F_Diancie_56

TheIronairB2F_Diancie_60:
# 1004 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_54
	goto TheIronairB2F_Diancie_58

TheIronairB2F_Diancie_64:
# 1046 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_3
# 1047 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_63

TheIronairB2F_Diancie_65:
# 1050 "data/maps/TheIronairB2F/scripts.pory"
	applymovement 17, TheIronairB2F_Diancie_Movement_4
# 1051 "data/maps/TheIronairB2F/scripts.pory"
	waitmovement 0
	goto TheIronairB2F_Diancie_63

TheIronairB2F_Diancie_67:
# 1049 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_65
	goto TheIronairB2F_Diancie_66

TheIronairB2F_Diancie_70:
# 1045 "data/maps/TheIronairB2F/scripts.pory"
	compare VAR_TEMP_1, 43
	goto_if_eq TheIronairB2F_Diancie_64
	goto TheIronairB2F_Diancie_68


TheIronairB2F_ScreenShake::
# 1096 "data/maps/TheIronairB2F/scripts.pory"
	delay 10
# 1097 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_0x8004, 10
# 1098 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_0x8005, 10
# 1099 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_0x8006, 10
# 1100 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_0x8007, 10
# 1101 "data/maps/TheIronairB2F/scripts.pory"
	special ShakeCamera
# 1102 "data/maps/TheIronairB2F/scripts.pory"
	waitstate
# 1103 "data/maps/TheIronairB2F/scripts.pory"
	delay 10
	return


TheIronairB2F_Test::
# 1107 "data/maps/TheIronairB2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 5
# 1108 "data/maps/TheIronairB2F/scripts.pory"
	special RemoveCameraObject
# 1109 "data/maps/TheIronairB2F/scripts.pory"
	setvar VAR_MAIN_STORY, 40
# 1110 "data/maps/TheIronairB2F/scripts.pory"
	warpsilent MAP_BLEAK_RIFT, 11, 51
# 1111 "data/maps/TheIronairB2F/scripts.pory"
	release
	end


# 23 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_0:
# 23 "data/maps/TheIronairB2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_1:
# 26 "data/maps/TheIronairB2F/scripts.pory"
	face_left
# 26 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 26 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 26 "data/maps/TheIronairB2F/scripts.pory"
	face_right
# 26 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 26 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 26 "data/maps/TheIronairB2F/scripts.pory"
	face_left
	step_end

# 30 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_2:
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 30 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 30 "data/maps/TheIronairB2F/scripts.pory"
	face_right
	step_end

# 49 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_3:
# 49 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 49 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_4:
# 57 "data/maps/TheIronairB2F/scripts.pory"
	emote_question_mark
	step_end

# 62 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_5:
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_right
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_right
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_right
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_right
# 62 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 62 "data/maps/TheIronairB2F/scripts.pory"
	face_right
	step_end

# 83 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_6:
# 83 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_left
	step_end

# 108 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_7:
# 108 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
	step_end

# 136 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_8:
# 136 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
	step_end

# 138 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Vikkie_Movement_9:
# 138 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 138 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 138 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 138 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
	step_end

# 190 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_VikkiesFight_Movement_0:
# 190 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 198 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_VikkiesFight_Movement_1:
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 198 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
	step_end

# 208 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_VikkiesFight_Movement_2:
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_southeast
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 208 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
	step_end

# 210 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_VikkiesFight_Movement_3:
# 210 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_up
	step_end

# 217 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_VikkiesFight_Movement_4:
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
# 217 "data/maps/TheIronairB2F/scripts.pory"
	walk_diag_northwest
	step_end

# 250 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Ulrich_Movement_0:
# 250 "data/maps/TheIronairB2F/scripts.pory"
	face_player
	step_end

# 327 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_0:
# 327 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 327 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 328 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_1:
# 328 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
	step_end

# 332 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_2:
# 332 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 344 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_3:
# 344 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 344 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 344 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 344 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 348 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_4:
# 348 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 348 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 348 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 348 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 348 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
	step_end

# 355 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_5:
# 355 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 355 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
	step_end

# 391 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_6:
# 391 "data/maps/TheIronairB2F/scripts.pory"
	face_left
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 391 "data/maps/TheIronairB2F/scripts.pory"
	face_right
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
# 391 "data/maps/TheIronairB2F/scripts.pory"
	delay_16
	step_end

# 398 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_7:
# 398 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 398 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_up
	step_end

# 407 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_8:
# 407 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 407 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 407 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 407 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_right
	step_end

# 414 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_9:
# 414 "data/maps/TheIronairB2F/scripts.pory"
	face_down
	step_end

# 418 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_10:
# 418 "data/maps/TheIronairB2F/scripts.pory"
	face_left
	step_end

# 419 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_UlrichsFight_Movement_11:
# 419 "data/maps/TheIronairB2F/scripts.pory"
	face_right
	step_end

# 441 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_DontGo_Movement_0:
# 441 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
	step_end

# 496 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_0:
# 496 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 496 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 496 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 500 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_1:
# 500 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 500 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 500 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 500 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 500 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 504 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_2:
# 504 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 504 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 504 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 521 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_3:
# 521 "data/maps/TheIronairB2F/scripts.pory"
	face_up
# 521 "data/maps/TheIronairB2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 531 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_4:
# 531 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 531 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
	step_end

# 532 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_5:
# 532 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 532 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 532 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
	step_end

# 533 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_6:
# 533 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 533 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
	step_end

# 534 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_7:
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 534 "data/maps/TheIronairB2F/scripts.pory"
	face_left
	step_end

# 551 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_8:
# 551 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 551 "data/maps/TheIronairB2F/scripts.pory"
	face_left
	step_end

# 583 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_9:
# 583 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 583 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
	step_end

# 600 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_10:
# 600 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
	step_end

# 607 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_11:
# 607 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_down
# 607 "data/maps/TheIronairB2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 611 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_12:
# 611 "data/maps/TheIronairB2F/scripts.pory"
	face_down
# 611 "data/maps/TheIronairB2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 627 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_13:
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 627 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_down
# 627 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_down
# 627 "data/maps/TheIronairB2F/scripts.pory"
	jump_in_place_down
	step_end

# 641 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_14:
# 641 "data/maps/TheIronairB2F/scripts.pory"
	walk_in_place_down
	step_end

# 661 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_15:
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 661 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
	step_end

# 662 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_16:
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 662 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
	step_end

# 670 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_17:
# 670 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 670 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 670 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 670 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
	step_end

# 684 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_18:
# 684 "data/maps/TheIronairB2F/scripts.pory"
	walk_slow_down
# 684 "data/maps/TheIronairB2F/scripts.pory"
	walk_slow_down
# 684 "data/maps/TheIronairB2F/scripts.pory"
	walk_slow_down
	step_end

# 687 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_19:
# 687 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 687 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 687 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_up
# 687 "data/maps/TheIronairB2F/scripts.pory"
	walk_fast_left
# 687 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 692 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_20:
# 692 "data/maps/TheIronairB2F/scripts.pory"
	walk_slow_up
# 692 "data/maps/TheIronairB2F/scripts.pory"
	walk_slow_up
	step_end

# 723 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Xatu_Movement_21:
# 723 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 723 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 723 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
	step_end

# 794 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_0:
# 794 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 794 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 794 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 794 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 794 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 794 "data/maps/TheIronairB2F/scripts.pory"
	face_up
	step_end

# 800 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_1:
# 800 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 800 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 800 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 800 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 800 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 800 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 806 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_2:
# 806 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 806 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 806 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 806 "data/maps/TheIronairB2F/scripts.pory"
	jump_down
# 806 "data/maps/TheIronairB2F/scripts.pory"
	walk_down
# 806 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 806 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 806 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 835 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_3:
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 835 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 835 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 835 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 835 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 835 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 839 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_4:
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 839 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 839 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 839 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 839 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 839 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

# 843 "data/maps/TheIronairB2F/scripts.pory"
TheIronairB2F_Diancie_Movement_5:
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_right
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_up
# 843 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 843 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 843 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 843 "data/maps/TheIronairB2F/scripts.pory"
	jump_up
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
# 843 "data/maps/TheIronairB2F/scripts.pory"
	walk_left
	step_end

TheIronairB2F_Vikkie_Text_0:
# 17 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}!!$"

TheIronairB2F_Vikkie_Text_1:
# 33 "data/maps/TheIronairB2F/scripts.pory"
	.string "Vikkie$"

TheIronairB2F_Vikkie_Text_2:
# 34 "data/maps/TheIronairB2F/scripts.pory"
	.string "...{PLAYER}, what are you doing here?\n"
	.string "Aren't you fighting the Fandango Band?\l"
	.string "Unless...$"

TheIronairB2F_Vikkie_Text_3:
# 40 "data/maps/TheIronairB2F/scripts.pory"
	.string "...You're with them?$"

TheIronairB2F_Vikkie_Text_4:
# 46 "data/maps/TheIronairB2F/scripts.pory"
	.string "...I knew it. I knew that, deep inside,\n"
	.string "you concealed a dark secret... I just\l"
	.string "have a sense for these things. I'm\l"
	.string "afraid I'll have to turn you over to the\l"
	.string "authorities... Come with me. Struggling\l"
	.string "won't do you any good.$"

TheIronairB2F_Vikkie_Text_5:
# 52 "data/maps/TheIronairB2F/scripts.pory"
	.string "???$"

TheIronairB2F_Vikkie_Text_6:
# 53 "data/maps/TheIronairB2F/scripts.pory"
	.string "NO!!$"

TheIronairB2F_Vikkie_Text_7:
# 64 "data/maps/TheIronairB2F/scripts.pory"
	.string "Dave$"

TheIronairB2F_Vikkie_Text_8:
# 65 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}, don't go with her!$"

TheIronairB2F_Vikkie_Text_9:
# 72 "data/maps/TheIronairB2F/scripts.pory"
	.string "...She'll hurt you! Like, in a really bad\n"
	.string "way!$"

TheIronairB2F_Vikkie_Text_10:
# 79 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Do you remember about the top secret\n"
	.string "project I talked you about back in\l"
	.string "Glorray?$"

TheIronairB2F_Vikkie_Text_11:
# 87 "data/maps/TheIronairB2F/scripts.pory"
	.string "Turns out it's a real bad project! They\n"
	.string "want to hurt Pokémons! They want to\l"
	.string "use the serum I crafted to inject it\l"
	.string "into a Pokémon! They say this Pokémon,\l"
	.string "Xatu, will teleport them to the past! I'm\l"
	.string "pretty sure it doesn't work like that\l"
	.string "though!$"

TheIronairB2F_Vikkie_Text_12:
# 94 "data/maps/TheIronairB2F/scripts.pory"
	.string "They are the ones who provoked the\n"
	.string "earthquake back at the Pokémon League\l"
	.string "HQ building! So that Vikkie could become\l"
	.string "President and Ulrich could get his\l"
	.string "hands on the sapphires!$"

TheIronairB2F_Vikkie_Text_13:
# 104 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Forgive me, {PLAYER}. I'm not a bad\n"
	.string "guy, I swear! Just a lost scientist!$"

TheIronairB2F_Vikkie_Text_14:
# 113 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Dave, I knew you were a coward. I\n"
	.string "shouldn't have recruited you, you've\l"
	.string "been nothing but a disappointment so\l"
	.string "far...$"

TheIronairB2F_Vikkie_Text_15:
# 120 "data/maps/TheIronairB2F/scripts.pory"
	.string "Persian, get rid of him.$"

TheIronairB2F_Vikkie_Text_16:
# 129 "data/maps/TheIronairB2F/scripts.pory"
	.string "Siiiiiiian!$"

TheIronairB2F_VikkiesFight_Text_0:
# 155 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Your turn.$"

TheIronairB2F_VikkiesFight_Text_1:
# 162 "data/maps/TheIronairB2F/scripts.pory"
	.string "Hahaha! Pathetic! You're done for!$"

TheIronairB2F_VikkiesFight_Text_2:
# 168 "data/maps/TheIronairB2F/scripts.pory"
	.string "Try again?$"

TheIronairB2F_VikkiesFight_Text_3:
# 195 "data/maps/TheIronairB2F/scripts.pory"
	.string "You'll never catch me! I'm the most\n"
	.string "powerful woman of Thura! Don't you\l"
	.string "forget it!$"

TheIronairB2F_VikkiesFight_Text_4:
# 205 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}! Down here!$"

TheIronairB2F_VikkiesFight_Text_5:
# 212 "data/maps/TheIronairB2F/scripts.pory"
	.string "Ulrich$"

TheIronairB2F_VikkiesFight_Text_6:
# 213 "data/maps/TheIronairB2F/scripts.pory"
	.string "Look! I've got the President! There's\n"
	.string "still a chance you can save him! Come\l"
	.string "down here!$"

TheIronairB2F_Ulrich_Text_0:
# 230 "data/maps/TheIronairB2F/scripts.pory"
	.string "...I don't understand... Why? Why didn't\n"
	.string "it work? The serum formula was\l"
	.string "thoroughly followed...$"

TheIronairB2F_Ulrich_Text_1:
# 239 "data/maps/TheIronairB2F/scripts.pory"
	.string "...{PLAYER}, we meet again. And this\n"
	.string "time, you can see my face.$"

TheIronairB2F_Ulrich_Text_2:
# 246 "data/maps/TheIronairB2F/scripts.pory"
	.string "...How long has it been, 10 years? More\n"
	.string "or less?$"

TheIronairB2F_Ulrich_Text_3:
# 254 "data/maps/TheIronairB2F/scripts.pory"
	.string "...I never understood why Grandma hated\n"
	.string "me. She always spoke so fondly about\l"
	.string "you... And on the other hand, she\l"
	.string "despised me. When she gave you that\l"
	.string "egg, I couldn't take it anymore.$"

TheIronairB2F_Ulrich_Text_4:
# 261 "data/maps/TheIronairB2F/scripts.pory"
	.string "...So, I left Glorray. I lived in the\n"
	.string "streets of Sapphire City for a long\l"
	.string "time. Each time I could, I read. I\l"
	.string "learned so much. And then, I stumbled on\l"
	.string "that book...$"

TheIronairB2F_Ulrich_Text_5:
# 269 "data/maps/TheIronairB2F/scripts.pory"
	.string "...The Legend of Xatu. I knew that\n"
	.string "Pokémon had psychic powers that are\l"
	.string "beyond our comprehension... But to\l"
	.string "learn that it could teleport one into\l"
	.string "the past? I was sold.$"

TheIronairB2F_Ulrich_Text_6:
# 276 "data/maps/TheIronairB2F/scripts.pory"
	.string "...When I learned that you were facing\n"
	.string "the President, I knew that this was my\l"
	.string "only chance: I would steal Xatu from\l"
	.string "you, make it teleport me into the past\l"
	.string "and finally convince Grandma that I'm\l"
	.string "worth it. Because in the meantime, I got\l"
	.string "strong. Very strong.$"

TheIronairB2F_UlrichsFight_Text_0:
# 289 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Let me show you.$"

TheIronairB2F_UlrichsFight_Text_1:
# 296 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Sorry, {PLAYER}. But your run ends\n"
	.string "here.$"

TheIronairB2F_UlrichsFight_Text_2:
# 322 "data/maps/TheIronairB2F/scripts.pory"
	.string "...I could've used Xatu, but it wouldn't\n"
	.string "obey me, no matter what I do. It's okay,\l"
	.string "though.$"

TheIronairB2F_UlrichsFight_Text_3:
# 338 "data/maps/TheIronairB2F/scripts.pory"
	.string "...It's time you get out of your\n"
	.string "Pokéball.$"

TheIronairB2F_UlrichsFight_Text_4:
# 361 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Remember your old pal, {PLAYER}? I\n"
	.string "told you I took care of it.$"

TheIronairB2F_UlrichsFight_Text_5:
# 368 "data/maps/TheIronairB2F/scripts.pory"
	.string "...It ends now, though. With that serum,\n"
	.string "Xatu will be able to teleport me into\l"
	.string "the past... COME ON, NOW!$"

TheIronairB2F_UlrichsFight_Text_6:
# 394 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Huh? Why am I still here?$"

TheIronairB2F_UlrichsFight_Text_7:
# 401 "data/maps/TheIronairB2F/scripts.pory"
	.string "COME ON, YOU STUPID BIRD! TAKE ME BACK\n"
	.string "TO HER!$"

TheIronairB2F_UlrichsFight_Text_8:
# 422 "data/maps/TheIronairB2F/scripts.pory"
	.string "Pres.$"

TheIronairB2F_UlrichsFight_Text_9:
# 423 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}! Xatu has gone totally\n"
	.string "rogue, it could cause the Ironair to\l"
	.string "erupt! You must end its suffering! Go!$"

TheIronairB2F_DontGo_Text_0:
# 438 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}!! Now is not the time to\n"
	.string "flee! You must deal with Xatu!$"

TheIronairB2F_President_Text_0:
# 452 "data/maps/TheIronairB2F/scripts.pory"
	.string "You must stop Xatu now!$"

TheIronairB2F_President_Text_1:
# 461 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}! You gotta help me, please!$"

TheIronairB2F_Xatu_Text_0:
# 512 "data/maps/TheIronairB2F/scripts.pory"
	.string "...This is it. I've failed, once again...$"

TheIronairB2F_Xatu_Text_1:
# 517 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}!$"

TheIronairB2F_Xatu_Text_2:
# 539 "data/maps/TheIronairB2F/scripts.pory"
	.string "Bruce$"

TheIronairB2F_Xatu_Text_3:
# 540 "data/maps/TheIronairB2F/scripts.pory"
	.string "{PLAYER}!! Are you ok?$"

TheIronairB2F_Xatu_Text_4:
# 547 "data/maps/TheIronairB2F/scripts.pory"
	.string "You...$"

TheIronairB2F_Xatu_Text_5:
# 556 "data/maps/TheIronairB2F/scripts.pory"
	.string "You almost wiped out an entire region!\n"
	.string "For what, your only selfish purpose?\l"
	.string "YOU'LL PAY FOR YOUR CRIMES!$"

TheIronairB2F_Xatu_Text_6:
# 563 "data/maps/TheIronairB2F/scripts.pory"
	.string "...No. I don't think I will.$"

TheIronairB2F_Xatu_Text_7:
# 579 "data/maps/TheIronairB2F/scripts.pory"
	.string "...{PLAYER}, all I wanted was Grandma\n"
	.string "to love me like she loved you.$"

TheIronairB2F_Xatu_Text_8:
# 590 "data/maps/TheIronairB2F/scripts.pory"
	.string "One last gift to you all...$"

TheIronairB2F_Xatu_Text_9:
# 597 "data/maps/TheIronairB2F/scripts.pory"
	.string "...You're coming down with me.$"

TheIronairB2F_Xatu_Text_10:
# 617 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Goodbye, {PLAYER}.$"

TheIronairB2F_Xatu_Text_11:
# 629 "data/maps/TheIronairB2F/scripts.pory"
	.string "Bernard$"

TheIronairB2F_Xatu_Text_12:
# 630 "data/maps/TheIronairB2F/scripts.pory"
	.string "PRESIDENT!!!$"

TheIronairB2F_Xatu_Text_13:
# 637 "data/maps/TheIronairB2F/scripts.pory"
	.string "We've got to save him!! Quick!!$"

TheIronairB2F_Xatu_Text_14:
# 645 "data/maps/TheIronairB2F/scripts.pory"
	.string "Lad, it's too late. There's nothing we\n"
	.string "can do. We must gather our forces to\l"
	.string "find and arrest Vikkie.$"

TheIronairB2F_Xatu_Text_15:
# 651 "data/maps/TheIronairB2F/scripts.pory"
	.string "Sam, K.A.M, I need you to form a team and\n"
	.string "find that woman. She must be stopped at\l"
	.string "all costs.$"

TheIronairB2F_Xatu_Text_16:
# 658 "data/maps/TheIronairB2F/scripts.pory"
	.string "You got it boss!$"

TheIronairB2F_Xatu_Text_17:
# 678 "data/maps/TheIronairB2F/scripts.pory"
	.string "...That cry! It can't be...$"

TheIronairB2F_Xatu_Text_18:
# 695 "data/maps/TheIronairB2F/scripts.pory"
	.string "DIANCIE! I'M SO SORRY, I FAILED YOU!$"

TheIronairB2F_Xatu_Text_19:
# 704 "data/maps/TheIronairB2F/scripts.pory"
	.string "You...forgive me? For what I've done to\n"
	.string "protect the Ironair?$"

TheIronairB2F_Xatu_Text_20:
# 712 "data/maps/TheIronairB2F/scripts.pory"
	.string "Diancie!!$"

TheIronairB2F_Xatu_Text_21:
# 719 "data/maps/TheIronairB2F/scripts.pory"
	.string "It's {PLAYER} who saved Thura!$"

TheIronairB2F_Xatu_Text_22:
# 728 "data/maps/TheIronairB2F/scripts.pory"
	.string "They're the one to thank! Not me! I've\n"
	.string "been nothing but a failure to you!$"

TheIronairB2F_Xatu_Text_23:
# 740 "data/maps/TheIronairB2F/scripts.pory"
	.string "Thank you, thank you, O mighty guardian\n"
	.string "of the Ironair! I'll protect your lair\l"
	.string "with my life!$"

TheIronairB2F_Xatu_Text_24:
# 749 "data/maps/TheIronairB2F/scripts.pory"
	.string "Come, {PLAYER}. It's time to go and\n"
	.string "leave Diancie, now. I'll walk you home.$"

TheIronairB2F_Diancie_Text_0:
# 770 "data/maps/TheIronairB2F/scripts.pory"
	.string "Diancie$"

TheIronairB2F_Diancie_Text_1:
# 771 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Welcome back, {PLAYER}. Will you\n"
	.string "accept me in your party, now?)$"

TheIronairB2F_Diancie_Text_2:
# 780 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Thank you, {PLAYER}.)$"

TheIronairB2F_Diancie_Text_3:
# 812 "data/maps/TheIronairB2F/scripts.pory"
	.string "Haha, I knew it! I knew Diancie\n"
	.string "considered you worthy of a President!$"

TheIronairB2F_Diancie_Text_4:
# 816 "data/maps/TheIronairB2F/scripts.pory"
	.string "...$"

TheIronairB2F_Diancie_Text_5:
# 820 "data/maps/TheIronairB2F/scripts.pory"
	.string "Now that that's done, it's time to find\n"
	.string "Vikkie. Sam will call you soon! As for me,\l"
	.string "I'll go back to my own lair, the foundry.\l"
	.string "Thanks again for what you've did,\l"
	.string "{PLAYER}! Don't hesitate to come say\l"
	.string "hi when you're in Frux.$"

TheIronairB2F_Diancie_Text_6:
# 825 "data/maps/TheIronairB2F/scripts.pory"
	.string "One last thing. You remember my\n"
	.string "Melmetal, right? Well, it was born from a\l"
	.string "steel puddle. One day, a tank burst and\l"
	.string "there was this little Pokémon I've\l"
	.string "never seen before! A Meltan.\l"
	.string "Apparently, it's very rare. I want you to\l"
	.string "have one.$"

TheIronairB2F_Diancie_Text_7:
# 831 "data/maps/TheIronairB2F/scripts.pory"
	.string "Okay. See you later!$"

TheIronairB2F_Diancie_Text_8:
# 865 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Worry not, {PLAYER}. If you ever\n"
	.string "change your mind, I'll be waiting for in\l"
	.string "this very place.)$"

TheIronairB2F_Diancie_Text_9:
# 877 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Welcome again, {PLAYER}. Thanks for\n"
	.string "what you've done to protect my lair.)$"

TheIronairB2F_Diancie_Text_10:
# 885 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Please, let me face you in a battle. I\n"
	.string "want to test your strength. Worry not\l"
	.string "about me, for I can heal myself, even at\l"
	.string "my lowest.)$"

TheIronairB2F_Diancie_Text_11:
# 902 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Thank you, {PLAYER}. You truly are\n"
	.string "worthy of my trust. I'm glad to be part\l"
	.string "of your team.)$"

TheIronairB2F_Diancie_Text_12:
# 982 "data/maps/TheIronairB2F/scripts.pory"
	.string "(Thank you, {PLAYER}. You truly are\n"
	.string "worthy of my trust. Please, accept me in\l"
	.string "your party. I want to be part of your\l"
	.string "journey.)$"

TheIronairB2F_Diancie_Text_13:
# 1076 "data/maps/TheIronairB2F/scripts.pory"
	.string "(I understand, {PLAYER}. If you ever\n"
	.string "change your mind, I'll be waiting for in\l"
	.string "this very place.)$"

Vikkie2::
# 1087 "data/maps/TheIronairB2F/scripts.pory"
	.string "No...$"

Ulrich1::
# 1091 "data/maps/TheIronairB2F/scripts.pory"
	.string "...Yeah.$"
