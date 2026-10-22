# 1 "data/maps/JangalaRd1/scripts.pory"

# 2 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_MapScripts::
# 3 "data/maps/JangalaRd1/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, JangalaRd1_OnLoad
# 4 "data/maps/JangalaRd1/scripts.pory"
	.byte 0

JangalaRd_Triathlon::
# 8 "data/maps/JangalaRd1/scripts.pory"
	setvar VAR_TRIATHLON, 3
	end


JangalaRd1_OnLoad::
# 13 "data/maps/JangalaRd1/scripts.pory"
	compare VAR_QUEST_HERMIT, 3
	goto_if_gt JangalaRd1_OnLoad_1
	end

JangalaRd1_OnLoad_1:
# 14 "data/maps/JangalaRd1/scripts.pory"
	setmetatile 8, 87, METATILE_Bammobo_BushEntrance, TRUE
# 15 "data/maps/JangalaRd1/scripts.pory"
	setmetatile 8, 88, METATILE_Bammobo_BushWarp, FALSE
# 16 "data/maps/JangalaRd1/scripts.pory"
	special DrawWholeMapView
	end


JangalaRd1_Marie::
# 25 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_1, Marie1, Marie2
# 26 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Marie_Text_0
# 27 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Victor::
# 40 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_2, Victor1, Victor2
# 41 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Victor_Text_0
# 42 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Gertrude::
# 55 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_3, Gertrude1, Gertrude2
# 56 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Gertrude_Text_0
# 57 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Kevin::
# 70 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_4, Kevin1, Kevin2
# 71 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Kevin_Text_0
# 72 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Florence::
# 85 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_5, Florence1, Florence2
# 86 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Florence_Text_0
# 87 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Fifi::
# 100 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_6, Fifi1, Fifi2
# 101 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Fifi_Text_0
# 102 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Nini::
# 115 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_7, Nini1, Nini2
# 116 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Nini_Text_0
# 117 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Tom::
# 130 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_8, Tom1, Tom2
# 131 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Tom_Text_0
# 132 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Maxime::
# 145 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_9, Maxime1, Maxime2
# 146 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Maxime_Text_0
# 147 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Daphne::
# 160 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_10, Daphne1, Daphne2
# 161 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Daphne_Text_0
# 162 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Chris::
# 175 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_11, Chris1, Chris2
# 176 "data/maps/JangalaRd1/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq JangalaRd1_Chris_2
# 180 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Chris_Text_1
JangalaRd1_Chris_1:
# 182 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end

JangalaRd1_Chris_2:
# 177 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Chris_Text_0
	goto JangalaRd1_Chris_1


JangalaRd1_Grunt::
# 195 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_JANGALA_12, JangalaGrunt1, JangalaGrunt2
# 196 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Grunt_Text_0
# 197 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Camper1::
# 210 "data/maps/JangalaRd1/scripts.pory"
	lock
# 211 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 212 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Camper1_Text_0
# 213 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_WorkerF::
# 218 "data/maps/JangalaRd1/scripts.pory"
	lock
# 219 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 220 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerF_Text_0, MSGBOX_YESNO
# 221 "data/maps/JangalaRd1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JangalaRd1_WorkerF_2
# 246 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerF_Text_4
JangalaRd1_WorkerF_1:
# 248 "data/maps/JangalaRd1/scripts.pory"
	release
	end

JangalaRd1_WorkerF_2:
# 222 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerF_Text_1
# 223 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 224 "data/maps/JangalaRd1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 225 "data/maps/JangalaRd1/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq JangalaRd1_WorkerF_6
# 230 "data/maps/JangalaRd1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd1_WorkerF_Movement_1
# 231 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
JangalaRd1_WorkerF_5:
# 233 "data/maps/JangalaRd1/scripts.pory"
	turnobject 8, DIR_SOUTH
