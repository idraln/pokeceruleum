# 1 "data/maps/PastoralRd/scripts.pory"

# 2 "data/maps/PastoralRd/scripts.pory"
PastoralRd_MapScripts::
# 3 "data/maps/PastoralRd/scripts.pory"
	.byte 0

PastoralRd_Woman1::
# 7 "data/maps/PastoralRd/scripts.pory"
	lock
# 8 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 9 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Woman1_Text_0
# 10 "data/maps/PastoralRd/scripts.pory"
	turnobject 14, DIR_NORTH
# 11 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Boy1::
# 16 "data/maps/PastoralRd/scripts.pory"
	lock
# 17 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 18 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Boy1_Text_0
# 19 "data/maps/PastoralRd/scripts.pory"
	turnobject 4, DIR_NORTH
# 20 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Boy2::
# 25 "data/maps/PastoralRd/scripts.pory"
	lock
# 26 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 27 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Boy2_Text_0
# 28 "data/maps/PastoralRd/scripts.pory"
	turnobject 2, DIR_NORTH
# 29 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Man1::
# 34 "data/maps/PastoralRd/scripts.pory"
	lock
# 35 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 36 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Man1_Text_0
# 37 "data/maps/PastoralRd/scripts.pory"
	turnobject 15, DIR_NORTH
# 38 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_BugCatcher::
# 43 "data/maps/PastoralRd/scripts.pory"
	lock
# 44 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 45 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_BugCatcher_Text_0
# 46 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Russell::
# 51 "data/maps/PastoralRd/scripts.pory"
	trainerbattle_single TRAINER_PASTORAL_1, Russell1, Russell2
# 52 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Russell_Text_0
# 53 "data/maps/PastoralRd/scripts.pory"
	closemessage
	end


PastoralRd_Syeda::
# 58 "data/maps/PastoralRd/scripts.pory"
	trainerbattle_single TRAINER_PASTORAL_2, Syeda1, Syeda2
# 59 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Syeda_Text_0
# 60 "data/maps/PastoralRd/scripts.pory"
	closemessage
	end


PastoralRd_Adil::
# 65 "data/maps/PastoralRd/scripts.pory"
	trainerbattle_single TRAINER_PASTORAL_3, Adil1, Adil2
# 66 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Adil_Text_0
# 67 "data/maps/PastoralRd/scripts.pory"
	closemessage
	end


PastoralRd_Seth::
# 72 "data/maps/PastoralRd/scripts.pory"
	trainerbattle_single TRAINER_PASTORAL_4, Seth1, Seth2
# 73 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Seth_Text_0
# 74 "data/maps/PastoralRd/scripts.pory"
	closemessage
	end


PastoralRd_Eka::
# 79 "data/maps/PastoralRd/scripts.pory"
	compare VAR_MAIN_STORY, 14
	goto_if_eq PastoralRd_Eka_1
# 111 "data/maps/PastoralRd/scripts.pory"
	compare VAR_MAIN_STORY, 13
	goto_if_eq PastoralRd_Eka_2
# 121 "data/maps/PastoralRd/scripts.pory"
	lock
# 122 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 123 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 124 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_3
# 125 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 126 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_4
# 127 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 128 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_5
# 129 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 130 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_4
# 131 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 132 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_6
# 133 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 134 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_4
# 135 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 136 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_7
# 137 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 138 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_MAIN_STORY, 13
# 139 "data/maps/PastoralRd/scripts.pory"
	startquest QUEST_SCARF
# 140 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Eka_1:
# 80 "data/maps/PastoralRd/scripts.pory"
	lock
# 81 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 82 "data/maps/PastoralRd/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 83 "data/maps/PastoralRd/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PastoralRd_Eka_6
# 104 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 105 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_2
# 106 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 107 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Eka_2:
# 112 "data/maps/PastoralRd/scripts.pory"
	lock
# 113 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 114 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 115 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_2
# 116 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 117 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Eka_6:
# 84 "data/maps/PastoralRd/scripts.pory"
	playse SE_PIN
# 85 "data/maps/PastoralRd/scripts.pory"
	applymovement 17, PastoralRd_Eka_Movement_0
# 86 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 87 "data/maps/PastoralRd/scripts.pory"
	delay 30
# 88 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Eka_Text_0
# 89 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Eka_Text_1
# 90 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 91 "data/maps/PastoralRd/scripts.pory"
	closemessage
