# 1 "data/maps/CapeEast_House/scripts.pory"

# 2 "data/maps/CapeEast_House/scripts.pory"
CapeEast_House_MapScripts::
# 3 "data/maps/CapeEast_House/scripts.pory"
	.byte 0

CapeEast_Sam_Intro_Right::
# 7 "data/maps/CapeEast_House/scripts.pory"
	lock
# 8 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_WAKINGUP, 0
	goto_if_eq CapeEast_Sam_Intro_Right_1
# 47 "data/maps/CapeEast_House/scripts.pory"
	release
	end

CapeEast_Sam_Intro_Right_1:
# 9 "data/maps/CapeEast_House/scripts.pory"
	fwdtime 10, 00
# 10 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 11 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamSurprised
# 12 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 13 "data/maps/CapeEast_House/scripts.pory"
	delay 40
# 14 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_0
# 15 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 16 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamToBed
# 17 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 18 "data/maps/CapeEast_House/scripts.pory"
	delay 20
# 19 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_1
# 20 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 21 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_3
# 22 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 23 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSurprised
# 24 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 25 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 26 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_Sam_Intro_Right_Movement_0
# 27 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 28 "data/maps/CapeEast_House/scripts.pory"
	delay 20
# 29 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_4
# 30 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 31 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_5
# 32 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 33 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamOutside
# 34 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 35 "data/maps/CapeEast_House/scripts.pory"
	hideobjectat 1, MAP_CAPE_EAST_HOUSE
# 36 "data/maps/CapeEast_House/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamDisappear
# 39 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 40 "data/maps/CapeEast_House/scripts.pory"
	setvar VAR_WAKINGUP, 1
# 41 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_STARTER
# 43 "data/maps/CapeEast_House/scripts.pory"
	release
	end


CapeEast_Sam_Intro_Left::
# 53 "data/maps/CapeEast_House/scripts.pory"
	lock
# 54 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_WAKINGUP, 0
	goto_if_eq CapeEast_Sam_Intro_Left_1
# 94 "data/maps/CapeEast_House/scripts.pory"
	release
	end

CapeEast_Sam_Intro_Left_1:
# 55 "data/maps/CapeEast_House/scripts.pory"
	fwdtime 10, 00
# 56 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 57 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamSurprised
# 58 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 59 "data/maps/CapeEast_House/scripts.pory"
	delay 40
# 60 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_0
# 61 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 62 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOutOfBedLeft
# 63 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamToBed
# 64 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 65 "data/maps/CapeEast_House/scripts.pory"
	delay 50
# 66 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_1
# 67 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 68 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_3
# 69 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 70 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerSurprised
# 71 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 72 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 73 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_Sam_Intro_Right_Movement_0
# 74 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 75 "data/maps/CapeEast_House/scripts.pory"
	delay 30
# 76 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_4
# 77 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 78 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_5
# 79 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 80 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamOutside
# 81 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 82 "data/maps/CapeEast_House/scripts.pory"
	hideobjectat 1, MAP_CAPE_EAST_HOUSE
# 83 "data/maps/CapeEast_House/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamDisappear
# 86 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 87 "data/maps/CapeEast_House/scripts.pory"
	setvar VAR_WAKINGUP, 1
# 88 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 89 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_STARTER
# 90 "data/maps/CapeEast_House/scripts.pory"
	release
	end


CapeEast_Sam_After::
# 100 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_MAIN_STORY, 3
	goto_if_eq CapeEast_Sam_After_1
# 120 "data/maps/CapeEast_House/scripts.pory"
	lock
# 121 "data/maps/CapeEast_House/scripts.pory"
	faceplayer
# 122 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 123 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_After_Text_4
# 124 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 125 "data/maps/CapeEast_House/scripts.pory"
	release
	end

CapeEast_Sam_After_1:
# 101 "data/maps/CapeEast_House/scripts.pory"
	lock
# 102 "data/maps/CapeEast_House/scripts.pory"
	faceplayer
# 103 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 104 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_After_Text_1
# 105 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 106 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 107 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 108 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_After_Text_2
# 109 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 110 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 111 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 112 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_After_Text_3
# 113 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 114 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 115 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 116 "data/maps/CapeEast_House/scripts.pory"
	trainerbattle_no_intro TRAINER_SAM_1, SamBattle2
