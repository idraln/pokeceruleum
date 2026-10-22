# 1 "data/maps/ThirtiethRoad/scripts.pory"

# 2 "data/maps/ThirtiethRoad/scripts.pory"
ThirtiethRoad_MapScripts::
# 3 "data/maps/ThirtiethRoad/scripts.pory"
	.byte 0

ThirtiethRoad_Trainer1::
# 7 "data/maps/ThirtiethRoad/scripts.pory"
	trainerbattle_single TRAINER_30TH_1, Charley1, Charley2
# 8 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Trainer1_Text_0
# 9 "data/maps/ThirtiethRoad/scripts.pory"
	closemessage
	end


ThirtiethRoad_Trainer2::
# 14 "data/maps/ThirtiethRoad/scripts.pory"
	trainerbattle_single TRAINER_30TH_2, Niall1, Niall2
# 15 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Trainer2_Text_0
# 16 "data/maps/ThirtiethRoad/scripts.pory"
	closemessage
	end


ThirtiethRoad_Fisherman::
# 21 "data/maps/ThirtiethRoad/scripts.pory"
	lock
# 22 "data/maps/ThirtiethRoad/scripts.pory"
	faceplayer
# 23 "data/maps/ThirtiethRoad/scripts.pory"
	goto_if_set FLAG_30_ROD_GET, ThirtiethRoad_Fisherman_2
# 35 "data/maps/ThirtiethRoad/scripts.pory"
	goto_if_set FLAG_30_ROD, ThirtiethRoad_Fisherman_4
# 61 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_6
# 62 "data/maps/ThirtiethRoad/scripts.pory"
	turnobject 1, DIR_NORTH
# 63 "data/maps/ThirtiethRoad/scripts.pory"
	setflag FLAG_30_ROD
# 64 "data/maps/ThirtiethRoad/scripts.pory"
	startquest QUEST_FISHING_ROD
# 65 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end

ThirtiethRoad_Fisherman_2:
# 24 "data/maps/ThirtiethRoad/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq ThirtiethRoad_Fisherman_7
# 30 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_1
# 31 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end

ThirtiethRoad_Fisherman_4:
# 36 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_2, MSGBOX_YESNO
# 37 "data/maps/ThirtiethRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ThirtiethRoad_Fisherman_10
# 55 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_5
# 56 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end

ThirtiethRoad_Fisherman_7:
# 25 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_0
# 26 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end

ThirtiethRoad_Fisherman_10:
# 38 "data/maps/ThirtiethRoad/scripts.pory"
	checkitem ITEM_SITRUS_BERRY, 3
# 39 "data/maps/ThirtiethRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ThirtiethRoad_Fisherman_13
# 49 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_4
# 50 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end

ThirtiethRoad_Fisherman_13:
# 40 "data/maps/ThirtiethRoad/scripts.pory"
	msgbox ThirtiethRoad_Fisherman_Text_3
# 41 "data/maps/ThirtiethRoad/scripts.pory"
	giveitem ITEM_OLD_ROD
# 42 "data/maps/ThirtiethRoad/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 3
# 43 "data/maps/ThirtiethRoad/scripts.pory"
	completequest QUEST_FISHING_ROD
# 44 "data/maps/ThirtiethRoad/scripts.pory"
	setflag FLAG_30_ROD_GET
# 45 "data/maps/ThirtiethRoad/scripts.pory"
	release
	end


ThirtiethRoad_Trainer1_Text_0:
# 8 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Yeah, yeah, I might have overestimated\n"
	.string "myself a bit. But! I'll get there. I'll get\l"
	.string "there...$"

ThirtiethRoad_Trainer2_Text_0:
# 15 "data/maps/ThirtiethRoad/scripts.pory"
	.string "I try to hide and scare the new trainers\n"
	.string "who think they can take on the Council\l"
	.string "Challenge. But you're already the fifth\l"
	.string "person to tell me that I'm not good at\l"
	.string "hiding...$"

ThirtiethRoad_Fisherman_Text_0:
# 25 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Hey! Uh, I've heard from some colleagues\n"
	.string "that fishes are back? Uh... You still\l"
	.string "using the rod I gave you?$"

ThirtiethRoad_Fisherman_Text_1:
# 30 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Hey, it's you again! How's the fishing\n"
	.string "going, any luck yet? Haha.$"

ThirtiethRoad_Fisherman_Text_2:
# 36 "data/maps/ThirtiethRoad/scripts.pory"
	.string "So? You got me the baits?$"

ThirtiethRoad_Fisherman_Text_3:
# 40 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Great! I can finally go back and fish!...\n"
	.string "Just kidding. There aren't any Pokémons\l"
	.string "left in the ocean. That's why I'm giving\l"
	.string "away my precious fishing rod! You can\l"
	.string "have it!$"

ThirtiethRoad_Fisherman_Text_4:
# 49 "data/maps/ThirtiethRoad/scripts.pory"
	.string "You cheeky liar! I really need those\n"
	.string "baits!$"

ThirtiethRoad_Fisherman_Text_5:
# 55 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Come on! I really need those baits!$"

ThirtiethRoad_Fisherman_Text_6:
# 61 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Going to the League? I bet you don't\n"
	.string "have any fish type Pokémon in your\l"
	.string "party! Hah! People often forget how\l"
	.string "useful they are. Well, it's your lucky\l"
	.string "day! I have a fishing rod to spare. But\l"
	.string "if you want it, you'll have to help me.\l"
	.string "See, I don't have any baits left, and I\l"
	.string "can't go buy some because, uh, I'm lazy.\l"
	.string "So if you bring back to me {COLOR BLUE}3 Sitrus\l"
	.string "Berries{COLOR DARK_GRAY}, I might give you my rod. Uh, my\l"
	.string "fishing rod, I mean.$"

Charley1::
# 70 "data/maps/ThirtiethRoad/scripts.pory"
	.string "I'm about to take on the Council\n"
	.string "Challenge! So what if I don't have any\l"
	.string "emblems? I'm more than ready!$"

Charley2::
# 74 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Damn, I might actually have to train...$"

Niall1::
# 78 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Hoho, surprise! I bet you didn't even\n"
	.string "see me!... What do you mean you did? And\l"
	.string "from a distance? Come on, man.$"

Niall2::
# 82 "data/maps/ThirtiethRoad/scripts.pory"
	.string "Yeah, that's my bad. I shouldn't have\n"
	.string "hid.$"
