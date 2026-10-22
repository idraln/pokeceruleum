# 1 "data/maps/FiestaRd/scripts.pory"

# 2 "data/maps/FiestaRd/scripts.pory"
FiestaRd_MapScripts::
# 3 "data/maps/FiestaRd/scripts.pory"
	.byte 0

FiestaRd_Jacob::
# 7 "data/maps/FiestaRd/scripts.pory"
	trainerbattle_single TRAINER_FIESTA, Jacob1, Jacob2
# 8 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Jacob_Text_0
# 9 "data/maps/FiestaRd/scripts.pory"
	closemessage
	end


FiestaRd_Camper::
# 22 "data/maps/FiestaRd/scripts.pory"
	lock
# 23 "data/maps/FiestaRd/scripts.pory"
	faceplayer
# 24 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Camper_Text_0
# 25 "data/maps/FiestaRd/scripts.pory"
	release
	end


FiestaRd_Fast::
# 30 "data/maps/FiestaRd/scripts.pory"
	lock
# 31 "data/maps/FiestaRd/scripts.pory"
	faceplayer
# 32 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Fast_Text_0
# 33 "data/maps/FiestaRd/scripts.pory"
	release
	end


FiestaRd_Sick::
# 38 "data/maps/FiestaRd/scripts.pory"
	lock
# 39 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Sick_Text_0
# 40 "data/maps/FiestaRd/scripts.pory"
	release
	end


FiestaRd_Boyfriend::
# 45 "data/maps/FiestaRd/scripts.pory"
	lock
# 46 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Boyfriend_Text_0
# 47 "data/maps/FiestaRd/scripts.pory"
	release
	end


FiestaRd_Girlfriend::
# 52 "data/maps/FiestaRd/scripts.pory"
	lock
# 53 "data/maps/FiestaRd/scripts.pory"
	msgbox FiestaRd_Girlfriend_Text_0
# 54 "data/maps/FiestaRd/scripts.pory"
	release
	end


FiestaRd_Jacob_Text_0:
# 8 "data/maps/FiestaRd/scripts.pory"
	.string "I don't understand, why does it only\n"
	.string "have 1 HP? Is it broken?$"

FiestaRd_Camper_Text_0:
# 24 "data/maps/FiestaRd/scripts.pory"
	.string "Damn partygoers. Look at that mess!\n"
	.string "Confetti all the way through the road!\l"
	.string "What about the Pokémon? They can\l"
	.string "mistake it for food and choke on it!$"

FiestaRd_Fast_Text_0:
# 32 "data/maps/FiestaRd/scripts.pory"
	.string "Dude, I drank something weird-tasting\n"
	.string "and I can't feel my legs. What is going\l"
	.string "on?$"

FiestaRd_Sick_Text_0:
# 39 "data/maps/FiestaRd/scripts.pory"
	.string "Oof... Back up, I'm not finished throwing\n"
	.string "up...$"

FiestaRd_Boyfriend_Text_0:
# 46 "data/maps/FiestaRd/scripts.pory"
	.string "Babe, I swear I wasn't looking at her! I\n"
	.string "just happened to look in that direction\l"
	.string "when she walked through! Believe me!$"

FiestaRd_Girlfriend_Text_0:
# 53 "data/maps/FiestaRd/scripts.pory"
	.string "I KNEW I shouldn't have trusted your\n"
	.string "ass to come here! How could you do this\l"
	.string "to me?$"

Jacob1::
# 13 "data/maps/FiestaRd/scripts.pory"
	.string "My Nincada evolved into something\n"
	.string "weird, check it out!$"

Jacob2::
# 17 "data/maps/FiestaRd/scripts.pory"
	.string "WHAT? How??$"
