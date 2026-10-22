# 1 "data/maps/Passwacan/scripts.pory"

# 2 "data/maps/Passwacan/scripts.pory"
Passwacan_MapScripts::
# 3 "data/maps/Passwacan/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Passwacan_OnTransition
# 4 "data/maps/Passwacan/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Passwacan_OnFrame
# 5 "data/maps/Passwacan/scripts.pory"
	.byte 0
# 6 "data/maps/Passwacan/scripts.pory"

# 7 "data/maps/Passwacan/scripts.pory"
Passwacan_OnFrame:
# 8 "data/maps/Passwacan/scripts.pory"
    map_script_2 VAR_SIDE_STORY_PASSWACAN, 1, Passwacan_UnknownCaller
# 9 "data/maps/Passwacan/scripts.pory"
    map_script_2 VAR_TRIATHLON, 4, Passwacan_TriathlonCeremony
# 10 "data/maps/Passwacan/scripts.pory"
    .2byte 0

Passwacan_OnTransition::
# 14 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_VISITED_PASSWACAN
	return


Passwacan_UnknownCaller::
# 18 "data/maps/Passwacan/scripts.pory"
	lockall
# 19 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 20 "data/maps/Passwacan/scripts.pory"
	pokenavcall PasswacanCall
# 21 "data/maps/Passwacan/scripts.pory"
	waitmessage
# 22 "data/maps/Passwacan/scripts.pory"
	setvar VAR_SIDE_STORY_PASSWACAN, 2
# 23 "data/maps/Passwacan/scripts.pory"
	setvar VAR_SIDE_STORY_BRO, 1
# 24 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_SAM_KIDNAPPED
# 25 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/Passwacan/scripts.pory"
	startquest QUEST_SAM
# 27 "data/maps/Passwacan/scripts.pory"
	releaseall
	end


Passwacan_TriathlonCeremony::
# 32 "data/maps/Passwacan/scripts.pory"
	lock
# 33 "data/maps/Passwacan/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Passwacan_TriathlonCeremony_Movement_0
# 34 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 35 "data/maps/Passwacan/scripts.pory"
	delay 60
# 36 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 37 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_1
# 38 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 39 "data/maps/Passwacan/scripts.pory"
	closemessage
# 40 "data/maps/Passwacan/scripts.pory"
	applymovement 28, Passwacan_TriathlonCeremony_Movement_1
# 41 "data/maps/Passwacan/scripts.pory"
	applymovement 14, Passwacan_TriathlonCeremony_Movement_2
# 42 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 43 "data/maps/Passwacan/scripts.pory"
	delay 40
# 44 "data/maps/Passwacan/scripts.pory"
	applymovement 28, Passwacan_TriathlonCeremony_Movement_3
# 45 "data/maps/Passwacan/scripts.pory"
	applymovement 14, Passwacan_TriathlonCeremony_Movement_3
# 46 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 47 "data/maps/Passwacan/scripts.pory"
	delay 20
# 48 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 49 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_2
# 50 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 51 "data/maps/Passwacan/scripts.pory"
	closemessage
# 52 "data/maps/Passwacan/scripts.pory"
	compare VAR_TRIATHLON_TIME, 300
	goto_if_lt Passwacan_TriathlonCeremony_6
Passwacan_TriathlonCeremony_5:
# 92 "data/maps/Passwacan/scripts.pory"
	compare VAR_TRIATHLON_TIME, 300
	goto_if_lt Passwacan_TriathlonCeremony_3
# 136 "data/maps/Passwacan/scripts.pory"
	delay 20
# 137 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 138 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_3
# 139 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 140 "data/maps/Passwacan/scripts.pory"
	closemessage
# 141 "data/maps/Passwacan/scripts.pory"
	delay 20
# 142 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 143 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_10
# 144 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 145 "data/maps/Passwacan/scripts.pory"
	closemessage
# 146 "data/maps/Passwacan/scripts.pory"
	delay 20
# 147 "data/maps/Passwacan/scripts.pory"
	applymovement 28, Passwacan_TriathlonCeremony_Movement_4
# 148 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 149 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 150 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_11
# 151 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 152 "data/maps/Passwacan/scripts.pory"
	closemessage
# 153 "data/maps/Passwacan/scripts.pory"
	playse SE_APPLAUSE
# 154 "data/maps/Passwacan/scripts.pory"
	delay 20
# 155 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 156 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_6
# 157 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 158 "data/maps/Passwacan/scripts.pory"
	closemessage
