# 1 "data/maps/Virimante_Gym/scripts.pory"

# 2 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_MapScripts::
# 3 "data/maps/Virimante_Gym/scripts.pory"
	.byte 0

Virimante_Gym_GruntM::
# 7 "data/maps/Virimante_Gym/scripts.pory"
	compare VAR_MAIN_STORY, 31
	goto_if_eq Virimante_Gym_GruntM_1
# 15 "data/maps/Virimante_Gym/scripts.pory"
	lock
# 16 "data/maps/Virimante_Gym/scripts.pory"
	faceplayer
# 17 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_GruntM_Text_1
# 18 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
# 19 "data/maps/Virimante_Gym/scripts.pory"
	applymovement 7, Virimante_Gym_GruntM_Movement_0
# 20 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement
# 21 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 22 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_GruntM_Text_2
# 23 "data/maps/Virimante_Gym/scripts.pory"
	release
	end

Virimante_Gym_GruntM_1:
# 8 "data/maps/Virimante_Gym/scripts.pory"
	lock
# 9 "data/maps/Virimante_Gym/scripts.pory"
	faceplayer
# 10 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_GruntM_Text_0
# 11 "data/maps/Virimante_Gym/scripts.pory"
	release
	end


Virimante_Gym_DoorBlocked::
# 29 "data/maps/Virimante_Gym/scripts.pory"
	lock
# 30 "data/maps/Virimante_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_Gym_DoorBlocked_Movement_0
# 31 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
# 32 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_DoorBlocked_Text_0
# 33 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
# 34 "data/maps/Virimante_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_Gym_DoorBlocked_Movement_1
# 35 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
# 36 "data/maps/Virimante_Gym/scripts.pory"
	release
	end


Virimante_Gym_Grunt1::
# 43 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRIMANTE_1, VGrunt11, VGrunt12
# 44 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_Grunt1_Text_0
# 45 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
	end


Virimante_Gym_Grunt2::
# 60 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRIMANTE_2, VGrunt21, VGrunt22
# 61 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_Grunt2_Text_0
# 62 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
	end


Virimante_Gym_Grunt3::
# 77 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRIMANTE_3, VGrunt31, VGrunt32
# 78 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_Grunt3_Text_0
# 79 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
	end


Virimante_Gym_Grunt4::
# 94 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRIMANTE_4, VGrunt41, VGrunt42
# 95 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_Grunt4_Text_0
# 96 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
	end


Virimante_Gym_Grunt5::
# 111 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRIMANTE_5, VGrunt51, VGrunt52
# 112 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_Grunt5_Text_0
# 113 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
	end


Virimante_Gym_AdminFight::
# 128 "data/maps/Virimante_Gym/scripts.pory"
	trainerbattle_double TRAINER_VIRIMANTE_6, VGAdmin1, VGAdmin2, VGAdmin3, Virimante_Gym_AfterFight
	return


Virimante_Gym_AfterFight::
# 144 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 145 "data/maps/Virimante_Gym/scripts.pory"
	turnobject 8, DIR_WEST
# 146 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 147 "data/maps/Virimante_Gym/scripts.pory"
	namebox Virimante_Gym_AfterFight_Text_0
# 148 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_AfterFight_Text_1
# 149 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
# 150 "data/maps/Virimante_Gym/scripts.pory"
	hidenamebox
# 151 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 152 "data/maps/Virimante_Gym/scripts.pory"
	turnobject 8, DIR_EAST
# 153 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 154 "data/maps/Virimante_Gym/scripts.pory"
	namebox Virimante_Gym_AfterFight_Text_0
# 155 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_AfterFight_Text_2
# 156 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
# 157 "data/maps/Virimante_Gym/scripts.pory"
	hidenamebox
# 158 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 159 "data/maps/Virimante_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 160 "data/maps/Virimante_Gym/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Virimante_Gym_AfterFight_2
# 166 "data/maps/Virimante_Gym/scripts.pory"
	applymovement 8, Virimante_Gym_AfterFight_Movement_1
# 167 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
Virimante_Gym_AfterFight_1:
# 169 "data/maps/Virimante_Gym/scripts.pory"
	removeobject 8
# 170 "data/maps/Virimante_Gym/scripts.pory"
	delay 40
# 171 "data/maps/Virimante_Gym/scripts.pory"
	namebox Virimante_Gym_AfterFight_Text_3
