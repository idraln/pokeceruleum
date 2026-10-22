# 1 "data/maps/Virimante_House2/scripts.pory"

# 2 "data/maps/Virimante_House2/scripts.pory"
Virimante_House2_MapScripts::
# 3 "data/maps/Virimante_House2/scripts.pory"
	.byte 0

Virimante_House2_GruntF::
# 7 "data/maps/Virimante_House2/scripts.pory"
	lock
# 8 "data/maps/Virimante_House2/scripts.pory"
	msgbox Virimante_House2_GruntF_Text_0
# 9 "data/maps/Virimante_House2/scripts.pory"
	release
	end


Virimante_House2_GruntM::
# 14 "data/maps/Virimante_House2/scripts.pory"
	lock
# 15 "data/maps/Virimante_House2/scripts.pory"
	faceplayer
# 16 "data/maps/Virimante_House2/scripts.pory"
	msgbox Virimante_House2_GruntM_Text_0
# 17 "data/maps/Virimante_House2/scripts.pory"
	release
	end


Virimante_House2_GruntF_Text_0:
# 8 "data/maps/Virimante_House2/scripts.pory"
	.string "Hmmm... Forks... Knives... Hehehe...$"

Virimante_House2_GruntM_Text_0:
# 16 "data/maps/Virimante_House2/scripts.pory"
	.string "My sis has a weird obsession with\n"
	.string "cutlery. I can't explain it.$"
