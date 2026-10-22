# 1 "data/maps/Hydropolis/scripts.pory"

# 2 "data/maps/Hydropolis/scripts.pory"
Hydropolis_MapScripts::
# 3 "data/maps/Hydropolis/scripts.pory"
	.byte 0

Hydropolis_AnaisWelcome::
# 7 "data/maps/Hydropolis/scripts.pory"
	lock
# 8 "data/maps/Hydropolis/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq Hydropolis_AnaisWelcome_2
# 18 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 15
	goto_if_eq Hydropolis_AnaisWelcome_3
# 27 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq Hydropolis_AnaisWelcome_4
# 36 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Hydropolis_AnaisWelcome_5
Hydropolis_AnaisWelcome_1:
# 45 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 46 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_AnaisWelcome_Text_1
# 47 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 48 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 49 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 50 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 51 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_AnaisWelcome_Text_2
# 52 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 53 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 54 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq Hydropolis_AnaisWelcome_11
# 61 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 15
	goto_if_eq Hydropolis_AnaisWelcome_12
# 68 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq Hydropolis_AnaisWelcome_13
# 75 "data/maps/Hydropolis/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Hydropolis_AnaisWelcome_14
Hydropolis_AnaisWelcome_10:
# 82 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_DIVERS_NPC
# 83 "data/maps/Hydropolis/scripts.pory"
	clearflag FLAG_DIVERS_TRAINERS
# 84 "data/maps/Hydropolis/scripts.pory"
	setvar VAR_MAIN_STORY, 33
# 85 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_AnaisWelcome_2:
# 10 "data/maps/Hydropolis/scripts.pory"
	addobject 11
# 11 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 15, 13
# 12 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_SOUTH
# 13 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 14 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 15 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_0
# 16 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
	goto Hydropolis_AnaisWelcome_1

Hydropolis_AnaisWelcome_3:
# 19 "data/maps/Hydropolis/scripts.pory"
	addobject 11
# 20 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 15, 13
# 21 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_SOUTH
# 22 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 24 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_1
# 25 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
	goto Hydropolis_AnaisWelcome_1

Hydropolis_AnaisWelcome_4:
# 28 "data/maps/Hydropolis/scripts.pory"
	addobject 11
# 29 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 16, 13
# 30 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_SOUTH
# 31 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 32 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 33 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_1
# 34 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
	goto Hydropolis_AnaisWelcome_1

Hydropolis_AnaisWelcome_5:
# 37 "data/maps/Hydropolis/scripts.pory"
	addobject 11
# 38 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 16, 13
# 39 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_SOUTH
# 40 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 42 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_2
# 43 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
	goto Hydropolis_AnaisWelcome_1

Hydropolis_AnaisWelcome_11:
# 55 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 56 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_3
# 57 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 58 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 59 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 48, 29
	goto Hydropolis_AnaisWelcome_10

Hydropolis_AnaisWelcome_12:
# 62 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 63 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_4
# 64 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 65 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 66 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 48, 29
	goto Hydropolis_AnaisWelcome_10

Hydropolis_AnaisWelcome_13:
# 69 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 70 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_4
# 71 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 72 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 73 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 48, 29
	goto Hydropolis_AnaisWelcome_10

Hydropolis_AnaisWelcome_14:
# 76 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 77 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_AnaisWelcome_Movement_5
# 78 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 79 "data/maps/Hydropolis/scripts.pory"
	playse SE_EXIT
# 80 "data/maps/Hydropolis/scripts.pory"
	setobjectxy 11, 48, 29
	goto Hydropolis_AnaisWelcome_10


Hydropolis_Diver::
# 90 "data/maps/Hydropolis/scripts.pory"
	lock
# 91 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 92 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Diver_Text_0
# 93 "data/maps/Hydropolis/scripts.pory"
	turnobject 1, DIR_NORTH
# 94 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Worker::
# 99 "data/maps/Hydropolis/scripts.pory"
	lock
# 100 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 101 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Worker_Text_0
# 102 "data/maps/Hydropolis/scripts.pory"
	turnobject 2, DIR_NORTH
# 103 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Scientist1::
# 108 "data/maps/Hydropolis/scripts.pory"
	lock
# 109 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 110 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist1_Text_0
# 111 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Intern::
# 116 "data/maps/Hydropolis/scripts.pory"
	lock
# 117 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 118 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Intern_Text_0
# 119 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Scientist2::
# 124 "data/maps/Hydropolis/scripts.pory"
	lock
