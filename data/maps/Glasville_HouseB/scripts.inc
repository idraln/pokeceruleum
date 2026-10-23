# 1 "data/maps/Glasville_HouseB/scripts.pory"

# 2 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_MapScripts::
# 3 "data/maps/Glasville_HouseB/scripts.pory"
	.byte 0

Glasville_HouseB_Dave::
# 7 "data/maps/Glasville_HouseB/scripts.pory"
	lock
# 8 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_MAIN_STORY, 17
	goto_if_le Glasville_HouseB_Dave_1
# 15 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_MAIN_STORY, 18
	goto_if_eq Glasville_HouseB_Dave_2
# 57 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_MAIN_STORY, 19
	goto_if_eq Glasville_HouseB_Dave_3
# 57 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_MAIN_STORY, 20
	goto_if_eq Glasville_HouseB_Dave_3
# 65 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_MAIN_STORY, 21
	goto_if_eq Glasville_HouseB_Dave_4
	return

Glasville_HouseB_Dave_1:
# 9 "data/maps/Glasville_HouseB/scripts.pory"
	faceplayer
# 10 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_0
# 11 "data/maps/Glasville_HouseB/scripts.pory"
	turnobject 1, DIR_NORTH
# 12 "data/maps/Glasville_HouseB/scripts.pory"
	release
	end

Glasville_HouseB_Dave_2:
# 16 "data/maps/Glasville_HouseB/scripts.pory"
	faceplayer
# 17 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 18 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_2
# 19 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 20 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 21 "data/maps/Glasville_HouseB/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Glasville_HouseB_Dave_12
# 29 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq Glasville_HouseB_Dave_13
Glasville_HouseB_Dave_11:
# 38 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 39 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_3
# 40 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 41 "data/maps/Glasville_HouseB/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 42 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 43 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_4
# 44 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 45 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_5
# 46 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 47 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_6
# 48 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 49 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_5
# 50 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 51 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_7
# 52 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 53 "data/maps/Glasville_HouseB/scripts.pory"
	setvar VAR_MAIN_STORY, 19
# 54 "data/maps/Glasville_HouseB/scripts.pory"
	release
	end

Glasville_HouseB_Dave_3:
# 58 "data/maps/Glasville_HouseB/scripts.pory"
	faceplayer
# 59 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 60 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_8
# 61 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 62 "data/maps/Glasville_HouseB/scripts.pory"
	release
	end

Glasville_HouseB_Dave_4:
# 66 "data/maps/Glasville_HouseB/scripts.pory"
	faceplayer
# 67 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 68 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_8
# 69 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 70 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_5
# 71 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 72 "data/maps/Glasville_HouseB/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_5
# 74 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 75 "data/maps/Glasville_HouseB/scripts.pory"
	delay 40
# 76 "data/maps/Glasville_HouseB/scripts.pory"
	faceplayer
# 77 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 78 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_9
# 79 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 80 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 81 "data/maps/Glasville_HouseB/scripts.pory"
	delay 20
# 82 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 83 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_10
# 84 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 85 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 86 "data/maps/Glasville_HouseB/scripts.pory"
	delay 20
# 87 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 88 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_11
# 89 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 90 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 91 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_BADGE03_GET
# 92 "data/maps/Glasville_HouseB/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 93 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_12
# 94 "data/maps/Glasville_HouseB/scripts.pory"
	waitfanfare
# 95 "data/maps/Glasville_HouseB/scripts.pory"
	delay 20
# 96 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 97 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_13
# 98 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 99 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 100 "data/maps/Glasville_HouseB/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 101 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_14
# 102 "data/maps/Glasville_HouseB/scripts.pory"
	waitfanfare
# 103 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 104 "data/maps/Glasville_HouseB/scripts.pory"
	delay 20
# 105 "data/maps/Glasville_HouseB/scripts.pory"
	namebox Glasville_HouseB_Dave_Text_1
# 106 "data/maps/Glasville_HouseB/scripts.pory"
	msgbox Glasville_HouseB_Dave_Text_15