# 117 "data/maps/CapeEast_House/scripts.pory"
	goto CapeEast_SamsHouse_AfterCombat
	return


CapeEast_SamsHouse_AfterCombat::
# 131 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq CapeEast_SamsHouse_AfterCombat_1
# 135 "data/maps/CapeEast_House/scripts.pory"
	call CapeEast_SamsHouse_AfterCombatDialog
	return

CapeEast_SamsHouse_AfterCombat_1:
# 132 "data/maps/CapeEast_House/scripts.pory"
	call CapeEast_SamsHouse_AfterCombatDialog
	return


CapeEast_SamsHouse_AfterCombatDialog::
# 140 "data/maps/CapeEast_House/scripts.pory"
	special HealPlayerParty
# 141 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 142 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_0
# 143 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 144 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 145 "data/maps/CapeEast_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/CapeEast_House/scripts.pory"
	playfanfare MUS_HEAL
# 147 "data/maps/CapeEast_House/scripts.pory"
	waitfanfare
# 148 "data/maps/CapeEast_House/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 149 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 150 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_1
# 151 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 152 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 153 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 154 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_2
# 155 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 156 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_Sam_Intro_Right_Text_2
# 157 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 158 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_3
# 159 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 160 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 161 "data/maps/CapeEast_House/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 162 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq CapeEast_SamsHouse_AfterCombatDialog_1
# 200 "data/maps/CapeEast_House/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq CapeEast_SamsHouse_AfterCombatDialog_2
# 240 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure1
# 241 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 242 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 243 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_4
# 244 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 245 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 246 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure2
# 247 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 248 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_1
# 249 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 250 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 251 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, CapeEast_Sam_Intro_Right_Movement_0
# 252 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 253 "data/maps/CapeEast_House/scripts.pory"
	delay 30
# 254 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 255 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_5
# 256 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 257 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 258 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure3
# 259 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 260 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFacesSamHouse
# 261 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 262 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 263 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_6
# 264 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 265 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 266 "data/maps/CapeEast_House/scripts.pory"
	setvar VAR_MAIN_STORY, 4
# 267 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamRegister
# 268 "data/maps/CapeEast_House/scripts.pory"
	waitmovement
# 269 "data/maps/CapeEast_House/scripts.pory"
	removeobject 1
# 270 "data/maps/CapeEast_House/scripts.pory"
	playse SE_EXIT
# 272 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 273 "data/maps/CapeEast_House/scripts.pory"
	release
	end

CapeEast_SamsHouse_AfterCombatDialog_1:
# 163 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochureY3
# 164 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_0
# 165 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 166 "data/maps/CapeEast_House/scripts.pory"
	delay 40
# 167 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 168 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_4
# 169 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 170 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 171 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochureY32
# 172 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 173 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_1
# 174 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 175 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 176 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, CapeEast_Sam_Intro_Right_Movement_0
# 177 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 178 "data/maps/CapeEast_House/scripts.pory"
	delay 30
# 179 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 180 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_5
# 181 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 182 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 183 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure3
# 184 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 185 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_2
# 186 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 187 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 188 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_6
# 189 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 190 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 191 "data/maps/CapeEast_House/scripts.pory"
	setvar VAR_MAIN_STORY, 4
# 192 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamRegister
# 193 "data/maps/CapeEast_House/scripts.pory"
	waitmovement
# 194 "data/maps/CapeEast_House/scripts.pory"
	removeobject 1
# 195 "data/maps/CapeEast_House/scripts.pory"
	playse SE_EXIT
# 196 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 197 "data/maps/CapeEast_House/scripts.pory"
	release
	end

CapeEast_SamsHouse_AfterCombatDialog_2:
# 201 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure1
# 202 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_0
# 203 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 204 "data/maps/CapeEast_House/scripts.pory"
	delay 40
# 205 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 206 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_4
# 207 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 208 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 209 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure2
# 210 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 211 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_1
# 212 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 213 "data/maps/CapeEast_House/scripts.pory"
	playse SE_PIN
# 214 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, CapeEast_Sam_Intro_Right_Movement_0
# 215 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 216 "data/maps/CapeEast_House/scripts.pory"
	delay 30
