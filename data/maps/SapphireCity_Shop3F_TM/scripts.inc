# 1 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"

# 2 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
SapphireCity_Shop3F_TM_MapScripts::
# 3 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.byte 0

SapphireCity_Shop3F_TM_Clerk_1::
# 7 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_TM_Clerk_1_2
# 16 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_2
SapphireCity_Shop3F_TM_Clerk_1_1:
# 18 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Clerk_1_2:
# 10 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_0
# 11 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	waitmessage
# 12 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	pokemart MartTMPassive
# 13 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_1
	goto SapphireCity_Shop3F_TM_Clerk_1_1


	.align 2
# 22 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
MartTMPassive:
# 23 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM06
# 24 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM16
# 25 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM28
# 26 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM34
# 27 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM14
# 28 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM32
# 29 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SapphireCity_Shop3F_TM_Clerk_2::
# 33 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	lock
# 34 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	faceplayer
# 35 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	compare VAR_SHOP_UPDATE, 3
	goto_if_gt SapphireCity_Shop3F_TM_Clerk_2_2
# 42 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_2
SapphireCity_Shop3F_TM_Clerk_2_1:
# 44 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Clerk_2_2:
# 36 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_0
# 37 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	waitmessage
# 38 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	pokemart MartTMActive
# 39 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Clerk_1_Text_1
	goto SapphireCity_Shop3F_TM_Clerk_2_1


	.align 2
# 48 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
MartTMActive:
# 49 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM15
# 50 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM40
# 51 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM41
# 52 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM42
# 53 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.2byte ITEM_TM43
	.2byte ITEM_NONE

SapphireCity_Shop3F_TM_Girl::
# 57 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	lock
# 58 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	faceplayer
# 59 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	goto_if_set FLAG_QUEST_TM_COMPLETED, SapphireCity_Shop3F_TM_Girl_1
# 64 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	goto_if_set FLAG_QUEST_TM, SapphireCity_Shop3F_TM_Girl_2
# 92 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_7
# 93 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_3
# 94 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_8
# 95 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	startquest QUEST_TM
# 96 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	setflag FLAG_QUEST_TM
# 97 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	turnobject 2, DIR_EAST
# 98 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Girl_1:
# 60 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_0
# 61 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Girl_2:
# 65 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_1, MSGBOX_YESNO
# 66 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SapphireCity_Shop3F_TM_Girl_6
# 86 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_6
# 87 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Girl_6:
# 67 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	specialvar VAR_RESULT, CheckAllTMs
# 68 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SapphireCity_Shop3F_TM_Girl_9
# 80 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_5
# 81 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end

SapphireCity_Shop3F_TM_Girl_9:
# 69 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_2
# 70 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_3
# 71 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	msgbox SapphireCity_Shop3F_TM_Girl_Text_4
# 72 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	giveitem ITEM_TM51
# 73 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	completequest QUEST_TM
# 74 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	clearflag FLAG_QUEST_TM
# 75 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	setflag FLAG_QUEST_TM_COMPLETED
# 76 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	release
	end


SapphireCity_Shop3F_TM_Clerk_1_Text_0:
# 10 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Hello, and welcome to the TM\n"
	.string "Department! How can I help you today?$"

SapphireCity_Shop3F_TM_Clerk_1_Text_1:
# 13 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Thank you for shopping with us! We'll\n"
	.string "hope to see you very soon!$"

SapphireCity_Shop3F_TM_Clerk_1_Text_2:
# 16 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Hello there! Unfortunately, our\n"
	.string "department is still under construction.\l"
	.string "Come back later!$"

SapphireCity_Shop3F_TM_Girl_Text_0:
# 60 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "So, have you taught the TM? Powerful,\n"
	.string "isn't it?$"

SapphireCity_Shop3F_TM_Girl_Text_1:
# 65 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "So, have you managed to collect all\n"
	.string "fifty TMs in Thura?$"

SapphireCity_Shop3F_TM_Girl_Text_2:
# 69 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Wow! Impressive! But what if I told\n"
	.string "there's actually fifty-one of them?$"

SapphireCity_Shop3F_TM_Girl_Text_3:
# 70 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "...$"

SapphireCity_Shop3F_TM_Girl_Text_4:
# 71 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Heehee, yes! And since you must've been\n"
	.string "through hell to gather every TM, I'll\l"
	.string "gift you the last TM.$"

SapphireCity_Shop3F_TM_Girl_Text_5:
# 80 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Haha, you're nothing but a liar! Try\n"
	.string "harder!$"

SapphireCity_Shop3F_TM_Girl_Text_6:
# 86 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Haha, you've got to try harder!$"

SapphireCity_Shop3F_TM_Girl_Text_7:
# 92 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "I love TMs! I absolutely love them! I\n"
	.string "have every TMs you can find in Thura!$"

SapphireCity_Shop3F_TM_Girl_Text_8:
# 94 "data/maps/SapphireCity_Shop3F_TM/scripts.pory"
	.string "Tell you what. If you manage to collect\n"
	.string "every TM in Thura, I'll gift you\l"
	.string "something that'll blow your mind.$"
