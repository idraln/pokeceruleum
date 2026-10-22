# 1 "data/maps/Rocheval_Motel/scripts.pory"

# 2 "data/maps/Rocheval_Motel/scripts.pory"
Rocheval_Motel_MapScripts::
# 3 "data/maps/Rocheval_Motel/scripts.pory"
	.byte 0

Rocheval_Motel_Owner::
# 7 "data/maps/Rocheval_Motel/scripts.pory"
	lock
# 8 "data/maps/Rocheval_Motel/scripts.pory"
	faceplayer
# 9 "data/maps/Rocheval_Motel/scripts.pory"
	msgbox Rocheval_Motel_Owner_Text_0
# 10 "data/maps/Rocheval_Motel/scripts.pory"
	release
	end


Rocheval_Motel_Tourist1::
# 15 "data/maps/Rocheval_Motel/scripts.pory"
	lock
# 16 "data/maps/Rocheval_Motel/scripts.pory"
	faceplayer
# 17 "data/maps/Rocheval_Motel/scripts.pory"
	msgbox Rocheval_Motel_Tourist1_Text_0
# 18 "data/maps/Rocheval_Motel/scripts.pory"
	release
	end


Rocheval_Motel_Tourist2::
# 23 "data/maps/Rocheval_Motel/scripts.pory"
	lock
# 24 "data/maps/Rocheval_Motel/scripts.pory"
	playse SE_PIN
# 25 "data/maps/Rocheval_Motel/scripts.pory"
	applymovement 1, RochevalAngryTourist
# 26 "data/maps/Rocheval_Motel/scripts.pory"
	waitmovement 0
# 27 "data/maps/Rocheval_Motel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RochevalMotelFace
# 28 "data/maps/Rocheval_Motel/scripts.pory"
	waitmovement 0
# 29 "data/maps/Rocheval_Motel/scripts.pory"
	msgbox Rocheval_Motel_Tourist2_Text_0
# 30 "data/maps/Rocheval_Motel/scripts.pory"
	closemessage
# 31 "data/maps/Rocheval_Motel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RochevalMotelLeaving
# 32 "data/maps/Rocheval_Motel/scripts.pory"
	applymovement 1, RochevalAngryTourist2
# 33 "data/maps/Rocheval_Motel/scripts.pory"
	waitmovement 0
# 34 "data/maps/Rocheval_Motel/scripts.pory"
	release
	end


# 38 "data/maps/Rocheval_Motel/scripts.pory"
RochevalAngryTourist:
# 39 "data/maps/Rocheval_Motel/scripts.pory"
	emote_exclamation_mark
# 40 "data/maps/Rocheval_Motel/scripts.pory"
	delay_16
# 40 "data/maps/Rocheval_Motel/scripts.pory"
	delay_16
# 41 "data/maps/Rocheval_Motel/scripts.pory"
	walk_left
# 42 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 42 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 42 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 42 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 43 "data/maps/Rocheval_Motel/scripts.pory"
	walk_left
	step_end

# 46 "data/maps/Rocheval_Motel/scripts.pory"
RochevalAngryTourist2:
# 47 "data/maps/Rocheval_Motel/scripts.pory"
	walk_right
# 48 "data/maps/Rocheval_Motel/scripts.pory"
	walk_up
# 48 "data/maps/Rocheval_Motel/scripts.pory"
	walk_up
# 48 "data/maps/Rocheval_Motel/scripts.pory"
	walk_up
# 48 "data/maps/Rocheval_Motel/scripts.pory"
	walk_up
# 49 "data/maps/Rocheval_Motel/scripts.pory"
	walk_right
# 50 "data/maps/Rocheval_Motel/scripts.pory"
	face_up
	step_end

# 53 "data/maps/Rocheval_Motel/scripts.pory"
RochevalMotelLeaving:
# 54 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 54 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 54 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
# 54 "data/maps/Rocheval_Motel/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/Rocheval_Motel/scripts.pory"
RochevalMotelFace:
# 58 "data/maps/Rocheval_Motel/scripts.pory"
	face_right
	step_end

Rocheval_Motel_Owner_Text_0:
# 9 "data/maps/Rocheval_Motel/scripts.pory"
	.string "Hi, welcome to Rocheval's own motel! How\n"
	.string "are you? Unfortunately, I don't have\l"
	.string "any rooms left. Come again!$"

Rocheval_Motel_Tourist1_Text_0:
# 17 "data/maps/Rocheval_Motel/scripts.pory"
	.string "...Wow. This painting... I've been staring\n"
	.string "at it for 2 hours now. It means\l"
	.string "everything to me right now.$"

Rocheval_Motel_Tourist2_Text_0:
# 29 "data/maps/Rocheval_Motel/scripts.pory"
	.string "Excuse me? Can't you see the room is\n"
	.string "occupied? Those are bad manners, bro.\l"
	.string "Not cool. Now go.$"
