# 1 "data/maps/Frux/scripts.pory"

# 2 "data/maps/Frux/scripts.pory"
Frux_MapScripts::
# 3 "data/maps/Frux/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Frux_OnTransition
# 4 "data/maps/Frux/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Frux_OnFrame
# 5 "data/maps/Frux/scripts.pory"
    .byte 0
# 6 "data/maps/Frux/scripts.pory"

# 7 "data/maps/Frux/scripts.pory"
Frux_OnFrame:
# 8 "data/maps/Frux/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 36, Frux_SamCall
# 9 "data/maps/Frux/scripts.pory"
    .2byte 0

Frux_OnTransition::
# 13 "data/maps/Frux/scripts.pory"
	setflag FLAG_VISITED_FRUX
	return


Frux_SamCall::
# 17 "data/maps/Frux/scripts.pory"
	lockall
# 18 "data/maps/Frux/scripts.pory"
	faceplayer
# 19 "data/maps/Frux/scripts.pory"
	pokenavcall FruxCall
# 20 "data/maps/Frux/scripts.pory"
	waitmessage
# 21 "data/maps/Frux/scripts.pory"
	setvar VAR_MAIN_STORY, 37
# 22 "data/maps/Frux/scripts.pory"
	setflag FLAG_EARTHQUAKE
# 23 "data/maps/Frux/scripts.pory"
	releaseall
	end


Frux_Hiker::
# 45 "data/maps/Frux/scripts.pory"
	lock
# 46 "data/maps/Frux/scripts.pory"
	faceplayer
# 47 "data/maps/Frux/scripts.pory"
	msgbox Frux_Hiker_Text_0
# 48 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Worker1::
# 53 "data/maps/Frux/scripts.pory"
	lock
# 54 "data/maps/Frux/scripts.pory"
	faceplayer
# 55 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_QUEST_RUBIES, Frux_Worker1_5
Frux_Worker1_4:
# 60 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_QUEST_RUBIES, Frux_Worker1_2
# 87 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_6
# 88 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_3
# 89 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_7
# 90 "data/maps/Frux/scripts.pory"
	giveitem ITEM_GOLD_TEETH
# 91 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_8
# 92 "data/maps/Frux/scripts.pory"
	setflag FLAG_QUEST_RUBIES
# 93 "data/maps/Frux/scripts.pory"
	startquest QUEST_RUBIES
# 94 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Worker1_1:
# 56 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_0
# 57 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Worker1_2:
# 61 "data/maps/Frux/scripts.pory"
	checkitem ITEM_STAR_PIECE
# 62 "data/maps/Frux/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Frux_Worker1_8
# 81 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_1
# 82 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Worker1_5:
# 55 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_QUEST_RUBIES_COMPLETE, Frux_Worker1_1
	goto Frux_Worker1_4

Frux_Worker1_8:
# 63 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_1
# 64 "data/maps/Frux/scripts.pory"
	closemessage
# 65 "data/maps/Frux/scripts.pory"
	delay 20
# 66 "data/maps/Frux/scripts.pory"
	playse SE_PIN
# 67 "data/maps/Frux/scripts.pory"
	applymovement 4, Frux_Worker1_Movement_0
# 68 "data/maps/Frux/scripts.pory"
	waitmovement 0
# 69 "data/maps/Frux/scripts.pory"
	delay 40
# 70 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_2
# 71 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_3
# 72 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_4
# 73 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_3
# 74 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker1_Text_5
# 75 "data/maps/Frux/scripts.pory"
	completequest QUEST_RUBIES
# 76 "data/maps/Frux/scripts.pory"
	setflag FLAG_QUEST_RUBIES_COMPLETE
# 77 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Newbie::
# 100 "data/maps/Frux/scripts.pory"
	lock
# 101 "data/maps/Frux/scripts.pory"
	faceplayer
# 102 "data/maps/Frux/scripts.pory"
	msgbox Frux_Newbie_Text_0
# 103 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Worker2::
# 108 "data/maps/Frux/scripts.pory"
	lock
# 109 "data/maps/Frux/scripts.pory"
	faceplayer
# 110 "data/maps/Frux/scripts.pory"
	checkitem ITEM_TM04
# 111 "data/maps/Frux/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Frux_Worker2_2
# 115 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker2_Text_1
# 116 "data/maps/Frux/scripts.pory"
	giveitem ITEM_TM04
Frux_Worker2_1:
# 118 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Worker2_2:
# 112 "data/maps/Frux/scripts.pory"
	msgbox Frux_Worker2_Text_0
	goto Frux_Worker2_1


Frux_Picnicker::
# 123 "data/maps/Frux/scripts.pory"
	lock
# 124 "data/maps/Frux/scripts.pory"
	faceplayer
# 125 "data/maps/Frux/scripts.pory"
	msgbox Frux_Picnicker_Text_0
# 126 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Sign::
# 131 "data/maps/Frux/scripts.pory"
	lockall
# 132 "data/maps/Frux/scripts.pory"
	msgbox Frux_Sign_Text_0
# 133 "data/maps/Frux/scripts.pory"
	releaseall
	end


