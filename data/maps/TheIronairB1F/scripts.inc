# 1 "data/maps/TheIronairB1F/scripts.pory"

# 2 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_MapScripts::
# 3 "data/maps/TheIronairB1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TheIronairB1F_OnLoad
# 4 "data/maps/TheIronairB1F/scripts.pory"
	.byte 0

TheIronairB1F_OnLoad::
# 8 "data/maps/TheIronairB1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, TheIronairB1F_OnLoad_1
	return

TheIronairB1F_OnLoad_1:
# 9 "data/maps/TheIronairB1F/scripts.pory"
	setmetatile 18, 6, METATILE_Cave_CaveFloor, FALSE
# 10 "data/maps/TheIronairB1F/scripts.pory"
	setmetatile 19, 6, METATILE_Cave_CaveFloor, FALSE
# 11 "data/maps/TheIronairB1F/scripts.pory"
	setmetatile 19, 7, METATILE_Cave_CaveFloor, FALSE
# 12 "data/maps/TheIronairB1F/scripts.pory"
	setmetatile 17, 7, METATILE_Cave_CaveFloor, FALSE
# 13 "data/maps/TheIronairB1F/scripts.pory"
	setmetatile 18, 8, METATILE_Cave_CaveFloor, FALSE
# 14 "data/maps/TheIronairB1F/scripts.pory"
	special DrawWholeMapView
	return


TheIronairB1F_Diancie::
# 19 "data/maps/TheIronairB1F/scripts.pory"
	lock
# 20 "data/maps/TheIronairB1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/TheIronairB1F/scripts.pory"
	compare VAR_TEMP_1, 9
	goto_if_eq TheIronairB1F_Diancie_2
# 25 "data/maps/TheIronairB1F/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq TheIronairB1F_Diancie_3
# 30 "data/maps/TheIronairB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB1F_Diancie_Movement_2
# 31 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
TheIronairB1F_Diancie_1:
# 33 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 34 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_1
# 35 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 36 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 37 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 38 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_EAST
# 39 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 40 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_2
# 41 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 42 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 43 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 44 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_NORTH
# 45 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 46 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_3
# 47 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 48 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 49 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 50 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_EAST
# 51 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 52 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_4
# 53 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 54 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 55 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 56 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 57 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 58 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_5
# 59 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 60 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 61 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 62 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_EAST
# 63 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 64 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_6
# 65 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 66 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 67 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 68 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 69 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_7
# 70 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 71 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 72 "data/maps/TheIronairB1F/scripts.pory"
	delay 20
# 73 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_NORTH
# 74 "data/maps/TheIronairB1F/scripts.pory"
	delay 20
# 75 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 76 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_8
# 77 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 78 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 79 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 80 "data/maps/TheIronairB1F/scripts.pory"
	turnobject 1, DIR_EAST
# 81 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 82 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_9
# 83 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 84 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_10
# 85 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 86 "data/maps/TheIronairB1F/scripts.pory"
	playse SE_PIN
# 87 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Diancie_Movement_3
# 88 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 90 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 91 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_11
# 92 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 93 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 94 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Diancie_Movement_4
# 95 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 97 "data/maps/TheIronairB1F/scripts.pory"
	goto TheIronairB1F_Choice
	return

TheIronairB1F_Diancie_2:
# 22 "data/maps/TheIronairB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB1F_Diancie_Movement_0
# 23 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
	goto TheIronairB1F_Diancie_1

TheIronairB1F_Diancie_3:
# 26 "data/maps/TheIronairB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB1F_Diancie_Movement_1
# 27 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
	goto TheIronairB1F_Diancie_1


TheIronairB1F_Choice::
# 101 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 102 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_0
# 103 "data/maps/TheIronairB1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERE, TRUE
# 104 "data/maps/TheIronairB1F/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/TheIronairB1F/scripts.pory"
	case 0, TheIronairB1F_Choice_2
# 112 "data/maps/TheIronairB1F/scripts.pory"
	case 1, TheIronairB1F_Choice_3
# 119 "data/maps/TheIronairB1F/scripts.pory"
	case 2, TheIronairB1F_Choice_4
	return

TheIronairB1F_Choice_2:
# 106 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 107 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 108 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 109 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_1
# 110 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 111 "data/maps/TheIronairB1F/scripts.pory"
	goto TheIronairB1F_Choice
	return

TheIronairB1F_Choice_3:
# 113 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 114 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 115 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 116 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_2
# 117 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 118 "data/maps/TheIronairB1F/scripts.pory"
	goto TheIronairB1F_Choice
	return

TheIronairB1F_Choice_4:
# 120 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 121 "data/maps/TheIronairB1F/scripts.pory"
	playse SE_PIN
# 122 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_0
# 123 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 125 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_1
# 126 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 128 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_3
# 129 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 130 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 131 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_2
# 132 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/TheIronairB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB1F_Choice_Movement_3
# 134 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 136 "data/maps/TheIronairB1F/scripts.pory"
	playse SE_PIN