# 172 "data/maps/Virimante_Gym/scripts.pory"
	msgbox Virimante_Gym_AfterFight_Text_4
# 173 "data/maps/Virimante_Gym/scripts.pory"
	closemessage
# 174 "data/maps/Virimante_Gym/scripts.pory"
	hidenamebox
# 175 "data/maps/Virimante_Gym/scripts.pory"
	delay 20
# 176 "data/maps/Virimante_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Virimante_Gym_AfterFight_6
# 182 "data/maps/Virimante_Gym/scripts.pory"
	applymovement 6, Virimante_Gym_AfterFight_Movement_3
# 183 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
Virimante_Gym_AfterFight_5:
# 185 "data/maps/Virimante_Gym/scripts.pory"
	removeobject 6
# 186 "data/maps/Virimante_Gym/scripts.pory"
	setflag FLAG_ADMINS_VIRIMANTE_GYM
# 187 "data/maps/Virimante_Gym/scripts.pory"
	release
	end

Virimante_Gym_AfterFight_2:
# 161 "data/maps/Virimante_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_Gym_AfterFight_Movement_0
# 162 "data/maps/Virimante_Gym/scripts.pory"
	applymovement 8, Virimante_Gym_AfterFight_Movement_1
# 163 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
	goto Virimante_Gym_AfterFight_1

Virimante_Gym_AfterFight_6:
# 177 "data/maps/Virimante_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Virimante_Gym_AfterFight_Movement_2
# 178 "data/maps/Virimante_Gym/scripts.pory"
	applymovement 6, Virimante_Gym_AfterFight_Movement_3
# 179 "data/maps/Virimante_Gym/scripts.pory"
	waitmovement 0
	goto Virimante_Gym_AfterFight_5


Virimante_Gym_Item::
# 192 "data/maps/Virimante_Gym/scripts.pory"
	lock
# 193 "data/maps/Virimante_Gym/scripts.pory"
	removeobject 1
# 194 "data/maps/Virimante_Gym/scripts.pory"
	giveitem ITEM_TM29
# 195 "data/maps/Virimante_Gym/scripts.pory"
	setflag FLAG_ITEM_VIRIMANTE_GYM
# 196 "data/maps/Virimante_Gym/scripts.pory"
	release
	end


# 19 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_GruntM_Movement_0:
# 19 "data/maps/Virimante_Gym/scripts.pory"
	face_up
# 19 "data/maps/Virimante_Gym/scripts.pory"
	delay_16
# 19 "data/maps/Virimante_Gym/scripts.pory"
	delay_16
# 19 "data/maps/Virimante_Gym/scripts.pory"
	delay_16
# 19 "data/maps/Virimante_Gym/scripts.pory"
	delay_16
# 19 "data/maps/Virimante_Gym/scripts.pory"
	face_player
	step_end

# 30 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_DoorBlocked_Movement_0:
# 30 "data/maps/Virimante_Gym/scripts.pory"
	face_up
	step_end

# 34 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_DoorBlocked_Movement_1:
# 34 "data/maps/Virimante_Gym/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_AfterFight_Movement_0:
# 161 "data/maps/Virimante_Gym/scripts.pory"
	walk_left
# 161 "data/maps/Virimante_Gym/scripts.pory"
	face_right
	step_end

# 162 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_AfterFight_Movement_1:
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 162 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
	step_end

# 177 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_AfterFight_Movement_2:
# 177 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 177 "data/maps/Virimante_Gym/scripts.pory"
	face_left
	step_end

# 178 "data/maps/Virimante_Gym/scripts.pory"
Virimante_Gym_AfterFight_Movement_3:
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_up
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
# 178 "data/maps/Virimante_Gym/scripts.pory"
	walk_right
	step_end

Virimante_Gym_GruntM_Text_0:
# 10 "data/maps/Virimante_Gym/scripts.pory"
	.string "K.A.M. just stormed out of the room.\n"
	.string "What happened?$"

Virimante_Gym_GruntM_Text_1:
# 17 "data/maps/Virimante_Gym/scripts.pory"
	.string "I'm on guarding duty while K.A.M. fights\n"
	.string "that Gym leader from Frux or wherever\l"
	.string "he's from...$"

Virimante_Gym_GruntM_Text_2:
# 22 "data/maps/Virimante_Gym/scripts.pory"
	.string "...And dude, that old man is getting\n"
	.string "railed. I've never seen anything like\l"
	.string "that.$"

