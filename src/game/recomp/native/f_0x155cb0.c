#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155CB0
 * Original: 0x00155CB0 - 0x00155D1A (106 bytes, 38 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155CB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155CB0:
    esp = esp - 0x4C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0275(); /* call 0x001D0275 */

loc_00155CC6:
    /* test ebp, ebp - flags set for next jcc */
    edi = eax;
    if (TEST_Z(ebp, ebp)) goto loc_00155CDE; /* je: equal / zero */

loc_00155CCC:
    /* nop */

loc_00155CD0:
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D0256(); /* call 0x001D0256 */

loc_00155CDB:
    ebp--;
    if ((ebp != 0)) goto loc_00155CD0; /* jne: not equal / not zero */

loc_00155CDE:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D0DE6(); /* call 0x001D0DE6 */

loc_00155CE4:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 8) = ecx;
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x4C) = 0;
    MEM8(esi + 0x54) = 0;
    edi = esi + 0xC;
    ecx = 0x10;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}
