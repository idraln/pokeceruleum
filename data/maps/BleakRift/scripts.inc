# 1 "data/maps/BleakRift/scripts.pory"

# 2 "data/maps/BleakRift/scripts.pory"
BleakRift_MapScripts::
# 3 "data/maps/BleakRift/scripts.pory"
	.byte 0

BleakRift_EscapeRope::
# 7 "data/maps/BleakRift/scripts.pory"
	lock
# 8 "data/maps/BleakRift/scripts.pory"
	removeobject 6
# 9 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_BLEAK_ITEM_1
# 10 "data/maps/BleakRift/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 11 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_DragonScale::
# 16 "data/maps/BleakRift/scripts.pory"
	lock
# 17 "data/maps/BleakRift/scripts.pory"
	removeobject 4
# 18 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_BLEAK_ITEM_2
# 19 "data/maps/BleakRift/scripts.pory"
	giveitem ITEM_DRAGON_SCALE
# 20 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_DeepSeaScale::
# 25 "data/maps/BleakRift/scripts.pory"
	lock
# 26 "data/maps/BleakRift/scripts.pory"
	removeobject 2
# 27 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_BLEAK_ITEM_3
# 28 "data/maps/BleakRift/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 29 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_MysticWater::
# 34 "data/maps/BleakRift/scripts.pory"
	lock
# 35 "data/maps/BleakRift/scripts.pory"
	removeobject 3
# 36 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_BLEAK_ITEM_4
# 37 "data/maps/BleakRift/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 38 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_SoftSand::
# 43 "data/maps/BleakRift/scripts.pory"
	lock
# 44 "data/maps/BleakRift/scripts.pory"
	removeobject 5
# 45 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_BLEAK_ITEM_5
# 46 "data/maps/BleakRift/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 47 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_Kyogre::
# 52 "data/maps/BleakRift/scripts.pory"
	lock
# 53 "data/maps/BleakRift/scripts.pory"
	applymovement 1, BleakRift_Kyogre_Movement_0
# 54 "data/maps/BleakRift/scripts.pory"
	waitmovement 0
# 55 "data/maps/BleakRift/scripts.pory"
	faceplayer
# 56 "data/maps/BleakRift/scripts.pory"
	playse SE_PIN
# 57 "data/maps/BleakRift/scripts.pory"
	delay 40
# 58 "data/maps/BleakRift/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 75, ITEM_BLUE_ORB
# 59 "data/maps/BleakRift/scripts.pory"
	waitse
# 60 "data/maps/BleakRift/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 61 "data/maps/BleakRift/scripts.pory"
	waitmoncry
# 62 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/BleakRift/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 64 "data/maps/BleakRift/scripts.pory"
	waitstate
# 65 "data/maps/BleakRift/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 66 "data/maps/BleakRift/scripts.pory"
	delay 20
# 67 "data/maps/BleakRift/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/BleakRift/scripts.pory"
	delay 40
# 69 "data/maps/BleakRift/scripts.pory"
	removeobject 1
# 70 "data/maps/BleakRift/scripts.pory"
	setflag FLAG_KYOGRE_BLEAK
# 71 "data/maps/BleakRift/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 72 "data/maps/BleakRift/scripts.pory"
	setvar VAR_DISAPPEARANCE, 2
# 73 "data/maps/BleakRift/scripts.pory"
	release
	end


BleakRift_Sign::
# 78 "data/maps/BleakRift/scripts.pory"
	lockall
# 79 "data/maps/BleakRift/scripts.pory"
	msgbox BleakRift_Sign_Text_0
# 80 "data/maps/BleakRift/scripts.pory"
	releaseall
	end


# 53 "data/maps/BleakRift/scripts.pory"
BleakRift_Kyogre_Movement_0:
# 53 "data/maps/BleakRift/scripts.pory"
	emote_exclamation_mark
	step_end

BleakRift_Sign_Text_0:
# 79 "data/maps/BleakRift/scripts.pory"
	.string "A..ah! I l.st m. es.ap. ro.e! I'm s.uck h.re!\n"
	.string "T. wh.ever re.d. t.is, te.l .y fa.ily I l.ve\l"
	.string "t.em! M.y Arc.us h..e mer.y o. m. so.l!$"
