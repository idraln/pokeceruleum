# 1 "data/maps/SapphireCity_Building8/scripts.pory"

# 2 "data/maps/SapphireCity_Building8/scripts.pory"
SapphireCity_Building8_MapScripts::
# 3 "data/maps/SapphireCity_Building8/scripts.pory"
	.byte 0

SapphireCity_Building8_Cash::
# 7 "data/maps/SapphireCity_Building8/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building8/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Cash_Text_0
# 10 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Cash_Text_1
# 11 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Cash_Text_2
# 12 "data/maps/SapphireCity_Building8/scripts.pory"
	trainerbattle_no_intro TRAINER_SAPPHIRE_CASHIER, SCB8_Cash
# 13 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Cash_Text_3
# 14 "data/maps/SapphireCity_Building8/scripts.pory"
	closemessage
# 15 "data/maps/SapphireCity_Building8/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 16 "data/maps/SapphireCity_Building8/scripts.pory"
	getobjectxy 2, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
# 17 "data/maps/SapphireCity_Building8/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_3
# 18 "data/maps/SapphireCity_Building8/scripts.pory"
	goto_if_lt SapphireCity_Building8_Cash_mvmtSud
# 19 "data/maps/SapphireCity_Building8/scripts.pory"
	goto_if_eq SapphireCity_Building8_Cash_mvmtSud
# 20 "data/maps/SapphireCity_Building8/scripts.pory"
	goto_if_gt SapphireCity_Building8_Cash_mvmtNord
	return


SapphireCity_Building8_Cash_mvmtSud::
# 24 "data/maps/SapphireCity_Building8/scripts.pory"
	applymovement 2, SCB8_Cash_Sud
# 25 "data/maps/SapphireCity_Building8/scripts.pory"
	waitmovement 0
# 26 "data/maps/SapphireCity_Building8/scripts.pory"
	playse SE_EXIT
# 27 "data/maps/SapphireCity_Building8/scripts.pory"
	removeobject 2
# 28 "data/maps/SapphireCity_Building8/scripts.pory"
	setflag FLAG_SAPPHIRE_CASHIER
# 29 "data/maps/SapphireCity_Building8/scripts.pory"
	release
	end


SapphireCity_Building8_Cash_mvmtNord::
# 34 "data/maps/SapphireCity_Building8/scripts.pory"
	applymovement 2, SCB8_Cash_Nord
# 35 "data/maps/SapphireCity_Building8/scripts.pory"
	waitmovement 0
# 36 "data/maps/SapphireCity_Building8/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/SapphireCity_Building8/scripts.pory"
	removeobject 2
# 38 "data/maps/SapphireCity_Building8/scripts.pory"
	setflag FLAG_SAPPHIRE_CASHIER
# 39 "data/maps/SapphireCity_Building8/scripts.pory"
	release
	end


SapphireCity_Building8_Psychic::
# 44 "data/maps/SapphireCity_Building8/scripts.pory"
	lock
# 45 "data/maps/SapphireCity_Building8/scripts.pory"
	faceplayer
# 46 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Psychic_Text_0
# 47 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Cash_Text_1
# 48 "data/maps/SapphireCity_Building8/scripts.pory"
	msgbox SapphireCity_Building8_Psychic_Text_1
# 49 "data/maps/SapphireCity_Building8/scripts.pory"
	release
	end


# 53 "data/maps/SapphireCity_Building8/scripts.pory"
SCB8_Cash_Sud:
# 54 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_down
# 54 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_down
# 55 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 55 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 55 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 56 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_up
# 57 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 57 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
	step_end

# 60 "data/maps/SapphireCity_Building8/scripts.pory"
SCB8_Cash_Nord:
# 61 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_up
# 62 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 62 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 62 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 63 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_down
# 64 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
# 64 "data/maps/SapphireCity_Building8/scripts.pory"
	walk_fast_left
	step_end

SapphireCity_Building8_Cash_Text_0:
# 9 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "What? Stop bothering me, I'm on my lunch\n"
	.string "break, I have 15 minutes left!$"

SapphireCity_Building8_Cash_Text_1:
# 10 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "...$"

SapphireCity_Building8_Cash_Text_2:
# 11 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "What do you mean, customer service? Are\n"
	.string "you serious? I'll show you customer\l"
	.string "service.$"

SapphireCity_Building8_Cash_Text_3:
# 13 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "Thank you very much for that, asshole!\n"
	.string "Now my break is over, and I didn't even\l"
	.string "finish my sandwich. Try and come to the\l"
	.string "supermarket and see what happens.$"

SapphireCity_Building8_Psychic_Text_0:
# 46 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "Don't say a word. I knew you were\n"
	.string "coming.$"

SapphireCity_Building8_Psychic_Text_1:
# 48 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "...Yeah, I'm messing with you. I just\n"
	.string "heard footsteps outside, and I was a\l"
	.string "bit curious.$"

SCB8_Cash::
# 67 "data/maps/SapphireCity_Building8/scripts.pory"
	.string "Oh, great.$"