# 159 "data/maps/Passwacan/scripts.pory"
	delay 20
# 160 "data/maps/Passwacan/scripts.pory"
	applymovement 17, Passwacan_TriathlonCeremony_Movement_6
# 161 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 162 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 163 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_9
# 164 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 165 "data/maps/Passwacan/scripts.pory"
	closemessage
# 166 "data/maps/Passwacan/scripts.pory"
	delay 20
# 167 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 168 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_8
# 169 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 170 "data/maps/Passwacan/scripts.pory"
	closemessage
Passwacan_TriathlonCeremony_1:
# 172 "data/maps/Passwacan/scripts.pory"
	fadescreen FADE_TO_BLACK
# 173 "data/maps/Passwacan/scripts.pory"
	setvar VAR_TRIATHLON_TIME, 0
# 174 "data/maps/Passwacan/scripts.pory"
	setvar VAR_TRIATHLON_MINUTES, 0
# 175 "data/maps/Passwacan/scripts.pory"
	setvar VAR_TRIATHLON_SECONDS, 0
# 176 "data/maps/Passwacan/scripts.pory"
	setvar VAR_TRIATHLON, 0
# 177 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_TRIATHLON_CEREMONY
# 178 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_TRAINERS_TRIATHLON
# 179 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_PASSWACAN_TRIATHLON_NPC
# 180 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_CANT_FLY
# 181 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 182 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_TRIATHLON_1
# 183 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_TRIATHLON_2
# 184 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_TRIATHLON_3
# 185 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_TRIATHLON_4
# 186 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_ALFIE
# 187 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_NELLY
# 188 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_ROSE
# 189 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_TAKAO
# 190 "data/maps/Passwacan/scripts.pory"
	cleartrainerflag TRAINER_FUMIKO
# 191 "data/maps/Passwacan/scripts.pory"
	delay 20
# 192 "data/maps/Passwacan/scripts.pory"
	removeobject 22
# 193 "data/maps/Passwacan/scripts.pory"
	removeobject 28
# 194 "data/maps/Passwacan/scripts.pory"
	removeobject 23
# 195 "data/maps/Passwacan/scripts.pory"
	removeobject 24
# 196 "data/maps/Passwacan/scripts.pory"
	removeobject 18
# 197 "data/maps/Passwacan/scripts.pory"
	removeobject 19
# 198 "data/maps/Passwacan/scripts.pory"
	removeobject 15
# 199 "data/maps/Passwacan/scripts.pory"
	removeobject 21
# 200 "data/maps/Passwacan/scripts.pory"
	removeobject 20
# 201 "data/maps/Passwacan/scripts.pory"
	removeobject 17
# 202 "data/maps/Passwacan/scripts.pory"
	removeobject 16
# 203 "data/maps/Passwacan/scripts.pory"
	removeobject 25
# 204 "data/maps/Passwacan/scripts.pory"
	removeobject 26
# 205 "data/maps/Passwacan/scripts.pory"
	removeobject 27
# 206 "data/maps/Passwacan/scripts.pory"
	removeobject 13
# 207 "data/maps/Passwacan/scripts.pory"
	removeobject 14
# 208 "data/maps/Passwacan/scripts.pory"
	addobject 4
# 209 "data/maps/Passwacan/scripts.pory"
	addobject 1
# 210 "data/maps/Passwacan/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 211 "data/maps/Passwacan/scripts.pory"
	release
	end

Passwacan_TriathlonCeremony_2:
# 53 "data/maps/Passwacan/scripts.pory"
	delay 20
# 54 "data/maps/Passwacan/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TRIATHLON_MINUTES
# 55 "data/maps/Passwacan/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TRIATHLON_SECONDS
# 56 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 57 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_3
# 58 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 59 "data/maps/Passwacan/scripts.pory"
	closemessage
# 60 "data/maps/Passwacan/scripts.pory"
	delay 20
# 61 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 62 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_4
# 63 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 64 "data/maps/Passwacan/scripts.pory"
	closemessage
# 65 "data/maps/Passwacan/scripts.pory"
	delay 20
# 66 "data/maps/Passwacan/scripts.pory"
	applymovement 28, Passwacan_TriathlonCeremony_Movement_4
# 67 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 68 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 69 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_5
# 70 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 71 "data/maps/Passwacan/scripts.pory"
	closemessage
# 72 "data/maps/Passwacan/scripts.pory"
	playse SE_APPLAUSE
