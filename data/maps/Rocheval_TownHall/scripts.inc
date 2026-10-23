# 1 "data/maps/Rocheval_TownHall/scripts.pory"

# 2 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_MapScripts::
# 3 "data/maps/Rocheval_TownHall/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Rocheval_TownHall_OnTransition
# 4 "data/maps/Rocheval_TownHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_TownHall_OnFrame
# 5 "data/maps/Rocheval_TownHall/scripts.pory"
	.byte 0
# 6 "data/maps/Rocheval_TownHall/scripts.pory"

# 7 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_OnFrame:
# 8 "data/maps/Rocheval_TownHall/scripts.pory"
    map_script_2 VAR_WALK, 1, Rocheval_TownHall_Walk
# 9 "data/maps/Rocheval_TownHall/scripts.pory"
    .2byte 0

Rocheval_TownHall_OnTransition::
# 14 "data/maps/Rocheval_TownHall/scripts.pory"
	goto_if_set FLAG_GUARD_HELI, Rocheval_TownHall_OnTransition_2
Rocheval_TownHall_OnTransition_1:
	end

Rocheval_TownHall_OnTransition_2:
# 15 "data/maps/Rocheval_TownHall/scripts.pory"
	addobject 8
# 16 "data/maps/Rocheval_TownHall/scripts.pory"
	setobjectxyperm 8, 18, 2
# 17 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, RTHSouth
	goto Rocheval_TownHall_OnTransition_1


Rocheval_TownHall_Walk::
# 23 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 24 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rocheval_TownHall_Walk_Movement_0
# 25 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 26 "data/maps/Rocheval_TownHall/scripts.pory"
	setvar VAR_WALK, 2
# 27 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_Receptionist::
# 32 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 33 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 34 "data/maps/Rocheval_TownHall/scripts.pory"
	compare VAR_MAIN_STORY, 0
	goto_if_eq Rocheval_TownHall_Receptionist_2
# 76 "data/maps/Rocheval_TownHall/scripts.pory"
	compare VAR_MAIN_STORY, 1
	goto_if_eq Rocheval_TownHall_Receptionist_3
# 80 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_12
# 81 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 82 "data/maps/Rocheval_TownHall/scripts.pory"
	goto Rocheval_TownHall_Multichoice
Rocheval_TownHall_Receptionist_1:
# 84 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end

Rocheval_TownHall_Receptionist_2:
# 35 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_0
# 36 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_1
# 37 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_2
# 38 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_1
# 39 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_3
# 40 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 1, Rocheval_TownHall_Receptionist_Movement_0
# 42 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 43 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_4
# 44 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_5
# 45 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 46 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 1, Rocheval_TownHall_Receptionist_Movement_1
# 47 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 48 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_6
# 49 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 50 "data/maps/Rocheval_TownHall/scripts.pory"
	setflag FLAG_SYS_ID_GET
# 51 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 52 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_7
# 53 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 54 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 55 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_8
# 56 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 57 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 58 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_9
# 59 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 60 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 1, Rocheval_TownHall_Receptionist_Movement_2
# 61 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 62 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 2, Rocheval_TownHall_Receptionist_Movement_3
# 63 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 64 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 65 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 2, Rocheval_TownHall_Receptionist_Movement_4
# 66 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 67 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 1, Rocheval_TownHall_Receptionist_Movement_5
# 68 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 69 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_10
# 70 "data/maps/Rocheval_TownHall/scripts.pory"
	setvar VAR_BLOCKED_ROAD, 0
# 71 "data/maps/Rocheval_TownHall/scripts.pory"
	setvar VAR_MAIN_STORY, 1
# 72 "data/maps/Rocheval_TownHall/scripts.pory"
	setflag FLAG_STARTER
# 73 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end

Rocheval_TownHall_Receptionist_3:
# 77 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_11
	goto Rocheval_TownHall_Receptionist_1


Rocheval_TownHall_Multichoice::
# 89 "data/maps/Rocheval_TownHall/scripts.pory"
	multichoice 0, 0, MULTI_ROCHEVAL, FALSE
# 90 "data/maps/Rocheval_TownHall/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Rocheval_TownHall/scripts.pory"
	case 0, Rocheval_TownHall_Multichoice_2
# 95 "data/maps/Rocheval_TownHall/scripts.pory"
	case 1, Rocheval_TownHall_Multichoice_3
