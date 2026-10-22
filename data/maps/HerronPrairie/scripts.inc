# 1 "data/maps/HerronPrairie/scripts.pory"

# 2 "data/maps/HerronPrairie/scripts.pory"
HerronPrairie_MapScripts::
# 3 "data/maps/HerronPrairie/scripts.pory"
	.byte 0

HerronPrairie_SoldierMike::
# 7 "data/maps/HerronPrairie/scripts.pory"
	trainerbattle_single TRAINER_HERRON_1, Mike1, Mike2
# 8 "data/maps/HerronPrairie/scripts.pory"
	msgbox HerronPrairie_SoldierMike_Text_0
# 9 "data/maps/HerronPrairie/scripts.pory"
	closemessage
	end


HerronPrairie_SoldierGuy::
# 24 "data/maps/HerronPrairie/scripts.pory"
	trainerbattle_single TRAINER_HERRON_2, Guy1, Guy2
# 25 "data/maps/HerronPrairie/scripts.pory"
	msgbox HerronPrairie_SoldierGuy_Text_0
# 26 "data/maps/HerronPrairie/scripts.pory"
	closemessage
	end


HerronPrairie_SoldierFrank::
# 41 "data/maps/HerronPrairie/scripts.pory"
	trainerbattle_single TRAINER_HERRON_3, Frank1, Frank2
# 42 "data/maps/HerronPrairie/scripts.pory"
	msgbox HerronPrairie_SoldierFrank_Text_0
# 43 "data/maps/HerronPrairie/scripts.pory"
	closemessage
	end


HerronPrairie_SoldierPaul::
# 58 "data/maps/HerronPrairie/scripts.pory"
	trainerbattle_single TRAINER_HERRON_4, Paul1, Paul2
# 59 "data/maps/HerronPrairie/scripts.pory"
	msgbox HerronPrairie_SoldierPaul_Text_0
# 60 "data/maps/HerronPrairie/scripts.pory"
	closemessage
	end


HerronPrairie_SoldierMike_Text_0:
# 8 "data/maps/HerronPrairie/scripts.pory"
	.string "Enrolling in the army has given me a\n"
	.string "purpose in life. It also gave me anxiety.$"

HerronPrairie_SoldierGuy_Text_0:
# 25 "data/maps/HerronPrairie/scripts.pory"
	.string "You know, you could join our troops,\n"
	.string "you'll make a great addition...$"

HerronPrairie_SoldierFrank_Text_0:
# 42 "data/maps/HerronPrairie/scripts.pory"
	.string "What am I even doing here? What are we\n"
	.string "trying to find?$"

HerronPrairie_SoldierPaul_Text_0:
# 59 "data/maps/HerronPrairie/scripts.pory"
	.string "Come on, I said sorry. You didn't have to\n"
	.string "blast my Pokémons like that.$"

Mike1::
# 13 "data/maps/HerronPrairie/scripts.pory"
	.string "What'd you think of the machine, kid?$"

Mike2::
# 17 "data/maps/HerronPrairie/scripts.pory"
	.string "I hope to test it one day!$"

Guy1::
# 30 "data/maps/HerronPrairie/scripts.pory"
	.string "You! Ten push ups, now!$"

Guy2::
# 34 "data/maps/HerronPrairie/scripts.pory"
	.string "You took it like a champ...$"

Frank1::
# 47 "data/maps/HerronPrairie/scripts.pory"
	.string "I'm so bored, help me!$"

Frank2::
# 51 "data/maps/HerronPrairie/scripts.pory"
	.string "Already over?$"

Paul1::
# 64 "data/maps/HerronPrairie/scripts.pory"
	.string "Sorry for abducting you earlier bud.$"

Paul2::
# 68 "data/maps/HerronPrairie/scripts.pory"
	.string "What? You don't accept my apologies?$"
