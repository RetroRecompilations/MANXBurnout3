#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D9420
 * Original: 0x001D9420 - 0x001D9443 (35 bytes, 15 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9420(void)
{
    uint32_t entry_esp = esp;
    uint32_t caller_esi = esi;
    int _cf = 0; /* carry flag */

loc_001D9420:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DE7E0(); /* call 0x001DE7E0 */

loc_001D9438:
    esp = esp + 0xC;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    /* Plain cdecl `ret`: leave the three arguments for sub_00156400's
     * explicit `add esp, 0Ch`. A nested portable callback may already have
     * consumed them, so derive the result from the call boundary. */
    esi = caller_esi;
    esp = entry_esp + 4u;
    return; /* ret */

}