# 73 "data/maps/Passwacan/scripts.pory"
	delay 20
# 74 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 75 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_6
# 76 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 77 "data/maps/Passwacan/scripts.pory"
	closemessage
# 78 "data/maps/Passwacan/scripts.pory"
	delay 20
# 79 "data/maps/Passwacan/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Passwacan_TriathlonCeremony_Movement_5
# 80 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 81 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 82 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_7
# 83 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 84 "data/maps/Passwacan/scripts.pory"
	closemessage
# 85 "data/maps/Passwacan/scripts.pory"
	addmoney 5000
# 86 "data/maps/Passwacan/scripts.pory"
	delay 20
# 87 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 88 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_8
# 89 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 90 "data/maps/Passwacan/scripts.pory"
	closemessage
	goto Passwacan_TriathlonCeremony_1

Passwacan_TriathlonCeremony_3:
# 93 "data/maps/Passwacan/scripts.pory"
	delay 20
# 94 "data/maps/Passwacan/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TRIATHLON_MINUTES
# 95 "data/maps/Passwacan/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TRIATHLON_SECONDS
# 96 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 97 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_3
# 98 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 99 "data/maps/Passwacan/scripts.pory"
	closemessage
# 100 "data/maps/Passwacan/scripts.pory"
	delay 20
# 101 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 102 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_4
# 103 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 104 "data/maps/Passwacan/scripts.pory"
	closemessage
# 105 "data/maps/Passwacan/scripts.pory"
	delay 20
# 106 "data/maps/Passwacan/scripts.pory"
	applymovement 28, Passwacan_TriathlonCeremony_Movement_4
# 107 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 108 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 109 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_5
# 110 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 111 "data/maps/Passwacan/scripts.pory"
	closemessage
# 112 "data/maps/Passwacan/scripts.pory"
	playse SE_APPLAUSE
# 113 "data/maps/Passwacan/scripts.pory"
	delay 20
# 114 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 115 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_6
# 116 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 117 "data/maps/Passwacan/scripts.pory"
	closemessage
# 118 "data/maps/Passwacan/scripts.pory"
	delay 20
# 119 "data/maps/Passwacan/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Passwacan_TriathlonCeremony_Movement_5
# 120 "data/maps/Passwacan/scripts.pory"
	waitmovement 0
# 121 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 122 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_9
# 123 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 124 "data/maps/Passwacan/scripts.pory"
	closemessage
# 125 "data/maps/Passwacan/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 126 "data/maps/Passwacan/scripts.pory"
	delay 20
# 127 "data/maps/Passwacan/scripts.pory"
	namebox Passwacan_TriathlonCeremony_Text_0
# 128 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonCeremony_Text_8
# 129 "data/maps/Passwacan/scripts.pory"
	hidenamebox
# 130 "data/maps/Passwacan/scripts.pory"
	closemessage
# 131 "data/maps/Passwacan/scripts.pory"
	delay 20
# 132 "data/maps/Passwacan/scripts.pory"
	completequest QUEST_TRIATHLON
# 133 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_TRIATHLON_COMPLETED
	goto Passwacan_TriathlonCeremony_1

Passwacan_TriathlonCeremony_6:
# 52 "data/maps/Passwacan/scripts.pory"
	goto_if_set FLAG_TRIATHLON_COMPLETED, Passwacan_TriathlonCeremony_2
	goto Passwacan_TriathlonCeremony_5


Passwacan_TriathlonEnd::
# 216 "data/maps/Passwacan/scripts.pory"
	lock
# 217 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_SYS_DISABLE_SAVE
# 218 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_TRIATHLON
# 219 "data/maps/Passwacan/scripts.pory"
	playse SE_DING_DONG
# 220 "data/maps/Passwacan/scripts.pory"
	waitse
# 221 "data/maps/Passwacan/scripts.pory"
	special StopTriathlonTimer
# 222 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_TriathlonEnd_Text_0
# 223 "data/maps/Passwacan/scripts.pory"
	setvar VAR_TRIATHLON, 4
# 224 "data/maps/Passwacan/scripts.pory"
	fadescreen FADE_TO_BLACK
# 225 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_TRIATHLON_NPC
# 226 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_PASSWACAN_TRIATHLON_NPC
# 227 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_TRIATHLON_CEREMONY
# 228 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_SCOTT_TRIATHLON
# 229 "data/maps/Passwacan/scripts.pory"
	clearflag FLAG_HIDE_NPC_TRIATHLON
