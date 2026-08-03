#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA820
 * Original: 0x001CA820 - 0x001CA99D (381 bytes, 133 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA820:
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x36EA4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001F8B10(); /* call 0x001F8B10 */

loc_001CA83C:
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F8580(); /* call 0x001F8580 */

loc_001CA845:
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x58);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    ebp = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx | 0x1400000;
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x50) = 0x3F7B90;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0); sub_0020B450(); /* call 0x0020B450 */

loc_001CA887:
    esp = esp + 0x1C;
    /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_001CA896; /* je: equal / zero */

loc_001CA892:
    PUSH32(esp, 6);
    goto loc_001CA898;

loc_001CA896:
    PUSH32(esp, 5);

loc_001CA898:
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001F6370(); /* call 0x001F6370 */

loc_001CA89F:
    esp = esp + 8;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8AE:
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8BA:
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8C8:
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8D6:
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8E4:
    esp = esp + 0x3C;
    /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(ebp, ebp)) goto loc_001CA8FF; /* je: equal / zero */

loc_001CA8EF:
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CA8F8:
    esp = esp + 0xC;
    MEM8(esp + 0x13) = LO8(eax);

loc_001CA8FF:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F5AA0(); /* call 0x001F5AA0 */

loc_001CA905:
    PUSH32(esp, 0x3F800000);
    esi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA913:
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA923:
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA933:
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA943:
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA953:
    esp = esp + 0x40;
    if (TEST_Z(ebp, ebp)) goto loc_001CA96B; /* je: equal / zero */

loc_001CA95A:
    edx = ZX8(MEM8(esp + 0x13));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CA968:
    esp = esp + 0xC;

loc_001CA96B:
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0020C2D0(); /* call 0x0020C2D0 */

loc_001CA976:
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(eax) = ebx;
    eax = MEM32(esp + 0x54);
    esp = esp + 8;
    MEM32(ecx) = esi;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
