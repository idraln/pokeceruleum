# 1 "data/maps/MistraltonCity_CargoService/scripts.pory"

# 2 "data/maps/MistraltonCity_CargoService/scripts.pory"
MistraltonCity_CargoService_MapScripts::
# 3 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.byte 0

MistraltonCity_CargoService_Tenant::
# 7 "data/maps/MistraltonCity_CargoService/scripts.pory"
	lock
# 8 "data/maps/MistraltonCity_CargoService/scripts.pory"
	faceplayer
# 9 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Tenant_Text_0
# 10 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end


MistraltonCity_CargoService_Man::
# 15 "data/maps/MistraltonCity_CargoService/scripts.pory"
	lock
# 16 "data/maps/MistraltonCity_CargoService/scripts.pory"
	faceplayer
# 17 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Man_Text_0
# 18 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end


MistraltonCity_CargoService_Boy::
# 23 "data/maps/MistraltonCity_CargoService/scripts.pory"
	lock
# 24 "data/maps/MistraltonCity_CargoService/scripts.pory"
	faceplayer
# 25 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Boy_Text_0
# 26 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end


MistraltonCity_CargoService_Girl::
# 31 "data/maps/MistraltonCity_CargoService/scripts.pory"
	lock
# 32 "data/maps/MistraltonCity_CargoService/scripts.pory"
	faceplayer
# 33 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Girl_Text_0
# 34 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end


MistraltonCity_CargoService_Sam::
# 39 "data/maps/MistraltonCity_CargoService/scripts.pory"
	lock
# 40 "data/maps/MistraltonCity_CargoService/scripts.pory"
	compare VAR_MAIN_STORY, 52
	goto_if_eq MistraltonCity_CargoService_Sam_1
# 50 "data/maps/MistraltonCity_CargoService/scripts.pory"
	namebox MistraltonCity_CargoService_Sam_Text_0
# 51 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Sam_Text_2
# 52 "data/maps/MistraltonCity_CargoService/scripts.pory"
	hidenamebox
# 53 "data/maps/MistraltonCity_CargoService/scripts.pory"
	closemessage
# 54 "data/maps/MistraltonCity_CargoService/scripts.pory"
	delay 20
# 55 "data/maps/MistraltonCity_CargoService/scripts.pory"
	applymovement 5, MistraltonCity_CargoService_Sam_Movement_0
# 56 "data/maps/MistraltonCity_CargoService/scripts.pory"
	waitmovement 0
# 57 "data/maps/MistraltonCity_CargoService/scripts.pory"
	playse SE_PIN
# 58 "data/maps/MistraltonCity_CargoService/scripts.pory"
	delay 40
# 59 "data/maps/MistraltonCity_CargoService/scripts.pory"
	namebox MistraltonCity_CargoService_Sam_Text_0
# 60 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Sam_Text_3
# 61 "data/maps/MistraltonCity_CargoService/scripts.pory"
	hidenamebox
# 62 "data/maps/MistraltonCity_CargoService/scripts.pory"
	closemessage
# 63 "data/maps/MistraltonCity_CargoService/scripts.pory"
	turnobject 5, DIR_NORTH
# 64 "data/maps/MistraltonCity_CargoService/scripts.pory"
	setvar VAR_MAIN_STORY, 52
# 65 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end

MistraltonCity_CargoService_Sam_1:
# 41 "data/maps/MistraltonCity_CargoService/scripts.pory"
	faceplayer
# 42 "data/maps/MistraltonCity_CargoService/scripts.pory"
	namebox MistraltonCity_CargoService_Sam_Text_0
# 43 "data/maps/MistraltonCity_CargoService/scripts.pory"
	msgbox MistraltonCity_CargoService_Sam_Text_1
# 44 "data/maps/MistraltonCity_CargoService/scripts.pory"
	hidenamebox
# 45 "data/maps/MistraltonCity_CargoService/scripts.pory"
	closemessage
# 46 "data/maps/MistraltonCity_CargoService/scripts.pory"
	release
	end


# 55 "data/maps/MistraltonCity_CargoService/scripts.pory"
MistraltonCity_CargoService_Sam_Movement_0:
# 55 "data/maps/MistraltonCity_CargoService/scripts.pory"
	face_player
# 55 "data/maps/MistraltonCity_CargoService/scripts.pory"
	emote_exclamation_mark
	step_end

MistraltonCity_CargoService_Tenant_Text_0:
# 9 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Welcome to Mistralton's Cargo Service!\n"
	.string "We can ship your package to the\l"
	.string "destination of your choice. We also sell\l"
	.string "sandwiches, but I'm all out of them for\l"
	.string "today. Sorry!$"

MistraltonCity_CargoService_Man_Text_0:
# 17 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "...Hmm? Oh, the book I'm reading is called\n"
	.string "'The Legend of Xatu'. Very interesting\l"
	.string "book! There's no Xatus in Unova, so I've\l"
	.string "learned a bunch about this Pokémon.$"

MistraltonCity_CargoService_Boy_Text_0:
# 25 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Yummy! I'm eating a tomato and basil\n"
	.string "sandwich!$"

MistraltonCity_CargoService_Girl_Text_0:
# 33 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Eurk, I bought a carrot sandwich, it's\n"
	.string "yucky!$"

MistraltonCity_CargoService_Sam_Text_0:
# 42 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Sam$"

MistraltonCity_CargoService_Sam_Text_1:
# 43 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Did you try your luck at that tower? I'm\n"
	.string "sorry, but I'm just too darn hungry to\l"
	.string "join you for now.$"

MistraltonCity_CargoService_Sam_Text_2:
# 51 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Dammit. They've sold out the\n"
	.string "sandwiches. No luck for me, again...$"

MistraltonCity_CargoService_Sam_Text_3:
# 60 "data/maps/MistraltonCity_CargoService/scripts.pory"
	.string "Oh, {PLAYER}! Well, let's get right into\n"
	.string "it, eh? Just a few minutes ago, an old\l"
	.string "woman warned me that Celestial Tower\l"
	.string "was closed due to a sudden disturbance.\l"
	.string "I guess she thought I was a tourist?\l"
	.string "Anyway, that disturbance might wery\l"
	.string "well be called Vikkie. Try your luck\l"
	.string "there, I'll stay here to... Uh, gather\l"
	.string "info.$"
