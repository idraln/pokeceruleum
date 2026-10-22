# 1 "data/maps/BerylChannel/scripts.pory"

# 2 "data/maps/BerylChannel/scripts.pory"
BerylChannel_MapScripts::
# 3 "data/maps/BerylChannel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BerylChannel_OnLoad
# 4 "data/maps/BerylChannel/scripts.pory"
	.byte 0

BerylChannel_OnLoad::
# 8 "data/maps/BerylChannel/scripts.pory"
	compare VAR_SIDE_STORY_BRO, 2
	goto_if_eq BerylChannel_OnLoad_3
	return

BerylChannel_OnLoad_1:
# 9 "data/maps/BerylChannel/scripts.pory"
	setmetatile 32, 13, METATILE_Virimante_Stairs, FALSE
# 10 "data/maps/BerylChannel/scripts.pory"
	setmetatile 32, 14, METATILE_Virimante_Stairs, FALSE
# 11 "data/maps/BerylChannel/scripts.pory"
	setmetatile 32, 15, METATILE_Virimante_Stairs, FALSE
# 12 "data/maps/BerylChannel/scripts.pory"
	setmetatile 32, 16, METATILE_Virimante_Stairs, FALSE
# 13 "data/maps/BerylChannel/scripts.pory"
	setmetatile 32, 17, METATILE_Virimante_Stairs, FALSE
# 14 "data/maps/BerylChannel/scripts.pory"
	special DrawWholeMapView
# 15 "data/maps/BerylChannel/scripts.pory"
	setflag FLAG_BRUCE_BERYL
	return

BerylChannel_OnLoad_2:
# 8 "data/maps/BerylChannel/scripts.pory"
	compare VAR_SIDE_STORY_RETRO, 5
	goto_if_eq BerylChannel_OnLoad_1
	return

BerylChannel_OnLoad_3:
# 8 "data/maps/BerylChannel/scripts.pory"
	compare VAR_SIDE_STORY_PASSWACAN, 2
	goto_if_eq BerylChannel_OnLoad_2
	return


BerylChannel_Bruce::
# 20 "data/maps/BerylChannel/scripts.pory"
	lock
# 21 "data/maps/BerylChannel/scripts.pory"
	faceplayer
# 22 "data/maps/BerylChannel/scripts.pory"
	namebox BerylChannel_Bruce_Text_0
# 23 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Bruce_Text_1
# 24 "data/maps/BerylChannel/scripts.pory"
	closemessage
# 25 "data/maps/BerylChannel/scripts.pory"
	hidenamebox
# 26 "data/maps/BerylChannel/scripts.pory"
	delay 20
# 27 "data/maps/BerylChannel/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/BerylChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerylChannel_Bruce_Movement_0
# 29 "data/maps/BerylChannel/scripts.pory"
	applymovement 7, BerylChannel_Bruce_Movement_0
# 30 "data/maps/BerylChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BerylChannel_Bruce_Movement_1
# 31 "data/maps/BerylChannel/scripts.pory"
	waitmovement 0
# 32 "data/maps/BerylChannel/scripts.pory"
	delay 20
# 33 "data/maps/BerylChannel/scripts.pory"
	namebox BerylChannel_Bruce_Text_0
# 34 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Bruce_Text_2
# 35 "data/maps/BerylChannel/scripts.pory"
	closemessage
# 36 "data/maps/BerylChannel/scripts.pory"
	hidenamebox
# 37 "data/maps/BerylChannel/scripts.pory"
	delay 20
# 38 "data/maps/BerylChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, BerylChannel_Bruce_Movement_2
# 39 "data/maps/BerylChannel/scripts.pory"
	waitmovement 0
# 40 "data/maps/BerylChannel/scripts.pory"
	delay 20
# 41 "data/maps/BerylChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerylChannel_Bruce_Movement_3
# 42 "data/maps/BerylChannel/scripts.pory"
	applymovement 7, BerylChannel_Bruce_Movement_4
# 43 "data/maps/BerylChannel/scripts.pory"
	waitmovement 0
# 44 "data/maps/BerylChannel/scripts.pory"
	special RemoveCameraObject
