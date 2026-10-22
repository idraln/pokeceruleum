# 1 "data/maps/ChallengerRd7/scripts.pory"

# 2 "data/maps/ChallengerRd7/scripts.pory"
ChallengerRd7_MapScripts::
# 3 "data/maps/ChallengerRd7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ChallengerRd7_OnLoad
# 4 "data/maps/ChallengerRd7/scripts.pory"
	.byte 0

ChallengerRd7_OnLoad::
# 8 "data/maps/ChallengerRd7/scripts.pory"
	setflashlevel 2
	return


ChallengerRd7_Xenia::
# 12 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_7, Xenia1, Xenia2
# 13 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Xenia_Text_0
# 14 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Marko::
# 29 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_8, Marko1, Marko2
# 30 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Marko_Text_0
# 31 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Hakim::
# 46 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_9, Hakim1, Hakim2
# 47 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Hakim_Text_0
# 48 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Maya::
# 63 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_10, Maya1, Maya2
# 64 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Maya_Text_0
# 65 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Vlad::
# 80 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_11, Vlad1, Vlad2
# 81 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Vlad_Text_0
# 82 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Renee::
# 97 "data/maps/ChallengerRd7/scripts.pory"
	trainerbattle_single TRAINER_CHALL_12, Renee1, Renee2
# 98 "data/maps/ChallengerRd7/scripts.pory"
	msgbox ChallengerRd7_Renee_Text_0
# 99 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Item::
# 114 "data/maps/ChallengerRd7/scripts.pory"
	lock
# 115 "data/maps/ChallengerRd7/scripts.pory"
	removeobject 7
# 116 "data/maps/ChallengerRd7/scripts.pory"
	giveitem ITEM_TM35
# 117 "data/maps/ChallengerRd7/scripts.pory"
	setflag FLAG_ITEM_CHALL_10
# 118 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Item2::
# 123 "data/maps/ChallengerRd7/scripts.pory"
	lock
# 124 "data/maps/ChallengerRd7/scripts.pory"
	removeobject 8
# 125 "data/maps/ChallengerRd7/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 126 "data/maps/ChallengerRd7/scripts.pory"
	setflag FLAG_ITEM_CHALL_11
# 127 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Item3::
# 132 "data/maps/ChallengerRd7/scripts.pory"
	lock
# 133 "data/maps/ChallengerRd7/scripts.pory"
	removeobject 9
# 134 "data/maps/ChallengerRd7/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 135 "data/maps/ChallengerRd7/scripts.pory"
	setflag FLAG_ITEM_CHALL_12
# 136 "data/maps/ChallengerRd7/scripts.pory"
	release
	end


ChallengerRd7_Xenia_Text_0:
# 13 "data/maps/ChallengerRd7/scripts.pory"
	.string "My head hurts! It means I'm dehydrated!\n"
	.string "But I can't leave without achieving my\l"
	.string "goal!$"

ChallengerRd7_Marko_Text_0:
# 30 "data/maps/ChallengerRd7/scripts.pory"
	.string "Go away, I have no more desire to speak\n"
	.string "to you.$"

ChallengerRd7_Hakim_Text_0:
# 47 "data/maps/ChallengerRd7/scripts.pory"
	.string "How is a place filled with lava that\n"
	.string "dark? I can't see anything!$"

ChallengerRd7_Maya_Text_0:
# 64 "data/maps/ChallengerRd7/scripts.pory"
	.string "I haven't walked for long, yet I'm\n"
	.string "exhausted. I'm also parched...$"

ChallengerRd7_Vlad_Text_0:
# 81 "data/maps/ChallengerRd7/scripts.pory"
	.string "I've had enough, I wanna go back home!$"

ChallengerRd7_Renee_Text_0:
# 98 "data/maps/ChallengerRd7/scripts.pory"
	.string "I'm sorry, I shouldn't have provoked\n"
	.string "you. But dude, have some sympathy!$"

Xenia1::
# 18 "data/maps/ChallengerRd7/scripts.pory"
	.string "It's too damn hot in here, and I dropped\n"
	.string "my water bottle in the lava!$"

Xenia2::
# 22 "data/maps/ChallengerRd7/scripts.pory"
	.string "How am I gonna get it back?$"

Marko1::
# 35 "data/maps/ChallengerRd7/scripts.pory"
	.string "This place is heaven on earth.$"

Marko2::
# 39 "data/maps/ChallengerRd7/scripts.pory"
	.string "Why would you spoil my happiness?$"

Hakim1::
# 52 "data/maps/ChallengerRd7/scripts.pory"
	.string "I'm lost, help me!$"

Hakim2::
# 56 "data/maps/ChallengerRd7/scripts.pory"
	.string "That doesn't help me!$"

Maya1::
# 69 "data/maps/ChallengerRd7/scripts.pory"
	.string "Let's take a break together!$"

Maya2::
# 73 "data/maps/ChallengerRd7/scripts.pory"
	.string "Feeling rested yet?$"

Vlad1::
# 86 "data/maps/ChallengerRd7/scripts.pory"
	.string "Is this it? Is this the end of the cave?$"

Vlad2::
# 90 "data/maps/ChallengerRd7/scripts.pory"
	.string "Oh, so I took the wrong path.$"

Renee1::
# 103 "data/maps/ChallengerRd7/scripts.pory"
	.string "This is the exit! I can feel it! And\n"
	.string "you're not going through!$"

Renee2::
# 107 "data/maps/ChallengerRd7/scripts.pory"
	.string "No! Because of you, I'll have to do it all\n"
	.string "over again!$"
