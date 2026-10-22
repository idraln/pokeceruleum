# 1 "data/maps/Vikkelson/scripts.pory"

# 2 "data/maps/Vikkelson/scripts.pory"
Vikkelson_MapScripts::
# 3 "data/maps/Vikkelson/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Vikkelson_OnTransition
# 4 "data/maps/Vikkelson/scripts.pory"
	.byte 0

Vikkelson_OnTransition::
# 8 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_VISITED_VIKKELSON
	return


Vikkelson_BoyRunning::
# 12 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_1, 0
	goto_if_eq Vikkelson_BoyRunning_1
# 19 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_1, 1
	goto_if_eq Vikkelson_BoyRunning_2
# 30 "data/maps/Vikkelson/scripts.pory"
	lock
# 31 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 32 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_3
# 33 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_BoyRunning_1:
# 13 "data/maps/Vikkelson/scripts.pory"
	lock
# 14 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 15 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_0
# 16 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_BoyRunning_2:
# 20 "data/maps/Vikkelson/scripts.pory"
	lock
# 21 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 22 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_0
# 23 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_1
# 24 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_2
# 25 "data/maps/Vikkelson/scripts.pory"
	setvar VAR_LOST_BOY_1, 2
# 26 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_GirlMart::
# 39 "data/maps/Vikkelson/scripts.pory"
	lock
# 40 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 41 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_GirlMart_Text_0
# 42 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_LostMan::
# 47 "data/maps/Vikkelson/scripts.pory"
	lock
# 48 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 49 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_LostMan_Text_0
# 50 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Dad::
# 55 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_1, 1
	goto_if_eq Vikkelson_Dad_1
# 55 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_2, 1
	goto_if_eq Vikkelson_Dad_1
# 62 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_1, 2
	goto_if_eq Vikkelson_Dad_4
Vikkelson_Dad_3:
# 91 "data/maps/Vikkelson/scripts.pory"
	lock
# 92 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 93 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Dad_Text_3
# 94 "data/maps/Vikkelson/scripts.pory"
	startquest QUEST_LOST_BOYS
# 95 "data/maps/Vikkelson/scripts.pory"
	setvar VAR_LOST_BOY_1, 1
# 96 "data/maps/Vikkelson/scripts.pory"
	setvar VAR_LOST_BOY_2, 1
# 97 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_Dad_1:
# 56 "data/maps/Vikkelson/scripts.pory"
	lock
# 57 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 58 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Dad_Text_0
# 59 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_Dad_2:
# 63 "data/maps/Vikkelson/scripts.pory"
	lock
# 64 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 65 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Dad_Text_1
# 66 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_1
# 67 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Dad_Text_2
# 68 "data/maps/Vikkelson/scripts.pory"
	closemessage
# 69 "data/maps/Vikkelson/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 70 "data/maps/Vikkelson/scripts.pory"
	completequest QUEST_LOST_BOYS
# 71 "data/maps/Vikkelson/scripts.pory"
	closemessage
# 72 "data/maps/Vikkelson/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 73 "data/maps/Vikkelson/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq Vikkelson_Dad_10
# 82 "data/maps/Vikkelson/scripts.pory"
	applymovement 18, Vikkelson_Dad_Movement_1
# 83 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 84 "data/maps/Vikkelson/scripts.pory"
	removeobject 18
# 85 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_PARTY_FAMILY
# 86 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_Dad_4:
# 62 "data/maps/Vikkelson/scripts.pory"
	compare VAR_LOST_BOY_2, 2
	goto_if_eq Vikkelson_Dad_2
	goto Vikkelson_Dad_3

Vikkelson_Dad_10:
# 74 "data/maps/Vikkelson/scripts.pory"
	applymovement 18, Vikkelson_Dad_Movement_0
# 75 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 76 "data/maps/Vikkelson/scripts.pory"
	removeobject 18
# 77 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_PARTY_FAMILY
# 78 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Cook::
# 103 "data/maps/Vikkelson/scripts.pory"
	lock
# 104 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 105 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Cook_Text_0
# 106 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Worker::
# 111 "data/maps/Vikkelson/scripts.pory"
	lock
# 112 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 113 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Worker_Text_0
# 114 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Grunt::
# 119 "data/maps/Vikkelson/scripts.pory"
	lock
