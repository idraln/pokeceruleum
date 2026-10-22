# 1 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"

# 2 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
SapphireCity_BuildingLobbies_MapScripts::
# 3 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.byte 0

SapphireCity_BuildingLobbies_CantAccess_Left::
# 7 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_CantAccess_Left_Text_0
# 9 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	closemessage
# 10 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SCBL_Left
# 11 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	waitmovement 0
# 12 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_CantAccess_Right::
# 17 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 18 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_CantAccess_Left_Text_0
# 19 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	closemessage
# 20 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SCBL_Right
# 21 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	waitmovement 0
# 22 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_CantAccess_Right_Special::
# 27 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_UNAUTHORIZED, SapphireCity_BuildingLobbies_CantAccess_Right_Special_1
	return

SapphireCity_BuildingLobbies_CantAccess_Right_Special_1:
# 28 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 29 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_CantAccess_Left_Text_0
# 30 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	closemessage
# 31 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SCBL_Right
# 32 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	waitmovement 0
# 33 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_OldB1::
# 39 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 40 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 41 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_OldB1_Text_0
# 42 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_WomanB2::
# 47 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 48 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	checkitem ITEM_SECRET_KEY
# 49 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SapphireCity_BuildingLobbies_WomanB2_2
# 64 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 65 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_WomanB2_Text_1
# 66 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	startquest QUEST_LOST_KEY
# 68 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end

SapphireCity_BuildingLobbies_WomanB2_2:
# 50 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 51 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_WomanB2_Text_0
# 52 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	removeitem ITEM_SECRET_KEY
# 53 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	giveitem ITEM_POTION
# 54 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	turnobject 3, DIR_WEST
# 55 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	delay 20
# 56 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	removeobject 3
# 57 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	setflag FLAG_WOMAN_SAPPHIRE_B2
# 59 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	completequest QUEST_LOST_KEY
# 60 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_ManB3::
# 73 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 74 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ManB3_Text_0
# 75 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 76 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ManB3_Text_1
# 77 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	turnobject 1, DIR_WEST
# 78 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ManB3_Text_2
# 79 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_FighterB4::
# 84 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 85 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 86 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_FighterB4_Text_0
# 87 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_ThiefB5::
# 92 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	compare VAR_SAPPHIRE_THIEF_B5, 0
	goto_if_eq SapphireCity_BuildingLobbies_ThiefB5_1
# 101 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	compare VAR_SAPPHIRE_THIEF_B5, 1
	goto_if_eq SapphireCity_BuildingLobbies_ThiefB5_2
# 111 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 112 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 113 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SCBL_Thief1
# 114 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	trainerbattle_no_intro TRAINER_THIEF_SAPPHIRE, SCBL_Thief2
# 115 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ThiefB5_Text_2
# 116 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	closemessage
# 117 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	applymovement 7, SCBL_Thief
# 118 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	waitmovement 0
# 119 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	removeobject 7
# 120 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	setflag FLAG_SAPPHIRE_THIEF
# 122 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end

SapphireCity_BuildingLobbies_ThiefB5_1:
# 93 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 94 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 95 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ThiefB5_Text_0
# 96 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	turnobject 7, DIR_EAST
# 97 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	setvar VAR_SAPPHIRE_THIEF_B5, 1
# 98 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end

SapphireCity_BuildingLobbies_ThiefB5_2:
# 102 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 103 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 104 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ThiefB5_Text_1
# 105 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	turnobject 7, DIR_EAST
# 106 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	setvar VAR_SAPPHIRE_THIEF_B5, 2
# 107 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_WomanB6::
# 128 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 129 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 130 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_WomanB6_Text_0
# 131 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_ObjectB7::
# 136 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 137 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL
# 138 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	removeobject 6
# 139 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	setflag FLAG_ITEM_SAPPHIRE_B7
# 140 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_WomanB8::
# 145 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 146 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 147 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_WomanB8_Text_0
# 148 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


SapphireCity_BuildingLobbies_ManB9::
# 153 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	lock
# 154 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	faceplayer
# 155 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	msgbox SapphireCity_BuildingLobbies_ManB9_Text_0
# 156 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	turnobject 9, DIR_WEST
# 157 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	release
	end


# 162 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
SCBL_Left:
# 163 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	walk_right
	step_end

# 166 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
SCBL_Right:
# 167 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	walk_left
	step_end

# 170 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
SCBL_Thief:
# 171 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	walk_up
# 172 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	walk_left
# 173 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	walk_up
	step_end

SapphireCity_BuildingLobbies_CantAccess_Left_Text_0:
# 8 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "The door is locked.$"

SapphireCity_BuildingLobbies_OldB1_Text_0:
# 41 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Where's my apartment again? Every door\n"
	.string "looks the same, it's too confusing.$"

SapphireCity_BuildingLobbies_WomanB2_Text_0:
# 51 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "You found them! Where were they?...\n"
	.string "Right there, by the potted plant? Ah\l"
	.string "yeah. I remember now. Oh well, thanks\l"
	.string "again! Have this.$"

SapphireCity_BuildingLobbies_WomanB2_Text_1:
# 65 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "I lost my keys! This is the worst day of\n"
	.string "my life. I really need to pee, and all my\l"
	.string "neighbors are at work.$"

SapphireCity_BuildingLobbies_ManB3_Text_0:
# 74 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Come on baby, let me in! I didn't realise\n"
	.string "that you were there! I won't do it again,\l"
	.string "I promise! Pinky promise!!$"

SapphireCity_BuildingLobbies_ManB3_Text_1:
# 76 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Oh, uh, hey. This is quite embarrassing.\n"
	.string "It's not what it sounds like, I just\l"
	.string "farted on the couch, and my baby hates\l"
	.string "that.$"

SapphireCity_BuildingLobbies_ManB3_Text_2:
# 78 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Come on, I'm sorry!$"

SapphireCity_BuildingLobbies_FighterB4_Text_0:
# 86 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "I've been training for the Council\n"
	.string "Challenge for months now. I hope it's\l"
	.string "still up after what happened.$"

SapphireCity_BuildingLobbies_ThiefB5_Text_0:
# 95 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "What? No. I uh... lost my keys... uh... they\n"
	.string "don't fit anymore. I don't know why. Now,\l"
	.string "go.$"

SapphireCity_BuildingLobbies_ThiefB5_Text_1:
# 104 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "I said leave me alone. Like, leave.$"

SapphireCity_BuildingLobbies_ThiefB5_Text_2:
# 115 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Alright, you got me, I'll go. Don't snitch\n"
	.string "on me, or else.$"

SapphireCity_BuildingLobbies_WomanB6_Text_0:
# 130 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "I don't know you. I have nothing to say.\n"
	.string "Leave.$"

SapphireCity_BuildingLobbies_WomanB8_Text_0:
# 147 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Are you familiar with the Pokémon\n"
	.string "Pikipek? I'm trying to find one by the\l"
	.string "airport, but no luck so far.$"

SapphireCity_BuildingLobbies_ManB9_Text_0:
# 155 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "As part of my student job, I have to\n"
	.string "water every single plant. Of the 9\l"
	.string "buildings of Sapphire City. Man, end my\l"
	.string "pain already.$"

SCBL_Thief1::
# 176 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Alright what's up? You don't understand\n"
	.string "basic sentences? You wanna taste\l"
	.string "these hands?$"

SCBL_Thief2::
# 180 "data/maps/SapphireCity_BuildingLobbies/scripts.pory"
	.string "Dammit! Ok. You got me.$"
