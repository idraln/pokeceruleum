# 1 "data/maps/SapphireCity_GamingShop/scripts.pory"

# 2 "data/maps/SapphireCity_GamingShop/scripts.pory"
SapphireCity_GamingShop_MapScripts::
# 3 "data/maps/SapphireCity_GamingShop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SapphireCity_GamingShop_OnFrame
# 4 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.byte 0
# 5 "data/maps/SapphireCity_GamingShop/scripts.pory"

# 6 "data/maps/SapphireCity_GamingShop/scripts.pory"
SapphireCity_GamingShop_OnFrame:
# 7 "data/maps/SapphireCity_GamingShop/scripts.pory"
    map_script_2 VAR_SAPPHIRE_NERD, 1, SapphireCity_GamingShop_VarQuest
# 8 "data/maps/SapphireCity_GamingShop/scripts.pory"
    .2byte 0

SapphireCity_GamingShop_VarQuest::
# 12 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_SAPPHIRE_NERD, 1
	goto_if_eq SapphireCity_GamingShop_VarQuest_1
	end

SapphireCity_GamingShop_VarQuest_1:
# 13 "data/maps/SapphireCity_GamingShop/scripts.pory"
	setvar VAR_SAPPHIRE_NERD, 2
	end


SapphireCity_GamingShop_Arrival::
# 22 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 23 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 24 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_0, MSGBOX_YESNO
# 25 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_Arrival_1
# 55 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_5
# 56 "data/maps/SapphireCity_GamingShop/scripts.pory"
	closemessage
# 57 "data/maps/SapphireCity_GamingShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SapphireCity_GamingShop_Arrival_Movement_0
# 58 "data/maps/SapphireCity_GamingShop/scripts.pory"
	waitmovement 0
# 59 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Arrival_1:
# 26 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkmoney 50
# 27 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_Arrival_4
# 46 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_4
# 47 "data/maps/SapphireCity_GamingShop/scripts.pory"
	closemessage
# 48 "data/maps/SapphireCity_GamingShop/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SapphireCity_GamingShop_Arrival_Movement_0
# 49 "data/maps/SapphireCity_GamingShop/scripts.pory"
	waitmovement 0
# 50 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Arrival_4:
# 28 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removemoney 50
# 29 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkitem ITEM_COIN_CASE
# 30 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_Arrival_7
# 37 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_2
# 38 "data/maps/SapphireCity_GamingShop/scripts.pory"
	giveitem ITEM_COIN_CASE
# 39 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_3
# 40 "data/maps/SapphireCity_GamingShop/scripts.pory"
	setvar VAR_TEMP_0, 1
# 41 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Arrival_7:
# 31 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Arrival_Text_1
# 32 "data/maps/SapphireCity_GamingShop/scripts.pory"
	setvar VAR_TEMP_0, 1
# 33 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_Owner::
# 65 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 66 "data/maps/SapphireCity_GamingShop/scripts.pory"
	faceplayer
# 67 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_0
# 68 "data/maps/SapphireCity_GamingShop/scripts.pory"
	multichoice 0, 0, MULTI_PRIZES, TRUE
# 69 "data/maps/SapphireCity_GamingShop/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 0, SapphireCity_GamingShop_Owner_2
# 90 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 1, SapphireCity_GamingShop_Owner_3
# 110 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 2, SapphireCity_GamingShop_Owner_4
# 130 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 3, SapphireCity_GamingShop_Owner_5
	return

SapphireCity_GamingShop_Owner_2:
# 71 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkcoins VAR_TEMP_2
# 72 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_TEMP_2, 5000
	goto_if_gt SapphireCity_GamingShop_Owner_6
# 86 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_3
# 87 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Owner_3:
# 91 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkcoins VAR_TEMP_2
# 92 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_TEMP_2, 5000
	goto_if_gt SapphireCity_GamingShop_Owner_9
# 106 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_3
# 107 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Owner_4:
# 111 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkcoins VAR_TEMP_2
# 112 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_TEMP_2, 4000
	goto_if_gt SapphireCity_GamingShop_Owner_12
# 126 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_3
# 127 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Owner_5:
# 131 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_4
# 132 "data/maps/SapphireCity_GamingShop/scripts.pory"
	closemessage
# 133 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end

SapphireCity_GamingShop_Owner_6:
# 73 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkitem ITEM_TM24
# 74 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireCity_GamingShop_Owner_15
# 81 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_2
# 82 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return

SapphireCity_GamingShop_Owner_9:
# 93 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkitem ITEM_TM26
# 94 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireCity_GamingShop_Owner_18
# 101 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_2
# 102 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return

SapphireCity_GamingShop_Owner_12:
# 113 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkitem ITEM_TM50
# 114 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireCity_GamingShop_Owner_21
# 121 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_2
# 122 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return

SapphireCity_GamingShop_Owner_15:
# 75 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removecoins 5000
# 76 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_1
# 77 "data/maps/SapphireCity_GamingShop/scripts.pory"
	giveitem ITEM_TM24
# 78 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return

