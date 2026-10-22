# 1 "data/maps/Cruzeira/scripts.pory"

# 2 "data/maps/Cruzeira/scripts.pory"
Cruzeira_MapScripts::
# 3 "data/maps/Cruzeira/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Cruzeira_OnTransition
# 4 "data/maps/Cruzeira/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Cruzeira_OnFrame
# 5 "data/maps/Cruzeira/scripts.pory"
	.byte 0
# 6 "data/maps/Cruzeira/scripts.pory"

# 7 "data/maps/Cruzeira/scripts.pory"
Cruzeira_OnFrame:
# 8 "data/maps/Cruzeira/scripts.pory"
    map_script_2 VAR_SHOP_UPDATE, 1, Cruzeira_ShopUpdate
# 9 "data/maps/Cruzeira/scripts.pory"
    .2byte 0

Cruzeira_OnTransition::
# 13 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_VISITED_CRUZEIRA
# 14 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 15 "data/maps/Cruzeira/scripts.pory"
	goto_if_set FLAG_GRUNT_POS_CRUZ, Cruzeira_OnTransition_2
Cruzeira_OnTransition_1:
	end

Cruzeira_OnTransition_2:
# 16 "data/maps/Cruzeira/scripts.pory"
	addobject 4
# 17 "data/maps/Cruzeira/scripts.pory"
	setobjectxyperm 4, 6, 13
	goto Cruzeira_OnTransition_1


Cruzeira_ShopUpdate::
# 23 "data/maps/Cruzeira/scripts.pory"
	lockall
# 24 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 25 "data/maps/Cruzeira/scripts.pory"
	pokenavcall Cruzeria_Shop_Text
# 26 "data/maps/Cruzeira/scripts.pory"
	waitmessage
# 27 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_SHOP_UPDATE, 2
# 28 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 29 "data/maps/Cruzeira/scripts.pory"
	releaseall
	end


Cruzeira_OldLady::
# 34 "data/maps/Cruzeira/scripts.pory"
	lock
# 35 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 36 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_OldLady_Text_0
# 37 "data/maps/Cruzeira/scripts.pory"
	release
	end


Cruzeira_Girl::
# 42 "data/maps/Cruzeira/scripts.pory"
	lock
# 43 "data/maps/Cruzeira/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 44 "data/maps/Cruzeira/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Cruzeira_Girl_3
Cruzeira_Girl_2:
# 56 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 57 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_Girl_Text_1
# 58 "data/maps/Cruzeira/scripts.pory"
	release
	end

Cruzeira_Girl_1:
# 45 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 46 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_Girl_Text_0
# 47 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 48 "data/maps/Cruzeira/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CruzFlowers
# 49 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 50 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_TEMP_0, 0
# 51 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_TEMP_1, 0
# 52 "data/maps/Cruzeira/scripts.pory"
	release
	end

Cruzeira_Girl_3:
# 44 "data/maps/Cruzeira/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq Cruzeira_Girl_1
	goto Cruzeira_Girl_2


Cruzeira_Boy::
# 64 "data/maps/Cruzeira/scripts.pory"
	lock
# 65 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 66 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_Boy_Text_0
# 67 "data/maps/Cruzeira/scripts.pory"
	release
	end


Cruzeira_Student::
# 72 "data/maps/Cruzeira/scripts.pory"
	lock
# 73 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 74 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_Student_Text_0
# 75 "data/maps/Cruzeira/scripts.pory"
	release
	end


Cruzeira_GymGrunt::
# 80 "data/maps/Cruzeira/scripts.pory"
	compare VAR_MAIN_STORY, 11
	goto_if_lt Cruzeira_GymGrunt_1
# 91 "data/maps/Cruzeira/scripts.pory"
	lock
# 92 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 93 "data/maps/Cruzeira/scripts.pory"
	namebox Cruzeira_GymGrunt_Text_0
# 94 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GymGrunt_Text_2
# 95 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 96 "data/maps/Cruzeira/scripts.pory"
	hidenamebox
# 97 "data/maps/Cruzeira/scripts.pory"
	delay 20
