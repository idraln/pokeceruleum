#include "global.h"
#include "main.h"
#include "overworld.h"
#include "strings.h"
#include "naming_screen.h"
#include "string_util.h"
#include "event_data.h"

void EnterHydropolisPokemon(void)
{
    DoNamingScreen(NAMING_SCREEN_CODE, gStringVar2, 0, 0, 0, CB2_ReturnToFieldContinueScript);
}

void GetPokemonFeedback(void)
{
    static const u8 sText_Tirtouga[] = _("Tirtouga");
    if (!StringCompare(gStringVar2, sText_Tirtouga))
        gSpecialVar_Result = 1;
    else
        gSpecialVar_Result = 0;
}