# 92 "data/maps/PastoralRd/scripts.pory"
	applymovement 17, PastoralRd_Eka_Movement_1
# 93 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 94 "data/maps/PastoralRd/scripts.pory"
	removeobject 17
# 95 "data/maps/PastoralRd/scripts.pory"
	playse SE_EXIT
# 96 "data/maps/PastoralRd/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 97 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_EKA
# 98 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_ANGRY_VINEGROTTO
# 99 "data/maps/PastoralRd/scripts.pory"
	completequest QUEST_SCARF
# 100 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Man2::
# 146 "data/maps/PastoralRd/scripts.pory"
	lock
# 147 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 148 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Man2_Text_0
# 149 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Girl::
# 154 "data/maps/PastoralRd/scripts.pory"
	lock
# 155 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 156 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Girl_Text_0
# 157 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Sam::
# 162 "data/maps/PastoralRd/scripts.pory"
	lock
# 163 "data/maps/PastoralRd/scripts.pory"
	clearflag FLAG_PASTORAL_SAM
# 164 "data/maps/PastoralRd/scripts.pory"
	addobject 16
# 165 "data/maps/PastoralRd/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 166 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq PastoralRd_Sam_1
# 174 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq PastoralRd_Sam_2
# 182 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq PastoralRd_Sam_3
# 190 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq PastoralRd_Sam_4
	return

PastoralRd_Sam_1:
# 167 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_0
# 168 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 169 "data/maps/PastoralRd/scripts.pory"
	playse SE_PIN
# 170 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_1
# 171 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 172 "data/maps/PastoralRd/scripts.pory"
	goto PastoralRd_Sam2
	return

PastoralRd_Sam_2:
# 175 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_2
# 176 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 177 "data/maps/PastoralRd/scripts.pory"
	playse SE_PIN
# 178 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_1
# 179 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 180 "data/maps/PastoralRd/scripts.pory"
	goto PastoralRd_Sam2
	return

PastoralRd_Sam_3:
# 183 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_0
# 184 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 185 "data/maps/PastoralRd/scripts.pory"
	playse SE_PIN
# 186 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_3
# 187 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 188 "data/maps/PastoralRd/scripts.pory"
	goto PastoralRd_Sam2
	return

PastoralRd_Sam_4:
# 191 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_2
# 192 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 193 "data/maps/PastoralRd/scripts.pory"
	playse SE_PIN
# 194 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam_Movement_3
# 195 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 196 "data/maps/PastoralRd/scripts.pory"
	goto PastoralRd_Sam2
	return


PastoralRd_Sam2::
# 201 "data/maps/PastoralRd/scripts.pory"
	lock
# 202 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 203 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 204 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Sam2_Text_0
# 205 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Sam2_Text_1
# 206 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 207 "data/maps/PastoralRd/scripts.pory"
	closemessage
# 208 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_TRAINERBATTLE, 0
# 209 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 210 "data/maps/PastoralRd/scripts.pory"
	trainerbattle_no_intro TRAINER_PASTORAL_SAM, PastoralSam
# 211 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq PastoralRd_Sam2_1
# 271 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Sam2_Text_0
# 272 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Sam2_Text_4
# 273 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 274 "data/maps/PastoralRd/scripts.pory"
	closemessage
# 275 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq PastoralRd_Sam2_12
# 286 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq PastoralRd_Sam2_13
# 297 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq PastoralRd_Sam2_14
# 308 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq PastoralRd_Sam2_15
	return

PastoralRd_Sam2_1:
# 212 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Sam2_Text_0
# 213 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Sam2_Text_2
# 214 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 215 "data/maps/PastoralRd/scripts.pory"
	closemessage
# 216 "data/maps/PastoralRd/scripts.pory"
	fadescreen FADE_TO_BLACK
# 217 "data/maps/PastoralRd/scripts.pory"
	playfanfare MUS_HEAL
# 218 "data/maps/PastoralRd/scripts.pory"
	waitfanfare
# 219 "data/maps/PastoralRd/scripts.pory"
	special HealPlayerParty
# 220 "data/maps/PastoralRd/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 221 "data/maps/PastoralRd/scripts.pory"
	namebox PastoralRd_Sam2_Text_0
# 222 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Sam2_Text_3
# 223 "data/maps/PastoralRd/scripts.pory"
	hidenamebox
# 224 "data/maps/PastoralRd/scripts.pory"
	closemessage
