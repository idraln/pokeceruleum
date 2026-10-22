# 1 "data/maps/Vikkelson_DanceHall/scripts.pory"

# 2 "data/maps/Vikkelson_DanceHall/scripts.pory"
Vikkelson_DanceHall_MapScripts::
# 3 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.byte 0

Vikkelson_DanceHall_Owner::
# 7 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 8 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 9 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Owner_Text_0
# 10 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Woman1_Table1::
# 15 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 16 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 17 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Woman1_Table1_Text_0
# 18 "data/maps/Vikkelson_DanceHall/scripts.pory"
	turnobject 5, DIR_EAST
# 19 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Woman2_Table1::
# 24 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 25 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Woman2_Table1_Text_0
# 26 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_TM::
# 31 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 32 "data/maps/Vikkelson_DanceHall/scripts.pory"
	removeobject 10
# 33 "data/maps/Vikkelson_DanceHall/scripts.pory"
	setflag FLAG_ITEM_DANCEHALL
# 34 "data/maps/Vikkelson_DanceHall/scripts.pory"
	giveitem ITEM_TM01
# 35 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Woman_Table2::
# 40 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 41 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 42 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Woman_Table2_Text_0
# 43 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Man_Table2::
# 48 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 49 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 50 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Man_Table2_Text_0
# 51 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Man_Table2_Text_1
# 52 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Man_Table2_Text_2
# 53 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Old::
# 58 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 59 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Old_Text_0
# 60 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_BoyDancing::
# 65 "data/maps/Vikkelson_DanceHall/scripts.pory"
	compare VAR_LOST_BOY_2, 0
	goto_if_eq Vikkelson_DanceHall_BoyDancing_1
# 72 "data/maps/Vikkelson_DanceHall/scripts.pory"
	compare VAR_LOST_BOY_2, 1
	goto_if_eq Vikkelson_DanceHall_BoyDancing_2
# 83 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 84 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 85 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_BoyDancing_Text_2
# 86 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end

Vikkelson_DanceHall_BoyDancing_1:
# 66 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 67 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 68 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_BoyDancing_Text_0
# 69 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end

Vikkelson_DanceHall_BoyDancing_2:
# 73 "data/maps/Vikkelson_DanceHall/scripts.pory"
	lock
# 74 "data/maps/Vikkelson_DanceHall/scripts.pory"
	faceplayer
# 75 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_BoyDancing_Text_0
# 76 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_Man_Table2_Text_1
# 77 "data/maps/Vikkelson_DanceHall/scripts.pory"
	msgbox Vikkelson_DanceHall_BoyDancing_Text_1
# 78 "data/maps/Vikkelson_DanceHall/scripts.pory"
	setvar VAR_LOST_BOY_2, 2
# 79 "data/maps/Vikkelson_DanceHall/scripts.pory"
	release
	end


Vikkelson_DanceHall_Owner_Text_0:
# 9 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Welcome to Vikkelson's Nightclub,\n"
	.string "generously funded by Miss Vikkie\l"
	.string "herself! The entry is free, so sit down,\l"
	.string "relax and enjoy some sick beats by our\l"
	.string "DJ, G-EZ.$"

Vikkelson_DanceHall_Woman1_Table1_Text_0:
# 17 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Are you the waiter? I need a drink! I\n"
	.string "need it NOW! Me, now!$"

Vikkelson_DanceHall_Woman2_Table1_Text_0:
# 25 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "...Shush! Everyone's looking at us!$"

Vikkelson_DanceHall_Woman_Table2_Text_0:
# 42 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Hah, look at that weirdo, spazzing\n"
	.string "around all sweaty. I get that the music\l"
	.string "is good, but that much?$"

Vikkelson_DanceHall_Man_Table2_Text_0:
# 50 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Excuse me, where are our drinks? We\n"
	.string "ordered them like an hour ago.$"

Vikkelson_DanceHall_Man_Table2_Text_1:
# 51 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "...$"

Vikkelson_DanceHall_Man_Table2_Text_2:
# 52 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Oh you don't work here? Sorry.$"

Vikkelson_DanceHall_Old_Text_0:
# 59 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "...Come on, last coin. I'm so close to the\n"
	.string "jackpot.$"

Vikkelson_DanceHall_BoyDancing_Text_0:
# 68 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Oh yeah! Sick beats, man!$"

Vikkelson_DanceHall_BoyDancing_Text_1:
# 77 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Huh? My dad is looking for me? I'm too\n"
	.string "busy dancing my life away, I don't care.$"

Vikkelson_DanceHall_BoyDancing_Text_2:
# 85 "data/maps/Vikkelson_DanceHall/scripts.pory"
	.string "Hey! Hey! Hey! I love this song!!$"
