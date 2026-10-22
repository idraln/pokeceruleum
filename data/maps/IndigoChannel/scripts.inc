# 1 "data/maps/IndigoChannel/scripts.pory"

# 2 "data/maps/IndigoChannel/scripts.pory"
IndigoChannel_MapScripts::
# 3 "data/maps/IndigoChannel/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoChannel_OnFrame
# 4 "data/maps/IndigoChannel/scripts.pory"
	.byte 0
# 5 "data/maps/IndigoChannel/scripts.pory"

# 6 "data/maps/IndigoChannel/scripts.pory"
IndigoChannel_OnFrame:
# 7 "data/maps/IndigoChannel/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 35, IndigoChannel_Earthquake
# 8 "data/maps/IndigoChannel/scripts.pory"
    .2byte 0

IndigoChannel_Earthquake::
# 12 "data/maps/IndigoChannel/scripts.pory"
	lockall
# 13 "data/maps/IndigoChannel/scripts.pory"
	delay 40
# 15 "data/maps/IndigoChannel/scripts.pory"
	playse SE_PIN
# 23 "data/maps/IndigoChannel/scripts.pory"
	faceplayer
# 24 "data/maps/IndigoChannel/scripts.pory"
	pokenavcall IndigoCall
# 25 "data/maps/IndigoChannel/scripts.pory"
	waitmessage
# 26 "data/maps/IndigoChannel/scripts.pory"
	setvar VAR_MAIN_STORY, 36
# 27 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_VIKKIE_IRONAIR
# 28 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_TEAM_IRONAIR
# 29 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_PERSIAN_IRONAIR
# 30 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_DAVE_IRONAIR
# 31 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_XATU_IRONAIR
# 32 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_XATU_CORRUPTED_IRONAIR
# 33 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_DIANCIE
# 34 "data/maps/IndigoChannel/scripts.pory"
	releaseall
	end


IndigoChannel_ScreenShake::
# 39 "data/maps/IndigoChannel/scripts.pory"
	delay 10
# 40 "data/maps/IndigoChannel/scripts.pory"
	setvar VAR_0x8004, 5
# 41 "data/maps/IndigoChannel/scripts.pory"
	setvar VAR_0x8005, 10
# 42 "data/maps/IndigoChannel/scripts.pory"
	setvar VAR_0x8006, 10
# 43 "data/maps/IndigoChannel/scripts.pory"
	setvar VAR_0x8007, 5
# 44 "data/maps/IndigoChannel/scripts.pory"
	special ShakeCamera
# 45 "data/maps/IndigoChannel/scripts.pory"
	waitstate
# 46 "data/maps/IndigoChannel/scripts.pory"
	delay 10
	return


IndigoChannel_Flavio::
# 62 "data/maps/IndigoChannel/scripts.pory"
	trainerbattle_single TRAINER_INDIGO_1, Flavio1, Flavio2
# 63 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Flavio_Text_0
# 64 "data/maps/IndigoChannel/scripts.pory"
	closemessage
	end


IndigoChannel_Gianluca::
# 79 "data/maps/IndigoChannel/scripts.pory"
	trainerbattle_single TRAINER_INDIGO_2, Gianluca1, Gianluca2
# 80 "data/maps/IndigoChannel/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq IndigoChannel_Gianluca_2
# 84 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Gianluca_Text_1
IndigoChannel_Gianluca_1:
# 86 "data/maps/IndigoChannel/scripts.pory"
	closemessage
	end

IndigoChannel_Gianluca_2:
# 81 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Gianluca_Text_0
	goto IndigoChannel_Gianluca_1


IndigoChannel_Polo::
# 101 "data/maps/IndigoChannel/scripts.pory"
	trainerbattle_single TRAINER_INDIGO_3, Polo1, Polo2
# 102 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Polo_Text_0
# 103 "data/maps/IndigoChannel/scripts.pory"
	closemessage
	end


IndigoChannel_Beauty::
# 118 "data/maps/IndigoChannel/scripts.pory"
	lock
# 119 "data/maps/IndigoChannel/scripts.pory"
	faceplayer
# 120 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Beauty_Text_0
# 121 "data/maps/IndigoChannel/scripts.pory"
	release
	end


