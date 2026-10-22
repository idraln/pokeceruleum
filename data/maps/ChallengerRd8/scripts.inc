# 1 "data/maps/ChallengerRd8/scripts.pory"

# 2 "data/maps/ChallengerRd8/scripts.pory"
ChallengerRd8_MapScripts::
# 3 "data/maps/ChallengerRd8/scripts.pory"
	.byte 0

ChallengerRd8_Nurse::
# 7 "data/maps/ChallengerRd8/scripts.pory"
	lock
# 8 "data/maps/ChallengerRd8/scripts.pory"
	faceplayer
# 9 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Nurse_Text_0, MSGBOX_YESNO
# 10 "data/maps/ChallengerRd8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChallengerRd8_Nurse_2
# 21 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Nurse_Text_3
ChallengerRd8_Nurse_1:
# 23 "data/maps/ChallengerRd8/scripts.pory"
	release
	end

ChallengerRd8_Nurse_2:
# 11 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Nurse_Text_1
# 12 "data/maps/ChallengerRd8/scripts.pory"
	closemessage
# 13 "data/maps/ChallengerRd8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/ChallengerRd8/scripts.pory"
	special HealPlayerParty
# 15 "data/maps/ChallengerRd8/scripts.pory"
	playfanfare MUS_HEAL
# 16 "data/maps/ChallengerRd8/scripts.pory"
	waitfanfare
# 17 "data/maps/ChallengerRd8/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Nurse_Text_2
	goto ChallengerRd8_Nurse_1


ChallengerRd7_Kristoph::
# 28 "data/maps/ChallengerRd8/scripts.pory"
	trainerbattle_single TRAINER_CHALL_13, Kristoph1, Kristoph2
# 29 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd7_Kristoph_Text_0
# 30 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


ChallengerRd7_Troy::
# 45 "data/maps/ChallengerRd8/scripts.pory"
	trainerbattle_single TRAINER_CHALL_14, Troy1, Troy2
# 46 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd7_Troy_Text_0
# 47 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


ChallengerRd7_Marine::
# 62 "data/maps/ChallengerRd8/scripts.pory"
	trainerbattle_single TRAINER_CHALL_15, Marine1, Marine2
# 63 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd7_Marine_Text_0
# 64 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


ChallengerRd8_Item::
# 79 "data/maps/ChallengerRd8/scripts.pory"
	lock
# 80 "data/maps/ChallengerRd8/scripts.pory"
	removeobject 5
# 81 "data/maps/ChallengerRd8/scripts.pory"
	giveitem ITEM_TM13
# 82 "data/maps/ChallengerRd8/scripts.pory"
	setflag FLAG_ITEM_CHALL_5
# 83 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


ChallengerRd8_Item2::
# 88 "data/maps/ChallengerRd8/scripts.pory"
	lock
# 89 "data/maps/ChallengerRd8/scripts.pory"
	removeobject 6
# 90 "data/maps/ChallengerRd8/scripts.pory"
	giveitem ITEM_ICE_STONE
# 91 "data/maps/ChallengerRd8/scripts.pory"
	setflag FLAG_ITEM_CHALL_6
# 92 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


ChallengerRd8_Lapras::
# 97 "data/maps/ChallengerRd8/scripts.pory"
	lock
# 98 "data/maps/ChallengerRd8/scripts.pory"
	faceplayer
# 99 "data/maps/ChallengerRd8/scripts.pory"
	goto_if_set FLAG_LAPRAS, ChallengerRd8_Lapras_5
ChallengerRd8_Lapras_4:
# 104 "data/maps/ChallengerRd8/scripts.pory"
	goto_if_set FLAG_LAPRAS, ChallengerRd8_Lapras_2
# 127 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_5
# 128 "data/maps/ChallengerRd8/scripts.pory"
	startquest QUEST_LAPRAS
# 129 "data/maps/ChallengerRd8/scripts.pory"
	setflag FLAG_LAPRAS
# 130 "data/maps/ChallengerRd8/scripts.pory"
	checkspecies SPECIES_LAPRAS, NO_PARTY_SCREEN
# 131 "data/maps/ChallengerRd8/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChallengerRd8_Lapras_11
# 145 "data/maps/ChallengerRd8/scripts.pory"
	release
	end

ChallengerRd8_Lapras_1:
# 100 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_0
# 101 "data/maps/ChallengerRd8/scripts.pory"
	release
	end

ChallengerRd8_Lapras_2:
# 105 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_1
# 106 "data/maps/ChallengerRd8/scripts.pory"
	checkspecies SPECIES_LAPRAS, NO_PARTY_SCREEN
# 107 "data/maps/ChallengerRd8/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChallengerRd8_Lapras_8
# 122 "data/maps/ChallengerRd8/scripts.pory"
	release
	end

ChallengerRd8_Lapras_5:
# 99 "data/maps/ChallengerRd8/scripts.pory"
	goto_if_set FLAG_LAPRAS_COMPLETE, ChallengerRd8_Lapras_1
	goto ChallengerRd8_Lapras_4

ChallengerRd8_Lapras_8:
# 108 "data/maps/ChallengerRd8/scripts.pory"
	applymovement 7, ChallengerRd8_Lapras_Movement_0
# 109 "data/maps/ChallengerRd8/scripts.pory"
	waitmovement 0