# 225 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq PastoralRd_Sam2_4
# 236 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq PastoralRd_Sam2_5
# 247 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq PastoralRd_Sam2_6
# 258 "data/maps/PastoralRd/scripts.pory"
	compare VAR_TEMP_1, 20
	goto_if_eq PastoralRd_Sam2_7
	return

PastoralRd_Sam2_4:
# 226 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_0
# 227 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 228 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 229 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 230 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 231 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 232 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 233 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_5:
# 237 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_0
# 238 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 239 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 240 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 241 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 242 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 243 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 244 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_6:
# 248 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_1
# 249 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 250 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 251 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 252 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 253 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 254 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 255 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_7:
# 259 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_1
# 260 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 261 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 262 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 263 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 264 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 265 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 266 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_12:
# 276 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_0
# 277 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 278 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 279 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 280 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 281 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 282 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 283 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_13:
# 287 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_0
# 288 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 289 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 290 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 291 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 292 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 293 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 294 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_14:
# 298 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_1
# 299 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 300 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 301 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 302 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 303 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 304 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 305 "data/maps/PastoralRd/scripts.pory"
	release
	end

PastoralRd_Sam2_15:
# 309 "data/maps/PastoralRd/scripts.pory"
	applymovement 16, PastoralRd_Sam2_Movement_1
# 310 "data/maps/PastoralRd/scripts.pory"
	waitmovement 0
# 311 "data/maps/PastoralRd/scripts.pory"
	removeobject 16
# 312 "data/maps/PastoralRd/scripts.pory"
	setflag FLAG_PASTORAL_SAM
# 313 "data/maps/PastoralRd/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 6
# 314 "data/maps/PastoralRd/scripts.pory"
	fadeoutbgm 1
# 315 "data/maps/PastoralRd/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 316 "data/maps/PastoralRd/scripts.pory"
	release
	end


PastoralRd_Retreat::
# 323 "data/maps/PastoralRd/scripts.pory"
	lockall
# 324 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Retreat_Text_0
# 325 "data/maps/PastoralRd/scripts.pory"
	releaseall
	end


PastoralRd_VineSign::
# 330 "data/maps/PastoralRd/scripts.pory"
	lockall
# 331 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_VineSign_Text_0
# 332 "data/maps/PastoralRd/scripts.pory"
	releaseall
	end


PastoralRd_VineSign2::
# 337 "data/maps/PastoralRd/scripts.pory"
	lockall
# 338 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_VineSign2_Text_0
# 339 "data/maps/PastoralRd/scripts.pory"
	releaseall
	end


PastoralRd_Zigzagoon::
# 344 "data/maps/PastoralRd/scripts.pory"
	lock
# 345 "data/maps/PastoralRd/scripts.pory"
	faceplayer
# 346 "data/maps/PastoralRd/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 347 "data/maps/PastoralRd/scripts.pory"
	msgbox PastoralRd_Zigzagoon_Text_0
# 348 "data/maps/PastoralRd/scripts.pory"
	release
	end


# 85 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Eka_Movement_0:
# 85 "data/maps/PastoralRd/scripts.pory"
	emote_exclamation_mark
	step_end

# 92 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Eka_Movement_1:
# 92 "data/maps/PastoralRd/scripts.pory"
	face_up
# 92 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 92 "data/maps/PastoralRd/scripts.pory"
	walk_up
	step_end

# 167 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam_Movement_0:
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 167 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 167 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 167 "data/maps/PastoralRd/scripts.pory"
	delay_16
	step_end

# 170 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam_Movement_1:
# 170 "data/maps/PastoralRd/scripts.pory"
	emote_exclamation_mark
# 170 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 170 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 170 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 170 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 170 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 170 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 170 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 170 "data/maps/PastoralRd/scripts.pory"
	face_left
	step_end

# 175 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam_Movement_2:
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 175 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 175 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 175 "data/maps/PastoralRd/scripts.pory"
	delay_16
	step_end

# 186 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam_Movement_3:
# 186 "data/maps/PastoralRd/scripts.pory"
	emote_exclamation_mark
# 186 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 186 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 186 "data/maps/PastoralRd/scripts.pory"
	delay_16
# 186 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 186 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 186 "data/maps/PastoralRd/scripts.pory"
	walk_fast_right
# 186 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 186 "data/maps/PastoralRd/scripts.pory"
	face_left
	step_end

