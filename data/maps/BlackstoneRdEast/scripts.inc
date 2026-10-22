# 1 "data/maps/BlackstoneRdEast/scripts.pory"

# 2 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_MapScripts::
# 3 "data/maps/BlackstoneRdEast/scripts.pory"
	.byte 0

BlackstoneRdEast_Alfred::
# 7 "data/maps/BlackstoneRdEast/scripts.pory"
	trainerbattle_single TRAINER_BLACK_5, Alfred1, Alfred2
# 8 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Alfred_Text_0
# 9 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
	end


BlackstoneRdEast_Helga::
# 14 "data/maps/BlackstoneRdEast/scripts.pory"
	trainerbattle_single TRAINER_BLACK_6, Helga1, Helga2
# 15 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Helga_Text_0
# 16 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
	end


BlackstoneRdEast_Bart::
# 21 "data/maps/BlackstoneRdEast/scripts.pory"
	trainerbattle_single TRAINER_BLACK_7, Bart1, Bart2
# 22 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Bart_Text_0
# 23 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
	end


BlackstoneRdEast_Old::
# 28 "data/maps/BlackstoneRdEast/scripts.pory"
	lock
# 29 "data/maps/BlackstoneRdEast/scripts.pory"
	faceplayer
# 30 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Old_Text_0
# 31 "data/maps/BlackstoneRdEast/scripts.pory"
	release
	end


BlackstoneRdEast_Woman::
# 36 "data/maps/BlackstoneRdEast/scripts.pory"
	lock
# 37 "data/maps/BlackstoneRdEast/scripts.pory"
	faceplayer
# 38 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Woman_Text_0
# 39 "data/maps/BlackstoneRdEast/scripts.pory"
	turnobject 5, DIR_NORTH
# 40 "data/maps/BlackstoneRdEast/scripts.pory"
	release
	end


BlackstoneRdEast_Tombstone1::
# 45 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 46 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone1_Text_0
# 47 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Tombstone2::
# 52 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 53 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone2_Text_0
# 54 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Tombstone3::
# 59 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 60 "data/maps/BlackstoneRdEast/scripts.pory"
	checkitem ITEM_BLUE_SCARF, 1
# 61 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackstoneRdEast_Tombstone3_8
BlackstoneRdEast_Tombstone3_6:
# 174 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackstoneRdEast_Tombstone3_5
BlackstoneRdEast_Tombstone3_4:
# 240 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_0
BlackstoneRdEast_Tombstone3_1:
# 242 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end

BlackstoneRdEast_Tombstone3_2:
# 62 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_0
# 63 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 64 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 20
# 65 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_1, MSGBOX_YESNO
# 66 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BlackstoneRdEast_Tombstone3_11
# 171 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_16
	goto BlackstoneRdEast_Tombstone3_1

BlackstoneRdEast_Tombstone3_3:
# 175 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_0
# 176 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 177 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 20
# 178 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_1, MSGBOX_YESNO
# 179 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BlackstoneRdEast_Tombstone3_14
# 236 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_16
	goto BlackstoneRdEast_Tombstone3_1

BlackstoneRdEast_Tombstone3_5:
# 174 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_MAIN_STORY, 20
	goto_if_eq BlackstoneRdEast_Tombstone3_3
	goto BlackstoneRdEast_Tombstone3_4

BlackstoneRdEast_Tombstone3_8:
# 61 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_MAIN_STORY, 19
	goto_if_eq BlackstoneRdEast_Tombstone3_2
	goto BlackstoneRdEast_Tombstone3_6

BlackstoneRdEast_Tombstone3_11:
# 67 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_2
# 68 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 69 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 73 "data/maps/BlackstoneRdEast/scripts.pory"
	clearflag FLAG_CORINNA
# 75 "data/maps/BlackstoneRdEast/scripts.pory"
	addobject 6
