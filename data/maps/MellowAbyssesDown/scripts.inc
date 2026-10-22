# 1 "data/maps/MellowAbyssesDown/scripts.pory"

# 2 "data/maps/MellowAbyssesDown/scripts.pory"
MellowAbyssesDown_MapScripts::
# 3 "data/maps/MellowAbyssesDown/scripts.pory"
	.byte 0

MellowAbysses_DiverNPC4::
# 7 "data/maps/MellowAbyssesDown/scripts.pory"
	lock
# 8 "data/maps/MellowAbyssesDown/scripts.pory"
	faceplayer
# 9 "data/maps/MellowAbyssesDown/scripts.pory"
	msgbox MellowAbysses_DiverNPC4_Text_0
# 10 "data/maps/MellowAbyssesDown/scripts.pory"
	release
	end


MellowAbysses_Diver4::
# 15 "data/maps/MellowAbyssesDown/scripts.pory"
	trainerbattle_single TRAINER_ABYSS_4, Diver4_1, Diver4_2
# 16 "data/maps/MellowAbyssesDown/scripts.pory"
	msgbox MellowAbysses_Diver4_Text_0
# 17 "data/maps/MellowAbyssesDown/scripts.pory"
	closemessage
	end


MellowAbysses_DiverNPC5::
# 32 "data/maps/MellowAbyssesDown/scripts.pory"
	lock
# 33 "data/maps/MellowAbyssesDown/scripts.pory"
	faceplayer
# 34 "data/maps/MellowAbyssesDown/scripts.pory"
	msgbox MellowAbysses_DiverNPC5_Text_0
# 35 "data/maps/MellowAbyssesDown/scripts.pory"
	release
	end


MellowAbysses_Diver5::
# 40 "data/maps/MellowAbyssesDown/scripts.pory"
	trainerbattle_single TRAINER_ABYSS_5, Diver5_1, Diver5_2
# 41 "data/maps/MellowAbyssesDown/scripts.pory"
	msgbox MellowAbysses_Diver5_Text_0
# 42 "data/maps/MellowAbyssesDown/scripts.pory"
	closemessage
	end


MellowAbysses_DiverNPC4_Text_0:
# 9 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "I'm on the MEF project... And it's\n"
	.string "proabably the most complicated subject\l"
	.string "I've ever worked on. And I've been a\l"
	.string "biologist for 20 years...$"

MellowAbysses_Diver4_Text_0:
# 16 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "We still haven't figured out why almost\n"
	.string "every fish in the ocean decided to die.\l"
	.string "But we think it must have something to\l"
	.string "do with pollution and mass fishing.$"

MellowAbysses_DiverNPC5_Text_0:
# 34 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "What you see here is like a lagoon, but\n"
	.string "underwater! Gorgeous, isn't it?$"

MellowAbysses_Diver5_Text_0:
# 41 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "In our base, we study marine biology.\n"
	.string "Not only do we learn about the flora and\l"
	.string "fauna of the ocean, but we also answer\l"
	.string "some climate issues that are becoming\l"
	.string "more and more important.$"

Diver4_1::
# 21 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "Don't panic, you're almost back to the\n"
	.string "surface!$"

Diver4_2::
# 25 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "I see, you're totally relaxed!$"

Diver5_1::
# 46 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "I'm starting to think that I took the\n"
	.string "wrong way to the base...$"

Diver5_2::
# 50 "data/maps/MellowAbyssesDown/scripts.pory"
	.string "Dammit, I knew I was lost!$"
