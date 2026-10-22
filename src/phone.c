#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "pokedex.h"
#include "title_screen.h"
#include "main_menu.h"
#include "option_menu.h"
#include "mystery_event_menu.h"
#include "mystery_gift_menu.h"
#include "link.h"
#include "phone.h"
#include "pokedex_plus_hgss.h"
#include "rtc.h"
#include "fake_rtc.h"
#include "config/overworld.h"
#include "pokenav.h"
#include "pokemon_storage_system.h"
#include "constants/flags.h"
#include "quests.h"
#include "constants/map_types.h"

struct PhoneMenuResources
{
    MainCallback savedCallback;
    u32 gfxLoadState;
    void (*loopTask)(u32);
    u32 (*isLoopTaskActiveFunc)(void);
    u32 currentTaskId;
    u32 helpBarWindowId;
    u32 palettes;
    struct Sprite *leftHeaderSprites[2];
    struct Sprite *submenuLeftHeaderSprites[2];
    ALIGNED(4) u8 tilemapBuffer[BG_SCREEN_SIZE];
    ALIGNED(4) u8 leftHeaderMenuBuffer[0x1000];
    ALIGNED(4) u8 leftHeaderSubMenuBuffer[0x1000];
};

enum {
    PHONE_DEX,
    PHONE_PC,
    PHONE_QUEST,
    PHONE_TAXI,
};

enum {
    WIN_PHONE
};

#define WINDOW_OPTIONS 0
#define NUM_CITY_MAPS 14

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

struct HighlightWindowCoords {
    u8 left;
    u8 right;
};

struct HWWindowPosition {
    struct HighlightWindowCoords winh;
    struct HighlightWindowCoords winv;
};

struct Pokenav_RegionMapMenu
{
    u8 unused[12];
    bool32 zoomDisabled;
    u32 (*callback)(struct Pokenav_RegionMapMenu *);
};

struct Pokenav_RegionMapGfx
{
    bool32 (*isTaskActiveCB)(void);
    u32 loopTaskId;
    u16 infoWindowId;
    struct Sprite *cityZoomTextSprites[3];
    u8 ALIGNED(2) tilemapBuffer[BG_SCREEN_SIZE];
    u8 cityZoomPics[NUM_CITY_MAPS][200];
};

struct CityMapEntry
{
    u16 mapSecId;
    u16 index;
    const u32 *tilemap;
};

static const struct HWWindowPosition HWinCoords[4] = 
{
    [PHONE_DEX]       = {{62, 178},     {43, 61},},
    [PHONE_PC]        = {{62, 178},     {67, 85},},
    [PHONE_QUEST]     = {{62, 178},    {91, 109},},
    [PHONE_TAXI]      = {{62, 178},   {115, 133},},
};

// -------------- Graphics ----------------- //

static const u32 sMainBgTiles[] = INCBIN_U32("graphics/phone/main_tiles.4bpp.lz");
static const u32 sMainBgTilemap[] = INCBIN_U32("graphics/phone/main_tiles.bin.lz");
static const u16 sMainBgPalette[] = INCBIN_U16("graphics/phone/main_tiles.gbapal");

static const u32 sScrollBgTiles[] = INCBIN_U32("graphics/phone/scroll_tiles.4bpp.lz");
static const u32 sScrollBgTilemap[] = INCBIN_U32("graphics/phone/scroll_tiles.bin.lz");
static const u16 sScrollBgPalette[] = INCBIN_U16("graphics/phone/scroll_tiles.gbapal");

// -------------- Days of the week ----------------- //

static const u8 sText_Sunday[] = _("Sun.");
static const u8 sText_Monday[] = _("Mon.");
static const u8 sText_Tuesday[] = _("Tue.");
static const u8 sText_Wednesday[] = _("Wed.");
static const u8 sText_Thursday[] = _("Thu.");
static const u8 sText_Friday[] = _("Fri.");
static const u8 sText_Saturday[] = _("Sat.");
static const u8 * const sDayOfWeekStrings[7] =
{
    sText_Sunday,
    sText_Monday,
    sText_Tuesday,
    sText_Wednesday,
    sText_Thursday,
    sText_Friday,
    sText_Saturday,
};

// -------------- Background and Window Data -------------- //

static const struct BgTemplate sPhoneMenuBgTemplates[] =
{
    {
        .bg = 0,                // Text Background
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    }, 
    {
        .bg = 1,                // Main Background
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = 2,                // Scroll Background
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .priority = 2
    }
};

static const struct WindowTemplate sPhoneMenuWindowTemplates[] =
{
    [WIN_PHONE] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 12,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};
// -------------- EWRAM ---------------------- //

static EWRAM_DATA struct PhoneMenuResources *sPhoneMenuDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;
static EWRAM_DATA u8 sSelectedOption = {0};

// -------------- Static defines ------------- //

