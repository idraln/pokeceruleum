# 1 "data/maps/Passwacan_Gym/scripts.pory"

# 2 "data/maps/Passwacan_Gym/scripts.pory"
Passwacan_Gym_MapScripts::
# 3 "data/maps/Passwacan_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Passwacan_Gym_OnLoad
# 4 "data/maps/Passwacan_Gym/scripts.pory"
	.byte 0

Passwacan_Gym_OnLoad::
# 8 "data/maps/Passwacan_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Passwacan_Gym_OnLoad_1
# 25 "data/maps/Passwacan_Gym/scripts.pory"
	setflashlevel 7
# 26 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_BLUE, 2
	goto_if_eq Passwacan_Gym_OnLoad_5
Passwacan_Gym_OnLoad_4:
# 33 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_GREEN, 2
	goto_if_eq Passwacan_Gym_OnLoad_8
Passwacan_Gym_OnLoad_7:
# 40 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED, 2
	goto_if_eq Passwacan_Gym_OnLoad_11
Passwacan_Gym_OnLoad_10:
# 49 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
	return

Passwacan_Gym_OnLoad_1:
# 9 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 15, METATILE_Misc1_FloorLeft, FALSE
# 10 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 16, METATILE_Misc1_BlueGateTopLeft, FALSE
# 11 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 15, METATILE_Misc1_FloorRight, FALSE
# 12 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 16, METATILE_Misc1_BlueGateTopRight, FALSE
# 13 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 15, METATILE_Misc1_FloorLeft, FALSE
# 14 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 16, METATILE_Misc1_GreenGateTopLeft, FALSE
# 15 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 15, METATILE_Misc1_FloorRight, FALSE
# 16 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 16, METATILE_Misc1_GreenGateTopRight, FALSE
# 17 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 15, METATILE_Misc1_FloorLeft, FALSE
# 18 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 16, METATILE_Misc1_RedGateTopLeft, FALSE
# 19 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 15, METATILE_Misc1_FloorRight, FALSE
# 20 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 16, METATILE_Misc1_RedGateTopRight, FALSE
# 21 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
	end

Passwacan_Gym_OnLoad_5:
# 27 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 1, 24, METATILE_Misc1_BlueSwitchOpen, TRUE
# 28 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 15, METATILE_Misc1_FloorLeft, FALSE
# 29 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 16, METATILE_Misc1_BlueGateTopLeft, FALSE
# 30 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 15, METATILE_Misc1_FloorRight, FALSE
# 31 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 16, METATILE_Misc1_BlueGateTopRight, FALSE
	goto Passwacan_Gym_OnLoad_4

Passwacan_Gym_OnLoad_8:
# 34 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 18, 24, METATILE_Misc1_GreenSwitchOpen, TRUE
# 35 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 15, METATILE_Misc1_FloorLeft, FALSE
# 36 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 16, METATILE_Misc1_GreenGateTopLeft, FALSE
# 37 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 15, METATILE_Misc1_FloorRight, FALSE
# 38 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 16, METATILE_Misc1_GreenGateTopRight, FALSE
	goto Passwacan_Gym_OnLoad_7

Passwacan_Gym_OnLoad_11:
# 41 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_Misc1_RedSwitchOpen, TRUE
# 42 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 18, 7, METATILE_Misc1_RedSwitchOpen, TRUE
# 43 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 15, METATILE_Misc1_FloorLeft, FALSE
# 44 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 16, METATILE_Misc1_RedGateTopLeft, FALSE
# 45 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 15, METATILE_Misc1_FloorRight, FALSE
# 46 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 16, METATILE_Misc1_RedGateTopRight, FALSE
# 47 "data/maps/Passwacan_Gym/scripts.pory"
	setflashlevel 0
	goto Passwacan_Gym_OnLoad_10


Passwacan_Gym_Totem::
# 54 "data/maps/Passwacan_Gym/scripts.pory"
	lockall
# 55 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Totem_Text_0
# 56 "data/maps/Passwacan_Gym/scripts.pory"
	releaseall
	end


Passwacan_Gym_BlueSwitch::
# 61 "data/maps/Passwacan_Gym/scripts.pory"
	lockall
# 62 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_BLUE, 2
	goto_if_eq Passwacan_Gym_BlueSwitch_2
# 66 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_1, MSGBOX_YESNO
# 67 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_Gym_BlueSwitch_5
# 80 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_3
Passwacan_Gym_BlueSwitch_1:
# 83 "data/maps/Passwacan_Gym/scripts.pory"
	releaseall
	end

Passwacan_Gym_BlueSwitch_2:
# 63 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_0
	goto Passwacan_Gym_BlueSwitch_1

Passwacan_Gym_BlueSwitch_5:
# 68 "data/maps/Passwacan_Gym/scripts.pory"
	playse SE_CLICK
