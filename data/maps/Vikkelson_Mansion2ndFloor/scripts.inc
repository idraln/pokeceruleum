# 1 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"

# 2 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_MapScripts::
# 3 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.byte 0

Vikkelson_Mansion2ndFloor_5::
# 7 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	lock
# 8 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special SpawnCameraObject
# 9 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_5_Movement_0
# 10 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 11 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 12 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_0
# 13 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 14 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_1
# 15 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 16 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 17 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_1
# 18 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 19 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 20 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_2
# 21 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 22 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_5_Movement_2
# 23 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 24 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special RemoveCameraObject
# 25 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_Mansion2ndFloor_5_Movement_3
# 27 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 28 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_4
# 29 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 30 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_3
# 31 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 32 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	trainerbattle_no_intro TRAINER_VIKKIE_1, Vikkie1
# 33 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	goto Vikkelson_Mansion2ndFloor_AfterCombat
	return


Vikkelson_Mansion2ndFloor_6::
# 37 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	lock
# 38 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_6_Movement_0
# 40 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 41 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_0
# 42 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 43 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_1
# 44 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 45 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 46 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_1
# 47 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 48 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 49 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_2
# 50 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 51 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_6_Movement_1
# 52 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 53 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special RemoveCameraObject
# 54 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_Mansion2ndFloor_6_Movement_2
# 56 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 57 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_4
# 58 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 59 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_5_Text_3
# 60 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 61 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	trainerbattle_no_intro TRAINER_VIKKIE_1, Vikkie1
# 62 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	goto Vikkelson_Mansion2ndFloor_AfterCombat
	return


Vikkelson_Mansion2ndFloor_AfterCombat::
# 66 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq Vikkelson_Mansion2ndFloor_AfterCombat_1
# 70 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	call Vikkelson_Mansion2ndFloor_Win
	return

Vikkelson_Mansion2ndFloor_AfterCombat_1:
# 67 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	call Vikkelson_Mansion2ndFloor_Loss
	return


Vikkelson_Mansion2ndFloor_Win::
# 75 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 76 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_Win_Text_1
# 77 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 78 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	call Vikkelson_Mansion2ndFloor_AfterCombatDialog
	return


Vikkelson_Mansion2ndFloor_Loss::
# 83 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 84 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_Loss_Text_0
# 85 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 86 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	call Vikkelson_Mansion2ndFloor_AfterCombatDialog
	return


Vikkelson_Mansion2ndFloor_AfterCombatDialog::
# 91 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_0
# 92 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 93 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_1
# 94 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 95 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 96 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 97 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 98 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 99 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 100 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 75
# 101 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 102 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 104 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 105 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 25
# 106 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 107 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 108 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 2, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_1
# 110 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 111 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_2
# 112 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 113 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 114 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 115 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 2, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_2
# 117 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 118 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 119 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 120 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_3
# 121 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 122 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 123 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 124 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 125 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 126 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 38
# 127 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 128 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 129 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 130 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 3, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_3
# 132 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 133 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 134 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_4
# 135 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 136 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 137 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 3, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_3
# 138 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 139 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 140 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 141 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 142 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 51
# 143 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 144 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 145 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 146 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 147 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 148 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_5
# 149 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 150 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 151 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 152 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 153 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 154 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 155 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_6
# 156 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 157 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 158 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 159 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 64
# 160 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 161 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 162 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 163 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 164 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_7
# 165 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 166 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 167 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 168 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 169 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 7
# 170 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 75
# 171 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 172 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 174 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8004, 8
# 175 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 176 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	special TeleportCamera
# 177 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 178 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 179 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 180 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_8
# 181 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 182 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 183 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 184 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 185 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_9
# 186 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 187 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 188 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 189 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_4
# 190 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 191 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_10
# 192 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 193 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	multichoice 0, 8, MULTI_VIKKIE, TRUE
# 194 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	case 0, Vikkelson_Mansion2ndFloor_AfterCombatDialog_2
# 267 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	case 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_3
	return

