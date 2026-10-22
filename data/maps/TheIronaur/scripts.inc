# 1 "data/maps/TheIronaur/scripts.pory"

# 2 "data/maps/TheIronaur/scripts.pory"
TheIronaur_MapScripts::
# 3 "data/maps/TheIronaur/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, TheIronaur_OnTransition
# 4 "data/maps/TheIronaur/scripts.pory"
	.byte 0

TheIronaur_OnTransition::
# 8 "data/maps/TheIronaur/scripts.pory"
	compare VAR_MAIN_STORY, 45
	goto_if_eq TheIronaur_OnTransition_2
# 8 "data/maps/TheIronaur/scripts.pory"
	compare VAR_MAIN_STORY, 46
	goto_if_eq TheIronaur_OnTransition_2
TheIronaur_OnTransition_1:
	end

TheIronaur_OnTransition_2:
# 9 "data/maps/TheIronaur/scripts.pory"
	setobjectxyperm 10, 17, 7
# 10 "data/maps/TheIronaur/scripts.pory"
	applymovement 10, TheIronaur_OnTransition_Movement_0
# 11 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
	goto TheIronaur_OnTransition_1


TheIronair_Norbert::
# 17 "data/maps/TheIronaur/scripts.pory"
	trainerbattle_single TRAINER_IRONAIR_1, Norbert1, Norbert2
# 18 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Norbert_Text_0
# 19 "data/maps/TheIronaur/scripts.pory"
	closemessage
	end


TheIronair_Worker1::
# 32 "data/maps/TheIronaur/scripts.pory"
	lock
# 33 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Worker1_Text_0
# 34 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Worker2::
# 39 "data/maps/TheIronaur/scripts.pory"
	lock
# 40 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 41 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Worker2_Text_0
# 42 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Worker3::
# 47 "data/maps/TheIronaur/scripts.pory"
	lock
# 48 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 49 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Worker3_Text_0
# 50 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Worker4::
# 55 "data/maps/TheIronaur/scripts.pory"
	lock
# 56 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 57 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Worker4_Text_0
# 58 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Shock::
# 63 "data/maps/TheIronaur/scripts.pory"
	lock
# 64 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 65 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Shock_Text_0
# 66 "data/maps/TheIronaur/scripts.pory"
	turnobject 9, DIR_EAST
# 67 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Guard::
# 72 "data/maps/TheIronaur/scripts.pory"
	lock
# 73 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 74 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Guard_Text_0
# 75 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Aftermath::
# 80 "data/maps/TheIronaur/scripts.pory"
	lock
# 84 "data/maps/TheIronaur/scripts.pory"
	applymovement 7, TheIronair_Aftermath_Movement_0
# 85 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 86 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 87 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_1
# 88 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 89 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 90 "data/maps/TheIronaur/scripts.pory"
	delay 40
# 93 "data/maps/TheIronaur/scripts.pory"
	applymovement 6, TheIronair_Aftermath_Movement_1
# 94 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 95 "data/maps/TheIronaur/scripts.pory"
	playse SE_PIN
# 96 "data/maps/TheIronaur/scripts.pory"
	applymovement 6, TheIronair_Aftermath_Movement_2
# 97 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 98 "data/maps/TheIronaur/scripts.pory"
	delay 20
# 99 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_2
# 100 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 103 "data/maps/TheIronaur/scripts.pory"
	applymovement 7, TheIronair_Aftermath_Movement_0
# 104 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 105 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 106 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_3
# 107 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 108 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 109 "data/maps/TheIronaur/scripts.pory"
	delay 40
# 112 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_4
# 113 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 114 "data/maps/TheIronaur/scripts.pory"
	delay 40
# 115 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_5
# 116 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 117 "data/maps/TheIronaur/scripts.pory"
	applymovement 6, TheIronaur_OnTransition_Movement_0
# 118 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 121 "data/maps/TheIronaur/scripts.pory"
	delay 40
# 122 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 123 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_6
# 124 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 125 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 126 "data/maps/TheIronaur/scripts.pory"
	applymovement 7, TheIronair_Aftermath_Movement_3
# 127 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 128 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 129 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_7
# 130 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 131 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 132 "data/maps/TheIronaur/scripts.pory"
	applymovement 6, TheIronair_Aftermath_Movement_4
