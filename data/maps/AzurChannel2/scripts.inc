# 1 "data/maps/AzurChannel2/scripts.pory"

# 2 "data/maps/AzurChannel2/scripts.pory"
AzurChannel2_MapScripts::
# 3 "data/maps/AzurChannel2/scripts.pory"
	.byte 0

AzurChannel2_Deandra::
# 7 "data/maps/AzurChannel2/scripts.pory"
	trainerbattle_single TRAINER_AZUR_7, Deandra1, Deandra2
# 8 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Deandra_Text_0
# 9 "data/maps/AzurChannel2/scripts.pory"
	closemessage
	end


AzurChannel2_Noe::
# 24 "data/maps/AzurChannel2/scripts.pory"
	lock
# 25 "data/maps/AzurChannel2/scripts.pory"
	faceplayer
# 26 "data/maps/AzurChannel2/scripts.pory"
	goto_if_set FLAG_QUEST_DUSK_COMPLETE, AzurChannel2_Noe_5
AzurChannel2_Noe_4:
# 31 "data/maps/AzurChannel2/scripts.pory"
	goto_if_set FLAG_QUEST_DUSK, AzurChannel2_Noe_2
# 56 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_5
# 57 "data/maps/AzurChannel2/scripts.pory"
	trainerbattle_no_intro TRAINER_AZUR_8, Noe2
# 58 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_6
# 59 "data/maps/AzurChannel2/scripts.pory"
	startquest QUEST_DUSK
# 60 "data/maps/AzurChannel2/scripts.pory"
	setflag FLAG_QUEST_DUSK
# 61 "data/maps/AzurChannel2/scripts.pory"
	release
	end

AzurChannel2_Noe_1:
# 27 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_0
# 28 "data/maps/AzurChannel2/scripts.pory"
	release
	end

AzurChannel2_Noe_2:
# 32 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_1
# 33 "data/maps/AzurChannel2/scripts.pory"
	checkitem ITEM_DUSK_STONE
# 34 "data/maps/AzurChannel2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AzurChannel2_Noe_8
# 49 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_3
# 50 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_4
# 51 "data/maps/AzurChannel2/scripts.pory"
	release
	end

AzurChannel2_Noe_5:
# 26 "data/maps/AzurChannel2/scripts.pory"
	goto_if_set FLAG_QUEST_DUSK, AzurChannel2_Noe_1
	goto AzurChannel2_Noe_4

AzurChannel2_Noe_8:
# 35 "data/maps/AzurChannel2/scripts.pory"
	delay 20
# 36 "data/maps/AzurChannel2/scripts.pory"
	applymovement 5, AzurChannel2_Noe_Movement_0
# 37 "data/maps/AzurChannel2/scripts.pory"
	waitmovement 0
# 38 "data/maps/AzurChannel2/scripts.pory"
	playse SE_PIN
# 39 "data/maps/AzurChannel2/scripts.pory"
	delay 40
# 40 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Noe_Text_2
# 41 "data/maps/AzurChannel2/scripts.pory"
	removeitem ITEM_DUSK_STONE
# 42 "data/maps/AzurChannel2/scripts.pory"
	giveitem ITEM_DAWN_STONE
# 43 "data/maps/AzurChannel2/scripts.pory"
	completequest QUEST_DUSK
# 44 "data/maps/AzurChannel2/scripts.pory"
	setflag FLAG_QUEST_DUSK_COMPLETE
# 45 "data/maps/AzurChannel2/scripts.pory"
	release
	end


AzurChannel2_Zadj::
# 73 "data/maps/AzurChannel2/scripts.pory"
	trainerbattle_single TRAINER_AZUR_9, Zadj1, Zadj2
# 74 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Zadj_Text_0
# 75 "data/maps/AzurChannel2/scripts.pory"
	closemessage
	end


AzurChannel2_Esteban::
# 90 "data/maps/AzurChannel2/scripts.pory"
	trainerbattle_single TRAINER_AZUR_10, Esteban1, Esteban2