# 98 "data/maps/Cruzeira/scripts.pory"
	turnobject 4, DIR_NORTH
# 99 "data/maps/Cruzeira/scripts.pory"
	opendoor 6, 12
# 100 "data/maps/Cruzeira/scripts.pory"
	waitdooranim
# 101 "data/maps/Cruzeira/scripts.pory"
	applymovement 4, CruzGruntGym
# 102 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 103 "data/maps/Cruzeira/scripts.pory"
	removeobject 4
# 104 "data/maps/Cruzeira/scripts.pory"
	closedoor 6, 12
# 105 "data/maps/Cruzeira/scripts.pory"
	waitdooranim
# 106 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_GRUNT_CRUZEIRA
# 107 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_CRUZ_GYM_LAILA
# 108 "data/maps/Cruzeira/scripts.pory"
	release
	end

Cruzeira_GymGrunt_1:
# 81 "data/maps/Cruzeira/scripts.pory"
	lock
# 82 "data/maps/Cruzeira/scripts.pory"
	faceplayer
# 83 "data/maps/Cruzeira/scripts.pory"
	namebox Cruzeira_GymGrunt_Text_0
# 84 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GymGrunt_Text_1
# 85 "data/maps/Cruzeira/scripts.pory"
	hidenamebox
# 86 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 4
# 87 "data/maps/Cruzeira/scripts.pory"
	release
	end


Cruzeira_LailaSad::
# 115 "data/maps/Cruzeira/scripts.pory"
	lock
# 116 "data/maps/Cruzeira/scripts.pory"
	opendoor 6, 12
# 117 "data/maps/Cruzeira/scripts.pory"
	waitdooranim
# 118 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_LAILA_STORMING
# 119 "data/maps/Cruzeira/scripts.pory"
	addobject 5
# 120 "data/maps/Cruzeira/scripts.pory"
	applymovement 5, CruzLailaStorming
# 121 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 122 "data/maps/Cruzeira/scripts.pory"
	removeobject 5
# 123 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_LAILA_STORMING
# 124 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_GRUNT_CRUZEIRA
# 125 "data/maps/Cruzeira/scripts.pory"
	addobject 4
# 126 "data/maps/Cruzeira/scripts.pory"
	applymovement 4, CruzGrunt
# 127 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 128 "data/maps/Cruzeira/scripts.pory"
	namebox Cruzeira_GymGrunt_Text_0
# 129 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_LailaSad_Text_0
# 130 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 131 "data/maps/Cruzeira/scripts.pory"
	hidenamebox
# 132 "data/maps/Cruzeira/scripts.pory"
	applymovement 4, CruzGuard
# 133 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 134 "data/maps/Cruzeira/scripts.pory"
	closedoor 6, 12
# 135 "data/maps/Cruzeira/scripts.pory"
	waitdooranim
# 136 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_GRUNT_POS_CRUZ
# 137 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_GRANDMA_CRUZ
# 138 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 3
# 139 "data/maps/Cruzeira/scripts.pory"
	release
	end


Cruzeira_Grandma::
# 144 "data/maps/Cruzeira/scripts.pory"
	lock
# 145 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_LAILA_GRANDMA
# 146 "data/maps/Cruzeira/scripts.pory"
	addobject 6
# 147 "data/maps/Cruzeira/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 148 "data/maps/Cruzeira/scripts.pory"
	compare VAR_TEMP_3, 13
	goto_if_eq Cruzeira_Grandma_2
# 162 "data/maps/Cruzeira/scripts.pory"
	compare VAR_TEMP_3, 14
	goto_if_eq Cruzeira_Grandma_3
# 176 "data/maps/Cruzeira/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq Cruzeira_Grandma_4
Cruzeira_Grandma_1:
# 188 "data/maps/Cruzeira/scripts.pory"
	startquest QUEST_INTRUDER
# 189 "data/maps/Cruzeira/scripts.pory"
	release
	end

