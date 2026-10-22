# 1 "data/maps/Virimante_House3/scripts.pory"

# 2 "data/maps/Virimante_House3/scripts.pory"
Virimante_House3_MapScripts::
# 3 "data/maps/Virimante_House3/scripts.pory"
	.byte 0

Virimante_House3_GruntF::
# 7 "data/maps/Virimante_House3/scripts.pory"
	lock
# 8 "data/maps/Virimante_House3/scripts.pory"
	faceplayer
# 9 "data/maps/Virimante_House3/scripts.pory"
	checkitem ITEM_TM44
# 10 "data/maps/Virimante_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Virimante_House3_GruntF_2
# 14 "data/maps/Virimante_House3/scripts.pory"
	msgbox Virimante_House3_GruntF_Text_1
# 15 "data/maps/Virimante_House3/scripts.pory"
	msgbox Virimante_House3_GruntF_Text_2
# 16 "data/maps/Virimante_House3/scripts.pory"
	msgbox Virimante_House3_GruntF_Text_3
# 17 "data/maps/Virimante_House3/scripts.pory"
	giveitem ITEM_TM44
Virimante_House3_GruntF_1:
# 19 "data/maps/Virimante_House3/scripts.pory"
	release
	end

Virimante_House3_GruntF_2:
# 11 "data/maps/Virimante_House3/scripts.pory"
	msgbox Virimante_House3_GruntF_Text_0
	goto Virimante_House3_GruntF_1


Virimante_House3_GruntF_Text_0:
# 11 "data/maps/Virimante_House3/scripts.pory"
	.string "I hope you feel well rested now!$"

Virimante_House3_GruntF_Text_1:
# 14 "data/maps/Virimante_House3/scripts.pory"
	.string "Oh my! Look at your eyes. You need to\n"
	.string "rest.$"

Virimante_House3_GruntF_Text_2:
# 15 "data/maps/Virimante_House3/scripts.pory"
	.string "...$"

Virimante_House3_GruntF_Text_3:
# 16 "data/maps/Virimante_House3/scripts.pory"
	.string "Huh? Oh no, I will not heal your\n"
	.string "Pokémons. Last time I did that for free,\l"
	.string "I almost got expelled from the Band.\l"
	.string "Take this instead.$"
