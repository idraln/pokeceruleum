# 1 "data/maps/Frux_Gym/scripts.pory"

# 2 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_MapScripts::
# 3 "data/maps/Frux_Gym/scripts.pory"
	.byte 0

Frux_Gym_Bruce::
# 7 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 45
	goto_if_gt Frux_Gym_Bruce_1
# 47 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_1, Frux_Gym_Bruce_7
Frux_Gym_Bruce_5:
# 134 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 25
	goto_if_eq Frux_Gym_Bruce_3
# 144 "data/maps/Frux_Gym/scripts.pory"
	lock
# 145 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 146 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 147 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_13
# 148 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 149 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_14
# 150 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 151 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_15
# 152 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 153 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_14
# 154 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 155 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_16
# 156 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 157 "data/maps/Frux_Gym/scripts.pory"
	turnobject 1, DIR_NORTH
# 158 "data/maps/Frux_Gym/scripts.pory"
	setvar VAR_MAIN_STORY, 25
# 159 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Bruce_1:
# 8 "data/maps/Frux_Gym/scripts.pory"
	lock
# 9 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 10 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 11 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_1, MSGBOX_YESNO
# 12 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Frux_Gym_Bruce_14
# 38 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 39 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_5
# 40 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 41 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 42 "data/maps/Frux_Gym/scripts.pory"
	turnobject 1, DIR_NORTH
# 43 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Bruce_2:
# 48 "data/maps/Frux_Gym/scripts.pory"
	lock
# 49 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 50 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 51 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_6
# 52 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 53 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 54 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUCE, Bruce1
# 55 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 56 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_7
# 57 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 58 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 59 "data/maps/Frux_Gym/scripts.pory"
	playse SE_POKENAV_CALL
# 60 "data/maps/Frux_Gym/scripts.pory"
	waitse
# 61 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 62 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 63 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_8
# 64 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 65 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 66 "data/maps/Frux_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 67 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Frux_Gym_Bruce_17
# 101 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_4
# 102 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 103 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 104 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_9
# 105 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 106 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 107 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 108 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_5
# 109 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 110 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 111 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 112 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_10
# 113 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 114 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 115 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 116 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_6
# 117 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 118 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 119 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_11
# 120 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 121 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 122 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_7
# 123 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 124 "data/maps/Frux_Gym/scripts.pory"
	removeobject 1
# 125 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_BRUCE_LEFT_GYM
# 126 "data/maps/Frux_Gym/scripts.pory"
	clearflag FLAG_BEFORE_ATTACK
# 127 "data/maps/Frux_Gym/scripts.pory"
	clearflag FLAG_BRUCE_IRONAIR
# 128 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_AFTER_ATTACK_NO_BRUCE
# 129 "data/maps/Frux_Gym/scripts.pory"
	setvar VAR_MAIN_STORY, 26
# 130 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Bruce_3:
# 135 "data/maps/Frux_Gym/scripts.pory"
	lock
# 136 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 137 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 138 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_12
# 139 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 140 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Bruce_6:
# 47 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_3, Frux_Gym_Bruce_10
	goto Frux_Gym_Bruce_5

Frux_Gym_Bruce_7:
# 47 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_2, Frux_Gym_Bruce_6
	goto Frux_Gym_Bruce_5

Frux_Gym_Bruce_10:
# 47 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 25
	goto_if_eq Frux_Gym_Bruce_2
	goto Frux_Gym_Bruce_5

Frux_Gym_Bruce_14:
# 13 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 14 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_2
# 15 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 16 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 17 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRUCE_REMATCH, BruceRematch
# 18 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 19 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 20 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_3
# 21 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 22 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 23 "data/maps/Frux_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/Frux_Gym/scripts.pory"
	playfanfare MUS_HEAL
# 25 "data/maps/Frux_Gym/scripts.pory"
	special HealPlayerParty
# 26 "data/maps/Frux_Gym/scripts.pory"
	waitfanfare
# 27 "data/maps/Frux_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 28 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 29 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_4
# 30 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 31 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 32 "data/maps/Frux_Gym/scripts.pory"
	turnobject 1, DIR_NORTH
# 33 "data/maps/Frux_Gym/scripts.pory"
	cleartrainerflag TRAINER_BRUCE_REMATCH