Cruzeira_Grandma_2:
# 149 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM13
# 150 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 151 "data/maps/Cruzeira/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CruzPlayerDown
# 152 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 153 "data/maps/Cruzeira/scripts.pory"
	call Cruzeira_GrandmaSpeaks
# 154 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM13Leave
# 155 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 156 "data/maps/Cruzeira/scripts.pory"
	removeobject 6
# 157 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_LAILA_GRANDMA
# 158 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_GRANDMA_CRUZ
# 159 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 5
# 160 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_MAIN_STORY, 11
	goto Cruzeira_Grandma_1

Cruzeira_Grandma_3:
# 163 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM14
# 164 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 165 "data/maps/Cruzeira/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CruzPlayerDown
# 166 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 167 "data/maps/Cruzeira/scripts.pory"
	call Cruzeira_GrandmaSpeaks
# 168 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM14Leave
# 169 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 170 "data/maps/Cruzeira/scripts.pory"
	removeobject 6
# 171 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_LAILA_GRANDMA
# 172 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_GRANDMA_CRUZ
# 173 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 5
# 174 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_MAIN_STORY, 11
	goto Cruzeira_Grandma_1

Cruzeira_Grandma_4:
# 177 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM15
# 178 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 179 "data/maps/Cruzeira/scripts.pory"
	call Cruzeira_GrandmaSpeaks
# 180 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGM15Leave
# 181 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 182 "data/maps/Cruzeira/scripts.pory"
	removeobject 6
# 183 "data/maps/Cruzeira/scripts.pory"
	setflag FLAG_LAILA_GRANDMA
# 184 "data/maps/Cruzeira/scripts.pory"
	clearflag FLAG_GRANDMA_CRUZ
# 185 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 5
# 186 "data/maps/Cruzeira/scripts.pory"
	setvar VAR_MAIN_STORY, 11
	goto Cruzeira_Grandma_1


Cruzeira_GrandmaSpeaks::
# 194 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_0
# 195 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_1
# 196 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_2
# 197 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_1
# 198 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 199 "data/maps/Cruzeira/scripts.pory"
	playse SE_PIN
# 200 "data/maps/Cruzeira/scripts.pory"
	applymovement 6, CruzGMExclamation
# 201 "data/maps/Cruzeira/scripts.pory"
	waitmovement 0
# 202 "data/maps/Cruzeira/scripts.pory"
	delay 20
# 203 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_3
# 204 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_1
# 205 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_4
# 206 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 207 "data/maps/Cruzeira/scripts.pory"
	turnobject 6, DIR_WEST
# 208 "data/maps/Cruzeira/scripts.pory"
	delay 20
# 209 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_5
# 210 "data/maps/Cruzeira/scripts.pory"
	closemessage
# 211 "data/maps/Cruzeira/scripts.pory"
	turnobject 6, DIR_NORTH
# 212 "data/maps/Cruzeira/scripts.pory"
	delay 20
# 213 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_GrandmaSpeaks_Text_6
# 214 "data/maps/Cruzeira/scripts.pory"
	closemessage
	return


Cruzeira_TownSign::
# 218 "data/maps/Cruzeira/scripts.pory"
	lockall
# 219 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_TownSign_Text_0
# 220 "data/maps/Cruzeira/scripts.pory"
	releaseall
	return


Cruzeira_BotanicSign::
# 224 "data/maps/Cruzeira/scripts.pory"
	lockall
# 225 "data/maps/Cruzeira/scripts.pory"
	msgbox Cruzeira_BotanicSign_Text_0
# 226 "data/maps/Cruzeira/scripts.pory"
	releaseall
	return


# 244 "data/maps/Cruzeira/scripts.pory"
CruzFlowers:
# 245 "data/maps/Cruzeira/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/Cruzeira/scripts.pory"
CruzLailaStorming:
# 249 "data/maps/Cruzeira/scripts.pory"
	walk_down
# 249 "data/maps/Cruzeira/scripts.pory"
	walk_down
# 250 "data/maps/Cruzeira/scripts.pory"
	face_up
# 251 "data/maps/Cruzeira/scripts.pory"
	delay_8
