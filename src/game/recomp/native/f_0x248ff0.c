#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00248FF0
 * Original: 0x00248FF0 - 0x0024903E (78 bytes, 40 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00248FF0:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, 0xFF);
    edi = edi;

loc_00249000:
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_00249036; /* je: equal / zero */

loc_00249004:
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    SET_HI8(eax, MEM8(edi));
    edi = edi + 1;
    if (CMP_EQ(HI8(eax), LO8(eax))) goto loc_00249000; /* je: equal / zero */

loc_00249012:
    SET_LO8(eax, LO8(eax) - 0x41);
    /* cmp LO8(eax), 0x1A - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    SET_LO8(eax, LO8(eax) + 0x41);
    { uint32_t _tmp = LO8(eax);
    SET_LO8(eax, HI8(eax));
    SET_HI8(eax, _tmp); }
    SET_LO8(eax, LO8(eax) - 0x41);
    /* cmp LO8(eax), 0x1A - flags set for next jcc */
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    SET_LO8(eax, LO8(eax) + 0x41);
    if (CMP_EQ(LO8(eax), HI8(eax))) goto loc_00249000; /* je: equal / zero */

loc_00249032:
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) - 0xFF - _cf); /* sbb */

loc_00249036:
    eax = SX8(LO8(eax));
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
