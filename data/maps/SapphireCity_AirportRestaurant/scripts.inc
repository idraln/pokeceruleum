# 1 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"

# 2 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
SapphireCity_AirportRestaurant_MapScripts::
# 3 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.byte 0

SapphireCity_AirportRestaurant_GirlAlone::
# 7 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	goto_if_set FLAG_CAROLINE_AIRPORT, SapphireCity_AirportRestaurant_GirlAlone_2
# 13 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_GirlAlone_Text_1
# 14 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	closemessage
# 15 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	faceplayer
# 16 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_GirlAlone_Text_2, MSGBOX_YESNO
# 17 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_AirportRestaurant_GirlAlone_4
# 25 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_GirlAlone_Text_3
# 26 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	turnobject 2, DIR_SOUTH
# 27 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end

SapphireCity_AirportRestaurant_GirlAlone_2:
# 9 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_GirlAlone_Text_0
# 10 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end

SapphireCity_AirportRestaurant_GirlAlone_4:
# 18 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SCAR_Caroline1
# 19 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	trainerbattle_no_intro TRAINER_BOIS_ADMIN_1_RESTAURANT, SCAR_Caroline2
# 20 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	setflag FLAG_CAROLINE_AIRPORT
# 21 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Dad::
# 33 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 34 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Dad_Text_0
# 35 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Kid::
# 40 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 41 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	faceplayer
# 42 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Kid_Text_0
# 43 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Mom::
# 48 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 49 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Mom_Text_0
# 50 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Dude::
# 55 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 56 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	faceplayer
# 57 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Dude_Text_0
# 58 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Owner::
# 63 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 64 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	faceplayer
# 65 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	compare VAR_QUEST_HERMIT, 5
	goto_if_eq SapphireCity_AirportRestaurant_Owner_1
# 73 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	compare VAR_QUEST_HERMIT, 1
	goto_if_eq SapphireCity_AirportRestaurant_Owner_2
# 107 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_2
# 108 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	waitmessage
# 109 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	pokemart SCAR_Mart
# 110 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_1
# 111 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end

SapphireCity_AirportRestaurant_Owner_1:
# 66 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_0
# 67 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	waitmessage
# 68 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	pokemart SCAR_Mart
# 69 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_1
# 70 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end

SapphireCity_AirportRestaurant_Owner_2:
# 74 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_2
# 75 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_3
# 76 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	closemessage
# 77 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 20
# 78 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	applymovement 3, SapphireCity_AirportRestaurant_Owner_Movement_0
# 79 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	waitmovement 0
# 80 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	playse SE_PIN
# 81 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 40
# 82 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_4
# 83 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_3
# 84 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_5
# 85 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_3
# 86 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	closemessage
# 87 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 20
# 88 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	applymovement 3, SapphireCity_AirportRestaurant_Owner_Movement_1
# 89 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	waitmovement 0
# 90 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 20
# 91 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_6
# 92 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	closemessage
# 93 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 20
# 94 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	applymovement 3, SapphireCity_AirportRestaurant_Owner_Movement_2
# 95 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	waitmovement 0
# 96 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	delay 20
# 97 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_7
# 98 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_3
# 99 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_8
# 100 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	giveitem ITEM_LEMONADE, 5
# 101 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Owner_Text_9
# 102 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	setvar VAR_QUEST_HERMIT, 2
# 103 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


SapphireCity_AirportRestaurant_Waitress::
# 117 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	lock
# 118 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	msgbox SapphireCity_AirportRestaurant_Waitress_Text_0
# 119 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	release
	end


	.align 2
# 131 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
SCAR_Mart:
# 132 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 133 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 134 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 135 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.2byte ITEM_LEMONADE
# 136 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

# 78 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
SapphireCity_AirportRestaurant_Owner_Movement_0:
# 78 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	emote_exclamation_mark
	step_end

# 88 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
SapphireCity_AirportRestaurant_Owner_Movement_1:
# 88 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	face_down
	step_end

# 94 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
SapphireCity_AirportRestaurant_Owner_Movement_2:
# 94 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	face_player
	step_end

SapphireCity_AirportRestaurant_GirlAlone_Text_0:
# 9 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Hmm... Some honey... Yes...$"

SapphireCity_AirportRestaurant_GirlAlone_Text_1:
# 13 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Hmmm... Every item on the menu looks\n"
	.string "tasty. What if?... No...$"

SapphireCity_AirportRestaurant_GirlAlone_Text_2:
# 16 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Huh? What's up? You wanna battle?$"

SapphireCity_AirportRestaurant_GirlAlone_Text_3:
# 25 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Leave me alone then, don't you see I'm\n"
	.string "about to make the most important\l"
	.string "choice of my life?$"

SapphireCity_AirportRestaurant_Dad_Text_0:
# 34 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Come on Molly, let the kid have some\n"
	.string "coffee. He's a grown up now.$"

SapphireCity_AirportRestaurant_Kid_Text_0:
# 42 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "I'm a grown up now, I deserve coffee!\n"
	.string "Dad said so!$"

SapphireCity_AirportRestaurant_Mom_Text_0:
# 49 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "No, he will not have the drink. Not under\n"
	.string "my watch.$"

SapphireCity_AirportRestaurant_Dude_Text_0:
# 57 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "The beer is on the other side of the\n"
	.string "table, but I'm too lazy to get up. Oh\l"
	.string "well.$"

SapphireCity_AirportRestaurant_Owner_Text_0:
# 66 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Hi! Thank you again for what you've did\n"
	.string "for my family. How can I help you with\l"
	.string "today?$"

SapphireCity_AirportRestaurant_Owner_Text_1:
# 69 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Thank you! Come back soon!$"

SapphireCity_AirportRestaurant_Owner_Text_2:
# 74 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Hi, and welcome to Sapphire City\n"
	.string "Airport's Restaurant! How can I help\l"
	.string "you today?$"

SapphireCity_AirportRestaurant_Owner_Text_3:
# 75 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "...$"

SapphireCity_AirportRestaurant_Owner_Text_4:
# 82 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "...My husband? How do you know about\n"
	.string "him?$"

SapphireCity_AirportRestaurant_Owner_Text_5:
# 84 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "...I can't believe it... It's been almost\n"
	.string "30 years, I thought for sure he was\l"
	.string "dead... He left the city and never came\l"
	.string "back, even to see his kids... He lives in\l"
	.string "Bammobo you say?$"

SapphireCity_AirportRestaurant_Owner_Text_6:
# 91 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "I can't go and see him. The shock might\n"
	.string "kill him.$"

SapphireCity_AirportRestaurant_Owner_Text_7:
# 97 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Please, can you tell him I'm doing good?\n"
	.string "Tell him our kids are doing great too.\l"
	.string "They miss him so much.$"

SapphireCity_AirportRestaurant_Owner_Text_8:
# 99 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Thank you. Let me gift you something\n"
	.string "for the road.$"

SapphireCity_AirportRestaurant_Owner_Text_9:
# 101 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Don't worry about the price, it's on the\n"
	.string "house.$"

SapphireCity_AirportRestaurant_Waitress_Text_0:
# 118 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "...What the hell is written on these\n"
	.string "orders? I can't decipher anything...\l"
	.string "Dammit, I knew I should've applied to\l"
	.string "the Retreat...$"

SCAR_Caroline1::
# 123 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Alright, but let's make it quick, I'm\n"
	.string "dying of hunger over here.$"

SCAR_Caroline2::
# 127 "data/maps/SapphireCity_AirportRestaurant/scripts.pory"
	.string "Haha, well done, bravo, whatever. Now let\n"
	.string "me eat.$"
