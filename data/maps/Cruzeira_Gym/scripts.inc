# 1 "data/maps/Cruzeira_Gym/scripts.pory"

# 2 "data/maps/Cruzeira_Gym/scripts.pory"
Cruzeira_Gym_MapScripts::
# 3 "data/maps/Cruzeira_Gym/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Cruzeira_Gym_OnTransition
# 4 "data/maps/Cruzeira_Gym/scripts.pory"
	.byte 0

Cruzeira_Gym_OnTransition::
# 8 "data/maps/Cruzeira_Gym/scripts.pory"
	goto_if_set FLAG_LAILA_HAPPY, Cruzeira_Gym_OnTransition_1
	return

Cruzeira_Gym_OnTransition_1:
# 9 "data/maps/Cruzeira_Gym/scripts.pory"
	addobject 4
# 10 "data/maps/Cruzeira_Gym/scripts.pory"
	setobjectxyperm 4, 8, 2
	end


Cruzeira_Gym_Grunt1::
# 16 "data/maps/Cruzeira_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRUZ_GYM_1, CruzGymGrunt1, CruzGymGrunt2
# 17 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Grunt1_Text_0
# 18 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
	end


Cruzeira_Gym_Grunt2::
# 23 "data/maps/Cruzeira_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRUZ_GYM_2, CruzGymGrunt3, CruzGymGrunt4
# 24 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Grunt2_Text_0
# 25 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
	end


Cruzeira_Gym_Admin::
# 30 "data/maps/Cruzeira_Gym/scripts.pory"
	lock
# 31 "data/maps/Cruzeira_Gym/scripts.pory"
	faceplayer
# 32 "data/maps/Cruzeira_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRUZ_GYM_3, CruzGymAdmin1, CruzGymAdmin2, Cruzeira_Gym_AdminLoss
	return


Cruzeira_Gym_AdminLoss::
# 37 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_AdminLoss_Text_0
# 38 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_AdminLoss_Text_1
# 39 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 40 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 41 "data/maps/Cruzeira_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 40
# 43 "data/maps/Cruzeira_Gym/scripts.pory"
	removeobject 1
# 44 "data/maps/Cruzeira_Gym/scripts.pory"
	removeobject 2
# 45 "data/maps/Cruzeira_Gym/scripts.pory"
	removeobject 3
# 46 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_CRUZ_GYM_GRUNTS
# 47 "data/maps/Cruzeira_Gym/scripts.pory"
	clearflag FLAG_CRUZ_GYM_LAILA
# 48 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CruzGymDown
# 49 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 50 "data/maps/Cruzeira_Gym/scripts.pory"
	addobject 4
# 51 "data/maps/Cruzeira_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 52 "data/maps/Cruzeira_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 53 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq Cruzeira_Gym_AdminLoss_10
Cruzeira_Gym_AdminLoss_8:
# 59 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Cruzeira_Gym_AdminLoss_7
Cruzeira_Gym_AdminLoss_5:
# 65 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Cruzeira_Gym_AdminLoss_4
	return

Cruzeira_Gym_AdminLoss_1:
# 54 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 55 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Laila83
# 56 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 57 "data/maps/Cruzeira_Gym/scripts.pory"
	goto Cruzeira_Gym_Laila
	return

Cruzeira_Gym_AdminLoss_2:
# 60 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 61 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Laila72
# 62 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 63 "data/maps/Cruzeira_Gym/scripts.pory"
	goto Cruzeira_Gym_Laila
	return

Cruzeira_Gym_AdminLoss_3:
# 66 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 67 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Laila92
# 68 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 69 "data/maps/Cruzeira_Gym/scripts.pory"
	goto Cruzeira_Gym_Laila
	return

Cruzeira_Gym_AdminLoss_4:
# 65 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Cruzeira_Gym_AdminLoss_3
	return

Cruzeira_Gym_AdminLoss_7:
# 59 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Cruzeira_Gym_AdminLoss_2
	goto Cruzeira_Gym_AdminLoss_5

Cruzeira_Gym_AdminLoss_10:
# 53 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Cruzeira_Gym_AdminLoss_1
	goto Cruzeira_Gym_AdminLoss_8


Cruzeira_Gym_Laila::
# 74 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 75 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 76 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_1
# 77 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 78 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 79 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 80 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 1, LailaHeart
# 81 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 82 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 30
# 83 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 84 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_2
# 85 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 86 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 87 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 1, LailaExc
# 88 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
# 89 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 90 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 91 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_3
# 92 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 93 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 94 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 95 "data/maps/Cruzeira_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 96 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_4
# 97 "data/maps/Cruzeira_Gym/scripts.pory"
	waitfanfare
