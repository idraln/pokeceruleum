# 1 "data/maps/CeruleanCoastRetro/scripts.pory"

# 2 "data/maps/CeruleanCoastRetro/scripts.pory"
CeruleanCoastRetro_MapScripts::
# 3 "data/maps/CeruleanCoastRetro/scripts.pory"
	.byte 0

CeruleanCoastRetro_Karl::
# 7 "data/maps/CeruleanCoastRetro/scripts.pory"
	trainerbattle_single TRAINER_RETRO_5, Karl1, Karl2
# 8 "data/maps/CeruleanCoastRetro/scripts.pory"
	msgbox CeruleanCoastRetro_Karl_Text_0
# 9 "data/maps/CeruleanCoastRetro/scripts.pory"
	closemessage
	end


CeruleanCoastRetro_Woman::
# 22 "data/maps/CeruleanCoastRetro/scripts.pory"
	lock
# 23 "data/maps/CeruleanCoastRetro/scripts.pory"
	faceplayer
# 24 "data/maps/CeruleanCoastRetro/scripts.pory"
	msgbox CeruleanCoastRetro_Woman_Text_0
# 25 "data/maps/CeruleanCoastRetro/scripts.pory"
	turnobject 2, DIR_WEST
# 26 "data/maps/CeruleanCoastRetro/scripts.pory"
	release
	end


CeruleanCoastRetro_Karl_Text_0:
# 8 "data/maps/CeruleanCoastRetro/scripts.pory"
	.string "Do you think I can teach Surf to my\n"
	.string "Kakuna?$"

CeruleanCoastRetro_Woman_Text_0:
# 24 "data/maps/CeruleanCoastRetro/scripts.pory"
	.string "Breathe in... Breathe out. Everything's\n"
	.string "gonna be ok.$"

Karl1::
# 13 "data/maps/CeruleanCoastRetro/scripts.pory"
	.string "I wanna know what's on the other side\n"
	.string "of the ocean!$"

Karl2::
# 17 "data/maps/CeruleanCoastRetro/scripts.pory"
	.string "Ok, maybe I'm good staying here.$"