# 217 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 218 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_5
# 219 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 220 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 221 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamBrochure3
# 222 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 223 "data/maps/CapeEast_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CapeEast_SamsHouse_AfterCombatDialog_Movement_3
# 224 "data/maps/CapeEast_House/scripts.pory"
	waitmovement 0
# 225 "data/maps/CapeEast_House/scripts.pory"
	namebox CapeEast_Sam_After_Text_0
# 226 "data/maps/CapeEast_House/scripts.pory"
	msgbox CapeEast_SamsHouse_AfterCombatDialog_Text_6
# 227 "data/maps/CapeEast_House/scripts.pory"
	closemessage
# 228 "data/maps/CapeEast_House/scripts.pory"
	hidenamebox
# 229 "data/maps/CapeEast_House/scripts.pory"
	setvar VAR_MAIN_STORY, 4
# 230 "data/maps/CapeEast_House/scripts.pory"
	applymovement 1, SamRegister
# 231 "data/maps/CapeEast_House/scripts.pory"
	waitmovement
# 232 "data/maps/CapeEast_House/scripts.pory"
	removeobject 1
# 233 "data/maps/CapeEast_House/scripts.pory"
	playse SE_EXIT
# 235 "data/maps/CapeEast_House/scripts.pory"
	setflag FLAG_SAM_NOT_HOUSE
# 236 "data/maps/CapeEast_House/scripts.pory"
	release
	end


# 278 "data/maps/CapeEast_House/scripts.pory"
SamSurprised:
# 279 "data/maps/CapeEast_House/scripts.pory"
	emote_exclamation_mark
# 280 "data/maps/CapeEast_House/scripts.pory"
	face_left
	step_end

# 283 "data/maps/CapeEast_House/scripts.pory"
SamToBed:
# 284 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_left
# 284 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_left
	step_end

# 287 "data/maps/CapeEast_House/scripts.pory"
PlayerSurprised:
# 288 "data/maps/CapeEast_House/scripts.pory"
	face_down
# 289 "data/maps/CapeEast_House/scripts.pory"
	delay_8
# 290 "data/maps/CapeEast_House/scripts.pory"
	face_right
# 291 "data/maps/CapeEast_House/scripts.pory"
	delay_8
# 292 "data/maps/CapeEast_House/scripts.pory"
	face_up
# 293 "data/maps/CapeEast_House/scripts.pory"
	delay_8
# 294 "data/maps/CapeEast_House/scripts.pory"
	face_left
# 295 "data/maps/CapeEast_House/scripts.pory"
	delay_8
# 296 "data/maps/CapeEast_House/scripts.pory"
	face_right
# 297 "data/maps/CapeEast_House/scripts.pory"
	delay_8
# 298 "data/maps/CapeEast_House/scripts.pory"
	delay_16
	step_end

# 301 "data/maps/CapeEast_House/scripts.pory"
PlayerOutOfBedLeft:
# 302 "data/maps/CapeEast_House/scripts.pory"
	walk_up
# 303 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 303 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 304 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 305 "data/maps/CapeEast_House/scripts.pory"
	face_right
	step_end

# 308 "data/maps/CapeEast_House/scripts.pory"
SamOutside:
# 309 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
# 309 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
# 310 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_right
# 310 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_right
# 310 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_right
# 310 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_right
# 311 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
# 311 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
	step_end

# 314 "data/maps/CapeEast_House/scripts.pory"
SamDisappear:
# 315 "data/maps/CapeEast_House/scripts.pory"
	walk_down
	step_end

# 318 "data/maps/CapeEast_House/scripts.pory"
SamBrochure1:
# 319 "data/maps/CapeEast_House/scripts.pory"
	walk_up
# 319 "data/maps/CapeEast_House/scripts.pory"
	walk_up
# 320 "data/maps/CapeEast_House/scripts.pory"
	walk_left
# 321 "data/maps/CapeEast_House/scripts.pory"
	face_up
# 322 "data/maps/CapeEast_House/scripts.pory"
	delay_16
# 322 "data/maps/CapeEast_House/scripts.pory"
	delay_16
	step_end

# 325 "data/maps/CapeEast_House/scripts.pory"
SamBrochure2:
# 326 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 327 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 328 "data/maps/CapeEast_House/scripts.pory"
	walk_up
