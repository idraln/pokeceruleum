# 1 "data/maps/SapphireCity_Building9/scripts.pory"

# 2 "data/maps/SapphireCity_Building9/scripts.pory"
SapphireCity_Building9_MapScripts::
# 3 "data/maps/SapphireCity_Building9/scripts.pory"
	.byte 0

SapphireCity_Building9_SchoolBoy::
# 7 "data/maps/SapphireCity_Building9/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Building9/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Building9/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_CLEVER, SapphireCity_Building9_SchoolBoy_2
# 13 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_1, MSGBOX_YESNO
# 14 "data/maps/SapphireCity_Building9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Building9_SchoolBoy_5
# 38 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_9
SapphireCity_Building9_SchoolBoy_1:
# 41 "data/maps/SapphireCity_Building9/scripts.pory"
	release
	end

SapphireCity_Building9_SchoolBoy_2:
# 10 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_0
	goto SapphireCity_Building9_SchoolBoy_1

SapphireCity_Building9_SchoolBoy_5:
# 15 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_2, MSGBOX_YESNO
# 16 "data/maps/SapphireCity_Building9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Building9_SchoolBoy_8
# 34 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_8
	goto SapphireCity_Building9_SchoolBoy_1

SapphireCity_Building9_SchoolBoy_8:
# 17 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_3, MSGBOX_YESNO
# 18 "data/maps/SapphireCity_Building9/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireCity_Building9_SchoolBoy_11
# 30 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_7
	goto SapphireCity_Building9_SchoolBoy_1

SapphireCity_Building9_SchoolBoy_11:
# 19 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_4, MSGBOX_YESNO
# 20 "data/maps/SapphireCity_Building9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Building9_SchoolBoy_14
# 26 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_6
	goto SapphireCity_Building9_SchoolBoy_1

SapphireCity_Building9_SchoolBoy_14:
# 21 "data/maps/SapphireCity_Building9/scripts.pory"
	msgbox SapphireCity_Building9_SchoolBoy_Text_5
# 22 "data/maps/SapphireCity_Building9/scripts.pory"
	giveitem ITEM_TM27
# 23 "data/maps/SapphireCity_Building9/scripts.pory"
	setflag FLAG_SAPPHIRE_CLEVER
	goto SapphireCity_Building9_SchoolBoy_1


SapphireCity_Building9_SchoolBoy_Text_0:
# 10 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "I don't have any more questions for\n"
	.string "you! I'm trying to catch up.$"

SapphireCity_Building9_SchoolBoy_Text_1:
# 13 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "School's off today, but there's always\n"
	.string "time to learn new things! Do you want to\l"
	.string "face the challenge?$"

SapphireCity_Building9_SchoolBoy_Text_2:
# 15 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "Alright! Let's get it on! First question:\n"
	.string "does a Rawst Berry cure burned\l"
	.string "Pokémon?$"

SapphireCity_Building9_SchoolBoy_Text_3:
# 17 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "Great answer! Next question:\n"
	.string "Exeggcute evolves 2 times. True or\l"
	.string "false?$"

SapphireCity_Building9_SchoolBoy_Text_4:
# 19 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "Nice job! Final question! If F is a\n"
	.string "vector field in space and the surface\l"
	.string "integral of F is zero along any closed\l"
	.string "surface S, then div(F(x,y,z))=0 for all\l"
	.string "(x,y,z). True or false?$"

SapphireCity_Building9_SchoolBoy_Text_5:
# 21 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "...Woah. You actually got it right! As a\n"
	.string "reward, take this.$"

SapphireCity_Building9_SchoolBoy_Text_6:
# 26 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "Wrong! You lost! Yeah, that was too\n"
	.string "hard. I don't want to brag, but I know\l"
	.string "the answer. Heh.$"

SapphireCity_Building9_SchoolBoy_Text_7:
# 30 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "No, no! Exeggcute can evolve into 2\n"
	.string "differents forms, but evolves only one\l"
	.string "time! That's basic!$"

SapphireCity_Building9_SchoolBoy_Text_8:
# 34 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "Too bad! Better luck next time. Heh.$"

SapphireCity_Building9_SchoolBoy_Text_9:
# 38 "data/maps/SapphireCity_Building9/scripts.pory"
	.string "No worries, come back later! I love\n"
	.string "learning new things.$"