# 133 "data/maps/TheIronaur/scripts.pory"
	applymovement 9, TheIronair_Aftermath_Movement_5
# 134 "data/maps/TheIronaur/scripts.pory"
	applymovement 7, TheIronair_Aftermath_Movement_6
# 135 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 136 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 137 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Aftermath_Text_8
# 138 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 139 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 140 "data/maps/TheIronaur/scripts.pory"
	applymovement 7, TheIronair_Aftermath_Movement_7
# 141 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 142 "data/maps/TheIronaur/scripts.pory"
	removeobject 7
# 143 "data/maps/TheIronaur/scripts.pory"
	delay 60
# 144 "data/maps/TheIronaur/scripts.pory"
	removeobject 6
# 145 "data/maps/TheIronaur/scripts.pory"
	removeobject 9
# 146 "data/maps/TheIronaur/scripts.pory"
	setflag FLAG_BEFORE_ATTACK
# 147 "data/maps/TheIronaur/scripts.pory"
	setflag FLAG_BRUCE_IRONAIR
# 148 "data/maps/TheIronaur/scripts.pory"
	setvar VAR_MAIN_STORY, 27
# 149 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_BruceGuarding::
# 154 "data/maps/TheIronaur/scripts.pory"
	lock
# 155 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 156 "data/maps/TheIronaur/scripts.pory"
	compare VAR_MAIN_STORY, 45
	goto_if_eq TheIronair_BruceGuarding_1
# 164 "data/maps/TheIronaur/scripts.pory"
	compare VAR_MAIN_STORY, 44
	goto_if_eq TheIronair_BruceGuarding_2
# 186 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 187 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_BruceGuarding_Text_3
# 188 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 189 "data/maps/TheIronaur/scripts.pory"
	release
	end

TheIronair_BruceGuarding_1:
# 157 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 158 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_BruceGuarding_Text_0
# 159 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 160 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 161 "data/maps/TheIronaur/scripts.pory"
	release
	end

TheIronair_BruceGuarding_2:
# 165 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 166 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_BruceGuarding_Text_1
# 167 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 168 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 169 "data/maps/TheIronaur/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 170 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 171 "data/maps/TheIronaur/scripts.pory"
	delay 20
# 172 "data/maps/TheIronaur/scripts.pory"
	namebox TheIronair_Aftermath_Text_0
# 173 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_BruceGuarding_Text_2
# 174 "data/maps/TheIronaur/scripts.pory"
	closemessage
# 175 "data/maps/TheIronaur/scripts.pory"
	hidenamebox
# 176 "data/maps/TheIronaur/scripts.pory"
	applymovement 10, TheIronair_BruceGuarding_Movement_0
# 177 "data/maps/TheIronaur/scripts.pory"
	waitmovement 0
# 178 "data/maps/TheIronaur/scripts.pory"
	setobjectxyperm 10, 17, 7
# 179 "data/maps/TheIronaur/scripts.pory"
	startquest QUEST_DIANCIE
# 180 "data/maps/TheIronaur/scripts.pory"
	setvar VAR_MAIN_STORY, 45
# 181 "data/maps/TheIronaur/scripts.pory"
	setvar VAR_DIANCIE_FIGHT, 0
# 182 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Excadrill::
# 209 "data/maps/TheIronaur/scripts.pory"
	lock
# 210 "data/maps/TheIronaur/scripts.pory"
	faceplayer
# 211 "data/maps/TheIronaur/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_NORMAL
# 212 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Excadrill_Text_0
# 213 "data/maps/TheIronaur/scripts.pory"
	release
	end


TheIronair_Mine::
# 218 "data/maps/TheIronaur/scripts.pory"
	lock
# 219 "data/maps/TheIronaur/scripts.pory"
	checkitem ITEM_GOLD_TEETH
# 220 "data/maps/TheIronaur/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TheIronair_Mine_2
# 231 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Mine_Text_2
TheIronair_Mine_1:
# 233 "data/maps/TheIronaur/scripts.pory"
	release
	end

TheIronair_Mine_2:
# 221 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Mine_Text_0, MSGBOX_YESNO
# 222 "data/maps/TheIronaur/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TheIronair_Mine_5
# 227 "data/maps/TheIronaur/scripts.pory"
	msgbox TheIronair_Mine_Text_1
	goto TheIronair_Mine_1