# 69 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 1, 24, METATILE_Misc1_BlueSwitchOpen, TRUE
# 70 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 15, METATILE_Misc1_FloorLeft, FALSE
# 71 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 5, 16, METATILE_Misc1_BlueGateTopLeft, FALSE
# 72 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 15, METATILE_Misc1_FloorRight, FALSE
# 73 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 6, 16, METATILE_Misc1_BlueGateTopRight, FALSE
# 74 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 75 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 76 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_BLUE, 2
# 77 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_2
	goto Passwacan_Gym_BlueSwitch_1


Passwacan_Gym_GreenSwitch::
# 88 "data/maps/Passwacan_Gym/scripts.pory"
	lockall
# 89 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_GREEN, 2
	goto_if_eq Passwacan_Gym_GreenSwitch_2
# 93 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_GreenSwitch_Text_0, MSGBOX_YESNO
# 94 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_Gym_GreenSwitch_5
# 107 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_3
Passwacan_Gym_GreenSwitch_1:
# 111 "data/maps/Passwacan_Gym/scripts.pory"
	releaseall
	end

Passwacan_Gym_GreenSwitch_2:
# 90 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_0
	goto Passwacan_Gym_GreenSwitch_1

Passwacan_Gym_GreenSwitch_5:
# 95 "data/maps/Passwacan_Gym/scripts.pory"
	playse SE_CLICK
# 96 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 18, 24, METATILE_Misc1_GreenSwitchOpen, TRUE
# 97 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 15, METATILE_Misc1_FloorLeft, FALSE
# 98 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 13, 16, METATILE_Misc1_GreenGateTopLeft, FALSE
# 99 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 15, METATILE_Misc1_FloorRight, FALSE
# 100 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 14, 16, METATILE_Misc1_GreenGateTopRight, FALSE
# 101 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 103 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_GREEN, 2
# 104 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_2
	goto Passwacan_Gym_GreenSwitch_1


Passwacan_Gym_RedSwitch1::
# 116 "data/maps/Passwacan_Gym/scripts.pory"
	lockall
# 117 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED1, 2
	goto_if_eq Passwacan_Gym_RedSwitch1_2
# 121 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_RedSwitch1_Text_0, MSGBOX_YESNO
# 122 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_Gym_RedSwitch1_5
# 143 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_3
Passwacan_Gym_RedSwitch1_1:
# 146 "data/maps/Passwacan_Gym/scripts.pory"
	releaseall
	end

Passwacan_Gym_RedSwitch1_2:
# 118 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_0
	goto Passwacan_Gym_RedSwitch1_1

Passwacan_Gym_RedSwitch1_5:
# 123 "data/maps/Passwacan_Gym/scripts.pory"
	playse SE_CLICK
# 124 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_Misc1_RedSwitchOpen, TRUE
# 125 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 126 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 127 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_RED1, 2
# 128 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_2
# 129 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED1, 2
	goto_if_eq Passwacan_Gym_RedSwitch1_9
	goto Passwacan_Gym_RedSwitch1_1

Passwacan_Gym_RedSwitch1_8:
# 130 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 15, METATILE_Misc1_FloorLeft, FALSE
# 131 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 16, METATILE_Misc1_RedGateTopLeft, FALSE
# 132 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 15, METATILE_Misc1_FloorRight, FALSE
# 133 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 16, METATILE_Misc1_RedGateTopRight, FALSE
# 134 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 135 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 136 "data/maps/Passwacan_Gym/scripts.pory"
	animateflash 0
# 137 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_RED, 2
# 138 "data/maps/Passwacan_Gym/scripts.pory"
	playse MUS_LEVEL_UP
# 139 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_RedSwitch1_Text_1
	goto Passwacan_Gym_RedSwitch1_1

Passwacan_Gym_RedSwitch1_9:
# 129 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED2, 2
	goto_if_eq Passwacan_Gym_RedSwitch1_8
	goto Passwacan_Gym_RedSwitch1_1


Passwacan_Gym_RedSwitch2::
# 151 "data/maps/Passwacan_Gym/scripts.pory"
	lockall
# 152 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED2, 2
	goto_if_eq Passwacan_Gym_RedSwitch2_2
# 156 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_RedSwitch1_Text_0, MSGBOX_YESNO
# 157 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_Gym_RedSwitch2_5
# 178 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_3
Passwacan_Gym_RedSwitch2_1:
# 181 "data/maps/Passwacan_Gym/scripts.pory"
	releaseall
	end

Passwacan_Gym_RedSwitch2_2:
# 153 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_0
	goto Passwacan_Gym_RedSwitch2_1

Passwacan_Gym_RedSwitch2_5:
# 158 "data/maps/Passwacan_Gym/scripts.pory"
	playse SE_CLICK
