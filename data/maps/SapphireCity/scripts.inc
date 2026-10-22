# 1 "data/maps/SapphireCity/scripts.pory"

# 2 "data/maps/SapphireCity/scripts.pory"
SapphireCity_MapScripts::
# 3 "data/maps/SapphireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SapphireCity_OnTransition
# 4 "data/maps/SapphireCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SapphireCity_OnFrame
# 5 "data/maps/SapphireCity/scripts.pory"
	.byte 0
# 6 "data/maps/SapphireCity/scripts.pory"

# 7 "data/maps/SapphireCity/scripts.pory"
SapphireCity_OnFrame:
# 8 "data/maps/SapphireCity/scripts.pory"
    map_script_2 VAR_MAIN_STORY, 43, SapphireCity_BruceCall
# 9 "data/maps/SapphireCity/scripts.pory"
    .2byte 0

SapphireCity_BruceCall::
# 13 "data/maps/SapphireCity/scripts.pory"
	lockall
# 14 "data/maps/SapphireCity/scripts.pory"
	completequest QUEST_PRESIDENT
# 15 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_PRESIDENT_QUEST_COMPLETE
# 16 "data/maps/SapphireCity/scripts.pory"
	pokenavcall BruceCall
# 17 "data/maps/SapphireCity/scripts.pory"
	waitmessage
# 18 "data/maps/SapphireCity/scripts.pory"
	setvar VAR_MAIN_STORY, 44
# 19 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_EARTHQUAKE
# 20 "data/maps/SapphireCity/scripts.pory"
	releaseall
	end


SapphireCity_OnTransition::
# 39 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_VISITED_SAPPHIRE_CITY
	end


SapphireCity_TM::
# 44 "data/maps/SapphireCity/scripts.pory"
	lock
# 45 "data/maps/SapphireCity/scripts.pory"
	removeobject 40
# 46 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_ITEM_SAPPHIRE_TM
# 47 "data/maps/SapphireCity/scripts.pory"
	giveitem ITEM_TM39
# 48 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_RepairMan::
# 53 "data/maps/SapphireCity/scripts.pory"
	lock
# 54 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 55 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_RepairMan_Text_0
# 56 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 57 "data/maps/SapphireCity/scripts.pory"
	turnobject 23, DIR_NORTH
# 58 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_WomanBF::
# 63 "data/maps/SapphireCity/scripts.pory"
	lock
# 64 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 65 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_WomanBF_Text_0
# 66 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_OldMan1::
# 71 "data/maps/SapphireCity/scripts.pory"
	lock
# 72 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 73 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_OldMan1_Text_0
# 74 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_OldMan2::
# 79 "data/maps/SapphireCity/scripts.pory"
	lock
# 80 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 81 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_OldMan2_Text_0
# 82 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_FastBoy::
# 87 "data/maps/SapphireCity/scripts.pory"
	lock
# 88 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 89 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_FastBoy_Text_0
# 90 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_LostDude::
# 95 "data/maps/SapphireCity/scripts.pory"
	lock
# 96 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 97 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_LostDude_Text_0
# 98 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_LittleLad::
# 103 "data/maps/SapphireCity/scripts.pory"
	lock
# 104 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 105 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_LittleLad_Text_0
# 106 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 107 "data/maps/SapphireCity/scripts.pory"
	turnobject 15, DIR_NORTH
# 108 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_LittleLad_Text_1
# 109 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_GarbageDude::
# 114 "data/maps/SapphireCity/scripts.pory"
	lock
# 115 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 116 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_GarbageDude_Text_0
# 117 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 118 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_PondGirl::
# 123 "data/maps/SapphireCity/scripts.pory"
	lock
# 124 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 125 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_PondGirl_Text_0
# 126 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 127 "data/maps/SapphireCity/scripts.pory"
	turnobject 17, DIR_SOUTH
# 128 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_GarbageGirl::
# 133 "data/maps/SapphireCity/scripts.pory"
	lock
# 134 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 135 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_GarbageGirl_Text_0
# 136 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 137 "data/maps/SapphireCity/scripts.pory"
	turnobject 13, DIR_NORTH
