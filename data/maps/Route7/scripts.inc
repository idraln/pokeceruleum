# 1 "data/maps/Route7/scripts.pory"

# 2 "data/maps/Route7/scripts.pory"
Route7_MapScripts::
# 3 "data/maps/Route7/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Route7_OnFrame
# 4 "data/maps/Route7/scripts.pory"
	.byte 0
# 5 "data/maps/Route7/scripts.pory"

# 6 "data/maps/Route7/scripts.pory"
Route7_OnFrame:
# 7 "data/maps/Route7/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 56, Route7_Call
# 8 "data/maps/Route7/scripts.pory"
    .2byte 0

Route7_Call::
# 12 "data/maps/Route7/scripts.pory"
	lockall
# 13 "data/maps/Route7/scripts.pory"
	faceplayer
# 14 "data/maps/Route7/scripts.pory"
	pokenavcall KAMCall
# 15 "data/maps/Route7/scripts.pory"
	waitmessage
# 16 "data/maps/Route7/scripts.pory"
	clearflag FLAG_KAM_LEAGUE
# 17 "data/maps/Route7/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 18 "data/maps/Route7/scripts.pory"
	startquest QUEST_LAST_FIGHT
# 19 "data/maps/Route7/scripts.pory"
	setvar VAR_MAIN_STORY, 57
# 20 "data/maps/Route7/scripts.pory"
	releaseall
	end


Route7_Tania::
# 40 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_1, Tania1, Tania2
# 41 "data/maps/Route7/scripts.pory"
	msgbox Route7_Tania_Text_0
# 42 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Duke::
# 55 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_2, Duke1, Duke2
# 56 "data/maps/Route7/scripts.pory"
	msgbox Route7_Duke_Text_0
# 57 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Flora::
# 70 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_3, Flora1, Flora2
# 71 "data/maps/Route7/scripts.pory"
	msgbox Route7_Flora_Text_0
# 72 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Berry::
# 85 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_4, Berry1, Berry2
# 86 "data/maps/Route7/scripts.pory"
	msgbox Route7_Berry_Text_0
# 87 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Charles::
# 100 "data/maps/Route7/scripts.pory"
	trainerbattle_single TRAINER_ROUTE7_5, Charles1, Charles2
# 101 "data/maps/Route7/scripts.pory"
	msgbox Route7_Charles_Text_0
# 102 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Twins::
# 115 "data/maps/Route7/scripts.pory"
	trainerbattle_double TRAINER_ROUTE7_6, R7Twins1, R7Twins2, R7TwinsNE
# 116 "data/maps/Route7/scripts.pory"
	msgbox Route7_Twins_Text_0
# 117 "data/maps/Route7/scripts.pory"
	closemessage
	end


Route7_Guard::
# 134 "data/maps/Route7/scripts.pory"
	lock
# 135 "data/maps/Route7/scripts.pory"
	faceplayer
# 136 "data/maps/Route7/scripts.pory"
	compare VAR_MAIN_STORY, 53
	goto_if_eq Route7_Guard_2
# 158 "data/maps/Route7/scripts.pory"
	compare VAR_MAIN_STORY, 52
	goto_if_eq Route7_Guard_4
# 167 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_1
# 168 "data/maps/Route7/scripts.pory"
	release
	end

Route7_Guard_2:
# 137 "data/maps/Route7/scripts.pory"
	checkitem ITEM_TEA
# 138 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route7_Guard_7
# 151 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_1
# 152 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_2
# 153 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_3
# 154 "data/maps/Route7/scripts.pory"
	release
	end

Route7_Guard_4:
# 159 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_1
# 160 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_2
# 161 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_3
# 162 "data/maps/Route7/scripts.pory"
	setvar VAR_MAIN_STORY, 53
# 163 "data/maps/Route7/scripts.pory"
	release
	end

Route7_Guard_7:
# 139 "data/maps/Route7/scripts.pory"
	msgbox Route7_Guard_Text_0
# 140 "data/maps/Route7/scripts.pory"
	closemessage
# 141 "data/maps/Route7/scripts.pory"
	delay 20
# 142 "data/maps/Route7/scripts.pory"
	applymovement 11, Route7_Guard_Movement_0
# 143 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route7/scripts.pory"
	playse SE_EXIT
# 145 "data/maps/Route7/scripts.pory"
	removeobject 11
# 146 "data/maps/Route7/scripts.pory"
	setflag FLAG_GUARD_ROUTE7
# 147 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Ninja::
# 174 "data/maps/Route7/scripts.pory"
	lock
# 175 "data/maps/Route7/scripts.pory"
	faceplayer
# 176 "data/maps/Route7/scripts.pory"
	msgbox Route7_Ninja_Text_0
# 177 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Item1::
# 182 "data/maps/Route7/scripts.pory"
	lock
# 183 "data/maps/Route7/scripts.pory"
	removeobject 4
# 184 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_ITEM_1
# 185 "data/maps/Route7/scripts.pory"
	giveitem ITEM_ZINC
# 186 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Item2::
# 191 "data/maps/Route7/scripts.pory"
	lock
# 192 "data/maps/Route7/scripts.pory"
	removeobject 7
# 193 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_ITEM_2
# 194 "data/maps/Route7/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 195 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Item3::
# 200 "data/maps/Route7/scripts.pory"
	lock