# 34 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Bruce_17:
# 68 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_0
# 69 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 70 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 71 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_9
# 72 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 73 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 74 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 75 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_1
# 76 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 77 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 78 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 79 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_10
# 80 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 81 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 82 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 83 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_2
# 84 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 85 "data/maps/Frux_Gym/scripts.pory"
	namebox Frux_Gym_Bruce_Text_0
# 86 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_11
# 87 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 88 "data/maps/Frux_Gym/scripts.pory"
	hidenamebox
# 89 "data/maps/Frux_Gym/scripts.pory"
	applymovement 1, Frux_Gym_Bruce_Movement_3
# 90 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/Frux_Gym/scripts.pory"
	removeobject 1
# 92 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_BRUCE_LEFT_GYM
# 93 "data/maps/Frux_Gym/scripts.pory"
	clearflag FLAG_BEFORE_ATTACK
# 94 "data/maps/Frux_Gym/scripts.pory"
	clearflag FLAG_BRUCE_IRONAIR
# 95 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_AFTER_ATTACK_NO_BRUCE
# 96 "data/maps/Frux_Gym/scripts.pory"
	setvar VAR_MAIN_STORY, 26
# 97 "data/maps/Frux_Gym/scripts.pory"
	release
	end


Frux_Gym_Clarence::
# 173 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_1, Frux_Gym_Clarence_1
# 173 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 24
	goto_if_eq Frux_Gym_Clarence_1
# 181 "data/maps/Frux_Gym/scripts.pory"
	lock
# 182 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 183 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_1
# 184 "data/maps/Frux_Gym/scripts.pory"
	multichoice 0, 0, MULTI_NO, TRUE
# 185 "data/maps/Frux_Gym/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/Frux_Gym/scripts.pory"
	case 0, Frux_Gym_Clarence_7
# 194 "data/maps/Frux_Gym/scripts.pory"
	case 1, Frux_Gym_Clarence_8
	return

Frux_Gym_Clarence_1:
# 174 "data/maps/Frux_Gym/scripts.pory"
	lock
# 175 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 176 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_0
# 177 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Clarence_7:
# 187 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_2
# 188 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 189 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_1, Clarence1
# 190 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_3
# 191 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_1
# 192 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Clarence_8:
# 195 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_2
# 196 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 197 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_1, Clarence1
# 198 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Clarence_Text_3
# 199 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_1
# 200 "data/maps/Frux_Gym/scripts.pory"
	release
	end


Frux_Gym_Gisele::
# 211 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_2, Frux_Gym_Gisele_1
# 211 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 24
	goto_if_eq Frux_Gym_Gisele_1
# 220 "data/maps/Frux_Gym/scripts.pory"
	lock
# 221 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 222 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_1
# 223 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 224 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 225 "data/maps/Frux_Gym/scripts.pory"
	turnobject 3, DIR_NORTH
# 226 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 227 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_2
# 228 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 229 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 230 "data/maps/Frux_Gym/scripts.pory"
	applymovement 3, Frux_Gym_Gisele_Movement_0
# 231 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 232 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 233 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_3
# 234 "data/maps/Frux_Gym/scripts.pory"
	multichoice 0, 0, MULTI_IRONMELT, TRUE
# 235 "data/maps/Frux_Gym/scripts.pory"
	switch VAR_RESULT
# 236 "data/maps/Frux_Gym/scripts.pory"
	case 0, Frux_Gym_Gisele_7
# 244 "data/maps/Frux_Gym/scripts.pory"
	case 1, Frux_Gym_Gisele_8
# 249 "data/maps/Frux_Gym/scripts.pory"
	case 2, Frux_Gym_Gisele_9
	return

Frux_Gym_Gisele_1:
# 212 "data/maps/Frux_Gym/scripts.pory"
	lock
# 213 "data/maps/Frux_Gym/scripts.pory"
	faceplayer
# 214 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_0
# 215 "data/maps/Frux_Gym/scripts.pory"
	turnobject 3, DIR_NORTH
# 216 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Gisele_7:
# 237 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_4
# 238 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 239 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_2, Gisele1
# 240 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_5
# 241 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_2
# 242 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Gisele_8:
# 245 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_6
# 246 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_2
# 247 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Gisele_9:
# 250 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_4
# 251 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 252 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_2, Gisele1
# 253 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Gisele_Text_5
# 254 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_2
# 255 "data/maps/Frux_Gym/scripts.pory"
	release
	end


Frux_Gym_Peter::
# 266 "data/maps/Frux_Gym/scripts.pory"
	goto_if_set FLAG_FRUX_GYM_QUESTION_3, Frux_Gym_Peter_1
