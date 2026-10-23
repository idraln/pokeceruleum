# 1 "data/maps/Cruzeira_BotanicSchool/scripts.pory"

# 2 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
Cruzeira_BotanicSchool_MapScripts::
# 3 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.byte 0

Cruzeira_BotanicSchool_Teacher1::
# 7 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 8 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 9 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_POKEDEX_COMPLETED, Cruzeira_BotanicSchool_Teacher1_1
# 32 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_QUEST_POKEDEX, Cruzeira_BotanicSchool_Teacher1_2
# 72 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_10
# 73 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	startquest QUEST_POKEDEX
# 74 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_QUEST_POKEDEX
# 75 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_1:
# 10 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	gettimeofday
# 11 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Cruzeira_BotanicSchool_Teacher1_6
# 16 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Cruzeira_BotanicSchool_Teacher1_7
# 21 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_0x8000, 2
	goto_if_eq Cruzeira_BotanicSchool_Teacher1_8
# 27 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_3
# 28 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_2:
# 33 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_4, MSGBOX_YESNO
# 34 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Cruzeira_BotanicSchool_Teacher1_13
# 66 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_9
# 67 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_6:
# 12 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_0
# 13 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_7:
# 17 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_1
# 18 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_8:
# 22 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_2
# 23 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_13:
# 35 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_5
# 36 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 37 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	playse SE_POKENAV_ON
# 38 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 20
# 39 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 40 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 40
# 41 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Cruzeira_BotanicSchool_Teacher1_16
# 58 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	playse SE_POKENAV_OFF
# 59 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 20
# 60 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_8
# 61 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher1_16:
# 42 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_6
# 43 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 44 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 20
# 45 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	playse SE_POKENAV_OFF
# 46 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 20
# 47 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher1_Text_7
# 48 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 49 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	completequest QUEST_POKEDEX
# 50 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_POKEDEX_COMPLETED
# 51 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	clearflag FLAG_QUEST_POKEDEX
# 52 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special Special_ShowDiploma
# 53 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitstate
# 54 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student1::
# 81 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 82 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student1_Text_0
# 83 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student2::
# 88 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 89 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 90 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student2_Text_0
# 91 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 10, DIR_WEST
# 92 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student3::
# 97 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 98 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 99 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student3_Text_0
# 100 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student4::
# 105 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 106 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student4_Text_0
# 107 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Son::
# 112 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 113 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 114 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Son_Text_0
# 115 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Daughter::
# 120 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 121 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Daughter_Text_0
# 122 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student5::
# 127 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 128 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 129 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student5_Text_0
# 130 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 13, DIR_WEST
# 131 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Mom::
# 136 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 137 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 138 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Mom_Text_0
# 139 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Dad::
# 144 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 145 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 146 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Dad_Text_0
# 147 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmessage
# 148 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	pokemart Cruzeira_BotanicSchool_Mart
# 149 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Dad_Text_1
# 150 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


	.align 2
# 154 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
Cruzeira_BotanicSchool_Mart:
# 155 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 156 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 157 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 158 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 159 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 160 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 161 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_LAX_MINT
# 162 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 163 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 164 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_MILD_MINT
# 165 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_RASH_MINT
# 166 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 167 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_CALM_MINT
# 168 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 169 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 170 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 171 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 172 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 173 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 174 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NONE

Cruzeira_BotanicSchool_Student6::
# 178 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 179 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 180 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student6_Text_0
# 181 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student7::
# 186 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 187 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student7_Text_0
# 188 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student8::
# 193 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 194 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 195 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student8_Text_0
# 196 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Student9::
# 201 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 202 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 203 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_BOT_STUDENTS, Cruzeira_BotanicSchool_Student9_1
# 209 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student9_Text_1
# 210 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Student9_1:
# 204 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Student9_Text_0
# 205 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Teacher2::
# 216 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 217 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	faceplayer
# 218 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_BOT_HOMEWORK, Cruzeira_BotanicSchool_Teacher2_1
# 224 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_BOT_STUDENTS, Cruzeira_BotanicSchool_Teacher2_2
# 253 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_8
# 254 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 255 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	multichoice 0, 8, MULTI_BOTANIC, FALSE
# 256 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	switch VAR_RESULT
# 257 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	case 0, Cruzeira_BotanicSchool_Teacher2_10
# 360 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	case 1, Cruzeira_BotanicSchool_Teacher2_11
	return

