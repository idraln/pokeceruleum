# 1 "data/maps/SapphireCity_Airport/scripts.pory"

# 2 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_MapScripts::
# 3 "data/maps/SapphireCity_Airport/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SapphireCity_Airport_OnFrame
# 4 "data/maps/SapphireCity_Airport/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, SapphireCity_Airport_OnTransition
# 5 "data/maps/SapphireCity_Airport/scripts.pory"
	.byte 0
# 6 "data/maps/SapphireCity_Airport/scripts.pory"

# 7 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_OnFrame:
# 8 "data/maps/SapphireCity_Airport/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 7, SapphireCity_Airport_Arrival
# 9 "data/maps/SapphireCity_Airport/scripts.pory"
    .2byte 0

SapphireCity_Airport_OnTransition::
# 13 "data/maps/SapphireCity_Airport/scripts.pory"
	setrespawn HEAL_LOCATION_SAPPHIRE_CITY
# 14 "data/maps/SapphireCity_Airport/scripts.pory"
	goto_if_set FLAG_AIRPORT_GUARDS, SapphireCity_Airport_OnTransition_2
SapphireCity_Airport_OnTransition_1:
	end

SapphireCity_Airport_OnTransition_2:
# 15 "data/maps/SapphireCity_Airport/scripts.pory"
	addobject 12
# 16 "data/maps/SapphireCity_Airport/scripts.pory"
	addobject 13
# 17 "data/maps/SapphireCity_Airport/scripts.pory"
	setobjectxyperm 12, 3, 9
# 18 "data/maps/SapphireCity_Airport/scripts.pory"
	setobjectxyperm 13, 4, 9
# 19 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 12, DIR_SOUTH
# 20 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 13, DIR_SOUTH
	goto SapphireCity_Airport_OnTransition_1


SapphireCity_Airport_Arrival::
# 26 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 27 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SCA_Arr
# 28 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SCA_Arr
# 29 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 30 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SCA_Left
# 31 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SCA_Right
# 32 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 33 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 12, SCA_GuardLeft
# 34 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 13, SCA_GuardRight
# 35 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 36 "data/maps/SapphireCity_Airport/scripts.pory"
	setobjectxyperm 12, 3, 9
# 37 "data/maps/SapphireCity_Airport/scripts.pory"
	setobjectxyperm 13, 4, 9
# 38 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 39 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_1
# 40 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 41 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_2
# 42 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 43 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_3
# 44 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 45 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_2
# 46 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 47 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_4
# 48 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 49 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_2
# 50 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 51 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_5
# 52 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 53 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_2
# 54 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 55 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_6
# 56 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 57 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 58 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SapphireCity_Airport_Arrival_Movement_0
# 59 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 60 "data/maps/SapphireCity_Airport/scripts.pory"
	delay 20
# 61 "data/maps/SapphireCity_Airport/scripts.pory"
	playse SE_PIN
# 62 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SapphireCity_Airport_Arrival_Movement_1
# 63 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 64 "data/maps/SapphireCity_Airport/scripts.pory"
	delay 40
# 65 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SapphireCity_Airport_Arrival_Movement_2
# 66 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 67 "data/maps/SapphireCity_Airport/scripts.pory"
	namebox SapphireCity_Airport_Arrival_Text_0
# 68 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_7
# 69 "data/maps/SapphireCity_Airport/scripts.pory"
	hidenamebox
# 70 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 71 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 14, SCA_Leaving
# 72 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 73 "data/maps/SapphireCity_Airport/scripts.pory"
	removeobject 14
# 74 "data/maps/SapphireCity_Airport/scripts.pory"
	delay 20