# 230 "data/maps/Passwacan/scripts.pory"
	addobject 22
# 231 "data/maps/Passwacan/scripts.pory"
	addobject 28
# 232 "data/maps/Passwacan/scripts.pory"
	addobject 23
# 233 "data/maps/Passwacan/scripts.pory"
	addobject 24
# 234 "data/maps/Passwacan/scripts.pory"
	addobject 18
# 235 "data/maps/Passwacan/scripts.pory"
	addobject 19
# 236 "data/maps/Passwacan/scripts.pory"
	addobject 15
# 237 "data/maps/Passwacan/scripts.pory"
	addobject 21
# 238 "data/maps/Passwacan/scripts.pory"
	addobject 20
# 239 "data/maps/Passwacan/scripts.pory"
	addobject 17
# 240 "data/maps/Passwacan/scripts.pory"
	addobject 16
# 241 "data/maps/Passwacan/scripts.pory"
	addobject 25
# 242 "data/maps/Passwacan/scripts.pory"
	addobject 26
# 243 "data/maps/Passwacan/scripts.pory"
	addobject 27
# 244 "data/maps/Passwacan/scripts.pory"
	addobject 13
# 245 "data/maps/Passwacan/scripts.pory"
	addobject 14
# 246 "data/maps/Passwacan/scripts.pory"
	warpsilent MAP_PASSWACAN, 16, 38
# 247 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_OldMan::
# 252 "data/maps/Passwacan/scripts.pory"
	lock
# 253 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 254 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_OldMan_Text_0
# 255 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_Woman::
# 260 "data/maps/Passwacan/scripts.pory"
	lock
# 261 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 262 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_Woman_Text_0
# 263 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_WorkerF::
# 268 "data/maps/Passwacan/scripts.pory"
	lock
# 269 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 270 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_WorkerF_Text_0
# 271 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_WorkerM::
# 276 "data/maps/Passwacan/scripts.pory"
	lock
# 277 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 278 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_WorkerM_Text_0
# 279 "data/maps/Passwacan/scripts.pory"
	turnobject 2, DIR_NORTH
# 280 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_Guitarist::
# 285 "data/maps/Passwacan/scripts.pory"
	lock
# 286 "data/maps/Passwacan/scripts.pory"
	faceplayer
# 287 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_Guitarist_Text_0
# 288 "data/maps/Passwacan/scripts.pory"
	turnobject 5, DIR_NORTH
# 289 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_Item::
# 309 "data/maps/Passwacan/scripts.pory"
	lock
# 310 "data/maps/Passwacan/scripts.pory"
	removeobject 6
# 311 "data/maps/Passwacan/scripts.pory"
	giveitem ITEM_ELECTIRIZER
# 312 "data/maps/Passwacan/scripts.pory"
	setflag FLAG_ITEM_PASSWACAN
# 313 "data/maps/Passwacan/scripts.pory"
	release
	end


Passwacan_Sign::
# 318 "data/maps/Passwacan/scripts.pory"
	lockall
# 319 "data/maps/Passwacan/scripts.pory"
	msgbox Passwacan_Sign_Text_0
# 320 "data/maps/Passwacan/scripts.pory"
	releaseall
	end


# 33 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_0:
# 33 "data/maps/Passwacan/scripts.pory"
	face_up
	step_end

# 40 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_1:
# 40 "data/maps/Passwacan/scripts.pory"
	face_left
	step_end

# 41 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_2:
# 41 "data/maps/Passwacan/scripts.pory"
	face_right
	step_end

# 44 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_3:
# 44 "data/maps/Passwacan/scripts.pory"
	face_down
	step_end

# 66 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_4:
# 66 "data/maps/Passwacan/scripts.pory"
	jump_in_place_down
	step_end

# 79 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_5:
# 79 "data/maps/Passwacan/scripts.pory"
	walk_up
# 79 "data/maps/Passwacan/scripts.pory"
	walk_up
# 79 "data/maps/Passwacan/scripts.pory"
	walk_right
# 79 "data/maps/Passwacan/scripts.pory"
	face_up
	step_end

# 160 "data/maps/Passwacan/scripts.pory"
Passwacan_TriathlonCeremony_Movement_6:
# 160 "data/maps/Passwacan/scripts.pory"
	walk_up
# 160 "data/maps/Passwacan/scripts.pory"
	walk_up
	step_end