# 99 "data/maps/Rocheval_TownHall/scripts.pory"
	case 2, Rocheval_TownHall_Multichoice_4
	return

Rocheval_TownHall_Multichoice_2:
# 92 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Multichoice_Text_0
# 93 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 94 "data/maps/Rocheval_TownHall/scripts.pory"
	goto Rocheval_TownHall_Multichoice
	return

Rocheval_TownHall_Multichoice_3:
# 96 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Multichoice_Text_1
# 97 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 98 "data/maps/Rocheval_TownHall/scripts.pory"
	goto Rocheval_TownHall_Multichoice
	return

Rocheval_TownHall_Multichoice_4:
# 100 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Multichoice_Text_2
# 101 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
	end


Rocheval_TownHall_NoAccess::
# 107 "data/maps/Rocheval_TownHall/scripts.pory"
	compare VAR_MAIN_STORY, 0
	goto_if_eq Rocheval_TownHall_NoAccess_1
	return

Rocheval_TownHall_NoAccess_1:
# 108 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 109 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_NoAccess_Text_0
# 110 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 111 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BackingUp
# 112 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 113 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_NoAccess2::
# 119 "data/maps/Rocheval_TownHall/scripts.pory"
	compare VAR_MAIN_STORY, 2
	goto_if_eq Rocheval_TownHall_NoAccess2_1
	return

Rocheval_TownHall_NoAccess2_1:
# 120 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 121 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_NoAccess2_Text_0
# 122 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 123 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BackingUp
# 124 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 125 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_ReadyToLeave::
# 131 "data/maps/Rocheval_TownHall/scripts.pory"
	lockall
# 132 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 133 "data/maps/Rocheval_TownHall/scripts.pory"
	namebox Rocheval_TownHall_ReadyToLeave_Text_0
# 134 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_ReadyToLeave_Text_1
# 135 "data/maps/Rocheval_TownHall/scripts.pory"
	hidenamebox
# 136 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Receptionist_Text_1
# 137 "data/maps/Rocheval_TownHall/scripts.pory"
	namebox Rocheval_TownHall_ReadyToLeave_Text_0
# 138 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_ReadyToLeave_Text_2
# 139 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 140 "data/maps/Rocheval_TownHall/scripts.pory"
	hidenamebox
# 141 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 7, RTHNorth
# 142 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 143 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 144 "data/maps/Rocheval_TownHall/scripts.pory"
	namebox Rocheval_TownHall_ReadyToLeave_Text_0
# 145 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_ReadyToLeave_Text_3
# 146 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 147 "data/maps/Rocheval_TownHall/scripts.pory"
	hidenamebox
# 148 "data/maps/Rocheval_TownHall/scripts.pory"
	delay 20
# 149 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, GuardStepping
# 150 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 8
# 153 "data/maps/Rocheval_TownHall/scripts.pory"
	setflag FLAG_GUARD_HELI
# 154 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, RTHSouth
# 155 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 156 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, Rocheval_TownHall_Receptionist_Movement_4
# 157 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 158 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 7, Rocheval_TownHall_Receptionist_Movement_4
# 159 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement
# 160 "data/maps/Rocheval_TownHall/scripts.pory"
	namebox Rocheval_TownHall_ReadyToLeave_Text_0
# 161 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_ReadyToLeave_Text_4
# 162 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 163 "data/maps/Rocheval_TownHall/scripts.pory"
	hidenamebox
# 164 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 7, SamHeli
# 165 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 166 "data/maps/Rocheval_TownHall/scripts.pory"
	removeobject 7
# 167 "data/maps/Rocheval_TownHall/scripts.pory"
	playse SE_EXIT
# 168 "data/maps/Rocheval_TownHall/scripts.pory"
	releaseall
	end


Rocheval_TownHall_Guard::
# 173 "data/maps/Rocheval_TownHall/scripts.pory"
	goto_if_set FLAG_GUARD_HELI, Rocheval_TownHall_Guard_1
# 184 "data/maps/Rocheval_TownHall/scripts.pory"
	lockall
# 185 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 186 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Guard_Text_1
# 187 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 188 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, RTHSouth
# 189 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 190 "data/maps/Rocheval_TownHall/scripts.pory"
	releaseall
	end

Rocheval_TownHall_Guard_1:
# 174 "data/maps/Rocheval_TownHall/scripts.pory"
	lockall