TheIronair_Mine_5:
# 223 "data/maps/TheIronaur/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/TheIronaur/scripts.pory"
	special Excavation_ItemUseCB
	goto TheIronair_Mine_1


# 10 "data/maps/TheIronaur/scripts.pory"
TheIronaur_OnTransition_Movement_0:
# 10 "data/maps/TheIronaur/scripts.pory"
	face_down
	step_end

# 84 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_0:
# 84 "data/maps/TheIronaur/scripts.pory"
	walk_in_place_down
	step_end

# 93 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_1:
# 93 "data/maps/TheIronaur/scripts.pory"
	face_left
# 93 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 93 "data/maps/TheIronaur/scripts.pory"
	face_right
# 93 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 93 "data/maps/TheIronaur/scripts.pory"
	face_down
# 93 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 93 "data/maps/TheIronaur/scripts.pory"
	delay_16
	step_end

# 96 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_2:
# 96 "data/maps/TheIronaur/scripts.pory"
	emote_exclamation_mark
# 96 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 96 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 96 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 96 "data/maps/TheIronaur/scripts.pory"
	face_up
	step_end

# 126 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_3:
# 126 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 126 "data/maps/TheIronaur/scripts.pory"
	walk_down
# 126 "data/maps/TheIronaur/scripts.pory"
	face_left
	step_end

# 132 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_4:
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_slow_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_slow_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_slow_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 132 "data/maps/TheIronaur/scripts.pory"
	walk_left
	step_end

# 133 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_5:
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	face_right
# 133 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 133 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 133 "data/maps/TheIronaur/scripts.pory"
	delay_16
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
# 133 "data/maps/TheIronaur/scripts.pory"
	walk_left
	step_end

# 134 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_6:
# 134 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 134 "data/maps/TheIronaur/scripts.pory"
	face_left
	step_end

# 140 "data/maps/TheIronaur/scripts.pory"
TheIronair_Aftermath_Movement_7:
# 140 "data/maps/TheIronaur/scripts.pory"
	walk_fast_right
# 140 "data/maps/TheIronaur/scripts.pory"
	walk_fast_right
# 140 "data/maps/TheIronaur/scripts.pory"
	walk_fast_right
	step_end

# 176 "data/maps/TheIronaur/scripts.pory"
TheIronair_BruceGuarding_Movement_0:
# 176 "data/maps/TheIronaur/scripts.pory"
	walk_right
# 176 "data/maps/TheIronaur/scripts.pory"
	walk_up
# 176 "data/maps/TheIronaur/scripts.pory"
	face_down
	step_end

TheIronair_Norbert_Text_0:
# 18 "data/maps/TheIronaur/scripts.pory"
	.string "It's so hot in here, I feel like I'm in the\n"
	.string "center of the Earth!$"

TheIronair_Worker1_Text_0:
# 33 "data/maps/TheIronaur/scripts.pory"
	.string "Dammit, it's so hot... I hate this job.\n"
	.string "That's it: tonight I'm applying to the\l"
	.string "Botanic School in Cruzeira.$"

TheIronair_Worker2_Text_0:
# 41 "data/maps/TheIronaur/scripts.pory"
	.string "Wanna know something cool? The other\n"
	.string "day, I found an iron ore the size of a\l"
	.string "fully grown man! I swear!$"

TheIronair_Worker3_Text_0:
# 49 "data/maps/TheIronaur/scripts.pory"
	.string "20 years ago, the entrance to the\n"
	.string "Ironair was so small that only a Durant\l"
	.string "could fit in. And look at us now!$"

TheIronair_Worker4_Text_0:
# 57 "data/maps/TheIronaur/scripts.pory"
	.string "I wonder if we could turn iron into\n"
	.string "something more pleasing to the eye, like\l"
	.string "gemstones, instead of plain pipes or\l"
	.string "whatever.$"

TheIronair_Shock_Text_0:
# 65 "data/maps/TheIronaur/scripts.pory"
	.string "This is bad... He was one of our\n"
	.string "strongest, toughest dude...$"

TheIronair_Guard_Text_0:
# 74 "data/maps/TheIronaur/scripts.pory"
	.string "Sorry mate, you can't go through.\n"
	.string "Bruce's orders.$"

TheIronair_Aftermath_Text_0:
# 86 "data/maps/TheIronaur/scripts.pory"
	.string "Bruce$"