Passwacan_TriathlonCeremony_Text_0:
# 36 "data/maps/Passwacan/scripts.pory"
	.string "Scott$"

Passwacan_TriathlonCeremony_Text_1:
# 37 "data/maps/Passwacan/scripts.pory"
	.string "Thank you to everyone who\n"
	.string "participated! This was truly an amazing\l"
	.string "display of skills! Now, time for the\l"
	.string "results.$"

Passwacan_TriathlonCeremony_Text_2:
# 49 "data/maps/Passwacan/scripts.pory"
	.string "OK, here it comes!$"

Passwacan_TriathlonCeremony_Text_3:
# 57 "data/maps/Passwacan/scripts.pory"
	.string "And the winner is...$"

Passwacan_TriathlonCeremony_Text_4:
# 62 "data/maps/Passwacan/scripts.pory"
	.string "With an impressive time of\n"
	.string "{STR_VAR_1} minutes and\l"
	.string "{STR_VAR_2} seconds...$"

Passwacan_TriathlonCeremony_Text_5:
# 69 "data/maps/Passwacan/scripts.pory"
	.string "{PLAYER}!! Congratulations!!$"

Passwacan_TriathlonCeremony_Text_6:
# 75 "data/maps/Passwacan/scripts.pory"
	.string "Please, join me!$"

Passwacan_TriathlonCeremony_Text_7:
# 82 "data/maps/Passwacan/scripts.pory"
	.string "And since you already won, a ¥5000 prize\n"
	.string "money!$"

Passwacan_TriathlonCeremony_Text_8:
# 88 "data/maps/Passwacan/scripts.pory"
	.string "Thank you again for participating!\n"
	.string "Until next time, I hope!$"

Passwacan_TriathlonCeremony_Text_9:
# 122 "data/maps/Passwacan/scripts.pory"
	.string "And for your gift, a brand new bike!$"

Passwacan_TriathlonCeremony_Text_10:
# 143 "data/maps/Passwacan/scripts.pory"
	.string "With an impressive time of 4 minutes and\n"
	.string "59 seconds...$"

Passwacan_TriathlonCeremony_Text_11:
# 150 "data/maps/Passwacan/scripts.pory"
	.string "Bettina!! Congratulations!!$"

Passwacan_TriathlonEnd_Text_0:
# 222 "data/maps/Passwacan/scripts.pory"
	.string "Congratulations! You've done it!$"

Passwacan_OldMan_Text_0:
# 254 "data/maps/Passwacan/scripts.pory"
	.string "This here is my modest house. You can go\n"
	.string "in if you want, but please remove your\l"
	.string "shoes.$"

Passwacan_Woman_Text_0:
# 262 "data/maps/Passwacan/scripts.pory"
	.string "Can you feel it? There's electricity in\n"
	.string "the air! I'm glad Andre finally decided\l"
	.string "to turn the waste treatment plant into\l"
	.string "a power plant. The stench was\l"
	.string "unbearable.$"

Passwacan_WorkerF_Text_0:
# 270 "data/maps/Passwacan/scripts.pory"
	.string "Andre just put me on welding duty. Only\n"
	.string "thing is the cables I have to weld are\l"
	.string "underwater. I'm dead afraid of deep\l"
	.string "waters.$"

Passwacan_WorkerM_Text_0:
# 278 "data/maps/Passwacan/scripts.pory"
	.string "Watch out, kiddo! Those are ultra\n"
	.string "powerful generators, you could get\l"
	.string "shocked and die right away! Back off!$"

Passwacan_Guitarist_Text_0:
# 287 "data/maps/Passwacan/scripts.pory"
	.string "Do you know about writer's block? I'm\n"
	.string "experiencing it right now. So I hope\l"
	.string "this generator right there could give\l"
	.string "me some energy.$"

Passwacan_Sign_Text_0:
# 319 "data/maps/Passwacan/scripts.pory"
	.string "Passwacan\n"
	.string "It smelt bad but not anymore.$"

PasswacanCall::
# 293 "data/maps/Passwacan/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Sam: ...{PLAYER}?\p"
	.string "… … … … … …\p"
	.string "Something weird has happened\n"
	.string "to me.\p"
	.string "… … … … … …\p"
	.string "Can you come to Oparque?...\n"
	.string "Don't want to put pressure\l"
	.string "on you, but if you don't,\l"
	.string "I might get hurt.\l"
	.string "Please.\l"
	.string "… … … … … …\n… … … … … Click!$"