Cruzeira_BotanicSchool_Teacher2_1:
# 219 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_0
# 220 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 5, DIR_NORTH
# 221 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_2:
# 225 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_1, MSGBOX_YESNO
# 226 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_6
# 247 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_7
# 248 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_6:
# 227 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_2
# 228 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	checkitem ITEM_FLOWER_SWEET, 3
# 229 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_12
# 240 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 241 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_6
# 242 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_10:
# 258 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_9
# 259 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 260 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_15
# 310 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_16
	return

Cruzeira_BotanicSchool_Teacher2_11:
# 361 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_15
# 362 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 363 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_19
# 413 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Cruzeira_BotanicSchool_Teacher2_20
	return

Cruzeira_BotanicSchool_Teacher2_12:
# 230 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 231 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_4
# 232 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 233 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_5
# 234 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	completequest QUEST_ASSIGNMENT
# 235 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_BOT_HOMEWORK
# 236 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_15:
# 261 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Botanic18
# 262 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 263 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher
# 264 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 265 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special SpawnCameraObject
# 266 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher
# 267 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 268 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 269 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_10
# 270 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 271 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamClass
# 272 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 273 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 274 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_EAST
# 275 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_WEST
# 276 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_11
# 277 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 278 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_WEST
# 279 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_EAST
# 280 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_12
# 281 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 282 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 283 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_NORTH
# 284 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_NORTH
# 285 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_NORTH
# 286 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher2
# 287 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 288 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_13
# 289 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 290 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher2
# 291 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicTeacher2
# 292 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 293 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_14
# 294 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 295 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 7, BotanicStudent6
# 296 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 4, BotanicStudent7
# 297 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 8, BotanicStudent8
# 298 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 299 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 7
# 300 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 4
# 301 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 8
# 302 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_BOT_STUDENTS
# 303 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamPlayer
# 304 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 305 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special RemoveCameraObject
# 306 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	startquest QUEST_ASSIGNMENT
# 307 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_16:
# 311 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Botanic20
# 312 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 313 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher
# 314 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 315 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special SpawnCameraObject
# 316 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher
# 317 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 318 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 319 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_10
# 320 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 321 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamClass
# 322 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 323 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 324 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_EAST
# 325 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_WEST
# 326 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_11
# 327 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 328 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_WEST
# 329 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_EAST
# 330 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_12
# 331 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 332 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 333 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_NORTH
# 334 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_NORTH
# 335 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_NORTH
# 336 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher2
# 337 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 338 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_13
# 339 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 340 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher2
# 341 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicTeacher2
# 342 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 343 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_14
# 344 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 345 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 7, BotanicStudent6
# 346 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 4, BotanicStudent7
# 347 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 8, BotanicStudent8
# 348 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 349 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 7
# 350 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 4
# 351 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 8
# 352 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_BOT_STUDENTS
# 353 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamPlayer
# 354 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 355 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special RemoveCameraObject
# 356 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	startquest QUEST_ASSIGNMENT
# 357 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_19:
# 364 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Botanic18
# 365 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 366 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher
# 367 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 368 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special SpawnCameraObject
# 369 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher
# 370 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 371 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 372 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_10
# 373 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 374 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamClass
# 375 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 376 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 377 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_EAST
# 378 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_WEST
# 379 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_11
# 380 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 381 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_WEST
# 382 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_EAST
# 383 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_12
# 384 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 385 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 386 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_NORTH
# 387 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_NORTH
# 388 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_NORTH
# 389 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher2
# 390 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 391 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_13
# 392 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 393 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher2
# 394 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicTeacher2
# 395 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 396 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_14
# 397 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 398 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 7, BotanicStudent6
# 399 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 4, BotanicStudent7
# 400 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 8, BotanicStudent8
# 401 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 402 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 7
# 403 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 4
# 404 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 8
# 405 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_BOT_STUDENTS
# 406 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamPlayer
# 407 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 408 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special RemoveCameraObject
# 409 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	startquest QUEST_ASSIGNMENT
# 410 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Teacher2_20:
# 414 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Botanic20
# 415 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 416 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher
# 417 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 418 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special SpawnCameraObject
# 419 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher
# 420 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 421 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 422 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_10
# 423 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 424 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamClass
# 425 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 426 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_3
# 427 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_EAST
# 428 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_WEST
# 429 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_11
# 430 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 431 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_WEST
# 432 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_EAST
# 433 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_12
# 434 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay 10
# 435 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 436 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 8, DIR_NORTH
# 437 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 7, DIR_NORTH
# 438 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	turnobject 4, DIR_NORTH
# 439 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamTeacher2
# 440 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 441 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_13
# 442 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 443 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 5, BotanicTeacher2
# 444 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicTeacher2
# 445 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 446 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Teacher2_Text_14
# 447 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	closemessage
# 448 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 7, BotanicStudent6
# 449 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 4, BotanicStudent7
# 450 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement 8, BotanicStudent8
# 451 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 452 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 7
# 453 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 4
# 454 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	removeobject 8
# 455 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	setflag FLAG_BOT_STUDENTS
# 456 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BotanicCamPlayer
# 457 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	waitmovement 0
# 458 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special RemoveCameraObject
# 459 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	startquest QUEST_ASSIGNMENT
# 460 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