# 266 "data/maps/Frux_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 24
	goto_if_eq Frux_Gym_Peter_1
# 273 "data/maps/Frux_Gym/scripts.pory"
	lock
# 274 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_0
# 275 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 276 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 277 "data/maps/Frux_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Frux_Gym_Peter_Movement_0
# 278 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 280 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Bruce_Text_14
# 281 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 282 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 283 "data/maps/Frux_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Frux_Gym_Peter_Movement_1
# 284 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/Frux_Gym/scripts.pory"
	delay 20
# 286 "data/maps/Frux_Gym/scripts.pory"
	playse SE_PIN
# 287 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_2
# 288 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 289 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 290 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_1
# 291 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 292 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 293 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_2
# 294 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 295 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_1
# 296 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 297 "data/maps/Frux_Gym/scripts.pory"
	delay 60
# 298 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_3
# 299 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 300 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_3
# 301 "data/maps/Frux_Gym/scripts.pory"
	multichoice 0, 0, MULTI_FORMULA, TRUE
# 302 "data/maps/Frux_Gym/scripts.pory"
	switch VAR_RESULT
# 303 "data/maps/Frux_Gym/scripts.pory"
	case 0, Frux_Gym_Peter_7
# 319 "data/maps/Frux_Gym/scripts.pory"
	case 1, Frux_Gym_Peter_8
# 332 "data/maps/Frux_Gym/scripts.pory"
	case 2, Frux_Gym_Peter_9
	return

Frux_Gym_Peter_1:
# 267 "data/maps/Frux_Gym/scripts.pory"
	lock
# 268 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_0
# 269 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Peter_7:
# 304 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_4
# 305 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 306 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_1
# 307 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 308 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 309 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_3
# 310 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_5
# 312 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_3, Peter1
# 313 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_6
# 314 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 315 "data/maps/Frux_Gym/scripts.pory"
	turnobject 2, DIR_EAST
# 316 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_3
# 317 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Peter_8:
# 320 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_4
# 321 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 322 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_1
# 323 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 324 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 325 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_3
# 326 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_7
# 328 "data/maps/Frux_Gym/scripts.pory"
	turnobject 2, DIR_EAST
# 329 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_3
# 330 "data/maps/Frux_Gym/scripts.pory"
	release
	end

Frux_Gym_Peter_9:
# 333 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_4
# 334 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 335 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_1
# 336 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 337 "data/maps/Frux_Gym/scripts.pory"
	delay 40
# 338 "data/maps/Frux_Gym/scripts.pory"
	applymovement 2, Frux_Gym_Peter_Movement_3
# 339 "data/maps/Frux_Gym/scripts.pory"
	waitmovement 0
# 340 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_5
# 341 "data/maps/Frux_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_FRUX_GYM_3, Peter1
# 342 "data/maps/Frux_Gym/scripts.pory"
	msgbox Frux_Gym_Peter_Text_6
# 343 "data/maps/Frux_Gym/scripts.pory"
	closemessage
# 344 "data/maps/Frux_Gym/scripts.pory"
	turnobject 2, DIR_EAST
# 345 "data/maps/Frux_Gym/scripts.pory"
	setflag FLAG_FRUX_GYM_QUESTION_3
# 346 "data/maps/Frux_Gym/scripts.pory"
	release
	end


# 68 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_0:
# 68 "data/maps/Frux_Gym/scripts.pory"
	walk_left
	step_end

# 75 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_1:
# 75 "data/maps/Frux_Gym/scripts.pory"
	jump_in_place_right
	step_end

# 83 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_2:
# 83 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_right
# 83 "data/maps/Frux_Gym/scripts.pory"
	face_down
	step_end

# 89 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_3:
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_right
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 89 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
	step_end

# 101 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_4:
# 101 "data/maps/Frux_Gym/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_5:
# 108 "data/maps/Frux_Gym/scripts.pory"
	jump_in_place_down
	step_end

# 116 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_6:
# 116 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_up
# 116 "data/maps/Frux_Gym/scripts.pory"
	face_player
	step_end

# 122 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Bruce_Movement_7:
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
# 122 "data/maps/Frux_Gym/scripts.pory"
	walk_fast_down
	step_end

# 230 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Gisele_Movement_0:
# 230 "data/maps/Frux_Gym/scripts.pory"
	face_player
	step_end

# 277 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Peter_Movement_0:
# 277 "data/maps/Frux_Gym/scripts.pory"
	face_down
	step_end