# 91 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Esteban_Text_0
# 92 "data/maps/AzurChannel2/scripts.pory"
	closemessage
	end


AzurChannel2_Giancarlo::
# 107 "data/maps/AzurChannel2/scripts.pory"
	trainerbattle_single TRAINER_AZUR_11, Giancarlo1, Giancarlo2
# 108 "data/maps/AzurChannel2/scripts.pory"
	compare VAR_DISAPPEARANCE, 3
	goto_if_eq AzurChannel2_Giancarlo_2
# 112 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Giancarlo_Text_1
AzurChannel2_Giancarlo_1:
# 114 "data/maps/AzurChannel2/scripts.pory"
	closemessage
	end

AzurChannel2_Giancarlo_2:
# 109 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Giancarlo_Text_0
	goto AzurChannel2_Giancarlo_1


AzurChannel2_SwimmerM::
# 130 "data/maps/AzurChannel2/scripts.pory"
	lock
# 131 "data/maps/AzurChannel2/scripts.pory"
	faceplayer
# 132 "data/maps/AzurChannel2/scripts.pory"
	gettimeofday
# 133 "data/maps/AzurChannel2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_lt AzurChannel2_SwimmerM_2
# 137 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_SwimmerM_Text_1
AzurChannel2_SwimmerM_1:
# 139 "data/maps/AzurChannel2/scripts.pory"
	release
	end

AzurChannel2_SwimmerM_2:
# 134 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_SwimmerM_Text_0
	goto AzurChannel2_SwimmerM_1


AzurChannel2_SwimmerF::
# 144 "data/maps/AzurChannel2/scripts.pory"
	lock
# 145 "data/maps/AzurChannel2/scripts.pory"
	faceplayer
# 146 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_SwimmerF_Text_0
# 147 "data/maps/AzurChannel2/scripts.pory"
	release
	end


AzurChannel2_Item::
# 154 "data/maps/AzurChannel2/scripts.pory"
	lock
# 155 "data/maps/AzurChannel2/scripts.pory"
	removeobject 8
# 156 "data/maps/AzurChannel2/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 157 "data/maps/AzurChannel2/scripts.pory"
	setflag FLAG_ITEM_AZUR_2
# 158 "data/maps/AzurChannel2/scripts.pory"
	release
	end


AzurChannel2_Item2::
# 163 "data/maps/AzurChannel2/scripts.pory"
	lock
# 164 "data/maps/AzurChannel2/scripts.pory"
	removeobject 9
# 165 "data/maps/AzurChannel2/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 166 "data/maps/AzurChannel2/scripts.pory"
	setflag FLAG_ITEM_AZUR_3
# 167 "data/maps/AzurChannel2/scripts.pory"
	msgbox AzurChannel2_Item2_Text_0
# 168 "data/maps/AzurChannel2/scripts.pory"
	release
	end


# 36 "data/maps/AzurChannel2/scripts.pory"
AzurChannel2_Noe_Movement_0:
# 36 "data/maps/AzurChannel2/scripts.pory"
	emote_exclamation_mark
	step_end

AzurChannel2_Deandra_Text_0:
# 8 "data/maps/AzurChannel2/scripts.pory"
	.string "Did you see how strong Poliwrath is? I'm\n"
	.string "in love with it!$"

AzurChannel2_Noe_Text_0:
# 27 "data/maps/AzurChannel2/scripts.pory"
	.string "For some reason, I mistook Dawn for\n"
	.string "Dusk. Rookie mistake! Thanks again,\l"
	.string "Honchkrow really is majestic.$"

AzurChannel2_Noe_Text_1:
# 32 "data/maps/AzurChannel2/scripts.pory"
	.string "Do you have the Dusk Stone I asked you\n"
	.string "for?$"

