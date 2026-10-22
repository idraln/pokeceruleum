# 1 "data/maps/Passwacan_House1/scripts.pory"

# 2 "data/maps/Passwacan_House1/scripts.pory"
Passwacan_House1_MapScripts::
# 3 "data/maps/Passwacan_House1/scripts.pory"
	.byte 0

Passwacan_House1_Elder::
# 7 "data/maps/Passwacan_House1/scripts.pory"
	lock
# 8 "data/maps/Passwacan_House1/scripts.pory"
	faceplayer
# 9 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_100_PERCENT, Passwacan_House1_Elder_1
# 40 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_4
# 41 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 42 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 43 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_5
# 44 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 45 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 46 "data/maps/Passwacan_House1/scripts.pory"
	applymovement 1, Passwacan_House1_Elder_Movement_0
# 47 "data/maps/Passwacan_House1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_6
# 49 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 50 "data/maps/Passwacan_House1/scripts.pory"
	startquest QUEST_100PERCENT
# 51 "data/maps/Passwacan_House1/scripts.pory"
	setflag FLAG_100_PERCENT
# 52 "data/maps/Passwacan_House1/scripts.pory"
	turnobject 1, DIR_NORTH
# 53 "data/maps/Passwacan_House1/scripts.pory"
	release
	end

Passwacan_House1_Elder_1:
# 10 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_0
# 11 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_DUSK_COMPLETE, Passwacan_House1_Elder_7
Passwacan_House1_Elder_4:
# 35 "data/maps/Passwacan_House1/scripts.pory"
	turnobject 1, DIR_NORTH
# 36 "data/maps/Passwacan_House1/scripts.pory"
	release
	end

Passwacan_House1_Elder_5:
# 13 "data/maps/Passwacan_House1/scripts.pory"
	delay 40
# 14 "data/maps/Passwacan_House1/scripts.pory"
	applymovement 1, Passwacan_House1_Elder_Movement_0
# 15 "data/maps/Passwacan_House1/scripts.pory"
	waitmovement 0
# 16 "data/maps/Passwacan_House1/scripts.pory"
	delay 40
# 17 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_1
# 18 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 19 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 20 "data/maps/Passwacan_House1/scripts.pory"
	applymovement 1, Passwacan_House1_Elder_Movement_1
# 21 "data/maps/Passwacan_House1/scripts.pory"
	waitmovement 0
# 22 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 23 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_2
# 24 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 25 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 26 "data/maps/Passwacan_House1/scripts.pory"
	applymovement 1, Passwacan_House1_Elder_Movement_2
# 27 "data/maps/Passwacan_House1/scripts.pory"
	waitmovement 0
# 28 "data/maps/Passwacan_House1/scripts.pory"
	delay 20
# 29 "data/maps/Passwacan_House1/scripts.pory"
	msgbox Passwacan_House1_Elder_Text_3
# 30 "data/maps/Passwacan_House1/scripts.pory"
	closemessage
# 31 "data/maps/Passwacan_House1/scripts.pory"
	setvar VAR_MAIN_STORY, 59