# 234 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerF_Text_2
# 235 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 236 "data/maps/JangalaRd1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd1_WorkerF_Movement_2
# 237 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
# 238 "data/maps/JangalaRd1/scripts.pory"
	applymovement 9, JangalaRd1_WorkerF_Movement_3
# 239 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
# 240 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerF_Text_3
# 241 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 242 "data/maps/JangalaRd1/scripts.pory"
	applymovement 9, JangalaRd1_WorkerF_Movement_4
# 243 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
	goto JangalaRd1_WorkerF_1

JangalaRd1_WorkerF_6:
# 226 "data/maps/JangalaRd1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JangalaRd1_WorkerF_Movement_0
# 227 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
	goto JangalaRd1_WorkerF_5


JangalaRd1_WorkerM::
# 253 "data/maps/JangalaRd1/scripts.pory"
	lock
# 254 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 255 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_WorkerM_Text_0
# 256 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Camper2::
# 261 "data/maps/JangalaRd1/scripts.pory"
	lock
# 262 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 263 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Camper2_Text_0
# 264 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Picnicker1::
# 269 "data/maps/JangalaRd1/scripts.pory"
	lock
# 270 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 271 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Picnicker1_Text_0
# 272 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Weirdo::
# 277 "data/maps/JangalaRd1/scripts.pory"
	lock
# 278 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 279 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Weirdo_Text_0
# 280 "data/maps/JangalaRd1/scripts.pory"
	turnobject 15, DIR_NORTH
# 281 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Item1::
# 286 "data/maps/JangalaRd1/scripts.pory"
	lock
# 287 "data/maps/JangalaRd1/scripts.pory"
	removeobject 19
# 288 "data/maps/JangalaRd1/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 289 "data/maps/JangalaRd1/scripts.pory"
	setflag FLAG_ITEM_JANGALA_1
# 290 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Item2::
# 295 "data/maps/JangalaRd1/scripts.pory"
	lock
# 296 "data/maps/JangalaRd1/scripts.pory"
	removeobject 20
# 297 "data/maps/JangalaRd1/scripts.pory"
	giveitem ITEM_TM18
# 298 "data/maps/JangalaRd1/scripts.pory"
	setflag FLAG_ITEM_JANGALA_2
# 299 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Item3::
# 304 "data/maps/JangalaRd1/scripts.pory"
	lock
# 305 "data/maps/JangalaRd1/scripts.pory"
	removeobject 21
# 306 "data/maps/JangalaRd1/scripts.pory"
	giveitem ITEM_PP_UP
# 307 "data/maps/JangalaRd1/scripts.pory"
	setflag FLAG_ITEM_JANGALA_3
# 308 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Item4::
# 313 "data/maps/JangalaRd1/scripts.pory"
	lock
# 314 "data/maps/JangalaRd1/scripts.pory"
	removeobject 22
# 315 "data/maps/JangalaRd1/scripts.pory"
	giveitem ITEM_FULL_HEAL
# 316 "data/maps/JangalaRd1/scripts.pory"
	setflag FLAG_ITEM_JANGALA_4
# 317 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Hermit::
# 322 "data/maps/JangalaRd1/scripts.pory"
	lock
# 323 "data/maps/JangalaRd1/scripts.pory"
	faceplayer
# 324 "data/maps/JangalaRd1/scripts.pory"
	gettimeofday
# 325 "data/maps/JangalaRd1/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_eq JangalaRd1_Hermit_1
# 358 "data/maps/JangalaRd1/scripts.pory"
	namebox JangalaRd1_Hermit_Text_0
# 359 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Hermit_Text_3
# 360 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 361 "data/maps/JangalaRd1/scripts.pory"
	hidenamebox
# 362 "data/maps/JangalaRd1/scripts.pory"
	release
	end

JangalaRd1_Hermit_1:
# 326 "data/maps/JangalaRd1/scripts.pory"
	namebox JangalaRd1_Hermit_Text_0
