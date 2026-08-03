#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00110280
 * Original: 0x00110280 - 0x00110419 (409 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110280:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 0x1CB80;
    edi = 2;

loc_00110293:
    eax = esi;
    PUSH32(esp, 0); sub_00117730(); /* call 0x00117730 */

loc_0011029A:
    esi = esi + 0x4AD0;
    edi--;
    if ((edi != 0)) goto loc_00110293; /* jne: not equal / not zero */

loc_001102A3:
    edi = ebp + 0x2728A;
    MEM32(esp + 0x14) = 5;
    ebx = 0; /* xor self */

loc_001102B3:
    esi = edi + -4458;
    PUSH32(esp, 0); sub_00122500(); /* call 0x00122500 */

loc_001102BE:
    /* cmp MEM32(0x3EBDC0), 0xFFFFFFFFu - flags set for next jcc */
    MEM8(edi + -1) = 4;
    MEM8(edi) = 4;
    MEM32(edi + 0x28E) = ebx;
    MEM8(edi + -3925) = 2;
    if (CMP_NE(MEM32(0x3EBDC0), 0xFFFFFFFFu)) goto loc_001102E1; /* jne: not equal / not zero */

loc_001102DB:
    MEM32(0x3EBDC0) = ebx;

loc_001102E1:
    if (CMP_NE(MEM8(0x4A1D8C), LO8(ebx))) goto loc_001102F0; /* jne: not equal / not zero */

loc_001102E9:
    MEM8(0x4A1D8C) = 1;

loc_001102F0:
    eax = MEM32(esp + 0x14);
    edi = edi + 0x1580;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001102B3; /* jne: not equal / not zero */

loc_00110301:
    edi = ebp + 0x2DE0A;
    MEM32(esp + 0x14) = 5;
    /* nop */

loc_00110310:
    esi = edi + -4458;
    PUSH32(esp, 0); sub_00122500(); /* call 0x00122500 */

loc_0011031B:
    eax = MEM32(esp + 0x14);
    MEM8(edi + -1) = 4;
    MEM8(edi) = 4;
    MEM32(edi + 0x28E) = ebx;
    MEM8(edi + -3925) = 3;
    edi = edi + 0x1560;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00110310; /* jne: not equal / not zero */

loc_00110340:
    esi = ebp + 0x33780;
    edi = 0x40;
    goto loc_00110350;

    /* nop */

loc_00110350:
    PUSH32(esp, 0); sub_00122500(); /* call 0x00122500 */

loc_00110355:
    MEM8(esi + 0x215) = 4;
    esi = esi + 0x2430;
    edi--;
    if ((edi != 0)) goto loc_00110350; /* jne: not equal / not zero */

loc_00110365:
    esi = ebp + 0xC4380;
    edi = 0x20;

loc_00110370:
    PUSH32(esp, 0); sub_00119F40(); /* call 0x00119F40 */

loc_00110375:
    esi = esi + 0x780;
    edi--;
    if ((edi != 0)) goto loc_00110370; /* jne: not equal / not zero */

loc_0011037E:
    esi = ebp + 0xD3380;
    edi = 0x40;
    /* nop */

loc_00110390:
    PUSH32(esp, 0); sub_001068A0(); /* call 0x001068A0 */

loc_00110395:
    esi = esi + 0x4E0;
    edi--;
    if ((edi != 0)) goto loc_00110390; /* jne: not equal / not zero */

loc_0011039E:
    eax = 0; /* xor self */
    edi = ebp + 0xE6B80;
    ecx = 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + 0x1CB70) = ebx;
    MEM32(ebp + 0x1CB74) = ebx;
    MEM32(ebp + 0xE9C90) = ebx;
    MEM32(ebp + 0xE6C80) = ebx;
    MEM32(ebp + 0xE6C84) = ebx;
    MEM32(ebp + 0xE6C88) = ebx;
    MEM32(ebp + 0xE6C8C) = ebx;
    MEM32(ebp + 0xE9C98) = ebx;
    MEM32(ebp + 0xE9C9C) = ebx;
    MEM32(ebp + 0xE9CA0) = ebx;
    MEM32(ebp + 0xE9CA4) = ebx;
    ecx = 0x479548;
    eax = 0x478A50;
    edx = 6;
    edi = edi;

loc_00110400:
    PUSH32(esp, 0); sub_00132950(); /* call 0x00132950 */

loc_00110405:
    MEM32(ecx + -24) = ebx;
    MEM32(ecx) = ebx;
    eax = eax + 0x1D0;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00110400; /* jne: not equal / not zero */

loc_00110415:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

}