# 137 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_0
# 138 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/TheIronairB1F/scripts.pory"
	delay 40
# 140 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_4
# 141 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/TheIronairB1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheIronairB1F_Choice_Movement_5
# 143 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 145 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_4
# 146 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 147 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 148 "data/maps/TheIronairB1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 149 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_5
# 150 "data/maps/TheIronairB1F/scripts.pory"
	waitfanfare
# 151 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 152 "data/maps/TheIronairB1F/scripts.pory"
	delay 20
# 153 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 154 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_6
# 155 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 156 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Diancie_Text_10
# 157 "data/maps/TheIronairB1F/scripts.pory"
	namebox TheIronairB1F_Diancie_Text_0
# 158 "data/maps/TheIronairB1F/scripts.pory"
	msgbox TheIronairB1F_Choice_Text_7
# 159 "data/maps/TheIronairB1F/scripts.pory"
	closemessage
# 160 "data/maps/TheIronairB1F/scripts.pory"
	hidenamebox
# 161 "data/maps/TheIronairB1F/scripts.pory"
	applymovement 1, TheIronairB1F_Choice_Movement_6
# 162 "data/maps/TheIronairB1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/TheIronairB1F/scripts.pory"
	removeobject 1
# 164 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_AFTER_ATTACK_BRUCE
# 165 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_HERMIT_BUSH
# 166 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_SAM_KIDNAPPED
# 167 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_ADMINS_BOIS
# 168 "data/maps/TheIronairB1F/scripts.pory"
	setvar VAR_SIDE_STORY_BRO, 0
# 169 "data/maps/TheIronairB1F/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 0
# 170 "data/maps/TheIronairB1F/scripts.pory"
	setvar VAR_MAIN_STORY, 28
# 171 "data/maps/TheIronairB1F/scripts.pory"
	setvar VAR_SHOP_UPDATE, 3
# 172 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 173 "data/maps/TheIronairB1F/scripts.pory"
	startquest QUEST_FANDANGO
# 174 "data/maps/TheIronairB1F/scripts.pory"
	release
	end


TheIronairB1F_Item::
# 180 "data/maps/TheIronairB1F/scripts.pory"
	lock
# 181 "data/maps/TheIronairB1F/scripts.pory"
	removeobject 2
# 182 "data/maps/TheIronairB1F/scripts.pory"
	giveitem ITEM_TM09
# 183 "data/maps/TheIronairB1F/scripts.pory"
	setflag FLAG_ITEM_IRONAIR_1
# 184 "data/maps/TheIronairB1F/scripts.pory"
	release
	end


# 22 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Diancie_Movement_0:
# 22 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
# 22 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Diancie_Movement_1:
# 26 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
# 26 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
# 26 "data/maps/TheIronairB1F/scripts.pory"
	walk_up
# 26 "data/maps/TheIronairB1F/scripts.pory"
	face_left
	step_end

# 30 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Diancie_Movement_2:
# 30 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
# 30 "data/maps/TheIronairB1F/scripts.pory"
	walk_left
# 30 "data/maps/TheIronairB1F/scripts.pory"
	walk_up
# 30 "data/maps/TheIronairB1F/scripts.pory"
	walk_up
# 30 "data/maps/TheIronairB1F/scripts.pory"
	face_left
	step_end

# 87 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Diancie_Movement_3:
# 87 "data/maps/TheIronairB1F/scripts.pory"
	jump_in_place_right
# 87 "data/maps/TheIronairB1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Diancie_Movement_4:
# 94 "data/maps/TheIronairB1F/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_0:
# 122 "data/maps/TheIronairB1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_1:
# 125 "data/maps/TheIronairB1F/scripts.pory"
	walk_up
# 125 "data/maps/TheIronairB1F/scripts.pory"
	face_right
	step_end

# 131 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_2:
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_down
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 131 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
	step_end

# 133 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_3:
# 133 "data/maps/TheIronairB1F/scripts.pory"
	face_right
	step_end

# 140 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_4:
# 140 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_left
# 140 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_left
# 140 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_left
# 140 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_left
# 140 "data/maps/TheIronairB1F/scripts.pory"
	face_up
	step_end

# 142 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_5:
# 142 "data/maps/TheIronairB1F/scripts.pory"
	face_down
	step_end

# 161 "data/maps/TheIronairB1F/scripts.pory"
TheIronairB1F_Choice_Movement_6:
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_down
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_down
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_down
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
# 161 "data/maps/TheIronairB1F/scripts.pory"
	walk_fast_right
	step_end

TheIronairB1F_Diancie_Text_0:
# 33 "data/maps/TheIronairB1F/scripts.pory"
	.string "Bruce$"

TheIronairB1F_Diancie_Text_1:
# 34 "data/maps/TheIronairB1F/scripts.pory"
	.string "...Thank god. The entrance is still\n"
	.string "blocked.$"

