# 1 "data/maps/BoisEsprit/scripts.pory"

# 2 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_MapScripts::
# 3 "data/maps/BoisEsprit/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BoisEsprit_OnLoad
# 4 "data/maps/BoisEsprit/scripts.pory"
    .byte 0

BoisEsprit_OnLoad::
# 8 "data/maps/BoisEsprit/scripts.pory"
	compare VAR_MAIN_STORY, 29
	goto_if_eq BoisEsprit_OnLoad_2
BoisEsprit_OnLoad_1:
	end

BoisEsprit_OnLoad_2:
# 9 "data/maps/BoisEsprit/scripts.pory"
	setflag FLAG_ADMINS_BOIS
# 10 "data/maps/BoisEsprit/scripts.pory"
	removeobject 7
# 11 "data/maps/BoisEsprit/scripts.pory"
	removeobject 8
	goto BoisEsprit_OnLoad_1


BoisEsprit_Grunt1::
# 17 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_1, BoisGrunt1, BoisGrunt2
# 18 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt1_Text_0
# 19 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_Grunt2::
# 34 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_2, BoisGrunt3, BoisGrunt4
# 35 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt2_Text_0
# 36 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_Grunt3::
# 51 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_3, BoisGrunt5, BoisGrunt6
# 52 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt3_Text_0
# 53 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_Grunt4::
# 68 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_4, BoisGrunt7, BoisGrunt8
# 69 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt4_Text_0
# 70 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_Grunt5::
# 85 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_5, BoisGrunt9, BoisGrunt10
# 86 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt5_Text_0
# 87 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_Grunt6::
# 102 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_single TRAINER_BOIS_6, BoisGrunt11, BoisGrunt12
# 103 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_Grunt6_Text_0
# 104 "data/maps/BoisEsprit/scripts.pory"
	closemessage
	end


BoisEsprit_DoubleAdmin::
# 119 "data/maps/BoisEsprit/scripts.pory"
	lock
# 120 "data/maps/BoisEsprit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 121 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_0
# 122 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_1
# 123 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 124 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 125 "data/maps/BoisEsprit/scripts.pory"
	clearflag FLAG_ADMINS_BOIS
# 126 "data/maps/BoisEsprit/scripts.pory"
	addobject 7
# 127 "data/maps/BoisEsprit/scripts.pory"
	addobject 8
# 128 "data/maps/BoisEsprit/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 129 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_0
# 130 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 131 "data/maps/BoisEsprit/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq BoisEsprit_DoubleAdmin_2
# 138 "data/maps/BoisEsprit/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq BoisEsprit_DoubleAdmin_3
# 146 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_5
# 147 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_6
# 148 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 149 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_0
# 150 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
BoisEsprit_DoubleAdmin_1:
# 152 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_2
# 153 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_3
# 154 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 155 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 156 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_no_intro TRAINER_BOIS_ADMIN_1, BarbaraBois1
# 157 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_2
# 158 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_4
# 159 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 160 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 161 "data/maps/BoisEsprit/scripts.pory"
	turnobject 7, DIR_NORTH
# 162 "data/maps/BoisEsprit/scripts.pory"
	delay 40
# 163 "data/maps/BoisEsprit/scripts.pory"
	turnobject 8, DIR_NORTH
# 164 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_7
# 165 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 166 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_5
# 167 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_6
# 168 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 169 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 170 "data/maps/BoisEsprit/scripts.pory"
	turnobject 8, DIR_EAST
# 171 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_8
# 172 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 173 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_5
# 174 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_7
# 175 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 176 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 177 "data/maps/BoisEsprit/scripts.pory"
	trainerbattle_no_intro TRAINER_BOIS_ADMIN_2, MauriceBois1
# 178 "data/maps/BoisEsprit/scripts.pory"
	namebox BoisEsprit_DoubleAdmin_Text_5
# 179 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_DoubleAdmin_Text_8
# 180 "data/maps/BoisEsprit/scripts.pory"
	closemessage