# 138 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_BoyBd8::
# 143 "data/maps/SapphireCity/scripts.pory"
	lock
# 144 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 145 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_BoyBd8_Text_0
# 146 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_Steve::
# 151 "data/maps/SapphireCity/scripts.pory"
	lock
# 152 "data/maps/SapphireCity/scripts.pory"
	compare VAR_SAPPHIRE_LOVERS, 1
	goto_if_eq SapphireCity_Steve_2
# 169 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Steve_Text_3
SapphireCity_Steve_1:
# 171 "data/maps/SapphireCity/scripts.pory"
	release
	end

SapphireCity_Steve_2:
# 153 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 154 "data/maps/SapphireCity/scripts.pory"
	applymovement 10, SC_Steve_Surprised
# 155 "data/maps/SapphireCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/SapphireCity/scripts.pory"
	delay 10
# 157 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Steve_Text_0
# 158 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Steve_Text_1
# 159 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Steve_Text_2
# 160 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 161 "data/maps/SapphireCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 162 "data/maps/SapphireCity/scripts.pory"
	getobjectxy 10, CURRENT_POSITION, VAR_TEMP_2, VAR_TEMP_3
# 163 "data/maps/SapphireCity/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_3
# 164 "data/maps/SapphireCity/scripts.pory"
	goto_if_gt SapphireCity_Steve_LeavingGT
# 165 "data/maps/SapphireCity/scripts.pory"
	goto_if_lt SapphireCity_Steve_LeavingGT
# 166 "data/maps/SapphireCity/scripts.pory"
	goto_if_eq SapphireCity_Steve_LeavingEQ
	goto SapphireCity_Steve_1


SapphireCity_Steve_LeavingGT::
# 176 "data/maps/SapphireCity/scripts.pory"
	applymovement 10, SC_Steve_LeavingGT
# 177 "data/maps/SapphireCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/SapphireCity/scripts.pory"
	removeobject 10
# 179 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_SAPPHIRE_STEVE_L
# 180 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SAPPHIRE_STEVE_H
# 181 "data/maps/SapphireCity/scripts.pory"
	setvar VAR_SAPPHIRE_LOVERS, 2
	return


SapphireCity_Steve_LeavingEQ::
# 185 "data/maps/SapphireCity/scripts.pory"
	applymovement 10, SC_Steve_LeavingEQ
# 186 "data/maps/SapphireCity/scripts.pory"
	waitmovement 0
# 187 "data/maps/SapphireCity/scripts.pory"
	removeobject 10
# 188 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_SAPPHIRE_STEVE_L
# 189 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SAPPHIRE_STEVE_H
# 190 "data/maps/SapphireCity/scripts.pory"
	setvar VAR_SAPPHIRE_LOVERS, 2
	return


SapphireCity_Nerd::
# 194 "data/maps/SapphireCity/scripts.pory"
	lock
# 195 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 196 "data/maps/SapphireCity/scripts.pory"
	compare VAR_SAPPHIRE_NERD, 0
	goto_if_eq SapphireCity_Nerd_1
# 203 "data/maps/SapphireCity/scripts.pory"
	compare VAR_SAPPHIRE_NERD, 1
	goto_if_eq SapphireCity_Nerd_2
# 208 "data/maps/SapphireCity/scripts.pory"
	compare VAR_SAPPHIRE_NERD, 2
	goto_if_eq SapphireCity_Nerd_3
# 220 "data/maps/SapphireCity/scripts.pory"
	release
	end

SapphireCity_Nerd_1:
# 197 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Nerd_Text_0
# 198 "data/maps/SapphireCity/scripts.pory"
	startquest QUEST_CASINO
# 199 "data/maps/SapphireCity/scripts.pory"
	setvar VAR_SAPPHIRE_NERD, 1
# 200 "data/maps/SapphireCity/scripts.pory"
	release
	end

SapphireCity_Nerd_2:
# 204 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Nerd_Text_0
# 205 "data/maps/SapphireCity/scripts.pory"
	release
	end