# 120 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 121 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Grunt_Text_0
# 122 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Musician::
# 127 "data/maps/Vikkelson/scripts.pory"
	lock
# 128 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 129 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Musician_Text_0
# 130 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Poochyena::
# 135 "data/maps/Vikkelson/scripts.pory"
	lock
# 136 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 137 "data/maps/Vikkelson/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 138 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Poochyena_Text_0
# 139 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Guards::
# 144 "data/maps/Vikkelson/scripts.pory"
	lock
# 145 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 146 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Guards_Text_0
# 147 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_GirlStink::
# 152 "data/maps/Vikkelson/scripts.pory"
	lock
# 153 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 154 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_GirlStink_Text_0
# 155 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Drunk::
# 160 "data/maps/Vikkelson/scripts.pory"
	lock
# 161 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 162 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Drunk_Text_0
# 163 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_ShyGirl::
# 168 "data/maps/Vikkelson/scripts.pory"
	lock
# 169 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 170 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_ShyGirl_Text_0, MSGBOX_YESNO
# 171 "data/maps/Vikkelson/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Vikkelson_ShyGirl_2
# 175 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_ShyGirl_Text_2
# 176 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_1
# 177 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_ShyGirl_Text_3
# 178 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_1
# 179 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_ShyGirl_Text_4
# 180 "data/maps/Vikkelson/scripts.pory"
	giveitem ITEM_PEARL
# 181 "data/maps/Vikkelson/scripts.pory"
	closemessage
# 182 "data/maps/Vikkelson/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 183 "data/maps/Vikkelson/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Vikkelson_ShyGirl_5
# 191 "data/maps/Vikkelson/scripts.pory"
	applymovement 8, Vikkelson_ShyGirl_Movement_1
# 192 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 193 "data/maps/Vikkelson/scripts.pory"
	removeobject 8
# 194 "data/maps/Vikkelson/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_SHY_GIRL_VIKKELSON
Vikkelson_ShyGirl_1:
# 198 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_ShyGirl_2:
# 172 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_ShyGirl_Text_1
	goto Vikkelson_ShyGirl_1

Vikkelson_ShyGirl_5:
# 184 "data/maps/Vikkelson/scripts.pory"
	applymovement 8, Vikkelson_ShyGirl_Movement_0
# 185 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 186 "data/maps/Vikkelson/scripts.pory"
	removeobject 8
# 187 "data/maps/Vikkelson/scripts.pory"
	playse SE_EXIT
# 188 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_SHY_GIRL_VIKKELSON
	goto Vikkelson_ShyGirl_1


Vikkelson_Beauty::
# 203 "data/maps/Vikkelson/scripts.pory"
	lock
# 204 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 205 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Beauty_Text_0
# 206 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_RichBoy::
# 211 "data/maps/Vikkelson/scripts.pory"
	lock
# 212 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 213 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_RichBoy_Text_0
# 214 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Stand::
# 219 "data/maps/Vikkelson/scripts.pory"
	lock
# 220 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 221 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Stand_Text_0
# 222 "data/maps/Vikkelson/scripts.pory"
	waitmessage
# 223 "data/maps/Vikkelson/scripts.pory"
	pokemart VikkelsonStand
# 224 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Stand_Text_1
# 225 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Sleeper::
# 230 "data/maps/Vikkelson/scripts.pory"
	lock
# 231 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 232 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Sleeper_Text_0
# 233 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_BeachWoman::
# 238 "data/maps/Vikkelson/scripts.pory"
	lock
# 239 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 240 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BeachWoman_Text_0
# 241 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_BeachKid::
# 246 "data/maps/Vikkelson/scripts.pory"
	lock
# 247 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 248 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BeachKid_Text_0
# 249 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BoyRunning_Text_1
# 250 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_BeachKid_Text_1
# 251 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Drowner::
# 256 "data/maps/Vikkelson/scripts.pory"
	lock
# 257 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 258 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Drowner_Text_0
# 259 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Swimmer::
# 264 "data/maps/Vikkelson/scripts.pory"
	lock
# 265 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 266 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Swimmer_Text_0
# 267 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Sign::
# 272 "data/maps/Vikkelson/scripts.pory"
	lockall
# 273 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Sign_Text_0
# 274 "data/maps/Vikkelson/scripts.pory"
	releaseall
	end