# 107 "data/maps/Glasville_HouseB/scripts.pory"
	closemessage
# 108 "data/maps/Glasville_HouseB/scripts.pory"
	hidenamebox
# 109 "data/maps/Glasville_HouseB/scripts.pory"
	delay 20
# 110 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_DIFFICULTY_LEVEL, 0
	goto_if_eq Glasville_HouseB_Dave_17
Glasville_HouseB_Dave_16:
# 113 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_REGISTERED_DAVE_POKENAV
# 114 "data/maps/Glasville_HouseB/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 115 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Glasville_HouseB_Dave_19
# 126 "data/maps/Glasville_HouseB/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq Glasville_HouseB_Dave_20
	return

Glasville_HouseB_Dave_12:
# 23 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_0
# 24 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 25 "data/maps/Glasville_HouseB/scripts.pory"
	delay 40
# 26 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_1
# 27 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
	goto Glasville_HouseB_Dave_11

Glasville_HouseB_Dave_13:
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_2
# 31 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 32 "data/maps/Glasville_HouseB/scripts.pory"
	delay 40
# 33 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_3
# 34 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 35 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Glasville_HouseB_Dave_Movement_4
# 36 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
	goto Glasville_HouseB_Dave_11

Glasville_HouseB_Dave_17:
# 111 "data/maps/Glasville_HouseB/scripts.pory"
	setvar VAR_LEVELS, 40
	goto Glasville_HouseB_Dave_16

Glasville_HouseB_Dave_19:
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_6
# 117 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 118 "data/maps/Glasville_HouseB/scripts.pory"
	removeobject 1
# 119 "data/maps/Glasville_HouseB/scripts.pory"
	playse SE_EXIT
# 120 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_DAVE_LEAVING
# 121 "data/maps/Glasville_HouseB/scripts.pory"
	setvar VAR_MAIN_STORY, 22
# 122 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 123 "data/maps/Glasville_HouseB/scripts.pory"
	release
	end

Glasville_HouseB_Dave_20:
# 127 "data/maps/Glasville_HouseB/scripts.pory"
	applymovement 1, Glasville_HouseB_Dave_Movement_7
# 128 "data/maps/Glasville_HouseB/scripts.pory"
	waitmovement 0
# 129 "data/maps/Glasville_HouseB/scripts.pory"
	removeobject 1
# 130 "data/maps/Glasville_HouseB/scripts.pory"
	playse SE_EXIT
# 131 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_DAVE_LEAVING
# 132 "data/maps/Glasville_HouseB/scripts.pory"
	setvar VAR_MAIN_STORY, 22
# 133 "data/maps/Glasville_HouseB/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 134 "data/maps/Glasville_HouseB/scripts.pory"
	release
	end


# 23 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_0:
# 23 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 23 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 23 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 23 "data/maps/Glasville_HouseB/scripts.pory"
	face_up
	step_end

# 26 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_1:
# 26 "data/maps/Glasville_HouseB/scripts.pory"
	walk_left
# 26 "data/maps/Glasville_HouseB/scripts.pory"
	walk_left
# 26 "data/maps/Glasville_HouseB/scripts.pory"
	walk_left
# 26 "data/maps/Glasville_HouseB/scripts.pory"
	face_down
	step_end

# 30 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_2:
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	walk_down
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	walk_right
# 30 "data/maps/Glasville_HouseB/scripts.pory"
	walk_up
	step_end

# 33 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_3:
# 33 "data/maps/Glasville_HouseB/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_4:
# 35 "data/maps/Glasville_HouseB/scripts.pory"
	face_right
	step_end

# 73 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_5:
# 73 "data/maps/Glasville_HouseB/scripts.pory"
	emote_exclamation_mark
# 73 "data/maps/Glasville_HouseB/scripts.pory"
	jump_in_place_down
	step_end

# 116 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_6:
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_right
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 116 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
	step_end

