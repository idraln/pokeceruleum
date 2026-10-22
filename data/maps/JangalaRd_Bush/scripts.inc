# 1 "data/maps/JangalaRd_Bush/scripts.pory"

# 2 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_MapScripts::
# 3 "data/maps/JangalaRd_Bush/scripts.pory"
	.byte 0

JangalaRd_Bush_Hermit::
# 7 "data/maps/JangalaRd_Bush/scripts.pory"
	lock
# 8 "data/maps/JangalaRd_Bush/scripts.pory"
	compare VAR_QUEST_HERMIT, 4
	goto_if_gt JangalaRd_Bush_Hermit_1
# 18 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 19 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_Hermit_Text_2
# 20 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 21 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 22 "data/maps/JangalaRd_Bush/scripts.pory"
	setfollowernpc 1, FNPC_LEAVE_ROUTE, 0, 0
# 23 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd_Bush_Hermit_Movement_0
# 24 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 25 "data/maps/JangalaRd_Bush/scripts.pory"
	setvar VAR_QUEST_HERMIT, 5
# 26 "data/maps/JangalaRd_Bush/scripts.pory"
	release
	end

JangalaRd_Bush_Hermit_1:
# 9 "data/maps/JangalaRd_Bush/scripts.pory"
	faceplayer
# 10 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 11 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_Hermit_Text_1
# 12 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 13 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 14 "data/maps/JangalaRd_Bush/scripts.pory"
	release
	end


JangalaRd_Bush_DontGo::
# 32 "data/maps/JangalaRd_Bush/scripts.pory"
	lock
# 33 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 34 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_DontGo_Text_0
# 35 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 36 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 37 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd_Bush_DontGo_Movement_0
# 38 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 39 "data/maps/JangalaRd_Bush/scripts.pory"
	release
	end


JangalaRd_Bush_Encounter::
# 44 "data/maps/JangalaRd_Bush/scripts.pory"
	lock
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd_Bush_Encounter_Movement_0
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JangalaRd_Bush_Encounter_Movement_1
# 47 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 48 "data/maps/JangalaRd_Bush/scripts.pory"
	special SpawnCameraObject
# 49 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JangalaRd_Bush_Encounter_Movement_2
# 50 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 51 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 20
# 52 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement 3, JangalaRd_Bush_Encounter_Movement_3
# 53 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 54 "data/maps/JangalaRd_Bush/scripts.pory"
	playse SE_PIN
# 55 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 40
# 56 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement 3, JangalaRd_Bush_Encounter_Movement_4
# 57 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JangalaRd_Bush_Encounter_Movement_4
# 58 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 59 "data/maps/JangalaRd_Bush/scripts.pory"
	playmoncry SPECIES_TREVENANT, CRY_MODE_ENCOUNTER
# 60 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmoncry
# 61 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 20
# 62 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement 1, JangalaRd_Bush_Encounter_Movement_5
# 63 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 64 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 65 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_Encounter_Text_0
# 66 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 67 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JangalaRd_Bush_Encounter_Movement_6
# 69 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 70 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 20
# 71 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement 3, JangalaRd_Bush_Encounter_Movement_7
# 72 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, JangalaRd_Bush_Encounter_Movement_8
# 73 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 74 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd_Bush_Encounter_Movement_9
# 75 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 76 "data/maps/JangalaRd_Bush/scripts.pory"
	special RemoveCameraObject
# 77 "data/maps/JangalaRd_Bush/scripts.pory"
	setwildbattle SPECIES_TREVENANT, 40
# 78 "data/maps/JangalaRd_Bush/scripts.pory"
	waitse
# 79 "data/maps/JangalaRd_Bush/scripts.pory"
	playmoncry SPECIES_TREVENANT, CRY_MODE_ENCOUNTER
# 80 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 40
# 81 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmoncry
# 82 "data/maps/JangalaRd_Bush/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/JangalaRd_Bush/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 84 "data/maps/JangalaRd_Bush/scripts.pory"
	waitstate
# 85 "data/maps/JangalaRd_Bush/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/JangalaRd_Bush/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 40
# 88 "data/maps/JangalaRd_Bush/scripts.pory"
	setflag FLAG_TREVENANT_BUSH
# 89 "data/maps/JangalaRd_Bush/scripts.pory"
	removeobject 3
# 90 "data/maps/JangalaRd_Bush/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 40
# 92 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd_Bush_Encounter_Movement_10
# 93 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 94 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 95 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_Encounter_Text_1
# 96 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 97 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 98 "data/maps/JangalaRd_Bush/scripts.pory"
	delay 20