# 98 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 99 "data/maps/Cruzeira_Gym/scripts.pory"
	delay 20
# 100 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 101 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_5
# 102 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 103 "data/maps/Cruzeira_Gym/scripts.pory"
	giveitem ITEM_TM33
# 104 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 105 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_Text_6
# 106 "data/maps/Cruzeira_Gym/scripts.pory"
	closemessage
# 107 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 108 "data/maps/Cruzeira_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 109 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_eq Cruzeira_Gym_Laila_11
Cruzeira_Gym_Laila_9:
# 113 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Cruzeira_Gym_Laila_8
Cruzeira_Gym_Laila_6:
# 117 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_0, 9
	goto_if_eq Cruzeira_Gym_Laila_5
Cruzeira_Gym_Laila_1:
# 121 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_LAILA_HAPPY
# 122 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_PASTORAL_GROUP
# 123 "data/maps/Cruzeira_Gym/scripts.pory"
	setvar VAR_MAIN_STORY, 12
# 124 "data/maps/Cruzeira_Gym/scripts.pory"
	setvar VAR_SHOP_UPDATE, 1
# 125 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 126 "data/maps/Cruzeira_Gym/scripts.pory"
	completequest QUEST_INTRUDER
# 127 "data/maps/Cruzeira_Gym/scripts.pory"
	setflag FLAG_QUEST_INTRUDER_COMPLETE
# 128 "data/maps/Cruzeira_Gym/scripts.pory"
	release
	end

Cruzeira_Gym_Laila_2:
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Cruzeira_Gym_Laila_Movement_0
# 111 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
	goto Cruzeira_Gym_Laila_1

Cruzeira_Gym_Laila_3:
# 114 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Cruzeira_Gym_Laila_Movement_1
# 115 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
	goto Cruzeira_Gym_Laila_1

Cruzeira_Gym_Laila_4:
# 118 "data/maps/Cruzeira_Gym/scripts.pory"
	applymovement 4, Cruzeira_Gym_Laila_Movement_2
# 119 "data/maps/Cruzeira_Gym/scripts.pory"
	waitmovement 0
	goto Cruzeira_Gym_Laila_1

Cruzeira_Gym_Laila_5:
# 117 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Cruzeira_Gym_Laila_4
	goto Cruzeira_Gym_Laila_1

Cruzeira_Gym_Laila_8:
# 113 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Cruzeira_Gym_Laila_3
	goto Cruzeira_Gym_Laila_6

Cruzeira_Gym_Laila_11:
# 109 "data/maps/Cruzeira_Gym/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq Cruzeira_Gym_Laila_2
	goto Cruzeira_Gym_Laila_9


Cruzeira_Gym_Laila_After::
# 133 "data/maps/Cruzeira_Gym/scripts.pory"
	lock
# 134 "data/maps/Cruzeira_Gym/scripts.pory"
	faceplayer
# 135 "data/maps/Cruzeira_Gym/scripts.pory"
	namebox Cruzeira_Gym_Laila_Text_0
# 136 "data/maps/Cruzeira_Gym/scripts.pory"
	msgbox Cruzeira_Gym_Laila_After_Text_0
# 137 "data/maps/Cruzeira_Gym/scripts.pory"
	hidenamebox
# 138 "data/maps/Cruzeira_Gym/scripts.pory"
	release
	end


# 166 "data/maps/Cruzeira_Gym/scripts.pory"
LailaHeart:
# 167 "data/maps/Cruzeira_Gym/scripts.pory"
	emote_heart
	step_end

# 170 "data/maps/Cruzeira_Gym/scripts.pory"
LailaExc:
# 171 "data/maps/Cruzeira_Gym/scripts.pory"
	emote_exclamation_mark
	step_end

# 174 "data/maps/Cruzeira_Gym/scripts.pory"
Laila83:
# 175 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 175 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 176 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 176 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 176 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 177 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 177 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 177 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_left
# 179 "data/maps/Cruzeira_Gym/scripts.pory"
	face_up
	step_end

# 182 "data/maps/Cruzeira_Gym/scripts.pory"
Laila72:
# 183 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 183 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 184 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 184 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 184 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 185 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 185 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 185 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 186 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_left
# 186 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_left
# 187 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 188 "data/maps/Cruzeira_Gym/scripts.pory"
	face_up
	step_end