# 125 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist2_Text_0
# 126 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Nurse::
# 131 "data/maps/Hydropolis/scripts.pory"
	lock
# 132 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 133 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Nurse_Text_0, MSGBOX_YESNO
# 134 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hydropolis_Nurse_2
# 145 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Nurse_Text_3
Hydropolis_Nurse_1:
# 147 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Nurse_2:
# 135 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Nurse_Text_1
# 136 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 137 "data/maps/Hydropolis/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_HEAL
# 139 "data/maps/Hydropolis/scripts.pory"
	waitfanfare
# 140 "data/maps/Hydropolis/scripts.pory"
	special HealPlayerParty
# 141 "data/maps/Hydropolis/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 142 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Nurse_Text_2
	goto Hydropolis_Nurse_1


Hydropolis_Scientist3::
# 152 "data/maps/Hydropolis/scripts.pory"
	lock
# 153 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 154 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist3_Text_0
# 155 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Scientist4::
# 160 "data/maps/Hydropolis/scripts.pory"
	lock
# 161 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 162 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 34
	goto_if_gt Hydropolis_Scientist4_5
Hydropolis_Scientist4_4:
# 168 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 34
	goto_if_gt Hydropolis_Scientist4_2
# 215 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_8
# 216 "data/maps/Hydropolis/scripts.pory"
	turnobject 7, DIR_NORTH
# 217 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist4_1:
# 163 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_0
# 164 "data/maps/Hydropolis/scripts.pory"
	turnobject 7, DIR_NORTH
# 165 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist4_2:
# 169 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_1, MSGBOX_YESNO
# 170 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hydropolis_Scientist4_8
# 208 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_7
# 209 "data/maps/Hydropolis/scripts.pory"
	turnobject 7, DIR_NORTH
# 210 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist4_5:
# 162 "data/maps/Hydropolis/scripts.pory"
	goto_if_set FLAG_FOSSIL_REVIVED, Hydropolis_Scientist4_1
	goto Hydropolis_Scientist4_4

Hydropolis_Scientist4_8:
# 171 "data/maps/Hydropolis/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 172 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hydropolis_Scientist4_11
# 201 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_6
# 202 "data/maps/Hydropolis/scripts.pory"
	turnobject 7, DIR_NORTH
# 203 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist4_11:
# 173 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_2
# 174 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 175 "data/maps/Hydropolis/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 176 "data/maps/Hydropolis/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 178 "data/maps/Hydropolis/scripts.pory"
	playse MUS_LEVEL_UP
# 179 "data/maps/Hydropolis/scripts.pory"
	waitse
# 180 "data/maps/Hydropolis/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 181 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_3
# 182 "data/maps/Hydropolis/scripts.pory"
	givemon SPECIES_LILEEP, 10
# 183 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hydropolis_Scientist4_15
# 188 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hydropolis_Scientist4_16
Hydropolis_Scientist4_14:
# 193 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_5
# 194 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_FOSSIL_REVIVED
# 195 "data/maps/Hydropolis/scripts.pory"
	turnobject 7, DIR_NORTH
# 196 "data/maps/Hydropolis/scripts.pory"
	completequest QUEST_FOSSIL
# 197 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist4_15:
# 184 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 185 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_4
# 186 "data/maps/Hydropolis/scripts.pory"
	call NicknamePokemon
	goto Hydropolis_Scientist4_14

Hydropolis_Scientist4_16:
# 189 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 190 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist4_Text_4
# 191 "data/maps/Hydropolis/scripts.pory"
	call NicknameBoxmon
	goto Hydropolis_Scientist4_14


Hydropolis_Scientist5::
# 223 "data/maps/Hydropolis/scripts.pory"
	lock
# 224 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 225 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_gt Hydropolis_Scientist5_15
Hydropolis_Scientist5_13:
# 230 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_gt Hydropolis_Scientist5_12
Hydropolis_Scientist5_10:
# 261 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_gt Hydropolis_Scientist5_9
Hydropolis_Scientist5_7:
# 266 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_gt Hydropolis_Scientist5_6
Hydropolis_Scientist5_5:
# 309 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_7
# 310 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist5_1:
# 226 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_0
# 227 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist5_2:
# 231 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_1
# 232 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 233 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 234 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_0
# 235 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 236 "data/maps/Hydropolis/scripts.pory"
	playse SE_PIN