# 159 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 18, 7, METATILE_Misc1_RedSwitchOpen, TRUE
# 160 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 161 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 162 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_RED2, 2
# 163 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_BlueSwitch_Text_2
# 164 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED1, 2
	goto_if_eq Passwacan_Gym_RedSwitch2_9
	goto Passwacan_Gym_RedSwitch2_1

Passwacan_Gym_RedSwitch2_8:
# 165 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 15, METATILE_Misc1_FloorLeft, FALSE
# 166 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 9, 16, METATILE_Misc1_RedGateTopLeft, FALSE
# 167 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 15, METATILE_Misc1_FloorRight, FALSE
# 168 "data/maps/Passwacan_Gym/scripts.pory"
	setmetatile 10, 16, METATILE_Misc1_RedGateTopRight, FALSE
# 169 "data/maps/Passwacan_Gym/scripts.pory"
	special DrawWholeMapView
# 170 "data/maps/Passwacan_Gym/scripts.pory"
	delay 30
# 171 "data/maps/Passwacan_Gym/scripts.pory"
	animateflash 0
# 172 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_PASSWACAN_RED, 2
# 173 "data/maps/Passwacan_Gym/scripts.pory"
	playse MUS_LEVEL_UP
# 174 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_RedSwitch1_Text_1
	goto Passwacan_Gym_RedSwitch2_1

Passwacan_Gym_RedSwitch2_9:
# 164 "data/maps/Passwacan_Gym/scripts.pory"
	compare VAR_PASSWACAN_RED2, 2
	goto_if_eq Passwacan_Gym_RedSwitch2_8
	goto Passwacan_Gym_RedSwitch2_1


Passwacan_Gym_Joris::
# 186 "data/maps/Passwacan_Gym/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_GYM_1, Joris1, Joris2
# 187 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Joris_Text_0
# 188 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
	end


Passwacan_Gym_Azalea::
# 201 "data/maps/Passwacan_Gym/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_GYM_2, Azalea1, Azalea2
# 202 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Azalea_Text_0
# 203 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
	end


Passwacan_Gym_Zoe::
# 216 "data/maps/Passwacan_Gym/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_GYM_3, Zoe1, Zoe2
# 217 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Zoe_Text_0
# 218 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
	end


Passwacan_Gym_Boris::
# 231 "data/maps/Passwacan_Gym/scripts.pory"
	trainerbattle_single TRAINER_PASSWACAN_GYM_4, Boris1, Boris2
# 232 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Boris_Text_0
# 233 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
	end


Passwacan_Gym_Andre::
# 246 "data/maps/Passwacan_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Passwacan_Gym_Andre_1
# 256 "data/maps/Passwacan_Gym/scripts.pory"
	lock
# 257 "data/maps/Passwacan_Gym/scripts.pory"
	faceplayer
# 258 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 259 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_2
# 260 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 261 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
# 262 "data/maps/Passwacan_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRE, Andre1
# 263 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 264 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_3
# 265 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 266 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_4
# 267 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
# 268 "data/maps/Passwacan_Gym/scripts.pory"
	delay 40
# 269 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 270 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_5
# 271 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
# 272 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 273 "data/maps/Passwacan_Gym/scripts.pory"
	delay 40
# 274 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 275 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_6
# 276 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 277 "data/maps/Passwacan_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 278 "data/maps/Passwacan_Gym/scripts.pory"
	setvar VAR_SIDE_STORY_PASSWACAN, 1
# 279 "data/maps/Passwacan_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 280 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_7
# 281 "data/maps/Passwacan_Gym/scripts.pory"
	waitfanfare
# 282 "data/maps/Passwacan_Gym/scripts.pory"
	closemessage
# 283 "data/maps/Passwacan_Gym/scripts.pory"
	delay 20
# 284 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 285 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_8
# 286 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 287 "data/maps/Passwacan_Gym/scripts.pory"
	giveitem ITEM_TM45
# 288 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 289 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_9
# 290 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 291 "data/maps/Passwacan_Gym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 292 "data/maps/Passwacan_Gym/scripts.pory"
	release
	end

Passwacan_Gym_Andre_1:
# 247 "data/maps/Passwacan_Gym/scripts.pory"
	lock
# 248 "data/maps/Passwacan_Gym/scripts.pory"
	faceplayer
# 249 "data/maps/Passwacan_Gym/scripts.pory"
	namebox Passwacan_Gym_Andre_Text_0
# 250 "data/maps/Passwacan_Gym/scripts.pory"
	msgbox Passwacan_Gym_Andre_Text_1
# 251 "data/maps/Passwacan_Gym/scripts.pory"
	hidenamebox
# 252 "data/maps/Passwacan_Gym/scripts.pory"
	release
	end


Passwacan_Gym_Totem_Text_0:
# 55 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Passwacan's Gym\n"
	.string "Council member: Andre$"