# 75 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Arrival_Text_8
# 76 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 77 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_DIANCIE_POST
# 78 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_BRUCE_DIANCIE
# 79 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SYS_PHONE_GET
# 80 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 81 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_ENABLE_SAM_POKENAV
# 82 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_AIRPORT_GUARDS
# 83 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SAM_AIRPORT
# 84 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SAPPHIRE_STEVE_H
# 85 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SAPPHIRE_NERD_2
# 86 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SAM_PEBBLE
# 87 "data/maps/SapphireCity_Airport/scripts.pory"
	clearflag FLAG_BLACKSTONE_NPC
# 88 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_BLACKSTONE_TRAINERS
# 89 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_MAIN_STORY, 8
# 90 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_SAPPHIRE_LOVERS, 0
# 91 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_SAPPHIRE_NERD, 0
# 92 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_BRUCE_GUARDING_DIANCIE
# 93 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_HERMIT_JANGALA
# 94 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_TRAINERS_TRIATHLON
# 95 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_SHOP_UPDATE, 0
# 96 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_HOUSE_GLASVILLE, 0
# 97 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_TRIATHLON_NPC
# 98 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_TRIATHLON_CEREMONY
# 99 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_TRIATHLON, 0
# 100 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_DISAPPEARANCE, 0
# 101 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_PRESIDENT, 0
# 102 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_SAM_VIKKELSON
# 103 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_CALI_KID
# 104 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_NATU_EGG_LEAGUE
# 105 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_100_PERCENT, 0
# 106 "data/maps/SapphireCity_Airport/scripts.pory"
	setrespawn MAP_SAPPHIRE_CITY
# 107 "data/maps/SapphireCity_Airport/scripts.pory"
	startquest QUEST_FIND_XATU
# 108 "data/maps/SapphireCity_Airport/scripts.pory"
	startquest QUEST_EMBLEMS
# 109 "data/maps/SapphireCity_Airport/scripts.pory"
	startquest QUEST_HOME
# 110 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_SmallInfoBoard1::
# 115 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 116 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 117 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_SmallInfoBoard1_Text_0
# 118 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_SmallInfoBoard2::
# 123 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 124 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 125 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_SmallInfoBoard2_Text_0
# 126 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_BigInfoBoard::
# 131 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 132 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 133 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_BigInfoBoard_Text_0
# 134 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Rocket::
# 139 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 140 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 141 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Rocket_Text_0
# 142 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Sapphire::
# 147 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 148 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 149 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Sapphire_Text_0
# 150 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Girl::
# 155 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 156 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 157 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Girl_Text_0
# 158 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Beauty::
# 163 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 164 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 165 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Beauty_Text_0
# 166 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 167 "data/maps/SapphireCity_Airport/scripts.pory"
	turnobject 4, DIR_NORTH
# 168 "data/maps/SapphireCity_Airport/scripts.pory"
	delay 20
# 169 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Beauty_Text_1
# 170 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_PissMan::
# 175 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 176 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 177 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_PissMan_Text_0
# 178 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Woman::
# 183 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 184 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 185 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Woman_Text_0
# 186 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Nerd::
# 191 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 192 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 193 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Nerd_Text_0
# 194 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 195 "data/maps/SapphireCity_Airport/scripts.pory"
	turnobject 8, DIR_NORTH
# 196 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_GuardDep::
# 201 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 202 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 203 "data/maps/SapphireCity_Airport/scripts.pory"
	checkitem ITEM_EON_TICKET
# 204 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SapphireCity_Airport_GuardDep_1
# 233 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardDep_Text_3
# 234 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 235 "data/maps/SapphireCity_Airport/scripts.pory"
	turnobject 10, DIR_SOUTH
# 236 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end

SapphireCity_Airport_GuardDep_1:
# 205 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardDep_Text_0, MSGBOX_YESNO
# 206 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Airport_GuardDep_4
# 227 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardDep_Text_2
# 228 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end