# 181 "data/maps/BoisEsprit/scripts.pory"
	hidenamebox
# 182 "data/maps/BoisEsprit/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq BoisEsprit_DoubleAdmin_8
# 189 "data/maps/BoisEsprit/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_eq BoisEsprit_DoubleAdmin_9
# 197 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_13
# 198 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_12
# 199 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 200 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_11
# 201 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
BoisEsprit_DoubleAdmin_7:
# 203 "data/maps/BoisEsprit/scripts.pory"
	removeobject 7
# 204 "data/maps/BoisEsprit/scripts.pory"
	removeobject 8
# 205 "data/maps/BoisEsprit/scripts.pory"
	playse SE_EXIT
# 206 "data/maps/BoisEsprit/scripts.pory"
	delay 40
# 207 "data/maps/BoisEsprit/scripts.pory"
	fadeoutbgm 1
# 208 "data/maps/BoisEsprit/scripts.pory"
	playbgm MUS_RG_VIRIDIAN_FOREST, TRUE
# 209 "data/maps/BoisEsprit/scripts.pory"
	setflag FLAG_ADMINS_BOIS
# 210 "data/maps/BoisEsprit/scripts.pory"
	setvar VAR_MAIN_STORY, 30
# 211 "data/maps/BoisEsprit/scripts.pory"
	release
	end

BoisEsprit_DoubleAdmin_2:
# 132 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_1
# 133 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_2
# 134 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 135 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_0
# 136 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
	goto BoisEsprit_DoubleAdmin_1

BoisEsprit_DoubleAdmin_3:
# 139 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_3
# 140 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_4
# 141 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 142 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_0
# 143 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
	goto BoisEsprit_DoubleAdmin_1

BoisEsprit_DoubleAdmin_8:
# 183 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_9
# 184 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_10
# 185 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 186 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_11
# 187 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
	goto BoisEsprit_DoubleAdmin_7

BoisEsprit_DoubleAdmin_9:
# 190 "data/maps/BoisEsprit/scripts.pory"
	applymovement 7, BoisEsprit_DoubleAdmin_Movement_9
# 191 "data/maps/BoisEsprit/scripts.pory"
	applymovement 8, BoisEsprit_DoubleAdmin_Movement_12
# 192 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
# 193 "data/maps/BoisEsprit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BoisEsprit_DoubleAdmin_Movement_11
# 194 "data/maps/BoisEsprit/scripts.pory"
	waitmovement 0
	goto BoisEsprit_DoubleAdmin_7


BoisEsprit_GruntNPC1::
# 226 "data/maps/BoisEsprit/scripts.pory"
	lock
# 227 "data/maps/BoisEsprit/scripts.pory"
	faceplayer
# 228 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_GruntNPC1_Text_0
# 229 "data/maps/BoisEsprit/scripts.pory"
	release
	end


BoisEsprit_GruntNPC2::
# 234 "data/maps/BoisEsprit/scripts.pory"
	lock
# 235 "data/maps/BoisEsprit/scripts.pory"
	faceplayer
# 236 "data/maps/BoisEsprit/scripts.pory"
	msgbox BoisEsprit_GruntNPC2_Text_0
# 237 "data/maps/BoisEsprit/scripts.pory"
	release
	end


BoisEsprit_Item::
# 244 "data/maps/BoisEsprit/scripts.pory"
	lock
# 245 "data/maps/BoisEsprit/scripts.pory"
	removeobject 11
# 246 "data/maps/BoisEsprit/scripts.pory"
	giveitem ITEM_TM20
# 247 "data/maps/BoisEsprit/scripts.pory"
	setflag FLAG_ITEM_BOIS_1
# 248 "data/maps/BoisEsprit/scripts.pory"
	release
	end


# 129 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_0:
# 129 "data/maps/BoisEsprit/scripts.pory"
	face_up
	step_end

# 132 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_1:
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 132 "data/maps/BoisEsprit/scripts.pory"
	walk_down
	step_end

