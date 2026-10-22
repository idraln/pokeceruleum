# 1 "data/maps/Ohulinn_Gym/scripts.pory"

# 2 "data/maps/Ohulinn_Gym/scripts.pory"
Ohulinn_Gym_MapScripts::
# 3 "data/maps/Ohulinn_Gym/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, Ohulinn_Gym_OnLoad
# 4 "data/maps/Ohulinn_Gym/scripts.pory"
	.byte 0

Ohulinn_Gym_OnLoad::
# 8 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_1, 1
	goto_if_eq Ohulinn_Gym_OnLoad_4
Ohulinn_Gym_OnLoad_1:
	end

Ohulinn_Gym_OnLoad_2:
# 9 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 3, METATILE_OhulinnGym_StairsTop1, FALSE
# 10 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 3, METATILE_OhulinnGym_StairsTop2, FALSE
# 11 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 3, METATILE_OhulinnGym_StairsTop3, FALSE
# 12 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 4, METATILE_OhulinnGym_StairsBottom1, FALSE
# 13 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 4, METATILE_OhulinnGym_StairsBottom2, FALSE
# 14 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 4, METATILE_OhulinnGym_StairsBottom3, FALSE
# 15 "data/maps/Ohulinn_Gym/scripts.pory"
	special DrawWholeMapView
	goto Ohulinn_Gym_OnLoad_1

Ohulinn_Gym_OnLoad_3:
# 8 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_3, 1
	goto_if_eq Ohulinn_Gym_OnLoad_2
	goto Ohulinn_Gym_OnLoad_1

Ohulinn_Gym_OnLoad_4:
# 8 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_2, 1
	goto_if_eq Ohulinn_Gym_OnLoad_3
	goto Ohulinn_Gym_OnLoad_1


Ohulinn_Gym_Switch1::
# 21 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 22 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_0, MSGBOX_YESNO
# 23 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ohulinn_Gym_Switch1_1
# 51 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_3
# 52 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 53 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch1_1:
# 24 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 25 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 26 "data/maps/Ohulinn_Gym/scripts.pory"
	playse SE_CLICK
# 27 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_1
# 28 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 29 "data/maps/Ohulinn_Gym/scripts.pory"
	setvar VAR_OHULINN_SWITCH_1, 1
# 30 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_1, 1
	goto_if_eq Ohulinn_Gym_Switch1_7
Ohulinn_Gym_Switch1_5:
# 46 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch1_4:
# 31 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 3, METATILE_OhulinnGym_StairsTop1, FALSE
# 32 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 3, METATILE_OhulinnGym_StairsTop2, FALSE
# 33 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 3, METATILE_OhulinnGym_StairsTop3, FALSE
# 34 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 4, METATILE_OhulinnGym_StairsBottom1, FALSE
# 35 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 4, METATILE_OhulinnGym_StairsBottom2, FALSE
# 36 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 4, METATILE_OhulinnGym_StairsBottom3, FALSE
# 37 "data/maps/Ohulinn_Gym/scripts.pory"
	special DrawWholeMapView
# 38 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 39 "data/maps/Ohulinn_Gym/scripts.pory"
	playse MUS_LEVEL_UP
# 40 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_2
# 41 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 42 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch1_6:
# 30 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_3, 1
	goto_if_eq Ohulinn_Gym_Switch1_4
	goto Ohulinn_Gym_Switch1_5

Ohulinn_Gym_Switch1_7:
# 30 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_2, 1
	goto_if_eq Ohulinn_Gym_Switch1_6
	goto Ohulinn_Gym_Switch1_5


Ohulinn_Gym_Switch2::
# 59 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 60 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_0, MSGBOX_YESNO
# 61 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ohulinn_Gym_Switch2_1
# 89 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_3
# 90 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 91 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch2_1:
# 62 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 63 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 64 "data/maps/Ohulinn_Gym/scripts.pory"
	playse SE_CLICK
# 65 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_1
# 66 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 67 "data/maps/Ohulinn_Gym/scripts.pory"
	setvar VAR_OHULINN_SWITCH_2, 1
# 68 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_1, 1
	goto_if_eq Ohulinn_Gym_Switch2_7
Ohulinn_Gym_Switch2_5:
# 84 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch2_4:
# 69 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 3, METATILE_OhulinnGym_StairsTop1, FALSE
# 70 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 3, METATILE_OhulinnGym_StairsTop2, FALSE
# 71 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 3, METATILE_OhulinnGym_StairsTop3, FALSE
# 72 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 4, METATILE_OhulinnGym_StairsBottom1, FALSE
# 73 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 4, METATILE_OhulinnGym_StairsBottom2, FALSE
# 74 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 4, METATILE_OhulinnGym_StairsBottom3, FALSE
# 75 "data/maps/Ohulinn_Gym/scripts.pory"
	special DrawWholeMapView
# 76 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 77 "data/maps/Ohulinn_Gym/scripts.pory"
	playse MUS_LEVEL_UP