# 327 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Hermit_Text_1
# 328 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 329 "data/maps/JangalaRd1/scripts.pory"
	hidenamebox
# 330 "data/maps/JangalaRd1/scripts.pory"
	applymovement 23, JangalaRd1_Hermit_Movement_0
# 331 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
# 332 "data/maps/JangalaRd1/scripts.pory"
	delay 20
# 333 "data/maps/JangalaRd1/scripts.pory"
	playse SE_M_CUT
# 334 "data/maps/JangalaRd1/scripts.pory"
	delay 20
# 335 "data/maps/JangalaRd1/scripts.pory"
	setmetatile 8, 87, METATILE_Bammobo_BushEntrance, TRUE
# 336 "data/maps/JangalaRd1/scripts.pory"
	setmetatile 8, 88, METATILE_Bammobo_BushWarp, FALSE
# 337 "data/maps/JangalaRd1/scripts.pory"
	special DrawWholeMapView
# 338 "data/maps/JangalaRd1/scripts.pory"
	delay 20
# 339 "data/maps/JangalaRd1/scripts.pory"
	applymovement 23, JangalaRd1_Hermit_Movement_1
# 340 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
# 341 "data/maps/JangalaRd1/scripts.pory"
	namebox JangalaRd1_Hermit_Text_0
# 342 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Hermit_Text_2
# 343 "data/maps/JangalaRd1/scripts.pory"
	closemessage
# 344 "data/maps/JangalaRd1/scripts.pory"
	hidenamebox
# 345 "data/maps/JangalaRd1/scripts.pory"
	delay 20
# 346 "data/maps/JangalaRd1/scripts.pory"
	applymovement 23, JangalaRd1_Hermit_Movement_0
# 347 "data/maps/JangalaRd1/scripts.pory"
	waitmovement 0
# 348 "data/maps/JangalaRd1/scripts.pory"
	delay 10
# 349 "data/maps/JangalaRd1/scripts.pory"
	removeobject 23
# 350 "data/maps/JangalaRd1/scripts.pory"
	setflag FLAG_HERMIT_JANGALA
# 351 "data/maps/JangalaRd1/scripts.pory"
	clearflag FLAG_HERMIT_JANGALA_BUSH
# 352 "data/maps/JangalaRd1/scripts.pory"
	setvar VAR_QUEST_HERMIT, 4
# 353 "data/maps/JangalaRd1/scripts.pory"
	playse SE_EXIT
# 354 "data/maps/JangalaRd1/scripts.pory"
	release
	end


JangalaRd1_Jezebel::
# 368 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLON_2, Jezebel1, Jezebel2
# 369 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Jezebel_Text_0
# 370 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Ivan::
# 383 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLON_3, Ivan1, Ivan2
# 384 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Ivan_Text_0
# 385 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


JangalaRd1_Artem::
# 398 "data/maps/JangalaRd1/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLON_4, Artem1, Artem2
# 399 "data/maps/JangalaRd1/scripts.pory"
	msgbox JangalaRd1_Artem_Text_0
# 400 "data/maps/JangalaRd1/scripts.pory"
	closemessage
	end


# 226 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_WorkerF_Movement_0:
# 226 "data/maps/JangalaRd1/scripts.pory"
	walk_down
# 226 "data/maps/JangalaRd1/scripts.pory"
	walk_left
# 226 "data/maps/JangalaRd1/scripts.pory"
	walk_left
# 226 "data/maps/JangalaRd1/scripts.pory"
	face_down
	step_end

# 230 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_WorkerF_Movement_1:
# 230 "data/maps/JangalaRd1/scripts.pory"
	walk_left
# 230 "data/maps/JangalaRd1/scripts.pory"
	face_down
	step_end

# 236 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_WorkerF_Movement_2:
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	slide_down
# 236 "data/maps/JangalaRd1/scripts.pory"
	face_right
	step_end