# 76 "data/maps/BlackstoneRdEast/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 77 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 78 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 79 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_4
# 80 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 81 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 82 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_0
# 83 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_1
# 84 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 85 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_2
# 87 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 88 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 89 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 90 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_5
# 91 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 92 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 93 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_3
# 94 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_4
# 95 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 96 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 97 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 98 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_6
# 99 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 100 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 101 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_5
# 102 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 103 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_6
# 104 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 105 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 20
# 106 "data/maps/BlackstoneRdEast/scripts.pory"
	playse SE_PIN
# 107 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_7
# 108 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 109 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 110 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_7
# 111 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 112 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 113 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 20
# 114 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 115 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_8
# 116 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 117 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 118 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_8
# 119 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 120 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_9
# 121 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 122 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 123 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_9
# 124 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 125 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_10
# 126 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 127 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_11
# 128 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 129 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_10
# 130 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 131 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 132 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 133 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_12
# 134 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 135 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 136 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 137 "data/maps/BlackstoneRdEast/scripts.pory"
	trainerbattle_no_intro TRAINER_CORINNA, Corinna1
# 138 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq BlackstoneRdEast_Tombstone3_17
# 151 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 152 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_14
# 153 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 154 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 155 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 156 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 159 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_CORINNA
# 160 "data/maps/BlackstoneRdEast/scripts.pory"
	removeobject 6
# 162 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_10
# 163 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 164 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 166 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_15
# 167 "data/maps/BlackstoneRdEast/scripts.pory"
	setvar VAR_MAIN_STORY, 21
	goto BlackstoneRdEast_Tombstone3_1

BlackstoneRdEast_Tombstone3_14:
# 180 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_2
# 181 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 182 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 183 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 184 "data/maps/BlackstoneRdEast/scripts.pory"
	clearflag FLAG_CORINNA
# 185 "data/maps/BlackstoneRdEast/scripts.pory"
	addobject 6
# 186 "data/maps/BlackstoneRdEast/scripts.pory"
	playbgm MUS_DUMMY, TRUE
# 187 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 188 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 189 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_4
# 190 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 191 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 192 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_0
# 193 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_1
# 194 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 195 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 196 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement 6, BlackstoneRdEast_Tombstone3_Movement_2
# 197 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 198 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 199 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 200 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_17
# 201 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 202 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_TRAINERBATTLE
# 203 "data/maps/BlackstoneRdEast/scripts.pory"
	trainerbattle_no_intro TRAINER_CORINNA, Corinna1
# 204 "data/maps/BlackstoneRdEast/scripts.pory"
	compare VAR_TRAINERBATTLE, B_OUTCOME_LOST
	goto_if_eq BlackstoneRdEast_Tombstone3_20
# 216 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 217 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_14
# 218 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 219 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 220 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 224 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_CORINNA
# 225 "data/maps/BlackstoneRdEast/scripts.pory"
	removeobject 6
# 227 "data/maps/BlackstoneRdEast/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlackstoneRdEast_Tombstone3_Movement_10
# 228 "data/maps/BlackstoneRdEast/scripts.pory"
	waitmovement 0
# 229 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 230 "data/maps/BlackstoneRdEast/scripts.pory"
	delay 40
# 231 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_15
# 232 "data/maps/BlackstoneRdEast/scripts.pory"
	setvar VAR_MAIN_STORY, 21
	goto BlackstoneRdEast_Tombstone3_1

BlackstoneRdEast_Tombstone3_17:
# 139 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 140 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_13
# 141 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 142 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 143 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/maps/BlackstoneRdEast/scripts.pory"
	special SetCB2WhiteOut
# 145 "data/maps/BlackstoneRdEast/scripts.pory"
	setvar VAR_MAIN_STORY, 20
# 146 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_CORINNA
# 147 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end

BlackstoneRdEast_Tombstone3_20:
# 205 "data/maps/BlackstoneRdEast/scripts.pory"
	namebox BlackstoneRdEast_Tombstone3_Text_3
# 206 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone3_Text_13
# 207 "data/maps/BlackstoneRdEast/scripts.pory"
	closemessage
# 208 "data/maps/BlackstoneRdEast/scripts.pory"
	hidenamebox