# 175 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 176 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Guard_Text_0
# 177 "data/maps/Rocheval_TownHall/scripts.pory"
	closemessage
# 178 "data/maps/Rocheval_TownHall/scripts.pory"
	applymovement 8, RTHSouth
# 179 "data/maps/Rocheval_TownHall/scripts.pory"
	waitmovement 0
# 180 "data/maps/Rocheval_TownHall/scripts.pory"
	releaseall
	end


Rocheval_TownHall_Kid::
# 196 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 197 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 198 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Kid_Text_0
# 199 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_Francais1::
# 204 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 205 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Francais1_Text_0
# 206 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_Francais2::
# 211 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 212 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Francais2_Text_0
# 213 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


Rocheval_TownHall_Woman::
# 218 "data/maps/Rocheval_TownHall/scripts.pory"
	lock
# 219 "data/maps/Rocheval_TownHall/scripts.pory"
	faceplayer
# 220 "data/maps/Rocheval_TownHall/scripts.pory"
	msgbox Rocheval_TownHall_Woman_Text_0
# 221 "data/maps/Rocheval_TownHall/scripts.pory"
	release
	end


# 225 "data/maps/Rocheval_TownHall/scripts.pory"
ReceptionistChecking0:
# 226 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 227 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

# 230 "data/maps/Rocheval_TownHall/scripts.pory"
ReceptionistChecking1:
# 231 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 232 "data/maps/Rocheval_TownHall/scripts.pory"
	face_player
	step_end

# 235 "data/maps/Rocheval_TownHall/scripts.pory"
ReceptionistChecking2:
# 236 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 236 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 237 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 237 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 237 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 237 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 238 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 238 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 239 "data/maps/Rocheval_TownHall/scripts.pory"
	face_player
	step_end

# 242 "data/maps/Rocheval_TownHall/scripts.pory"
BackingUp:
# 243 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_down
	step_end

# 246 "data/maps/Rocheval_TownHall/scripts.pory"
GuardStepping:
# 247 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 248 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

# 251 "data/maps/Rocheval_TownHall/scripts.pory"
SamHeli:
# 252 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_up
# 252 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/Rocheval_TownHall/scripts.pory"
RTHSouth:
# 256 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

# 259 "data/maps/Rocheval_TownHall/scripts.pory"
RTHNorth:
# 260 "data/maps/Rocheval_TownHall/scripts.pory"
	face_up
	step_end

# 24 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Walk_Movement_0:
# 24 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_0:
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
# 41 "data/maps/Rocheval_TownHall/scripts.pory"
	delay_16
	step_end

# 46 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_1:
# 46 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 46 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 46 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

# 60 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_2:
# 60 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
# 60 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_3:
# 62 "data/maps/Rocheval_TownHall/scripts.pory"
	face_left
	step_end

# 65 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_4:
# 65 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

# 67 "data/maps/Rocheval_TownHall/scripts.pory"
Rocheval_TownHall_Receptionist_Movement_5:
# 67 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 67 "data/maps/Rocheval_TownHall/scripts.pory"
	walk_left
# 67 "data/maps/Rocheval_TownHall/scripts.pory"
	face_down
	step_end

Rocheval_TownHall_Receptionist_Text_0:
# 35 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Welcome to Rocheval's Town Hall! How\n"
	.string "can I help you?$"

Rocheval_TownHall_Receptionist_Text_1:
# 36 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "...$"

Rocheval_TownHall_Receptionist_Text_2:
# 37 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "You say you were stranded at sea and\n"
	.string "lost all your Pokémons, and your ID? Oh\l"
	.string "dear, I'm sorry to hear that. Can I have\l"
	.string "your name please?$"

Rocheval_TownHall_Receptionist_Text_3:
# 39 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Let me check.$"

Rocheval_TownHall_Receptionist_Text_4:
# 43 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

Rocheval_TownHall_Receptionist_Text_5:
# 44 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "{PLAYER}... Yes, I can confirm that\n"
	.string "you're indeed a Thura citizen. Let me\l"
	.string "print you a new ID.$"

Rocheval_TownHall_Receptionist_Text_6:
# 48 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Here it is!$"

Rocheval_TownHall_Receptionist_Text_7:
# 52 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Huh? Your emblems? Unfortunately,\n"
	.string "there's very little I can do. I don't\l"
	.string "have the power to give you back your\l"
	.string "emblems. You will have to go to the\l"
	.string "continent, present yourself to the\l"
	.string "Pokémon League and explain your\l"
	.string "situation. Is there anything I can help\l"
	.string "you with?$"

