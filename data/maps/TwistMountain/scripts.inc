# 1 "data/maps/TwistMountain/scripts.pory"

# 2 "data/maps/TwistMountain/scripts.pory"
TwistMountain_MapScripts::
# 3 "data/maps/TwistMountain/scripts.pory"
	.byte 0

TwistMountain_Triathlete::
# 7 "data/maps/TwistMountain/scripts.pory"
	lock
# 8 "data/maps/TwistMountain/scripts.pory"
	faceplayer
# 9 "data/maps/TwistMountain/scripts.pory"
	msgbox TwistMountain_Triathlete_Text_0
# 10 "data/maps/TwistMountain/scripts.pory"
	release
	end


TwistMountain_Worker::
# 15 "data/maps/TwistMountain/scripts.pory"
	lock
# 16 "data/maps/TwistMountain/scripts.pory"
	faceplayer
# 17 "data/maps/TwistMountain/scripts.pory"
	msgbox TwistMountain_Worker_Text_0
# 18 "data/maps/TwistMountain/scripts.pory"
	release
	end


TwistMountain_Bob::
# 23 "data/maps/TwistMountain/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_7, Bob1, Bob2
# 24 "data/maps/TwistMountain/scripts.pory"
	msgbox TwistMountain_Bob_Text_0
# 25 "data/maps/TwistMountain/scripts.pory"
	closemessage
	end


TwistMountain_Triathlete_Text_0:
# 9 "data/maps/TwistMountain/scripts.pory"
	.string "Twist Mountain is closed? How am I\n"
	.string "supposed to train for Thura's\l"
	.string "Triathlon?$"

TwistMountain_Worker_Text_0:
# 17 "data/maps/TwistMountain/scripts.pory"
	.string "I'm sorry lad, Twist Mountain is closed\n"
	.string "for now. Like in Chargestone Cave,\l"
	.string "something wrong happened in here.$"

TwistMountain_Bob_Text_0:
# 24 "data/maps/TwistMountain/scripts.pory"
	.string "Well, I guess I'll just go back from\n"
	.string "where I'm coming from.$"

Bob1::
# 29 "data/maps/TwistMountain/scripts.pory"
	.string "Where do you come from?$"

Bob2::
# 33 "data/maps/TwistMountain/scripts.pory"
	.string "Never heard of this place...$"
