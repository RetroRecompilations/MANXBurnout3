#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5880
 * Original: 0x001B5880 - 0x001B58D9 (89 bytes, 23 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5880(void)
{
    /* The original keeps its x87 value live across __ftol2.  Generated
     * functions each have a private synthetic x87 stack, so that value was
     * lost at the call boundary and the timer period became zero.  Express
     * the same calculation natively: the Xbox performance-counter frequency
     * multiplied by each millisecond argument and the retail 0.001 scale. */
    const uint32_t entry_esp = esp;
    const uint64_t frequency = 0x2BB5C755ull;
    const double ms_to_seconds = (double)MEMF(0x3B16D0);
    const double period_ms = (double)MEMF(entry_esp + 4);
    const double origin_ms = (double)MEMF(entry_esp + 8);
    const int64_t period = (int64_t)((double)frequency * period_ms *
                                     ms_to_seconds);
    const int64_t origin = (int64_t)((double)frequency * origin_ms *
                                     ms_to_seconds);

    MEM32(esi + 0x20) = (uint32_t)period;
    MEM32(esi + 0x24) = (uint32_t)((uint64_t)period >> 32);
    MEM32(esi + 0x18) = (uint32_t)origin;
    MEM32(esi + 0x1C) = (uint32_t)((uint64_t)origin >> 32);
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    MEM32(esi + 0x30) = 0;
    eax = (uint32_t)origin;
    edx = (uint32_t)((uint64_t)origin >> 32);
    esp = entry_esp + 12; /* dummy return plus two stdcall arguments */
    return;
}
