# 1 "data/maps/MellowAbysses/scripts.pory"

# 2 "data/maps/MellowAbysses/scripts.pory"
MellowAbysses_MapScripts::
# 3 "data/maps/MellowAbysses/scripts.pory"
	.byte 0

MellowAbysses_DiverNPC1::
# 7 "data/maps/MellowAbysses/scripts.pory"
	lock
# 8 "data/maps/MellowAbysses/scripts.pory"
	faceplayer
# 9 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_DiverNPC1_Text_0
# 10 "data/maps/MellowAbysses/scripts.pory"
	release
	end


MellowAbysses_Diver1::
# 15 "data/maps/MellowAbysses/scripts.pory"
	trainerbattle_single TRAINER_ABYSS_1, Diver1_1, Diver1_2
# 16 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_Diver1_Text_0
# 17 "data/maps/MellowAbysses/scripts.pory"
	closemessage
	end


MellowAbysses_DiverNPC2::
# 32 "data/maps/MellowAbysses/scripts.pory"
	lock
# 33 "data/maps/MellowAbysses/scripts.pory"
	faceplayer
# 34 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_DiverNPC2_Text_0
# 35 "data/maps/MellowAbysses/scripts.pory"
	release
	end


MellowAbysses_Diver2::
# 40 "data/maps/MellowAbysses/scripts.pory"
	trainerbattle_single TRAINER_ABYSS_2, Diver2_1, Diver2_2
# 41 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_Diver2_Text_0
# 42 "data/maps/MellowAbysses/scripts.pory"
	closemessage
	end


MellowAbysses_Diver3::
# 57 "data/maps/MellowAbysses/scripts.pory"
	trainerbattle_single TRAINER_ABYSS_3, Diver3_1, Diver3_2
# 58 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_Diver3_Text_0
# 59 "data/maps/MellowAbysses/scripts.pory"
	closemessage
	end


MellowAbysses_BlockLeft::
# 74 "data/maps/MellowAbysses/scripts.pory"
	lock
# 75 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_BlockLeft_Text_0
# 76 "data/maps/MellowAbysses/scripts.pory"
	closemessage
# 77 "data/maps/MellowAbysses/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MellowAbysses_BlockLeft_Movement_0
# 78 "data/maps/MellowAbysses/scripts.pory"
	waitmovement 0
# 79 "data/maps/MellowAbysses/scripts.pory"
	release
	end


MellowAbysses_BlockRight::
# 84 "data/maps/MellowAbysses/scripts.pory"
	lock
# 85 "data/maps/MellowAbysses/scripts.pory"
	msgbox MellowAbysses_BlockLeft_Text_0
# 86 "data/maps/MellowAbysses/scripts.pory"
	closemessage
# 87 "data/maps/MellowAbysses/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MellowAbysses_BlockRight_Movement_0
# 88 "data/maps/MellowAbysses/scripts.pory"
	waitmovement 0
# 89 "data/maps/MellowAbysses/scripts.pory"
	release
	end


MellowAbysses_RiftWarp::
# 94 "data/maps/MellowAbysses/scripts.pory"
	lock
# 95 "data/maps/MellowAbysses/scripts.pory"
	delay 40
# 96 "data/maps/MellowAbysses/scripts.pory"
	call ScreenShake
# 97 "data/maps/MellowAbysses/scripts.pory"
	playse SE_PIN
# 98 "data/maps/MellowAbysses/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MellowAbysses_RiftWarp_Movement_0
# 99 "data/maps/MellowAbysses/scripts.pory"
	waitmovement 0
# 100 "data/maps/MellowAbysses/scripts.pory"
	call ScreenShake
# 101 "data/maps/MellowAbysses/scripts.pory"
	warpsilent MAP_BLEAK_RIFT, 11, 51
# 102 "data/maps/MellowAbysses/scripts.pory"
	release
	end


# 77 "data/maps/MellowAbysses/scripts.pory"
MellowAbysses_BlockLeft_Movement_0:
# 77 "data/maps/MellowAbysses/scripts.pory"
	walk_right
	step_end

# 87 "data/maps/MellowAbysses/scripts.pory"
MellowAbysses_BlockRight_Movement_0:
# 87 "data/maps/MellowAbysses/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/MellowAbysses/scripts.pory"
MellowAbysses_RiftWarp_Movement_0:
# 98 "data/maps/MellowAbysses/scripts.pory"
	emote_exclamation_mark
# 98 "data/maps/MellowAbysses/scripts.pory"
	face_up
# 98 "data/maps/MellowAbysses/scripts.pory"
	delay_16
# 98 "data/maps/MellowAbysses/scripts.pory"
	face_left
# 98 "data/maps/MellowAbysses/scripts.pory"
	delay_16
# 98 "data/maps/MellowAbysses/scripts.pory"
	face_down
	step_end

MellowAbysses_DiverNPC1_Text_0:
# 9 "data/maps/MellowAbysses/scripts.pory"
	.string "Hmblblbl! Hmblblbl!$"

MellowAbysses_Diver1_Text_0:
# 16 "data/maps/MellowAbysses/scripts.pory"
	.string "Hmblblbl, hmblblbl? Hmblbl! Hmblbl,\n"
	.string "hmblblbl...$"

MellowAbysses_DiverNPC2_Text_0:
# 34 "data/maps/MellowAbysses/scripts.pory"
	.string "I'm on a project called the Restoration\n"
	.string "project! We're studying the past, and\l"
	.string "it's fascinating!$"

MellowAbysses_Diver2_Text_0:
# 41 "data/maps/MellowAbysses/scripts.pory"
	.string "A little clue for you: you must've seen\n"
	.string "some round rocks scattered across the\l"
	.string "abysses; maybe they would mean\l"
	.string "something?$"

MellowAbysses_Diver3_Text_0:
# 58 "data/maps/MellowAbysses/scripts.pory"
	.string "You can't be too careful while crossing\n"
	.string "this kind of rift. Who knows what could\l"
	.string "come from deep down...$"

MellowAbysses_BlockLeft_Text_0:
# 75 "data/maps/MellowAbysses/scripts.pory"
	.string "(The waters look too deep this way, it\n"
	.string "wouldn't be wise to go there.)$"

Diver1_1::
# 21 "data/maps/MellowAbysses/scripts.pory"
	.string "Hmblbl! Hmblbl, hmblblbl.$"

Diver1_2::
# 25 "data/maps/MellowAbysses/scripts.pory"
	.string "Hmmm!$"

Diver2_1::
# 46 "data/maps/MellowAbysses/scripts.pory"
	.string "Are you down there for the Council\n"
	.string "Challenge? You must be strong!$"

Diver2_2::
# 50 "data/maps/MellowAbysses/scripts.pory"
	.string "You are indeed very strong!$"

Diver3_1::
# 63 "data/maps/MellowAbysses/scripts.pory"
	.string "Are you going to cross out that rift?\n"
	.string "Be careful!$"

Diver3_2::
# 67 "data/maps/MellowAbysses/scripts.pory"
	.string "Seems that you know what you're doing...$"