Vikkelson_CantGoThere::
# 279 "data/maps/Vikkelson/scripts.pory"
	lock
# 280 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_CantGoThere_Text_0
# 281 "data/maps/Vikkelson/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_CantGoThere_Movement_0
# 282 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 283 "data/maps/Vikkelson/scripts.pory"
	release
	end


Vikkelson_Sam::
# 288 "data/maps/Vikkelson/scripts.pory"
	lock
# 289 "data/maps/Vikkelson/scripts.pory"
	faceplayer
# 290 "data/maps/Vikkelson/scripts.pory"
	applymovement 23, Vikkelson_Sam_Movement_0
# 291 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 292 "data/maps/Vikkelson/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 293 "data/maps/Vikkelson/scripts.pory"
	compare VAR_TEMP_1, 38
	goto_if_eq Vikkelson_Sam_2
Vikkelson_Sam_1:
# 297 "data/maps/Vikkelson/scripts.pory"
	namebox Vikkelson_Sam_Text_0
# 298 "data/maps/Vikkelson/scripts.pory"
	msgbox Vikkelson_Sam_Text_1
# 299 "data/maps/Vikkelson/scripts.pory"
	hidenamebox
# 300 "data/maps/Vikkelson/scripts.pory"
	closemessage
# 301 "data/maps/Vikkelson/scripts.pory"
	applymovement 23, Vikkelson_Sam_Movement_2
# 302 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
# 303 "data/maps/Vikkelson/scripts.pory"
	removeobject 23
# 304 "data/maps/Vikkelson/scripts.pory"
	setflag FLAG_SAM_VIKKELSON
# 305 "data/maps/Vikkelson/scripts.pory"
	playse SE_EXIT
# 306 "data/maps/Vikkelson/scripts.pory"
	setvar VAR_MAIN_STORY, 48
# 307 "data/maps/Vikkelson/scripts.pory"
	release
	end

Vikkelson_Sam_2:
# 294 "data/maps/Vikkelson/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Vikkelson_Sam_Movement_1
# 295 "data/maps/Vikkelson/scripts.pory"
	waitmovement 0
	goto Vikkelson_Sam_1


	.align 2
# 311 "data/maps/Vikkelson/scripts.pory"
VikkelsonStand:
# 312 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 313 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 314 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 315 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 316 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 317 "data/maps/Vikkelson/scripts.pory"
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_NONE

# 74 "data/maps/Vikkelson/scripts.pory"
Vikkelson_Dad_Movement_0:
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 74 "data/maps/Vikkelson/scripts.pory"
	walk_down
	step_end

# 82 "data/maps/Vikkelson/scripts.pory"
Vikkelson_Dad_Movement_1:
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
# 82 "data/maps/Vikkelson/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/Vikkelson/scripts.pory"
Vikkelson_ShyGirl_Movement_0:
# 184 "data/maps/Vikkelson/scripts.pory"
	walk_left
# 184 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 184 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 184 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 184 "data/maps/Vikkelson/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/Vikkelson/scripts.pory"
Vikkelson_ShyGirl_Movement_1:
# 191 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 191 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 191 "data/maps/Vikkelson/scripts.pory"
	walk_up
# 191 "data/maps/Vikkelson/scripts.pory"
	walk_up
	step_end

# 281 "data/maps/Vikkelson/scripts.pory"
Vikkelson_CantGoThere_Movement_0:
# 281 "data/maps/Vikkelson/scripts.pory"
	walk_down
	step_end

# 290 "data/maps/Vikkelson/scripts.pory"
Vikkelson_Sam_Movement_0:
# 290 "data/maps/Vikkelson/scripts.pory"
	face_player
	step_end

# 294 "data/maps/Vikkelson/scripts.pory"
Vikkelson_Sam_Movement_1:
# 294 "data/maps/Vikkelson/scripts.pory"
	face_right
	step_end

# 301 "data/maps/Vikkelson/scripts.pory"
Vikkelson_Sam_Movement_2:
# 301 "data/maps/Vikkelson/scripts.pory"
	walk_up
	step_end

Vikkelson_BoyRunning_Text_0:
# 15 "data/maps/Vikkelson/scripts.pory"
	.string "This is a disaster! I forgot to pack\n"
	.string "underwear! What am I going to do?$"