# 237 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 238 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_2
# 239 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 240 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 241 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_3
# 242 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 243 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 244 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_0
# 245 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 246 "data/maps/Hydropolis/scripts.pory"
	playse SE_PIN
# 247 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 248 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_4
# 249 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 250 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 251 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_5
# 252 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 253 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 254 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_6
# 255 "data/maps/Hydropolis/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 10
# 256 "data/maps/Hydropolis/scripts.pory"
	completequest QUEST_DISAPPEARANCE
# 257 "data/maps/Hydropolis/scripts.pory"
	setvar VAR_DISAPPEARANCE, 3
# 258 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist5_3:
# 262 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_1
# 263 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist5_4:
# 267 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_7
# 268 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 269 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 270 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_8
# 271 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 272 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 273 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_0
# 274 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 275 "data/maps/Hydropolis/scripts.pory"
	playse SE_PIN
# 276 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 277 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_9
# 278 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 279 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 280 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_1
# 281 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 282 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 283 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_10
# 284 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 285 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 286 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_2
# 287 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 288 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 289 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_11
# 290 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 291 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 292 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_1
# 293 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 294 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 295 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_12
# 296 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 297 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 298 "data/maps/Hydropolis/scripts.pory"
	applymovement 8, Hydropolis_Scientist5_Movement_2
# 299 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 300 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 301 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist5_Text_13
# 302 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 303 "data/maps/Hydropolis/scripts.pory"
	startquest QUEST_DISAPPEARANCE
# 304 "data/maps/Hydropolis/scripts.pory"
	setvar VAR_DISAPPEARANCE, 1
# 305 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Scientist5_6:
# 266 "data/maps/Hydropolis/scripts.pory"
	compare VAR_DISAPPEARANCE, 0
	goto_if_eq Hydropolis_Scientist5_4
	goto Hydropolis_Scientist5_5

Hydropolis_Scientist5_9:
# 261 "data/maps/Hydropolis/scripts.pory"
	compare VAR_DISAPPEARANCE, 1
	goto_if_eq Hydropolis_Scientist5_3
	goto Hydropolis_Scientist5_7

Hydropolis_Scientist5_12:
# 230 "data/maps/Hydropolis/scripts.pory"
	compare VAR_DISAPPEARANCE, 2
	goto_if_eq Hydropolis_Scientist5_2
	goto Hydropolis_Scientist5_10

Hydropolis_Scientist5_15:
# 225 "data/maps/Hydropolis/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq Hydropolis_Scientist5_1
	goto Hydropolis_Scientist5_13


Hydropolis_Scientist6::
# 316 "data/maps/Hydropolis/scripts.pory"
	lock
# 317 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 318 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist6_Text_0
# 319 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Scientist7::
# 324 "data/maps/Hydropolis/scripts.pory"
	lock
# 325 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 326 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist7_Text_0
# 327 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Scientist8::
# 332 "data/maps/Hydropolis/scripts.pory"
	lock
# 333 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 334 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Scientist8_Text_0
# 335 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Cook::
# 340 "data/maps/Hydropolis/scripts.pory"
	lock
# 341 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 342 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Cook_Text_0
# 343 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Anais::
# 348 "data/maps/Hydropolis/scripts.pory"
	lock
# 349 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 350 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 34
	goto_if_eq Hydropolis_Anais_2
# 443 "data/maps/Hydropolis/scripts.pory"
	compare VAR_MAIN_STORY, 34
	goto_if_gt Hydropolis_Anais_3
# 449 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 450 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_14
# 451 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 452 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 453 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 454 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_NORTH
# 455 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 456 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 457 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_15
# 458 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 459 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 460 "data/maps/Hydropolis/scripts.pory"
	applymovement 11, Hydropolis_Scientist5_Movement_2
# 461 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 462 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 463 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 464 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_16
# 465 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 466 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 467 "data/maps/Hydropolis/scripts.pory"
	showmonpic SPECIES_ACCELGOR, 10, 3
# 468 "data/maps/Hydropolis/scripts.pory"
	delay 120
# 469 "data/maps/Hydropolis/scripts.pory"
	hidemonpic
# 470 "data/maps/Hydropolis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Hydropolis_Anais_Movement_0
# 471 "data/maps/Hydropolis/scripts.pory"
	waitmovement 0
# 472 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 473 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 474 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_17
# 475 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 476 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 477 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_NORTH
# 478 "data/maps/Hydropolis/scripts.pory"
	setvar VAR_MAIN_STORY, 34