SapphireCity_Airport_GuardDep_4:
# 207 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardDep_Text_1
# 208 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 209 "data/maps/SapphireCity_Airport/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 210 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq SapphireCity_Airport_GuardDep_8
SapphireCity_Airport_GuardDep_7:
# 214 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement 10, SapphireCity_Airport_GuardDep_Movement_1
# 215 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 216 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SapphireCity_Airport_GuardDep_Movement_2
# 217 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
# 218 "data/maps/SapphireCity_Airport/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/SapphireCity_Airport/scripts.pory"
	playse SE_TRUCK_MOVE
# 220 "data/maps/SapphireCity_Airport/scripts.pory"
	delay 60
# 221 "data/maps/SapphireCity_Airport/scripts.pory"
	playse SE_TRUCK_STOP
# 222 "data/maps/SapphireCity_Airport/scripts.pory"
	setflag FLAG_CANT_FLY
# 223 "data/maps/SapphireCity_Airport/scripts.pory"
	setrespawn HEAL_LOCATION_MISTRALTON_CITY
# 224 "data/maps/SapphireCity_Airport/scripts.pory"
	warpsilent MAP_MISTRALTON_CITY, 8, 20
	return

SapphireCity_Airport_GuardDep_8:
# 211 "data/maps/SapphireCity_Airport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SapphireCity_Airport_GuardDep_Movement_0
# 212 "data/maps/SapphireCity_Airport/scripts.pory"
	waitmovement 0
	goto SapphireCity_Airport_GuardDep_7


SapphireCity_Airport_GuardDep2::
# 243 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 244 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardDep2_Text_0
# 245 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 246 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_GuardArr::
# 251 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 252 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 253 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_GuardArr_Text_0
# 254 "data/maps/SapphireCity_Airport/scripts.pory"
	closemessage
# 255 "data/maps/SapphireCity_Airport/scripts.pory"
	turnobject 12, DIR_SOUTH
# 256 "data/maps/SapphireCity_Airport/scripts.pory"
	turnobject 13, DIR_SOUTH
# 257 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Boy::
# 262 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 263 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 264 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Boy_Text_0
# 265 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_SchoolBoy::
# 270 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 271 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 272 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_SchoolBoy_Text_0
# 273 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


SapphireCity_Airport_Receptionist::
# 278 "data/maps/SapphireCity_Airport/scripts.pory"
	lock
# 279 "data/maps/SapphireCity_Airport/scripts.pory"
	faceplayer
# 280 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_MAIN_STORY, 50
	goto_if_eq SapphireCity_Airport_Receptionist_1
# 285 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_MAIN_STORY, 49
	goto_if_eq SapphireCity_Airport_Receptionist_2
# 302 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_4
# 303 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end

SapphireCity_Airport_Receptionist_1:
# 281 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_0
# 282 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end

SapphireCity_Airport_Receptionist_2:
# 286 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_1, MSGBOX_YESNO
# 287 "data/maps/SapphireCity_Airport/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Airport_Receptionist_6
# 296 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_3
# 297 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end

SapphireCity_Airport_Receptionist_6:
# 288 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_2
# 289 "data/maps/SapphireCity_Airport/scripts.pory"
	giveitem ITEM_EON_TICKET
# 290 "data/maps/SapphireCity_Airport/scripts.pory"
	msgbox SapphireCity_Airport_Receptionist_Text_0
# 291 "data/maps/SapphireCity_Airport/scripts.pory"
	setvar VAR_MAIN_STORY, 50
# 292 "data/maps/SapphireCity_Airport/scripts.pory"
	release
	end


# 308 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_Arr:
# 309 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 309 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
	step_end

# 312 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_Left:
# 313 "data/maps/SapphireCity_Airport/scripts.pory"
	face_left
	step_end

# 316 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_Right:
# 317 "data/maps/SapphireCity_Airport/scripts.pory"
	face_right
	step_end

# 320 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_Leaving:
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 321 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
	step_end

# 324 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_GuardLeft:
# 325 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_right
# 326 "data/maps/SapphireCity_Airport/scripts.pory"
	face_down
	step_end

