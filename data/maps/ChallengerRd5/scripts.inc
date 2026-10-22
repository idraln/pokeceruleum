# 1 "data/maps/ChallengerRd5/scripts.pory"

# 2 "data/maps/ChallengerRd5/scripts.pory"
ChallengerRd5_MapScripts::
# 3 "data/maps/ChallengerRd5/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, ChallengerRd5_OnLoad
# 4 "data/maps/ChallengerRd5/scripts.pory"
	.byte 0

ChallengerRd5_OnLoad::
# 8 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_1, ChallengerRd5_OnLoad_3
	return

ChallengerRd5_OnLoad_1:
# 9 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 30, 5, METATILE_Cave_EntranceLeftDown, TRUE
# 10 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_EntranceLeftUp, TRUE
# 11 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 31, 5, METATILE_Cave_EntranceCenterDown, FALSE
# 12 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_EntranceCenterUp, TRUE
# 13 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 32, 5, METATILE_Cave_EntranceRightDown, TRUE
# 14 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_EntranceRightUp, TRUE
# 15 "data/maps/ChallengerRd5/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_1, 27, 7
# 17 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_2, 31, 11
# 18 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_3, 35, 12
# 19 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_4, 29, 15
	return

ChallengerRd5_OnLoad_2:
# 8 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_3, ChallengerRd5_OnLoad_6
	return

ChallengerRd5_OnLoad_3:
# 8 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_2, ChallengerRd5_OnLoad_2
	return

ChallengerRd5_OnLoad_6:
# 8 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_4, ChallengerRd5_OnLoad_1
	return


ChallengerRd5_Door::
# 24 "data/maps/ChallengerRd5/scripts.pory"
	lock
# 25 "data/maps/ChallengerRd5/scripts.pory"
	getobjectxy LOCALID_CHALL_BOULDER_1, CURRENT_POSITION, VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/ChallengerRd5/scripts.pory"
	getobjectxy LOCALID_CHALL_BOULDER_2, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
# 27 "data/maps/ChallengerRd5/scripts.pory"
	getobjectxy LOCALID_CHALL_BOULDER_3, CURRENT_POSITION, VAR_TEMP_4, VAR_TEMP_5
# 28 "data/maps/ChallengerRd5/scripts.pory"
	getobjectxy LOCALID_CHALL_BOULDER_4, CURRENT_POSITION, VAR_TEMP_6, VAR_TEMP_7
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq ChallengerRd5_Door_4
ChallengerRd5_Door_3:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq ChallengerRd5_Door_8
ChallengerRd5_Door_7:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_0, 35
	goto_if_eq ChallengerRd5_Door_12
ChallengerRd5_Door_11:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_0, 29
	goto_if_eq ChallengerRd5_Door_15
ChallengerRd5_Door_1:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_2, 27
	goto_if_eq ChallengerRd5_Door_21
ChallengerRd5_Door_20:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_2, 31
	goto_if_eq ChallengerRd5_Door_25
ChallengerRd5_Door_24:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_2, 35
	goto_if_eq ChallengerRd5_Door_29
ChallengerRd5_Door_28:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_2, 29
	goto_if_eq ChallengerRd5_Door_32
ChallengerRd5_Door_18:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_4, 27
	goto_if_eq ChallengerRd5_Door_38
ChallengerRd5_Door_37:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_4, 31
	goto_if_eq ChallengerRd5_Door_42
ChallengerRd5_Door_41:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_4, 35
	goto_if_eq ChallengerRd5_Door_46
ChallengerRd5_Door_45:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_4, 29
	goto_if_eq ChallengerRd5_Door_49
ChallengerRd5_Door_35:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_6, 27
	goto_if_eq ChallengerRd5_Door_55
ChallengerRd5_Door_54:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_6, 31
	goto_if_eq ChallengerRd5_Door_59
ChallengerRd5_Door_58:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_6, 35
	goto_if_eq ChallengerRd5_Door_63
ChallengerRd5_Door_62:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_6, 29
	goto_if_eq ChallengerRd5_Door_66
ChallengerRd5_Door_52:
# 41 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_1, ChallengerRd5_Door_72
ChallengerRd5_Door_69:
# 59 "data/maps/ChallengerRd5/scripts.pory"
	release
	end

ChallengerRd5_Door_2:
# 30 "data/maps/ChallengerRd5/scripts.pory"
	setflag FLAG_CHALL_SWITCH_1
	goto ChallengerRd5_Door_1