# 479 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_DIVERS_NPC
# 480 "data/maps/Hydropolis/scripts.pory"
	clearflag FLAG_DIVERS_TRAINERS
Hydropolis_Anais_1:
# 482 "data/maps/Hydropolis/scripts.pory"
	release
	end

Hydropolis_Anais_2:
# 351 "data/maps/Hydropolis/scripts.pory"
	showmonpic SPECIES_ACCELGOR, 10, 3
# 352 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 353 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_0, MSGBOX_YESNO
# 354 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hydropolis_Anais_7
# 436 "data/maps/Hydropolis/scripts.pory"
	hidemonpic
# 438 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_12
# 439 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 440 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_NORTH
	goto Hydropolis_Anais_1

Hydropolis_Anais_3:
# 444 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 445 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_13
# 446 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
	goto Hydropolis_Anais_1

Hydropolis_Anais_7:
# 355 "data/maps/Hydropolis/scripts.pory"
	hidemonpic
# 356 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_1
# 357 "data/maps/Hydropolis/scripts.pory"
	special EnterHydropolisPokemon
# 358 "data/maps/Hydropolis/scripts.pory"
	waitstate
# 359 "data/maps/Hydropolis/scripts.pory"
	special GetPokemonFeedback
# 361 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Hydropolis_Anais_10
# 427 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 428 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 429 "data/maps/Hydropolis/scripts.pory"
	playse SE_RG_HELP_ERROR
# 430 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 431 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_11
# 432 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
	goto Hydropolis_Anais_1

Hydropolis_Anais_10:
# 362 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 363 "data/maps/Hydropolis/scripts.pory"
	delay 40
# 364 "data/maps/Hydropolis/scripts.pory"
	playse SE_DING_DONG
# 365 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 366 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_2
# 367 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 368 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 369 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 370 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 371 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_3
# 372 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 373 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 374 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 375 "data/maps/Hydropolis/scripts.pory"
	turnobject 11, DIR_NORTH
# 376 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 377 "data/maps/Hydropolis/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
# 378 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 379 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_4
# 380 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 381 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 382 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 383 "data/maps/Hydropolis/scripts.pory"
	faceplayer
# 384 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 385 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_5
# 386 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 387 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 388 "data/maps/Hydropolis/scripts.pory"
	trainerbattle_no_intro TRAINER_ANAIS_HYDRO, Anais1
# 389 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 390 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_6
# 391 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 392 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 393 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 394 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 395 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_7
# 396 "data/maps/Hydropolis/scripts.pory"
	waitfanfare
# 397 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_BADGE08_GET
# 398 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 399 "data/maps/Hydropolis/scripts.pory"
	delay 20
# 400 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 401 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_8
# 402 "data/maps/Hydropolis/scripts.pory"
	closemessage
# 403 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 404 "data/maps/Hydropolis/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10
# 405 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hydropolis_Anais_14
# 410 "data/maps/Hydropolis/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hydropolis_Anais_15
Hydropolis_Anais_13:
# 415 "data/maps/Hydropolis/scripts.pory"
	namebox Hydropolis_AnaisWelcome_Text_0
# 416 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_10
# 417 "data/maps/Hydropolis/scripts.pory"
	hidenamebox
# 418 "data/maps/Hydropolis/scripts.pory"
	setvar VAR_MAIN_STORY, 35
# 419 "data/maps/Hydropolis/scripts.pory"
	settrainerflag TRAINER_ABYSS_1
# 420 "data/maps/Hydropolis/scripts.pory"
	settrainerflag TRAINER_ABYSS_2
# 421 "data/maps/Hydropolis/scripts.pory"
	settrainerflag TRAINER_ABYSS_4
# 422 "data/maps/Hydropolis/scripts.pory"
	settrainerflag TRAINER_ABYSS_5
# 423 "data/maps/Hydropolis/scripts.pory"
	completequest QUEST_EMBLEMS
# 424 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_EMBLEMS_COMPLETE
	goto Hydropolis_Anais_1

Hydropolis_Anais_14:
# 406 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 407 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_9
# 408 "data/maps/Hydropolis/scripts.pory"
	call NicknamePokemon
	goto Hydropolis_Anais_13

Hydropolis_Anais_15:
# 411 "data/maps/Hydropolis/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 412 "data/maps/Hydropolis/scripts.pory"
	msgbox Hydropolis_Anais_Text_9
