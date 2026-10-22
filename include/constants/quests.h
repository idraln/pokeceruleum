#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_FIND_XATU         0
#define QUEST_EMBLEMS           1
#define QUEST_HOME              2
#define QUEST_PRESIDENT         3
#define QUEST_LOST_KEY          4
#define QUEST_CASINO            5
#define QUEST_LOVE              6
#define QUEST_FISHING_ROD       7
#define QUEST_INTRUDER          8
#define QUEST_ASSIGNMENT        9
#define QUEST_SCARF            10
#define QUEST_FOSSIL           11
#define QUEST_LOST_BOYS        12
#define QUEST_EMPTY_HOUSE      13
#define QUEST_SHARDS           14
#define QUEST_RUBIES           15
#define QUEST_HERMIT           16
#define QUEST_FANDANGO         17
#define QUEST_SAM              18
#define QUEST_DUSK             19
#define QUEST_MOTHER           20
#define QUEST_LAPRAS           21
#define QUEST_TRIATHLON        22
#define QUEST_DISAPPEARANCE    23
#define QUEST_DIANCIE          24
#define QUEST_VIKKIE           25
#define QUEST_LAST_FIGHT       26
#define QUEST_POKEDEX          27
#define QUEST_TM               28
#define QUEST_100PERCENT       29
#define QUEST_COUNT            (QUEST_100PERCENT + 1)

#define SUB_QUEST_1          0
#define SUB_QUEST_2          1
#define SUB_QUEST_3          2
#define SUB_QUEST_4          3
#define SUB_QUEST_5          4
#define SUB_QUEST_6          5
#define SUB_QUEST_7          6
#define SUB_QUEST_8          7
#define SUB_QUEST_9          8
#define SUB_QUEST_10         9
#define SUB_QUEST_11        10
#define SUB_QUEST_12        11
#define SUB_QUEST_13        12
#define SUB_QUEST_14        13
#define SUB_QUEST_15        14
#define SUB_QUEST_16        15
#define SUB_QUEST_17        16
#define SUB_QUEST_18        17
#define SUB_QUEST_19        18
#define SUB_QUEST_20        19
#define SUB_QUEST_21        20
#define SUB_QUEST_22        21
#define SUB_QUEST_23        22
#define SUB_QUEST_24        23
#define SUB_QUEST_25        24
#define SUB_QUEST_26        25
#define SUB_QUEST_27        26
#define SUB_QUEST_28        27
#define SUB_QUEST_29        28
#define SUB_QUEST_30        29

#define QUEST_XATU_SUB_COUNT 10
#define QUEST_2_SUB_COUNT 20
#define SUB_QUEST_COUNT (QUEST_XATU_SUB_COUNT + QUEST_2_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H