ChallengerRd5_Door_4:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq ChallengerRd5_Door_2
	goto ChallengerRd5_Door_3

ChallengerRd5_Door_8:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq ChallengerRd5_Door_2
	goto ChallengerRd5_Door_7

ChallengerRd5_Door_12:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_1, 12
	goto_if_eq ChallengerRd5_Door_2
	goto ChallengerRd5_Door_11

ChallengerRd5_Door_15:
# 29 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq ChallengerRd5_Door_2
	goto ChallengerRd5_Door_1

ChallengerRd5_Door_19:
# 33 "data/maps/ChallengerRd5/scripts.pory"
	setflag FLAG_CHALL_SWITCH_2
	goto ChallengerRd5_Door_18

ChallengerRd5_Door_21:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_3, 7
	goto_if_eq ChallengerRd5_Door_19
	goto ChallengerRd5_Door_20

ChallengerRd5_Door_25:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_3, 11
	goto_if_eq ChallengerRd5_Door_19
	goto ChallengerRd5_Door_24

ChallengerRd5_Door_29:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_3, 12
	goto_if_eq ChallengerRd5_Door_19
	goto ChallengerRd5_Door_28

ChallengerRd5_Door_32:
# 32 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_3, 15
	goto_if_eq ChallengerRd5_Door_19
	goto ChallengerRd5_Door_18

ChallengerRd5_Door_36:
# 36 "data/maps/ChallengerRd5/scripts.pory"
	setflag FLAG_CHALL_SWITCH_3
	goto ChallengerRd5_Door_35

ChallengerRd5_Door_38:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_5, 7
	goto_if_eq ChallengerRd5_Door_36
	goto ChallengerRd5_Door_37

ChallengerRd5_Door_42:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_5, 11
	goto_if_eq ChallengerRd5_Door_36
	goto ChallengerRd5_Door_41

ChallengerRd5_Door_46:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_5, 12
	goto_if_eq ChallengerRd5_Door_36
	goto ChallengerRd5_Door_45

ChallengerRd5_Door_49:
# 35 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_5, 15
	goto_if_eq ChallengerRd5_Door_36
	goto ChallengerRd5_Door_35

ChallengerRd5_Door_53:
# 39 "data/maps/ChallengerRd5/scripts.pory"
	setflag FLAG_CHALL_SWITCH_4
	goto ChallengerRd5_Door_52

ChallengerRd5_Door_55:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_7, 7
	goto_if_eq ChallengerRd5_Door_53
	goto ChallengerRd5_Door_54

ChallengerRd5_Door_59:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_7, 11
	goto_if_eq ChallengerRd5_Door_53
	goto ChallengerRd5_Door_58

ChallengerRd5_Door_63:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_7, 12
	goto_if_eq ChallengerRd5_Door_53
	goto ChallengerRd5_Door_62

ChallengerRd5_Door_66:
# 38 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_TEMP_7, 15
	goto_if_eq ChallengerRd5_Door_53
	goto ChallengerRd5_Door_52

ChallengerRd5_Door_70:
# 42 "data/maps/ChallengerRd5/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 43 "data/maps/ChallengerRd5/scripts.pory"
	waitse
# 44 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 30, 5, METATILE_Cave_EntranceLeftDown, TRUE
# 45 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 30, 4, METATILE_Cave_EntranceLeftUp, TRUE
# 46 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 31, 5, METATILE_Cave_EntranceCenterDown, FALSE
# 47 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 31, 4, METATILE_Cave_EntranceCenterUp, TRUE
# 48 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 32, 5, METATILE_Cave_EntranceRightDown, TRUE
# 49 "data/maps/ChallengerRd5/scripts.pory"
	setmetatile 32, 4, METATILE_Cave_EntranceRightUp, TRUE
# 50 "data/maps/ChallengerRd5/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Door_Text_0
# 52 "data/maps/ChallengerRd5/scripts.pory"
	closemessage
# 53 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_1, 27, 7
# 54 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_2, 31, 11
# 55 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_3, 35, 12
# 56 "data/maps/ChallengerRd5/scripts.pory"
	setobjectxyperm LOCALID_CHALL_BOULDER_4, 29, 15
# 57 "data/maps/ChallengerRd5/scripts.pory"
	setvar VAR_CHALL_SWITCH_1, 1
	goto ChallengerRd5_Door_69

ChallengerRd5_Door_71:
# 41 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_3, ChallengerRd5_Door_75
	goto ChallengerRd5_Door_69