Rocheval_TownHall_Receptionist_Text_8:
# 55 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "To go back to the continent, you will\n"
	.string "have to take the helicopter, that will\l"
	.string "take you to Sapphire City. The ticket\l"
	.string "costs ¥5 000. Is there anything more I\l"
	.string "can help you with?$"

Rocheval_TownHall_Receptionist_Text_9:
# 58 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Umm, usually, we only give Pokémons away\n"
	.string "to the new trainers... Let me check with\l"
	.string "my superior.$"

Rocheval_TownHall_Receptionist_Text_10:
# 69 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Well, it's you lucky day! We actually\n"
	.string "have one Pokémon left to give! You can\l"
	.string "proceed to your left, there's a small\l"
	.string "room downstairs where my colleague will\l"
	.string "provide you with a new companion.$"

Rocheval_TownHall_Receptionist_Text_11:
# 77 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "{PLAYER}, have you seen my colleague\n"
	.string "yet?$"

Rocheval_TownHall_Receptionist_Text_12:
# 80 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Welcome back to Rocheval's Town Hall,\n"
	.string "{PLAYER}! How can I help you?$"

Rocheval_TownHall_Multichoice_Text_0:
# 92 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Rocheval is an old village built by\n"
	.string "fishermen 400 years ago. At the time,\l"
	.string "Rocheval lived off fishing, but now it\l"
	.string "lives off tourism. Would you like to\l"
	.string "know anything else?$"

Rocheval_TownHall_Multichoice_Text_1:
# 96 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "We travel to the continent by\n"
	.string "helicopter. Although our citizens don't\l"
	.string "need to go there very often, as we can\l"
	.string "find almost everything here. Would you\l"
	.string "like to know anything else?$"

Rocheval_TownHall_Multichoice_Text_2:
# 100 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "We hope you enjoy your stay!$"

Rocheval_TownHall_NoAccess_Text_0:
# 109 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "(I should talk to the receptionist\n"
	.string "first.)$"

Rocheval_TownHall_NoAccess2_Text_0:
# 121 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "(I should meet the employee outside.)$"

Rocheval_TownHall_ReadyToLeave_Text_0:
# 133 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Sam$"

Rocheval_TownHall_ReadyToLeave_Text_1:
# 134 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "{PLAYER}! You're finally here. What\n"
	.string "took you so long? Anyway. I bought us\l"
	.string "two tickets! You don't even have to pay\l"
	.string "for one! You're welcome, hehe. Come on,\l"
	.string "let's go!$"

Rocheval_TownHall_ReadyToLeave_Text_2:
# 138 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "How did I pay for them? Don't even worry\n"
	.string "about it, the main thing is that we can\l"
	.string "finally go to the continent! Come on!$"

Rocheval_TownHall_ReadyToLeave_Text_3:
# 145 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Hi! Can you let us through? We have\n"
	.string "tickets!$"

Rocheval_TownHall_ReadyToLeave_Text_4:
# 161 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Let's go!$"

Rocheval_TownHall_Guard_Text_0:
# 176 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Have a safe flight.$"

Rocheval_TownHall_Guard_Text_1:
# 186 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "I'm sorry, you can't access the heliport\n"
	.string "now. Come back when you have a ticket.$"

Rocheval_TownHall_Kid_Text_0:
# 198 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Huh? Why am I wearing a swimsuit? I lost\n"
	.string "my ID while I was swimming. Don't make\l"
	.string "fun of me, it can happen to anyone.$"

Rocheval_TownHall_Francais1_Text_0:
# 205 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Je comprends rien à ce que vous\n"
	.string "racontez. Personne ne parle français\l"
	.string "ici? On aurait du partir en vacances sur\l"
	.string "la Côte d'Azur, je te l'avais dit!$"

Rocheval_TownHall_Francais2_Text_0:
# 212 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "Arrête de t'énerver! Il fait super beau,\n"
	.string "c'est pas de sa faute si tu as perdu ta\l"
	.string "valise à l'aéroport!$"

Rocheval_TownHall_Woman_Text_0:
# 220 "data/maps/Rocheval_TownHall/scripts.pory"
	.string "It's too hot outside, so I'm hanging\n"
	.string "here and enjoying the AC.$"
