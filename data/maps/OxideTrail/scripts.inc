# 1 "data/maps/OxideTrail/scripts.pory"

# 2 "data/maps/OxideTrail/scripts.pory"
OxideTrail_MapScripts::
# 3 "data/maps/OxideTrail/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, OxideTrail_OnFrame
# 4 "data/maps/OxideTrail/scripts.pory"
	.byte 0
# 5 "data/maps/OxideTrail/scripts.pory"

# 6 "data/maps/OxideTrail/scripts.pory"
OxideTrail_OnFrame:
# 7 "data/maps/OxideTrail/scripts.pory"
    map_script_2 VAR_TRIATHLON, 1, OxideTrail_TriathlonStart
# 8 "data/maps/OxideTrail/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 46, OxideTrail_VikkieCall
# 9 "data/maps/OxideTrail/scripts.pory"
    .2byte 0

OxideTrail_VikkieCall::
# 13 "data/maps/OxideTrail/scripts.pory"
	lock
# 14 "data/maps/OxideTrail/scripts.pory"
	pokenavcall SamCallVikkie
# 15 "data/maps/OxideTrail/scripts.pory"
	waitmessage
# 16 "data/maps/OxideTrail/scripts.pory"
	startquest QUEST_VIKKIE
# 17 "data/maps/OxideTrail/scripts.pory"
	setflag FLAG_VIKKIE_MANSION
# 18 "data/maps/OxideTrail/scripts.pory"
	clearflag FLAG_SAM_VIKKELSON
# 19 "data/maps/OxideTrail/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/OxideTrail/scripts.pory"
	setvar VAR_MAIN_STORY, 47
# 21 "data/maps/OxideTrail/scripts.pory"
	release
	return


OxideTrail_TriathlonStart::
# 25 "data/maps/OxideTrail/scripts.pory"
	lock
# 26 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 27 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_1
# 28 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 29 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 30 "data/maps/OxideTrail/scripts.pory"
	delay 20
# 31 "data/maps/OxideTrail/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OxideTrail_TriathlonStart_Movement_0
# 32 "data/maps/OxideTrail/scripts.pory"
	waitmovement 0
# 33 "data/maps/OxideTrail/scripts.pory"
	delay 10
# 34 "data/maps/OxideTrail/scripts.pory"
	special GetOnBikeOxideTrail
# 35 "data/maps/OxideTrail/scripts.pory"
	delay 20
# 36 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 37 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_2
# 38 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 39 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 40 "data/maps/OxideTrail/scripts.pory"
	delay 10
# 41 "data/maps/OxideTrail/scripts.pory"
	playse SE_CONTEST_PLACE
# 42 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 43 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_3
# 44 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 45 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 46 "data/maps/OxideTrail/scripts.pory"
	delay 10
# 47 "data/maps/OxideTrail/scripts.pory"
	playse SE_CONTEST_PLACE
# 48 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 49 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_4
# 50 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 51 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 52 "data/maps/OxideTrail/scripts.pory"
	delay 10
# 53 "data/maps/OxideTrail/scripts.pory"
	playse SE_CONTEST_PLACE
# 54 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 55 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_5
# 56 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 57 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 58 "data/maps/OxideTrail/scripts.pory"
	delay 10
# 59 "data/maps/OxideTrail/scripts.pory"
	playse SE_DING_DONG
# 60 "data/maps/OxideTrail/scripts.pory"
	namebox OxideTrail_TriathlonStart_Text_0
# 61 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_TriathlonStart_Text_6
# 62 "data/maps/OxideTrail/scripts.pory"
	hidenamebox
# 63 "data/maps/OxideTrail/scripts.pory"
	closemessage
# 64 "data/maps/OxideTrail/scripts.pory"
	clearflag FLAG_SYS_DISABLE_SAVE
# 65 "data/maps/OxideTrail/scripts.pory"
	setvar VAR_TRIATHLON, 2
# 66 "data/maps/OxideTrail/scripts.pory"
	special StartTriathlonTimer
# 67 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_ShopUpdate::
# 72 "data/maps/OxideTrail/scripts.pory"
	lockall
# 73 "data/maps/OxideTrail/scripts.pory"
	faceplayer
# 74 "data/maps/OxideTrail/scripts.pory"
	pokenavcall OxideTrail_Shop_Text
# 75 "data/maps/OxideTrail/scripts.pory"
	waitmessage
# 76 "data/maps/OxideTrail/scripts.pory"
	setvar VAR_SHOP_UPDATE, 4
# 77 "data/maps/OxideTrail/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/OxideTrail/scripts.pory"
	releaseall
	end


OxideTrail_Patrick::
# 100 "data/maps/OxideTrail/scripts.pory"
	trainerbattle_single TRAINER_OXIDE_1, Patrick1, Patrick2
# 101 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_Patrick_Text_0
# 102 "data/maps/OxideTrail/scripts.pory"
	closemessage
	end


OxideTrail_Worker::
# 115 "data/maps/OxideTrail/scripts.pory"
	lock
# 116 "data/maps/OxideTrail/scripts.pory"
	faceplayer
# 117 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_Worker_Text_0
# 118 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_Coralie::
# 123 "data/maps/OxideTrail/scripts.pory"
	trainerbattle_single TRAINER_OXIDE_2, Coralie1, Coralie2
# 124 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_Coralie_Text_0
# 125 "data/maps/OxideTrail/scripts.pory"
	closemessage
	end


OxideTrail_Charlie::
# 138 "data/maps/OxideTrail/scripts.pory"
	trainerbattle_single TRAINER_OXIDE_3, Charlie1, Charlie2