Cruzeira_BotanicSchool_Diploma::
# 468 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	lock
# 469 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	goto_if_set FLAG_POKEDEX_COMPLETED, Cruzeira_BotanicSchool_Diploma_1
# 475 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	msgbox Cruzeira_BotanicSchool_Diploma_Text_0
# 476 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end

Cruzeira_BotanicSchool_Diploma_1:
# 470 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	special Special_ShowDiploma
# 471 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	release
	end


# 481 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
Botanic18:
# 482 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 483 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 483 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 483 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 483 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 484 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 484 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 485 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	face_up
	step_end

# 488 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
Botanic20:
# 489 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 489 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 490 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 490 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 491 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 491 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 491 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 491 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 492 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 492 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 493 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 494 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	face_up
	step_end

# 497 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicTeacher:
# 498 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 498 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 499 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 499 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 500 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 500 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 501 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	face_down
	step_end

# 504 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicCamTeacher:
# 505 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_up
# 505 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_up
	step_end

# 508 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicCamClass:
# 509 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 509 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 509 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
	step_end

# 512 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicCamTeacher2:
# 513 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_up
# 513 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_up
# 513 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_up
	step_end

# 516 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicTeacher2:
# 517 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 517 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 518 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay_16
# 519 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 519 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 519 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_left
# 520 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	face_down
	step_end

# 523 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicStudent6:
# 524 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_right
# 524 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_right
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
# 525 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_fast_down
	step_end

# 528 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicStudent7:
# 529 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_right
# 530 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	delay_16
# 531 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_left
# 531 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_left
# 531 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_left
# 532 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_down
# 532 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_down
# 532 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_down
# 532 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_down
# 532 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_slow_down
	step_end

# 535 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicStudent8:
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 536 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
# 537 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 537 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 537 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 537 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 537 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
	step_end

# 540 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
BotanicCamPlayer:
# 541 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 541 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_down
# 542 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	walk_right
	step_end

Cruzeira_BotanicSchool_Teacher1_Text_0:
# 12 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, it's the most amazing trainer of all\n"
	.string "Thura, {PLAYER}! How are you doing on\l"
	.string "this fine morning?$"

Cruzeira_BotanicSchool_Teacher1_Text_1:
# 17 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, it's the most amazing trainer of all\n"
	.string "Thura, {PLAYER}! How are you doing on\l"
	.string "this fine day?$"

Cruzeira_BotanicSchool_Teacher1_Text_2:
# 22 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, it's the most amazing trainer of all\n"
	.string "Thura, {PLAYER}! How are you doing on\l"
	.string "this fine evening?$"

