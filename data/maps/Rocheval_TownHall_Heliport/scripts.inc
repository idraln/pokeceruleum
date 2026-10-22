# 1 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"

# 2 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
Rocheval_TownHall_Heliport_MapScripts::
# 3 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rocheval_TownHall_Heliport_OnFrame
# 4 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.byte 0
# 5 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"

# 6 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
Rocheval_TownHall_Heliport_OnFrame:
# 7 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Rocheval_TownHall_Heliport_Arrival
# 8 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
    .2byte 0

Rocheval_TownHall_Heliport_Arrival::
# 12 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	lock
# 13 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 14 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_1
# 15 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 16 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 17 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 3, RTHHSam
# 18 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RTHHPlayer
# 19 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	waitmovement 0
# 20 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_2
# 21 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 22 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 23 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 24 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_3
# 25 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 26 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 27 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 3, RTHHSam2
# 28 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	waitmovement 0
# 29 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 30 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 31 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_4
# 32 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 33 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 34 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 3, RTHHSam3
# 35 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	waitmovement 0
# 36 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 37 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 38 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_5
# 39 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 40 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 41 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 3, RTHHSam3
# 42 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RTHHSam3
# 43 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 44 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	fwdtime 22, 00
# 45 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	setvar VAR_0x8004, 37
# 46 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	setvar VAR_0x8005, 7
# 47 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	special TeleportCamera
# 48 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 40
# 49 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 2
# 50 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	playbgm MUS_FALLARBOR, TRUE
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 4, Rocheval_TownHall_Heliport_Arrival_Movement_0
# 52 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	waitmovement 0
# 53 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 54 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_6
# 55 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 56 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 57 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 58 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 59 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_7
# 60 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 61 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 62 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 40
# 63 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 64 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_8
# 65 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 66 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_2
# 67 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 68 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_9
# 69 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 70 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_2
# 71 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 72 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_10
# 73 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 74 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_2
# 75 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 76 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_11
# 77 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 78 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 79 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 40
# 80 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_0
# 81 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_12
# 82 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 83 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	applymovement 4, Rocheval_TownHall_Heliport_Arrival_Movement_1
# 85 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	waitmovement 0
# 86 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 87 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 88 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	delay 20
# 89 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	namebox Rocheval_TownHall_Heliport_Arrival_Text_13
# 90 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	msgbox Rocheval_TownHall_Heliport_Arrival_Text_14
# 91 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	hidenamebox
# 92 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	closemessage
# 93 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	setvar VAR_TEMP_0, 1
# 94 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	warpsilent MAP_SAPPHIRE_CITY_AIRPORT, 3, 9
# 95 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	releaseall
	end


# 99 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
RTHHSam:
# 100 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 100 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 100 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 100 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 100 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 101 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	face_up
	step_end

# 104 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
RTHHSam2:
# 105 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
RTHHSam3:
# 109 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_up
	step_end

# 112 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
RTHHPlayer:
# 113 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_down
# 114 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 114 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 114 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 114 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_left
# 115 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	face_up
	step_end

# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
Rocheval_TownHall_Heliport_Arrival_Movement_0:
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 51 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
	step_end

# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
Rocheval_TownHall_Heliport_Arrival_Movement_1:
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
# 84 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	walk_fast_left
	step_end

Rocheval_TownHall_Heliport_Arrival_Text_0:
# 13 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Sam$"

Rocheval_TownHall_Heliport_Arrival_Text_1:
# 14 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Look! The helicopter is already here!\n"
	.string "Come!$"

Rocheval_TownHall_Heliport_Arrival_Text_2:
# 20 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "...$"

Rocheval_TownHall_Heliport_Arrival_Text_3:
# 24 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Oh wow. Now that we're in front of the\n"
	.string "beast, I'm not sure I want to get in...$"

Rocheval_TownHall_Heliport_Arrival_Text_4:
# 31 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "...Come on Sam. You're a grown adult now.\n"
	.string "Remember what the video said: never\l"
	.string "give up. Get it together.$"

Rocheval_TownHall_Heliport_Arrival_Text_5:
# 38 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Ok, let's do this. Quick, because I'm on\n"
	.string "the verge of passing out.$"

Rocheval_TownHall_Heliport_Arrival_Text_6:
# 54 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Hey, this isn't too bad! Look, the trees\n"
	.string "look so tiny!$"

Rocheval_TownHall_Heliport_Arrival_Text_7:
# 59 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "So, I haven't asked you yet, what do you\n"
	.string "think happened to your Pokémons?$"

Rocheval_TownHall_Heliport_Arrival_Text_8:
# 64 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Your... Pokémon? By Pokémon, you mean,\n"
	.string "one Pokémon? You managed to battle\l"
	.string "your way through every Council Member\l"
	.string "with ONE Pokémon? Wow! What was it?$"

Rocheval_TownHall_Heliport_Arrival_Text_9:
# 68 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Xatu? Never heard of it! Must be a\n"
	.string "mythical creature from another region.$"

Rocheval_TownHall_Heliport_Arrival_Text_10:
# 72 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "It's not even a legendary? Man, I need\n"
	.string "to learn more about Pokémons.$"

Rocheval_TownHall_Heliport_Arrival_Text_11:
# 76 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Anyways, don't worry, I'm sure your Xatu\n"
	.string "is waiting for you somewhere. You must\l"
	.string "have huge bonds, there's no way it just\l"
	.string "flew away!$"

Rocheval_TownHall_Heliport_Arrival_Text_12:
# 81 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Well, let's hope for the best, shall we?$"

Rocheval_TownHall_Heliport_Arrival_Text_13:
# 89 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "Pilot$"

Rocheval_TownHall_Heliport_Arrival_Text_14:
# 90 "data/maps/Rocheval_TownHall_Heliport/scripts.pory"
	.string "There it is lads, welcome to Sapphire\n"
	.string "City! I hope you both had a great flight\l"
	.string "with me. See ya soon, I hope!$"