# 201 "data/maps/Route7/scripts.pory"
	removeobject 12
# 202 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_ITEM_3
# 203 "data/maps/Route7/scripts.pory"
	giveitem ITEM_PP_MAX
# 204 "data/maps/Route7/scripts.pory"
	release
	end


Route7_Item4::
# 209 "data/maps/Route7/scripts.pory"
	lock
# 210 "data/maps/Route7/scripts.pory"
	removeobject 1
# 211 "data/maps/Route7/scripts.pory"
	setflag FLAG_ROUTE7_ITEM_4
# 212 "data/maps/Route7/scripts.pory"
	giveitem ITEM_MAX_ELIXER
# 213 "data/maps/Route7/scripts.pory"
	release
	end


# 142 "data/maps/Route7/scripts.pory"
Route7_Guard_Movement_0:
# 142 "data/maps/Route7/scripts.pory"
	walk_up
	step_end

Route7_Tania_Text_0:
# 41 "data/maps/Route7/scripts.pory"
	.string "Isn't Stoutland great? He's such a good\n"
	.string "boy!$"

Route7_Duke_Text_0:
# 56 "data/maps/Route7/scripts.pory"
	.string "Why settle for one monkey when you can\n"
	.string "have three? Haha! I couldn't choose!$"

Route7_Flora_Text_0:
# 71 "data/maps/Route7/scripts.pory"
	.string "We don't speak enough about the\n"
	.string "importance of growing flowers. With\l"
	.string "more flowers, there wouldn't be any\l"
	.string "wars.$"

Route7_Berry_Text_0:
# 86 "data/maps/Route7/scripts.pory"
	.string "Yes, my name is Berry. Yes, my parents\n"
	.string "called me that on purpose. Yes, I was\l"
	.string "bullied because of that.$"

Route7_Charles_Text_0:
# 101 "data/maps/Route7/scripts.pory"
	.string "Unova is great place and all, but it\n"
	.string "cruelly lacks forests. There's only one\l"
	.string "just past Nacrene City.$"

Route7_Twins_Text_0:
# 116 "data/maps/Route7/scripts.pory"
	.string "With our birds, we're invicible!...\n"
	.string "Usually.$"

Route7_Guard_Text_0:
# 139 "data/maps/Route7/scripts.pory"
	.string "Ah, thank you, my child. You may come in.$"

Route7_Guard_Text_1:
# 151 "data/maps/Route7/scripts.pory"
	.string "I'm sorry, young one, but the Tower is\n"
	.string "closed for now. It is too unsafe to go.$"

Route7_Guard_Text_2:
# 152 "data/maps/Route7/scripts.pory"
	.string "...$"

Route7_Guard_Text_3:
# 153 "data/maps/Route7/scripts.pory"
	.string "Well, if you insist, you can go in. But\n"
	.string "before that, I need you to fetch me a\l"
	.string "cup of Tea, in my house, on this very\l"
	.string "route. I'm parched.$"

Route7_Ninja_Text_0:
# 176 "data/maps/Route7/scripts.pory"
	.string "Shh! I'm trying to find an Audino, don't\n"
	.string "make a noise!$"

KAMCall::
# 24 "data/maps/Route7/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "K.A.M.: Hey {PLAYER}!\p"
	.string "… … … … … …\p"
	.string "Remember me? I achieved my dream!\n"
	.string "I'm finally a champion!\p"
	.string "… … … … … …\p"
	.string "Well, not until I can fight you\n"
	.string "for the throne. Come back to\l"
	.string "Thura, I'm waiting for you\l"
	.string "on top of the Council\l"
	.string "Headquarters!\l"
	.string "… … … … … …\n… … … … … Click!$"

Tania1::
# 46 "data/maps/Route7/scripts.pory"
	.string "Check this out!$"

Tania2::
# 50 "data/maps/Route7/scripts.pory"
	.string "Cute, aren't they?$"

Duke1::
# 61 "data/maps/Route7/scripts.pory"
	.string "Monkeys, go!$"

Duke2::
# 65 "data/maps/Route7/scripts.pory"
	.string "Oh?$"

Flora1::
# 76 "data/maps/Route7/scripts.pory"
	.string "Please, try the taste of flowers!$"

Flora2::
# 80 "data/maps/Route7/scripts.pory"
	.string "Oh? Are you allergic?$"

Berry1::
# 91 "data/maps/Route7/scripts.pory"
	.string "Move out the way!$"

Berry2::
# 95 "data/maps/Route7/scripts.pory"
	.string "You've ruined my set! Not cool!$"

Charles1::
# 106 "data/maps/Route7/scripts.pory"
	.string "Ah! You scared me!$"

Charles2::
# 110 "data/maps/Route7/scripts.pory"
	.string "I thought you were a big bug. I'm\n"
	.string "relieved.$"

R7Twins1::
# 121 "data/maps/Route7/scripts.pory"
	.string "Braviary! Mandibuzz! GO BIRDS!$"

R7Twins2::
# 125 "data/maps/Route7/scripts.pory"
	.string "Nooo...$"

R7TwinsNE::
# 129 "data/maps/Route7/scripts.pory"
	.string "We'd love to fight, but two against one\n"
	.string "wouldn't be fair!$"