Cruzeira_BotanicSchool_Teacher1_Text_3:
# 27 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, it's the most amazing trainer of all\n"
	.string "Thura, {PLAYER}! How are you doing on\l"
	.string "this fine night?$"

Cruzeira_BotanicSchool_Teacher1_Text_4:
# 33 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Hi, {PLAYER}. Have you completed your\n"
	.string "Pokédex yet?$"

Cruzeira_BotanicSchool_Teacher1_Text_5:
# 35 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Let me check, then.$"

Cruzeira_BotanicSchool_Teacher1_Text_6:
# 42 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "...Oh, my! How wonderful! You even\n"
	.string "managed to get info on Diancie, the\l"
	.string "mythical guardian of the Ironair!$"

Cruzeira_BotanicSchool_Teacher1_Text_7:
# 47 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "For a job very well done, here is a\n"
	.string "diploma with your name on it. I'll hang it\l"
	.string "in the lobby, so that everyone can see\l"
	.string "how wonderful of a trainer you are.$"

Cruzeira_BotanicSchool_Teacher1_Text_8:
# 60 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "...Hmm. You're not quite here yet. Try a\n"
	.string "bit harder!$"

Cruzeira_BotanicSchool_Teacher1_Text_9:
# 66 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "That's fine, {PLAYER}. You're young,\n"
	.string "you've got a lot of time ahead of you.$"

Cruzeira_BotanicSchool_Teacher1_Text_10:
# 72 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, you have a Pokédex feature on your\n"
	.string "Phone! That's a rarity, these days. How\l"
	.string "lucky you are! I'll tell you what: if you\l"
	.string "manage to complete the whole Pokédex\l"
	.string "of Thura, come back and see me. I'll have\l"
	.string "the most beautiful reward for you.$"

Cruzeira_BotanicSchool_Student1_Text_0:
# 82 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Oh, so angiosperms can also rely on\n"
	.string "abiotic pollination? Very interesting...$"

Cruzeira_BotanicSchool_Student2_Text_0:
# 90 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "See the boy at the desk to my left? I\n"
	.string "have a massive crush on him. He seems so\l"
	.string "passionate about plants... Maybe a bit\l"
	.string "too much. I wish he could notice me.$"

Cruzeira_BotanicSchool_Student3_Text_0:
# 99 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Shhh, I'm trying to finish my game, don't\n"
	.string "blow my cover!$"

Cruzeira_BotanicSchool_Student4_Text_0:
# 106 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Zzzz... Zzzz...$"

Cruzeira_BotanicSchool_Son_Text_0:
# 114 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "My mom and dad own this school! I don't\n"
	.string "understand anything about flowers, but\l"
	.string "boy are they beautiful!$"

Cruzeira_BotanicSchool_Daughter_Text_0:
# 121 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Drink, beautiful flowers, drink! I have\n"
	.string "prepared a special mixture for you,\l"
	.string "you'll love it!$"

Cruzeira_BotanicSchool_Student5_Text_0:
# 129 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "I don't understand... Every plant that I\n"
	.string "touch seems to die within hours... Maybe\l"
	.string "I'm not cut out to be a botanist...$"

Cruzeira_BotanicSchool_Mom_Text_0:
# 138 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Welcome to our botanic school! Feel\n"
	.string "free to speak to the students and\l"
	.string "teachers. You'll learn a lot about\l"
	.string "plants.$"

Cruzeira_BotanicSchool_Dad_Text_0:
# 146 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Welcome to Cruzeira's botanic school!\n"
	.string "Hope you learn a lot in here. We also sell\l"
	.string "nature mints! Would you be interested\l"
	.string "in some?$"

Cruzeira_BotanicSchool_Dad_Text_1:
# 149 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Thanks! Don't hesitate to come back!$"

Cruzeira_BotanicSchool_Student6_Text_0:
# 180 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "I can't see anything, these desks are\n"
	.string "too high! Can you tell me what's written\l"
	.string "on the black board?$"