# 78 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_2
# 79 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 80 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch2_6:
# 68 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_3, 1
	goto_if_eq Ohulinn_Gym_Switch2_4
	goto Ohulinn_Gym_Switch2_5

Ohulinn_Gym_Switch2_7:
# 68 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_2, 1
	goto_if_eq Ohulinn_Gym_Switch2_6
	goto Ohulinn_Gym_Switch2_5


Ohulinn_Gym_Switch3::
# 97 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 98 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_0, MSGBOX_YESNO
# 99 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ohulinn_Gym_Switch3_1
# 127 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_3
# 128 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 129 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch3_1:
# 100 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 101 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 102 "data/maps/Ohulinn_Gym/scripts.pory"
	playse SE_CLICK
# 103 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_1
# 104 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 105 "data/maps/Ohulinn_Gym/scripts.pory"
	setvar VAR_OHULINN_SWITCH_3, 1
# 106 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_1, 1
	goto_if_eq Ohulinn_Gym_Switch3_7
Ohulinn_Gym_Switch3_5:
# 122 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch3_4:
# 107 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 3, METATILE_OhulinnGym_StairsTop1, FALSE
# 108 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 3, METATILE_OhulinnGym_StairsTop2, FALSE
# 109 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 3, METATILE_OhulinnGym_StairsTop3, FALSE
# 110 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 9, 4, METATILE_OhulinnGym_StairsBottom1, FALSE
# 111 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 10, 4, METATILE_OhulinnGym_StairsBottom2, FALSE
# 112 "data/maps/Ohulinn_Gym/scripts.pory"
	setmetatile 11, 4, METATILE_OhulinnGym_StairsBottom3, FALSE
# 113 "data/maps/Ohulinn_Gym/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 30
# 115 "data/maps/Ohulinn_Gym/scripts.pory"
	playse MUS_LEVEL_UP
# 116 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Switch1_Text_2
# 117 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 118 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Switch3_6:
# 106 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_3, 1
	goto_if_eq Ohulinn_Gym_Switch3_4
	goto Ohulinn_Gym_Switch3_5

Ohulinn_Gym_Switch3_7:
# 106 "data/maps/Ohulinn_Gym/scripts.pory"
	compare VAR_OHULINN_SWITCH_2, 1
	goto_if_eq Ohulinn_Gym_Switch3_6
	goto Ohulinn_Gym_Switch3_5


Ohulinn_Gym_Totems::
# 135 "data/maps/Ohulinn_Gym/scripts.pory"
	lockall
# 136 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Totems_Text_0
# 137 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Totems_Text_1
# 138 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Totems_Text_2
# 139 "data/maps/Ohulinn_Gym/scripts.pory"
	releaseall
	end


Ohulinn_Gym_Clerk::
# 144 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 145 "data/maps/Ohulinn_Gym/scripts.pory"
	faceplayer
# 146 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Clerk_Text_0
# 147 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end


Ohulinn_Gym_Betty::
# 152 "data/maps/Ohulinn_Gym/scripts.pory"
	trainerbattle_single TRAINER_OHULINN_GYM_1, Betty1, Betty2
# 153 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Betty_Text_0
# 154 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
	end


Ohulinn_Gym_Ciaran::
# 159 "data/maps/Ohulinn_Gym/scripts.pory"
	trainerbattle_single TRAINER_OHULINN_GYM_2, Ciaran1, Ciaran2
# 160 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Ciaran_Text_0
# 161 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
	end


Ohulinn_Gym_Alexia::
# 166 "data/maps/Ohulinn_Gym/scripts.pory"
	trainerbattle_single TRAINER_OHULINN_GYM_3, Alexia1, Alexia2
# 167 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Alexia_Text_0
# 168 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
	end


Ohulinn_Gym_Eka::
# 173 "data/maps/Ohulinn_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Ohulinn_Gym_Eka_1
# 183 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 184 "data/maps/Ohulinn_Gym/scripts.pory"
	faceplayer
# 185 "data/maps/Ohulinn_Gym/scripts.pory"
	namebox Ohulinn_Gym_Eka_Text_0
# 186 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_2
# 187 "data/maps/Ohulinn_Gym/scripts.pory"
	hidenamebox
# 188 "data/maps/Ohulinn_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_EKA, Eka1
# 189 "data/maps/Ohulinn_Gym/scripts.pory"
	namebox Ohulinn_Gym_Eka_Text_0
# 190 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_3
# 191 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 192 "data/maps/Ohulinn_Gym/scripts.pory"
	hidenamebox
# 193 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 40
# 194 "data/maps/Ohulinn_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 195 "data/maps/Ohulinn_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 196 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_4
# 197 "data/maps/Ohulinn_Gym/scripts.pory"
	waitfanfare
# 198 "data/maps/Ohulinn_Gym/scripts.pory"
	closemessage
# 199 "data/maps/Ohulinn_Gym/scripts.pory"
	delay 20
# 200 "data/maps/Ohulinn_Gym/scripts.pory"
	namebox Ohulinn_Gym_Eka_Text_0
# 201 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_5
# 202 "data/maps/Ohulinn_Gym/scripts.pory"
	hidenamebox