# 329 "data/maps/SapphireCity_Airport/scripts.pory"
SCA_GuardRight:
# 330 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_left
# 331 "data/maps/SapphireCity_Airport/scripts.pory"
	face_down
	step_end

# 58 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_Arrival_Movement_0:
# 58 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 58 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 58 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_Arrival_Movement_1:
# 62 "data/maps/SapphireCity_Airport/scripts.pory"
	emote_exclamation_mark
	step_end

# 65 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_Arrival_Movement_2:
# 65 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_up
# 65 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_up
# 65 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_up
# 65 "data/maps/SapphireCity_Airport/scripts.pory"
	face_left
	step_end

# 211 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_GuardDep_Movement_0:
# 211 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_down
# 211 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_right
# 211 "data/maps/SapphireCity_Airport/scripts.pory"
	face_up
	step_end

# 214 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_GuardDep_Movement_1:
# 214 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_left
# 214 "data/maps/SapphireCity_Airport/scripts.pory"
	face_right
	step_end

# 216 "data/maps/SapphireCity_Airport/scripts.pory"
SapphireCity_Airport_GuardDep_Movement_2:
# 216 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_up
# 216 "data/maps/SapphireCity_Airport/scripts.pory"
	walk_up
	step_end

SapphireCity_Airport_Arrival_Text_0:
# 38 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Sam$"

SapphireCity_Airport_Arrival_Text_1:
# 39 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Alright, there we are! The big city!\n"
	.string "Sapphire City!$"

SapphireCity_Airport_Arrival_Text_2:
# 41 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "...$"

SapphireCity_Airport_Arrival_Text_3:
# 43 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Come on, keep your head up. I'm sure\n"
	.string "your Pokémon is doing just fine!$"

SapphireCity_Airport_Arrival_Text_4:
# 47 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "I have something else to cheer you up,\n"
	.string "hear this: I booked us an apartment!\l"
	.string "It's on the first floor of the building\l"
	.string "number 2! Yeah, yeah, you're welcome,\l"
	.string "hehe.$"

SapphireCity_Airport_Arrival_Text_5:
# 51 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "How did I afford the flight and now the\n"
	.string "flat? Ok, don't freak out, but I sold my\l"
	.string "boat to some guy back in Rocheval. You\l"
	.string "made me realise my true self! I want to\l"
	.string "become a professionnal trainer, just\l"
	.string "like you. So, what better choice other\l"
	.string "than to sell everything I had and make\l"
	.string "a fresh start?$"

SapphireCity_Airport_Arrival_Text_6:
# 55 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Nah, don't worry, you don't need to\n"
	.string "repay me. Go and figure out what\l"
	.string "happened, and then come to the flat.\l"
	.string "Remember, it's on the first floor of the\l"
	.string "building number 2. Have fun!$"

SapphireCity_Airport_Arrival_Text_7:
# 68 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Wait! I just remembered. I had this old\n"
	.string "phone laying around at my place. You\l"
	.string "can take it, so that we can always stay\l"
	.string "in touch! It even has a neat PokéDex\l"
	.string "feature!$"

SapphireCity_Airport_Arrival_Text_8:
# 75 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "(The phone can now be accessed by the\n"
	.string "Start Menu.)$"

SapphireCity_Airport_SmallInfoBoard1_Text_0:
# 117 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Did you know? The first fully practical\n"
	.string "and controllable helicopter was\l"
	.string "created in 1936!$"

SapphireCity_Airport_SmallInfoBoard2_Text_0:
# 125 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Welcome to Sapphire City! Thura's heart,\n"
	.string "shining from its 20 shades of blue!$"

SapphireCity_Airport_BigInfoBoard_Text_0:
# 133 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Next departure: Mistralton City, Unova.$"

SapphireCity_Airport_Rocket_Text_0:
# 141 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "The Sapphire expedition\n"
	.string "Back in 1973, a team of scientists from\l"
	.string "Sapphire City went on to successfully\l"
	.string "fly to and from the Moon, bringing pride\l"
	.string "and exposition from Thura to the world.$"