# 238 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_WorkerF_Movement_3:
# 238 "data/maps/JangalaRd1/scripts.pory"
	walk_up
# 238 "data/maps/JangalaRd1/scripts.pory"
	face_left
	step_end

# 242 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_WorkerF_Movement_4:
# 242 "data/maps/JangalaRd1/scripts.pory"
	walk_down
# 242 "data/maps/JangalaRd1/scripts.pory"
	face_up
	step_end

# 330 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_Hermit_Movement_0:
# 330 "data/maps/JangalaRd1/scripts.pory"
	face_up
	step_end

# 339 "data/maps/JangalaRd1/scripts.pory"
JangalaRd1_Hermit_Movement_1:
# 339 "data/maps/JangalaRd1/scripts.pory"
	face_player
	step_end

JangalaRd1_Marie_Text_0:
# 26 "data/maps/JangalaRd1/scripts.pory"
	.string "I'm a big fan of Komala, but I haven't\n"
	.string "encountered it yet. Soon!$"

JangalaRd1_Victor_Text_0:
# 41 "data/maps/JangalaRd1/scripts.pory"
	.string "I was told that there were lots of\n"
	.string "insects on this road. I've clearly been\l"
	.string "lied to!$"

JangalaRd1_Gertrude_Text_0:
# 56 "data/maps/JangalaRd1/scripts.pory"
	.string "The humidity is unbearable. I should've\n"
	.string "gone to Littoral Rd.$"

JangalaRd1_Kevin_Text_0:
# 71 "data/maps/JangalaRd1/scripts.pory"
	.string "Some say that these platforms were\n"
	.string "crafted by Pokémons themselves. But\l"
	.string "how? Did they use tools?$"

JangalaRd1_Florence_Text_0:
# 86 "data/maps/JangalaRd1/scripts.pory"
	.string "I used to be part of the Hoenn corps.\n"
	.string "Unfortunately, I messed up my knee\l"
	.string "pretty badly, and I was made redundant.$"

JangalaRd1_Fifi_Text_0:
# 101 "data/maps/JangalaRd1/scripts.pory"
	.string "I'm part of Koga's Ninja School! I'm a\n"
	.string "few steps away from being a proper\l"
	.string "ninja. Can't wait!$"

JangalaRd1_Nini_Text_0:
# 116 "data/maps/JangalaRd1/scripts.pory"
	.string "I'm also a pupil in Koga's Ninja School,\n"
	.string "but I still have a lot of courses to\l"
	.string "take.$"

JangalaRd1_Tom_Text_0:
# 131 "data/maps/JangalaRd1/scripts.pory"
	.string "See those calves? You don't grow them\n"
	.string "by sitting all day on your couch, hah!$"

JangalaRd1_Maxime_Text_0:
# 146 "data/maps/JangalaRd1/scripts.pory"
	.string "Every day I wake up and realise I can't\n"
	.string "fly. It shatters my heart.$"

JangalaRd1_Daphne_Text_0:
# 161 "data/maps/JangalaRd1/scripts.pory"
	.string "Zigzagoon couldn't do it! I wonder if I\n"
	.string "should let it evolve? It's so cute as is!$"

JangalaRd1_Chris_Text_0:
# 177 "data/maps/JangalaRd1/scripts.pory"
	.string "Haha, I knew I had to persevere! Look\n"
	.string "at what I caught just now!$"

JangalaRd1_Chris_Text_1:
# 180 "data/maps/JangalaRd1/scripts.pory"
	.string "This is pissing me off. What did we do to\n"
	.string "deserve that? What are we supposed to\l"
	.string "do, harvest berries for a living? No way!$"

JangalaRd1_Grunt_Text_0:
# 196 "data/maps/JangalaRd1/scripts.pory"
	.string "My job is done, I have nothing more to\n"
	.string "say to you, leave me alone.$"