SapphireCity_GamingShop_Owner_18:
# 95 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removecoins 5000
# 96 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_1
# 97 "data/maps/SapphireCity_GamingShop/scripts.pory"
	giveitem ITEM_TM26
# 98 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return

SapphireCity_GamingShop_Owner_21:
# 115 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removecoins 4000
# 116 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Owner_Text_1
# 117 "data/maps/SapphireCity_GamingShop/scripts.pory"
	giveitem ITEM_TM50
# 118 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_Owner
	return


SapphireCity_GamingShop_Employee::
# 139 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 140 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Employee_Text_0
# 141 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_Scientist::
# 146 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 147 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Scientist_Text_0
# 148 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_Loser::
# 153 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 154 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_Loser_Text_0
# 155 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_DDP1::
# 160 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 161 "data/maps/SapphireCity_GamingShop/scripts.pory"
	faceplayer
# 162 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_DDP1_Text_0
# 163 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 1, DIR_EAST
# 164 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_DDP2::
# 169 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 170 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 8, DIR_SOUTH
# 171 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_DDP2_Text_0
# 172 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 8, DIR_EAST
# 173 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_GM::
# 178 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 179 "data/maps/SapphireCity_GamingShop/scripts.pory"
	faceplayer
# 180 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_GM_Text_0
# 181 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 7, DIR_WEST
# 182 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_PCNerd2::
# 187 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 188 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_PCNerd2_Text_0
# 189 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_PCNerd1::
# 194 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 195 "data/maps/SapphireCity_GamingShop/scripts.pory"
	faceplayer
# 196 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_PCNerd1_Text_0
# 197 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 5, DIR_NORTH
# 198 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_LostDude::
# 203 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lock
# 204 "data/maps/SapphireCity_GamingShop/scripts.pory"
	faceplayer
# 205 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_LostDude_Text_0
# 206 "data/maps/SapphireCity_GamingShop/scripts.pory"
	turnobject 10, DIR_WEST
# 207 "data/maps/SapphireCity_GamingShop/scripts.pory"
	release
	end


SapphireCity_GamingShop_CoinDispenser::
# 212 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lockall
# 213 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_0
# 214 "data/maps/SapphireCity_GamingShop/scripts.pory"
	multichoice 0, 0, MULTI_CASINO, TRUE
# 215 "data/maps/SapphireCity_GamingShop/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 0, SapphireCity_GamingShop_CoinDispenser_2
# 230 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 1, SapphireCity_GamingShop_CoinDispenser_3
# 244 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 2, SapphireCity_GamingShop_CoinDispenser_4
# 258 "data/maps/SapphireCity_GamingShop/scripts.pory"
	case 3, SapphireCity_GamingShop_CoinDispenser_5
	return

SapphireCity_GamingShop_CoinDispenser_2:
# 217 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkmoney 500
# 218 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_CoinDispenser_6
# 226 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_HELP_ERROR
# 227 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_2
# 228 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return

SapphireCity_GamingShop_CoinDispenser_3:
# 231 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkmoney 5000
# 232 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_CoinDispenser_9
# 240 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_HELP_ERROR
# 241 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_2
# 242 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return

SapphireCity_GamingShop_CoinDispenser_4:
# 245 "data/maps/SapphireCity_GamingShop/scripts.pory"
	checkmoney 10000
# 246 "data/maps/SapphireCity_GamingShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_GamingShop_CoinDispenser_12
# 254 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_HELP_ERROR
# 255 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_2
# 256 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return

SapphireCity_GamingShop_CoinDispenser_5:
# 259 "data/maps/SapphireCity_GamingShop/scripts.pory"
	closemessage
# 260 "data/maps/SapphireCity_GamingShop/scripts.pory"
	releaseall
	end

SapphireCity_GamingShop_CoinDispenser_6:
# 219 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removemoney 500
# 220 "data/maps/SapphireCity_GamingShop/scripts.pory"
	addcoins 10
# 221 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_SHOP
# 222 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_1
# 223 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return

SapphireCity_GamingShop_CoinDispenser_9:
# 233 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removemoney 5000
# 234 "data/maps/SapphireCity_GamingShop/scripts.pory"
	addcoins 100
# 235 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_SHOP
# 236 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_3
# 237 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return

SapphireCity_GamingShop_CoinDispenser_12:
# 247 "data/maps/SapphireCity_GamingShop/scripts.pory"
	removemoney 10000
# 248 "data/maps/SapphireCity_GamingShop/scripts.pory"
	addcoins 1000
# 249 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse SE_RG_SHOP
# 250 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinDispenser_Text_4
# 251 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto SapphireCity_GamingShop_CoinDispenser
	return


SapphireCity_GamingShop_CoinTrash::
# 266 "data/maps/SapphireCity_GamingShop/scripts.pory"
	lockall
# 267 "data/maps/SapphireCity_GamingShop/scripts.pory"
	goto_if_set FLAG_SAPPHIRE_COINS, SapphireCity_GamingShop_CoinTrash_2
# 271 "data/maps/SapphireCity_GamingShop/scripts.pory"
	addcoins 10
# 272 "data/maps/SapphireCity_GamingShop/scripts.pory"
	playse MUS_LEVEL_UP