Frux_Cameraman::
# 138 "data/maps/Frux/scripts.pory"
	lock
# 139 "data/maps/Frux/scripts.pory"
	faceplayer
# 140 "data/maps/Frux/scripts.pory"
	msgbox Frux_Cameraman_Text_0
# 141 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Scott::
# 146 "data/maps/Frux/scripts.pory"
	lock
# 147 "data/maps/Frux/scripts.pory"
	faceplayer
# 148 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Frux_Scott_5
Frux_Scott_4:
# 172 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Frux_Scott_2
# 201 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_4
# 202 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Scott_1:
# 149 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_0, MSGBOX_YESNO
# 150 "data/maps/Frux/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Frux_Scott_8
# 167 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_2
# 168 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Scott_2:
# 173 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_3, MSGBOX_YESNO
# 174 "data/maps/Frux/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Frux_Scott_11
# 193 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_2
# 194 "data/maps/Frux/scripts.pory"
	setflag FLAG_TRIATHLON_QUEST_STARTED
# 195 "data/maps/Frux/scripts.pory"
	startquest QUEST_TRIATHLON
# 196 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Scott_5:
# 148 "data/maps/Frux/scripts.pory"
	goto_if_set FLAG_TRIATHLON_QUEST_STARTED, Frux_Scott_1
	goto Frux_Scott_4

Frux_Scott_8:
# 151 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_1
# 152 "data/maps/Frux/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/Frux/scripts.pory"
	setvar VAR_TRIATHLON, 1
# 154 "data/maps/Frux/scripts.pory"
	clearflag FLAG_TRIATHLON_NPC
# 155 "data/maps/Frux/scripts.pory"
	setflag FLAG_HIDE_NPC_TRIATHLON
# 156 "data/maps/Frux/scripts.pory"
	setflag FLAG_SCOTT_TRIATHLON
# 157 "data/maps/Frux/scripts.pory"
	clearflag FLAG_TRAINERS_TRIATHLON
# 158 "data/maps/Frux/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 159 "data/maps/Frux/scripts.pory"
	setvar VAR_TRIATHLON_TIME, 0
# 160 "data/maps/Frux/scripts.pory"
	setflag FLAG_CANT_FLY
# 161 "data/maps/Frux/scripts.pory"
	setflag FLAG_TRIATHLON
# 162 "data/maps/Frux/scripts.pory"
	warpsilent MAP_OXIDE_TRAIL, 13, 11
# 163 "data/maps/Frux/scripts.pory"
	release
	end

Frux_Scott_11:
# 175 "data/maps/Frux/scripts.pory"
	msgbox Frux_Scott_Text_1
# 176 "data/maps/Frux/scripts.pory"
	startquest QUEST_TRIATHLON
# 177 "data/maps/Frux/scripts.pory"
	setflag FLAG_TRIATHLON_QUEST_STARTED
# 178 "data/maps/Frux/scripts.pory"
	fadescreen FADE_TO_BLACK
# 179 "data/maps/Frux/scripts.pory"
	setvar VAR_TRIATHLON, 1
# 180 "data/maps/Frux/scripts.pory"
	clearflag FLAG_TRIATHLON_NPC
# 181 "data/maps/Frux/scripts.pory"
	setflag FLAG_HIDE_NPC_TRIATHLON
# 182 "data/maps/Frux/scripts.pory"
	setflag FLAG_SCOTT_TRIATHLON
# 183 "data/maps/Frux/scripts.pory"
	clearflag FLAG_TRAINERS_TRIATHLON
# 184 "data/maps/Frux/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 185 "data/maps/Frux/scripts.pory"
	setvar VAR_TRIATHLON_TIME, 0
# 186 "data/maps/Frux/scripts.pory"
	setflag FLAG_CANT_FLY
# 187 "data/maps/Frux/scripts.pory"
	setflag FLAG_TRIATHLON
# 188 "data/maps/Frux/scripts.pory"
	warpsilent MAP_OXIDE_TRAIL, 13, 11
# 189 "data/maps/Frux/scripts.pory"
	release
	end


Frux_Johanna::
# 208 "data/maps/Frux/scripts.pory"
	trainerbattle_single TRAINER_TRIATHLON_1, Johanna1, Johanna2
# 209 "data/maps/Frux/scripts.pory"
	msgbox Frux_Johanna_Text_0
# 210 "data/maps/Frux/scripts.pory"
	closemessage
	end


# 67 "data/maps/Frux/scripts.pory"
Frux_Worker1_Movement_0:
# 67 "data/maps/Frux/scripts.pory"
	emote_exclamation_mark
	step_end

Frux_Hiker_Text_0:
# 47 "data/maps/Frux/scripts.pory"
	.string "Thank Arceus for that little town, I\n"
	.string "couldn't imagine hiking from Sapphire to\l"
	.string "the Ironair in one go.$"

Frux_Worker1_Text_0:
# 56 "data/maps/Frux/scripts.pory"
	.string "Oi, what's up? Dug any treasures yet?$"

Frux_Worker1_Text_1:
# 63 "data/maps/Frux/scripts.pory"
	.string "So? Have you dug some?...$"