# 127 "data/maps/Glasville_HouseB/scripts.pory"
Glasville_HouseB_Dave_Movement_7:
# 127 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 127 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 127 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
# 127 "data/maps/Glasville_HouseB/scripts.pory"
	walk_fast_down
	step_end

Glasville_HouseB_Dave_Text_0:
# 10 "data/maps/Glasville_HouseB/scripts.pory"
	.string "What? I'm not doing anything wrong\n"
	.string "here. Leave me alone, are you with the\l"
	.string "cops?$"

Glasville_HouseB_Dave_Text_1:
# 17 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Dave$"

Glasville_HouseB_Dave_Text_2:
# 18 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Finally, you're here. Look, my name is\n"
	.string "Dave, and I work... Well, used to work at\l"
	.string "the waste treatment plant in\l"
	.string "Passwacan. Heckin' AI took my job, as\l"
	.string "it's supposed to know how to properly\l"
	.string "blend chemicals. Since then, I've been\l"
	.string "trying to sell my own concoctions, but\l"
	.string "the business just doesn't seem to\l"
	.string "catch up. For now! That's why you're the\l"
	.string "perfect subject.$"

Glasville_HouseB_Dave_Text_3:
# 39 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Take this.$"

Glasville_HouseB_Dave_Text_4:
# 43 "data/maps/Glasville_HouseB/scripts.pory"
	.string "This concoction right here, which I\n"
	.string "called 'The Dead-Seer' (patent pending)\l"
	.string "will allow you to meet Corinna, even if\l"
	.string "she's dead! You just have to pour a few\l"
	.string "drops of it on her tombstone. If it\l"
	.string "works, and believe me, it will, you'll\l"
	.string "spread the word that I'm the greatest\l"
	.string "scientist in Thura.$"

Glasville_HouseB_Dave_Text_5:
# 45 "data/maps/Glasville_HouseB/scripts.pory"
	.string "...$"

Glasville_HouseB_Dave_Text_6:
# 47 "data/maps/Glasville_HouseB/scripts.pory"
	.string "...Where's her tombstone? Well, the\n"
	.string "cemetery is on the west of Glasville.\l"
	.string "You can't miss it.$"

Glasville_HouseB_Dave_Text_7:
# 51 "data/maps/Glasville_HouseB/scripts.pory"
	.string "I brewed this potion on my gas stove. I\n"
	.string "don't have any equipment yet, but don't\l"
	.string "worry: I know what I'm doing. Remember,\l"
	.string "I'm a well-endowed scientist. Now go!\l"
	.string "And don't forget to report back to me\l"
	.string "once you're finished.$"

Glasville_HouseB_Dave_Text_8:
# 60 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Well? Did it work?$"

Glasville_HouseB_Dave_Text_9:
# 78 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Haha! I knew it! Dave, you still have it\n"
	.string "in you!$"

Glasville_HouseB_Dave_Text_10:
# 83 "data/maps/Glasville_HouseB/scripts.pory"
	.string "...Huh? Corinna's spirit isn't happy?\n"
	.string "Well... Uh... Do you think that she's going\l"
	.string "to haunt me?$"

Glasville_HouseB_Dave_Text_11:
# 88 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Oh man... Either way, I don't feel great\n"
	.string "about this place. It's time I settle\l"
	.string "somewhere else. As a gift from believing\l"
	.string "in me, you can have that.$"

Glasville_HouseB_Dave_Text_12:
# 93 "data/maps/Glasville_HouseB/scripts.pory"
	.string "You just earned the Soul Emblem.$"

Glasville_HouseB_Dave_Text_13:
# 97 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Take my number. Maybe we'll need each\n"
	.string "other in the future!$"

Glasville_HouseB_Dave_Text_14:
# 101 "data/maps/Glasville_HouseB/scripts.pory"
	.string "You registered Scientist Dave.$"

Glasville_HouseB_Dave_Text_15:
# 106 "data/maps/Glasville_HouseB/scripts.pory"
	.string "Now, if you'll excuse me.$"
