#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C63A0
 * Original: 0x001C63A0 - 0x001C64F2 (338 bytes, 86 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C63A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001C63A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    ecx = MEM32(esi + 0xC);
    if (CMP_EQ(ecx, eax)) goto loc_001C64EB; /* je: equal / zero */

loc_001C63B1:
    if (TEST_Z(ecx, ecx)) goto loc_001C64BF; /* je: equal / zero */

loc_001C63B9:
    eax = ecx;
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    eax = MEM32(ebp + -24);
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -20);
    xmm0.f[0] = MEMF(ecx + 0x20); /* movss */
    MEM32(ebp + -32) = eax;
    xmm1.f[0] = MEMF(ebp + -32); /* movss */
    MEM32(ebp + -28) = edx;
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -8); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + -4) ? xmm0.f[0] : MEMF(ebp + -4)); /* minss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(ebp + -28); /* movss */
    xmm0.f[0] = MEMF(ecx + 0x24); /* movss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -4); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + -8) ? xmm0.f[0] : MEMF(ebp + -8)); /* minss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -12); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = MEMF(ebp + -20); /* movss */
    MEM32(ebp + -40) = eax;
    eax = MEM32(esi + 0xC);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -28);
    xmm0.f[0] = MEMF(eax + 0x20); /* movss */
    eax = eax + 0x20;
    MEM32(ebp + -36) = ecx;
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -12); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + -20) ? xmm0.f[0] : MEMF(ebp + -20)); /* maxss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(ebp + -20) = xmm2.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -12); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + -20) ? xmm0.f[0] : MEMF(ebp + -20)); /* maxss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -8); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -4); /* movss */
    edx = MEM32(ebp + -32);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -20) = eax;
    eax = ebp + -24;
    ecx = ebp + -40;
    MEM32(ebp + -24) = edx;
    PUSH32(esp, 0); sub_001C8510(); /* call 0x001C8510 */

loc_001C64B8:
    eax = MEM32(esi + 0xC);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C64BF:
    eax = MEM32(0x4A1B60);
    if (TEST_Z(eax, eax)) goto loc_001C64EB; /* je: equal / zero */

loc_001C64C8:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C64D6; /* jbe: below or equal (unsigned <=) */

loc_001C64D1:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C64D6:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034E1B0(); /* call 0x0034E1B0 */

loc_001C64E1:
    MEM32(0x4A1B60) = 0;

loc_001C64EB:
    eax = MEM32(esi + 0xC);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