Passwacan_Gym_BlueSwitch_Text_0:
# 63 "data/maps/Passwacan_Gym/scripts.pory"
	.string "The switch has already been activated.$"

Passwacan_Gym_BlueSwitch_Text_1:
# 66 "data/maps/Passwacan_Gym/scripts.pory"
	.string "It's a blue switch. Activate it?$"

Passwacan_Gym_BlueSwitch_Text_2:
# 77 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Switch activated!$"

Passwacan_Gym_BlueSwitch_Text_3:
# 80 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Better take some time to think about\n"
	.string "it.$"

Passwacan_Gym_GreenSwitch_Text_0:
# 93 "data/maps/Passwacan_Gym/scripts.pory"
	.string "It's a green switch. Activate it?$"

Passwacan_Gym_RedSwitch1_Text_0:
# 121 "data/maps/Passwacan_Gym/scripts.pory"
	.string "It's a red switch. Activate it?$"

Passwacan_Gym_RedSwitch1_Text_1:
# 139 "data/maps/Passwacan_Gym/scripts.pory"
	.string "The path to the Council Member is now\n"
	.string "open!$"

Passwacan_Gym_Joris_Text_0:
# 187 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Doesn't the usual 4/4 rhythm feel\n"
	.string "boring? What do you think?$"

Passwacan_Gym_Azalea_Text_0:
# 202 "data/maps/Passwacan_Gym/scripts.pory"
	.string "We're in a power plant, and somehow the\n"
	.string "lights are always off. What's the point?$"

Passwacan_Gym_Zoe_Text_0:
# 217 "data/maps/Passwacan_Gym/scripts.pory"
	.string "After 8 years working at Bruce's\n"
	.string "foundry, I've finally secured a spot in\l"
	.string "the power plant! Close to the sea!$"

Passwacan_Gym_Boris_Text_0:
# 232 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Some chords are easier to play than\n"
	.string "some others. I'd rather stick to the\l"
	.string "classics.$"

Passwacan_Gym_Andre_Text_0:
# 249 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Andre$"

Passwacan_Gym_Andre_Text_1:
# 250 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Oh, another battle, already? I'm afraid\n"
	.string "I've not fully recovered from the last\l"
	.string "time, haha!$"

Passwacan_Gym_Andre_Text_2:
# 259 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Oh, I remember you! You're the kid with\n"
	.string "the Xatu, right? You're taking the\l"
	.string "Challenge once again? Hell yeah, I've\l"
	.string "been dreading revenge! Do you remember\l"
	.string "this gym? It used to be a waste\l"
	.string "treatment plant, I turned it into a\l"
	.string "power plant! Bring it on!$"

Passwacan_Gym_Andre_Text_3:
# 264 "data/maps/Passwacan_Gym/scripts.pory"
	.string "...What happened to your Xatu?$"

Passwacan_Gym_Andre_Text_4:
# 266 "data/maps/Passwacan_Gym/scripts.pory"
	.string "...$"

Passwacan_Gym_Andre_Text_5:
# 270 "data/maps/Passwacan_Gym/scripts.pory"
	.string "...Woah. I'm sorry to hear. I hope you\n"
	.string "guys meet each other very soon.$"

Passwacan_Gym_Andre_Text_6:
# 275 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Anyway! You know the drill. Take that\n"
	.string "Emblem.$"

Passwacan_Gym_Andre_Text_7:
# 280 "data/maps/Passwacan_Gym/scripts.pory"
	.string "You've earned the Sludge Emblem!$"

Passwacan_Gym_Andre_Text_8:
# 285 "data/maps/Passwacan_Gym/scripts.pory"
	.string "You also earned the right to this TM!\n"
	.string "And it's different from last time, what\l"
	.string "a treat!$"

Passwacan_Gym_Andre_Text_9:
# 289 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Please, keep me updated. I really hope\n"
	.string "you'll find your Xatu soon.$"

Joris1::
# 192 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Feel the power of rock'n roll in your\n"
	.string "veins!$"

Joris2::
# 196 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Woah, nice chords bro!$"

Azalea1::
# 207 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Aaah! Who are you??$"

Azalea2::
# 211 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Man, I hate the dark...$"

Zoe1::
# 222 "data/maps/Passwacan_Gym/scripts.pory"
	.string "This is my first day here! I'm so\n"
	.string "excited!$"

Zoe2::
# 226 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Haha, I've been told that the level\n"
	.string "would be higher here!$"

Boris1::
# 237 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Have you ever heard of Green Day?$"

Boris2::
# 241 "data/maps/Passwacan_Gym/scripts.pory"
	.string "Playing their songs is easier than\n"
	.string "battling.$"

Andre1::
# 297 "data/maps/Passwacan_Gym/scripts.pory"
	.string "...Huh?$"