JangalaRd1_Camper1_Text_0:
# 212 "data/maps/JangalaRd1/scripts.pory"
	.string "This is it! The perfect spot to bivouac!\n"
	.string "I called dibs, you can't settle here.\l"
	.string "Sorry bud, I don't make the rules!$"

JangalaRd1_WorkerF_Text_0:
# 220 "data/maps/JangalaRd1/scripts.pory"
	.string "Hiya! Would you like to try our newly\n"
	.string "made zip line? It's totally free of\l"
	.string "charge!$"

JangalaRd1_WorkerF_Text_1:
# 222 "data/maps/JangalaRd1/scripts.pory"
	.string "Great! Hop in!$"

JangalaRd1_WorkerF_Text_2:
# 234 "data/maps/JangalaRd1/scripts.pory"
	.string "Ready? Now push with your legs!$"

JangalaRd1_WorkerF_Text_3:
# 240 "data/maps/JangalaRd1/scripts.pory"
	.string "So? Nice sensations, eh? Don't hesitate\n"
	.string "to try it again!$"

JangalaRd1_WorkerF_Text_4:
# 246 "data/maps/JangalaRd1/scripts.pory"
	.string "Haha, no worries! I get that I can be a\n"
	.string "bit frightening. If you need to go down,\l"
	.string "you can still paddle through the river!$"

JangalaRd1_WorkerM_Text_0:
# 255 "data/maps/JangalaRd1/scripts.pory"
	.string "Our zip line rules. The next step is to\n"
	.string "build one that is even longer on\l"
	.string "Passaqua Way!$"

JangalaRd1_Camper2_Text_0:
# 263 "data/maps/JangalaRd1/scripts.pory"
	.string "Thank Arceus for that refuge! I'm\n"
	.string "exhausted. How is she still full of\l"
	.string "energy? Why didn't we go to the movies\l"
	.string "for a first date?$"

JangalaRd1_Picnicker1_Text_0:
# 271 "data/maps/JangalaRd1/scripts.pory"
	.string "Hmmm. Another one who lied on their bio.\n"
	.string "No wonder he's already out of breath.$"

JangalaRd1_Weirdo_Text_0:
# 279 "data/maps/JangalaRd1/scripts.pory"
	.string "Hehehe! I'm doing it! I'm finally going\n"
	.string "to live like a hermit, far away from\l"
	.string "civilization! I just need to get through\l"
	.string "these trees!$"

JangalaRd1_Hermit_Text_0:
# 326 "data/maps/JangalaRd1/scripts.pory"
	.string "Hermit$"

JangalaRd1_Hermit_Text_1:
# 327 "data/maps/JangalaRd1/scripts.pory"
	.string "There you are. Get back, I'm gonna cut\n"
	.string "that bush.$"

JangalaRd1_Hermit_Text_2:
# 342 "data/maps/JangalaRd1/scripts.pory"
	.string "In we go.$"

JangalaRd1_Hermit_Text_3:
# 359 "data/maps/JangalaRd1/scripts.pory"
	.string "We can't go in yet. Come back when it's\n"
	.string "nighttime.$"

JangalaRd1_Jezebel_Text_0:
# 369 "data/maps/JangalaRd1/scripts.pory"
	.string "No! Don't go any further! I must win!\n"
	.string "Tell me where to go!$"

JangalaRd1_Ivan_Text_0:
# 384 "data/maps/JangalaRd1/scripts.pory"
	.string "Huh? What triathlon?$"

JangalaRd1_Artem_Text_0:
# 399 "data/maps/JangalaRd1/scripts.pory"
	.string "I haven't prepared myself enough...$"

Marie1::
# 31 "data/maps/JangalaRd1/scripts.pory"
	.string "No, don't go! I need to find Komala\n"
	.string "first!$"

Marie2::
# 35 "data/maps/JangalaRd1/scripts.pory"
	.string "Oh... I guess you'll catch it before me...$"

Victor1::
# 46 "data/maps/JangalaRd1/scripts.pory"
	.string "Rain? Check. Grass? Check. Bugs? Nope!$"