# 133 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_2:
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 133 "data/maps/BoisEsprit/scripts.pory"
	face_right
	step_end

# 139 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_3:
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 139 "data/maps/BoisEsprit/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_4:
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 140 "data/maps/BoisEsprit/scripts.pory"
	face_right
	step_end

# 146 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_5:
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 146 "data/maps/BoisEsprit/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_6:
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 147 "data/maps/BoisEsprit/scripts.pory"
	face_right
	step_end

# 164 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_7:
# 164 "data/maps/BoisEsprit/scripts.pory"
	walk_in_place_up
	step_end

# 171 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_8:
# 171 "data/maps/BoisEsprit/scripts.pory"
	face_left
	step_end

# 183 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_9:
# 183 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_right
# 183 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_down
# 183 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_down
	step_end

# 184 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_10:
# 184 "data/maps/BoisEsprit/scripts.pory"
	walk_up
# 184 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 184 "data/maps/BoisEsprit/scripts.pory"
	walk_right
# 184 "data/maps/BoisEsprit/scripts.pory"
	walk_down
# 184 "data/maps/BoisEsprit/scripts.pory"
	walk_down
	step_end

# 186 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_11:
# 186 "data/maps/BoisEsprit/scripts.pory"
	face_down
	step_end

# 191 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_12:
# 191 "data/maps/BoisEsprit/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/BoisEsprit/scripts.pory"
BoisEsprit_DoubleAdmin_Movement_13:
# 197 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_left
# 197 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_down
# 197 "data/maps/BoisEsprit/scripts.pory"
	walk_fast_down
	step_end

BoisEsprit_Grunt1_Text_0:
# 18 "data/maps/BoisEsprit/scripts.pory"
	.string "Don't listen to anyone else, we're\n"
	.string "actually the good guys. We're the ones\l"
	.string "protecting the forest.$"

BoisEsprit_Grunt2_Text_0:
# 35 "data/maps/BoisEsprit/scripts.pory"
	.string "An old naked man tried to block me from\n"
	.string "entering the forest. I had to teach him\l"
	.string "a lesson.$"

BoisEsprit_Grunt3_Text_0:
# 52 "data/maps/BoisEsprit/scripts.pory"
	.string "What am I doing with my life? I followed\n"
	.string "her because I'm so in love with her. Love\l"
	.string "is truly blind...$"

BoisEsprit_Grunt4_Text_0:
# 69 "data/maps/BoisEsprit/scripts.pory"
	.string "My boyfriend won't stop whining. Dude,\n"
	.string "look at all the paper we're doing!$"

BoisEsprit_Grunt5_Text_0:
# 86 "data/maps/BoisEsprit/scripts.pory"
	.string "I can't seem to grasp the basics of\n"
	.string "Psychic typed Pokémon. Am I doing the\l"
	.string "right thing?$"

BoisEsprit_Grunt6_Text_0:
# 103 "data/maps/BoisEsprit/scripts.pory"
	.string "I would be so pleased to be here if I\n"
	.string "could only breathe, just a little. Damn\l"
	.string "pollen allergy.$"

BoisEsprit_DoubleAdmin_Text_0:
# 121 "data/maps/BoisEsprit/scripts.pory"
	.string "???$"

BoisEsprit_DoubleAdmin_Text_1:
# 122 "data/maps/BoisEsprit/scripts.pory"
	.string "Hold it! Don't move!$"

BoisEsprit_DoubleAdmin_Text_2:
# 152 "data/maps/BoisEsprit/scripts.pory"
	.string "Barbara$"

BoisEsprit_DoubleAdmin_Text_3:
# 153 "data/maps/BoisEsprit/scripts.pory"
	.string "Hold on... Aren't you the kid that shooed\n"
	.string "me away from Cruzeira's gym? Hahaha!\l"
	.string "We've been told that there was a gym\l"
	.string "leader wreaking havoc in the forest,\l"
	.string "but this is miles better! I've been\l"
	.string "dwelling on that moment ever since you\l"
	.string "beat me... Now is the time for revenge!\l"
	.string "Hahaha!!$"