# 32 "data/maps/Passwacan_House1/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 33 "data/maps/Passwacan_House1/scripts.pory"
	special GameClear
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_6:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_VIKKIE_COMPLETE, Passwacan_House1_Elder_11
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_7:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_MOTHER_COMPLETE, Passwacan_House1_Elder_6
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_10:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_POKEDEX_COMPLETED, Passwacan_House1_Elder_15
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_11:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_LAPRAS_COMPLETE, Passwacan_House1_Elder_10
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_14:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_INTRUDER_COMPLETE, Passwacan_House1_Elder_19
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_15:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_BOT_HOMEWORK, Passwacan_House1_Elder_14
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_18:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	compare VAR_HOUSE_GLASVILLE, 3
	goto_if_eq Passwacan_House1_Elder_23
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_19:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_RUBIES_COMPLETE, Passwacan_House1_Elder_18
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_22:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq Passwacan_House1_Elder_27
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_23:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_FOSSIL_REVIVED, Passwacan_House1_Elder_22
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_26:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	compare VAR_QUEST_HERMIT, 6
	goto_if_eq Passwacan_House1_Elder_31
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_27:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_EMBLEMS_COMPLETE, Passwacan_House1_Elder_26
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_30:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_TRIATHLON_COMPLETED, Passwacan_House1_Elder_35
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_31:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_SAM_COMPLETE, Passwacan_House1_Elder_30
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_34:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_SHARDS_COMPLETE, Passwacan_House1_Elder_39
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_35:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_PASTORAL_EKA, Passwacan_House1_Elder_34
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_38:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_PRESIDENT_QUEST_COMPLETE, Passwacan_House1_Elder_43
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_39:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	compare VAR_MAIN_STORY, 58
	goto_if_eq Passwacan_House1_Elder_38
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_42:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_XATU_QUEST_COMPLETE, Passwacan_House1_Elder_47
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_43:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_NERD, Passwacan_House1_Elder_42
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_46:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_WOMAN_SAPPHIRE_B2, Passwacan_House1_Elder_51
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_47:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	compare VAR_SAPPHIRE_LOVERS, 3
	goto_if_eq Passwacan_House1_Elder_46
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_50:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_DIANCIE_QUEST_COMPLETE, Passwacan_House1_Elder_55
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_51:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_QUEST_TM_COMPLETED, Passwacan_House1_Elder_50
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_54:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_PARTY_FAMILY, Passwacan_House1_Elder_59
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_55:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_30_ROD_GET, Passwacan_House1_Elder_54
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_58:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_HOME_QUEST_COMPLETE, Passwacan_House1_Elder_5
	goto Passwacan_House1_Elder_4

Passwacan_House1_Elder_59:
# 12 "data/maps/Passwacan_House1/scripts.pory"
	goto_if_set FLAG_FANDANGO_QUEST_COMPLETE, Passwacan_House1_Elder_58
	goto Passwacan_House1_Elder_4


# 14 "data/maps/Passwacan_House1/scripts.pory"
Passwacan_House1_Elder_Movement_0:
# 14 "data/maps/Passwacan_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 20 "data/maps/Passwacan_House1/scripts.pory"
Passwacan_House1_Elder_Movement_1:
# 20 "data/maps/Passwacan_House1/scripts.pory"
	face_away_player
	step_end

# 26 "data/maps/Passwacan_House1/scripts.pory"
Passwacan_House1_Elder_Movement_2:
# 26 "data/maps/Passwacan_House1/scripts.pory"
	face_player
	step_end

Passwacan_House1_Elder_Text_0:
# 10 "data/maps/Passwacan_House1/scripts.pory"
	.string "Welcome back, young one. How are your\n"
	.string "adventures going? Well, I hope.$"

Passwacan_House1_Elder_Text_1:
# 17 "data/maps/Passwacan_House1/scripts.pory"
	.string "...Oh, my! You did it! You completed your\n"
	.string "quest log!$"

Passwacan_House1_Elder_Text_2:
# 23 "data/maps/Passwacan_House1/scripts.pory"
	.string "...Please, forgive me. You moved me to\n"
	.string "tears...$"

Passwacan_House1_Elder_Text_3:
# 29 "data/maps/Passwacan_House1/scripts.pory"
	.string "I'm sure you've built strong and durable\n"
	.string "memories with your partners. How I wish\l"
	.string "I was young again... Please, enjoy each\l"
	.string "and every moment of the rest of your\l"
	.string "life. The years go by faster than we\l"
	.string "realise...$"

Passwacan_House1_Elder_Text_4:
# 40 "data/maps/Passwacan_House1/scripts.pory"
	.string "Oh... You look so young, so full of life...$"

Passwacan_House1_Elder_Text_5:
# 43 "data/maps/Passwacan_House1/scripts.pory"
	.string "You remind me of my youth. How long ago\n"
	.string "that was! You must've lived so many\l"
	.string "adventures with your partners.$"

Passwacan_House1_Elder_Text_6:
# 48 "data/maps/Passwacan_House1/scripts.pory"
	.string "Oh! You have a quest log! How lucky you\n"
	.string "are! I'll give you one. Live as many\l"
	.string "adventures as you can, and once you've\l"
	.string "done that, come back to see me.$"