# 251 "data/maps/Cruzeira/scripts.pory"
	delay_8
# 251 "data/maps/Cruzeira/scripts.pory"
	delay_8
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 252 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 253 "data/maps/Cruzeira/scripts.pory"
	walk_fast_down
# 253 "data/maps/Cruzeira/scripts.pory"
	walk_fast_down
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
# 254 "data/maps/Cruzeira/scripts.pory"
	walk_fast_right
	step_end

# 257 "data/maps/Cruzeira/scripts.pory"
CruzGrunt:
# 258 "data/maps/Cruzeira/scripts.pory"
	walk_down
# 258 "data/maps/Cruzeira/scripts.pory"
	walk_down
# 259 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 259 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 259 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 259 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 259 "data/maps/Cruzeira/scripts.pory"
	walk_right
	step_end

# 262 "data/maps/Cruzeira/scripts.pory"
CruzGuard:
# 263 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 263 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 263 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 263 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 263 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 264 "data/maps/Cruzeira/scripts.pory"
	walk_up
# 265 "data/maps/Cruzeira/scripts.pory"
	face_down
	step_end

# 268 "data/maps/Cruzeira/scripts.pory"
CruzGM13:
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 269 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 270 "data/maps/Cruzeira/scripts.pory"
	walk_up
	step_end

# 273 "data/maps/Cruzeira/scripts.pory"
CruzGM14:
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 274 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 275 "data/maps/Cruzeira/scripts.pory"
	face_up
	step_end

# 278 "data/maps/Cruzeira/scripts.pory"
CruzGM15:
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
# 279 "data/maps/Cruzeira/scripts.pory"
	walk_left
	step_end

# 282 "data/maps/Cruzeira/scripts.pory"
CruzGM13Leave:
# 283 "data/maps/Cruzeira/scripts.pory"
	walk_down
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 284 "data/maps/Cruzeira/scripts.pory"
	walk_right
	step_end

# 287 "data/maps/Cruzeira/scripts.pory"
CruzGM14Leave:
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 288 "data/maps/Cruzeira/scripts.pory"
	walk_right
	step_end

# 291 "data/maps/Cruzeira/scripts.pory"
CruzGM15Leave:
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
# 292 "data/maps/Cruzeira/scripts.pory"
	walk_right
	step_end

# 296 "data/maps/Cruzeira/scripts.pory"
CruzPlayerDown:
# 297 "data/maps/Cruzeira/scripts.pory"
	face_down
	step_end

# 300 "data/maps/Cruzeira/scripts.pory"
CruzGMExclamation:
# 301 "data/maps/Cruzeira/scripts.pory"
	emote_exclamation_mark
	step_end

# 304 "data/maps/Cruzeira/scripts.pory"
CruzGruntGym:
# 305 "data/maps/Cruzeira/scripts.pory"
	face_up
# 306 "data/maps/Cruzeira/scripts.pory"
	walk_up
	step_end

Cruzeira_OldLady_Text_0:
# 36 "data/maps/Cruzeira/scripts.pory"
	.string "The life here is everything you could\n"
	.string "ask for: tranquility, nature, and\l"
	.string "respectful people. Perfect for an old\l"
	.string "soul like mine!$"

Cruzeira_Girl_Text_0:
# 46 "data/maps/Cruzeira/scripts.pory"
	.string "Watch out! You're stepping on the\n"
	.string "flowers!!$"

Cruzeira_Girl_Text_1:
# 57 "data/maps/Cruzeira/scripts.pory"
	.string "Look at these flowers! So pretty! How\n"
	.string "do they exist? I want to go to the\l"
	.string "botanic school, but they say I'm too\l"
	.string "young.$"

Cruzeira_Boy_Text_0:
# 66 "data/maps/Cruzeira/scripts.pory"
	.string "Here is the botanic school. If you want\n"
	.string "to learn everything about plants, from\l"
	.string "flowers to trees, this is the place to\l"
	.string "be.$"

Cruzeira_Student_Text_0:
# 74 "data/maps/Cruzeira/scripts.pory"
	.string "I'm on flower counting duty! It's a long\n"
	.string "process, but a very fulfilling one. You\l"
	.string "get to see all sorts of species!$"