Victor2::
# 50 "data/maps/JangalaRd1/scripts.pory"
	.string "Where are they? Where? Are? They?$"

Gertrude1::
# 61 "data/maps/JangalaRd1/scripts.pory"
	.string "You! Let's fight!$"

Gertrude2::
# 65 "data/maps/JangalaRd1/scripts.pory"
	.string "Dammit, it's so moist in here! I can't\n"
	.string "focus!$"

Kevin1::
# 76 "data/maps/JangalaRd1/scripts.pory"
	.string "Haha, watch your step! Don't fall!$"

Kevin2::
# 80 "data/maps/JangalaRd1/scripts.pory"
	.string "Guess who almost fell down?$"

Florence1::
# 91 "data/maps/JangalaRd1/scripts.pory"
	.string "Cadet, ten-hut!$"

Florence2::
# 95 "data/maps/JangalaRd1/scripts.pory"
	.string "Ok, stand at ease.$"

Fifi1::
# 106 "data/maps/JangalaRd1/scripts.pory"
	.string "Boom! Final test before finally\n"
	.string "becoming a truly respected ninja!$"

Fifi2::
# 110 "data/maps/JangalaRd1/scripts.pory"
	.string "Doesn't matter, I'm almost there!$"

Nini1::
# 121 "data/maps/JangalaRd1/scripts.pory"
	.string "Uh... A-ha! Here I come! Get ready to\n"
	.string "taste my... Uh, no...$"

Nini2::
# 125 "data/maps/JangalaRd1/scripts.pory"
	.string "Well, still a long way to go...$"

Tom1::
# 136 "data/maps/JangalaRd1/scripts.pory"
	.string "Have you drunk water yet?$"

Tom2::
# 140 "data/maps/JangalaRd1/scripts.pory"
	.string "Don't wait until you're thirsty!$"

Maxime1::
# 151 "data/maps/JangalaRd1/scripts.pory"
	.string "Sometimes, I climb trees and pretend I'm\n"
	.string "a bird. I also build nests.$"

Maxime2::
# 155 "data/maps/JangalaRd1/scripts.pory"
	.string "I know, I'm not worth it...$"

Daphne1::
# 166 "data/maps/JangalaRd1/scripts.pory"
	.string "Check out my cute babies!$"

Daphne2::
# 170 "data/maps/JangalaRd1/scripts.pory"
	.string "How dare you treat babies like that?$"

Chris1::
# 186 "data/maps/JangalaRd1/scripts.pory"
	.string "Ah! Nothing! Come here, I need to vent!$"

Chris2::
# 190 "data/maps/JangalaRd1/scripts.pory"
	.string "See what I mean?$"

JangalaGrunt1::
# 201 "data/maps/JangalaRd1/scripts.pory"
	.string "Haha, so you're the kid that wants to\n"
	.string "stop us! Bad news, we just cast a spell\l"
	.string "on the forest! You can't go to\l"
	.string "Virimante! Hahaha!$"

JangalaGrunt2::
# 205 "data/maps/JangalaRd1/scripts.pory"
	.string "Ok.$"

Jezebel1::
# 374 "data/maps/JangalaRd1/scripts.pory"
	.string "I'm lost! I must slow you down!$"

Jezebel2::
# 378 "data/maps/JangalaRd1/scripts.pory"
	.string "No, stay here!$"

Ivan1::
# 389 "data/maps/JangalaRd1/scripts.pory"
	.string "Fight me! I need to feel something!$"

Ivan2::
# 393 "data/maps/JangalaRd1/scripts.pory"
	.string "That's what I'm talking about!$"

Artem1::
# 404 "data/maps/JangalaRd1/scripts.pory"
	.string "Oof... I need to take a breather.$"

Artem2::
# 408 "data/maps/JangalaRd1/scripts.pory"
	.string "How aren't you tired yet?$"
