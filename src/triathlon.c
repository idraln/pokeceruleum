#include "global.h"
#include "debug.h"
#include "malloc.h"
#include "battle.h"
#include "battle_tower.h"
#include "cable_club.h"
#include "data.h"
#include "decoration.h"
#include "diploma.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_weather.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "link.h"
#include "load_save.h"
#include "list_menu.h"
#include "main.h"
#include "mystery_gift.h"
#include "match_call.h"
#include "menu.h"
#include "overworld.h"
#include "party_menu.h"
#include "pokeblock.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "rayquaza_scene.h"
#include "region_map.h"
#include "rtc.h"
#include "script.h"
#include "script_menu.h"
#include "sound.h"
#include "starter_choose.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "tilesets.h"
#include "tv.h"
#include "wallclock.h"
#include "window.h"
#include "constants/battle_frontier.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_tower.h"
#include "constants/decorations.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_specials.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/mystery_gift.h"
#include "constants/slot_machine.h"
#include "constants/songs.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/battle_frontier.h"
#include "constants/weather.h"
#include "constants/metatile_labels.h"
#include "constants/rgb.h"
#include "palette.h"
#include "battle_util.h"
#include "naming_screen.h"
#include "phone.h"
#include "fake_rtc.h"
#include "bike.h"

EWRAM_DATA bool8 gTriathlonChallenge = FALSE;
static EWRAM_DATA u32 sTriathlonStartSeconds = 0;
static EWRAM_DATA u32 sTriathlonFinalSeconds = 0;
static EWRAM_DATA bool8 sTriathlonDisplayActive = FALSE;
static EWRAM_DATA u8 sTriathlonTimerTaskId = 0;
static EWRAM_DATA u8 sTriathlonTimerWindowId = 0;
static EWRAM_DATA u32 sTriathlonStartFrame = 0;

static void Task_TriathlonTimerDisplay(u8 taskId);

static const struct WindowTemplate sTriathlonTimerWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 6,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x8,
};

static const u16 sTriathlonTrainers[] =
{
    TRAINER_TRIATHLON_1,
    TRAINER_TRIATHLON_2,
    TRAINER_TRIATHLON_3,
    TRAINER_TRIATHLON_4,
    TRAINER_NELLY,
    TRAINER_ROSE,
    TRAINER_ALFIE,
    TRAINER_TAKAO,
    TRAINER_FUMIKO,
};

static const u8 sTriathlonTimerTextColor[] = {TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};
static const u8 sText_TriathlonTimerFormat[] = _("{STR_VAR_1}:{STR_VAR_2}");

static u32 GetTriathlonElapsedSeconds(void)
{
    return (gMain.vblankCounter1 - sTriathlonStartFrame) / 60;
}

static bool8 IsTriathlonTimerTaskAlive(void)
{
    return sTriathlonDisplayActive
        && gTasks[sTriathlonTimerTaskId].isActive
        && gTasks[sTriathlonTimerTaskId].func == Task_TriathlonTimerDisplay;
}

bool8 IsTriathlonTimerDisplayActive(void)
{
    return IsTriathlonTimerTaskAlive();
}

void GetOnBikeOxideTrail(void)
{
    if (VarGet(VAR_TRIATHLON) == 1 || VarGet(VAR_TRIATHLON) == 2)
        GetOnOffBike(PLAYER_AVATAR_FLAG_ACRO_BIKE);
        return;
}

static void DestroyTriathlonTimerDisplay(void)
{
    if (IsTriathlonTimerTaskAlive())
    {
        DestroyTask(sTriathlonTimerTaskId);
        ClearStdWindowAndFrame(sTriathlonTimerWindowId, TRUE);
        RemoveWindow(sTriathlonTimerWindowId);
    }
    sTriathlonDisplayActive = FALSE;
}

static void PrintTriathlonTimer(u32 elapsedSeconds)
{
    ConvertIntToDecimalStringN(gStringVar1, elapsedSeconds / 60, STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar2, elapsedSeconds % 60, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringExpandPlaceholders(gStringVar4, sText_TriathlonTimerFormat);

    FillWindowPixelBuffer(sTriathlonTimerWindowId, PIXEL_FILL(1));
    AddTextPrinterParameterized3(sTriathlonTimerWindowId, FONT_NORMAL, 8, 1, sTriathlonTimerTextColor, TEXT_SKIP_DRAW, gStringVar4);
    CopyWindowToVram(sTriathlonTimerWindowId, COPYWIN_FULL);
}

static void Task_TriathlonTimerDisplay(u8 taskId)
{
    if (++gTasks[taskId].data[0] >= 60)
    {
        gTasks[taskId].data[0] = 0;
        PrintTriathlonTimer(GetTriathlonElapsedSeconds());
    }
}

void CreateTriathlonTimerDisplay(void)
{
    if (IsTriathlonTimerTaskAlive())
        return;

    sTriathlonTimerWindowId = AddWindow(&sTriathlonTimerWindowTemplate);
    PutWindowTilemap(sTriathlonTimerWindowId);
    DrawStdWindowFrame(sTriathlonTimerWindowId, FALSE);
    PrintTriathlonTimer(GetTriathlonElapsedSeconds());

    sTriathlonTimerTaskId = CreateTask(Task_TriathlonTimerDisplay, 0);
    sTriathlonDisplayActive = TRUE;
}

void StartTriathlonTimer(void)
{
    sTriathlonStartFrame = gMain.vblankCounter1;
    gTriathlonChallenge = TRUE;
    FlagSet(FLAG_TRIATHLON);
    CreateTriathlonTimerDisplay();
}

void SuspendTriathlonTimerForBattle(void)
{
    if (FlagGet(FLAG_TRIATHLON))
        DestroyTriathlonTimerDisplay();
}

void ResumeTriathlonTimer(void)
{
    if (FlagGet(FLAG_TRIATHLON))
        CreateTriathlonTimerDisplay();
}

void StopTriathlonTimer(void)
{
    sTriathlonFinalSeconds = GetTriathlonElapsedSeconds();
    DestroyTriathlonTimerDisplay();
    gTriathlonChallenge = FALSE;
    FlagClear(FLAG_TRIATHLON);

    VarSet(VAR_TRIATHLON_TIME, sTriathlonFinalSeconds);
    VarSet(VAR_TRIATHLON_MINUTES, sTriathlonFinalSeconds / 60);
    VarSet(VAR_TRIATHLON_SECONDS, sTriathlonFinalSeconds % 60);
}

void AbortTriathlon(void)
{
    u32 i;

    DestroyTriathlonTimerDisplay();
    gTriathlonChallenge = FALSE;
    FlagClear(FLAG_TRIATHLON);
    FlagClear(FLAG_HIDE_NPC_TRIATHLON);
    FlagClear(FLAG_SCOTT_TRIATHLON);
    FlagClear(FLAG_CANT_FLY);
    FlagClear(FLAG_HIDE_MAP_NAME_POPUP);
    FlagSet(FLAG_TRAINERS_TRIATHLON);
    FlagSet(FLAG_TRIATHLON_NPC);
    VarSet(VAR_TRIATHLON_TIME, 0);
    VarSet(VAR_TRIATHLON_MINUTES, 0);
    VarSet(VAR_TRIATHLON_SECONDS, 0);
    VarSet(VAR_TRIATHLON, 0);
    for (i = 0; i < ARRAY_COUNT(sTriathlonTrainers); i++)
        FlagClear(TRAINER_FLAGS_START + sTriathlonTrainers[i]);
}