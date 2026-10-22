# 1 "data/maps/SapphireCity_Building5/scripts.pory"

# 2 "data/maps/SapphireCity_Building5/scripts.pory"
SapphireCity_Building5_MapScripts::
# 3 "data/maps/SapphireCity_Building5/scripts.pory"
	.byte 0

SapphireCity_Building5_Boy::
# 7 "data/maps/SapphireCity_Building5/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building5/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Boy_Text_0
# 10 "data/maps/SapphireCity_Building5/scripts.pory"
	turnobject 1, DIR_NORTH
# 11 "data/maps/SapphireCity_Building5/scripts.pory"
	release
	end


SapphireCity_Building5_Woman::
# 16 "data/maps/SapphireCity_Building5/scripts.pory"
	lock
# 17 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Woman_Text_0
# 18 "data/maps/SapphireCity_Building5/scripts.pory"
	release
	end


SapphireCity_Building5_Mom1::
# 23 "data/maps/SapphireCity_Building5/scripts.pory"
	lock
# 24 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Mom1_Text_0
# 25 "data/maps/SapphireCity_Building5/scripts.pory"
	release
	end


SapphireCity_Building5_Mom2::
# 30 "data/maps/SapphireCity_Building5/scripts.pory"
	lock
# 31 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Mom2_Text_0
# 32 "data/maps/SapphireCity_Building5/scripts.pory"
	release
	end


SapphireCity_Building5_Girl::
# 37 "data/maps/SapphireCity_Building5/scripts.pory"
	lock
# 38 "data/maps/SapphireCity_Building5/scripts.pory"
	faceplayer
# 39 "data/maps/SapphireCity_Building5/scripts.pory"
	applymovement 3, SCB5_Girl_Exc
# 40 "data/maps/SapphireCity_Building5/scripts.pory"
	waitmovement 0
# 41 "data/maps/SapphireCity_Building5/scripts.pory"
	delay 10
# 42 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Girl_Text_0
# 43 "data/maps/SapphireCity_Building5/scripts.pory"
	closemessage
# 44 "data/maps/SapphireCity_Building5/scripts.pory"
	playse SE_PIN
# 45 "data/maps/SapphireCity_Building5/scripts.pory"
	applymovement 3, SCB5_Girl_Afraid
# 46 "data/maps/SapphireCity_Building5/scripts.pory"
	waitmovement 0
# 47 "data/maps/SapphireCity_Building5/scripts.pory"
	playse SE_PIN
# 48 "data/maps/SapphireCity_Building5/scripts.pory"
	applymovement 5, SCB5_Mom1_Exc
# 49 "data/maps/SapphireCity_Building5/scripts.pory"
	waitmovement 0
# 50 "data/maps/SapphireCity_Building5/scripts.pory"
	msgbox SapphireCity_Building5_Girl_Text_1
# 51 "data/maps/SapphireCity_Building5/scripts.pory"
	closemessage
# 52 "data/maps/SapphireCity_Building5/scripts.pory"
	warp MAP_SAPPHIRE_CITY_BUILDING_LOBBIES, 57, 8
# 53 "data/maps/SapphireCity_Building5/scripts.pory"
	setflag FLAG_SAPPHIRE_UNAUTHORIZED
# 54 "data/maps/SapphireCity_Building5/scripts.pory"
	release
	end


# 58 "data/maps/SapphireCity_Building5/scripts.pory"
SCB5_Girl_Exc:
# 59 "data/maps/SapphireCity_Building5/scripts.pory"
	emote_exclamation_mark
	step_end

# 62 "data/maps/SapphireCity_Building5/scripts.pory"
SCB5_Mom1_Exc:
# 63 "data/maps/SapphireCity_Building5/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/SapphireCity_Building5/scripts.pory"
	delay_16
# 65 "data/maps/SapphireCity_Building5/scripts.pory"
	face_up
	step_end

# 69 "data/maps/SapphireCity_Building5/scripts.pory"
SCB5_Girl_Afraid:
# 70 "data/maps/SapphireCity_Building5/scripts.pory"
	jump_2_right
# 71 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_down
# 71 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_down
# 71 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_down
# 71 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_down
# 71 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_down
# 72 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_left
# 72 "data/maps/SapphireCity_Building5/scripts.pory"
	walk_fast_left
# 73 "data/maps/SapphireCity_Building5/scripts.pory"
	face_up
	step_end

SapphireCity_Building5_Boy_Text_0:
# 9 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "I'm watching the last episode of It's\n"
	.string "Always Sunny in Mauville City! They\l"
	.string "really stepped up their game!$"

SapphireCity_Building5_Woman_Text_0:
# 17 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "Lalalala! Doing dishes is so fun! It\n"
	.string "smells so good!$"

SapphireCity_Building5_Mom1_Text_0:
# 24 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "I told you, I don't like seeing our girl\n"
	.string "watching the TV from this close.$"

SapphireCity_Building5_Mom2_Text_0:
# 31 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "Believe me, I tried telling her multiple\n"
	.string "times, but she simply won't listen to me!$"

SapphireCity_Building5_Girl_Text_0:
# 42 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "AH!!! WHO ARE YOU?$"

SapphireCity_Building5_Girl_Text_1:
# 50 "data/maps/SapphireCity_Building5/scripts.pory"
	.string "HEY! What are you doing here? This is a\n"
	.string "private property! Leave this instant!$"