SapphireCity_Nerd_3:
# 209 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Steve_Text_1
# 210 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Nerd_Text_1
# 211 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 212 "data/maps/SapphireCity/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 213 "data/maps/SapphireCity/scripts.pory"
	getobjectxy 12, CURRENT_POSITION, VAR_TEMP_7, VAR_TEMP_8
# 214 "data/maps/SapphireCity/scripts.pory"
	compare VAR_TEMP_6, VAR_TEMP_8
# 215 "data/maps/SapphireCity/scripts.pory"
	goto_if_gt SapphireCity_Nerd_LeavingGT
# 216 "data/maps/SapphireCity/scripts.pory"
	goto_if_lt SapphireCity_Nerd_LeavingGT
# 217 "data/maps/SapphireCity/scripts.pory"
	goto_if_eq SapphireCity_Nerd_LeavingEQ
	return


SapphireCity_Nerd_LeavingGT::
# 226 "data/maps/SapphireCity/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 227 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 228 "data/maps/SapphireCity/scripts.pory"
	applymovement 12, SC_Nerd
# 229 "data/maps/SapphireCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_SAPPHIRE_NERD
# 231 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SAPPHIRE_NERD_2
# 232 "data/maps/SapphireCity/scripts.pory"
	removeobject 12
# 233 "data/maps/SapphireCity/scripts.pory"
	completequest QUEST_CASINO
# 234 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_Nerd_LeavingEQ::
# 239 "data/maps/SapphireCity/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 240 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 241 "data/maps/SapphireCity/scripts.pory"
	applymovement 12, SC_Nerd_EQ
# 242 "data/maps/SapphireCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_SAPPHIRE_NERD
# 244 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SAPPHIRE_NERD_2
# 245 "data/maps/SapphireCity/scripts.pory"
	removeobject 12
# 246 "data/maps/SapphireCity/scripts.pory"
	completequest QUEST_CASINO
# 247 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_LittleGirl::
# 252 "data/maps/SapphireCity/scripts.pory"
	lock
# 253 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_LittleGirl_Text_0
# 254 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_Mom::
# 259 "data/maps/SapphireCity/scripts.pory"
	lock
# 260 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Mom_Text_0
# 261 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_TownSign::
# 266 "data/maps/SapphireCity/scripts.pory"
	lockall
# 267 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_TownSign_Text_0
# 268 "data/maps/SapphireCity/scripts.pory"
	releaseall
	return


SapphireCity_AfrAmW::
# 272 "data/maps/SapphireCity/scripts.pory"
	lock
# 273 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 274 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_AfrAmW_Text_0
# 275 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_Trash::
# 280 "data/maps/SapphireCity/scripts.pory"
	lock
# 281 "data/maps/SapphireCity/scripts.pory"
	faceplayer
# 282 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Trash_Text_0, MSGBOX_YESNO
# 283 "data/maps/SapphireCity/scripts.pory"
	closemessage
# 284 "data/maps/SapphireCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Trash_2
SapphireCity_Trash_1:
# 291 "data/maps/SapphireCity/scripts.pory"
	release
	end

SapphireCity_Trash_2:
# 285 "data/maps/SapphireCity/scripts.pory"
	delay 40
# 286 "data/maps/SapphireCity/scripts.pory"
	special RockSmashWildEncounter
# 287 "data/maps/SapphireCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SapphireCity_Trash_4
	goto SapphireCity_Trash_1

SapphireCity_Trash_4:
# 288 "data/maps/SapphireCity/scripts.pory"
	msgbox SapphireCity_Trash_Text_1
	goto SapphireCity_Trash_1


SapphireCity_Item::
# 296 "data/maps/SapphireCity/scripts.pory"
	lock
# 297 "data/maps/SapphireCity/scripts.pory"
	removeobject 38
# 298 "data/maps/SapphireCity/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 299 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_ITEM_SAPPHIRE
# 300 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_Item2::
# 305 "data/maps/SapphireCity/scripts.pory"
	lock
# 306 "data/maps/SapphireCity/scripts.pory"
	removeobject 39
