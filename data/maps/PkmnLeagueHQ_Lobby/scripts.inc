# 1 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"

# 2 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
PkmnLeagueHQ_Lobby_MapScripts::
# 3 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, PkmnLeagueHQ_Lobby_OnTransition
# 4 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
    .byte 0

PkmnLeagueHQ_Lobby_OnTransition::
# 8 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setrespawn HEAL_LOCATION_PKMN_LEAGUE_HQ
	end


PkmnLeagueHQ_Lobby_Nurse::
# 13 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	lock
# 14 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	faceplayer
# 15 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Nurse_Text_0, MSGBOX_YESNO
# 17 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkmnLeagueHQ_Lobby_Nurse_1
# 37 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Nurse_Text_4
# 38 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Nurse_1:
# 18 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Nurse_Text_1
# 20 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidefollower 0
# 21 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 2, PkmnCenter_NurseTurn
# 22 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 23 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 2, PkmnCenter_NurseReTurn
# 26 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 27 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Nurse_Text_2
# 29 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmessage
# 30 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 2, PkmnCenter_NurseBow
# 31 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 32 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Nurse_Text_3
# 33 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end


PkmnLeagueHQ_Lobby_Intendant::
# 44 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 8
	goto_if_eq PkmnLeagueHQ_Lobby_Intendant_1
# 112 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 39
	goto_if_gt PkmnLeagueHQ_Lobby_Intendant_2
# 122 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	lock
# 123 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	faceplayer
# 124 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 125 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_15
# 126 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 127 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Intendant_1:
# 45 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	lock
# 46 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	faceplayer
# 47 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 48 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_1
# 49 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 50 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 51 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playse SE_PIN
# 52 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 1, PkmnLeagueHQ_Lobby_Intendant_Movement_0
# 53 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 54 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 30
# 55 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 56 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_2
# 57 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 58 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_3
# 59 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 60 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_4
# 61 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 62 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_3
# 63 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 64 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_5
# 65 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 66 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 67 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 20
# 68 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 1, PkmnLeagueHQ_Lobby_Intendant_Movement_1
# 69 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 70 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 20
# 71 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 72 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_6
# 73 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 74 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 75 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 20
# 76 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	applymovement 1, PkmnLeagueHQ_Lobby_Intendant_Movement_2
# 77 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitmovement 0
# 78 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 20
# 79 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 80 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_7
# 81 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 82 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_8
# 83 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 84 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_9
# 85 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 86 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 87 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 88 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_10
# 89 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitfanfare
# 90 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 91 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 40
# 92 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 93 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_11
# 94 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 95 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 96 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 20
# 97 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 98 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_12
# 99 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 100 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 101 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setflag FLAG_DEXNAV_GET
# 102 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 103 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_13
# 104 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	waitfanfare
# 105 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 106 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setflag FLAG_ENABLE_EMPLOYEE_MATCH_CALL
# 107 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setvar VAR_MAIN_STORY, 9
# 109 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Intendant_2:
# 113 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	lock
# 114 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	faceplayer
# 115 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	namebox PkmnLeagueHQ_Lobby_Intendant_Text_0
# 116 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Intendant_Text_14
# 117 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	hidenamebox
# 118 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end


PkmnLeagueHQ_Lobby_Machine::
# 133 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	lock
# 134 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	faceplayer
# 135 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 36
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_2
# 135 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 37
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_2
# 135 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 38
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_2
# 135 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 39
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_2
# 141 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 142 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_10
# 173 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_6, MSGBOX_YESNO
# 174 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_16
# 186 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_8
# 187 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_2:
# 136 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playse SE_FAILURE
# 137 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_0
# 138 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_10:
# 143 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_1, MSGBOX_YESNO
# 144 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PkmnLeagueHQ_Lobby_Machine_13
# 167 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_5
# 168 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_13:
# 145 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_2
# 146 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PkmnLeagueHQ_Lobby_Machine_22
PkmnLeagueHQ_Lobby_Machine_20:
# 159 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 40
# 160 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playse SE_FAILURE
# 161 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_4
# 162 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_16:
# 175 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 40
# 176 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setmetatile 15, 4, METATILE_TrainerHill_GreenFloorTile, FALSE
# 177 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setmetatile 15, 5, METATILE_TrainerHill_GreenFloorTile, FALSE
# 178 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	special DrawWholeMapView
# 179 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playse MUS_LEVEL_UP
# 180 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_7
# 181 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 182 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_19:
# 148 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	delay 40
# 149 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setmetatile 15, 4, METATILE_TrainerHill_GreenFloorTile, FALSE
# 150 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setmetatile 15, 5, METATILE_TrainerHill_GreenFloorTile, FALSE
# 151 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	special DrawWholeMapView
# 152 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	playse MUS_LEVEL_UP
# 153 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	msgbox PkmnLeagueHQ_Lobby_Machine_Text_3
# 154 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	closemessage
# 155 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	release
	end

