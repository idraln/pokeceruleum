# 1 "data/maps/HelicopterCutscene/scripts.pory"

# 2 "data/maps/HelicopterCutscene/scripts.pory"
HelicopterCutscene_MapScripts::
# 3 "data/maps/HelicopterCutscene/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HelicopterCutscene_OnFrame
# 4 "data/maps/HelicopterCutscene/scripts.pory"
	.byte 0
# 5 "data/maps/HelicopterCutscene/scripts.pory"

# 6 "data/maps/HelicopterCutscene/scripts.pory"
HelicopterCutscene_OnFrame:
# 7 "data/maps/HelicopterCutscene/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, HelicopterCutscene_Arrival
# 8 "data/maps/HelicopterCutscene/scripts.pory"
    .2byte 0

HelicopterCutscene_Arrival::
# 11 "data/maps/HelicopterCutscene/scripts.pory"
	lockall
# 12 "data/maps/HelicopterCutscene/scripts.pory"
	applymovement 1, HCutHelico
# 13 "data/maps/HelicopterCutscene/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HCutHelico
# 14 "data/maps/HelicopterCutscene/scripts.pory"
	waitmovement 0
# 15 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_0
# 16 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 17 "data/maps/HelicopterCutscene/scripts.pory"
	delay 20
# 18 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_1
# 19 "data/maps/HelicopterCutscene/scripts.pory"
	multichoice 0, 8, MULTI_CUTSCENE, FALSE
# 20 "data/maps/HelicopterCutscene/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/HelicopterCutscene/scripts.pory"
	case 0, HelicopterCutscene_Arrival_3
# 34 "data/maps/HelicopterCutscene/scripts.pory"
	case 1, HelicopterCutscene_Arrival_4
HelicopterCutscene_Arrival_1:
# 46 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 47 "data/maps/HelicopterCutscene/scripts.pory"
	applymovement 1, HCutHelico2
# 48 "data/maps/HelicopterCutscene/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HCutHelico2
# 49 "data/maps/HelicopterCutscene/scripts.pory"
	waitmovement 0
# 50 "data/maps/HelicopterCutscene/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 51 "data/maps/HelicopterCutscene/scripts.pory"
	delay 20
# 52 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_11
# 53 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 54 "data/maps/HelicopterCutscene/scripts.pory"
	warpsilent MAP_SAPPHIRE_CITY_AIRPORT, 3, 9
# 55 "data/maps/HelicopterCutscene/scripts.pory"
	releaseall
	end

HelicopterCutscene_Arrival_3:
# 22 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 23 "data/maps/HelicopterCutscene/scripts.pory"
	delay 40
# 24 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_2
# 25 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_3
# 26 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_4
# 27 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_3
# 28 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_5
# 29 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_3
# 30 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_6
# 31 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 32 "data/maps/HelicopterCutscene/scripts.pory"
	delay 40
# 33 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_7
	goto HelicopterCutscene_Arrival_1

HelicopterCutscene_Arrival_4:
# 35 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 36 "data/maps/HelicopterCutscene/scripts.pory"
	delay 40
# 37 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_8
# 38 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_3
# 39 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_9
# 40 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_3
# 41 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_10
# 42 "data/maps/HelicopterCutscene/scripts.pory"
	closemessage
# 43 "data/maps/HelicopterCutscene/scripts.pory"
	delay 40
# 44 "data/maps/HelicopterCutscene/scripts.pory"
	msgbox HelicopterCutscene_Arrival_Text_7
	goto HelicopterCutscene_Arrival_1


# 59 "data/maps/HelicopterCutscene/scripts.pory"
HCutHelico:
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 60 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
	step_end

# 63 "data/maps/HelicopterCutscene/scripts.pory"
HCutHelico2:
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 64 "data/maps/HelicopterCutscene/scripts.pory"
	walk_left
# 65 "data/maps/HelicopterCutscene/scripts.pory"
	step_end

HelicopterCutscene_Arrival_Text_0:
# 15 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Sam: Hey, this isn't too bad! Look, the\n"
	.string "trees look tiny!$"

HelicopterCutscene_Arrival_Text_1:
# 18 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Sam: So, I haven't asked you yet, what\n"
	.string "do you think happened to your\l"
	.string "Pokémons?$"

HelicopterCutscene_Arrival_Text_2:
# 24 "data/maps/HelicopterCutscene/scripts.pory"
	.string "It...? By it, you mean, one Pokémon? You\n"
	.string "managed to battle your way through\l"
	.string "every Council Member with ONE Pokémon?\l"
	.string "Wow! What was it?$"

HelicopterCutscene_Arrival_Text_3:
# 25 "data/maps/HelicopterCutscene/scripts.pory"
	.string "...$"

HelicopterCutscene_Arrival_Text_4:
# 26 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Xatu? Never heard of it! Must be a\n"
	.string "mythical creature from another region.$"

HelicopterCutscene_Arrival_Text_5:
# 28 "data/maps/HelicopterCutscene/scripts.pory"
	.string "It's not even a legendary? Man, I need\n"
	.string "to learn more about Pokémons.$"

HelicopterCutscene_Arrival_Text_6:
# 30 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Anyways, don't worry, I'm sure your Xatu\n"
	.string "is waiting for you somewhere. You must\l"
	.string "have huge bonds, there's no way it just\l"
	.string "flew away.$"

HelicopterCutscene_Arrival_Text_7:
# 33 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Well, let's hope for the best, shall we?$"

HelicopterCutscene_Arrival_Text_8:
# 37 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Yeah, you're right, family first! Where\n"
	.string "does she live?$"

HelicopterCutscene_Arrival_Text_9:
# 39 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Array? Never heard of that town, where\n"
	.string "is it?$"

HelicopterCutscene_Arrival_Text_10:
# 41 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Ah, I see, in the southeast. I've never\n"
	.string "been there, I'm sure it's absolutely\l"
	.string "charming!$"

HelicopterCutscene_Arrival_Text_11:
# 52 "data/maps/HelicopterCutscene/scripts.pory"
	.string "Pilot: There it is lads, welcome to\n"
	.string "Sapphire City! I hope you both had a\l"
	.string "great flight with me. See ya soon, I\l"
	.string "hope!$"