# 203 "data/maps/Ohulinn_Gym/scripts.pory"
	giveitem ITEM_TM08
# 204 "data/maps/Ohulinn_Gym/scripts.pory"
	namebox Ohulinn_Gym_Eka_Text_0
# 205 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_6
# 206 "data/maps/Ohulinn_Gym/scripts.pory"
	hidenamebox
# 207 "data/maps/Ohulinn_Gym/scripts.pory"
	setvar VAR_MAIN_STORY, 15
# 208 "data/maps/Ohulinn_Gym/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 209 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end

Ohulinn_Gym_Eka_1:
# 174 "data/maps/Ohulinn_Gym/scripts.pory"
	lock
# 175 "data/maps/Ohulinn_Gym/scripts.pory"
	faceplayer
# 176 "data/maps/Ohulinn_Gym/scripts.pory"
	namebox Ohulinn_Gym_Eka_Text_0
# 177 "data/maps/Ohulinn_Gym/scripts.pory"
	msgbox Ohulinn_Gym_Eka_Text_1
# 178 "data/maps/Ohulinn_Gym/scripts.pory"
	hidenamebox
# 179 "data/maps/Ohulinn_Gym/scripts.pory"
	release
	end


Ohulinn_Gym_Switch1_Text_0:
# 22 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "It's a shiny, big red button. Press it?$"

Ohulinn_Gym_Switch1_Text_1:
# 27 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Click!... That's the sound it made.$"

Ohulinn_Gym_Switch1_Text_2:
# 40 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Stairs just appeared! You can now face\n"
	.string "the Council member.$"

Ohulinn_Gym_Switch1_Text_3:
# 51 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Better take some time to think about\n"
	.string "it!$"

Ohulinn_Gym_Totems_Text_0:
# 136 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Ohulinn's Gym\n"
	.string "Council member: Eka a.k.a. the best\l"
	.string "looking man on the planet.$"

Ohulinn_Gym_Totems_Text_1:
# 137 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "...$"

Ohulinn_Gym_Totems_Text_2:
# 138 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "(It looks like the last part was written\n"
	.string "with a sharpie.)$"

Ohulinn_Gym_Clerk_Text_0:
# 146 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Good luck facing Eka! He certainly\n"
	.string "looks frail and weak, and maybe is a bit\l"
	.string "unnerving, and he also hasn't paid me in\l"
	.string "weeks, but... Uh, yeah.$"

Ohulinn_Gym_Betty_Text_0:
# 153 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "The switches sound weird, but Eka\n"
	.string "doesn't want to fix them. When he'll\l"
	.string "inevitably get stuck up there, he'll\l"
	.string "reconsider.$"

Ohulinn_Gym_Ciaran_Text_0:
# 160 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Don't get fooled: the sky is actually\n"
	.string "fake! And the clouds are made with\l"
	.string "cotton. Clever, innit?$"

Ohulinn_Gym_Alexia_Text_0:
# 167 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "We'll meet again soon. Mark my words.$"

Ohulinn_Gym_Eka_Text_0:
# 176 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Eka$"

Ohulinn_Gym_Eka_Text_1:
# 177 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Oh, it's you again. What do you want?\n"
	.string "Don't you see I'm a very busy man?$"

Ohulinn_Gym_Eka_Text_2:
# 186 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Finally, you're here! I was about to lose\n"
	.string "my patience. What took you so long?\l"
	.string "Whatever. You need this emblem, don't\l"
	.string "you? Well, first, let me teach you about\l"
	.string "birds. Let's do it!$"

Ohulinn_Gym_Eka_Text_3:
# 190 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "I knew you were something else. First\n"
	.string "the scarf, and now that battle... You\l"
	.string "have a great talent, kid. Don't let it go\l"
	.string "to waste. I'll watch your journey very\l"
	.string "carefully. Take this.$"

Ohulinn_Gym_Eka_Text_4:
# 196 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "You've earned the Beak Emblem!$"

Ohulinn_Gym_Eka_Text_5:
# 201 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Let me also gift you this TM.$"

Ohulinn_Gym_Eka_Text_6:
# 205 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "This is Roost. As you may have seen, it\n"
	.string "allows Pokémons to rest up a bit and\l"
	.string "restore some HP. Now go! I need to\l"
	.string "study more.$"

Betty1::
# 214 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Finally! Some fresh meat! Don't worry, it\n"
	.string "won't last long!$"

Betty2::
# 218 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "It didn't last long indeed...$"

Ciaran1::
# 222 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "My father designed this gym. I also got\n"
	.string "this gig thanks to him.$"

Ciaran2::
# 226 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "I need to ask daddy for another job...$"

Alexia1::
# 230 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "I'm the last hurdle before Eka! And I'm\n"
	.string "ten foot tall. So you won't get to him.$"

Alexia2::
# 234 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "So he didn't lie...$"

Eka1::
# 238 "data/maps/Ohulinn_Gym/scripts.pory"
	.string "Good, very good... You really are\n"
	.string "something else, aren't you?$"