# 139 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_Charlie_Text_0
# 140 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_TM::
# 153 "data/maps/OxideTrail/scripts.pory"
	lock
# 154 "data/maps/OxideTrail/scripts.pory"
	removeobject 5
# 155 "data/maps/OxideTrail/scripts.pory"
	setflag FLAG_OXIDE_TM
# 156 "data/maps/OxideTrail/scripts.pory"
	giveitem ITEM_TM23
# 157 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_Orga::
# 162 "data/maps/OxideTrail/scripts.pory"
	lock
# 163 "data/maps/OxideTrail/scripts.pory"
	faceplayer
# 164 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_Orga_Text_0
# 165 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_NPC1::
# 170 "data/maps/OxideTrail/scripts.pory"
	lock
# 171 "data/maps/OxideTrail/scripts.pory"
	faceplayer
# 172 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_NPC1_Text_0
# 173 "data/maps/OxideTrail/scripts.pory"
	release
	end


OxideTrail_NPC2::
# 178 "data/maps/OxideTrail/scripts.pory"
	lock
# 179 "data/maps/OxideTrail/scripts.pory"
	faceplayer
# 180 "data/maps/OxideTrail/scripts.pory"
	msgbox OxideTrail_NPC2_Text_0
# 181 "data/maps/OxideTrail/scripts.pory"
	release
	end


# 31 "data/maps/OxideTrail/scripts.pory"
OxideTrail_TriathlonStart_Movement_0:
# 31 "data/maps/OxideTrail/scripts.pory"
	face_right
	step_end

OxideTrail_TriathlonStart_Text_0:
# 26 "data/maps/OxideTrail/scripts.pory"
	.string "Scott$"

OxideTrail_TriathlonStart_Text_1:
# 27 "data/maps/OxideTrail/scripts.pory"
	.string "Alright, {PLAYER}! Hop on your bike!$"

OxideTrail_TriathlonStart_Text_2:
# 37 "data/maps/OxideTrail/scripts.pory"
	.string "Are you ready?$"

OxideTrail_TriathlonStart_Text_3:
# 43 "data/maps/OxideTrail/scripts.pory"
	.string "3...$"

OxideTrail_TriathlonStart_Text_4:
# 49 "data/maps/OxideTrail/scripts.pory"
	.string "2...$"

OxideTrail_TriathlonStart_Text_5:
# 55 "data/maps/OxideTrail/scripts.pory"
	.string "1...$"

OxideTrail_TriathlonStart_Text_6:
# 61 "data/maps/OxideTrail/scripts.pory"
	.string "GO!!!$"

OxideTrail_Patrick_Text_0:
# 101 "data/maps/OxideTrail/scripts.pory"
	.string "The warmth of the volcano and the smell\n"
	.string "of iron is pushing me to my limits! I feel\l"
	.string "great!$"

OxideTrail_Worker_Text_0:
# 117 "data/maps/OxideTrail/scripts.pory"
	.string "Our workplace isn't limited to the\n"
	.string "inside of the Ironair. Look around you!\l"
	.string "So much iron begging to be mined and\l"
	.string "processed!$"

OxideTrail_Coralie_Text_0:
# 124 "data/maps/OxideTrail/scripts.pory"
	.string "I love my Staraptor, and I want it to\n"
	.string "have a new friend! Skarmory is so\l"
	.string "majestic, with its wings made of steel!$"

OxideTrail_Charlie_Text_0:
# 139 "data/maps/OxideTrail/scripts.pory"
	.string "Some food for thought: often, descents\n"
	.string "are way riskier than climbs. This is all\l"
	.string "the more true in the Triathlon!$"

OxideTrail_Orga_Text_0:
# 164 "data/maps/OxideTrail/scripts.pory"
	.string "Go! Go! You're losing time!$"

OxideTrail_NPC1_Text_0:
# 172 "data/maps/OxideTrail/scripts.pory"
	.string "Woohoo! Come on!$"

OxideTrail_NPC2_Text_0:
# 180 "data/maps/OxideTrail/scripts.pory"
	.string "What a beautiful display of sports\n"
	.string "skills!$"

OxideTrail_Shop_Text::
# 82 "data/maps/OxideTrail/scripts.pory"
	.string "You just received a new\n"
	.string "text message from:\l"
	.string "Thura's Mart Association\l"
	.string "'Hello, dear customer!\l"
	.string "We'd like to inform you\l"
	.string "that we're upgrading our stores\l"
	.string "once again! You can now buy\l"
	.string "items such as Hyper Potions,\l"
	.string "Ultra Balls, Ethers and much\l"
	.string "more!\l"
	.string "And finally, our TM, Battle and\l"
	.string "Evo departments are finally open\l"
	.string "in Sapphire City!\l"
	.string "Come by and see by yourself!'$"

Patrick1::
# 106 "data/maps/OxideTrail/scripts.pory"
	.string "Wait! Let me show you my fire breathing\n"
	.string "skills!$"

Patrick2::
# 110 "data/maps/OxideTrail/scripts.pory"
	.string "That didn't impress you? Wow...$"

Coralie1::
# 129 "data/maps/OxideTrail/scripts.pory"
	.string "Have you ever seen the Pokémon\n"
	.string "Skarmory?$"

Coralie2::
# 133 "data/maps/OxideTrail/scripts.pory"
	.string "I need to search further!$"

Charlie1::
# 144 "data/maps/OxideTrail/scripts.pory"
	.string "So that's it? I'm at the end of the\n"
	.string "trail?$"

Charlie2::
# 148 "data/maps/OxideTrail/scripts.pory"
	.string "Back to Frux, I guess.$"
