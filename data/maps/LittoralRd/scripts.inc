# 1 "data/maps/LittoralRd/scripts.pory"

# 2 "data/maps/LittoralRd/scripts.pory"
LittoralRd_MapScripts::
# 3 "data/maps/LittoralRd/scripts.pory"
	.byte 0

LittoralRd_Scout1::
# 7 "data/maps/LittoralRd/scripts.pory"
	lock
# 8 "data/maps/LittoralRd/scripts.pory"
	faceplayer
# 9 "data/maps/LittoralRd/scripts.pory"
	msgbox LittoralRd_Scout1_Text_0
# 10 "data/maps/LittoralRd/scripts.pory"
	release
	end


LittoralRd_Scout2::
# 15 "data/maps/LittoralRd/scripts.pory"
	lock
# 16 "data/maps/LittoralRd/scripts.pory"
	faceplayer
# 17 "data/maps/LittoralRd/scripts.pory"
	msgbox LittoralRd_Scout2_Text_0
# 18 "data/maps/LittoralRd/scripts.pory"
	release
	end


LittoralRd_Silke::
# 23 "data/maps/LittoralRd/scripts.pory"
	trainerbattle_single TRAINER_LITTORAL_1, Silke1, Silke2
# 24 "data/maps/LittoralRd/scripts.pory"
	msgbox LittoralRd_Silke_Text_0
# 25 "data/maps/LittoralRd/scripts.pory"
	closemessage
	end


LittoralRd_Cory::
# 30 "data/maps/LittoralRd/scripts.pory"
	trainerbattle_single TRAINER_LITTORAL_2, Cory1, Cory2
# 31 "data/maps/LittoralRd/scripts.pory"
	msgbox LittoralRd_Cory_Text_0
# 32 "data/maps/LittoralRd/scripts.pory"
	closemessage
	end


LittoralRd_Sign::
# 37 "data/maps/LittoralRd/scripts.pory"
	lockall
# 38 "data/maps/LittoralRd/scripts.pory"
	msgbox LittoralRd_Sign_Text_0
# 39 "data/maps/LittoralRd/scripts.pory"
	releaseall
	end


LittoralRd_Scout1_Text_0:
# 9 "data/maps/LittoralRd/scripts.pory"
	.string "The sea breeze makes this road the\n"
	.string "perfect place for delicious mushrooms\l"
	.string "to grow huge! We're collecting some with\l"
	.string "my girl. If you happen to find one that\l"
	.string "is ultra big, please show it to me!$"

LittoralRd_Scout2_Text_0:
# 17 "data/maps/LittoralRd/scripts.pory"
	.string "Ugh... I hate mushrooms. My boyfriend is\n"
	.string "passionate about them... Maybe a bit\l"
	.string "too much. We could camp on some of the\l"
	.string "most beautiful spots of Thura, but\l"
	.string "instead he insists that we come here\l"
	.string "every day to forage for mushrooms...$"

LittoralRd_Silke_Text_0:
# 24 "data/maps/LittoralRd/scripts.pory"
	.string "Have you ever tried your luck at the\n"
	.string "Triathlon? It's truly something to\l"
	.string "experience once in you life!$"

LittoralRd_Cory_Text_0:
# 31 "data/maps/LittoralRd/scripts.pory"
	.string "We're almost ready to dominate this\n"
	.string "Triathlon we've been training for!$"

LittoralRd_Sign_Text_0:
# 38 "data/maps/LittoralRd/scripts.pory"
	.string "{UP_ARROW} Pastoral Rd.\n"
	.string "{DOWN_ARROW} Cali$"

Silke1::
# 43 "data/maps/LittoralRd/scripts.pory"
	.string "Seven days until our biggest\n"
	.string "competition! Join us in our training!$"

Silke2::
# 47 "data/maps/LittoralRd/scripts.pory"
	.string "Yes, that's what I'm talking about!$"

Cory1::
# 51 "data/maps/LittoralRd/scripts.pory"
	.string "You'll do for the perfect recovery\n"
	.string "after a hefty session!$"

Cory2::
# 55 "data/maps/LittoralRd/scripts.pory"
	.string "Oh yeah. Time to stretch now!$"