Cruzeira_GymGrunt_Text_0:
# 83 "data/maps/Cruzeira/scripts.pory"
	.string "???$"

Cruzeira_GymGrunt_Text_1:
# 84 "data/maps/Cruzeira/scripts.pory"
	.string "What do you want? Don't you see? The\n"
	.string "gym is closed. Go play somewhere else\l"
	.string "before I kick your ass.$"

Cruzeira_GymGrunt_Text_2:
# 94 "data/maps/Cruzeira/scripts.pory"
	.string "Huh? What's that? Ooooh, isn't this\n"
	.string "cute! You want to avenge the girl! Is\l"
	.string "she your lover? Haha. Either way, I'll\l"
	.string "make you regret bothering me. Come\l"
	.string "inside, and try me.$"

Cruzeira_LailaSad_Text_0:
# 129 "data/maps/Cruzeira/scripts.pory"
	.string "You call yourself a Council member? With\n"
	.string "those battle skills? Hah, you're\l"
	.string "pathetic! Go cry somewhere else!$"

Cruzeira_GrandmaSpeaks_Text_0:
# 194 "data/maps/Cruzeira/scripts.pory"
	.string "Hello, young one. Sorry to bother you,\n"
	.string "but you look like a trainer, am I\l"
	.string "mistaken?$"

Cruzeira_GrandmaSpeaks_Text_1:
# 195 "data/maps/Cruzeira/scripts.pory"
	.string "...$"

Cruzeira_GrandmaSpeaks_Text_2:
# 196 "data/maps/Cruzeira/scripts.pory"
	.string "Very well. See, my granddaughter, Laila,\n"
	.string "was just appointed as a member of the\l"
	.string "Council. She's not a seasoned trainer;\l"
	.string "in fact, she just began her career, as\l"
	.string "the previous Council member, my\l"
	.string "daughter, went on to the Pokémon\l"
	.string "League due to the recent events.$"

Cruzeira_GrandmaSpeaks_Text_3:
# 203 "data/maps/Cruzeira/scripts.pory"
	.string "You were going to face the President as\n"
	.string "the said events occured, you say? Hoho,\l"
	.string "I knew you reminded me of someone!$"

Cruzeira_GrandmaSpeaks_Text_4:
# 205 "data/maps/Cruzeira/scripts.pory"
	.string "Well, this makes things much easier. As I\n"
	.string "said, my poor Laila, she's still a novice.\l"
	.string "And some ill-minded people...$"

Cruzeira_GrandmaSpeaks_Text_5:
# 209 "data/maps/Cruzeira/scripts.pory"
	.string "...took the gym hostage and chased her\n"
	.string "away.$"

Cruzeira_GrandmaSpeaks_Text_6:
# 213 "data/maps/Cruzeira/scripts.pory"
	.string "Please, could you do something? I'm old,\n"
	.string "and can't fight as I used to. In the\l"
	.string "meantime, I will try to confort her.\l"
	.string "Please, once you have done the deed,\l"
	.string "come by my house. It's the second one\l"
	.string "to the left.$"

Cruzeira_TownSign_Text_0:
# 219 "data/maps/Cruzeira/scripts.pory"
	.string "Cruzeira \nThe green heart of Thura.$"

Cruzeira_BotanicSign_Text_0:
# 225 "data/maps/Cruzeira/scripts.pory"
	.string "Cruzeira's Botanic School$"

Cruzeria_Shop_Text::
# 229 "data/maps/Cruzeira/scripts.pory"
	.string "You just received a new\n"
	.string "text message from:\l"
	.string "Thura's Mart Association\l"
	.string "'Hello, dear customer!\l"
	.string "We'd like to inform you\l"
	.string "that our stores are evolving!\l"
	.string "Our selection is expanding to\l"
	.string "include all-new products,\l"
	.string "such as Super Potions,\l"
	.string "Great Balls, and much more!\l"
	.string "Come by and see by yourself!'$"
