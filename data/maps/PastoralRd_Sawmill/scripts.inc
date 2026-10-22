# 1 "data/maps/PastoralRd_Sawmill/scripts.pory"

# 2 "data/maps/PastoralRd_Sawmill/scripts.pory"
PastoralRd_Sawmill_MapScripts::
# 3 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.byte 0

PastoralRd_Sawmill_Owner::
# 7 "data/maps/PastoralRd_Sawmill/scripts.pory"
	lock
# 8 "data/maps/PastoralRd_Sawmill/scripts.pory"
	faceplayer
# 9 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Owner_Text_0, MSGBOX_YESNO
# 10 "data/maps/PastoralRd_Sawmill/scripts.pory"
	goto PastoralRd_Sawmill_Honey
# 11 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end


PastoralRd_Sawmill_Honey::
# 16 "data/maps/PastoralRd_Sawmill/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PastoralRd_Sawmill_Honey_1
# 32 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Honey_Text_3
# 33 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end

PastoralRd_Sawmill_Honey_1:
# 17 "data/maps/PastoralRd_Sawmill/scripts.pory"
	checkmoney 50
# 18 "data/maps/PastoralRd_Sawmill/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PastoralRd_Sawmill_Honey_4
# 26 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Honey_Text_2
# 27 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end

PastoralRd_Sawmill_Honey_4:
# 19 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Honey_Text_0
# 20 "data/maps/PastoralRd_Sawmill/scripts.pory"
	giveitem ITEM_HONEY
# 21 "data/maps/PastoralRd_Sawmill/scripts.pory"
	removemoney 50
# 22 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Honey_Text_1, MSGBOX_YESNO
# 23 "data/maps/PastoralRd_Sawmill/scripts.pory"
	goto PastoralRd_Sawmill_Honey
	return


PastoralRd_Sawmill_Mom::
# 39 "data/maps/PastoralRd_Sawmill/scripts.pory"
	lock
# 40 "data/maps/PastoralRd_Sawmill/scripts.pory"
	faceplayer
# 41 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Mom_Text_0
# 42 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end


PastoralRd_Sawmill_Kid::
# 47 "data/maps/PastoralRd_Sawmill/scripts.pory"
	lock
# 48 "data/maps/PastoralRd_Sawmill/scripts.pory"
	faceplayer
# 49 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Kid_Text_0
# 50 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end


PastoralRd_Sawmill_Man::
# 55 "data/maps/PastoralRd_Sawmill/scripts.pory"
	lock
# 56 "data/maps/PastoralRd_Sawmill/scripts.pory"
	faceplayer
# 57 "data/maps/PastoralRd_Sawmill/scripts.pory"
	goto_if_set FLAG_HERACRONITE_GIVEN, PastoralRd_Sawmill_Man_1
# 63 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Man_Text_1
# 64 "data/maps/PastoralRd_Sawmill/scripts.pory"
	checkspecies SPECIES_HERACROSS, NO_PARTY_SCREEN
# 65 "data/maps/PastoralRd_Sawmill/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PastoralRd_Sawmill_Man_4
# 78 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end

PastoralRd_Sawmill_Man_1:
# 58 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Man_Text_0
# 59 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end

PastoralRd_Sawmill_Man_4:
# 66 "data/maps/PastoralRd_Sawmill/scripts.pory"
	closemessage
# 67 "data/maps/PastoralRd_Sawmill/scripts.pory"
	delay 20
# 68 "data/maps/PastoralRd_Sawmill/scripts.pory"
	applymovement 2, PastoralRd_Sawmill_Man_Movement_0
# 69 "data/maps/PastoralRd_Sawmill/scripts.pory"
	waitmovement 0
# 70 "data/maps/PastoralRd_Sawmill/scripts.pory"
	delay 40
# 71 "data/maps/PastoralRd_Sawmill/scripts.pory"
	msgbox PastoralRd_Sawmill_Man_Text_2
# 72 "data/maps/PastoralRd_Sawmill/scripts.pory"
	giveitem ITEM_HERACRONITE
# 73 "data/maps/PastoralRd_Sawmill/scripts.pory"
	setflag FLAG_HERACRONITE_GIVEN
# 74 "data/maps/PastoralRd_Sawmill/scripts.pory"
	release
	end


# 68 "data/maps/PastoralRd_Sawmill/scripts.pory"
PastoralRd_Sawmill_Man_Movement_0:
# 68 "data/maps/PastoralRd_Sawmill/scripts.pory"
	emote_exclamation_mark
	step_end

PastoralRd_Sawmill_Owner_Text_0:
# 9 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "Hey there! Welcome to our cabin! Do you\n"
	.string "need honey? We produce it ourselves.\l"
	.string "It's only ¥50.$"

PastoralRd_Sawmill_Honey_Text_0:
# 19 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "Thank you! Here it is.$"

PastoralRd_Sawmill_Honey_Text_1:
# 22 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "Do you need some more?$"

PastoralRd_Sawmill_Honey_Text_2:
# 26 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "I'm sorry, you don't have enough money!\n"
	.string "Come back soon!$"

PastoralRd_Sawmill_Honey_Text_3:
# 32 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "No worries! Enjoy your time here!$"

PastoralRd_Sawmill_Mom_Text_0:
# 41 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "I didn't think that this trip to the\n"
	.string "refuge was going to be interesting,\l"
	.string "turns out it was! And their honey is\l"
	.string "delicious!$"

PastoralRd_Sawmill_Kid_Text_0:
# 49 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "Look! I caught a Wurmple! This is the\n"
	.string "best day of my life!!$"

PastoralRd_Sawmill_Man_Text_0:
# 58 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "I hope I've made you want to become a\n"
	.string "fan of Heracross!$"

PastoralRd_Sawmill_Man_Text_1:
# 63 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "I'm a huge fan of Heracross. Show me\n"
	.string "one, and I'll gift you something\l"
	.string "awesome.$"

PastoralRd_Sawmill_Man_Text_2:
# 71 "data/maps/PastoralRd_Sawmill/scripts.pory"
	.string "Woah! How lucky you are! Isn't it\n"
	.string "gorgeous? You haven't seen anything\l"
	.string "yet. Give it this item, and you'll see!$"
