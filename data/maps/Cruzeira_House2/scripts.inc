# 1 "data/maps/Cruzeira_House2/scripts.pory"

# 2 "data/maps/Cruzeira_House2/scripts.pory"
Cruzeira_House2_MapScripts::
# 3 "data/maps/Cruzeira_House2/scripts.pory"
	.byte 0

Cruzeira_House2_Laila::
# 7 "data/maps/Cruzeira_House2/scripts.pory"
	compare VAR_MAIN_STORY, 11
	goto_if_le Cruzeira_House2_Laila_1
	return

Cruzeira_House2_Laila_1:
# 8 "data/maps/Cruzeira_House2/scripts.pory"
	lock
# 9 "data/maps/Cruzeira_House2/scripts.pory"
	namebox Cruzeira_House2_Laila_Text_0
# 10 "data/maps/Cruzeira_House2/scripts.pory"
	msgbox Cruzeira_House2_Laila_Text_1
# 11 "data/maps/Cruzeira_House2/scripts.pory"
	hidenamebox
# 12 "data/maps/Cruzeira_House2/scripts.pory"
	release
	end


Cruzeira_House2_Grandma::
# 18 "data/maps/Cruzeira_House2/scripts.pory"
	compare VAR_MAIN_STORY, 11
	goto_if_eq Cruzeira_House2_Grandma_1
# 26 "data/maps/Cruzeira_House2/scripts.pory"
	lock
# 27 "data/maps/Cruzeira_House2/scripts.pory"
	faceplayer
# 28 "data/maps/Cruzeira_House2/scripts.pory"
	msgbox Cruzeira_House2_Grandma_Text_1
# 29 "data/maps/Cruzeira_House2/scripts.pory"
	release
	end

Cruzeira_House2_Grandma_1:
# 19 "data/maps/Cruzeira_House2/scripts.pory"
	lock
# 20 "data/maps/Cruzeira_House2/scripts.pory"
	faceplayer
# 21 "data/maps/Cruzeira_House2/scripts.pory"
	msgbox Cruzeira_House2_Grandma_Text_0
# 22 "data/maps/Cruzeira_House2/scripts.pory"
	release
	end


# 35 "data/maps/Cruzeira_House2/scripts.pory"
LailaLeave2:
# 36 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 36 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 37 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 38 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 38 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 38 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/Cruzeira_House2/scripts.pory"
LailaLeave4:
# 42 "data/maps/Cruzeira_House2/scripts.pory"
	walk_up
# 43 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 43 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 43 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 44 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 44 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 44 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 45 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 45 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 45 "data/maps/Cruzeira_House2/scripts.pory"
	walk_right
# 46 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 46 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
# 46 "data/maps/Cruzeira_House2/scripts.pory"
	walk_down
	step_end

Cruzeira_House2_Laila_Text_0:
# 9 "data/maps/Cruzeira_House2/scripts.pory"
	.string "Laila$"

Cruzeira_House2_Laila_Text_1:
# 10 "data/maps/Cruzeira_House2/scripts.pory"
	.string "Sob... Sob...$"

Cruzeira_House2_Grandma_Text_0:
# 21 "data/maps/Cruzeira_House2/scripts.pory"
	.string "Have you cleaned the gym from these\n"
	.string "vermines yet? Please. It is of the most\l"
	.string "importance for my dear Laila.$"

Cruzeira_House2_Grandma_Text_1:
# 28 "data/maps/Cruzeira_House2/scripts.pory"
	.string "I am overwhelmed with gratitude for\n"
	.string "what you have done for my precious\l"
	.string "Laila. I will always be indebted to you.\l"
	.string "Please, If you ever return to Cruzeira,\l"
	.string "don't hesitate to visit my house and\l"
	.string "say hello.$"