# 209 "data/maps/BlackstoneRdEast/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/BlackstoneRdEast/scripts.pory"
	special SetCB2WhiteOut
# 211 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_CORINNA
# 212 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Tombstone4::
# 247 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 248 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone4_Text_0
# 249 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Tombstone5::
# 254 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 255 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Tombstone5_Text_0
# 256 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Sign::
# 261 "data/maps/BlackstoneRdEast/scripts.pory"
	lockall
# 262 "data/maps/BlackstoneRdEast/scripts.pory"
	msgbox BlackstoneRdEast_Sign_Text_0
# 263 "data/maps/BlackstoneRdEast/scripts.pory"
	releaseall
	end


BlackstoneRdEast_Item::
# 268 "data/maps/BlackstoneRdEast/scripts.pory"
	lock
# 269 "data/maps/BlackstoneRdEast/scripts.pory"
	removeobject 10
# 270 "data/maps/BlackstoneRdEast/scripts.pory"
	giveitem ITEM_REAPER_CLOTH
# 271 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_ITEM_BLACKSTONE_EAST
# 272 "data/maps/BlackstoneRdEast/scripts.pory"
	release
	end


BlackstoneRdEast_TM::
# 277 "data/maps/BlackstoneRdEast/scripts.pory"
	lock
# 278 "data/maps/BlackstoneRdEast/scripts.pory"
	removeobject 11
# 279 "data/maps/BlackstoneRdEast/scripts.pory"
	giveitem ITEM_TM17
# 280 "data/maps/BlackstoneRdEast/scripts.pory"
	setflag FLAG_ITEM_BLACKSTONE_EAST_TM
# 281 "data/maps/BlackstoneRdEast/scripts.pory"
	release
	end


# 82 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_0:
# 82 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_1:
# 83 "data/maps/BlackstoneRdEast/scripts.pory"
	jump_in_place_down
# 83 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_down
# 83 "data/maps/BlackstoneRdEast/scripts.pory"
	face_up
	step_end

# 86 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_2:
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	face_left
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	delay_16
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	face_right
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	delay_16
# 86 "data/maps/BlackstoneRdEast/scripts.pory"
	face_down
	step_end

# 93 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_3:
# 93 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_left
# 93 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_left
	step_end

# 94 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_4:
# 94 "data/maps/BlackstoneRdEast/scripts.pory"
	face_left
	step_end

# 101 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_5:
# 101 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_right
# 101 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_right
# 101 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_right
# 101 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_6:
# 103 "data/maps/BlackstoneRdEast/scripts.pory"
	face_right
	step_end

# 107 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_7:
# 107 "data/maps/BlackstoneRdEast/scripts.pory"
	emote_exclamation_mark
# 107 "data/maps/BlackstoneRdEast/scripts.pory"
	delay_16
# 107 "data/maps/BlackstoneRdEast/scripts.pory"
	face_left
	step_end

# 118 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_8:
# 118 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_left
# 118 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_left
# 118 "data/maps/BlackstoneRdEast/scripts.pory"
	face_down
	step_end

# 120 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_9:
# 120 "data/maps/BlackstoneRdEast/scripts.pory"
	face_up
	step_end

# 162 "data/maps/BlackstoneRdEast/scripts.pory"
BlackstoneRdEast_Tombstone3_Movement_10:
# 162 "data/maps/BlackstoneRdEast/scripts.pory"
	walk_up
	step_end

BlackstoneRdEast_Alfred_Text_0:
# 8 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "The spirits are among us, and they're\n"
	.string "not happy...$"

BlackstoneRdEast_Helga_Text_0:
# 15 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "I'm not actually possessed, I just like\n"
	.string "to scare people. Teehee.$"

BlackstoneRdEast_Bart_Text_0:
# 22 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "This place is too scary, I don't like it.\n"
	.string "But it feels like there's something\l"
	.string "holding me back...$"

BlackstoneRdEast_Old_Text_0:
# 30 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Be very respectful of your\n"
	.string "surroundings, dear.$"