TheIronair_Aftermath_Text_1:
# 87 "data/maps/TheIronaur/scripts.pory"
	.string "Boy, wake up! Tell me what happened!$"

TheIronair_Aftermath_Text_2:
# 99 "data/maps/TheIronaur/scripts.pory"
	.string "Ugh... My head... I'm sorry Bruce... I\n"
	.string "couldn't stop them...$"

TheIronair_Aftermath_Text_3:
# 106 "data/maps/TheIronaur/scripts.pory"
	.string "Them? Who's them? What did they look\n"
	.string "like? Are they still downstairs?$"

TheIronair_Aftermath_Text_4:
# 112 "data/maps/TheIronaur/scripts.pory"
	.string "I'm sorry Bruce, I can't remember...$"

TheIronair_Aftermath_Text_5:
# 115 "data/maps/TheIronaur/scripts.pory"
	.string "I feel like I'm gonna throw up...$"

TheIronair_Aftermath_Text_6:
# 123 "data/maps/TheIronaur/scripts.pory"
	.string "For Arceus' sake...$"

TheIronair_Aftermath_Text_7:
# 129 "data/maps/TheIronaur/scripts.pory"
	.string "You! Take him back to Frux. Lay him down\n"
	.string "and give him plenty of berries.$"

TheIronair_Aftermath_Text_8:
# 137 "data/maps/TheIronaur/scripts.pory"
	.string "{PLAYER}, meet me downstairs. How\n"
	.string "knows, maybe they're still there, and in\l"
	.string "that case, I'll need some strong\l"
	.string "support.$"

TheIronair_BruceGuarding_Text_0:
# 158 "data/maps/TheIronaur/scripts.pory"
	.string "{PLAYER}, have you talked to Diancie\n"
	.string "yet?$"

TheIronair_BruceGuarding_Text_1:
# 166 "data/maps/TheIronaur/scripts.pory"
	.string "There you are, {PLAYER}! Now that\n"
	.string "you've become the President, there's\l"
	.string "one last thing you need to do: you need\l"
	.string "to prove your worth to Diancie. Go\l"
	.string "downstairs and see by yourself! But\l"
	.string "before that, let me gift you something\l"
	.string "I've been crafting for a long time.$"

TheIronair_BruceGuarding_Text_2:
# 173 "data/maps/TheIronaur/scripts.pory"
	.string "I've been trying for months now to\n"
	.string "craft a Pokéball that will catch any\l"
	.string "Pokémon that exists without failure,\l"
	.string "and I've finally succeeded! Now that I\l"
	.string "made the blueprint, I want you to have\l"
	.string "the very first copy I made. Now go talk\l"
	.string "to Diancie!$"

TheIronair_BruceGuarding_Text_3:
# 187 "data/maps/TheIronaur/scripts.pory"
	.string "Hey, {PLAYER}! Thanks again for what\n"
	.string "you've did to protect Thura. Come back\l"
	.string "to me when you've become the President.$"

TheIronair_Excadrill_Text_0:
# 212 "data/maps/TheIronaur/scripts.pory"
	.string "Drill! Drill!$"

TheIronair_Mine_Text_0:
# 221 "data/maps/TheIronaur/scripts.pory"
	.string "The wall is bulging slightly. Try digging\n"
	.string "into it?$"

TheIronair_Mine_Text_1:
# 227 "data/maps/TheIronaur/scripts.pory"
	.string "Decided against it.$"

TheIronair_Mine_Text_2:
# 231 "data/maps/TheIronaur/scripts.pory"
	.string "You'll need tools to dig into the wall.$"

Norbert1::
# 23 "data/maps/TheIronaur/scripts.pory"
	.string "Look at that pool of lava! Don't fall in!$"

Norbert2::
# 27 "data/maps/TheIronaur/scripts.pory"
	.string "Ho ho, I almost fell!$"

SamCallVikkie::
# 194 "data/maps/TheIronaur/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Sam: Hey {PLAYER}!\p"
	.string "… … … … … …\p"
	.string "Bravo again on being the new\n"
	.string "President!\p"
	.string "… … … … … …\p"
	.string "What would you say about finding\n"
	.string "Vikkie and bringing her back in\l"
	.string "Thura? Meet me in her mansion.\l"
	.string "We'll look for clues.\l"
	.string "… … … … … …\n… … … … … Click!$"