# 45 "data/maps/BerylChannel/scripts.pory"
	namebox BerylChannel_Bruce_Text_0
# 46 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Bruce_Text_3
# 47 "data/maps/BerylChannel/scripts.pory"
	hidenamebox
# 48 "data/maps/BerylChannel/scripts.pory"
	release
	end


BerylChannel_Grunt1::
# 55 "data/maps/BerylChannel/scripts.pory"
	trainerbattle_single TRAINER_BERYL_1, BerylGrunt11, BerylGrunt12
# 56 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Grunt1_Text_0
# 57 "data/maps/BerylChannel/scripts.pory"
	closemessage
	end


BerylChannel_Grunt2::
# 72 "data/maps/BerylChannel/scripts.pory"
	trainerbattle_single TRAINER_BERYL_2, BerylGrunt21, BerylGrunt22
# 73 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Grunt2_Text_0
# 74 "data/maps/BerylChannel/scripts.pory"
	closemessage
	end


BerylChannel_Grunt3::
# 89 "data/maps/BerylChannel/scripts.pory"
	trainerbattle_single TRAINER_BERYL_3, BerylGrunt31, BerylGrunt32
# 90 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Grunt3_Text_0
# 91 "data/maps/BerylChannel/scripts.pory"
	closemessage
	end


BerylChannel_GruntF::
# 106 "data/maps/BerylChannel/scripts.pory"
	lock
# 107 "data/maps/BerylChannel/scripts.pory"
	faceplayer
# 108 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_GruntF_Text_0
# 109 "data/maps/BerylChannel/scripts.pory"
	release
	end


BerylChannel_GruntM::
# 114 "data/maps/BerylChannel/scripts.pory"
	lock
# 115 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_GruntM_Text_0
# 116 "data/maps/BerylChannel/scripts.pory"
	release
	end


BerylChannel_Admin::
# 121 "data/maps/BerylChannel/scripts.pory"
	lock
# 122 "data/maps/BerylChannel/scripts.pory"
	faceplayer
# 123 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Admin_Text_0
# 124 "data/maps/BerylChannel/scripts.pory"
	release
	end


BerylChannel_Blocked::
# 129 "data/maps/BerylChannel/scripts.pory"
	lock
# 130 "data/maps/BerylChannel/scripts.pory"
	msgbox BerylChannel_Blocked_Text_0
# 131 "data/maps/BerylChannel/scripts.pory"
	closemessage
# 132 "data/maps/BerylChannel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BerylChannel_Blocked_Movement_0
# 133 "data/maps/BerylChannel/scripts.pory"
	waitmovement 0
# 134 "data/maps/BerylChannel/scripts.pory"
	release
	end


BerylChannel_Item::
# 139 "data/maps/BerylChannel/scripts.pory"
	lock
# 140 "data/maps/BerylChannel/scripts.pory"
	removeobject 8
# 141 "data/maps/BerylChannel/scripts.pory"
	giveitem ITEM_TM07
# 142 "data/maps/BerylChannel/scripts.pory"
	setflag FLAG_ITEM_BERYL_1
# 143 "data/maps/BerylChannel/scripts.pory"
	release
	end


# 28 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Bruce_Movement_0:
# 28 "data/maps/BerylChannel/scripts.pory"
	face_down
	step_end

# 30 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Bruce_Movement_1:
# 30 "data/maps/BerylChannel/scripts.pory"
	walk_down
# 30 "data/maps/BerylChannel/scripts.pory"
	walk_down
# 30 "data/maps/BerylChannel/scripts.pory"
	walk_down
# 30 "data/maps/BerylChannel/scripts.pory"
	walk_down
# 30 "data/maps/BerylChannel/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Bruce_Movement_2:
# 38 "data/maps/BerylChannel/scripts.pory"
	walk_up
# 38 "data/maps/BerylChannel/scripts.pory"
	walk_up
# 38 "data/maps/BerylChannel/scripts.pory"
	walk_up
# 38 "data/maps/BerylChannel/scripts.pory"
	walk_up