# 283 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Peter_Movement_1:
# 283 "data/maps/Frux_Gym/scripts.pory"
	face_right
	step_end

# 287 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Peter_Movement_2:
# 287 "data/maps/Frux_Gym/scripts.pory"
	face_left
# 287 "data/maps/Frux_Gym/scripts.pory"
	emote_exclamation_mark
	step_end

# 298 "data/maps/Frux_Gym/scripts.pory"
Frux_Gym_Peter_Movement_3:
# 298 "data/maps/Frux_Gym/scripts.pory"
	face_left
	step_end

Frux_Gym_Bruce_Text_0:
# 10 "data/maps/Frux_Gym/scripts.pory"
	.string "Bruce$"

Frux_Gym_Bruce_Text_1:
# 11 "data/maps/Frux_Gym/scripts.pory"
	.string "{PLAYER}! What a pleasure to see you.\n"
	.string "Wanna practice? I'm in a fighting mood!$"

Frux_Gym_Bruce_Text_2:
# 14 "data/maps/Frux_Gym/scripts.pory"
	.string "Haha, I knew it! Bring it on!$"

Frux_Gym_Bruce_Text_3:
# 20 "data/maps/Frux_Gym/scripts.pory"
	.string "Yes! That's what I'm talking about!\n"
	.string "Thanks, {PLAYER}. Every time I see\l"
	.string "you, it's like I'm reliving my youth!\l"
	.string "Here, let me heal your party.$"

Frux_Gym_Bruce_Text_4:
# 29 "data/maps/Frux_Gym/scripts.pory"
	.string "Until next time!$"

Frux_Gym_Bruce_Text_5:
# 39 "data/maps/Frux_Gym/scripts.pory"
	.string "Oh, you just wanted to say hi! Well,\n"
	.string "hello {PLAYER}! Hahaha.$"

Frux_Gym_Bruce_Text_6:
# 51 "data/maps/Frux_Gym/scripts.pory"
	.string "Ah, you're back! I hope the guys didn't\n"
	.string "cause you too much trouble. Now, it's\l"
	.string "time for your final test! Bring it on!$"

Frux_Gym_Bruce_Text_7:
# 56 "data/maps/Frux_Gym/scripts.pory"
	.string "Haha, great job! That was hard as steel!\n"
	.string "You fully deserve that big, shiny\l"
	.string "emblem. Here you go-$"

Frux_Gym_Bruce_Text_8:
# 63 "data/maps/Frux_Gym/scripts.pory"
	.string "Oops, if you'll excuse me. I have to take\n"
	.string "this call.$"

Frux_Gym_Bruce_Text_9:
# 71 "data/maps/Frux_Gym/scripts.pory"
	.string "Oi oi, what's up?$"

Frux_Gym_Bruce_Text_10:
# 79 "data/maps/Frux_Gym/scripts.pory"
	.string "WHAT?? I'm coming right now, don't move\n"
	.string "a muscle!$"

Frux_Gym_Bruce_Text_11:
# 86 "data/maps/Frux_Gym/scripts.pory"
	.string "Something terrible happened in the\n"
	.string "Ironair. You're a strong trainer, so\l"
	.string "meet me there. It's the big volcano\l"
	.string "behind Frux. Quick!$"

Frux_Gym_Bruce_Text_12:
# 138 "data/maps/Frux_Gym/scripts.pory"
	.string "So, have you talked to all my employees\n"
	.string "yet?$"

Frux_Gym_Bruce_Text_13:
# 147 "data/maps/Frux_Gym/scripts.pory"
	.string "...Hmm? What's that?$"

Frux_Gym_Bruce_Text_14:
# 149 "data/maps/Frux_Gym/scripts.pory"
	.string "...$"

Frux_Gym_Bruce_Text_15:
# 151 "data/maps/Frux_Gym/scripts.pory"
	.string "{PLAYER}! Yes! I'm so glad to see that\n"
	.string "you're alive! I've heard of what\l"
	.string "happened to you, are you OK?$"

Frux_Gym_Bruce_Text_16:
# 155 "data/maps/Frux_Gym/scripts.pory"
	.string "...You're here for the challenge? Woah,\n"
	.string "well, uh, you know the rules: go see my\l"
	.string "employees and come back once you've\l"
	.string "talked to all of them. I hope you're well\l"
	.string "prepared, because they're some of my\l"
	.string "best guys!$"