PkmnLeagueHQ_Lobby_Machine_21:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PkmnLeagueHQ_Lobby_Machine_26
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_22:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PkmnLeagueHQ_Lobby_Machine_21
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_25:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PkmnLeagueHQ_Lobby_Machine_30
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_26:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PkmnLeagueHQ_Lobby_Machine_25
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_29:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PkmnLeagueHQ_Lobby_Machine_33
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_30:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PkmnLeagueHQ_Lobby_Machine_29
	goto PkmnLeagueHQ_Lobby_Machine_20

PkmnLeagueHQ_Lobby_Machine_33:
# 147 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, PkmnLeagueHQ_Lobby_Machine_19
	goto PkmnLeagueHQ_Lobby_Machine_20


PkmnLeagueHQ_HideName::
# 195 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_lt PkmnLeagueHQ_HideName_2
PkmnLeagueHQ_HideName_1:
	end

PkmnLeagueHQ_HideName_2:
# 196 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto PkmnLeagueHQ_HideName_1


PkmnLeagueHQ_ShowName::
# 202 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	compare VAR_MAIN_STORY, 42
	goto_if_lt PkmnLeagueHQ_ShowName_2
PkmnLeagueHQ_ShowName_1:
	end

PkmnLeagueHQ_ShowName_2:
# 203 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	goto PkmnLeagueHQ_ShowName_1


# 52 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
PkmnLeagueHQ_Lobby_Intendant_Movement_0:
# 52 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	emote_exclamation_mark
	step_end

# 68 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
PkmnLeagueHQ_Lobby_Intendant_Movement_1:
# 68 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	face_right
	step_end

# 76 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
PkmnLeagueHQ_Lobby_Intendant_Movement_2:
# 76 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	face_down
	step_end

PkmnLeagueHQ_Lobby_Nurse_Text_0:
# 16 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Hey there, welcome to the Pokémon\n"
	.string "League's Center! How are you? Would you\l"
	.string "like to heal your party?$"

PkmnLeagueHQ_Lobby_Nurse_Text_1:
# 19 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Okay, let me take your Pokémons.$"

PkmnLeagueHQ_Lobby_Nurse_Text_2:
# 28 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Here you go, your Pokémons are fully\n"
	.string "healed!$"

PkmnLeagueHQ_Lobby_Nurse_Text_3:
# 32 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "We hope to see you soon!$"

PkmnLeagueHQ_Lobby_Nurse_Text_4:
# 37 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "No worries! Come back soon!$"

PkmnLeagueHQ_Lobby_Intendant_Text_0:
# 47 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Bernard$"

PkmnLeagueHQ_Lobby_Intendant_Text_1:
# 48 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Hello, and welcome to the Pokémon Lea...$"

PkmnLeagueHQ_Lobby_Intendant_Text_2:
# 56 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "{PLAYER}! It's you! I'm so glad to see\n"
	.string "that you're okay! Please don't sue us.\l"
	.string "That wasn't our fault.$"

PkmnLeagueHQ_Lobby_Intendant_Text_3:
# 58 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "...$"

PkmnLeagueHQ_Lobby_Intendant_Text_4:
# 60 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Oh? You already knew that? Very well\n"
	.string "then. On behalf of the Council, we\l"
	.string "apologise sincerely.$"

PkmnLeagueHQ_Lobby_Intendant_Text_5:
# 64 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Uhm, I don't recall collecting any lost\n"
	.string "items. Xatu also went missing?...$"