# 191 "data/maps/Cruzeira_Gym/scripts.pory"
Laila92:
# 192 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 192 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 193 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 193 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 193 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 194 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 194 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 194 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 194 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/Cruzeira_Gym/scripts.pory"
CruzGymDown:
# 198 "data/maps/Cruzeira_Gym/scripts.pory"
	face_down
	step_end

# 110 "data/maps/Cruzeira_Gym/scripts.pory"
Cruzeira_Gym_Laila_Movement_0:
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_left
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 110 "data/maps/Cruzeira_Gym/scripts.pory"
	face_down
	step_end

# 114 "data/maps/Cruzeira_Gym/scripts.pory"
Cruzeira_Gym_Laila_Movement_1:
# 114 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_right
# 114 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 114 "data/maps/Cruzeira_Gym/scripts.pory"
	face_down
	step_end

# 118 "data/maps/Cruzeira_Gym/scripts.pory"
Cruzeira_Gym_Laila_Movement_2:
# 118 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_left
# 118 "data/maps/Cruzeira_Gym/scripts.pory"
	walk_up
# 118 "data/maps/Cruzeira_Gym/scripts.pory"
	face_down
	step_end

Cruzeira_Gym_Grunt1_Text_0:
# 17 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "I have an excuse: I've just been\n"
	.string "recruited. Fight me in like two weeks,\l"
	.string "and we'll see who wins.$"

Cruzeira_Gym_Grunt2_Text_0:
# 24 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Doesn't count. I wasn't ready, you took\n"
	.string "me by surprise.$"

Cruzeira_Gym_AdminLoss_Text_0:
# 37 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Barbara$"

Cruzeira_Gym_AdminLoss_Text_1:
# 38 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Remeber our name! We're the Fandango\n"
	.string "Band, and we're just getting started!\l"
	.string "We'll soon take over every gym in Thura\l"
	.string "and dominate the world!... But for now,\l"
	.string "back to the base. Guys, we're out!$"

Cruzeira_Gym_Laila_Text_0:
# 75 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Laila$"

Cruzeira_Gym_Laila_Text_1:
# 76 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "You... Did you chase the baddies from\n"
	.string "the gym? You did it for me?$"

Cruzeira_Gym_Laila_Text_2:
# 84 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "...You're so kind. I was appointed as a\n"
	.string "Council member only a week ago... And I'm\l"
	.string "clearly not strong enough. Even when my\l"
	.string "mom was the gym leader, I knew I\l"
	.string "couldn't assume her position... How can\l"
	.string "I repay you?$"

Cruzeira_Gym_Laila_Text_3:
# 91 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Oh, I know! You can take that. For what\n"
	.string "you've done for me, it's the least I can\l"
	.string "give you.$"

Cruzeira_Gym_Laila_Text_4:
# 96 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "You've earned the Petal Emblem!$"

Cruzeira_Gym_Laila_Text_5:
# 101 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Wait, before you go. Let me give you\n"
	.string "this TM.$"

Cruzeira_Gym_Laila_Text_6:
# 105 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "This TM contains Grass Knot. It's very\n"
	.string "useful, particularly against heavy\l"
	.string "Pokémons. And you can teach it to some\l"
	.string "non-grass Pokémons! Neat, isn't it?$"

Cruzeira_Gym_Laila_After_Text_0:
# 136 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Hi {PLAYER}! I'm still practicing, I\n"
	.string "hope to be as strong as you one day!$"

CruzGymGrunt1::
# 142 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Huh? Who are you? Weren't we supposed\n"
	.string "to let nobody enter?$"

CruzGymGrunt2::
# 146 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "I understand now. It's because you're\n"
	.string "strong.$"

CruzGymGrunt3::
# 150 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "That grunt doesn't know jack shit\n"
	.string "about battles. I'll show you what a real\l"
	.string "opponent looks like!$"

CruzGymGrunt4::
# 154 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "So, it seems that I'm also not a worthy\n"
	.string "opponent.$"

CruzGymAdmin1::
# 158 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "Wow! You managed to get past those\n"
	.string "useless grunts! Bravo! Unfortunately\l"
	.string "for you, your promising run ends now.\l"
	.string "Haha!$"

CruzGymAdmin2::
# 162 "data/maps/Cruzeira_Gym/scripts.pory"
	.string "For Arceus' sake...$"