# 226 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam2_Movement_0:
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_down
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 226 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
	step_end

# 248 "data/maps/PastoralRd/scripts.pory"
PastoralRd_Sam2_Movement_1:
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_up
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
# 248 "data/maps/PastoralRd/scripts.pory"
	walk_fast_left
	step_end

PastoralRd_Woman1_Text_0:
# 9 "data/maps/PastoralRd/scripts.pory"
	.string "Today is the day! The guys at the cabin\n"
	.string "have finally finished setting up an\l"
	.string "insect shelter! That means we'll be able\l"
	.string "to observe them and maybe even catch\l"
	.string "some!$"

PastoralRd_Boy1_Text_0:
# 18 "data/maps/PastoralRd/scripts.pory"
	.string "I can't wait! I'll finally be able to\n"
	.string "catch my very first Pokémon! How\l"
	.string "exciting!!$"

PastoralRd_Boy2_Text_0:
# 27 "data/maps/PastoralRd/scripts.pory"
	.string "They say that some bugs can be as huge\n"
	.string "as us humans! I need to see that with\l"
	.string "my very eyes.$"

PastoralRd_Man1_Text_0:
# 36 "data/maps/PastoralRd/scripts.pory"
	.string "I know this place is supposed to be a\n"
	.string "safe haven for insects, but if\l"
	.string "something attacks me, I won't hesitate\l"
	.string "to squish it.$"

PastoralRd_BugCatcher_Text_0:
# 45 "data/maps/PastoralRd/scripts.pory"
	.string "Ouf... I need 5 minutes to catch my\n"
	.string "breath. There's so much to see inside!$"

PastoralRd_Russell_Text_0:
# 52 "data/maps/PastoralRd/scripts.pory"
	.string "Bugs don't seem to be powerful, but boy\n"
	.string "do they look cool!$"

PastoralRd_Syeda_Text_0:
# 59 "data/maps/PastoralRd/scripts.pory"
	.string "You should check what's inside the cave\n"
	.string "that's on the right. That's a hundred\l"
	.string "times better than that refuge.$"

PastoralRd_Adil_Text_0:
# 66 "data/maps/PastoralRd/scripts.pory"
	.string "Vine Grotto sure is a challenge in\n"
	.string "itself. It's so humid in there!$"

PastoralRd_Seth_Text_0:
# 73 "data/maps/PastoralRd/scripts.pory"
	.string "It doesn't matter, I've already made\n"
	.string "enough cash to treat myself with the\l"
	.string "latest Pokédam... Fufufu...$"

PastoralRd_Eka_Text_0:
# 88 "data/maps/PastoralRd/scripts.pory"
	.string "Eka$"

PastoralRd_Eka_Text_1:
# 89 "data/maps/PastoralRd/scripts.pory"
	.string "My scarf! You retrieved it! Impressive.\n"
	.string "Come to my gym, I need to see what\l"
	.string "you're made of.$"

PastoralRd_Eka_Text_2:
# 105 "data/maps/PastoralRd/scripts.pory"
	.string "Well? My scarf?? I don't have all day!\n"
	.string "Go!$"

PastoralRd_Eka_Text_3:
# 124 "data/maps/PastoralRd/scripts.pory"
	.string "NO! No one goes inside until I decide\n"
	.string "otherwise! I lost my scarf, I think\l"
	.string "someone stole it from me! This is\l"
	.string "unacceptable!$"

PastoralRd_Eka_Text_4:
# 126 "data/maps/PastoralRd/scripts.pory"
	.string "...$"

PastoralRd_Eka_Text_5:
# 128 "data/maps/PastoralRd/scripts.pory"
	.string "I don't care! If you want to go through,\n"
	.string "you can help me. I think the thieves\l"
	.string "went to the south, to Cali! They were\l"
	.string "dressed weirdly, covered in pink.$"

PastoralRd_Eka_Text_6:
# 132 "data/maps/PastoralRd/scripts.pory"
	.string "Why don't I go myself? Have you seen\n"
	.string "the size of me? Hello?! Plus, I have\l"
	.string "other stuff to care about, like my gym.\l"
	.string "I don't have time for this.$"

PastoralRd_Eka_Text_7:
# 136 "data/maps/PastoralRd/scripts.pory"
	.string "...Why am I not in my gym? You're asking\n"
	.string "too many questions! I bet you want to\l"
	.string "go there, to progress in the Council\l"
	.string "Challenge, right? Then go get me that\l"
	.string "scarf, otherwise you don't get to\l"
	.string "challenge me. Hah.$"

