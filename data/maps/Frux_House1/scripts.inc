# 1 "data/maps/Frux_House1/scripts.pory"

# 2 "data/maps/Frux_House1/scripts.pory"
Frux_House1_MapScripts::
# 3 "data/maps/Frux_House1/scripts.pory"
	.byte 0

Frux_House1_Worker::
# 7 "data/maps/Frux_House1/scripts.pory"
	lock
# 8 "data/maps/Frux_House1/scripts.pory"
	msgbox Frux_House1_Worker_Text_0
# 9 "data/maps/Frux_House1/scripts.pory"
	release
	end


Frux_House1_Worker_Text_0:
# 8 "data/maps/Frux_House1/scripts.pory"
	.string "Dammit! Bruce took the last choco milk!\n"
	.string "Even though I wrote my name on it!$"