Vikkelson_BoyRunning_Text_1:
# 23 "data/maps/Vikkelson/scripts.pory"
	.string "...$"

Vikkelson_BoyRunning_Text_2:
# 24 "data/maps/Vikkelson/scripts.pory"
	.string "Huh? My dad is looking for me? Well, I'm\n"
	.string "in the middle of an existential crisis,\l"
	.string "so now is not the time!$"

Vikkelson_BoyRunning_Text_3:
# 32 "data/maps/Vikkelson/scripts.pory"
	.string "I know! I just have to pick some leaves\n"
	.string "from a tree and make myself some\l"
	.string "makeshift pants! Haha, yeah!$"

Vikkelson_GirlMart_Text_0:
# 41 "data/maps/Vikkelson/scripts.pory"
	.string "Party town, yeah, sure. But where are\n"
	.string "you supposed to sleep? Don't tell me\l"
	.string "this poor excuse of a hostel behind me\l"
	.string "is enough for all the people here.$"

Vikkelson_LostMan_Text_0:
# 49 "data/maps/Vikkelson/scripts.pory"
	.string "Excuse me, but do you happen to know\n"
	.string "where is the gym? I'm deep into the\l"
	.string "Council Challenge and I can't find for\l"
	.string "the life of me the third gym.$"

Vikkelson_Dad_Text_0:
# 58 "data/maps/Vikkelson/scripts.pory"
	.string "Have you found'em yet?$"

Vikkelson_Dad_Text_1:
# 65 "data/maps/Vikkelson/scripts.pory"
	.string "They're where?$"

Vikkelson_Dad_Text_2:
# 67 "data/maps/Vikkelson/scripts.pory"
	.string "...Meh. I can't be bothered. I'm going\n"
	.string "back home, my head hurts like hell.\l"
	.string "Thanks for the help, though. Take this.$"

Vikkelson_Dad_Text_3:
# 93 "data/maps/Vikkelson/scripts.pory"
	.string "Huh... I lost my boys. The five beers I\n"
	.string "just had are messing with my head. Can\l"
	.string "you tell me where they are? I'll gift you\l"
	.string "something.$"

Vikkelson_Cook_Text_0:
# 105 "data/maps/Vikkelson/scripts.pory"
	.string "Oof... I'll tell you what, cooking for\n"
	.string "Vikkie is no joke. I don't know how she\l"
	.string "can eat so much, yet stay in shape. I\l"
	.string "sure wish I could stay in shape like her\l"
	.string "too!$"

Vikkelson_Worker_Text_0:
# 113 "data/maps/Vikkelson/scripts.pory"
	.string "Between the parties, the meetings and\n"
	.string "all the other events, we barely have\l"
	.string "time to breathe.$"

Vikkelson_Grunt_Text_0:
# 121 "data/maps/Vikkelson/scripts.pory"
	.string "What? What about my outfit? Look, pink\n"
	.string "is gonna be the next big thing. Mark my\l"
	.string "words.$"

Vikkelson_Musician_Text_0:
# 129 "data/maps/Vikkelson/scripts.pory"
	.string "Me and the lads are going to play a\n"
	.string "private concert for Miss Vikkie and\l"
	.string "some of her friends. I hope she pays\l"
	.string "well.$"

Vikkelson_Poochyena_Text_0:
# 138 "data/maps/Vikkelson/scripts.pory"
	.string "Grrr... Grrr...$"

Vikkelson_Guards_Text_0:
# 146 "data/maps/Vikkelson/scripts.pory"
	.string "Welcome to Miss Vikkie's Mansion. Miss\n"
	.string "Vikkie warned us about your visit. Feel\l"
	.string "free to look around. Don't run inside,\l"
	.string "though. The floor tiling is made of\l"
	.string "delicate marble from Unova.$"

Vikkelson_GirlStink_Text_0:
# 154 "data/maps/Vikkelson/scripts.pory"
	.string "Too many people, and on top of all that,\n"
	.string "this place stinks. Like a strong odor. I\l"
	.string "don't know what that is, but man is it\l"
	.string "insufferable.$"

Vikkelson_Drunk_Text_0:
# 162 "data/maps/Vikkelson/scripts.pory"
	.string "Are you real? I... Huh? What? Leave me\n"
	.string "alone! Who are you? Uh...$"