Frux_Worker1_Text_2:
# 70 "data/maps/Frux/scripts.pory"
	.string "What? Star pieces? Damn, I was wrong??\n"
	.string "Nonsense!$"

Frux_Worker1_Text_3:
# 71 "data/maps/Frux/scripts.pory"
	.string "...$"

Frux_Worker1_Text_4:
# 72 "data/maps/Frux/scripts.pory"
	.string "Well, you've got me. Thanks for proving\n"
	.string "me wrong, I guess?$"

Frux_Worker1_Text_5:
# 74 "data/maps/Frux/scripts.pory"
	.string "No, I've got no rewards for you. I've\n"
	.string "already given you mining tools, what\l"
	.string "more do you want from me?$"

Frux_Worker1_Text_6:
# 87 "data/maps/Frux/scripts.pory"
	.string "I saw some rubies in the Ironair! They\n"
	.string "were shaped like a star, too! I swear, go\l"
	.string "check yourself!$"

Frux_Worker1_Text_7:
# 89 "data/maps/Frux/scripts.pory"
	.string "Oh yeah! You'll need some tools to mine!\n"
	.string "You can't do it with your bare hands,\l"
	.string "haha. Take this!$"

Frux_Worker1_Text_8:
# 91 "data/maps/Frux/scripts.pory"
	.string "Just go in the Ironair, stand in front\n"
	.string "of a cracked wall and start mining! And\l"
	.string "no, it's not a trick to make you do my\l"
	.string "work. Now go!$"

Frux_Newbie_Text_0:
# 102 "data/maps/Frux/scripts.pory"
	.string "Haha, yes!! I've finally been accepted\n"
	.string "on Bruce's team! I'm gonna mine until\l"
	.string "there's nothing left! Yeah! Take that!$"

Frux_Worker2_Text_0:
# 112 "data/maps/Frux/scripts.pory"
	.string "So, was I right?$"

Frux_Worker2_Text_1:
# 115 "data/maps/Frux/scripts.pory"
	.string "The hardest part about working in a\n"
	.string "steel foundry is the noise metal makes\l"
	.string "when it hits the floor. I swear, listen\l"
	.string "to it!$"

Frux_Picnicker_Text_0:
# 125 "data/maps/Frux/scripts.pory"
	.string "I don't understand, why are the dorms\n"
	.string "only reserved for the workers? I'm\l"
	.string "tired too, come on!$"

Frux_Sign_Text_0:
# 132 "data/maps/Frux/scripts.pory"
	.string "Frux\n"
	.string "'Its will is stronger than steel.'$"

Frux_Cameraman_Text_0:
# 140 "data/maps/Frux/scripts.pory"
	.string "Move! You're ruining the shot!$"

Frux_Scott_Text_0:
# 149 "data/maps/Frux/scripts.pory"
	.string "Hey, trainer! Do you think you've got\n"
	.string "the cardio to finish first in the\l"
	.string "Triathlon?$"

Frux_Scott_Text_1:
# 151 "data/maps/Frux/scripts.pory"
	.string "Alright, I like your attitude! Let's meet\n"
	.string "up on Oxide Trail!$"

Frux_Scott_Text_2:
# 167 "data/maps/Frux/scripts.pory"
	.string "Haha, don't sweat it! Come back when\n"
	.string "you feel ready!$"

Frux_Scott_Text_3:
# 173 "data/maps/Frux/scripts.pory"
	.string "Hey, trainer! I'm Scott from Hoenn, and\n"
	.string "I've created Thura's most challenging\l"
	.string "event: the Triathlon! Do you think\l"
	.string "you've got the cardio to finish first?$"

Frux_Scott_Text_4:
# 201 "data/maps/Frux/scripts.pory"
	.string "Hey, trainer! I'm Scott from Hoenn, and\n"
	.string "I've created Thura's most challenging\l"
	.string "event: the Triathlon! It goes from\l"
	.string "Oxide Trail all the way to Passwacan!\l"
	.string "I'm still prepping it, though. Come back\l"
	.string "and see me once you've earned your\l"
	.string "fourth emblem.$"

Frux_Johanna_Text_0:
# 209 "data/maps/Frux/scripts.pory"
	.string "Damn Arceus! All those hours of\n"
	.string "training for nothing!$"

FruxCall::
# 27 "data/maps/Frux/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Sam: ...Hey, {PLAYER}?\p"
	.string "… … … … … …\p"
	.string "Bruce called me, and he seemed\n"
	.string "worried, do you know what's up?\n"
	.string "… … … … … …\p"
	.string "Oh Arceus almighty, that's\n"
	.string "terrible! How can I help?\p"
	.string "… … … … … …\p"
	.string "Gotcha, coming right now!\n"
	.string "I got super strong in the\l"
	.string "meantime, I could really be of\l"
	.string "some help!\p"
	.string "… … … … … …\n… … … … … Click!$"

Johanna1::
# 214 "data/maps/Frux/scripts.pory"
	.string "My bike popped out of gear! This is a\n"
	.string "disaster!$"

Johanna2::
# 218 "data/maps/Frux/scripts.pory"
	.string "What am I gonna do now?$"
