#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002F380
 * Original: 0x0002F380 - 0x0002F473 (243 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F380:
    esp = esp - 0x14;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(edi + 0xD));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002F3C5; /* je: equal / zero */

loc_0002F3AD:
    xmm0.f[0] = MEMF(0x3B18EC); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    goto loc_0002F3DB;

loc_0002F3C5:
    xmm0.f[0] = MEMF(0x3B181C); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */

loc_0002F3DB:
    ecx = MEM32(edi + 0x370);
    edx = ebp + ebp * 4;
    edx = edx << 5;
    eax = esp + 0xC;
    esi = edx + edi;
    edx = MEM32(esi + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001DE810(); /* call 0x001DE810 */

loc_0002F403:
    eax = MEM32(edi + 0x374);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0002F425; /* je: equal / zero */

loc_0002F410:
    edx = MEM32(esi + 0xF4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DE810(); /* call 0x001DE810 */

loc_0002F422:
    esp = esp + 0xC;

loc_0002F425:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = ecx;
    edx = MEM32(edi + 0x390);
    eax = 0; /* xor self */
    /* test ebp, ebp - flags set for next jcc */
    MEM32(esi + 0x110) = edx;
    SET_LO8(eax, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x50) = eax;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}