BoisEsprit_DoubleAdmin_Text_4:
# 158 "data/maps/BoisEsprit/scripts.pory"
	.string "Dammit! DAMN IT!!$"

BoisEsprit_DoubleAdmin_Text_5:
# 166 "data/maps/BoisEsprit/scripts.pory"
	.string "Maurice$"

BoisEsprit_DoubleAdmin_Text_6:
# 167 "data/maps/BoisEsprit/scripts.pory"
	.string "Well, isn't it a shame. After all these\n"
	.string "hours you spent 'training', you couldn't\l"
	.string "beat a stupid kid? Twice? Let me show\l"
	.string "you how it's done.$"

BoisEsprit_DoubleAdmin_Text_7:
# 174 "data/maps/BoisEsprit/scripts.pory"
	.string "Hope you're ready, because I sure am.$"

BoisEsprit_DoubleAdmin_Text_8:
# 179 "data/maps/BoisEsprit/scripts.pory"
	.string "Hmmm. We've no time to spare here.\n"
	.string "Barbara, come. Let's see K.A.M. and tell\l"
	.string "them what's happened.$"

BoisEsprit_GruntNPC1_Text_0:
# 228 "data/maps/BoisEsprit/scripts.pory"
	.string "I cannot fight anymore because some\n"
	.string "bald small dude literally annihilated my\l"
	.string "Pokémons. It's your lucky day, I guess.$"

BoisEsprit_GruntNPC2_Text_0:
# 236 "data/maps/BoisEsprit/scripts.pory"
	.string "Oh, no, no. I'm not a trainer. I'm actually\n"
	.string "in charge of accounting in the band! Did\l"
	.string "you know that it's actually harder to\l"
	.string "keep counts in an organisation like\l"
	.string "this?$"

BoisGrunt1::
# 23 "data/maps/BoisEsprit/scripts.pory"
	.string "Hey! This forest is ours, go away!$"

BoisGrunt2::
# 27 "data/maps/BoisEsprit/scripts.pory"
	.string "No, this can't be!$"

BoisGrunt3::
# 40 "data/maps/BoisEsprit/scripts.pory"
	.string "I'm sorry pal, the refuge is Fandangoes\n"
	.string "only.$"

BoisGrunt4::
# 44 "data/maps/BoisEsprit/scripts.pory"
	.string "We can make an exception...$"

BoisGrunt5::
# 57 "data/maps/BoisEsprit/scripts.pory"
	.string "Please, take me with you, wherever you\n"
	.string "go. I don't wanna be here anymore.$"

BoisGrunt6::
# 61 "data/maps/BoisEsprit/scripts.pory"
	.string "Yes! Thank you!$"

BoisGrunt7::
# 74 "data/maps/BoisEsprit/scripts.pory"
	.string "Ugh. Yeah, let's fight, I guess.$"

BoisGrunt8::
# 78 "data/maps/BoisEsprit/scripts.pory"
	.string "Fighting is not my forte, as you saw.$"

BoisGrunt9::
# 91 "data/maps/BoisEsprit/scripts.pory"
	.string "I'll show you how we do it, Fandango\n"
	.string "style!$"

BoisGrunt10::
# 95 "data/maps/BoisEsprit/scripts.pory"
	.string "Hmm. This isn't how it was supposed to\n"
	.string "go...$"

BoisGrunt11::
# 108 "data/maps/BoisEsprit/scripts.pory"
	.string "Achoo!$"

BoisGrunt12::
# 112 "data/maps/BoisEsprit/scripts.pory"
	.string "Sniff... My eyes... They burn like hell...$"

BarbaraBois1::
# 215 "data/maps/BoisEsprit/scripts.pory"
	.string "NOOOO!!$"

MauriceBois1::
# 219 "data/maps/BoisEsprit/scripts.pory"
	.string "Uhm... What? How?$"
