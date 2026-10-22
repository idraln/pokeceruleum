# 1 "data/maps/BlackstoneRd/scripts.pory"

# 2 "data/maps/BlackstoneRd/scripts.pory"
BlackstoneRd_MapScripts::
# 3 "data/maps/BlackstoneRd/scripts.pory"
	.byte 0

BlackstoneRd_Fat::
# 7 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 8 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 9 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Fat_Text_0
# 10 "data/maps/BlackstoneRd/scripts.pory"
	turnobject 10, DIR_NORTH
# 11 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Ronan_Before::
# 16 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 17 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 18 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Ronan_Before_Text_0
# 19 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Ronan::
# 24 "data/maps/BlackstoneRd/scripts.pory"
	trainerbattle_single TRAINER_BLACK_1, Ronan1, Ronan2
# 25 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Ronan_Text_0
# 26 "data/maps/BlackstoneRd/scripts.pory"
	closemessage
	end


BlackstoneRd_Kid::
# 31 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 32 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 33 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Kid_Text_0
# 34 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Rocco_Before::
# 39 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 40 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 41 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Rocco_Before_Text_0
# 42 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Rocco::
# 47 "data/maps/BlackstoneRd/scripts.pory"
	trainerbattle_single TRAINER_BLACK_2, Rocco1, Rocco2
# 48 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Rocco_Text_0
# 49 "data/maps/BlackstoneRd/scripts.pory"
	closemessage
	end


BlackstoneRd_Fisherman::
# 54 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 55 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 56 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Fisherman_Text_0
# 57 "data/maps/BlackstoneRd/scripts.pory"
	turnobject 8, DIR_WEST
# 58 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_PartyGoers::
# 63 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 64 "data/maps/BlackstoneRd/scripts.pory"
	applymovement 4, BlackstoneRd_PartyGoers_Movement_0
# 65 "data/maps/BlackstoneRd/scripts.pory"
	waitmovement 0
# 66 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_PartyGoers_Text_0
# 67 "data/maps/BlackstoneRd/scripts.pory"
	closemessage
# 68 "data/maps/BlackstoneRd/scripts.pory"
	applymovement 6, BlackstoneRd_PartyGoers_Movement_1
# 69 "data/maps/BlackstoneRd/scripts.pory"
	applymovement 5, BlackstoneRd_PartyGoers_Movement_1
# 70 "data/maps/BlackstoneRd/scripts.pory"
	waitmovement 0
# 71 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_PartyGoers_Text_1
# 72 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Philip_Before::
# 77 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 78 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 79 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Philip_Before_Text_0
# 80 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Philip::
# 86 "data/maps/BlackstoneRd/scripts.pory"
	trainerbattle_single TRAINER_BLACK_3, Philip1, Philip2
# 87 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Philip_Text_0
# 88 "data/maps/BlackstoneRd/scripts.pory"
	closemessage
	end


BlackstoneRd_Leia_Before::
# 93 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 94 "data/maps/BlackstoneRd/scripts.pory"
	faceplayer
# 95 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Leia_Before_Text_0
# 96 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


BlackstoneRd_Leia::
# 101 "data/maps/BlackstoneRd/scripts.pory"
	trainerbattle_single TRAINER_BLACK_4, Leia1, Leia2
# 102 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Leia_Text_0
# 103 "data/maps/BlackstoneRd/scripts.pory"
	closemessage
	end


BlackstoneRd_Sign::
# 108 "data/maps/BlackstoneRd/scripts.pory"
	lockall
# 109 "data/maps/BlackstoneRd/scripts.pory"
	msgbox BlackstoneRd_Sign_Text_0
# 110 "data/maps/BlackstoneRd/scripts.pory"
	releaseall
	end


BlackstoneRd_Rock::
# 115 "data/maps/BlackstoneRd/scripts.pory"
	lockall
# 116 "data/maps/BlackstoneRd/scripts.pory"
	checkitem ITEM_HM06, 1
# 117 "data/maps/BlackstoneRd/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackstoneRd_Rock_1
# 125 "data/maps/BlackstoneRd/scripts.pory"
	releaseall
	end

BlackstoneRd_Rock_1:
# 118 "data/maps/BlackstoneRd/scripts.pory"
	call EventScript_UseRockSmash
# 119 "data/maps/BlackstoneRd/scripts.pory"
	removeobject 11
# 120 "data/maps/BlackstoneRd/scripts.pory"
	setflag FLAG_ROCK_BLACK
# 121 "data/maps/BlackstoneRd/scripts.pory"
	releaseall
	end


BlackstoneRd_Item::
# 131 "data/maps/BlackstoneRd/scripts.pory"
	lock
# 132 "data/maps/BlackstoneRd/scripts.pory"
	removeobject 16
# 133 "data/maps/BlackstoneRd/scripts.pory"
	giveitem ITEM_TM10
# 134 "data/maps/BlackstoneRd/scripts.pory"
	setflag FLAG_ITEM_BLACKSTONE_2
# 135 "data/maps/BlackstoneRd/scripts.pory"
	release
	end


# 64 "data/maps/BlackstoneRd/scripts.pory"
BlackstoneRd_PartyGoers_Movement_0:
# 64 "data/maps/BlackstoneRd/scripts.pory"
	walk_in_place_down
	step_end