Virimante_Gym_DoorBlocked_Text_0:
# 32 "data/maps/Virimante_Gym/scripts.pory"
	.string "Some rumbling noises can be heard from\n"
	.string "the other side... But the door is locked.$"

Virimante_Gym_Grunt1_Text_0:
# 44 "data/maps/Virimante_Gym/scripts.pory"
	.string "K.A.M. could've at least turned the\n"
	.string "heating on. It's freezing!$"

Virimante_Gym_Grunt2_Text_0:
# 61 "data/maps/Virimante_Gym/scripts.pory"
	.string "Standing up without moving for 8 hours\n"
	.string "a day isn't great for my knees. But at\l"
	.string "least, the pay is good.$"

Virimante_Gym_Grunt3_Text_0:
# 78 "data/maps/Virimante_Gym/scripts.pory"
	.string "Not much usually happens around here...\n"
	.string "Until you came in. So thanks for the\l"
	.string "entertainment, I guess...$"

Virimante_Gym_Grunt4_Text_0:
# 95 "data/maps/Virimante_Gym/scripts.pory"
	.string "Think that the others are bored? Think\n"
	.string "again. No one comes through me. You're\l"
	.string "the first person I spoke to in a week.$"

Virimante_Gym_Grunt5_Text_0:
# 112 "data/maps/Virimante_Gym/scripts.pory"
	.string "You deserve to go and talk to K.A.M. I\n"
	.string "hope you're ready.$"

Virimante_Gym_AfterFight_Text_0:
# 147 "data/maps/Virimante_Gym/scripts.pory"
	.string "Barbara$"

Virimante_Gym_AfterFight_Text_1:
# 148 "data/maps/Virimante_Gym/scripts.pory"
	.string "...I don't understand. Beaten not once,\n"
	.string "not twice, but thrice? By a mere kid?$"

Virimante_Gym_AfterFight_Text_2:
# 155 "data/maps/Virimante_Gym/scripts.pory"
	.string "...You know what, Maurice? I quit. Ciao.$"

Virimante_Gym_AfterFight_Text_3:
# 171 "data/maps/Virimante_Gym/scripts.pory"
	.string "Maurice$"

Virimante_Gym_AfterFight_Text_4:
# 172 "data/maps/Virimante_Gym/scripts.pory"
	.string "Barbara! Wait!$"

VGrunt11::
# 49 "data/maps/Virimante_Gym/scripts.pory"
	.string "Hey! This is a private area, leave\n"
	.string "immediately!$"

VGrunt12::
# 53 "data/maps/Virimante_Gym/scripts.pory"
	.string "Okay, you can hang around, I guess...$"

VGrunt21::
# 66 "data/maps/Virimante_Gym/scripts.pory"
	.string "Delivered to me, like the snack I'm\n"
	.string "gonna devour. Hahaha!$"

VGrunt22::
# 70 "data/maps/Virimante_Gym/scripts.pory"
	.string "Huh? Since when snacks got attitude?$"

VGrunt31::
# 83 "data/maps/Virimante_Gym/scripts.pory"
	.string "Tired yet?$"

VGrunt32::
# 87 "data/maps/Virimante_Gym/scripts.pory"
	.string "Nope! Still in great shape!$"

VGrunt41::
# 100 "data/maps/Virimante_Gym/scripts.pory"
	.string "Oh! You took the wrong turn? Bad luck!$"

VGrunt42::
# 104 "data/maps/Virimante_Gym/scripts.pory"
	.string "I've had my share of bad luck too...$"

VGrunt51::
# 117 "data/maps/Virimante_Gym/scripts.pory"
	.string "Don't worry, I'm the last one. I'll make\n"
	.string "it as quick as possible.$"

VGrunt52::
# 121 "data/maps/Virimante_Gym/scripts.pory"
	.string "It did go quick! Wow!$"

VGAdmin1::
# 131 "data/maps/Virimante_Gym/scripts.pory"
	.string "You again... This time, we're facing you\n"
	.string "both at the same time. 2v1. Screw the\l"
	.string "rules. Bring it on!$"

VGAdmin2::
# 135 "data/maps/Virimante_Gym/scripts.pory"
	.string "Incomprehensible...$"

VGAdmin3::
# 139 "data/maps/Virimante_Gym/scripts.pory"
	.string "Come on... You've only got one Pokémon.\n"
	.string "Have a bit of self-esteem.$"