Vikkelson_Mansion2ndFloor_AfterCombatDialog_2:
# 196 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 197 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 198 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 199 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 200 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 201 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_11
# 202 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 203 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 204 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_4
# 205 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 206 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 207 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 208 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_12
# 209 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_13
# 210 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 211 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 212 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	playse SE_PIN
# 213 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_2
# 214 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 215 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 216 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 217 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_14
# 218 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 219 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 220 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 221 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 222 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_15
# 223 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 224 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_0
# 225 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 226 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_16
# 227 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 228 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 229 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 230 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 231 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_17
# 232 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 233 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 234 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 235 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 236 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 237 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 238 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 239 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_18
# 240 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 241 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 242 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 243 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_4
# 244 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 245 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 246 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 247 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_19
# 248 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 249 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 250 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	giveitem ITEM_MEGA_RING
# 251 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 252 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 253 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 254 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 255 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 256 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 257 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_20
# 258 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 259 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_5
# 260 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 261 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_MAIN_STORY, 17
# 262 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_ROCK_BLACK
# 263 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_SCIENTIST_GLASVILLE
# 264 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_CORINNA
# 265 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	release
	end

Vikkelson_Mansion2ndFloor_AfterCombatDialog_3:
# 268 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 269 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	playse SE_PIN
# 270 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_2
# 271 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 272 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 273 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 274 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_21
# 275 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 276 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 277 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 278 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 279 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 280 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 281 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 282 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_22
# 283 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_12
# 284 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_13
# 285 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 286 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 287 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	playse SE_PIN
# 288 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_2
# 289 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 290 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 291 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_5_Movement_4
# 292 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 293 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 294 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_14
# 295 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 296 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 297 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 40
# 298 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 299 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 300 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 301 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_15
# 302 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 303 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_0
# 304 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 305 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 306 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 307 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_23
# 308 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 309 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 310 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 311 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 312 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 313 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 314 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 315 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_18
# 316 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 317 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 318 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 319 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_4
# 320 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 321 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 322 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 323 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_19
# 324 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 325 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 326 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	giveitem ITEM_MEGA_RING
# 327 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	closemessage
# 328 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 329 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement 1, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0
# 330 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 331 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay 20
# 332 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 333 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_20
# 334 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 335 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_5
# 336 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	waitmovement 0
# 337 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setvar VAR_MAIN_STORY, 17
# 338 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_ROCK_BLACK
# 339 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_SCIENTIST_GLASVILLE
# 340 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	setflag FLAG_CORINNA
# 341 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	release
	end


Vikkelson_Mansion2ndFloor_Vikkie::
# 351 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	lock
# 352 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	faceplayer
# 353 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	namebox Vikkelson_Mansion2ndFloor_Win_Text_0
# 354 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	msgbox Vikkelson_Mansion2ndFloor_Vikkie_Text_0
# 355 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	hidenamebox
# 356 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	release
	end


# 9 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_5_Movement_0:
# 9 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_diag_northeast
# 9 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_diag_northeast
	step_end

# 14 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_5_Movement_1:
# 14 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_down
	step_end

# 22 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_5_Movement_2:
# 22 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_diag_southwest
# 22 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_diag_southwest
	step_end

# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_5_Movement_3:
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_up
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_up
# 26 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_left
	step_end

# 28 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_5_Movement_4:
# 28 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_right
	step_end

# 39 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_6_Movement_0:
# 39 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_diag_northeast
# 39 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_6_Movement_1:
# 51 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_slow_diag_southwest
# 51 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_slow_down
	step_end

# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_6_Movement_2:
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_up
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_up
# 55 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_left
	step_end

# 96 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_0:
# 96 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_up
	step_end

# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_1:
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_up
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay_16
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay_16
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_up
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay_16
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	delay_16
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_down
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_down
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_right
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_up
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_fast_up
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	jump_in_place_up
# 109 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	jump_in_place_up
	step_end

# 116 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_2:
# 116 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	emote_exclamation_mark
	step_end

# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_3:
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
# 131 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
	step_end

# 243 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_4:
# 243 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	face_player
	step_end

# 259 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
Vikkelson_Mansion2ndFloor_AfterCombatDialog_Movement_5:
# 259 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	walk_right
	step_end