# 273 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinTrash_Text_1
# 274 "data/maps/SapphireCity_GamingShop/scripts.pory"
	setflag FLAG_SAPPHIRE_COINS
SapphireCity_GamingShop_CoinTrash_1:
# 276 "data/maps/SapphireCity_GamingShop/scripts.pory"
	releaseall
	end

SapphireCity_GamingShop_CoinTrash_2:
# 268 "data/maps/SapphireCity_GamingShop/scripts.pory"
	msgbox SapphireCity_GamingShop_CoinTrash_Text_0
	goto SapphireCity_GamingShop_CoinTrash_1


# 48 "data/maps/SapphireCity_GamingShop/scripts.pory"
SapphireCity_GamingShop_Arrival_Movement_0:
# 48 "data/maps/SapphireCity_GamingShop/scripts.pory"
	walk_down
	step_end

SapphireCity_GamingShop_Arrival_Text_0:
# 24 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Hello, and welcome to Sapphire City's\n"
	.string "own Gaming Center! The entry fee is ¥50.\l"
	.string "We have tons of games and items! Would\l"
	.string "you like to enter?$"

SapphireCity_GamingShop_Arrival_Text_1:
# 31 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "All right, welcome in! Enjoy yourself!$"

SapphireCity_GamingShop_Arrival_Text_2:
# 37 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Oops, you don't have a coin case! That's\n"
	.string "okay though, I have one laying around.\l"
	.string "Here you go! If you need coins, you can\l"
	.string "buy some at the dispenser up there! And\l"
	.string "if you want prizes, come see me!$"

SapphireCity_GamingShop_Arrival_Text_3:
# 39 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Have fun!$"

SapphireCity_GamingShop_Arrival_Text_4:
# 46 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "I'm afraid you don't have enough\n"
	.string "money... Why won't you go, battle some\l"
	.string "guys, earn a bit of metal and come see\l"
	.string "us again?$"

SapphireCity_GamingShop_Arrival_Text_5:
# 55 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "It's okay, you can come back later if\n"
	.string "you're not ready! We're open 24/7. See\l"
	.string "ya soon!$"

SapphireCity_GamingShop_Owner_Text_0:
# 67 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You wanna trade some coins? I've got a\n"
	.string "lot of nice prizes.$"

SapphireCity_GamingShop_Owner_Text_1:
# 76 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "There you go!$"

SapphireCity_GamingShop_Owner_Text_2:
# 81 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You already have that TM!$"

SapphireCity_GamingShop_Owner_Text_3:
# 86 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You don't have enough coins! Go play\n"
	.string "and grab some more!$"

SapphireCity_GamingShop_Owner_Text_4:
# 131 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Alright! Go have some fun then!$"

SapphireCity_GamingShop_Employee_Text_0:
# 140 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "HAHA! Yes! I'm getting my money back! I\n"
	.string "love gambling!$"

SapphireCity_GamingShop_Scientist_Text_0:
# 147 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "With that card, I can retreat my Glalie\n"
	.string "for 1 coin instead of 2! Ha! You didn't\l"
	.string "see that coming huh?$"

SapphireCity_GamingShop_Loser_Text_0:
# 154 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "...Damn, am I going to lose another game?\n"
	.string "He's too strong... But wait, I still have\l"
	.string "my Blaziken, and I'm only missing a\l"
	.string "coin... Next turn... Hehehe...$"

SapphireCity_GamingShop_DDP1_Text_0:
# 162 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Are we sure these machines aren't\n"
	.string "rigged? I've lost 10 games in a row!$"

SapphireCity_GamingShop_DDP2_Text_0:
# 171 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Go Daddy! You're the strongest TCG\n"
	.string "player ever! Yeah!$"

SapphireCity_GamingShop_GM_Text_0:
# 180 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Come on, don't you see I'm fully\n"
	.string "focused? Not cool.$"

SapphireCity_GamingShop_PCNerd2_Text_0:
# 188 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Oof, these roulette games sure are\n"
	.string "exhausting! I need to take a breather!$"

SapphireCity_GamingShop_PCNerd1_Text_0:
# 196 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "I lost everything at the slot\n"
	.string "machines... I need some more coins!!$"

SapphireCity_GamingShop_LostDude_Text_0:
# 205 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "Thanks again, dude!$"

SapphireCity_GamingShop_CoinDispenser_Text_0:
# 213 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "It's a coin dispenser. What will you\n"
	.string "grab?$"

SapphireCity_GamingShop_CoinDispenser_Text_1:
# 222 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You got 10 coins!$"

SapphireCity_GamingShop_CoinDispenser_Text_2:
# 227 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You don't have enough money!$"

SapphireCity_GamingShop_CoinDispenser_Text_3:
# 236 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You got 100 coins!$"

SapphireCity_GamingShop_CoinDispenser_Text_4:
# 250 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You got 1000 coins!$"

SapphireCity_GamingShop_CoinTrash_Text_0:
# 268 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "It's an empty trash bin.$"

SapphireCity_GamingShop_CoinTrash_Text_1:
# 273 "data/maps/SapphireCity_GamingShop/scripts.pory"
	.string "You found 10 coins!$"