PastoralRd_Man2_Text_0:
# 148 "data/maps/PastoralRd/scripts.pory"
	.string "I wonder why some trees are yellow,\n"
	.string "while some aren't. Could it be because\l"
	.string "of the bugs?$"

PastoralRd_Girl_Text_0:
# 156 "data/maps/PastoralRd/scripts.pory"
	.string "The owner of the cabin gave me honey!\n"
	.string "You should get some!$"

PastoralRd_Sam2_Text_0:
# 204 "data/maps/PastoralRd/scripts.pory"
	.string "Sam$"

PastoralRd_Sam2_Text_1:
# 205 "data/maps/PastoralRd/scripts.pory"
	.string "{PLAYER}!! Fancy seeing you here! Did\n"
	.string "you defeat the first gym already? As\l"
	.string "for me, I decided to take a detour to\l"
	.string "the insect shelter to see what was\l"
	.string "going on there. I even managed to\l"
	.string "capture a super Pokémon, look!$"

PastoralRd_Sam2_Text_2:
# 213 "data/maps/PastoralRd/scripts.pory"
	.string "Doesn't Pinsir look majestic? I'm\n"
	.string "already in love! I feel like we're going\l"
	.string "to accomplish great things, him and me!!\l"
	.string "Anyways, let me heal your Pokémons.$"

PastoralRd_Sam2_Text_3:
# 222 "data/maps/PastoralRd/scripts.pory"
	.string "Alright? Good! I'm going to face the\n"
	.string "first member now, wish me luck!$"

PastoralRd_Sam2_Text_4:
# 272 "data/maps/PastoralRd/scripts.pory"
	.string "I caught a Pinsir, and he looks\n"
	.string "absolutely majestic! I'm already in\l"
	.string "love! I feel like we're going to\l"
	.string "accomplish great things, him and me!!\l"
	.string "I'm going to face the first member, now.\l"
	.string "Wish me luck!$"

PastoralRd_Retreat_Text_0:
# 324 "data/maps/PastoralRd/scripts.pory"
	.string "Pastoral Rd.'s Oak Retreat\n"
	.string "We also take care of your Pokémons!$"

PastoralRd_VineSign_Text_0:
# 331 "data/maps/PastoralRd/scripts.pory"
	.string "{UP_ARROW} Vine Grotto\n"
	.string "{DOWN_ARROW} Littoral Rd.$"

PastoralRd_VineSign2_Text_0:
# 338 "data/maps/PastoralRd/scripts.pory"
	.string "{UP_ARROW} Vine Grotto\n"
	.string "{RIGHT_ARROW} Ohulinn$"

PastoralRd_Zigzagoon_Text_0:
# 347 "data/maps/PastoralRd/scripts.pory"
	.string "Zig! Zig!$"

Russell1::
# 352 "data/maps/PastoralRd/scripts.pory"
	.string "Let me show you what I've captured at\n"
	.string "the shelter!$"

Russell2::
# 356 "data/maps/PastoralRd/scripts.pory"
	.string "Well, it seems like they aren't as\n"
	.string "powerful as I imagined...$"

Syeda1::
# 360 "data/maps/PastoralRd/scripts.pory"
	.string "Bugs don't stand a chance against my\n"
	.string "Pokémons!$"

Syeda2::
# 364 "data/maps/PastoralRd/scripts.pory"
	.string "And I don't stand a chance against\n"
	.string "you...$"

Adil1::
# 368 "data/maps/PastoralRd/scripts.pory"
	.string "Perfect! Nothing better than a battle\n"
	.string "to rest my weary legs!$"

Adil2::
# 372 "data/maps/PastoralRd/scripts.pory"
	.string "Haha, I'm fully rested now! Thanks!$"

Seth1::
# 376 "data/maps/PastoralRd/scripts.pory"
	.string "Fufufu... Every trainer comes out of\n"
	.string "that cave exhausted... And I finish\l"
	.string "them off. Easy money...$"

Seth2::
# 380 "data/maps/PastoralRd/scripts.pory"
	.string "Woah... Aren't you tired?$"

PastoralSam::
# 384 "data/maps/PastoralRd/scripts.pory"
	.string "Did you see that absolute beast? Wow!!$"
