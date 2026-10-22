# 1 "data/maps/Cruzeira_House1/scripts.pory"

# 2 "data/maps/Cruzeira_House1/scripts.pory"
Cruzeira_House1_MapScripts::
# 3 "data/maps/Cruzeira_House1/scripts.pory"
	.byte 0

Cruzeira_House1_Boy::
# 7 "data/maps/Cruzeira_House1/scripts.pory"
	lock
# 8 "data/maps/Cruzeira_House1/scripts.pory"
	faceplayer
# 9 "data/maps/Cruzeira_House1/scripts.pory"
	msgbox Cruzeira_House1_Boy_Text_0
# 10 "data/maps/Cruzeira_House1/scripts.pory"
	release
	end


Cruzeira_House1_Girl::
# 15 "data/maps/Cruzeira_House1/scripts.pory"
	lock
# 16 "data/maps/Cruzeira_House1/scripts.pory"
	msgbox Cruzeira_House1_Girl_Text_0
# 17 "data/maps/Cruzeira_House1/scripts.pory"
	faceplayer
# 18 "data/maps/Cruzeira_House1/scripts.pory"
	msgbox Cruzeira_House1_Girl_Text_1
# 19 "data/maps/Cruzeira_House1/scripts.pory"
	turnobject 2, DIR_NORTH
# 20 "data/maps/Cruzeira_House1/scripts.pory"
	release
	end


Cruzeira_House1_Boy_Text_0:
# 9 "data/maps/Cruzeira_House1/scripts.pory"
	.string "See the girl by the TV? It's\n"
	.string "fascinating. We get to live in a town\l"
	.string "like Cruzeira, there are plenty of\l"
	.string "things to do, and all she does is watch\l"
	.string "the damn TV.$"

Cruzeira_House1_Girl_Text_0:
# 16 "data/maps/Cruzeira_House1/scripts.pory"
	.string "...mhm... HAHA!!$"

Cruzeira_House1_Girl_Text_1:
# 18 "data/maps/Cruzeira_House1/scripts.pory"
	.string "...What? He told you what? I don't care.\n"
	.string "My TV is my one and only friend.$"