# 68 "data/maps/BlackstoneRd/scripts.pory"
BlackstoneRd_PartyGoers_Movement_1:
# 68 "data/maps/BlackstoneRd/scripts.pory"
	jump_in_place_up
# 68 "data/maps/BlackstoneRd/scripts.pory"
	jump_in_place_up
	step_end

BlackstoneRd_Fat_Text_0:
# 9 "data/maps/BlackstoneRd/scripts.pory"
	.string "I tried to go to Vikkelson to meet\n"
	.string "Vikkie, but her guards wouldn't let me in\l"
	.string "her mansion. Oh well...$"

BlackstoneRd_Ronan_Before_Text_0:
# 18 "data/maps/BlackstoneRd/scripts.pory"
	.string "Yes, I'm a trainer! How did you know? I\n"
	.string "think I'm a bit too strong for you\l"
	.string "though. I'm not the kind to take\l"
	.string "advantage of new trainers! How kind am\l"
	.string "I! Right?$"

BlackstoneRd_Ronan_Text_0:
# 25 "data/maps/BlackstoneRd/scripts.pory"
	.string "I swear to Arceus that I have never,\n"
	.string "ever, eaten those beautiful,\l"
	.string "tasty-looking, shiny rocks. Never.$"

BlackstoneRd_Kid_Text_0:
# 33 "data/maps/BlackstoneRd/scripts.pory"
	.string "I need to collect as many orange leaves\n"
	.string "as possible! It will be a great gift for\l"
	.string "my dad.$"

BlackstoneRd_Rocco_Before_Text_0:
# 41 "data/maps/BlackstoneRd/scripts.pory"
	.string "I can't wait to go to Vikkelson! I'll\n"
	.string "party like there's no tomorrow. Like\l"
	.string "that Orson song.$"

BlackstoneRd_Rocco_Text_0:
# 48 "data/maps/BlackstoneRd/scripts.pory"
	.string "I love paryting, don't get me wrong. But\n"
	.string "there are way too many people in that\l"
	.string "city.$"

BlackstoneRd_Fisherman_Text_0:
# 56 "data/maps/BlackstoneRd/scripts.pory"
	.string "No fish left in the ocean? No worries!\n"
	.string "There are plenty left in ponds like this\l"
	.string "one. I wonder why no one has come here\l"
	.string "yet.$"

BlackstoneRd_PartyGoers_Text_0:
# 66 "data/maps/BlackstoneRd/scripts.pory"
	.string "Boys, this is about to be the best time\n"
	.string "of your lives! I told y'all Daddy was\l"
	.string "going to take care y'all. You just have\l"
	.string "to relax and enjoy. I'm so proud of my\l"
	.string "boys. Look at you, all grown up!$"

BlackstoneRd_PartyGoers_Text_1:
# 71 "data/maps/BlackstoneRd/scripts.pory"
	.string "Yeah! Thanks Dad!$"

BlackstoneRd_Philip_Before_Text_0:
# 79 "data/maps/BlackstoneRd/scripts.pory"
	.string "Boy, you really have to earn the right\n"
	.string "to party! Those hills are no joke.$"

BlackstoneRd_Philip_Text_0:
# 87 "data/maps/BlackstoneRd/scripts.pory"
	.string "Nothing better than a hike before\n"
	.string "partying!... Is what I would've said if I\l"
	.string "liked hiking. Man, I really chose the\l"
	.string "wrong path in my life. Hah, path... How\l"
	.string "ironic...$"

BlackstoneRd_Leia_Before_Text_0:
# 95 "data/maps/BlackstoneRd/scripts.pory"
	.string "I hate partygoers. I absolutely despise\n"
	.string "them. Disrespectful twats.$"

BlackstoneRd_Leia_Text_0:
# 102 "data/maps/BlackstoneRd/scripts.pory"
	.string "How could you ever party or even relax\n"
	.string "when our world is literally crumbling\l"
	.string "before our eyes? I just don't get it...$"

BlackstoneRd_Sign_Text_0:
# 109 "data/maps/BlackstoneRd/scripts.pory"
	.string "{UP_ARROW} Vikkelson\n"
	.string "{RIGHT_ARROW} Glasville$"

Ronan1::
# 139 "data/maps/BlackstoneRd/scripts.pory"
	.string "Those black rocks look absolutely\n"
	.string "delicious. They shine like licorice!$"

Ronan2::
# 143 "data/maps/BlackstoneRd/scripts.pory"
	.string "You think this is what licorice is made\n"
	.string "of? Doesn't taste like- Oop! I've said\l"
	.string "too much!$"

Rocco1::
# 147 "data/maps/BlackstoneRd/scripts.pory"
	.string "Is this the right way to Vikkelson? I\n"
	.string "think I'm lost...$"

Rocco2::
# 151 "data/maps/BlackstoneRd/scripts.pory"
	.string "Ah! I should've crossed the bridge!$"

Philip1::
# 155 "data/maps/BlackstoneRd/scripts.pory"
	.string "I need to take a breather. Please, rest\n"
	.string "with me.$"

Philip2::
# 159 "data/maps/BlackstoneRd/scripts.pory"
	.string "Aren't you exhausted?$"

Leia1::
# 163 "data/maps/BlackstoneRd/scripts.pory"
	.string "Hey! Are you one of those abhorrent\n"
	.string "partygoers? I'll show you a party.$"

Leia2::
# 167 "data/maps/BlackstoneRd/scripts.pory"
	.string "I see. Sorry for getting carried away.$"