Vikkelson_ShyGirl_Text_0:
# 170 "data/maps/Vikkelson/scripts.pory"
	.string "I want to see what's inside the\n"
	.string "dancehall, but I'm scared to go alone.\l"
	.string "Is it weird if I go in by myself?$"

Vikkelson_ShyGirl_Text_1:
# 172 "data/maps/Vikkelson/scripts.pory"
	.string "That's what I thought... Well, no dance\n"
	.string "moves for me today...$"

Vikkelson_ShyGirl_Text_2:
# 175 "data/maps/Vikkelson/scripts.pory"
	.string "You think so?$"

Vikkelson_ShyGirl_Text_3:
# 177 "data/maps/Vikkelson/scripts.pory"
	.string "Yeah, you're right! What's the big deal\n"
	.string "after all?$"

Vikkelson_ShyGirl_Text_4:
# 179 "data/maps/Vikkelson/scripts.pory"
	.string "Thanks for lifting up my mood! Take\n"
	.string "this.$"

Vikkelson_Beauty_Text_0:
# 205 "data/maps/Vikkelson/scripts.pory"
	.string "Hoho... Everyone's good looking here...\n"
	.string "Aunty's gonna get laid tonight!$"

Vikkelson_RichBoy_Text_0:
# 213 "data/maps/Vikkelson/scripts.pory"
	.string "Great place, but... It lacks something.\n"
	.string "You see, I'm more of a posh guy myself,\l"
	.string "and some places here feel sort of...\l"
	.string "Depraved.$"

Vikkelson_Stand_Text_0:
# 221 "data/maps/Vikkelson/scripts.pory"
	.string "Hello, and welcome to my modest stand!\n"
	.string "What would you like to buy?$"

Vikkelson_Stand_Text_1:
# 224 "data/maps/Vikkelson/scripts.pory"
	.string "Thank you for shopping with us! We'll\n"
	.string "hope to see you very soon!$"

Vikkelson_Sleeper_Text_0:
# 232 "data/maps/Vikkelson/scripts.pory"
	.string "It's too warm... I wanna go back home.$"

Vikkelson_BeachWoman_Text_0:
# 240 "data/maps/Vikkelson/scripts.pory"
	.string "Isn't it wonderful? In this place, the\n"
	.string "sun never sets, giving the impression\l"
	.string "of an eternal summer evening!$"

Vikkelson_BeachKid_Text_0:
# 248 "data/maps/Vikkelson/scripts.pory"
	.string "Look! I made a sand castle!$"

Vikkelson_BeachKid_Text_1:
# 250 "data/maps/Vikkelson/scripts.pory"
	.string "Hah! I tricked you! This is actually my\n"
	.string "Sandygast!$"

Vikkelson_Drowner_Text_0:
# 258 "data/maps/Vikkelson/scripts.pory"
	.string "HELP! I'm drowning!! Call someone!$"

Vikkelson_Swimmer_Text_0:
# 266 "data/maps/Vikkelson/scripts.pory"
	.string "Don't worry, that guy isn't actually\n"
	.string "drowning. He likes the attention. The\l"
	.string "day he actually drowns, he'll\l"
	.string "understand.$"

Vikkelson_Sign_Text_0:
# 273 "data/maps/Vikkelson/scripts.pory"
	.string "Vikkelson\n"
	.string "Built from the ground by Victoria\l"
	.string "Lafont$"

Vikkelson_CantGoThere_Text_0:
# 280 "data/maps/Vikkelson/scripts.pory"
	.string "(The currents are too strong. It would\n"
	.string "be dangerous going further.)$"

Vikkelson_Sam_Text_0:
# 297 "data/maps/Vikkelson/scripts.pory"
	.string "Sam$"

Vikkelson_Sam_Text_1:
# 298 "data/maps/Vikkelson/scripts.pory"
	.string "There you are {PLAYER}! You remember\n"
	.string "Bruce asked me and K.A.M. to find Vikkie,\l"
	.string "right? Well, we searched all of Thura,\l"
	.string "and we came away empty-handed. That's\l"
	.string "until I realised we haven't yet\l"
	.string "searched a place: her mansion. Now that\l"
	.string "you're here, let's see what's inside, and\l"
	.string "be sure to talk to everyone you meet in\l"
	.string "there. They might know something. Let's\l"
	.string "go!$"
