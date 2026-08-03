#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188F80
 * Original: 0x00188F80 - 0x0018903B (187 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00188F80:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2C;
    SET_LO8(ecx, MEM8(eax + 0x14C));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00189036; /* je: equal / zero */

loc_00188F98:
    SET_LO8(ecx, MEM8(eax + 0x13C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00189036; /* je: equal / zero */

loc_00188FA6:
    xmm0.f[0] = MEMF(eax + 0x70); /* movss */
    ecx = MEM32(eax + 0x130);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x74); /* movss */
    ecx = ecx << 6;
    ecx = ecx + eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0xE0); /* movss */
    ecx = ecx + 0xB0;
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x90);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x41A55C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x41400000);
    eax = esp + 0x28;
    edi = esp + 0x18;
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00032DC0(); /* call 0x00032DC0 */

loc_0018902E:
    esp = esp + 8;
    PUSH32(esp, 0); sub_00033F20(); /* call 0x00033F20 */

loc_00189036:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