PkmnLeagueHQ_Lobby_Intendant_Text_6:
# 72 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "...This is a tragedy...$"

PkmnLeagueHQ_Lobby_Intendant_Text_7:
# 80 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "See, the President has also gone\n"
	.string "missing, so all of Thura's forces are\l"
	.string "moving heaven and earth to find him.\l"
	.string "And because of that, no one is allowed\l"
	.string "in the premises, from here to the\l"
	.string "Council HQ. That means that I can't give\l"
	.string "you back your emblems. Sorry...$"

PkmnLeagueHQ_Lobby_Intendant_Text_8:
# 82 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "...\n"
	.string "...$"

PkmnLeagueHQ_Lobby_Intendant_Text_9:
# 84 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Again, very sorry for what happened to\n"
	.string "you and Xatu. Here, let's exchange\l"
	.string "numbers. If we learn or find anything\l"
	.string "new, we'll let you know.$"

PkmnLeagueHQ_Lobby_Intendant_Text_10:
# 88 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "You registered Employee Bernard.$"

PkmnLeagueHQ_Lobby_Intendant_Text_11:
# 93 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "...Uh, I guess that in the meantime, you\n"
	.string "could take on the Council Challenge all\l"
	.string "over again? Since you're so talented...\l"
	.string "We could use some of your skills. Here,\l"
	.string "take this. With this item, it'll take\l"
	.string "sooner to raise your new Pokémon.$"

PkmnLeagueHQ_Lobby_Intendant_Text_12:
# 98 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "You can also take that device. It's a\n"
	.string "neat little machine we've been working\l"
	.string "on, and we called it the DexNav. With\l"
	.string "this, you can find any Pokémon you\l"
	.string "want!$"

PkmnLeagueHQ_Lobby_Intendant_Text_13:
# 103 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Obtained the DexNav.$"

PkmnLeagueHQ_Lobby_Intendant_Text_14:
# 116 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "{PLAYER}... I'm still shaken about\n"
	.string "what happened back at the Ironair.\l"
	.string "Thank you for everything you've done.\l"
	.string "It's time you face the Council and take\l"
	.string "over presidential duties... That's what\l"
	.string "the President would've wanted.$"

PkmnLeagueHQ_Lobby_Intendant_Text_15:
# 125 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "Hi {PLAYER}! Unfortunately, I don't\n"
	.string "have any news to share. I'll call you as\l"
	.string "soon as I got some.$"

PkmnLeagueHQ_Lobby_Machine_Text_0:
# 137 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "SORRY, MAINTENANCE IN PROGRESS.\n"
	.string "ENDING SEQUENCE...$"

PkmnLeagueHQ_Lobby_Machine_Text_1:
# 143 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "GOOD DAY AND WELCOME TO THURA'S\n"
	.string "POKEMON LEAGUE. WOULD YOU LIKE TO\l"
	.string "ENTER?$"

PkmnLeagueHQ_Lobby_Machine_Text_2:
# 145 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "READING ID... CHECKING FOR EMBLEMS...$"

PkmnLeagueHQ_Lobby_Machine_Text_3:
# 153 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "YOU MAY NOW ENTER. GOOD LUCK.$"

PkmnLeagueHQ_Lobby_Machine_Text_4:
# 161 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "ERROR. YOU DON'T HAVE THE REQUIRED\n"
	.string "EMBLEMS TO GO THROUGH. ENDING\l"
	.string "SEQUENCE...$"

PkmnLeagueHQ_Lobby_Machine_Text_5:
# 167 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "WE HOPE TO SEE YOU SOON AT THURA'S\n"
	.string "POKEMON LEAGUE.$"

PkmnLeagueHQ_Lobby_Machine_Text_6:
# 173 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "HELLO, BRAVE CHALLENGER. WOULD YOU\n"
	.string "LIKE TO EXIT?$"

PkmnLeagueHQ_Lobby_Machine_Text_7:
# 180 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "YOU MAY NOW EXIT. WE HOPE TO SEE YOU\n"
	.string "SOON.$"

PkmnLeagueHQ_Lobby_Machine_Text_8:
# 186 "data/maps/PkmnLeagueHQ_Lobby/scripts.pory"
	.string "ENDING SEQUENCE...$"