# 413 "data/maps/Hydropolis/scripts.pory"
	call NicknameBoxmon
	goto Hydropolis_Anais_13


Hydropolis_Item1::
# 491 "data/maps/Hydropolis/scripts.pory"
	lock
# 492 "data/maps/Hydropolis/scripts.pory"
	removeobject 17
# 493 "data/maps/Hydropolis/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 494 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_ITEM_HYDRO_1
# 495 "data/maps/Hydropolis/scripts.pory"
	release
	end


Hydropolis_Item2::
# 500 "data/maps/Hydropolis/scripts.pory"
	lock
# 501 "data/maps/Hydropolis/scripts.pory"
	removeobject 18
# 502 "data/maps/Hydropolis/scripts.pory"
	giveitem ITEM_TM48
# 503 "data/maps/Hydropolis/scripts.pory"
	setflag FLAG_ITEM_HYDRO_2
# 504 "data/maps/Hydropolis/scripts.pory"
	release
	end


# 15 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_0:
# 15 "data/maps/Hydropolis/scripts.pory"
	walk_down
# 15 "data/maps/Hydropolis/scripts.pory"
	walk_down
# 15 "data/maps/Hydropolis/scripts.pory"
	walk_left
# 15 "data/maps/Hydropolis/scripts.pory"
	face_down
	step_end

# 24 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_1:
# 24 "data/maps/Hydropolis/scripts.pory"
	walk_down
# 24 "data/maps/Hydropolis/scripts.pory"
	walk_down
	step_end

# 42 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_2:
# 42 "data/maps/Hydropolis/scripts.pory"
	walk_down
# 42 "data/maps/Hydropolis/scripts.pory"
	walk_down
# 42 "data/maps/Hydropolis/scripts.pory"
	walk_right
# 42 "data/maps/Hydropolis/scripts.pory"
	face_down
	step_end

# 56 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_3:
# 56 "data/maps/Hydropolis/scripts.pory"
	walk_right
# 56 "data/maps/Hydropolis/scripts.pory"
	walk_up
# 56 "data/maps/Hydropolis/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_4:
# 63 "data/maps/Hydropolis/scripts.pory"
	walk_up
# 63 "data/maps/Hydropolis/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/Hydropolis/scripts.pory"
Hydropolis_AnaisWelcome_Movement_5:
# 77 "data/maps/Hydropolis/scripts.pory"
	walk_left
# 77 "data/maps/Hydropolis/scripts.pory"
	walk_up
# 77 "data/maps/Hydropolis/scripts.pory"
	walk_up
	step_end

# 234 "data/maps/Hydropolis/scripts.pory"
Hydropolis_Scientist5_Movement_0:
# 234 "data/maps/Hydropolis/scripts.pory"
	emote_exclamation_mark
	step_end

# 280 "data/maps/Hydropolis/scripts.pory"
Hydropolis_Scientist5_Movement_1:
# 280 "data/maps/Hydropolis/scripts.pory"
	face_up
	step_end

# 286 "data/maps/Hydropolis/scripts.pory"
Hydropolis_Scientist5_Movement_2:
# 286 "data/maps/Hydropolis/scripts.pory"
	face_player
	step_end

# 470 "data/maps/Hydropolis/scripts.pory"
Hydropolis_Anais_Movement_0:
# 470 "data/maps/Hydropolis/scripts.pory"
	emote_question_mark
	step_end

Hydropolis_AnaisWelcome_Text_0:
# 45 "data/maps/Hydropolis/scripts.pory"
	.string "Anais$"

Hydropolis_AnaisWelcome_Text_1:
# 46 "data/maps/Hydropolis/scripts.pory"
	.string "Ah, welcome to Hydropolis! You don't\n"
	.string "look like a researcher, so you must be a\l"
	.string "challenger!$"

Hydropolis_AnaisWelcome_Text_2:
# 51 "data/maps/Hydropolis/scripts.pory"
	.string "First of all, congratulations! You're\n"
	.string "almost finished with the Challenge! You\l"
	.string "must've lived some incredible\l"
	.string "adventures with your Pokémons! But,\l"
	.string "it's actually far from over! A last test\l"
	.string "awaits you. Come meet me in the\l"
	.string "research room, and you'll know more\l"
	.string "about it!$"