# 110 "data/maps/ChallengerRd8/scripts.pory"
	playse SE_PIN
# 111 "data/maps/ChallengerRd8/scripts.pory"
	delay 40
# 112 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_2
# 113 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_3
# 114 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_4
# 115 "data/maps/ChallengerRd8/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 116 "data/maps/ChallengerRd8/scripts.pory"
	completequest QUEST_LAPRAS
# 117 "data/maps/ChallengerRd8/scripts.pory"
	setflag FLAG_LAPRAS_COMPLETE
# 118 "data/maps/ChallengerRd8/scripts.pory"
	release
	end

ChallengerRd8_Lapras_11:
# 132 "data/maps/ChallengerRd8/scripts.pory"
	applymovement 7, ChallengerRd8_Lapras_Movement_0
# 133 "data/maps/ChallengerRd8/scripts.pory"
	waitmovement 0
# 134 "data/maps/ChallengerRd8/scripts.pory"
	playse SE_PIN
# 135 "data/maps/ChallengerRd8/scripts.pory"
	delay 40
# 136 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_2
# 137 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_3
# 138 "data/maps/ChallengerRd8/scripts.pory"
	msgbox ChallengerRd8_Lapras_Text_4
# 139 "data/maps/ChallengerRd8/scripts.pory"
	giveitem ITEM_FOCUS_SASH
# 140 "data/maps/ChallengerRd8/scripts.pory"
	completequest QUEST_LAPRAS
# 141 "data/maps/ChallengerRd8/scripts.pory"
	release
	end


# 108 "data/maps/ChallengerRd8/scripts.pory"
ChallengerRd8_Lapras_Movement_0:
# 108 "data/maps/ChallengerRd8/scripts.pory"
	emote_exclamation_mark
	step_end

ChallengerRd8_Nurse_Text_0:
# 9 "data/maps/ChallengerRd8/scripts.pory"
	.string "Hello! You're almost there! Would you\n"
	.string "like me to heal your party?$"

ChallengerRd8_Nurse_Text_1:
# 11 "data/maps/ChallengerRd8/scripts.pory"
	.string "Gotcha. Just relax...$"

ChallengerRd8_Nurse_Text_2:
# 18 "data/maps/ChallengerRd8/scripts.pory"
	.string "Here you go, fully healed!$"

ChallengerRd8_Nurse_Text_3:
# 21 "data/maps/ChallengerRd8/scripts.pory"
	.string "Gotcha. Good luck!$"

ChallengerRd7_Kristoph_Text_0:
# 29 "data/maps/ChallengerRd8/scripts.pory"
	.string "So close to the goal... Thank Arceus for\n"
	.string "the nurses. I don't have to go all the\l"
	.string "way back to the start.$"

ChallengerRd7_Troy_Text_0:
# 46 "data/maps/ChallengerRd8/scripts.pory"
	.string "How the hell did I end up here? I really\n"
	.string "need to learn to read a map.$"

ChallengerRd7_Marine_Text_0:
# 63 "data/maps/ChallengerRd8/scripts.pory"
	.string "I'm literally a few steps away from the\n"
	.string "Council HQ. Why did I decide to stop?$"

ChallengerRd8_Lapras_Text_0:
# 100 "data/maps/ChallengerRd8/scripts.pory"
	.string "Thank you again! I need to catch one,\n"
	.string "now.$"

ChallengerRd8_Lapras_Text_1:
# 105 "data/maps/ChallengerRd8/scripts.pory"
	.string "Have you seen it yet?$"

ChallengerRd8_Lapras_Text_2:
# 112 "data/maps/ChallengerRd8/scripts.pory"
	.string "That's it! I knew I wasn't crazy! What's\n"
	.string "it called?$"

ChallengerRd8_Lapras_Text_3:
# 113 "data/maps/ChallengerRd8/scripts.pory"
	.string "...$"

ChallengerRd8_Lapras_Text_4:
# 114 "data/maps/ChallengerRd8/scripts.pory"
	.string "Lapras? What a beautiful name! Thank\n"
	.string "you so much. As a token of my\l"
	.string "appreciation, accept this gift.$"

ChallengerRd8_Lapras_Text_5:
# 127 "data/maps/ChallengerRd8/scripts.pory"
	.string "Have you seen it? A huge Pokémon, it\n"
	.string "looked like a dinosaur! I swear! I'm not\l"
	.string "crazy! Please, if you've got one, show it\l"
	.string "to me. It would mean the world to me.$"

Kristoph1::
# 34 "data/maps/ChallengerRd8/scripts.pory"
	.string "First, a cavern filled to the brim with\n"
	.string "lava, and now, snow? When will it end?$"

Kristoph2::
# 38 "data/maps/ChallengerRd8/scripts.pory"
	.string "And now I have to do it all over again?\n"
	.string "Great!$"

Troy1::
# 51 "data/maps/ChallengerRd8/scripts.pory"
	.string "Hi, is this the way to Frux?$"

Troy2::
# 55 "data/maps/ChallengerRd8/scripts.pory"
	.string "It's NOT???$"

Marine1::
# 68 "data/maps/ChallengerRd8/scripts.pory"
	.string "I'm the last trainer you'll ever face.$"

Marine2::
# 72 "data/maps/ChallengerRd8/scripts.pory"
	.string "Ok, I quit being a trainer.$"