ChallengerRd5_Door_72:
# 41 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_2, ChallengerRd5_Door_71
	goto ChallengerRd5_Door_69

ChallengerRd5_Door_75:
# 41 "data/maps/ChallengerRd5/scripts.pory"
	goto_if_set FLAG_CHALL_SWITCH_4, ChallengerRd5_Door_70
	goto ChallengerRd5_Door_69


ChallengerRd5_Nurse::
# 64 "data/maps/ChallengerRd5/scripts.pory"
	lock
# 65 "data/maps/ChallengerRd5/scripts.pory"
	faceplayer
# 66 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Nurse_Text_0, MSGBOX_YESNO
# 67 "data/maps/ChallengerRd5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChallengerRd5_Nurse_2
# 78 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Nurse_Text_3
ChallengerRd5_Nurse_1:
# 80 "data/maps/ChallengerRd5/scripts.pory"
	release
	end

ChallengerRd5_Nurse_2:
# 68 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Nurse_Text_1
# 69 "data/maps/ChallengerRd5/scripts.pory"
	closemessage
# 70 "data/maps/ChallengerRd5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/ChallengerRd5/scripts.pory"
	special HealPlayerParty
# 72 "data/maps/ChallengerRd5/scripts.pory"
	playfanfare MUS_HEAL
# 73 "data/maps/ChallengerRd5/scripts.pory"
	waitfanfare
# 74 "data/maps/ChallengerRd5/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Nurse_Text_2
	goto ChallengerRd5_Nurse_1


ChallengerRd5_Dominique::
# 85 "data/maps/ChallengerRd5/scripts.pory"
	trainerbattle_single TRAINER_CHALL_6, Dominique1, Dominique2
# 86 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_Dominique_Text_0
# 87 "data/maps/ChallengerRd5/scripts.pory"
	release
	end


ChallengerRd5_Item::
# 100 "data/maps/ChallengerRd5/scripts.pory"
	lock
# 101 "data/maps/ChallengerRd5/scripts.pory"
	removeobject 7
# 102 "data/maps/ChallengerRd5/scripts.pory"
	giveitem ITEM_MAGMARIZER
# 103 "data/maps/ChallengerRd5/scripts.pory"
	setflag FLAG_ITEM_CHALL_4
# 104 "data/maps/ChallengerRd5/scripts.pory"
	release
	end


ChallengerRd5_SignPost::
# 109 "data/maps/ChallengerRd5/scripts.pory"
	lockall
# 110 "data/maps/ChallengerRd5/scripts.pory"
	msgbox ChallengerRd5_SignPost_Text_0
# 111 "data/maps/ChallengerRd5/scripts.pory"
	releaseall
	end


ChallengerRd5_Door_Text_0:
# 51 "data/maps/ChallengerRd5/scripts.pory"
	.string "An opening has just appeared!$"

ChallengerRd5_Nurse_Text_0:
# 66 "data/maps/ChallengerRd5/scripts.pory"
	.string "Hello there! You've made a lot of\n"
	.string "progress. Would you like me to heal your\l"
	.string "party?$"

ChallengerRd5_Nurse_Text_1:
# 68 "data/maps/ChallengerRd5/scripts.pory"
	.string "Gotcha. Just relax...$"

ChallengerRd5_Nurse_Text_2:
# 75 "data/maps/ChallengerRd5/scripts.pory"
	.string "Here you go, fully healed!$"

ChallengerRd5_Nurse_Text_3:
# 78 "data/maps/ChallengerRd5/scripts.pory"
	.string "Gotcha. Good luck!$"

ChallengerRd5_Dominique_Text_0:
# 86 "data/maps/ChallengerRd5/scripts.pory"
	.string "I can't let a stupid puzzle refrain me\n"
	.string "from my dream! Come on Dom, think...$"

ChallengerRd5_SignPost_Text_0:
# 110 "data/maps/ChallengerRd5/scripts.pory"
	.string "You messed up the puzzle? Pushed the\n"
	.string "boulders a little too far? Go to the\l"
	.string "pond to your left, come back to the\l"
	.string "puzzle, and poof! The boulders will\l"
	.string "magically be back at their original\l"
	.string "place.$"

Dominique1::
# 91 "data/maps/ChallengerRd5/scripts.pory"
	.string "I can't wrap my head around that\n"
	.string "puzzle, raaah!$"

Dominique2::
# 95 "data/maps/ChallengerRd5/scripts.pory"
	.string "What??$"
