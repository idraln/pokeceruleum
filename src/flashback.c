#include "global.h"
#include "money.h"
#include "coins.h"
#include "item.h"
#include "event_data.h"
#include "pokemon.h"
#include "load_save.h"
#include "battle_pyramid_bag.h"
#include "battle_pyramid.h"

EWRAM_DATA static struct FlashbackBackup sFlashbackBackup = {0};
EWRAM_DATA static bool8 sFlashbackActive = FALSE;

void BackupPlayerState(void)
{
    struct FlashbackBackup *b = &sFlashbackBackup;
    sFlashbackActive = TRUE;

    memcpy(sFlashbackBackup.party, gPlayerParty, sizeof(gPlayerParty));
    sFlashbackBackup.partyCount = gPlayerPartyCount;

    sFlashbackBackup.money = GetMoney(&gSaveBlock1Ptr->money);
    sFlashbackBackup.coins = GetCoins();

    sFlashbackBackup.badges = 0;
    if (FlagGet(FLAG_BADGE01_GET)) b->badges |= (1 << 0);
    if (FlagGet(FLAG_BADGE02_GET)) b->badges |= (1 << 1);
    if (FlagGet(FLAG_BADGE03_GET)) b->badges |= (1 << 2);
    if (FlagGet(FLAG_BADGE04_GET)) b->badges |= (1 << 3);
    if (FlagGet(FLAG_BADGE05_GET)) b->badges |= (1 << 4);
    if (FlagGet(FLAG_BADGE06_GET)) b->badges |= (1 << 5);
    if (FlagGet(FLAG_BADGE07_GET)) b->badges |= (1 << 6);
    if (FlagGet(FLAG_BADGE08_GET)) b->badges |= (1 << 7);
}

void InitFlashbackState(void)
{
    ZeroPlayerPartyMons();
    gPlayerPartyCount = 0;
    u8 i;

    SetMoney(&gSaveBlock1Ptr->money, 3000);
    SetCoins(0);

    FlagSet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG);
    
    for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
    {
        gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode][i] = ITEM_NONE;
        gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode][i] = 0;
    }

    FlagClear(FLAG_BADGE01_GET);
    FlagClear(FLAG_BADGE02_GET);
    FlagClear(FLAG_BADGE03_GET);
    FlagClear(FLAG_BADGE04_GET);
    FlagClear(FLAG_BADGE05_GET);
    FlagClear(FLAG_BADGE06_GET);
    FlagClear(FLAG_BADGE07_GET);
    FlagClear(FLAG_BADGE08_GET);
}

void RestorePlayerState(void)
{
    struct FlashbackBackup *b = &sFlashbackBackup;

    if (!sFlashbackActive)
        return;

    memcpy(gPlayerParty, sFlashbackBackup.party, sizeof(gPlayerParty));
    gPlayerPartyCount = sFlashbackBackup.partyCount;
    
    SetMoney(&gSaveBlock1Ptr->money, b->money);
    SetCoins(b->coins);

    FlagClear(FLAG_STORING_ITEMS_IN_PYRAMID_BAG);

    if (b->badges & (1 << 0)) FlagSet(FLAG_BADGE01_GET); else FlagClear(FLAG_BADGE01_GET);
    if (b->badges & (1 << 1)) FlagSet(FLAG_BADGE02_GET); else FlagClear(FLAG_BADGE02_GET);
    if (b->badges & (1 << 2)) FlagSet(FLAG_BADGE03_GET); else FlagClear(FLAG_BADGE03_GET);
    if (b->badges & (1 << 3)) FlagSet(FLAG_BADGE04_GET); else FlagClear(FLAG_BADGE04_GET);
    if (b->badges & (1 << 4)) FlagSet(FLAG_BADGE05_GET); else FlagClear(FLAG_BADGE05_GET);
    if (b->badges & (1 << 5)) FlagSet(FLAG_BADGE06_GET); else FlagClear(FLAG_BADGE06_GET);
    if (b->badges & (1 << 6)) FlagSet(FLAG_BADGE07_GET); else FlagClear(FLAG_BADGE07_GET);
    if (b->badges & (1 << 7)) FlagSet(FLAG_BADGE08_GET); else FlagClear(FLAG_BADGE08_GET);

    sFlashbackActive = FALSE;
}


void SetLastEggOneStep(void)
{
    u8 friendship = 0;

    if (gPlayerPartyCount == 0)
        return;

    SetMonData(&gPlayerParty[gPlayerPartyCount - 1], MON_DATA_FRIENDSHIP, &friendship);
}