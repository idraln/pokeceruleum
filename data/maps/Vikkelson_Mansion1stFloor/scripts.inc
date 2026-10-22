# 1 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"

# 2 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
Vikkelson_Mansion1stFloor_MapScripts::
# 3 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.byte 0

Vikkelson_Mansion1stFloor_Housemaid1::
# 7 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	lock
# 8 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	faceplayer
# 9 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Housemaid1_Text_0
# 13 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	release
	end


Vikkelson_Mansion1stFloor_Old::
# 18 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	lock
# 19 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	faceplayer
# 20 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	compare VAR_MAIN_STORY, 46
	goto_if_gt Vikkelson_Mansion1stFloor_Old_2
# 24 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Old_Text_1
Vikkelson_Mansion1stFloor_Old_1:
# 26 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	release
	end

Vikkelson_Mansion1stFloor_Old_2:
# 21 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Old_Text_0
	goto Vikkelson_Mansion1stFloor_Old_1


Vikkelson_Mansion1stFloor_Housemaid2::
# 31 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	lock
# 32 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	faceplayer
# 33 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Housemaid2_Text_0
# 34 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	release
	end


Vikkelson_Mansion1stFloor_Artist::
# 39 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	lock
# 40 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	faceplayer
# 41 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	compare VAR_MAIN_STORY, 46
	goto_if_gt Vikkelson_Mansion1stFloor_Artist_2
# 45 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Artist_Text_1
# 46 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	closemessage
# 47 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	applymovement 3, Vikkelson_Mansion1stFloor_Artist_Movement_0
# 48 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	waitmovement 0
# 49 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Artist_Text_2
Vikkelson_Mansion1stFloor_Artist_1:
# 51 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	release
	end

Vikkelson_Mansion1stFloor_Artist_2:
# 42 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_Artist_Text_0
	goto Vikkelson_Mansion1stFloor_Artist_1


Vikkelson_Mansion1stFloor_RandomWoman::
# 56 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	lock
# 57 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	faceplayer
# 58 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	compare VAR_MAIN_STORY, 46
	goto_if_gt Vikkelson_Mansion1stFloor_RandomWoman_2
# 62 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_RandomWoman_Text_1
Vikkelson_Mansion1stFloor_RandomWoman_1:
# 64 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	release
	end

Vikkelson_Mansion1stFloor_RandomWoman_2:
# 59 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	msgbox Vikkelson_Mansion1stFloor_RandomWoman_Text_0
	goto Vikkelson_Mansion1stFloor_RandomWoman_1


# 47 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
Vikkelson_Mansion1stFloor_Artist_Movement_0:
# 47 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	face_up
	step_end

Vikkelson_Mansion1stFloor_Housemaid1_Text_0:
# 9 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "Sorry, but the floor below is solely\n"
	.string "accessible to the housemaids and\l"
	.string "guards.$"

Vikkelson_Mansion1stFloor_Old_Text_0:
# 21 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "Miss Vikkie left in a hurry and she still\n"
	.string "hasn't come back. I wonder what on\l"
	.string "earth could have happened?$"

Vikkelson_Mansion1stFloor_Old_Text_1:
# 24 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "I have known Miss Vikkie for a very long\n"
	.string "time. You could say that I'm somewhat\l"
	.string "of a mentor to her.$"

Vikkelson_Mansion1stFloor_Housemaid2_Text_0:
# 33 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "Please, enjoy a large variety of treats,\n"
	.string "cooked by the greatest and most\l"
	.string "talented chef in Thura.$"

Vikkelson_Mansion1stFloor_Artist_Text_0:
# 42 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "Miss Vikkie could pay a lot for these\n"
	.string "pieces. But I can't accept money from\l"
	.string "her. Working for her is worth all the\l"
	.string "riches in the world.$"

Vikkelson_Mansion1stFloor_Artist_Text_1:
# 45 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "What do you think of this piece?$"

Vikkelson_Mansion1stFloor_Artist_Text_2:
# 49 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "I painted them exclusively for Miss\n"
	.string "Vikkie. Free of charge, of course. When\l"
	.string "someone of her standing asks you a\l"
	.string "favor, you must oblige.$"

Vikkelson_Mansion1stFloor_RandomWoman_Text_0:
# 59 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "So I stayed around to eat the\n"
	.string "appetizers, and you know what? I heard\l"
	.string "a maid that the owner of this mansion,\l"
	.string "some woman named Vikkie I think, fled in\l"
	.string "another region. Mental, innit?$"

Vikkelson_Mansion1stFloor_RandomWoman_Text_1:
# 62 "data/maps/Vikkelson_Mansion1stFloor/scripts.pory"
	.string "This isn't the nightclub, is it? Dude, I\n"
	.string "don't know how I got there, but hey! At\l"
	.string "least, the treats are succulent.$"