Hydropolis_Diver_Text_0:
# 92 "data/maps/Hydropolis/scripts.pory"
	.string "That's it, this is it! For the first time\n"
	.string "in my life, I'm going to dive alone.\l"
	.string "Without any help. Now, if you'll excuse\l"
	.string "me, I need to gather myself, because I\l"
	.string "think I'm going to pass out.$"

Hydropolis_Worker_Text_0:
# 101 "data/maps/Hydropolis/scripts.pory"
	.string "Remember me? We met near Frux! Yeah, I\n"
	.string "landed this gig, the pay's good but it\l"
	.string "gets repetitive quite fast.$"

Hydropolis_Scientist1_Text_0:
# 110 "data/maps/Hydropolis/scripts.pory"
	.string "What? I know there's nothing in my\n"
	.string "aquariums! I'm getting started, don't\l"
	.string "rush me!$"

Hydropolis_Intern_Text_0:
# 118 "data/maps/Hydropolis/scripts.pory"
	.string "I'm so happy! An internship in a marine\n"
	.string "biology lab! My friends are gonna be so\l"
	.string "jealous when I'll tell them! I'll finally\l"
	.string "figure out why fish disappeared from\l"
	.string "Thura's seas!$"

Hydropolis_Scientist2_Text_0:
# 125 "data/maps/Hydropolis/scripts.pory"
	.string "Hmmm... So those corals are actually\n"
	.string "remnants of Corsola? Did the seawater\l"
	.string "pH affect the color of its skeleton?...$"

Hydropolis_Nurse_Text_0:
# 133 "data/maps/Hydropolis/scripts.pory"
	.string "Hiya! You must be exhausted after all\n"
	.string "this time spent underwater. Do you want\l"
	.string "me to heal your Pokémons?$"

Hydropolis_Nurse_Text_1:
# 135 "data/maps/Hydropolis/scripts.pory"
	.string "All right! Let me take your Pokémons.$"

Hydropolis_Nurse_Text_2:
# 142 "data/maps/Hydropolis/scripts.pory"
	.string "There you go! Fully healed. See you!$"

Hydropolis_Nurse_Text_3:
# 145 "data/maps/Hydropolis/scripts.pory"
	.string "Very well then! See you!$"

Hydropolis_Scientist3_Text_0:
# 154 "data/maps/Hydropolis/scripts.pory"
	.string "We're underwater, and yet we can\n"
	.string "breathe just fine! You're probably\l"
	.string "wondering how that's possible, aren't\l"
	.string "you? Well, we've developed a machine\l"
	.string "that converts the oxygen in seawater\l"
	.string "into breathable air! How wonderful!$"

Hydropolis_Scientist4_Text_0:
# 163 "data/maps/Hydropolis/scripts.pory"
	.string "I haven't finished my paper, you've got\n"
	.string "to let me work!$"

Hydropolis_Scientist4_Text_1:
# 169 "data/maps/Hydropolis/scripts.pory"
	.string "That's it! I've cracked the code! I can\n"
	.string "finally revive fossils! Haha! Where do\l"
	.string "you think that Tirtouga came from?\l"
	.string "Anyways, if you have fossils, I can\l"
	.string "revive them for you. Free of charge, of\l"
	.string "course.$"

Hydropolis_Scientist4_Text_2:
# 173 "data/maps/Hydropolis/scripts.pory"
	.string "Oh yeah! That's one! Give it to me!$"

Hydropolis_Scientist4_Text_3:
# 181 "data/maps/Hydropolis/scripts.pory"
	.string "And voilà! A fresh Lileep, revived from\n"
	.string "its thousand-year sleep!$"

Hydropolis_Scientist4_Text_4:
# 185 "data/maps/Hydropolis/scripts.pory"
	.string "You just received a Lileep!$"

Hydropolis_Scientist4_Text_5:
# 193 "data/maps/Hydropolis/scripts.pory"
	.string "You're welcome. Now go, I've got a paper\n"
	.string "to write!$"

Hydropolis_Scientist4_Text_6:
# 201 "data/maps/Hydropolis/scripts.pory"
	.string "Hmmm... I don't see any fossils. Come\n"
	.string "back when you've found one!$"

Hydropolis_Scientist4_Text_7:
# 208 "data/maps/Hydropolis/scripts.pory"
	.string "It's okay! Come back when you've found\n"
	.string "one!$"

Hydropolis_Scientist4_Text_8:
# 215 "data/maps/Hydropolis/scripts.pory"
	.string "I'm on the verge of figuring out how to\n"
	.string "revive fossils! Just give me a few\l"
	.string "minutes! In the meantime, go talk to\l"
	.string "Anais!$"

