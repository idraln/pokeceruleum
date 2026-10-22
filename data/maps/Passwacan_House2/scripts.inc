# 1 "data/maps/Passwacan_House2/scripts.pory"

# 2 "data/maps/Passwacan_House2/scripts.pory"
Passwacan_House2_MapScripts::
# 3 "data/maps/Passwacan_House2/scripts.pory"
	.byte 0

Passwacan_House2_Woman::
# 7 "data/maps/Passwacan_House2/scripts.pory"
	lock
# 8 "data/maps/Passwacan_House2/scripts.pory"
	faceplayer
# 9 "data/maps/Passwacan_House2/scripts.pory"
	msgbox Passwacan_House2_Woman_Text_0
# 10 "data/maps/Passwacan_House2/scripts.pory"
	release
	end


Passwacan_House2_Kid::
# 15 "data/maps/Passwacan_House2/scripts.pory"
	lock
# 16 "data/maps/Passwacan_House2/scripts.pory"
	faceplayer
# 17 "data/maps/Passwacan_House2/scripts.pory"
	checkitem ITEM_TM05
# 18 "data/maps/Passwacan_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Passwacan_House2_Kid_2
# 22 "data/maps/Passwacan_House2/scripts.pory"
	msgbox Passwacan_House2_Kid_Text_1
# 23 "data/maps/Passwacan_House2/scripts.pory"
	giveitem ITEM_TM05
Passwacan_House2_Kid_1:
# 25 "data/maps/Passwacan_House2/scripts.pory"
	release
	end

Passwacan_House2_Kid_2:
# 19 "data/maps/Passwacan_House2/scripts.pory"
	msgbox Passwacan_House2_Kid_Text_0
	goto Passwacan_House2_Kid_1


Passwacan_House2_Woman_Text_0:
# 9 "data/maps/Passwacan_House2/scripts.pory"
	.string "Since he was born, he hasn't stopped\n"
	.string "laughing. What could possibly be wrong\l"
	.string "with him?$"

Passwacan_House2_Kid_Text_0:
# 19 "data/maps/Passwacan_House2/scripts.pory"
	.string "Hahahaha! Haha!$"

Passwacan_House2_Kid_Text_1:
# 22 "data/maps/Passwacan_House2/scripts.pory"
	.string "Haha! Hahaha! Check this out!$"