IndigoChannel_Swimmer1::
# 126 "data/maps/IndigoChannel/scripts.pory"
	lock
# 127 "data/maps/IndigoChannel/scripts.pory"
	faceplayer
# 128 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Swimmer1_Text_0
# 129 "data/maps/IndigoChannel/scripts.pory"
	release
	end


IndigoChannel_Swimmer2::
# 134 "data/maps/IndigoChannel/scripts.pory"
	lock
# 135 "data/maps/IndigoChannel/scripts.pory"
	faceplayer
# 136 "data/maps/IndigoChannel/scripts.pory"
	msgbox IndigoChannel_Swimmer2_Text_0
# 137 "data/maps/IndigoChannel/scripts.pory"
	release
	end


IndigoChannel_TM::
# 142 "data/maps/IndigoChannel/scripts.pory"
	lock
# 143 "data/maps/IndigoChannel/scripts.pory"
	removeobject 7
# 144 "data/maps/IndigoChannel/scripts.pory"
	setflag FLAG_INDIGO_TM
# 145 "data/maps/IndigoChannel/scripts.pory"
	giveitem ITEM_TM22
# 146 "data/maps/IndigoChannel/scripts.pory"
	release
	end


IndigoChannel_Flavio_Text_0:
# 63 "data/maps/IndigoChannel/scripts.pory"
	.string "You don't need to lift weights to get\n"
	.string "ripped. Just swim!$"

IndigoChannel_Gianluca_Text_0:
# 81 "data/maps/IndigoChannel/scripts.pory"
	.string "Fishes are back in the ocean? I don't\n"
	.string "care! I've found another hobby, being a\l"
	.string "trainer!$"

IndigoChannel_Gianluca_Text_1:
# 84 "data/maps/IndigoChannel/scripts.pory"
	.string "Since I can't catch fish anymore, I\n"
	.string "catch trainers.$"

IndigoChannel_Polo_Text_0:
# 102 "data/maps/IndigoChannel/scripts.pory"
	.string "My boat just sank before my very eyes!\n"
	.string "What am I gonna do?$"

IndigoChannel_Beauty_Text_0:
# 120 "data/maps/IndigoChannel/scripts.pory"
	.string "Isn't this cove stunning? It's small but\n"
	.string "it's all you need!$"

IndigoChannel_Swimmer1_Text_0:
# 128 "data/maps/IndigoChannel/scripts.pory"
	.string "The water seems deeper in here. Should\n"
	.string "I dive? Will I be able to go back to the\l"
	.string "surface? Nevermind, it's a bad idea.$"

IndigoChannel_Swimmer2_Text_0:
# 136 "data/maps/IndigoChannel/scripts.pory"
	.string "Huff... Huff... I did it! I dived all the\n"
	.string "way from there to here! It only took me\l"
	.string "2 minutes!$"

IndigoCall::
# 49 "data/maps/IndigoChannel/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Bruce: {PLAYER}!!\p"
	.string "… … … … … …\p"
	.string "COME TO THE IRONAIR!!\n"
	.string "QUICK!!\p"
	.string "… … … … … …\p"
	.string "SOMEONE BROKE THE SEAL,\n"
	.string "DIANCIE'S IN GREAT DANGER!\l"
	.string "… … … … … …\n… … … … … Click!$"

Flavio1::
# 68 "data/maps/IndigoChannel/scripts.pory"
	.string "I'm swimming against the currents! Join\n"
	.string "me!$"

Flavio2::
# 72 "data/maps/IndigoChannel/scripts.pory"
	.string "Alright, good session everyone.$"

Gianluca1::
# 90 "data/maps/IndigoChannel/scripts.pory"
	.string "Ho ho! Look at what I've caught!$"

Gianluca2::
# 94 "data/maps/IndigoChannel/scripts.pory"
	.string "Fine, I'll let you go.$"

Polo1::
# 107 "data/maps/IndigoChannel/scripts.pory"
	.string "I'm stranded! I messed up real bad!$"

Polo2::
# 111 "data/maps/IndigoChannel/scripts.pory"
	.string "Great! And what now?$"