Hydropolis_Scientist5_Text_0:
# 226 "data/maps/Hydropolis/scripts.pory"
	.string "Thanks again, {PLAYER}! The rift is\n"
	.string "truly a hidden treasure!$"

Hydropolis_Scientist5_Text_1:
# 231 "data/maps/Hydropolis/scripts.pory"
	.string "So? Have you been inside the rift?$"

Hydropolis_Scientist5_Text_2:
# 238 "data/maps/Hydropolis/scripts.pory"
	.string "Oh, my! You actually did it!$"

Hydropolis_Scientist5_Text_3:
# 241 "data/maps/Hydropolis/scripts.pory"
	.string "...So, how did it look like?...$"

Hydropolis_Scientist5_Text_4:
# 248 "data/maps/Hydropolis/scripts.pory"
	.string "No way! A Kyogre, you say? I've only\n"
	.string "seen it in books!$"

Hydropolis_Scientist5_Text_5:
# 251 "data/maps/Hydropolis/scripts.pory"
	.string "You saw some unknown Pokémon too?! Now\n"
	.string "that Kyogre left to its home, we need to\l"
	.string "investigate the rift!$"

Hydropolis_Scientist5_Text_6:
# 254 "data/maps/Hydropolis/scripts.pory"
	.string "Well, you just did Thura a solid. Thanks\n"
	.string "a lot! You deserve this.$"

Hydropolis_Scientist5_Text_7:
# 267 "data/maps/Hydropolis/scripts.pory"
	.string "What you're seeing here is probably the\n"
	.string "last two specimens of Remoraid in\l"
	.string "Thura! We hoped that they would\l"
	.string "reproduce, but it turns out they are\l"
	.string "both females. So we need to clone them,\l"
	.string "or try to get our hands on a Ditto.$"

Hydropolis_Scientist5_Text_8:
# 270 "data/maps/Hydropolis/scripts.pory"
	.string "You look like a well seasoned trainer, am\n"
	.string "I mistaken?$"

Hydropolis_Scientist5_Text_9:
# 277 "data/maps/Hydropolis/scripts.pory"
	.string "Oh, my! You're the president! So you're\n"
	.string "definitely strong.$"

Hydropolis_Scientist5_Text_10:
# 283 "data/maps/Hydropolis/scripts.pory"
	.string "Anais must've talked to you about the\n"
	.string "Mass Extinction of Fish project. It's\l"
	.string "something that's been a plague in Thura\l"
	.string "for a few months now.$"

Hydropolis_Scientist5_Text_11:
# 289 "data/maps/Hydropolis/scripts.pory"
	.string "We studied this subject for days, we\n"
	.string "spent many sleepless nights, and we\l"
	.string "finally cracked the code. The answer to\l"
	.string "all of our problems lies deep inside the\l"
	.string "rift down in Mellow Abysses.$"

Hydropolis_Scientist5_Text_12:
# 295 "data/maps/Hydropolis/scripts.pory"
	.string "...There's a mighty Pokémon that has\n"
	.string "made its home there. Well, we actually\l"
	.string "think that it lost its way to its actual\l"
	.string "home, and it's making it angrier by the\l"
	.string "day. And none of the scientists in our\l"
	.string "team is strong enough to face it. Not\l"
	.string "even Anais...$"

Hydropolis_Scientist5_Text_13:
# 301 "data/maps/Hydropolis/scripts.pory"
	.string "This is when you come into the picture.\n"
	.string "We need someone strong enough to help\l"
	.string "this Pokémon go back to its home. And\l"
	.string "to achieve that, you'll need to make\l"
	.string "your way inside the rift. Please!$"

Hydropolis_Scientist6_Text_0:
# 318 "data/maps/Hydropolis/scripts.pory"
	.string "I can't believe it! I thought I was\n"
	.string "being played with! Those are actually\l"
	.string "Remoraids! I've never seen them in my\l"
	.string "life!$"

Hydropolis_Scientist7_Text_0:
# 326 "data/maps/Hydropolis/scripts.pory"
	.string "Dude, I'm on a break here, please. There\n"
	.string "are plenty of people to talk to.$"

Hydropolis_Scientist8_Text_0:
# 334 "data/maps/Hydropolis/scripts.pory"
	.string "Don't listen to him. He just finished a\n"
	.string "12 hour work session, he's just a bit\l"
	.string "tired. He's in charge of the MEF project.\l"
	.string "You're more than welcome here!$"