TheIronairB1F_Diancie_Text_2:
# 40 "data/maps/TheIronairB1F/scripts.pory"
	.string "You must ask yourself: why does he\n"
	.string "worry about a simple cave? There are\l"
	.string "thousands of them all across Thura.$"

TheIronairB1F_Diancie_Text_3:
# 46 "data/maps/TheIronairB1F/scripts.pory"
	.string "You couldn't be more wrong. This one is\n"
	.string "unique. Inside lives a very rare Pokémon\l"
	.string "that is the guardian of the Ironair.$"

TheIronairB1F_Diancie_Text_4:
# 52 "data/maps/TheIronairB1F/scripts.pory"
	.string "That Pokémon is called Diancie. It has\n"
	.string "lived in here for centuries, long before\l"
	.string "humans even settled in Thura.$"

TheIronairB1F_Diancie_Text_5:
# 58 "data/maps/TheIronairB1F/scripts.pory"
	.string "As you may see all around yourself, this\n"
	.string "cave is filled with inestimable\l"
	.string "gemstones. Thus, it attracts the envy\l"
	.string "of many brigands and evil-doers.$"

TheIronairB1F_Diancie_Text_6:
# 64 "data/maps/TheIronairB1F/scripts.pory"
	.string "When I settled here 20 years ago, I met\n"
	.string "Diancie. It was the most beautiful\l"
	.string "sight I've ever witnessed.$"

TheIronairB1F_Diancie_Text_7:
# 69 "data/maps/TheIronairB1F/scripts.pory"
	.string "I then made a vow to Diancie, that I will\n"
	.string "protect with all my heart and soul the\l"
	.string "cave and the stones from anyone who\l"
	.string "wanted to pillage this place.$"

TheIronairB1F_Diancie_Text_8:
# 76 "data/maps/TheIronairB1F/scripts.pory"
	.string "Since then, Diancie lets us extract all\n"
	.string "the iron we want from the Ironair, as\l"
	.string "long as we are respectful of our\l"
	.string "surroundings, and we keep anyone\l"
	.string "outside its cave.$"

TheIronairB1F_Diancie_Text_9:
# 82 "data/maps/TheIronairB1F/scripts.pory"
	.string "Now, you understand why I'm extremely\n"
	.string "worried. Our guard was one of our\l"
	.string "strongest trainers, and it seems like he\l"
	.string "was taken out in one fell swoop. Who\l"
	.string "could ever come here and defeat my boy\l"
	.string "like that? Why?$"

TheIronairB1F_Diancie_Text_10:
# 84 "data/maps/TheIronairB1F/scripts.pory"
	.string "...$"

TheIronairB1F_Diancie_Text_11:
# 91 "data/maps/TheIronairB1F/scripts.pory"
	.string "...What? You're right! Vikkie warned me\n"
	.string "about those pink punks! I knew it! Who\l"
	.string "else other than them? This time, I'm\l"
	.string "gonna make them pay! They tried to take\l"
	.string "over my foundry 2 weeks ago, but\l"
	.string "couldn't succeed! I guess they didn't\l"
	.string "take it well.$"

TheIronairB1F_Choice_Text_0:
# 102 "data/maps/TheIronairB1F/scripts.pory"
	.string "...Where do you think they've settled?$"

TheIronairB1F_Choice_Text_1:
# 109 "data/maps/TheIronairB1F/scripts.pory"
	.string "Ohulinn? No... I don't think that's right.\n"
	.string "You must have gone there, it's small and\l"
	.string "even if Eka can act weird sometimes, he\l"
	.string "wouldn't let that happen in his town.$"

TheIronairB1F_Choice_Text_2:
# 116 "data/maps/TheIronairB1F/scripts.pory"
	.string "Eh... Could be possible, but Vikkie knows\n"
	.string "everything, and she would have called if\l"
	.string "something was going on in there.$"

TheIronairB1F_Choice_Text_3:
# 128 "data/maps/TheIronairB1F/scripts.pory"
	.string "...Virimante? That barren land? I should\n"
	.string "have known better! Of course!! Let's go\l"
	.string "there!$"

TheIronairB1F_Choice_Text_4:
# 145 "data/maps/TheIronairB1F/scripts.pory"
	.string "Wait, before I go. I was supposed to\n"
	.string "give you the Ingot Emblem. Take this.$"

TheIronairB1F_Choice_Text_5:
# 149 "data/maps/TheIronairB1F/scripts.pory"
	.string "You just received the Ingot Emblem!$"

TheIronairB1F_Choice_Text_6:
# 154 "data/maps/TheIronairB1F/scripts.pory"
	.string "With that emblem, you'll be able to cross\n"
	.string "the river south of Frux. It's way better\l"
	.string "than trying to swim through it, and\l"
	.string "believe me, I tried.$"

TheIronairB1F_Choice_Text_7:
# 158 "data/maps/TheIronairB1F/scripts.pory"
	.string "Alright, there's no more time to lose!\n"
	.string "Let's whoop those punks!$"
