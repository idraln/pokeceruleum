# 1 "data/maps/MistraltonCity_Airport/scripts.pory"

# 2 "data/maps/MistraltonCity_Airport/scripts.pory"
MistraltonCity_Airport_MapScripts::
# 3 "data/maps/MistraltonCity_Airport/scripts.pory"
	.byte 0

MistraltonCity_Airport_SmallInfoBoard::
# 7 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 8 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 9 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_SmallInfoBoard_Text_0
# 10 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_BigInfoBoard::
# 15 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 16 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 17 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_BigInfoBoard_Text_0
# 18 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_Attendant::
# 23 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 24 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 25 "data/maps/MistraltonCity_Airport/scripts.pory"
	checkitem ITEM_EON_TICKET
# 26 "data/maps/MistraltonCity_Airport/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MistraltonCity_Airport_Attendant_1
# 44 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Attendant_Text_3
	return

MistraltonCity_Airport_Attendant_1:
# 27 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Attendant_Text_0, MSGBOX_YESNO
# 28 "data/maps/MistraltonCity_Airport/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MistraltonCity_Airport_Attendant_4
# 40 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Attendant_Text_2
	return

MistraltonCity_Airport_Attendant_4:
# 29 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Attendant_Text_1
# 30 "data/maps/MistraltonCity_Airport/scripts.pory"
	closemessage
# 31 "data/maps/MistraltonCity_Airport/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/MistraltonCity_Airport/scripts.pory"
	playse SE_TRUCK_MOVE
# 33 "data/maps/MistraltonCity_Airport/scripts.pory"
	delay 60
# 34 "data/maps/MistraltonCity_Airport/scripts.pory"
	playse SE_TRUCK_STOP
# 35 "data/maps/MistraltonCity_Airport/scripts.pory"
	setrespawn HEAL_LOCATION_SAPPHIRE_CITY
# 36 "data/maps/MistraltonCity_Airport/scripts.pory"
	clearflag FLAG_CANT_FLY
# 37 "data/maps/MistraltonCity_Airport/scripts.pory"
	warpsilent MAP_SAPPHIRE_CITY_AIRPORT, 3, 10
	return


MistraltonCity_Airport_Man::
# 49 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 50 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 51 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Man_Text_0
# 52 "data/maps/MistraltonCity_Airport/scripts.pory"
	closemessage
# 53 "data/maps/MistraltonCity_Airport/scripts.pory"
	turnobject 4, DIR_NORTH
# 54 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_Girl::
# 59 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 60 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 61 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Girl_Text_0
# 62 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_Boy::
# 67 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 68 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 69 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Boy_Text_0
# 70 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_Old::
# 75 "data/maps/MistraltonCity_Airport/scripts.pory"
	lock
# 76 "data/maps/MistraltonCity_Airport/scripts.pory"
	faceplayer
# 77 "data/maps/MistraltonCity_Airport/scripts.pory"
	msgbox MistraltonCity_Airport_Old_Text_0
# 78 "data/maps/MistraltonCity_Airport/scripts.pory"
	closemessage
# 79 "data/maps/MistraltonCity_Airport/scripts.pory"
	turnobject 3, DIR_NORTH
# 80 "data/maps/MistraltonCity_Airport/scripts.pory"
	release
	end


MistraltonCity_Airport_SmallInfoBoard_Text_0:
# 9 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Welcome to Mistralton City! Enjoy our\n"
	.string "fresh vegetables and fresh air!$"

MistraltonCity_Airport_BigInfoBoard_Text_0:
# 17 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Next departure: Sapphire City, Thura.$"

MistraltonCity_Airport_Attendant_Text_0:
# 27 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Hi! Would you like to embark to Sapphire\n"
	.string "City?$"

MistraltonCity_Airport_Attendant_Text_1:
# 29 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Very well then, right this way!$"

MistraltonCity_Airport_Attendant_Text_2:
# 40 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Very well, then! Come back later!$"

MistraltonCity_Airport_Attendant_Text_3:
# 44 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "Hi, welcome to Mistralton City! We hope\n"
	.string "you have a great time in Unova!$"

MistraltonCity_Airport_Man_Text_0:
# 51 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "I messed up my commute! I was supposed\n"
	.string "to land in Kalos, not in here!$"

MistraltonCity_Airport_Girl_Text_0:
# 61 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "You can already smell the fresh air! And\n"
	.string "we're still inside!$"

MistraltonCity_Airport_Boy_Text_0:
# 69 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "I need those airplane models! I need\n"
	.string "them!$"

MistraltonCity_Airport_Old_Text_0:
# 77 "data/maps/MistraltonCity_Airport/scripts.pory"
	.string "You can see how big Twist Mountain is\n"
	.string "from here. How beautiful...$"
