# 1 "data/maps/NavyChannel/scripts.pory"

# 2 "data/maps/NavyChannel/scripts.pory"
NavyChannel_MapScripts::
# 3 "data/maps/NavyChannel/scripts.pory"
	.byte 0

NavyChannel_Sheila::
# 7 "data/maps/NavyChannel/scripts.pory"
	trainerbattle_single TRAINER_NAVY_1, Sheila1, Sheila2
# 8 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_Sheila_Text_0
# 9 "data/maps/NavyChannel/scripts.pory"
	closemessage
	end


NavyChannel_Pedro::
# 24 "data/maps/NavyChannel/scripts.pory"
	trainerbattle_single TRAINER_NAVY_2, Pedro1, Pedro2
# 25 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_Pedro_Text_0
# 26 "data/maps/NavyChannel/scripts.pory"
	closemessage
# 27 "data/maps/NavyChannel/scripts.pory"
	turnobject 2, DIR_SOUTH
	end


NavyChannel_Richie::
# 42 "data/maps/NavyChannel/scripts.pory"
	trainerbattle_single TRAINER_NAVY_3, Richie1, Richie2
# 43 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_Richie_Text_0
# 44 "data/maps/NavyChannel/scripts.pory"
	closemessage
	end


NavyChannel_Carmen::
# 59 "data/maps/NavyChannel/scripts.pory"
	trainerbattle_single TRAINER_NAVY_4, Carmen1, Carmen2
# 60 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_Carmen_Text_0
# 61 "data/maps/NavyChannel/scripts.pory"
	closemessage
	end


NavyChannel_Dan::
# 76 "data/maps/NavyChannel/scripts.pory"
	trainerbattle_single TRAINER_NAVY_5, Dan1, Dan2
# 77 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_Dan_Text_0
# 78 "data/maps/NavyChannel/scripts.pory"
	closemessage
	end


NavyChannel_SchoolBoy::
# 93 "data/maps/NavyChannel/scripts.pory"
	lock
# 94 "data/maps/NavyChannel/scripts.pory"
	faceplayer
# 95 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_SchoolBoy_Text_0
# 96 "data/maps/NavyChannel/scripts.pory"
	release
	end


NavyChannel_SwimmerF::
# 101 "data/maps/NavyChannel/scripts.pory"
	lock
# 102 "data/maps/NavyChannel/scripts.pory"
	faceplayer
# 103 "data/maps/NavyChannel/scripts.pory"
	msgbox NavyChannel_SwimmerF_Text_0
# 104 "data/maps/NavyChannel/scripts.pory"
	release
	end


NavyChannel_Item1::
# 109 "data/maps/NavyChannel/scripts.pory"
	lock
# 110 "data/maps/NavyChannel/scripts.pory"
	removeobject 8
# 111 "data/maps/NavyChannel/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 112 "data/maps/NavyChannel/scripts.pory"
	setflag FLAG_ITEM_NAVY_1
# 113 "data/maps/NavyChannel/scripts.pory"
	release
	end


NavyChannel_Item2::
# 118 "data/maps/NavyChannel/scripts.pory"
	lock
# 119 "data/maps/NavyChannel/scripts.pory"
	removeobject 9
# 120 "data/maps/NavyChannel/scripts.pory"
	giveitem ITEM_BLUE_FLUTE
# 121 "data/maps/NavyChannel/scripts.pory"
	setflag FLAG_ITEM_NAVY_2
# 122 "data/maps/NavyChannel/scripts.pory"
	release
	end


NavyChannel_Sheila_Text_0:
# 8 "data/maps/NavyChannel/scripts.pory"
	.string "Don't you see? The next island is only a\n"
	.string "few steps from here! Or should I say, a\l"
	.string "few swims. Hah!$"

NavyChannel_Pedro_Text_0:
# 25 "data/maps/NavyChannel/scripts.pory"
	.string "...Hmmm.$"

NavyChannel_Richie_Text_0:
# 43 "data/maps/NavyChannel/scripts.pory"
	.string "Sometimes, it's better to let go and let\n"
	.string "the waves carry you.$"

NavyChannel_Carmen_Text_0:
# 60 "data/maps/NavyChannel/scripts.pory"
	.string "I've finally found the perfect isolated\n"
	.string "plot of land in the middle of the sea\l"
	.string "and I wish to keep it as lonely as\l"
	.string "possible!$"

NavyChannel_Dan_Text_0:
# 77 "data/maps/NavyChannel/scripts.pory"
	.string "There are some weird people in Glorray.\n"
	.string "I tried to go there and I almost got\l"
	.string "abducted.$"

NavyChannel_SchoolBoy_Text_0:
# 95 "data/maps/NavyChannel/scripts.pory"
	.string "Hehe, if I don't get a perfect score in\n"
	.string "my class with this species of algae I\l"
	.string "just found...$"

NavyChannel_SwimmerF_Text_0:
# 103 "data/maps/NavyChannel/scripts.pory"
	.string "If I swim fast enough in circles, I'll be\n"
	.string "able to create a whirlpool. Why? Hah,\l"
	.string "you wouldn't understand.$"

Sheila1::
# 13 "data/maps/NavyChannel/scripts.pory"
	.string "Watch out! You're entering deep waters\n"
	.string "now!$"

Sheila2::
# 17 "data/maps/NavyChannel/scripts.pory"
	.string "I'm messing with you. It's just another\n"
	.string "channel.$"

Pedro1::
# 31 "data/maps/NavyChannel/scripts.pory"
	.string "...Hmmm? What?$"

Pedro2::
# 35 "data/maps/NavyChannel/scripts.pory"
	.string "Can you leave me to it now?$"

Richie1::
# 48 "data/maps/NavyChannel/scripts.pory"
	.string "I don't wanna go to Cali! But I need to\n"
	.string "rest! What am I gonna do?$"

Richie2::
# 52 "data/maps/NavyChannel/scripts.pory"
	.string "You're right, I should do that!$"

Carmen1::
# 65 "data/maps/NavyChannel/scripts.pory"
	.string "No! Do not stay here, leave!$"

Carmen2::
# 69 "data/maps/NavyChannel/scripts.pory"
	.string "Good job! Will you leave now?$"

Dan1::
# 82 "data/maps/NavyChannel/scripts.pory"
	.string "Are you trying to go to Glorray? I would\n"
	.string "advise you to go back to where you came\l"
	.string "from. It's no good.$"

Dan2::
# 86 "data/maps/NavyChannel/scripts.pory"
	.string "Dude, I warned you!$"