# 307 "data/maps/SapphireCity/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 308 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_ITEM_SAPPHIRE_2
# 309 "data/maps/SapphireCity/scripts.pory"
	release
	end


SapphireCity_PhoneDebug::
# 314 "data/maps/SapphireCity/scripts.pory"
	lock
# 315 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SYS_POKENAV_GET
# 316 "data/maps/SapphireCity/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 317 "data/maps/SapphireCity/scripts.pory"
	setflag FLAG_SYS_PHONE_GET
# 318 "data/maps/SapphireCity/scripts.pory"
	release
	end


# 322 "data/maps/SapphireCity/scripts.pory"
SC_Nerd:
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 323 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 324 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 324 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 324 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 324 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 324 "data/maps/SapphireCity/scripts.pory"
	walk_up
	step_end

# 327 "data/maps/SapphireCity/scripts.pory"
SC_Nerd_EQ:
# 328 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 329 "data/maps/SapphireCity/scripts.pory"
	walk_right
# 330 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 330 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 330 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 330 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 330 "data/maps/SapphireCity/scripts.pory"
	walk_up
	step_end

# 334 "data/maps/SapphireCity/scripts.pory"
SC_Steve_Surprised:
# 335 "data/maps/SapphireCity/scripts.pory"
	emote_question_mark
	step_end

# 338 "data/maps/SapphireCity/scripts.pory"
SC_Steve_LeavingGT:
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 339 "data/maps/SapphireCity/scripts.pory"
	walk_left
	step_end

# 342 "data/maps/SapphireCity/scripts.pory"
SC_Steve_LeavingEQ:
# 343 "data/maps/SapphireCity/scripts.pory"
	walk_up
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
# 344 "data/maps/SapphireCity/scripts.pory"
	walk_left
	step_end

SapphireCity_RepairMan_Text_0:
# 55 "data/maps/SapphireCity/scripts.pory"
	.string "I'm trying to fix this fence as quickly\n"
	.string "as I can. Please don't go to the tarmac,\l"
	.string "I don't want any problems.$"

SapphireCity_WomanBF_Text_0:
# 65 "data/maps/SapphireCity/scripts.pory"
	.string "I'm waiting for my boyfriend! I'm so\n"
	.string "excited, we'll meet for the first time!$"

SapphireCity_OldMan1_Text_0:
# 73 "data/maps/SapphireCity/scripts.pory"
	.string "Isn't this beautiful? Look at that boy.\n"
	.string "Look at how fast he's running. It's\l"
	.string "bringing up a lot of memories.$"

SapphireCity_OldMan2_Text_0:
# 81 "data/maps/SapphireCity/scripts.pory"
	.string "That little kid is mental. He's going way\n"
	.string "too fast! He's going to fall and break\l"
	.string "something!$"

SapphireCity_FastBoy_Text_0:
# 89 "data/maps/SapphireCity/scripts.pory"
	.string "Help me! I can't stop running! I've been\n"
	.string "bewitched by some upper force! These\l"
	.string "old dudes keep on watching me, and they\l"
	.string "don't help!$"

SapphireCity_LostDude_Text_0:
# 97 "data/maps/SapphireCity/scripts.pory"
	.string "I'm exhausted. I can't even remember\n"
	.string "where I live... Every building looks the\l"
	.string "same.$"

SapphireCity_LittleLad_Text_0:
# 105 "data/maps/SapphireCity/scripts.pory"
	.string "Look! I can see my Mum from here!$"

SapphireCity_LittleLad_Text_1:
# 108 "data/maps/SapphireCity/scripts.pory"
	.string "HEY MUM! CAN YOU SEE ME?$"

SapphireCity_GarbageDude_Text_0:
# 116 "data/maps/SapphireCity/scripts.pory"
	.string "I'm on the road! The freaking road!\n"
	.string "Haha. It's like I'm a car! No, no, not 'in a\l"
	.string "car'. Like the object! I'm a blue Sedan!$"