static void PhoneMenu_RunSetup(void);
static bool8 PhoneMenu_DoGfxSetup(void);
static bool8 PhoneMenu_InitBgs(void);
static bool8 PhoneMenu_LoadGraphics(void);
static void PhoneMenu_InitWindows(void);
static void PhoneMenu_FreeResources(void);
static void Task_PhoneMenuWaitFadeIn(u8 taskId);
static void Task_PhoneMenuMain(u8 taskId);
static void Task_PhoneMenuTurnOff(u8 taskId);
static void PhoneMenu_InitializeGPUWindows(void);
static void PrintPhoneTimer(void);
static void PhoneMenu_OpenPC(void);

static const u8 sPhoneTimerTextColors[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};
static const u8 sText_PhoneTimeFormat[] = _("{STR_VAR_1} {STR_VAR_2}:{STR_VAR_3}");

// -------------- FUN-ctions :) -------------- //

void PhoneMenu_OpenPC(void)
{
    ScriptContext_SetupScript(EventScript_PC);
}

void Task_OpenPhoneMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {   
        CleanupOverworldWindowsAndTilemaps();
        PhoneMenu_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

void Phone_AllocAndLoadPalettes(const struct SpritePalette *palettes)
{
    const struct SpritePalette *current;
    u32 index;

    for (current = palettes; current->data != NULL; current++)
    {
        index = AllocSpritePalette(current->tag);
        if (index == 0xFF)
        {
            break;
        }
        else
        {
            index = OBJ_PLTT_ID(index);
            CopyPaletteIntoBufferUnfaded(current->data, index, PLTT_SIZE_4BPP);
        }
    }
}

void PhoneMenu_Init(MainCallback callback)
{
    if ((sPhoneMenuDataPtr = AllocZeroed(sizeof(struct PhoneMenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sPhoneMenuDataPtr->gfxLoadState = 0;
    sPhoneMenuDataPtr->savedCallback = callback;
    sSelectedOption = 0;
    gMain.state = 0;
    FlagSet(FLAG_USING_PHONE);
    SetMainCallback2(PhoneMenu_RunSetup);
}

static void PhoneMenu_RunSetup(void)
{
    while (1)
    {
        if (PhoneMenu_DoGfxSetup() == TRUE)
            break;
    }
}

static void PhoneMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(2, 128, BG_COORD_SUB);
}

static void PhoneMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void PhoneMenu_InitWindows(void)
{
    InitWindows(sPhoneMenuWindowTemplates);
    PutWindowTilemap(WIN_PHONE);
    ScheduleBgCopyTilemapToVram(0);
}

static void PrintPhoneTimer(void)
{
    struct SiiRtcInfo *rtc = FakeRtc_GetCurrentTime();
    StringExpandPlaceholders(gStringVar1, sDayOfWeekStrings[rtc->dayOfWeek]);
    ConvertIntToDecimalStringN(gStringVar2, rtc->hour, STR_CONV_MODE_LEFT_ALIGN, 3);
    ConvertIntToDecimalStringN(gStringVar3, rtc->minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringExpandPlaceholders(gStringVar4, sText_PhoneTimeFormat);

    FillWindowPixelBuffer(WIN_PHONE, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    AddTextPrinterParameterized3(WIN_PHONE, FONT_SMALL, 173, 11, sPhoneTimerTextColors, TEXT_SKIP_DRAW, gStringVar4);
    PutWindowTilemap(WIN_PHONE);
    CopyWindowToVram(WIN_PHONE, COPYWIN_GFX);
}

static bool8 PhoneMenu_DoGfxSetup(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        DmaClear16(3, (void *)PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        PhoneMenu_InitializeGPUWindows();
        gMain.state++;
        break;
    case 2:
        if (PhoneMenu_InitBgs())
        {
            sPhoneMenuDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            SetMainCallback2(sPhoneMenuDataPtr->savedCallback);
            PhoneMenu_FreeResources();
            return TRUE;
        }
        break;
    case 3:
        if (PhoneMenu_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        LoadMessageBoxAndBorderGfx();
        LoadPalette(GetTextWindowPalette(0), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        PhoneMenu_InitWindows();
        gMain.state++;
        break;
    case 5:
        PrintPhoneTimer();
        CreateTask(Task_PhoneMenuWaitFadeIn, 0);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(PhoneMenu_VBlankCB);
        SetMainCallback2(PhoneMenu_MainCB);
        return TRUE;
    }
    return FALSE;
}

static bool8 PhoneMenu_InitBgs(void)
{
    ResetAllBgsCoordinates();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sPhoneMenuBgTemplates, NELEMS(sPhoneMenuBgTemplates));
 
    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;
    memset(sBg1TilemapBuffer, 0, 0x800);
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
 
    sBg2TilemapBuffer = Alloc(0x800);
    if (sBg2TilemapBuffer == NULL)
        return FALSE;
    memset(sBg2TilemapBuffer, 0, 0x800);
    SetBgTilemapBuffer(2, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(2);
 
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);

    PlaySE(SE_POKENAV_ON);
    return TRUE;
}

static bool8 PhoneMenu_LoadGraphics(void)
{
    switch (sPhoneMenuDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sMainBgTiles, 0, 0, 0);
        sPhoneMenuDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sMainBgTilemap, sBg1TilemapBuffer);
            sPhoneMenuDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(2, sScrollBgTiles, 0, 0, 0);
        sPhoneMenuDataPtr->gfxLoadState++;
        break;
    case 3:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sScrollBgTilemap, sBg2TilemapBuffer);
            sPhoneMenuDataPtr->gfxLoadState++;
        }
        break;
    case 4:
        LoadPalette(sMainBgPalette, 0, 32);
        LoadPalette(sScrollBgPalette, 16, 32);
        sPhoneMenuDataPtr->gfxLoadState++;
        break;
    default:
        sPhoneMenuDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void PhoneMenu_InitializeGPUWindows(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN1_ON | DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP); // Turn on Windows 0 and 1 and Enable Sprites
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(HWinCoords[sSelectedOption].winh.left, HWinCoords[sSelectedOption].winh.right));  // Set Window 0 width/height Which defines the not darkened space
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(HWinCoords[sSelectedOption].winv.left, HWinCoords[sSelectedOption].winv.right));
    SetGpuReg(REG_OFFSET_WININ, (WININ_WIN1_BG0 | WININ_WIN1_BG2) | (WININ_WIN0_BG_ALL | WININ_WIN0_OBJ)); // Set Win 0 Active everywhere, Win 1 active on everything except bg 1 
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_ALL);                                                                     // where the main tiles are so the window hides whats behind it
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_OBJ);   // Set Darken Effect on things not in the window on bg 0, 1, and sprite layer
    SetGpuReg(REG_OFFSET_BLDY, 4);  // Set Level of Darken effect, can be changed 0-16
}

