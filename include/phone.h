#include "bg.h"
#include "main.h"
#include "pokemon_storage_system.h"

#ifndef PHONE_H
#define PHONE_H

void CopyPaletteIntoBufferUnfaded(const u16 *palette, u32 bufferOffset, u32 size);
void PhoneMenu_Init(MainCallback callback);
void CB2_InitPhone(void);
void CB2_OpenMap(void);
void CB2_OpenPC(void);

#endif