# 329 "data/maps/CapeEast_House/scripts.pory"
	delay_16
# 329 "data/maps/CapeEast_House/scripts.pory"
	delay_16
	step_end

# 332 "data/maps/CapeEast_House/scripts.pory"
SamBrochure3:
# 333 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 334 "data/maps/CapeEast_House/scripts.pory"
	walk_left
# 334 "data/maps/CapeEast_House/scripts.pory"
	walk_left
# 335 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 335 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 336 "data/maps/CapeEast_House/scripts.pory"
	face_player
	step_end

# 339 "data/maps/CapeEast_House/scripts.pory"
SamRegister:
# 340 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
# 340 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
# 341 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_left
# 342 "data/maps/CapeEast_House/scripts.pory"
	walk_fast_down
	step_end

# 345 "data/maps/CapeEast_House/scripts.pory"
PlayerFacesSamHouse:
# 346 "data/maps/CapeEast_House/scripts.pory"
	face_right
	step_end

# 349 "data/maps/CapeEast_House/scripts.pory"
SamBrochureY3:
# 350 "data/maps/CapeEast_House/scripts.pory"
	walk_left
# 351 "data/maps/CapeEast_House/scripts.pory"
	walk_up
# 351 "data/maps/CapeEast_House/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/CapeEast_House/scripts.pory"
SamBrochureY32:
# 355 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 355 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 356 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 357 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 357 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 357 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 357 "data/maps/CapeEast_House/scripts.pory"
	walk_right
# 358 "data/maps/CapeEast_House/scripts.pory"
	walk_up
	step_end

# 26 "data/maps/CapeEast_House/scripts.pory"
CapeEast_Sam_Intro_Right_Movement_0:
# 26 "data/maps/CapeEast_House/scripts.pory"
	emote_exclamation_mark
	step_end

# 164 "data/maps/CapeEast_House/scripts.pory"
CapeEast_SamsHouse_AfterCombatDialog_Movement_0:
# 164 "data/maps/CapeEast_House/scripts.pory"
	face_up
	step_end

# 173 "data/maps/CapeEast_House/scripts.pory"
CapeEast_SamsHouse_AfterCombatDialog_Movement_1:
# 173 "data/maps/CapeEast_House/scripts.pory"
	face_right
	step_end

# 185 "data/maps/CapeEast_House/scripts.pory"
CapeEast_SamsHouse_AfterCombatDialog_Movement_2:
# 185 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 185 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 185 "data/maps/CapeEast_House/scripts.pory"
	face_right
	step_end

# 223 "data/maps/CapeEast_House/scripts.pory"
CapeEast_SamsHouse_AfterCombatDialog_Movement_3:
# 223 "data/maps/CapeEast_House/scripts.pory"
	walk_down
# 223 "data/maps/CapeEast_House/scripts.pory"
	walk_right
	step_end

CapeEast_Sam_Intro_Right_Text_0:
# 14 "data/maps/CapeEast_House/scripts.pory"
	.string "Finally, you're awake!$"

CapeEast_Sam_Intro_Right_Text_1:
# 19 "data/maps/CapeEast_House/scripts.pory"
	.string "You passed out as soon as you got on\n"
	.string "the boat. What's your name? And what\l"
	.string "were you doing alone in the deep seas?\l"
	.string "Were you on some kind of adventure?\l"
	.string "It's not usual to go there alone, you\l"
	.string "could've been really hurt.$"

CapeEast_Sam_Intro_Right_Text_2:
# 20 "data/maps/CapeEast_House/scripts.pory"
	.string "...$"

CapeEast_Sam_Intro_Right_Text_3:
# 21 "data/maps/CapeEast_House/scripts.pory"
	.string "Huh? What's that? You were going to\n"
	.string "battle the President of Thura? Weird...\l"
	.string "I don't see any Pokéballs on your belt.$"

CapeEast_Sam_Intro_Right_Text_4:
# 29 "data/maps/CapeEast_House/scripts.pory"
	.string "Oh snap! You lost all your Pokémons\n"
	.string "while you were stranded at sea? That's\l"
	.string "a bummer. Is that all you lost?$"

