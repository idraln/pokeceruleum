# 1 "data/maps/Frux_House2/scripts.pory"

# 2 "data/maps/Frux_House2/scripts.pory"
Frux_House2_MapScripts::
# 3 "data/maps/Frux_House2/scripts.pory"
	.byte 0

Frux_House2_Worker1::
# 7 "data/maps/Frux_House2/scripts.pory"
	lock
# 8 "data/maps/Frux_House2/scripts.pory"
	faceplayer
# 9 "data/maps/Frux_House2/scripts.pory"
	msgbox Frux_House2_Worker1_Text_0
# 10 "data/maps/Frux_House2/scripts.pory"
	release
	end


Frux_House2_Worker2::
# 15 "data/maps/Frux_House2/scripts.pory"
	lock
# 16 "data/maps/Frux_House2/scripts.pory"
	msgbox Frux_House2_Worker2_Text_0
# 17 "data/maps/Frux_House2/scripts.pory"
	release
	end


Frux_House2_Worker1_Text_0:
# 9 "data/maps/Frux_House2/scripts.pory"
	.string "Hey. You can visit the dorms, but know\n"
	.string "that they are only reserved for us,\l"
	.string "hard workers. Not you, stinky hikers.$"

Frux_House2_Worker2_Text_0:
# 16 "data/maps/Frux_House2/scripts.pory"
	.string "Hmmm... Which one will I read before\n"
	.string "going to bed?... 'The legend of Diancie',\l"
	.string "or Byron's autobiography, 'The boy from\l"
	.string "Oreburgh'?...$"