BlackstoneRdEast_Woman_Text_0:
# 38 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Every month or so, I come to pay a visit\n"
	.string "to my good old Ludicolo. He really was\l"
	.string "the greatest companion I've ever had.$"

BlackstoneRdEast_Tombstone1_Text_0:
# 46 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Sylvain F.\n"
	.string "1994 - 2020\l"
	.string "To the best friend I've ever had. I hope\l"
	.string "you found peace, wherever you are.$"

BlackstoneRdEast_Tombstone2_Text_0:
# 53 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Ludicolo\n"
	.string "2003 - 2024\l"
	.string "To a Pokémon that always knew how to\l"
	.string "make me laugh.$"

BlackstoneRdEast_Tombstone3_Text_0:
# 62 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Corinna\n"
	.string "1956 - 2026\l"
	.string "To our beloved Council Member. May you\l"
	.string "rest in peace.$"

BlackstoneRdEast_Tombstone3_Text_1:
# 65 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "This is the resting place of Corinna.\n"
	.string "Drop some Dead-Seer on her tombstone?$"

BlackstoneRdEast_Tombstone3_Text_2:
# 67 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "You poured a few drops of the\n"
	.string "Dead-Seer on Corinna's tombstone.$"

BlackstoneRdEast_Tombstone3_Text_3:
# 78 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Corinna$"

BlackstoneRdEast_Tombstone3_Text_4:
# 79 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...Huh?...$"

BlackstoneRdEast_Tombstone3_Text_5:
# 90 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...What's going on? Why am I back here?...$"

BlackstoneRdEast_Tombstone3_Text_6:
# 98 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...This is not good...$"

BlackstoneRdEast_Tombstone3_Text_7:
# 110 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...Wait...$"

BlackstoneRdEast_Tombstone3_Text_8:
# 115 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...You... Can see me?...$"

BlackstoneRdEast_Tombstone3_Text_9:
# 123 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...How?...$"

BlackstoneRdEast_Tombstone3_Text_10:
# 125 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...$"

BlackstoneRdEast_Tombstone3_Text_11:
# 127 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...You did what?$"

BlackstoneRdEast_Tombstone3_Text_12:
# 133 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...This is not acceptable... You don't\n"
	.string "wake someone from their eternal rest...\l"
	.string "You messed up really bad...$"

BlackstoneRdEast_Tombstone3_Text_13:
# 140 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...Don't ever come back...$"

BlackstoneRdEast_Tombstone3_Text_14:
# 152 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...I don't think you realise what you\n"
	.string "just did... Great sorrow will strike you...\l"
	.string "Soon...$"

BlackstoneRdEast_Tombstone3_Text_15:
# 166 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "(I should go back and report to Dave.)$"

BlackstoneRdEast_Tombstone3_Text_16:
# 171 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Decided against it.$"

BlackstoneRdEast_Tombstone3_Text_17:
# 200 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...You... Again?... Didn't you learn the\n"
	.string "first time?$"

BlackstoneRdEast_Tombstone4_Text_0:
# 248 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Anonymous\n"
	.string "??? - 2023\l"
	.string "To you, unknown to everyone, but\l"
	.string "deserving of love.$"

BlackstoneRdEast_Tombstone5_Text_0:
# 255 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Marc R.\n"
	.string "1974 - 2023$"

BlackstoneRdEast_Sign_Text_0:
# 262 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "{UP_ARROW} Glasville\n"
	.string "{DOWN_ARROW} Obsidian Path$"

Alfred1::
# 285 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Have you paid respects to the spirits\n"
	.string "yet?$"

Alfred2::
# 289 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "This isn't enough...$"

Helga1::
# 293 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Blergh... AAAAAHHH!$"

Helga2::
# 297 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Hmm. It didn't work, did it?$"

Bart1::
# 301 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Are you actually real?$"

Bart2::
# 305 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "Thank Arceus, you're a real human\n"
	.string "being...$"

Corinna1::
# 309 "data/maps/BlackstoneRdEast/scripts.pory"
	.string "...$"