CapeEast_Sam_Intro_Right_Text_5:
# 31 "data/maps/CapeEast_House/scripts.pory"
	.string "You lost your ID aswell? Well, in that\n"
	.string "case, you might have to go to the Town\l"
	.string "Hall to sort this out. Here, follow me.\l"
	.string "Let me show you the way.$"

CapeEast_Sam_After_Text_0:
# 103 "data/maps/CapeEast_House/scripts.pory"
	.string "Sam$"

CapeEast_Sam_After_Text_1:
# 104 "data/maps/CapeEast_House/scripts.pory"
	.string "So, have you talked to the guys at the\n"
	.string "Town Hall yet?$"

CapeEast_Sam_After_Text_2:
# 108 "data/maps/CapeEast_House/scripts.pory"
	.string "Oh, they gave you a new Pokémon! What a\n"
	.string "cutie!!$"

CapeEast_Sam_After_Text_3:
# 112 "data/maps/CapeEast_House/scripts.pory"
	.string "...Listen, maybe now is not the time,\n"
	.string "maybe you're too tired, but would you\l"
	.string "like to battle me? I've got Pokémons of\l"
	.string "my own, but I've never battled anyone. I\l"
	.string "guess there's a first to everything eh?\l"
	.string "Alright, let's do it!$"

CapeEast_Sam_After_Text_4:
# 123 "data/maps/CapeEast_House/scripts.pory"
	.string "{PLAYER}! Any news to share?$"

CapeEast_SamsHouse_AfterCombatDialog_Text_0:
# 142 "data/maps/CapeEast_House/scripts.pory"
	.string "I can't believe it! My first Pokémon\n"
	.string "battle! It was so exciting! Here, let me\l"
	.string "heal your party.$"

CapeEast_SamsHouse_AfterCombatDialog_Text_1:
# 150 "data/maps/CapeEast_House/scripts.pory"
	.string "Anyways. What else did they tell you at\n"
	.string "the Town Hall?$"

CapeEast_SamsHouse_AfterCombatDialog_Text_2:
# 154 "data/maps/CapeEast_House/scripts.pory"
	.string "¥5 000 to go back to the continent?\n"
	.string "Damn, that is so much money... I would\l"
	.string "love to take you back myself, but my\l"
	.string "boat is on the verge of falling apart,\l"
	.string "plus I don't have much money left for\l"
	.string "fuel. Well, I guess you're stuck here!\l"
	.string "Haha!... Uhm.$"

CapeEast_SamsHouse_AfterCombatDialog_Text_3:
# 158 "data/maps/CapeEast_House/scripts.pory"
	.string "...Actually, wait. I received a brochure\n"
	.string "not that long ago. Let me find it real\l"
	.string "quick.$"

CapeEast_SamsHouse_AfterCombatDialog_Text_4:
# 168 "data/maps/CapeEast_House/scripts.pory"
	.string "...Not here...$"

CapeEast_SamsHouse_AfterCombatDialog_Text_5:
# 180 "data/maps/CapeEast_House/scripts.pory"
	.string "There it is!$"

CapeEast_SamsHouse_AfterCombatDialog_Text_6:
# 188 "data/maps/CapeEast_House/scripts.pory"
	.string "...Blah blah blah...\p"
	.string "...Rocheval's Country Fest... No...\p"
	.string "Ah! I knew it!\p"
	.string "It says right here that there's a\n"
	.string "contest coming soon at the Leisure\l"
	.string "Hall! And guess what? It's today!\l"
	.string "There's even a prize pool: ¥2 000 for\l"
	.string "the winner, ¥1 000 for the finalist, and\l"
	.string "a Potion for everyone else. Anyway, you\l"
	.string "said that you were one of the best\l"
	.string "trainers of Thura right? Go register\l"
	.string "for the contest and get that money\l"
	.string "baby! I'll register too, so we have even\l"
	.string "more chance to get you that ticket!$"

SamBattle1::
# 363 "data/maps/CapeEast_House/scripts.pory"
	.string "...Listen, maybe now is not the time,\n"
	.string "maybe you're too tired, but would you\l"
	.string "like to battle me? I've got Pokémons of\l"
	.string "my own, but I've never battled anyone. I\l"
	.string "guess there's a first to everything eh?\l"
	.string "Alright, let's do it!$"

SamBattle2::
# 367 "data/maps/CapeEast_House/scripts.pory"
	.string "Wow! That was so intense!$"