SapphireCity_Airport_Sapphire_Text_0:
# 149 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Replica of a Sapphire\n"
	.string "When on their expedition, the team of\l"
	.string "scientists made a groundbreaking\l"
	.string "discovery: unusually big sapphires were\l"
	.string "present on the Moon. Here is an example\l"
	.string "of what the team could find.\p"
	.string "DISCLAIMER: This is not a real\n"
	.string "Sapphire! Don't try and steal it!$"

SapphireCity_Airport_Girl_Text_0:
# 157 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "I'm not waiting for a flight, I just like\n"
	.string "hanging in airports. Look at how big\l"
	.string "this place is!$"

SapphireCity_Airport_Beauty_Text_0:
# 165 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "If I can't bring my three suitcases in\n"
	.string "the helicopter, then what's the meaning\l"
	.string "of all of this? I need all my stuff.\l"
	.string "Screw this, I'm not going.$"

SapphireCity_Airport_Beauty_Text_1:
# 169 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Come on guys, I'm sure we can work this\n"
	.string "out!$"

SapphireCity_Airport_PissMan_Text_0:
# 177 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "What kind of an airport is that? I need\n"
	.string "to pee! I can't find the restrooms! I\l"
	.string "can't hold it in anymore!$"

SapphireCity_Airport_Woman_Text_0:
# 185 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Do you think the sapphires were\n"
	.string "actually this big? This can't be...$"

SapphireCity_Airport_Nerd_Text_0:
# 193 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "What a great idea they had with the\n"
	.string "windows! Look at the view, it's pristine!$"

SapphireCity_Airport_GuardDep_Text_0:
# 205 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "The helicopter departs soon to\n"
	.string "Mistralton City. Would you like to\l"
	.string "embark?$"

SapphireCity_Airport_GuardDep_Text_1:
# 207 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Very well, then. Have a safe flight.$"

SapphireCity_Airport_GuardDep_Text_2:
# 227 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Come back later, then.$"

SapphireCity_Airport_GuardDep_Text_3:
# 233 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "I'm sorry, you can't access the tarmac\n"
	.string "without a ticket.$"

SapphireCity_Airport_GuardDep2_Text_0:
# 244 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Ma'am, I don't know what else to tell\n"
	.string "you. The helicopters have only so much\l"
	.string "room for suitcases.$"

SapphireCity_Airport_GuardArr_Text_0:
# 253 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Welcome to Sapphire City. We hope you\n"
	.string "enjoy your time here.$"

SapphireCity_Airport_Boy_Text_0:
# 264 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Did you know that Unova isn't actually\n"
	.string "that far from here? It's a really cool\l"
	.string "region; you should go there sometime.$"

SapphireCity_Airport_SchoolBoy_Text_0:
# 272 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "I'm afraid of escalators. But I also\n"
	.string "want to eat something at the\l"
	.string "restaurant, which is at the first floor!\l"
	.string "I'm going to die of either hunger or\l"
	.string "fear! I just wanna go home!$"

SapphireCity_Airport_Receptionist_Text_0:
# 281 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "We hope you have a safe flight with us!$"

SapphireCity_Airport_Receptionist_Text_1:
# 286 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Hi, welcome to Sapphire City's airport!\n"
	.string "Would you like to book a ticket to\l"
	.string "Mistralton City?$"

SapphireCity_Airport_Receptionist_Text_2:
# 288 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Alright, there you go!$"

SapphireCity_Airport_Receptionist_Text_3:
# 296 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "That's alright, come back later!$"

SapphireCity_Airport_Receptionist_Text_4:
# 302 "data/maps/SapphireCity_Airport/scripts.pory"
	.string "Hi, welcome to Sapphire City's airport!\n"
	.string "Unfortunately, the flight to Mistralton\l"
	.string "City is at capacity. You'll have to wait\l"
	.string "for the next one. Come back later!$"
