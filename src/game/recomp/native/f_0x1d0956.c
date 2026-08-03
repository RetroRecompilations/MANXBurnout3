#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0956
 * Original: 0x001D0956 - 0x001D09D6 (128 bytes, 49 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0956(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D0956:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80100000u);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001D0E3C(); /* call 0x001D0E3C */

loc_001D0977:
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_001D09C7; /* je: equal / zero */

loc_001D097E:
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D068A(); /* call 0x001D068A */

loc_001D0986:
    if (TEST_Z(eax, eax)) goto loc_001D09BA; /* je: equal / zero */

loc_001D098A:
    PUSH32(esp, 0x80);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36BC80);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D06D2(); /* call 0x001D06D2 */

loc_001D09A1:
    if (TEST_Z(eax, eax)) goto loc_001D09BA; /* je: equal / zero */

loc_001D09A5:
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244AF3(); /* call 0x00244AF3 */

loc_001D09B4:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_001D09BF; /* je: equal / zero */

loc_001D09BA:
    esi = 0x491;

loc_001D09BF:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001D09C5:
    goto loc_001D09CE;

loc_001D09C7:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001D09CC:
    esi = eax;

loc_001D09CE:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