# 99 "data/maps/JangalaRd_Bush/scripts.pory"
	namebox JangalaRd_Bush_Hermit_Text_0
# 100 "data/maps/JangalaRd_Bush/scripts.pory"
	msgbox JangalaRd_Bush_Encounter_Text_2
# 101 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 102 "data/maps/JangalaRd_Bush/scripts.pory"
	hidenamebox
# 103 "data/maps/JangalaRd_Bush/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 104 "data/maps/JangalaRd_Bush/scripts.pory"
	closemessage
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, JangalaRd_Bush_Encounter_Movement_11
# 106 "data/maps/JangalaRd_Bush/scripts.pory"
	waitmovement 0
# 107 "data/maps/JangalaRd_Bush/scripts.pory"
	destroyfollowernpc
# 108 "data/maps/JangalaRd_Bush/scripts.pory"
	setflag FLAG_HERMIT_JANGALA_BUSH
# 109 "data/maps/JangalaRd_Bush/scripts.pory"
	completequest QUEST_HERMIT
# 110 "data/maps/JangalaRd_Bush/scripts.pory"
	setvar VAR_QUEST_HERMIT, 6
# 111 "data/maps/JangalaRd_Bush/scripts.pory"
	release
	end


JangalaRd_Bush_Item::
# 116 "data/maps/JangalaRd_Bush/scripts.pory"
	lock
# 117 "data/maps/JangalaRd_Bush/scripts.pory"
	removeobject 2
# 118 "data/maps/JangalaRd_Bush/scripts.pory"
	setflag FLAG_ITEM_BUSH
# 119 "data/maps/JangalaRd_Bush/scripts.pory"
	giveitem ITEM_ENERGY_ROOT
# 120 "data/maps/JangalaRd_Bush/scripts.pory"
	release
	end


# 23 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Hermit_Movement_0:
# 23 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 23 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_DontGo_Movement_0:
# 37 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_0:
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 45 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
	step_end

# 46 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_1:
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 46 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
	step_end

# 49 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_2:
# 49 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 49 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 49 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
# 49 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_3:
# 52 "data/maps/JangalaRd_Bush/scripts.pory"
	face_down
# 52 "data/maps/JangalaRd_Bush/scripts.pory"
	emote_exclamation_mark
	step_end

# 56 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_4:
# 56 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_right
# 56 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 56 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
	step_end

# 62 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_5:
# 62 "data/maps/JangalaRd_Bush/scripts.pory"
	jump_in_place_up
# 62 "data/maps/JangalaRd_Bush/scripts.pory"
	jump_in_place_up
	step_end

# 68 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_6:
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_left
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_left
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_up
# 68 "data/maps/JangalaRd_Bush/scripts.pory"
	face_right
	step_end

# 71 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_7:
# 71 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 71 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 71 "data/maps/JangalaRd_Bush/scripts.pory"
	face_left
	step_end

# 72 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_8:
# 72 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 72 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_fast_down
# 72 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_left
	step_end

# 74 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_9:
# 74 "data/maps/JangalaRd_Bush/scripts.pory"
	face_right
	step_end

# 92 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_10:
# 92 "data/maps/JangalaRd_Bush/scripts.pory"
	face_left
	step_end

# 105 "data/maps/JangalaRd_Bush/scripts.pory"
JangalaRd_Bush_Encounter_Movement_11:
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_down
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_down
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_down
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_down
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_down
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
# 105 "data/maps/JangalaRd_Bush/scripts.pory"
	walk_right
	step_end

JangalaRd_Bush_Hermit_Text_0:
# 10 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "Hermit$"

JangalaRd_Bush_Hermit_Text_1:
# 11 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "So? Are we moving or what?$"

JangalaRd_Bush_Hermit_Text_2:
# 19 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "You take the lead. I'm too scared.$"

JangalaRd_Bush_DontGo_Text_0:
# 34 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "DON'T LEAVE ME HERE!$"

JangalaRd_Bush_Encounter_Text_0:
# 65 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "AAAAH!$"

JangalaRd_Bush_Encounter_Text_1:
# 95 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "Is this it? Is it gone?$"

JangalaRd_Bush_Encounter_Text_2:
# 100 "data/maps/JangalaRd_Bush/scripts.pory"
	.string "Thank you... I'm finally free. I'm leaving\n"
	.string "to Sapphire City, now. Thank you again,\l"
	.string "my friend. Take this.$"