Vikkelson_Mansion2ndFloor_5_Text_0:
# 12 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "...You're finally here.$"

Vikkelson_Mansion2ndFloor_5_Text_1:
# 17 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "You're so young. Yet, so brave. Facing\n"
	.string "what you've been through... How can the\l"
	.string "world be so cruel to a face like yours.$"

Vikkelson_Mansion2ndFloor_5_Text_2:
# 20 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Please, approach. Don't be scared.$"

Vikkelson_Mansion2ndFloor_5_Text_3:
# 30 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Now, I need to be sure that you're\n"
	.string "strong enough to hear what I have to\l"
	.string "unveil. Face me, and my dear Persian, in\l"
	.string "a display of unconditional love between\l"
	.string "humans and Pokémon.$"

Vikkelson_Mansion2ndFloor_Win_Text_0:
# 75 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Vikkie$"

Vikkelson_Mansion2ndFloor_Win_Text_1:
# 76 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I haven't been lied to... Even my dearest\n"
	.string "companion couldn't do anything against\l"
	.string "your might. No wonder you have climbed\l"
	.string "your path all the way to the President\l"
	.string "himself with only one Pokémon.$"

Vikkelson_Mansion2ndFloor_Loss_Text_0:
# 84 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I haven't been lied to... Even with your\n"
	.string "back against the wall, you showed\l"
	.string "resilience until your last breath. No\l"
	.string "wonder you have climbed your path all\l"
	.string "the way to the President himself with\l"
	.string "only one Pokémon.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_0:
# 91 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "...$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_1:
# 93 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Now, you must have a lot of questions\n"
	.string "going through that beautiful head of\l"
	.string "yours. Let me first introduce myself.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_2:
# 111 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I was born Victoria Lafont, in a small\n"
	.string "village located in Kalos. I lost both my\l"
	.string "parents at a young age, and had to\l"
	.string "learn to fend for myself so as not to be\l"
	.string "swallowed whole by the world around me.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_3:
# 120 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "But these moments, love, you see...\n"
	.string "These moments made me who I am. A\l"
	.string "strong, an independent woman who can\l"
	.string "face the most ferocious adversity.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_4:
# 134 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Anyways. One day, I decided to embark,\n"
	.string "secretly, mind you, on a boat that was\l"
	.string "going to this newly discovered plot of\l"
	.string "land, later called Thura.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_5:
# 148 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "For a long time... I scavenged for food,\n"
	.string "alone, in the forest. I even made a\l"
	.string "friend. My dearest Persian, who was\l"
	.string "nothing but a baby Meowth at the time.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_6:
# 155 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Then, I stumbled upon this beautiful\n"
	.string "spot, with a natural beach made of the\l"
	.string "finest sand I've ever witnessed.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_7:
# 164 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I had an idea. I was going to turn this\n"
	.string "plot of land into a safe haven for\l"
	.string "restless souls, who wish to relax and\l"
	.string "enjoy life, as it's supposed to be. It\l"
	.string "started as a modest hut by the beach...$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_8:
# 180 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "...Fast forward 20 years, and here we\n"
	.string "are. Thanks to my efforts, I became one\l"
	.string "of the most influential, if not the\l"
	.string "most, woman of Thura. Everyone wanted\l"
	.string "to enjoy some time in my town. From the\l"
	.string "lowest bum, to the President himself. I\l"
	.string "became the confidant of the richest\l"
	.string "people in Thura. Allowing me to become\l"
	.string "one of them. Me, the poor girl who had to\l"
	.string "scavenge through trash in order to\l"
	.string "survive.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_9:
# 185 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Now, you must imagine how shocking it\n"
	.string "was for me to learn what happened to\l"
	.string "the President, and to that extent, to\l"
	.string "you. The President is a dear friend, and\l"
	.string "I can only wish that he's safe.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_10:
# 191 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Which brings us to the matter of our\n"
	.string "meeting. I have strong suspicions that\l"
	.string "both the President, and your Xatu, are\l"
	.string "being held hostages in a town called\l"
	.string "Virimante, in the southwest of Thura.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_11:
# 201 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "You may have met some funny-looking\n"
	.string "people, all dressed in pink. Hell, there's\l"
	.string "even one wandering outside in my\l"
	.string "garden.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_12:
# 208 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "For some time now, those people, who\n"
	.string "seem to revolve around a leader, I\l"
	.string "believe their name is K.A.M... They were\l"
	.string "content with inconsequent crimes.\l"
	.string "Then, they stepped up and provoked the\l"
	.string "explosion you experienced, alongside\l"
	.string "the President. Why would they do that?\l"
	.string "I'm afraid it is one of the rare\l"
	.string "questions I don't have an answer for...$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_13:
# 209 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Since then, they have increased their\n"
	.string "evil deeds. Some have tried to capture\l"
	.string "gyms, others commit petty theft, like\l"
	.string "stealing Eka's most precious\l"
	.string "possession: his scarf.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_14:
# 217 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I told you, dear. Everything gets to my\n"
	.string "ears, sooner or later. But I'm here to\l"
	.string "help you. And this is of the utmost\l"
	.string "importance; for the sake of your Xatu,\l"
	.string "and, more importantly, the sake of\l"
	.string "Thura itself. Who knows what these\l"
	.string "goons are capable of... You must go to\l"
	.string "Virimante, and make them understand.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_15:
# 222 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Of course, to go there, you'll need much\n"
	.string "stronger Pokémons, and, of course, much\l"
	.string "stronger bonds with your companions.\l"
	.string "They're not Xatu, after all.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_16:
# 226 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I understand you've taken the Council\n"
	.string "Challenge once again? Very well. There\l"
	.string "couldn't be a better way to tie strong\l"
	.string "bonds with your Pokémons. In order to\l"
	.string "advance to your quest, and to save\l"
	.string "Thura, you must go to Glasville first,\l"
	.string "and face Corinna. You already know that\l"
	.string "the path is blocked; I'll order one of my\l"
	.string "men to clear the way.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_17:
# 231 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Don't thank me. The best way you can\n"
	.string "make yourself up is by defeating those\l"
	.string "thugs, thus liberating the President...\l"
	.string "And your dear companion, of course.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_18:
# 239 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "One last thing... Did you see what\n"
	.string "happened to Persian in the fight we\l"
	.string "just experienced? This is what we, in\l"
	.string "Kalos, call a Mega Evolution. It allows\l"
	.string "your Pokémon to grow stronger, but only\l"
	.string "during the glimpse of a battle.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_19:
# 247 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Take this. I want you to feel what it's\n"
	.string "like to have true might in front of your\l"
	.string "very eyes.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_20:
# 257 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Now, go. Every second wasted takes\n"
	.string "Thura a step closer to chaos.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_21:
# 274 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Oh, no, no. You don't get it. I'm not one\n"
	.string "to exert direct influence. My role is to\l"
	.string "gather information, and distill so that\l"
	.string "Thura prospers.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_22:
# 282 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Virimante is the nest of those evil\n"
	.string "people, covered in pink, that you must\l"
	.string "have seen.$"

Vikkelson_Mansion2ndFloor_AfterCombatDialog_Text_23:
# 307 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "I understand you've taken the Council\n"
	.string "Challenge once again? Very well. There\l"
	.string "couldn't be a better way to tie strong\l"
	.string "bonds with your Pokémons. In order to\l"
	.string "advance to your quest, and to save\l"
	.string "Thura, you must go to Glasville first,\l"
	.string "and face Corinna. You already know that\l"
	.string "the path is blocked; I'll order one of my\l"
	.string "men to clear the way. Don't thank me.\l"
	.string "The best way you can make yourself up\l"
	.string "is by defeating those thugs, thus\l"
	.string "liberating the President... And Xatu, of\l"
	.string "course.$"

Vikkelson_Mansion2ndFloor_Vikkie_Text_0:
# 354 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "Go, {PLAYER}. Thura's fate lies\n"
	.string "between your hands.$"

Vikkie1::
# 346 "data/maps/Vikkelson_Mansion2ndFloor/scripts.pory"
	.string "So this was all true...$"