static void MoveHWindowsWithInput(void) // Update GPU windows after selection is changed
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(HWinCoords[sSelectedOption].winh.left, HWinCoords[sSelectedOption].winh.right));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(HWinCoords[sSelectedOption].winv.left, HWinCoords[sSelectedOption].winv.right));
}

static void Task_PhoneMenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_PhoneMenuMain;
}

// -------------- Callbacks ------------------ //

void CB2_OpenPC(void)
{
    gFieldCallback = PhoneMenu_OpenPC;
    SetMainCallback2(CB2_ReturnToField);
}

void CB2_OpenQuest(void)
{
    QuestMenu_Init(0, CB2_InitPhone);
}

// ------------------------------------------- //

static void Task_PhoneMenuMain(u8 taskId)
{

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        switch (sSelectedOption)
        {
            case PHONE_DEX:  
                sPhoneMenuDataPtr->savedCallback = CB2_OpenPokedexPlusHGSS; 
                break;
            case PHONE_PC:   
                sPhoneMenuDataPtr->savedCallback = CB2_OpenPC; 
                break;
            case PHONE_QUEST:  
                sPhoneMenuDataPtr->savedCallback = CB2_OpenQuest; 
                break;
            case PHONE_TAXI:
                switch (gMapHeader.mapType)
                {
                case MAP_TYPE_INDOOR:
                case MAP_TYPE_UNDERGROUND:
                case MAP_TYPE_UNDERWATER:
                    PlaySE(SE_RG_HELP_ERROR);
                    sPhoneMenuDataPtr->savedCallback = CB2_InitPhone;
                    break;
                
                default:
                    if(FlagGet(FLAG_CANT_FLY)) {
                        PlaySE(SE_RG_HELP_ERROR);
                        sPhoneMenuDataPtr->savedCallback = CB2_InitPhone;
                        break;
                    }
                    else {
                        sPhoneMenuDataPtr->savedCallback = CB2_OpenFlyMap;
                        break;
                    };
                    break;
                }
        }
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PhoneMenuTurnOff;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_POKENAV_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, -1, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PhoneMenuTurnOff;
    }
    
    if (JOY_NEW(DPAD_DOWN))
        sSelectedOption = (sSelectedOption + 1) % 4;
        MoveHWindowsWithInput();
    if (JOY_NEW(DPAD_UP))
        sSelectedOption = (sSelectedOption + 3) % 4; // -1 with wraparound
        MoveHWindowsWithInput();
}

static void Task_PhoneMenuTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FlagClear(FLAG_USING_PHONE);
        SetMainCallback2(sPhoneMenuDataPtr->savedCallback);
        PhoneMenu_FreeResources();
        DestroyTask(taskId);
    }
}

static void PhoneMenu_FreeResources(void)
{
    try_free(sPhoneMenuDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(sBg2TilemapBuffer);
    FreeAllWindowBuffers();
    DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
}

void CB2_InitPhone(void)
{
    PhoneMenu_Init(CB2_ReturnToFieldWithOpenMenu);
}

u16 DebugCountTasks(void)
{
    u32 i, n = 0;
    for (i = 0; i < NUM_TASKS; i++)
        if (gTasks[i].isActive)
            n++;
    return n;
}