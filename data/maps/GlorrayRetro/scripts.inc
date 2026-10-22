# 1 "data/maps/GlorrayRetro/scripts.pory"

# 2 "data/maps/GlorrayRetro/scripts.pory"
GlorrayRetro_MapScripts::
# 3 "data/maps/GlorrayRetro/scripts.pory"
	.byte 0

GlorrayRetro_Man::
# 7 "data/maps/GlorrayRetro/scripts.pory"
	lock
# 8 "data/maps/GlorrayRetro/scripts.pory"
	faceplayer
# 9 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Man_Text_0
# 10 "data/maps/GlorrayRetro/scripts.pory"
	release
	end


GlorrayRetro_Woman::
# 15 "data/maps/GlorrayRetro/scripts.pory"
	lock
# 16 "data/maps/GlorrayRetro/scripts.pory"
	faceplayer
# 17 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Woman_Text_0
# 18 "data/maps/GlorrayRetro/scripts.pory"
	release
	end


GlorrayRetro_Kid::
# 23 "data/maps/GlorrayRetro/scripts.pory"
	lock
# 24 "data/maps/GlorrayRetro/scripts.pory"
	faceplayer
# 25 "data/maps/GlorrayRetro/scripts.pory"
	goto_if_set FLAG_POTION_RETRO, GlorrayRetro_Kid_2
# 29 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Kid_Text_1, MSGBOX_YESNO
# 30 "data/maps/GlorrayRetro/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GlorrayRetro_Kid_5
# 44 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Kid_Text_4
GlorrayRetro_Kid_1:
# 47 "data/maps/GlorrayRetro/scripts.pory"
	release
	end

GlorrayRetro_Kid_2:
# 26 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Kid_Text_0
	goto GlorrayRetro_Kid_1

GlorrayRetro_Kid_5:
# 31 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Kid_Text_2
# 32 "data/maps/GlorrayRetro/scripts.pory"
	checkitem ITEM_POTION
# 33 "data/maps/GlorrayRetro/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GlorrayRetro_Kid_8
	goto GlorrayRetro_Kid_1

GlorrayRetro_Kid_8:
# 34 "data/maps/GlorrayRetro/scripts.pory"
	playse SE_PIN
# 35 "data/maps/GlorrayRetro/scripts.pory"
	applymovement 1, GlorrayRetro_Kid_Movement_0
# 36 "data/maps/GlorrayRetro/scripts.pory"
	waitmovement 0
# 37 "data/maps/GlorrayRetro/scripts.pory"
	delay 40
# 38 "data/maps/GlorrayRetro/scripts.pory"
	msgbox GlorrayRetro_Kid_Text_3
# 39 "data/maps/GlorrayRetro/scripts.pory"
	removeitem ITEM_POTION
# 40 "data/maps/GlorrayRetro/scripts.pory"
	setflag FLAG_POTION_RETRO
	goto GlorrayRetro_Kid_1


# 35 "data/maps/GlorrayRetro/scripts.pory"
GlorrayRetro_Kid_Movement_0:
# 35 "data/maps/GlorrayRetro/scripts.pory"
	emote_exclamation_mark
	step_end

GlorrayRetro_Man_Text_0:
# 9 "data/maps/GlorrayRetro/scripts.pory"
	.string "I want to fight Aisha in her gym, but my\n"
	.string "Pokémons are too weak for now. Oh well!$"

GlorrayRetro_Woman_Text_0:
# 17 "data/maps/GlorrayRetro/scripts.pory"
	.string "We're extremely lucky to live in such a\n"
	.string "remote place, away from all the noise\l"
	.string "and worries of the city.$"

GlorrayRetro_Kid_Text_0:
# 26 "data/maps/GlorrayRetro/scripts.pory"
	.string "Hi {PLAYER}! Thanks to you, Sentret is\n"
	.string "back in shape! Thank you again!$"

GlorrayRetro_Kid_Text_1:
# 29 "data/maps/GlorrayRetro/scripts.pory"
	.string "Hi {PLAYER}!! My Sentret's not doing\n"
	.string "so well, and I'm afraid the nurse's gonna\l"
	.string "yell at me... Will you buy me a Potion?\l"
	.string "Please? Pretty please?$"

GlorrayRetro_Kid_Text_2:
# 31 "data/maps/GlorrayRetro/scripts.pory"
	.string "Thank you so much!! I'll wait for you\n"
	.string "here!$"

GlorrayRetro_Kid_Text_3:
# 38 "data/maps/GlorrayRetro/scripts.pory"
	.string "Oh thank you! Thank you!$"

GlorrayRetro_Kid_Text_4:
# 44 "data/maps/GlorrayRetro/scripts.pory"
	.string "Oh... But Sentret is about to faint...$"