Cruzeira_BotanicSchool_Student7_Text_0:
# 187 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Flower...$"

Cruzeira_BotanicSchool_Student8_Text_0:
# 195 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Ok, ok, all these lectures are great, but\n"
	.string "when are we going outside to practice?$"

Cruzeira_BotanicSchool_Student9_Text_0:
# 204 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Huh? Where is everyone? I didn't listen\n"
	.string "to what the old man said.$"

Cruzeira_BotanicSchool_Student9_Text_1:
# 209 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "This is so boring... I wish my parents\n"
	.string "had enrolled me in a training school, not\l"
	.string "here.$"

Cruzeira_BotanicSchool_Teacher2_Text_0:
# 219 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Aren't plants fascinating?$"

Cruzeira_BotanicSchool_Teacher2_Text_1:
# 225 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Hello, {PLAYER}. Have you completed\n"
	.string "your homework yet?$"

Cruzeira_BotanicSchool_Teacher2_Text_2:
# 227 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Very well, then. Let's see.$"

Cruzeira_BotanicSchool_Teacher2_Text_3:
# 230 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "...$"

Cruzeira_BotanicSchool_Teacher2_Text_4:
# 231 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Ah yes! These are the exact species I\n"
	.string "talked about! Well done, {PLAYER}.\l"
	.string "Here is a little reward for a job well\l"
	.string "done.$"

Cruzeira_BotanicSchool_Teacher2_Text_5:
# 233 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "If you give this seed to a Pokémon, it\n"
	.string "will boost the power of its grass-type\l"
	.string "moves. Very useful!$"

Cruzeira_BotanicSchool_Teacher2_Text_6:
# 241 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "You cheeky one! You haven't completed\n"
	.string "the homework yet! Come back when you\l"
	.string "have.$"

Cruzeira_BotanicSchool_Teacher2_Text_7:
# 247 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "It's okay, you have plenty of time.\n"
	.string "Remember, you'll find the daisies I\l"
	.string "spoke about on Petal Pass, and we\l"
	.string "recognise them thanks to their vibrant\l"
	.string "yellow or blue tint.$"

Cruzeira_BotanicSchool_Teacher2_Text_8:
# 253 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "What's that? Why aren't you seated, like\n"
	.string "all the other students?$"

Cruzeira_BotanicSchool_Teacher2_Text_9:
# 258 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "What? Nonsense! Seat down this\n"
	.string "instant!$"

Cruzeira_BotanicSchool_Teacher2_Text_10:
# 269 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Alright class, before I give you your\n"
	.string "homework, can someone remind me of the\l"
	.string "various species of daisies?$"

Cruzeira_BotanicSchool_Teacher2_Text_11:
# 276 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Uhm... What are they?$"

Cruzeira_BotanicSchool_Teacher2_Text_12:
# 280 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Ah, I swear I know the answer, it's on\n"
	.string "the tip of my tongue...$"

Cruzeira_BotanicSchool_Teacher2_Text_13:
# 288 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "Haha! This was a trick question. We\n"
	.string "haven't seen them yet! That's the\l"
	.string "subject of your next homework.$"

Cruzeira_BotanicSchool_Teacher2_Text_14:
# 293 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "On Petal Pass, just north of this\n"
	.string "charming town that is Cruzeira, you'll\l"
	.string "find various species of flowers. Some\l"
	.string "of which are daisies! Now, you can\l"
	.string "recognise the species specific to\l"
	.string "Thura by its colors: the petals are\l"
	.string "either yellow, or blue. Your mission is to\l"
	.string "collect 3 daisies, and bring them back\l"
	.string "here. But, remember! When you pick up\l"
	.string "the daisies, be gentle. No pulling! Now,\l"
	.string "go.$"

Cruzeira_BotanicSchool_Teacher2_Text_15:
# 361 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "It's okay. Quick, we don't have much\n"
	.string "time left.$"

Cruzeira_BotanicSchool_Diploma_Text_0:
# 475 "data/maps/Cruzeira_BotanicSchool/scripts.pory"
	.string "This is a blank frame.$"