AzurChannel2_Noe_Text_2:
# 40 "data/maps/AzurChannel2/scripts.pory"
	.string "Oh, thank you, thank you! I can finally\n"
	.string "make Murkrow evolve! As a gift, take\l"
	.string "this.$"

AzurChannel2_Noe_Text_3:
# 49 "data/maps/AzurChannel2/scripts.pory"
	.string "...$"

AzurChannel2_Noe_Text_4:
# 50 "data/maps/AzurChannel2/scripts.pory"
	.string "Please! It's the only thing I need right\n"
	.string "now!$"

AzurChannel2_Noe_Text_5:
# 56 "data/maps/AzurChannel2/scripts.pory"
	.string "You got a Dusk Stone by any chance?\n"
	.string "I'll literally give you anything for it.$"

AzurChannel2_Noe_Text_6:
# 58 "data/maps/AzurChannel2/scripts.pory"
	.string "I'm in dire need of a Dusk Stone.\n"
	.string "Murkrow cannot fight anymore, it's too\l"
	.string "weak! Please, bring me one!$"

AzurChannel2_Zadj_Text_0:
# 74 "data/maps/AzurChannel2/scripts.pory"
	.string "Why are people in such a hurry? Take\n"
	.string "the time to enjoy the surroundings!$"

AzurChannel2_Esteban_Text_0:
# 91 "data/maps/AzurChannel2/scripts.pory"
	.string "I'll tell you why I'm here. My damn\n"
	.string "father. He used to be a big time swimmer\l"
	.string "and he's projecting on me.$"

AzurChannel2_Giancarlo_Text_0:
# 109 "data/maps/AzurChannel2/scripts.pory"
	.string "Well, something happened because\n"
	.string "everything's back from their vacation.\l"
	.string "Business is back, baby!$"

AzurChannel2_Giancarlo_Text_1:
# 112 "data/maps/AzurChannel2/scripts.pory"
	.string "You must have met a lot of colleagues:\n"
	.string "why? Why it is that we can't find any\l"
	.string "fishes in the sea?$"

AzurChannel2_SwimmerM_Text_0:
# 134 "data/maps/AzurChannel2/scripts.pory"
	.string "Ah, what a beautiful day! The sea is at\n"
	.string "the perfect temperature!$"

AzurChannel2_SwimmerM_Text_1:
# 137 "data/maps/AzurChannel2/scripts.pory"
	.string "Ah, what a wonderful night! The sea is\n"
	.string "at the perfect temperature!$"

AzurChannel2_SwimmerF_Text_0:
# 146 "data/maps/AzurChannel2/scripts.pory"
	.string "Help! I'm drowning!$"

AzurChannel2_Item2_Text_0:
# 167 "data/maps/AzurChannel2/scripts.pory"
	.string "(It looks strangely familiar...)$"

Deandra1::
# 13 "data/maps/AzurChannel2/scripts.pory"
	.string "Have a taste of these hands.$"

Deandra2::
# 17 "data/maps/AzurChannel2/scripts.pory"
	.string "Oh?$"

Noe2::
# 66 "data/maps/AzurChannel2/scripts.pory"
	.string "I see, you're the stingy type...$"

Zadj1::
# 79 "data/maps/AzurChannel2/scripts.pory"
	.string "Hey, hey! Time to relax! You're not far\n"
	.string "from Oparque, breathe!$"

Zadj2::
# 83 "data/maps/AzurChannel2/scripts.pory"
	.string "You were already relaxed, my bad.$"

Esteban1::
# 96 "data/maps/AzurChannel2/scripts.pory"
	.string "I hate swimming. Why am I here?$"

Esteban2::
# 100 "data/maps/AzurChannel2/scripts.pory"
	.string "Great!$"

Giancarlo1::
# 118 "data/maps/AzurChannel2/scripts.pory"
	.string "At that point, I'm just pretending. For\n"
	.string "old time's sake.$"

Giancarlo2::
# 122 "data/maps/AzurChannel2/scripts.pory"
	.string "And even here, I can't figure it out.$"
