# 1 "data/maps/BoisEsprit_House/scripts.pory"

# 2 "data/maps/BoisEsprit_House/scripts.pory"
BoisEsprit_House_MapScripts::
# 3 "data/maps/BoisEsprit_House/scripts.pory"
	.byte 0

BoisEsprit_House_Grunt1::
# 7 "data/maps/BoisEsprit_House/scripts.pory"
	lock
# 8 "data/maps/BoisEsprit_House/scripts.pory"
	faceplayer
# 9 "data/maps/BoisEsprit_House/scripts.pory"
	msgbox BoisEsprit_House_Grunt1_Text_0
# 10 "data/maps/BoisEsprit_House/scripts.pory"
	turnobject 2, DIR_NORTH
# 11 "data/maps/BoisEsprit_House/scripts.pory"
	release
	end


BoisEsprit_House_Grunt2::
# 16 "data/maps/BoisEsprit_House/scripts.pory"
	lock
# 17 "data/maps/BoisEsprit_House/scripts.pory"
	faceplayer
# 18 "data/maps/BoisEsprit_House/scripts.pory"
	checkitem ITEM_TM12
# 19 "data/maps/BoisEsprit_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BoisEsprit_House_Grunt2_2
# 23 "data/maps/BoisEsprit_House/scripts.pory"
	msgbox BoisEsprit_House_Grunt2_Text_1
# 24 "data/maps/BoisEsprit_House/scripts.pory"
	giveitem ITEM_TM12
BoisEsprit_House_Grunt2_1:
# 26 "data/maps/BoisEsprit_House/scripts.pory"
	release
	end

BoisEsprit_House_Grunt2_2:
# 20 "data/maps/BoisEsprit_House/scripts.pory"
	msgbox BoisEsprit_House_Grunt2_Text_0
	goto BoisEsprit_House_Grunt2_1


BoisEsprit_House_Grunt3::
# 31 "data/maps/BoisEsprit_House/scripts.pory"
	lock
# 32 "data/maps/BoisEsprit_House/scripts.pory"
	faceplayer
# 33 "data/maps/BoisEsprit_House/scripts.pory"
	msgbox BoisEsprit_House_Grunt3_Text_0
# 34 "data/maps/BoisEsprit_House/scripts.pory"
	release
	end


BoisEsprit_House_Grunt1_Text_0:
# 9 "data/maps/BoisEsprit_House/scripts.pory"
	.string "Piss off! I'm tryna watch the news, I\n"
	.string "stole a Pokémon from a kid. Am I famous\l"
	.string "yet?$"

BoisEsprit_House_Grunt2_Text_0:
# 20 "data/maps/BoisEsprit_House/scripts.pory"
	.string "So, have you tried it yet?$"

BoisEsprit_House_Grunt2_Text_1:
# 23 "data/maps/BoisEsprit_House/scripts.pory"
	.string "Do you know what's the most important\n"
	.string "quality you need to be a valuable\l"
	.string "grunt? That's right! You must to be able\l"
	.string "to provoke anyone. Try it yourself!$"

BoisEsprit_House_Grunt3_Text_0:
# 33 "data/maps/BoisEsprit_House/scripts.pory"
	.string "If I keep looking away, maybe he'll stop\n"
	.string "staring at me. Damn, what a creep!$"
