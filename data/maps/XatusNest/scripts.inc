# 1 "data/maps/XatusNest/scripts.pory"

# 2 "data/maps/XatusNest/scripts.pory"
XatusNest_MapScripts::
# 3 "data/maps/XatusNest/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, XatusNest_OnFrame
# 4 "data/maps/XatusNest/scripts.pory"
	.byte 0
# 5 "data/maps/XatusNest/scripts.pory"

# 6 "data/maps/XatusNest/scripts.pory"
XatusNest_OnFrame:
# 7 "data/maps/XatusNest/scripts.pory"
    map_script_2 VAR_SIDE_STORY_RETRO, 3, XatusNest_Arrival
# 8 "data/maps/XatusNest/scripts.pory"
    .2byte 0

XatusNest_Arrival::
# 12 "data/maps/XatusNest/scripts.pory"
	lock
# 13 "data/maps/XatusNest/scripts.pory"
	setrespawn HEAL_LOCATION_ARRAY
# 14 "data/maps/XatusNest/scripts.pory"
	msgbox XatusNest_Arrival_Text_0
# 15 "data/maps/XatusNest/scripts.pory"
	closemessage
# 16 "data/maps/XatusNest/scripts.pory"
	applymovement 1, XatusNest_Arrival_Movement_0
# 17 "data/maps/XatusNest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, XatusNest_Arrival_Movement_1
# 18 "data/maps/XatusNest/scripts.pory"
	waitmovement 0
# 19 "data/maps/XatusNest/scripts.pory"
	removeobject 1
# 20 "data/maps/XatusNest/scripts.pory"
	playse SE_EXIT
# 21 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_ARMY_HERRON
# 22 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_DAVE_GLORRAY
# 23 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_KAM_VIRIMANTE
# 24 "data/maps/XatusNest/scripts.pory"
	completequest QUEST_HOME
# 25 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_HOME_QUEST_COMPLETE
# 26 "data/maps/XatusNest/scripts.pory"
	setvar VAR_SIDE_STORY_RETRO, 4
# 27 "data/maps/XatusNest/scripts.pory"
	setvar VAR_SHOP_UPDATE, 5
# 28 "data/maps/XatusNest/scripts.pory"
	setvar VAR_LEVELS, 100
# 29 "data/maps/XatusNest/scripts.pory"
	delay 20
# 30 "data/maps/XatusNest/scripts.pory"
	pokenavcall XatusNest_Shop_Text
# 31 "data/maps/XatusNest/scripts.pory"
	waitmessage
# 32 "data/maps/XatusNest/scripts.pory"
	setvar VAR_SHOP_UPDATE, 6
# 33 "data/maps/XatusNest/scripts.pory"
	release
	end


XatusNest_ShopUpdate::
# 38 "data/maps/XatusNest/scripts.pory"
	lockall
# 39 "data/maps/XatusNest/scripts.pory"
	faceplayer
# 40 "data/maps/XatusNest/scripts.pory"
	pokenavcall XatusNest_Shop_Text
# 41 "data/maps/XatusNest/scripts.pory"
	waitmessage
# 42 "data/maps/XatusNest/scripts.pory"
	setvar VAR_SHOP_UPDATE, 6
# 43 "data/maps/XatusNest/scripts.pory"
	releaseall
	end


XatusNest_TM::
# 48 "data/maps/XatusNest/scripts.pory"
	lock
# 49 "data/maps/XatusNest/scripts.pory"
	removeobject 2
# 50 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_ITEM_NEST
# 51 "data/maps/XatusNest/scripts.pory"
	giveitem ITEM_TM38
# 52 "data/maps/XatusNest/scripts.pory"
	release
	end


XatusNest_Egg::
# 71 "data/maps/XatusNest/scripts.pory"
	lock
# 72 "data/maps/XatusNest/scripts.pory"
	faceplayer
# 73 "data/maps/XatusNest/scripts.pory"
	msgbox XatusNest_Egg_Text_0, MSGBOX_YESNO
# 74 "data/maps/XatusNest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq XatusNest_Egg_2
# 82 "data/maps/XatusNest/scripts.pory"
	msgbox XatusNest_Egg_Text_2
XatusNest_Egg_1:
# 84 "data/maps/XatusNest/scripts.pory"
	release
	end

XatusNest_Egg_2:
# 75 "data/maps/XatusNest/scripts.pory"
	giveegg SPECIES_NATU
# 76 "data/maps/XatusNest/scripts.pory"
	removeobject 3
# 77 "data/maps/XatusNest/scripts.pory"
	setflag FLAG_NATU_EGG_LEAGUE
# 78 "data/maps/XatusNest/scripts.pory"
	playse MUS_LEVEL_UP
# 79 "data/maps/XatusNest/scripts.pory"
	msgbox XatusNest_Egg_Text_1
	goto XatusNest_Egg_1


# 16 "data/maps/XatusNest/scripts.pory"
XatusNest_Arrival_Movement_0:
# 16 "data/maps/XatusNest/scripts.pory"
	walk_up
# 16 "data/maps/XatusNest/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/XatusNest/scripts.pory"
XatusNest_Arrival_Movement_1:
# 17 "data/maps/XatusNest/scripts.pory"
	walk_left
# 17 "data/maps/XatusNest/scripts.pory"
	face_right
	step_end

XatusNest_Arrival_Text_0:
# 14 "data/maps/XatusNest/scripts.pory"
	.string "Alright, you proved to us that you are\n"
	.string "in fact from here. Sorry for what\l"
	.string "happened to you, though. Seems like\l"
	.string "your old village is in ruins now. Mission,\l"
	.string "over! Back to the tent for me.$"

XatusNest_Egg_Text_0:
# 73 "data/maps/XatusNest/scripts.pory"
	.string "This looks like an Egg. Take it?$"

XatusNest_Egg_Text_1:
# 79 "data/maps/XatusNest/scripts.pory"
	.string "You just received an Egg.$"

XatusNest_Egg_Text_2:
# 82 "data/maps/XatusNest/scripts.pory"
	.string "Decided against it.$"

XatusNest_Shop_Text::
# 56 "data/maps/XatusNest/scripts.pory"
	.string "You just received a new\n"
	.string "text message from:\l"
	.string "Thura's Mart Association\l"
	.string "'Hello, dear customer!\l"
	.string "We'd like to inform you\l"
	.string "that our range of products\l"
	.string "is finally complete! You can\l"
	.string "now buy items such as Full\l"
	.string "Restores, Revives, and much\l"
	.string "more!\l"
	.string "Come by and see by yourself!'$"