Hydropolis_Cook_Text_0:
# 342 "data/maps/Hydropolis/scripts.pory"
	.string "Cooking seafood would be the easy\n"
	.string "thing to do. But I haven't earned my\l"
	.string "three stars cooking easy meals!$"

Hydropolis_Anais_Text_0:
# 353 "data/maps/Hydropolis/scripts.pory"
	.string "So? Do you want to give it a try? What\n"
	.string "is the Pokémon we're trying to\l"
	.string "resurrect? Remember, that's the fossil\l"
	.string "it's coming from.$"

Hydropolis_Anais_Text_1:
# 356 "data/maps/Hydropolis/scripts.pory"
	.string "Ok, let's hear it!$"

Hydropolis_Anais_Text_2:
# 366 "data/maps/Hydropolis/scripts.pory"
	.string "Ding ding ding! That's the correct\n"
	.string "answer! Well done!!$"

Hydropolis_Anais_Text_3:
# 371 "data/maps/Hydropolis/scripts.pory"
	.string "You've really earned the last Emblem of\n"
	.string "the Council Challenge!...$"

Hydropolis_Anais_Text_4:
# 379 "data/maps/Hydropolis/scripts.pory"
	.string "...Or have you?$"

Hydropolis_Anais_Text_5:
# 385 "data/maps/Hydropolis/scripts.pory"
	.string "There's just one last test you need to\n"
	.string "pass!$"

Hydropolis_Anais_Text_6:
# 390 "data/maps/Hydropolis/scripts.pory"
	.string "Wow! You've done it! You've completed\n"
	.string "the Council Challenge! Now I can give\l"
	.string "you your hard-earned Emblem!$"

Hydropolis_Anais_Text_7:
# 395 "data/maps/Hydropolis/scripts.pory"
	.string "You've earned the Droplet Emblem!$"

Hydropolis_Anais_Text_8:
# 401 "data/maps/Hydropolis/scripts.pory"
	.string "And for a special trainer like you, a\n"
	.string "freshly resurrected Tirtouga.$"

Hydropolis_Anais_Text_9:
# 407 "data/maps/Hydropolis/scripts.pory"
	.string "You just received a Tirtouga!$"

Hydropolis_Anais_Text_10:
# 416 "data/maps/Hydropolis/scripts.pory"
	.string "Now go! The hardest part is yet to come.\n"
	.string "I'm sure you'll succeed with high\l"
	.string "honors!$"

Hydropolis_Anais_Text_11:
# 431 "data/maps/Hydropolis/scripts.pory"
	.string "...Nope! Wrong answer! Try again!$"

Hydropolis_Anais_Text_12:
# 438 "data/maps/Hydropolis/scripts.pory"
	.string "It's okay, take your time!$"

Hydropolis_Anais_Text_13:
# 445 "data/maps/Hydropolis/scripts.pory"
	.string "{PLAYER}, happy to see you! Did you\n"
	.string "achieve your goal yet?$"

Hydropolis_Anais_Text_14:
# 450 "data/maps/Hydropolis/scripts.pory"
	.string "There you are! So, let me explain the\n"
	.string "rules to you. There are two projects\l"
	.string "that my team and me are working on\l"
	.string "right now: the Mass Extinction of Fish,\l"
	.string "or MEF project, and the Restoration\l"
	.string "Project. You'll be working on the latter\l"
	.string "one!$"

Hydropolis_Anais_Text_15:
# 457 "data/maps/Hydropolis/scripts.pory"
	.string "As part of the Restoration project,\n"
	.string "we're trying to answer current\l"
	.string "questions by drawing on insights from\l"
	.string "the past. Right now, we're studying\l"
	.string "fossils!$"

Hydropolis_Anais_Text_16:
# 464 "data/maps/Hydropolis/scripts.pory"
	.string "And there's a specific fossil we're\n"
	.string "studying. Your mission is to figure out\l"
	.string "which Pokémon this fossil comes from!$"

Hydropolis_Anais_Text_17:
# 474 "data/maps/Hydropolis/scripts.pory"
	.string "Don't worry, I scattered some clues in\n"
	.string "the underwater! You just have to\l"
	.string "explore. Once you think you got it, come\l"
	.string "back and tell me your answer! Good luck!$"

Anais1::
# 486 "data/maps/Hydropolis/scripts.pory"
	.string "Congratulations!!$"