Frux_Gym_Clarence_Text_0:
# 176 "data/maps/Frux_Gym/scripts.pory"
	.string "...So hungry...\n"
	.string "...Ugh...$"

Frux_Gym_Clarence_Text_1:
# 183 "data/maps/Frux_Gym/scripts.pory"
	.string "...I'm hungry. Can you make me a\n"
	.string "sandwich?$"

Frux_Gym_Clarence_Text_2:
# 187 "data/maps/Frux_Gym/scripts.pory"
	.string "...Hmmm. Wrong answer.$"

Frux_Gym_Clarence_Text_3:
# 190 "data/maps/Frux_Gym/scripts.pory"
	.string "Ok. I'll tell Bruce that you didn't want\n"
	.string "to make me sandwich.$"

Frux_Gym_Gisele_Text_0:
# 214 "data/maps/Frux_Gym/scripts.pory"
	.string "Beware! If you stay too long in front of\n"
	.string "the ovens, you might get burned!$"

Frux_Gym_Gisele_Text_1:
# 222 "data/maps/Frux_Gym/scripts.pory"
	.string "Oi oi, welcome new challenger!$"

Frux_Gym_Gisele_Text_2:
# 227 "data/maps/Frux_Gym/scripts.pory"
	.string "Those are special ovens, and we use'em\n"
	.string "to melt the iron that we mined in the\l"
	.string "Ironair. As you can feel, they are extra\l"
	.string "hot!$"

Frux_Gym_Gisele_Text_3:
# 233 "data/maps/Frux_Gym/scripts.pory"
	.string "But, how hot do they need to be?$"

Frux_Gym_Gisele_Text_4:
# 237 "data/maps/Frux_Gym/scripts.pory"
	.string "Nuh-uh! That's 2800 degF. You'll have to\n"
	.string "fight me!$"

Frux_Gym_Gisele_Text_5:
# 240 "data/maps/Frux_Gym/scripts.pory"
	.string "Haha, thanks for that great fight! I'll\n"
	.string "tell Bruce. You can go now!$"

Frux_Gym_Gisele_Text_6:
# 245 "data/maps/Frux_Gym/scripts.pory"
	.string "Ding ding! That's right answer! Good\n"
	.string "job! I'll tell Bruce. You can go now!$"

Frux_Gym_Peter_Text_0:
# 268 "data/maps/Frux_Gym/scripts.pory"
	.string "...Zzzzz....$"

Frux_Gym_Peter_Text_1:
# 290 "data/maps/Frux_Gym/scripts.pory"
	.string "AH! Where am I?$"

Frux_Gym_Peter_Text_2:
# 293 "data/maps/Frux_Gym/scripts.pory"
	.string "Ah yeah, right, the, uh, challenge. Uh,\n"
	.string "the question, let me think...$"

Frux_Gym_Peter_Text_3:
# 300 "data/maps/Frux_Gym/scripts.pory"
	.string "Ok, I got it: what's the formula for the\n"
	.string "specific, rusty looking type of iron\l"
	.string "oxide that we can find in and around\l"
	.string "the Ironair?$"

Frux_Gym_Peter_Text_4:
# 304 "data/maps/Frux_Gym/scripts.pory"
	.string "Uh...$"

Frux_Gym_Peter_Text_5:
# 311 "data/maps/Frux_Gym/scripts.pory"
	.string "Nope! Wrong answer! You have to face me\n"
	.string "now, unfortunately.$"

Frux_Gym_Peter_Text_6:
# 313 "data/maps/Frux_Gym/scripts.pory"
	.string "Cool, I'll tell Bruce. Let me sleep now.$"

Frux_Gym_Peter_Text_7:
# 327 "data/maps/Frux_Gym/scripts.pory"
	.string "Yep, that's right! I'll tell Bruce. Let me\n"
	.string "sleep now.$"

Bruce1::
# 164 "data/maps/Frux_Gym/scripts.pory"
	.string "Now that's what I call a fight!$"

BruceRematch::
# 168 "data/maps/Frux_Gym/scripts.pory"
	.string "Impressive, as always!$"

Clarence1::
# 206 "data/maps/Frux_Gym/scripts.pory"
	.string "Hmmm... So no sandwich?$"

Gisele1::
# 261 "data/maps/Frux_Gym/scripts.pory"
	.string "Scorching hot!$"

Peter1::
# 352 "data/maps/Frux_Gym/scripts.pory"
	.string "Hmmm... Too tired...$"