# 38 "data/maps/BerylChannel/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Bruce_Movement_3:
# 41 "data/maps/BerylChannel/scripts.pory"
	face_right
	step_end

# 42 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Bruce_Movement_4:
# 42 "data/maps/BerylChannel/scripts.pory"
	face_left
	step_end

# 132 "data/maps/BerylChannel/scripts.pory"
BerylChannel_Blocked_Movement_0:
# 132 "data/maps/BerylChannel/scripts.pory"
	walk_left
	step_end

BerylChannel_Bruce_Text_0:
# 22 "data/maps/BerylChannel/scripts.pory"
	.string "Bruce$"

BerylChannel_Bruce_Text_1:
# 23 "data/maps/BerylChannel/scripts.pory"
	.string "{PLAYER}! You're finally here! What\n"
	.string "took you so long? Whatever. We're\l"
	.string "almost in Virimante, but there's one\l"
	.string "issue...$"

BerylChannel_Bruce_Text_2:
# 34 "data/maps/BerylChannel/scripts.pory"
	.string "...The cliff is too steep, and I don't\n"
	.string "know about you, but I'm not diving from\l"
	.string "this height.$"

BerylChannel_Bruce_Text_3:
# 46 "data/maps/BerylChannel/scripts.pory"
	.string "I'll put some of my boys to carve some\n"
	.string "stairs into that cliff. It shouldn't\l"
	.string "take long, so in the meantime, try to\l"
	.string "gather some more information about\l"
	.string "these brigands.$"

BerylChannel_Grunt1_Text_0:
# 56 "data/maps/BerylChannel/scripts.pory"
	.string "I shouldn't have jumped! The water's\n"
	.string "freezing!!$"

BerylChannel_Grunt2_Text_0:
# 73 "data/maps/BerylChannel/scripts.pory"
	.string "If I'd known you could ride your\n"
	.string "Pokémon instead of swimming, I wouldn't\l"
	.string "have gotten wet. Dammit!$"

BerylChannel_Grunt3_Text_0:
# 90 "data/maps/BerylChannel/scripts.pory"
	.string "Maybe this is the hypothermia speaking,\n"
	.string "but I feel real good.$"

BerylChannel_GruntF_Text_0:
# 108 "data/maps/BerylChannel/scripts.pory"
	.string "I don't know how these guys can swim in\n"
	.string "a sea that cold, but I sure won't get\l"
	.string "wet. Nuh uh. Even if it means that I'll\l"
	.string "never leave Virimante.$"

BerylChannel_GruntM_Text_0:
# 115 "data/maps/BerylChannel/scripts.pory"
	.string "Hehehe... No one has tagged this boat...\n"
	.string "Everyone will now my name!$"

BerylChannel_Admin_Text_0:
# 123 "data/maps/BerylChannel/scripts.pory"
	.string "Haha, are you the kid Barbara was\n"
	.string "complaining about? You look so frail! I\l"
	.string "can't believe she let herself get\l"
	.string "beaten by a scrawny kid like you! Haha!\l"
	.string "This is golden!$"

BerylChannel_Blocked_Text_0:
# 130 "data/maps/BerylChannel/scripts.pory"
	.string "(The currents are too strong, it\n"
	.string "wouldn't be safe going that way.)$"

BerylGrunt11::
# 61 "data/maps/BerylChannel/scripts.pory"
	.string "Aaaah! I'm so cold! Let's fight so I can\n"
	.string "warm up!$"

BerylGrunt12::
# 65 "data/maps/BerylChannel/scripts.pory"
	.string "This didn't warm me up at all!$"

BerylGrunt21::
# 78 "data/maps/BerylChannel/scripts.pory"
	.string "Hey! You're not swimming! You're riding a\n"
	.string "Pokémon? We can do that?$"

BerylGrunt22::
# 82 "data/maps/BerylChannel/scripts.pory"
	.string "Oh wow!$"

BerylGrunt31::
# 95 "data/maps/BerylChannel/scripts.pory"
	.string "Hmmm... I've achieved a sense of\n"
	.string "fullness. Let me show you.$"

BerylGrunt32::
# 99 "data/maps/BerylChannel/scripts.pory"
	.string "Yeah...$"
