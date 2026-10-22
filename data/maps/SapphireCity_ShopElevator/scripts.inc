# 1 "data/maps/SapphireCity_ShopElevator/scripts.pory"

# 2 "data/maps/SapphireCity_ShopElevator/scripts.pory"
SapphireCity_ShopElevator_MapScripts::
# 3 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	.byte 0

SapphireCity_ShopElevator_Employee::
# 7 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	lock
# 8 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	faceplayer
# 9 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 10 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, SapphireCity_ShopElevator_SetFloor
# 11 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 13 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	msgbox SapphireCity_ShopElevator_Employee_Text_0
# 14 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	waitmessage
# 15 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 16 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
# 17 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 0, SapphireCity_ShopElevator_Employee_3
# 19 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 1, SapphireCity_ShopElevator_Employee_4
# 20 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 2, SapphireCity_ShopElevator_Employee_5
SapphireCity_ShopElevator_Employee_1:
	end

SapphireCity_ShopElevator_Employee_3:
# 18 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_ChooseFloorFrom3rd
	goto SapphireCity_ShopElevator_Employee_1

SapphireCity_ShopElevator_Employee_4:
# 19 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_ChooseFloorFrom2nd
	goto SapphireCity_ShopElevator_Employee_1

SapphireCity_ShopElevator_Employee_5:
# 20 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_ChooseFloorFrom1st
	goto SapphireCity_ShopElevator_Employee_1


SapphireCity_ShopElevator_ChooseFloorFrom3rd::
# 26 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
# 27 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ChooseFloor
	end


SapphireCity_ShopElevator_ChooseFloorFrom2nd::
# 32 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
# 33 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ChooseFloor
	end


SapphireCity_ShopElevator_ChooseFloorFrom1st::
# 38 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
# 39 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ChooseFloor
	end


SapphireCity_ShopElevator_ChooseFloor::
# 44 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 0, SapphireCity_ShopElevator_ChooseFloor_2
# 46 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 1, SapphireCity_ShopElevator_ChooseFloor_3
# 47 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 2, SapphireCity_ShopElevator_ChooseFloor_4
# 48 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case 3, SapphireCity_ShopElevator_ChooseFloor_5
# 49 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	case MULTI_B_PRESSED, SapphireCity_ShopElevator_ChooseFloor_6
	return

SapphireCity_ShopElevator_ChooseFloor_2:
# 45 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_3rdFloor
	return

SapphireCity_ShopElevator_ChooseFloor_3:
# 46 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_2ndFloor
	return

SapphireCity_ShopElevator_ChooseFloor_4:
# 47 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_1stFloor
	return

SapphireCity_ShopElevator_ChooseFloor_5:
# 48 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_ExitFloorSelect
	return

SapphireCity_ShopElevator_ChooseFloor_6:
# 49 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_ExitFloorSelect
	return


SapphireCity_ShopElevator_1stFloor::
# 54 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
# 55 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setdynamicwarp MAP_SAPPHIRE_CITY_SHOP1F, 3, 4
# 56 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, SapphireCity_ShopElevator_ExitFloorSelect
# 57 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_MoveElevator
# 58 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
# 59 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ExitFloorSelect
	end


SapphireCity_ShopElevator_2ndFloor::
# 64 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
# 65 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setdynamicwarp MAP_SAPPHIRE_CITY_SHOP2F, 3, 4
# 66 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, SapphireCity_ShopElevator_ExitFloorSelect
# 67 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_MoveElevator
# 68 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
# 69 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ExitFloorSelect
	end


SapphireCity_ShopElevator_3rdFloor::
# 74 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
# 75 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setdynamicwarp MAP_SAPPHIRE_CITY_SHOP3F, 3, 1
# 76 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, SapphireCity_ShopElevator_ExitFloorSelect
# 77 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	call SapphireCity_ShopElevator_MoveElevator
# 78 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
# 79 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	goto SapphireCity_ShopElevator_ExitFloorSelect
	end


SapphireCity_ShopElevator_ExitFloorSelect::
# 84 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 85 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	release
	end


SapphireCity_ShopElevator_MoveElevator::
# 90 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 91 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	closemessage
# 92 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	waitmovement 0
# 94 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	waitse
# 95 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	special MoveElevator
# 96 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	waitstate
# 97 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	setflag FLAG_TEMP_2
	return


SapphireCity_ShopElevator_SetFloor::
# 102 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	special SetDeptStoreFloor
	return


SapphireCity_ShopElevator_Employee_Text_0:
# 13 "data/maps/SapphireCity_ShopElevator/scripts.pory"
	.string "Hey! Which floor do you want to go to?$"