SapphireCity_PondGirl_Text_0:
# 125 "data/maps/SapphireCity/scripts.pory"
	.string "The water looks exceptionally blue\n"
	.string "today. My reflection also looks\l"
	.string "exceptionally blue. Don't you think?$"

SapphireCity_GarbageGirl_Text_0:
# 135 "data/maps/SapphireCity/scripts.pory"
	.string "What? No, it's not what you think. I lost\n"
	.string "my keys in here. I accidentally threw\l"
	.string "them away. Yes, it's very dumb. Leave.$"

SapphireCity_BoyBd8_Text_0:
# 145 "data/maps/SapphireCity/scripts.pory"
	.string "What a great day! And there are not\n"
	.string "that many cars, except the usual\l"
	.string "trucks, and that guy who pretends to be\l"
	.string "a car. It's good to finally hear the\l"
	.string "birds chirping!$"

SapphireCity_Steve_Text_0:
# 157 "data/maps/SapphireCity/scripts.pory"
	.string "What's that? I'm in front of the wrong\n"
	.string "building? My date told you that? Haha,\l"
	.string "thank you!$"

SapphireCity_Steve_Text_1:
# 158 "data/maps/SapphireCity/scripts.pory"
	.string "...$"

SapphireCity_Steve_Text_2:
# 159 "data/maps/SapphireCity/scripts.pory"
	.string "...He's also stressed out? That makes\n"
	.string "two of us! I'll go now. Thanks again!$"

SapphireCity_Steve_Text_3:
# 169 "data/maps/SapphireCity/scripts.pory"
	.string "...C'mon Steve. It's okay, you can do\n"
	.string "this. You haven't been on a date for 10\l"
	.string "years, and that's ok. No one's perfect.$"

SapphireCity_Nerd_Text_0:
# 197 "data/maps/SapphireCity/scripts.pory"
	.string "I can't find for the life of me the\n"
	.string "Gaming Center. I searched everywhere,\l"
	.string "and I can't find it. Do you know where it\l"
	.string "is by any chance?$"

SapphireCity_Nerd_Text_1:
# 210 "data/maps/SapphireCity/scripts.pory"
	.string "On the second floor of the mall you\n"
	.string "say? Dammit, I knew I was close! You're\l"
	.string "a legend. Here, let me offer you this.$"

SapphireCity_LittleGirl_Text_0:
# 253 "data/maps/SapphireCity/scripts.pory"
	.string "Mum! Mum! Can I get the new Marill\n"
	.string "plushie? Please! Please! Pretty please!$"

SapphireCity_Mom_Text_0:
# 260 "data/maps/SapphireCity/scripts.pory"
	.string "No, sweetie. You have way too many\n"
	.string "plushies and toys as is. Mummy doesn't\l"
	.string "have any money left.$"

SapphireCity_TownSign_Text_0:
# 267 "data/maps/SapphireCity/scripts.pory"
	.string "Sapphire City \nThe dynamic capital of Thura.$"

SapphireCity_AfrAmW_Text_0:
# 274 "data/maps/SapphireCity/scripts.pory"
	.string "There it is! Sapphire City, the big city!\n"
	.string "I don't even know where to go, it's so\l"
	.string "big!$"

SapphireCity_Trash_Text_0:
# 282 "data/maps/SapphireCity/scripts.pory"
	.string "It's a stinky pile of trash. Check\n"
	.string "what's inside?$"

SapphireCity_Trash_Text_1:
# 288 "data/maps/SapphireCity/scripts.pory"
	.string "Nothing to see here!$"

BruceCall::
# 24 "data/maps/SapphireCity/scripts.pory"
	.string "… … … … … …\n… … … … … Beep!\p"
	.string "Bruce: Hey {PLAYER}!\p"
	.string "… … … … … …\p"
	.string "Congratulations on becoming\n"
	.string "Thura's President.\p"
	.string "… … … … … …\p"
	.string "Please, come to the Ironair.\n"
	.string "I want you to meet with Diancie\l"
	.string "once more. It's asking for you.\l"
	.string "Don't be late!\l"
	.string "… … … … … …\n… … … … … Click!$"
